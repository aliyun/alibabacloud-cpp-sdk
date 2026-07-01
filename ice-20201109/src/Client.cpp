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
    {"us-west-1" , "ice.aliyuncs.com"},
    {"cn-shanghai" , "ice.cn-shanghai.aliyuncs.com"}
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
 * @summary Activates a specified license using the batch ID, authorization code, and device SN.
 *
 * @description ## [](#)Usage notes
 * Activate a specific license for Real-time Conversational AI by providing a batch ID (`LicenseItemId`), authorization code (`AuthCode`), and device ID (`DeviceId`). Upon successful activation, the API returns a response containing the request ID, an error code, the request status, the HTTP status code, and the activated license information.
 * **Note**: Ensure that the provided batch ID, authorization code, and device ID are correct. Incorrect information may cause the activation to fail.
 *
 * @param request ActiveAiRtcLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveAiRtcLicenseResponse
 */
ActiveAiRtcLicenseResponse Client::activeAiRtcLicenseWithOptions(const ActiveAiRtcLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasLicenseItemId()) {
    query["LicenseItemId"] = request.getLicenseItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActiveAiRtcLicense"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveAiRtcLicenseResponse>();
}

/**
 * @summary Activates a specified license using the batch ID, authorization code, and device SN.
 *
 * @description ## [](#)Usage notes
 * Activate a specific license for Real-time Conversational AI by providing a batch ID (`LicenseItemId`), authorization code (`AuthCode`), and device ID (`DeviceId`). Upon successful activation, the API returns a response containing the request ID, an error code, the request status, the HTTP status code, and the activated license information.
 * **Note**: Ensure that the provided batch ID, authorization code, and device ID are correct. Incorrect information may cause the activation to fail.
 *
 * @param request ActiveAiRtcLicenseRequest
 * @return ActiveAiRtcLicenseResponse
 */
ActiveAiRtcLicenseResponse Client::activeAiRtcLicense(const ActiveAiRtcLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeAiRtcLicenseWithOptions(request, runtime);
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
    body["AdMarkerPassthrough"] = request.getAdMarkerPassthrough();
  }

  if (!!request.hasAdsUrl()) {
    body["AdsUrl"] = request.getAdsUrl();
  }

  if (!!request.hasCdnAdSegmentUrlPrefix()) {
    body["CdnAdSegmentUrlPrefix"] = request.getCdnAdSegmentUrlPrefix();
  }

  if (!!request.hasCdnContentSegmentUrlPrefix()) {
    body["CdnContentSegmentUrlPrefix"] = request.getCdnContentSegmentUrlPrefix();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigAliases()) {
    body["ConfigAliases"] = request.getConfigAliases();
  }

  if (!!request.hasContentUrlPrefix()) {
    body["ContentUrlPrefix"] = request.getContentUrlPrefix();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPersonalizationThreshold()) {
    body["PersonalizationThreshold"] = request.getPersonalizationThreshold();
  }

  if (!!request.hasSlateAdUrl()) {
    body["SlateAdUrl"] = request.getSlateAdUrl();
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
    query["MaterialMaps"] = request.getMaterialMaps();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Adds one or more public Media Assets to your Favorites list by their media IDs.
 *
 * @param request AddFavoritePublicMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFavoritePublicMediaResponse
 */
AddFavoritePublicMediaResponse Client::addFavoritePublicMediaWithOptions(const AddFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
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
 * @summary Adds one or more public Media Assets to your Favorites list by their media IDs.
 *
 * @param request AddFavoritePublicMediaRequest
 * @return AddFavoritePublicMediaResponse
 */
AddFavoritePublicMediaResponse Client::addFavoritePublicMedia(const AddFavoritePublicMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFavoritePublicMediaWithOptions(request, runtime);
}

/**
 * @summary Adds an input to a MediaConnect Flow instance.
 *
 * @description - If the specified flow instance ID does not exist, the API returns an error.
 * - By default, a flow instance supports only one input. After you enable dual-stream disaster recovery, you can add a second input.
 * ### Input type descriptions
 * - RTMP-PUSH: Creates an RTMP listener input. You can push your stream to the URL returned by the API using the RTMP protocol.
 * - RTMP-PULL: Creates an RTMP origin fetch input. The flow instance pulls an RTMP live stream from your specified origin server.
 * - SRT-Listener: Creates an SRT listener input. You can push your stream to the URL returned by the API using the SRT protocol.
 * - SRT-Caller: Creates an SRT origin fetch input. The flow instance pulls an SRT live stream from your specified origin server.
 * - Flow: Uses the output of another upstream flow instance as the input. You must specify both the upstream flow instance ID and the output name. The output of the upstream flow instance must be of the SRT-Listener or RTMP-PULL type. When flow instances cascade, they use a leased line by default. This supports cross-region distribution across multiple flow instances.
 *
 * @param request AddMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaConnectFlowInputResponse
 */
AddMediaConnectFlowInputResponse Client::addMediaConnectFlowInputWithOptions(const AddMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.getCidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasInputFromUrl()) {
    query["InputFromUrl"] = request.getInputFromUrl();
  }

  if (!!request.hasInputName()) {
    query["InputName"] = request.getInputName();
  }

  if (!!request.hasInputProtocol()) {
    query["InputProtocol"] = request.getInputProtocol();
  }

  if (!!request.hasMaxBitrate()) {
    query["MaxBitrate"] = request.getMaxBitrate();
  }

  if (!!request.hasPairFlowId()) {
    query["PairFlowId"] = request.getPairFlowId();
  }

  if (!!request.hasPairOutputName()) {
    query["PairOutputName"] = request.getPairOutputName();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.getSrtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.getSrtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.getSrtPbkeyLen();
  }

  if (!!request.hasWithInternalVip()) {
    query["WithInternalVip"] = request.getWithInternalVip();
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
 * @summary Adds an input to a MediaConnect Flow instance.
 *
 * @description - If the specified flow instance ID does not exist, the API returns an error.
 * - By default, a flow instance supports only one input. After you enable dual-stream disaster recovery, you can add a second input.
 * ### Input type descriptions
 * - RTMP-PUSH: Creates an RTMP listener input. You can push your stream to the URL returned by the API using the RTMP protocol.
 * - RTMP-PULL: Creates an RTMP origin fetch input. The flow instance pulls an RTMP live stream from your specified origin server.
 * - SRT-Listener: Creates an SRT listener input. You can push your stream to the URL returned by the API using the SRT protocol.
 * - SRT-Caller: Creates an SRT origin fetch input. The flow instance pulls an SRT live stream from your specified origin server.
 * - Flow: Uses the output of another upstream flow instance as the input. You must specify both the upstream flow instance ID and the output name. The output of the upstream flow instance must be of the SRT-Listener or RTMP-PULL type. When flow instances cascade, they use a leased line by default. This supports cross-region distribution across multiple flow instances.
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
 * @description - When the specified flow ID is not available, an error code is returned.
 * - A flow can have a maximum of four outputs.
 * - The output names in the same flow cannot be duplicated.
 * - You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
 * ### [](#)Output types
 * - RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
 * - RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
 * - SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
 * - SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
 * - Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
 *
 * @param request AddMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaConnectFlowOutputResponse
 */
AddMediaConnectFlowOutputResponse Client::addMediaConnectFlowOutputWithOptions(const AddMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.getCidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
  }

  if (!!request.hasOutputProtocol()) {
    query["OutputProtocol"] = request.getOutputProtocol();
  }

  if (!!request.hasOutputToUrl()) {
    query["OutputToUrl"] = request.getOutputToUrl();
  }

  if (!!request.hasPairFlowId()) {
    query["PairFlowId"] = request.getPairFlowId();
  }

  if (!!request.hasPairInputName()) {
    query["PairInputName"] = request.getPairInputName();
  }

  if (!!request.hasPlayerLimit()) {
    query["PlayerLimit"] = request.getPlayerLimit();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.getSrtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.getSrtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.getSrtPbkeyLen();
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
 * @description - When the specified flow ID is not available, an error code is returned.
 * - A flow can have a maximum of four outputs.
 * - The output names in the same flow cannot be duplicated.
 * - You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
 * ### [](#)Output types
 * - RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
 * - RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
 * - SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
 * - SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
 * - Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaMarks()) {
    query["MediaMarks"] = request.getMediaMarks();
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
 * @description Tagging media assets created for live streams.
 *
 * @param request AddStreamTagToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddStreamTagToSearchLibResponse
 */
AddStreamTagToSearchLibResponse Client::addStreamTagToSearchLibWithOptions(const AddStreamTagToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.getMsgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @description Tagging media assets created for live streams.
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
 * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 * - After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
 *
 * @param request AddTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTemplateResponse
 */
AddTemplateResponse Client::addTemplateWithOptions(const AddTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverUrl()) {
    query["CoverUrl"] = request.getCoverUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPreviewMedia()) {
    query["PreviewMedia"] = request.getPreviewMedia();
  }

  if (!!request.hasRelatedMediaids()) {
    query["RelatedMediaids"] = request.getRelatedMediaids();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
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
 * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 * - After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
 *
 * @param request AddTemplateRequest
 * @return AddTemplateResponse
 */
AddTemplateResponse Client::addTemplate(const AddTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTemplateWithOptions(request, runtime);
}

/**
 * @summary Adds credits to a user account.
 *
 * @param request AddYikeUserCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddYikeUserCreditResponse
 */
AddYikeUserCreditResponse Client::addYikeUserCreditWithOptions(const AddYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredit()) {
    query["Credit"] = request.getCredit();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddYikeUserCredit"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddYikeUserCreditResponse>();
}

/**
 * @summary Adds credits to a user account.
 *
 * @param request AddYikeUserCreditRequest
 * @return AddYikeUserCreditResponse
 */
AddYikeUserCreditResponse Client::addYikeUserCredit(const AddYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addYikeUserCreditWithOptions(request, runtime);
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
    query["IndexConfig"] = request.getIndexConfig();
  }

  if (!!request.hasIndexStatus()) {
    query["IndexStatus"] = request.getIndexStatus();
  }

  if (!!request.hasIndexType()) {
    query["IndexType"] = request.getIndexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Modifies a search library.
 *
 * @param request AlterSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterSearchLibResponse
 */
AlterSearchLibResponse Client::alterSearchLibWithOptions(const AlterSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchLibConfig()) {
    query["SearchLibConfig"] = request.getSearchLibConfig();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AlterSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterSearchLibResponse>();
}

/**
 * @summary Modifies a search library.
 *
 * @param request AlterSearchLibRequest
 * @return AlterSearchLibResponse
 */
AlterSearchLibResponse Client::alterSearchLib(const AlterSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return alterSearchLibWithOptions(request, runtime);
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
    request.setAssetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssets(), "Assets", "json"));
  }

  json query = {};
  if (!!request.hasAssetsShrink()) {
    query["Assets"] = request.getAssetsShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Retrieves information for multiple media assets in a single request by providing their `mediaId` values.
 *
 * @param request BatchGetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfosWithOptions(const BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionType()) {
    query["AdditionType"] = request.getAdditionType();
  }

  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
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
 * @summary Retrieves information for multiple media assets in a single request by providing their `mediaId` values.
 *
 * @param request BatchGetMediaInfosRequest
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfos(const BatchGetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves a batch of Yike AI Application Generation Tasks.
 *
 * @param request BatchGetYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetYikeAIAppJobResponse
 */
BatchGetYikeAIAppJobResponse Client::batchGetYikeAIAppJobWithOptions(const BatchGetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetYikeAIAppJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetYikeAIAppJobResponse>();
}

/**
 * @summary Retrieves a batch of Yike AI Application Generation Tasks.
 *
 * @param request BatchGetYikeAIAppJobRequest
 * @return BatchGetYikeAIAppJobResponse
 */
BatchGetYikeAIAppJobResponse Client::batchGetYikeAIAppJob(const BatchGetYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves multiple media assets.
 *
 * @param request BatchGetYikeAssetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetYikeAssetMediaInfosResponse
 */
BatchGetYikeAssetMediaInfosResponse Client::batchGetYikeAssetMediaInfosWithOptions(const BatchGetYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetYikeAssetMediaInfos"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetYikeAssetMediaInfosResponse>();
}

/**
 * @summary Retrieves multiple media assets.
 *
 * @param request BatchGetYikeAssetMediaInfosRequest
 * @return BatchGetYikeAssetMediaInfosResponse
 */
BatchGetYikeAssetMediaInfosResponse Client::batchGetYikeAssetMediaInfos(const BatchGetYikeAssetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetYikeAssetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Cancels a media fingerprint analysis job.
 *
 * @description - You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
 * - We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
 *
 * @param request CancelDNAJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDNAJobResponse
 */
CancelDNAJobResponse Client::cancelDNAJobWithOptions(const CancelDNAJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @description - You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
 * - We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
 *
 * @param request CancelDNAJobRequest
 * @return CancelDNAJobResponse
 */
CancelDNAJobResponse Client::cancelDNAJob(const CancelDNAJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDNAJobWithOptions(request, runtime);
}

/**
 * @summary Removes all specified media assets from favorites based on the input mediaId list.
 *
 * @param request CancelFavoritePublicMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelFavoritePublicMediaResponse
 */
CancelFavoritePublicMediaResponse Client::cancelFavoritePublicMediaWithOptions(const CancelFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
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
 * @summary Removes all specified media assets from favorites based on the input mediaId list.
 *
 * @param request CancelFavoritePublicMediaRequest
 * @return CancelFavoritePublicMediaResponse
 */
CancelFavoritePublicMediaResponse Client::cancelFavoritePublicMedia(const CancelFavoritePublicMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelFavoritePublicMediaWithOptions(request, runtime);
}

/**
 * @summary Invoke CancelIProductionJob to cancel an Intelligent Production job.
 *
 * @param request CancelIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelIProductionJobResponse
 */
CancelIProductionJobResponse Client::cancelIProductionJobWithOptions(const CancelIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Invoke CancelIProductionJob to cancel an Intelligent Production job.
 *
 * @param request CancelIProductionJobRequest
 * @return CancelIProductionJobResponse
 */
CancelIProductionJobResponse Client::cancelIProductionJob(const CancelIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Clears the voiceprint associated with a voiceprint ID.
 *
 * @param request ClearAIAgentVoiceprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearAIAgentVoiceprintResponse
 */
ClearAIAgentVoiceprintResponse Client::clearAIAgentVoiceprintWithOptions(const ClearAIAgentVoiceprintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegistrationMode()) {
    query["RegistrationMode"] = request.getRegistrationMode();
  }

  if (!!request.hasVoiceprintId()) {
    query["VoiceprintId"] = request.getVoiceprintId();
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
 * @summary Clears the voiceprint associated with a voiceprint ID.
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
 * @description - If a flow has two sources, you cannot disable Source Failover. Delete one of them before this operation.
 *
 * @param request CloseMediaConnectFlowFailoverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseMediaConnectFlowFailoverResponse
 */
CloseMediaConnectFlowFailoverResponse Client::closeMediaConnectFlowFailoverWithOptions(const CloseMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
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
 * @description - If a flow has two sources, you cannot disable Source Failover. Delete one of them before this operation.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
    query["AuditContent"] = request.getAuditContent();
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
 * @summary Creates an avatar training job. You can configure the basic information of the avatar and the materials required for the training.
 *
 * @description This API is only used to initialize trainingTaskrelatedInformation,And will not submit training,To officially submit training, you need toCall [SubmitAvatarTrainingJob](https://help.aliyun.com/document_detail/2526196.html) API.
 *
 * @param request CreateAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAvatarTrainingJobResponse
 */
CreateAvatarTrainingJobResponse Client::createAvatarTrainingJobWithOptions(const CreateAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarDescription()) {
    query["AvatarDescription"] = request.getAvatarDescription();
  }

  if (!!request.hasAvatarName()) {
    query["AvatarName"] = request.getAvatarName();
  }

  if (!!request.hasAvatarType()) {
    query["AvatarType"] = request.getAvatarType();
  }

  if (!!request.hasPortrait()) {
    query["Portrait"] = request.getPortrait();
  }

  if (!!request.hasThumbnail()) {
    query["Thumbnail"] = request.getThumbnail();
  }

  if (!!request.hasTransparent()) {
    query["Transparent"] = request.getTransparent();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.getVideo();
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
 * @summary Creates an avatar training job. You can configure the basic information of the avatar and the materials required for the training.
 *
 * @description This API is only used to initialize trainingTaskrelatedInformation,And will not submit training,To officially submit training, you need toCall [SubmitAvatarTrainingJob](https://help.aliyun.com/document_detail/2526196.html) API.
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
    query["AccessPolicy"] = request.getAccessPolicy();
  }

  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasChannelTier()) {
    query["ChannelTier"] = request.getChannelTier();
  }

  if (!!request.hasFillerSourceLocationName()) {
    query["FillerSourceLocationName"] = request.getFillerSourceLocationName();
  }

  if (!!request.hasFillerSourceName()) {
    query["FillerSourceName"] = request.getFillerSourceName();
  }

  if (!!request.hasOutPutConfigList()) {
    query["OutPutConfigList"] = request.getOutPutConfigList();
  }

  if (!!request.hasPlaybackMode()) {
    query["PlaybackMode"] = request.getPlaybackMode();
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
 * @summary Creates a custom media processing template.
 *
 * @param request CreateCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomTemplateResponse
 */
CreateCustomTemplateResponse Client::createCustomTemplateWithOptions(const CreateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSubtype()) {
    query["Subtype"] = request.getSubtype();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Creates a custom media processing template.
 *
 * @param request CreateCustomTemplateRequest
 * @return CreateCustomTemplateResponse
 */
CreateCustomTemplateResponse Client::createCustomTemplate(const CreateCustomTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a voice cloning job and initializes its basic information.
 *
 * @description <props="china">
 * - Billing for voice cloning is based on customization and usage. For more information, see [Voice cloning billing](~~2399891#section-gy3-80e-clt~~).
 * - Call this operation to achieve entertainment-grade results. You need to record 20 predefined scripts. The system then extracts key voiceprint features to perform voice cloning quickly and cost-effectively.
 *
 * @param request CreateCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomizedVoiceJobResponse
 */
CreateCustomizedVoiceJobResponse Client::createCustomizedVoiceJobWithOptions(const CreateCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGender()) {
    query["Gender"] = request.getGender();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.getScenario();
  }

  if (!!request.hasVoiceDesc()) {
    query["VoiceDesc"] = request.getVoiceDesc();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.getVoiceId();
  }

  if (!!request.hasVoiceName()) {
    query["VoiceName"] = request.getVoiceName();
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
 * @summary Creates a voice cloning job and initializes its basic information.
 *
 * @description <props="china">
 * - Billing for voice cloning is based on customization and usage. For more information, see [Voice cloning billing](~~2399891#section-gy3-80e-clt~~).
 * - Call this operation to achieve entertainment-grade results. You need to record 20 predefined scripts. The system then extracts key voiceprint features to perform voice cloning quickly and cost-effectively.
 *
 * @param request CreateCustomizedVoiceJobRequest
 * @return CreateCustomizedVoiceJobResponse
 */
CreateCustomizedVoiceJobResponse Client::createCustomizedVoiceJob(const CreateCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Use the CreateDNADB operation to create a DNA database.
 *
 * @description By default, each user can create up to five DNA databases. To increase this limit, please [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q). You can use the DeleteDNADB operation to delete DNA databases that you no longer need.
 *
 * @param request CreateDNADBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDNADBResponse
 */
CreateDNADBResponse Client::createDNADBWithOptions(const CreateDNADBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
 * @summary Use the CreateDNADB operation to create a DNA database.
 *
 * @description By default, each user can create up to five DNA databases. To increase this limit, please [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q). You can use the DeleteDNADB operation to delete DNA databases that you no longer need.
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
 * @description - Billing is based on the duration of the edited video,For more informationPlease referSee[VideoEditing](https://help.aliyun.com/document_detail/2840899.html)<props="china"> and [LiveEditing](https://help.aliyun.com/document_detail/2840900.html) .If processing fails,No charge.
 * - After creating the editing project,You canCall[SubmitMediaProducingJob - SubmitEditingCompositing jobAPI](https://help.aliyun.com/document_detail/441147.html)Submit mediaEditingSynthesisTask.Call[SubmitLiveEditingJob - Submit liveEditingTask](https://help.aliyun.com/document_detail/441148.html)Submit liveEditingTask.
 *
 * @param request CreateEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEditingProjectResponse
 */
CreateEditingProjectResponse Client::createEditingProjectWithOptions(const CreateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessConfig()) {
    query["BusinessConfig"] = request.getBusinessConfig();
  }

  if (!!request.hasClipsParam()) {
    query["ClipsParam"] = request.getClipsParam();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMaterialMaps()) {
    query["MaterialMaps"] = request.getMaterialMaps();
  }

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.getProjectType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.getTimeline();
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
 * @description - Billing is based on the duration of the edited video,For more informationPlease referSee[VideoEditing](https://help.aliyun.com/document_detail/2840899.html)<props="china"> and [LiveEditing](https://help.aliyun.com/document_detail/2840900.html) .If processing fails,No charge.
 * - After creating the editing project,You canCall[SubmitMediaProducingJob - SubmitEditingCompositing jobAPI](https://help.aliyun.com/document_detail/441147.html)Submit mediaEditingSynthesisTask.Call[SubmitLiveEditingJob - Submit liveEditingTask](https://help.aliyun.com/document_detail/441148.html)Submit liveEditingTask.
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
 * @description Call CreateHotwordLibrary API to create hotword library.
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
    request.setHotwordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotwords(), "Hotwords", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHotwordsShrink()) {
    query["Hotwords"] = request.getHotwordsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.getUsageScenario();
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
 * @description Call CreateHotwordLibrary API to create hotword library.
 *
 * @param request CreateHotwordLibraryRequest
 * @return CreateHotwordLibraryResponse
 */
CreateHotwordLibraryResponse Client::createHotwordLibrary(const CreateHotwordLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHotwordLibraryWithOptions(request, runtime);
}

/**
 * @summary Creates an IPC order with shared capacity at the account level.
 *
 * @description Before you call this operation, make sure you understand the [billing and pricing for the IPC product](https://help.aliyun.com/document_detail/3004591.html).
 *
 * @param request CreateIpcOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpcOrderResponse
 */
CreateIpcOrderResponse Client::createIpcOrderWithOptions(const CreateIpcOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapability()) {
    query["Capability"] = request.getCapability();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpcOrder"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpcOrderResponse>();
}

/**
 * @summary Creates an IPC order with shared capacity at the account level.
 *
 * @description Before you call this operation, make sure you understand the [billing and pricing for the IPC product](https://help.aliyun.com/document_detail/3004591.html).
 *
 * @param request CreateIpcOrderRequest
 * @return CreateIpcOrderResponse
 */
CreateIpcOrderResponse Client::createIpcOrder(const CreateIpcOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpcOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a live package channel.
 *
 * @description ## [](#)Usage notes
 * After you call this operation to create a live package channel, the system will automatically generate the ingest endpoint URL, and username and password required for authentication.
 * ### [](#)Precautions
 * - Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
 * - Only `HLS` is supported.
 * - The segment duration must be from 1 to 30 seconds.
 * - The number of M3U8 segments must be from 2 to 100.
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
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasSegmentCount()) {
    body["SegmentCount"] = request.getSegmentCount();
  }

  if (!!request.hasSegmentDuration()) {
    body["SegmentDuration"] = request.getSegmentDuration();
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
 * - Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
 * - Only `HLS` is supported.
 * - The segment duration must be from 1 to 30 seconds.
 * - The number of M3U8 segments must be from 2 to 100.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
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
 * @summary [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_description]Endpoint playback URL
 *
 * @description [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_title]Endpoint URL
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
    request.setLivePackagingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLivePackagingConfig(), "LivePackagingConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasAuthorizationCode()) {
    body["AuthorizationCode"] = request.getAuthorizationCode();
  }

  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointName()) {
    body["EndpointName"] = request.getEndpointName();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasIpBlacklist()) {
    body["IpBlacklist"] = request.getIpBlacklist();
  }

  if (!!request.hasIpWhitelist()) {
    body["IpWhitelist"] = request.getIpWhitelist();
  }

  if (!!request.hasLivePackagingConfigShrink()) {
    body["LivePackagingConfig"] = request.getLivePackagingConfigShrink();
  }

  if (!!request.hasManifestName()) {
    body["ManifestName"] = request.getManifestName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasTimeshiftVision()) {
    body["TimeshiftVision"] = request.getTimeshiftVision();
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
 * @summary [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_description]Endpoint playback URL
 *
 * @description [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_title]Endpoint URL
 *
 * @param request CreateLivePackageOriginEndpointRequest
 * @return CreateLivePackageOriginEndpointResponse
 */
CreateLivePackageOriginEndpointResponse Client::createLivePackageOriginEndpoint(const CreateLivePackageOriginEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLivePackageOriginEndpointWithOptions(request, runtime);
}

/**
 * @summary Use this operation to create a Live Record Template. You can use the template to submit Live Recording Jobs.
 *
 * @description Live recording requires a Live Record Template. You can use a template to configure settings such as the recording format (for example, M3U8, MP4, or FLV) and the duration of Recording Files.
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
    request.setRecordFormatShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordFormat(), "RecordFormat", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRecordFormatShrink()) {
    body["RecordFormat"] = request.getRecordFormatShrink();
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
 * @summary Use this operation to create a Live Record Template. You can use the template to submit Live Recording Jobs.
 *
 * @description Live recording requires a Live Record Template. You can use a template to configure settings such as the recording format (for example, M3U8, MP4, or FLV) and the duration of Recording Files.
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
    body["OverwriteFormat"] = request.getOverwriteFormat();
  }

  if (!!request.hasSequenceFormat()) {
    body["SequenceFormat"] = request.getSequenceFormat();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTimeInterval()) {
    body["TimeInterval"] = request.getTimeInterval();
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
 * @summary Creates a live stream transcoding template, which can be referenced when submitting a transcoding job.
 *
 * @description Only Shanghai region supports real-time media transcoding.
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
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Creates a live stream transcoding template, which can be referenced when submitting a transcoding job.
 *
 * @description Only Shanghai region supports real-time media transcoding.
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
 * @description - The flow names cannot be duplicated in the same region.
 * - Take note of the returned flow ID. You may reference it in other API operations.
 *
 * @param request CreateMediaConnectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMediaConnectFlowResponse
 */
CreateMediaConnectFlowResponse Client::createMediaConnectFlowWithOptions(const CreateMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasFlowRegion()) {
    query["FlowRegion"] = request.getFlowRegion();
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
 * @description - The flow names cannot be duplicated in the same region.
 * - Take note of the returned flow ID. You may reference it in other API operations.
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
    request.setAudioSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAudioSettings(), "AudioSettings", "json"));
  }

  if (!!tmpReq.hasInputAttachments()) {
    request.setInputAttachmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputAttachments(), "InputAttachments", "json"));
  }

  if (!!tmpReq.hasOutputGroups()) {
    request.setOutputGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutputGroups(), "OutputGroups", "json"));
  }

  if (!!tmpReq.hasVideoSettings()) {
    request.setVideoSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoSettings(), "VideoSettings", "json"));
  }

  json body = {};
  if (!!request.hasAudioSettingsShrink()) {
    body["AudioSettings"] = request.getAudioSettingsShrink();
  }

  if (!!request.hasInputAttachmentsShrink()) {
    body["InputAttachments"] = request.getInputAttachmentsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputGroupsShrink()) {
    body["OutputGroups"] = request.getOutputGroupsShrink();
  }

  if (!!request.hasVideoSettingsShrink()) {
    body["VideoSettings"] = request.getVideoSettingsShrink();
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
 * @summary Create a live media input.
 *
 * @description - Create a live media input.
 * ## Queries per second (QPS) limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
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
    request.setInputSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputSettings(), "InputSettings", "json"));
  }

  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupIds(), "SecurityGroupIds", "json"));
  }

  json body = {};
  if (!!request.hasInputSettingsShrink()) {
    body["InputSettings"] = request.getInputSettingsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    body["SecurityGroupIds"] = request.getSecurityGroupIdsShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
 * @summary Create a live media input.
 *
 * @description - Create a live media input.
 * ## Queries per second (QPS) limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
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
    request.setWhitelistRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWhitelistRules(), "WhitelistRules", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasWhitelistRulesShrink()) {
    body["WhitelistRules"] = request.getWhitelistRulesShrink();
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
    query["Name"] = request.getName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
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
    query["AdBreaks"] = request.getAdBreaks();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasClipRange()) {
    query["ClipRange"] = request.getClipRange();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.getProgramName();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTransition()) {
    query["Transition"] = request.getTransition();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecognitionEntityResponse
 */
CreateRecognitionEntityResponse Client::createRecognitionEntityWithOptions(const CreateRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasEntityInfo()) {
    query["EntityInfo"] = request.getEntityInfo();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.getEntityName();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Workflow for using a custom recognition library: Create a library, create a custom object entity within the library, register sample images for the entity, create an analysis template that uses your custom library, and then submit an analysis task using the template.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecognitionLibResponse
 */
CreateRecognitionLibResponse Client::createRecognitionLibWithOptions(const CreateRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasLibDescription()) {
    query["LibDescription"] = request.getLibDescription();
  }

  if (!!request.hasLibName()) {
    query["LibName"] = request.getLibName();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Workflow for using a custom recognition library: Create a library, create a custom object entity within the library, register sample images for the entity, create an analysis template that uses your custom library, and then submit an analysis task using the template.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecognitionSampleResponse
 */
CreateRecognitionSampleResponse Client::createRecognitionSampleWithOptions(const CreateRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasLabelPrompt()) {
    query["LabelPrompt"] = request.getLabelPrompt();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionSampleRequest
 * @return CreateRecognitionSampleResponse
 */
CreateRecognitionSampleResponse Client::createRecognitionSample(const CreateRecognitionSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecognitionSampleWithOptions(request, runtime);
}

/**
 * @summary You can create a search index under a search library. A search library can contain multiple search indexes of different types.
 *
 * @description <props="china">
 * Before using this API, ensure that you fully understand the [Intelligent Search billing](https://help.aliyun.com/document_detail/2840897.html) method and pricing.
 *
 * @param request CreateSearchIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSearchIndexResponse
 */
CreateSearchIndexResponse Client::createSearchIndexWithOptions(const CreateSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexConfig()) {
    query["IndexConfig"] = request.getIndexConfig();
  }

  if (!!request.hasIndexStatus()) {
    query["IndexStatus"] = request.getIndexStatus();
  }

  if (!!request.hasIndexType()) {
    query["IndexType"] = request.getIndexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary You can create a search index under a search library. A search library can contain multiple search indexes of different types.
 *
 * @description <props="china">
 * Before using this API, ensure that you fully understand the [Intelligent Search billing](https://help.aliyun.com/document_detail/2840897.html) method and pricing.
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
  if (!!request.hasSearchLibConfig()) {
    query["SearchLibConfig"] = request.getSearchLibConfig();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
    query["HttpPackageConfigurations"] = request.getHttpPackageConfigurations();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
    query["BaseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasEnableSegmentDelivery()) {
    query["EnableSegmentDelivery"] = request.getEnableSegmentDelivery();
  }

  if (!!request.hasSegmentDeliveryUrl()) {
    query["SegmentDeliveryUrl"] = request.getSegmentDeliveryUrl();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
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
    query["Input"] = request.getInput();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary This operation retrieves an upload address and upload credential for audio, video, image, and auxiliary media assets, and creates the corresponding media asset.
 *
 * @description ### Overview
 * - Obtaining an upload address and upload credential is a prerequisite for all uploads in Intelligent Media Service.
 * - If an upload credential expires (the default validity is 3,000 seconds), call the `RefreshUploadMedia` operation to get a new one.
 * - After an upload is complete, you can confirm its success by either configuring a callback for event notifications or calling the `GetMediaInfo` operation to check the media asset\\"s status.
 * - Use the returned `MediaId` for media asset lifecycle management or media processing.
 * ### Limitations
 * - This operation supports uploads only to VOD storage, not to your own Object Storage Service (OSS) buckets. If you use your own OSS buckets, first upload the files by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the OSS files in your media library.
 * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request CreateUploadMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadMediaResponse
 */
CreateUploadMediaResponse Client::createUploadMediaWithOptions(const CreateUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasFileInfo()) {
    query["FileInfo"] = request.getFileInfo();
  }

  if (!!request.hasMediaMetaData()) {
    query["MediaMetaData"] = request.getMediaMetaData();
  }

  if (!!request.hasPostProcessConfig()) {
    query["PostProcessConfig"] = request.getPostProcessConfig();
  }

  if (!!request.hasUploadTargetConfig()) {
    query["UploadTargetConfig"] = request.getUploadTargetConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary This operation retrieves an upload address and upload credential for audio, video, image, and auxiliary media assets, and creates the corresponding media asset.
 *
 * @description ### Overview
 * - Obtaining an upload address and upload credential is a prerequisite for all uploads in Intelligent Media Service.
 * - If an upload credential expires (the default validity is 3,000 seconds), call the `RefreshUploadMedia` operation to get a new one.
 * - After an upload is complete, you can confirm its success by either configuring a callback for event notifications or calling the `GetMediaInfo` operation to check the media asset\\"s status.
 * - Use the returned `MediaId` for media asset lifecycle management or media processing.
 * ### Limitations
 * - This operation supports uploads only to VOD storage, not to your own Object Storage Service (OSS) buckets. If you use your own OSS buckets, first upload the files by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the OSS files in your media library.
 * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
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
 * @description - Upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
 * - Upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request CreateUploadStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadStreamResponse
 */
CreateUploadStreamResponse Client::createUploadStreamWithOptions(const CreateUploadStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @description - Upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
 * - Upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasAssetName()) {
    query["AssetName"] = request.getAssetName();
  }

  if (!!request.hasContentId()) {
    query["ContentId"] = request.getContentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
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
 * @summary Creates a VOD packaging configuration.
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
    request.setPackageConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPackageConfig(), "PackageConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfigurationName()) {
    query["ConfigurationName"] = request.getConfigurationName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPackageConfigShrink()) {
    query["PackageConfig"] = request.getPackageConfigShrink();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
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
 * @summary Creates a VOD packaging configuration.
 *
 * @param request CreateVodPackagingConfigurationRequest
 * @return CreateVodPackagingConfigurationResponse
 */
CreateVodPackagingConfigurationResponse Client::createVodPackagingConfiguration(const CreateVodPackagingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVodPackagingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates a VOD packaging group.
 *
 * @param request CreateVodPackagingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVodPackagingGroupResponse
 */
CreateVodPackagingGroupResponse Client::createVodPackagingGroupWithOptions(const CreateVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Creates a VOD packaging group.
 *
 * @param request CreateVodPackagingGroupRequest
 * @return CreateVodPackagingGroupResponse
 */
CreateVodPackagingGroupResponse Client::createVodPackagingGroup(const CreateVodPackagingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVodPackagingGroupWithOptions(request, runtime);
}

/**
 * @summary Obtains an upload credential for a Yike media asset.
 *
 * @param request CreateYikeAssetUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeAssetUploadResponse
 */
CreateYikeAssetUploadResponse Client::createYikeAssetUploadWithOptions(const CreateYikeAssetUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileExt()) {
    query["FileExt"] = request.getFileExt();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYikeAssetUpload"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeAssetUploadResponse>();
}

/**
 * @summary Obtains an upload credential for a Yike media asset.
 *
 * @param request CreateYikeAssetUploadRequest
 * @return CreateYikeAssetUploadResponse
 */
CreateYikeAssetUploadResponse Client::createYikeAssetUpload(const CreateYikeAssetUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeAssetUploadWithOptions(request, runtime);
}

/**
 * @summary Creates a Yike production.
 *
 * @param request CreateYikeProductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeProductionResponse
 */
CreateYikeProductionResponse Client::createYikeProductionWithOptions(const CreateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYikeProduction"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeProductionResponse>();
}

/**
 * @summary Creates a Yike production.
 *
 * @param request CreateYikeProductionRequest
 * @return CreateYikeProductionResponse
 */
CreateYikeProductionResponse Client::createYikeProduction(const CreateYikeProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeProductionWithOptions(request, runtime);
}

/**
 * @summary Creates a Yike user.
 *
 * @param request CreateYikeUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeUserResponse
 */
CreateYikeUserResponse Client::createYikeUserWithOptions(const CreateYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNickname()) {
    query["Nickname"] = request.getNickname();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProductionIds()) {
    query["ProductionIds"] = request.getProductionIds();
  }

  if (!!request.hasUserNamePrefix()) {
    query["UserNamePrefix"] = request.getUserNamePrefix();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYikeUser"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeUserResponse>();
}

/**
 * @summary Creates a Yike user.
 *
 * @param request CreateYikeUserRequest
 * @return CreateYikeUserResponse
 */
CreateYikeUserResponse Client::createYikeUser(const CreateYikeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeUserWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateYikeWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateYikeWorkspaceResponse
 */
CreateYikeWorkspaceResponse Client::createYikeWorkspaceWithOptions(const CreateYikeWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserCountLimit()) {
    query["UserCountLimit"] = request.getUserCountLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateYikeWorkspace"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateYikeWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateYikeWorkspaceRequest
 * @return CreateYikeWorkspaceResponse
 */
CreateYikeWorkspaceResponse Client::createYikeWorkspace(const CreateYikeWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createYikeWorkspaceWithOptions(request, runtime);
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
    query["CiphertextBlob"] = request.getCiphertextBlob();
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
    query["DialogueId"] = request.getDialogueId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
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
    body["Name"] = request.getName();
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
    query["JobId"] = request.getJobId();
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
    query["CateId"] = request.getCateId();
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
    query["ChannelName"] = request.getChannelName();
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
    query["TemplateId"] = request.getTemplateId();
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
    query["JobId"] = request.getJobId();
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
    query["DBId"] = request.getDBId();
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
    query["DBId"] = request.getDBId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPrimaryKeys()) {
    query["PrimaryKeys"] = request.getPrimaryKeys();
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
    query["MaterialIds"] = request.getMaterialIds();
  }

  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.getMaterialType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
    query["ProjectIds"] = request.getProjectIds();
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
 * - Delete a specified hotword library.
 * - The delete operation is irreversible.
 * - You can create up to 100 hotword libraries in an account.
 *
 * @param request DeleteHotwordLibraryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotwordLibraryResponse
 */
DeleteHotwordLibraryResponse Client::deleteHotwordLibraryWithOptions(const DeleteHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotwordLibraryId()) {
    query["HotwordLibraryId"] = request.getHotwordLibraryId();
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
 * - Delete a specified hotword library.
 * - The delete operation is irreversible.
 * - You can create up to 100 hotword libraries in an account.
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
    query["GroupName"] = request.getGroupName();
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.getEndpointName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
    query["RecordIds"] = request.getRecordIds();
  }

  if (!!request.hasRemoveFile()) {
    query["RemoveFile"] = request.getRemoveFile();
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
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes live snapshot files. You can delete only the records, or both the records and the original Object Storage Service (OSS) files.
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
    request.setCreateTimestampListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateTimestampList(), "CreateTimestampList", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimestampListShrink()) {
    query["CreateTimestampList"] = request.getCreateTimestampListShrink();
  }

  if (!!request.hasDeleteOriginalFile()) {
    query["DeleteOriginalFile"] = request.getDeleteOriginalFile();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Deletes live snapshot files. You can delete only the records, or both the records and the original Object Storage Service (OSS) files.
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
    body["TemplateId"] = request.getTemplateId();
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
 * @summary Delete the specified real-time transcoding job.
 *
 * @param request DeleteLiveTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveTranscodeJobResponse
 */
DeleteLiveTranscodeJobResponse Client::deleteLiveTranscodeJobWithOptions(const DeleteLiveTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Delete the specified real-time transcoding job.
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
    query["TemplateId"] = request.getTemplateId();
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
 * @description - When the specified flow ID is not available, an error code is returned.
 * - When a flow is deleted, its source and outputs are also deleted.
 * - When a flow is in the online state, it cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaConnectFlowResponse
 */
DeleteMediaConnectFlowResponse Client::deleteMediaConnectFlowWithOptions(const DeleteMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
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
 * @description - When the specified flow ID is not available, an error code is returned.
 * - When a flow is deleted, its source and outputs are also deleted.
 * - When a flow is in the online state, it cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowRequest
 * @return DeleteMediaConnectFlowResponse
 */
DeleteMediaConnectFlowResponse Client::deleteMediaConnectFlow(const DeleteMediaConnectFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaConnectFlowWithOptions(request, runtime);
}

/**
 * @summary Delete the input of a specific MediaConnect instance
 *
 * @description - If the provided Flow instance ID does not exist, the interface will return an error.
 * - When the Flow instance status is online, the input cannot be deleted.
 * - Only after all outputs under the Flow instance have been deleted can the input be deleted.
 *
 * @param request DeleteMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaConnectFlowInputResponse
 */
DeleteMediaConnectFlowInputResponse Client::deleteMediaConnectFlowInputWithOptions(const DeleteMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasInputName()) {
    query["InputName"] = request.getInputName();
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
 * @summary Delete the input of a specific MediaConnect instance
 *
 * @description - If the provided Flow instance ID does not exist, the interface will return an error.
 * - When the Flow instance status is online, the input cannot be deleted.
 * - Only after all outputs under the Flow instance have been deleted can the input be deleted.
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
 * @description - When the specified flow ID is not available, an error code is returned.
 * - When a flow is in the online state, its outputs cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaConnectFlowOutputResponse
 */
DeleteMediaConnectFlowOutputResponse Client::deleteMediaConnectFlowOutputWithOptions(const DeleteMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
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
 * @description - When the specified flow ID is not available, an error code is returned.
 * - When a flow is in the online state, its outputs cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowOutputRequest
 * @return DeleteMediaConnectFlowOutputResponse
 */
DeleteMediaConnectFlowOutputResponse Client::deleteMediaConnectFlowOutput(const DeleteMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary Delete the specified media asset from the search library.
 *
 * @param request DeleteMediaFromSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaFromSearchLibResponse
 */
DeleteMediaFromSearchLibResponse Client::deleteMediaFromSearchLibWithOptions(const DeleteMediaFromSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.getMsgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Delete the specified media asset from the search library.
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
    query["DeletePhysicalFiles"] = request.getDeletePhysicalFiles();
  }

  if (!!request.hasInputURLs()) {
    query["InputURLs"] = request.getInputURLs();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
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
 * @description - You can only delete a channel that is not running.
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
    body["ChannelId"] = request.getChannelId();
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
 * @description - You can only delete a channel that is not running.
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
 * @description - You can delete an input only when it is not associated with a MediaLive channel.
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
    body["InputId"] = request.getInputId();
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
 * @description - You can delete an input only when it is not associated with a MediaLive channel.
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
 * @description - You can only delete a security group not associated with an input.
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
    body["SecurityGroupId"] = request.getSecurityGroupId();
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
 * @description - You can only delete a security group not associated with an input.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaMarkIds()) {
    query["MediaMarkIds"] = request.getMediaMarkIds();
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
    query["PipelineId"] = request.getPipelineId();
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
 * @description Delete multiple media streams at a time.
 *
 * @param request DeletePlayInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePlayInfoResponse
 */
DeletePlayInfoResponse Client::deletePlayInfoWithOptions(const DeletePlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletePhysicalFiles()) {
    query["DeletePhysicalFiles"] = request.getDeletePhysicalFiles();
  }

  if (!!request.hasFileURLs()) {
    query["FileURLs"] = request.getFileURLs();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
 * @description Delete multiple media streams at a time.
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.getProgramName();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognitionEntityResponse
 */
DeleteRecognitionEntityResponse Client::deleteRecognitionEntityWithOptions(const DeleteRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognitionLibResponse
 */
DeleteRecognitionLibResponse Client::deleteRecognitionLibWithOptions(const DeleteRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognitionSampleResponse
 */
DeleteRecognitionSampleResponse Client::deleteRecognitionSampleWithOptions(const DeleteRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
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

  if (!!request.hasSampleId()) {
    query["SampleId"] = request.getSampleId();
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
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
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
    query["JobId"] = request.getJobId();
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
    query["SoftDelete"] = request.getSoftDelete();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
    query["SoftDelete"] = request.getSoftDelete();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
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
 * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
 * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
    query["AssetName"] = request.getAssetName();
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
 * @summary Deletes a VOD packaging configuration.
 *
 * @param request DeleteVodPackagingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodPackagingConfigurationResponse
 */
DeleteVodPackagingConfigurationResponse Client::deleteVodPackagingConfigurationWithOptions(const DeleteVodPackagingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigurationName()) {
    query["ConfigurationName"] = request.getConfigurationName();
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
 * @summary Deletes a VOD packaging configuration.
 *
 * @param request DeleteVodPackagingConfigurationRequest
 * @return DeleteVodPackagingConfigurationResponse
 */
DeleteVodPackagingConfigurationResponse Client::deleteVodPackagingConfiguration(const DeleteVodPackagingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodPackagingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a VOD packaging group.
 *
 * @param request DeleteVodPackagingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodPackagingGroupResponse
 */
DeleteVodPackagingGroupResponse Client::deleteVodPackagingGroupWithOptions(const DeleteVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Deletes a VOD packaging group.
 *
 * @param request DeleteVodPackagingGroupRequest
 * @return DeleteVodPackagingGroupResponse
 */
DeleteVodPackagingGroupResponse Client::deleteVodPackagingGroup(const DeleteVodPackagingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodPackagingGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more media assets.
 *
 * @param request DeleteYikeAssetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteYikeAssetMediaInfosResponse
 */
DeleteYikeAssetMediaInfosResponse Client::deleteYikeAssetMediaInfosWithOptions(const DeleteYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicDelete()) {
    query["LogicDelete"] = request.getLogicDelete();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteYikeAssetMediaInfos"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteYikeAssetMediaInfosResponse>();
}

/**
 * @summary Deletes one or more media assets.
 *
 * @param request DeleteYikeAssetMediaInfosRequest
 * @return DeleteYikeAssetMediaInfosResponse
 */
DeleteYikeAssetMediaInfosResponse Client::deleteYikeAssetMediaInfos(const DeleteYikeAssetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteYikeAssetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a specified AI agent instance.
 *
 * @description - **Description**: Retrieves detailed information for a specific AI agent instance.
 * - **Use cases**: Use this operation to monitor or analyze the performance of an AI agent during a call, or to debug its configuration.
 *
 * @param request DescribeAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIAgentInstanceResponse
 */
DescribeAIAgentInstanceResponse Client::describeAIAgentInstanceWithOptions(const DescribeAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieves information about a specified AI agent instance.
 *
 * @description - **Description**: Retrieves detailed information for a specific AI agent instance.
 * - **Use cases**: Use this operation to monitor or analyze the performance of an AI agent during a call, or to debug its configuration.
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
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
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
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
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
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
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
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
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
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
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
 * @summary Retrieves the event callback configuration for a specified AIAgent.
 *
 * @description Retrieves the event callback configuration for a specified AIAgent.
 *
 * @param request DescribeNotifyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNotifyConfigResponse
 */
DescribeNotifyConfigResponse Client::describeNotifyConfigWithOptions(const DescribeNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
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
 * @summary Retrieves the event callback configuration for a specified AIAgent.
 *
 * @description Retrieves the event callback configuration for a specified AIAgent.
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
    query["BeginTs"] = request.getBeginTs();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasOrderName()) {
    query["OrderName"] = request.getOrderName();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlayType()) {
    query["PlayType"] = request.getPlayType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.getTraceId();
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
 * @summary Retrieves information about an RTC Robot Instance.
 *
 * @param request DescribeRtcRobotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcRobotInstanceResponse
 */
DescribeRtcRobotInstanceResponse Client::describeRtcRobotInstanceWithOptions(const DescribeRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieves information about an RTC Robot Instance.
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
    query["AudioRecordId"] = request.getAudioRecordId();
  }

  if (!!request.hasRecordUrl()) {
    query["RecordUrl"] = request.getRecordUrl();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.getVoiceId();
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
    query["IndexType"] = request.getIndexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
    query["SearchLibName"] = request.getSearchLibName();
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
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
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
 * @summary Transfer the call to the target phone number.
 *
 * @param request ForwardAIAgentCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForwardAIAgentCallResponse
 */
ForwardAIAgentCallResponse Client::forwardAIAgentCallWithOptions(const ForwardAIAgentCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.getCallerNumber();
  }

  if (!!request.hasErrorPrompt()) {
    query["ErrorPrompt"] = request.getErrorPrompt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTransferPrompt()) {
    query["TransferPrompt"] = request.getTransferPrompt();
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
 * @summary Transfer the call to the target phone number.
 *
 * @param request ForwardAIAgentCallRequest
 * @return ForwardAIAgentCallResponse
 */
ForwardAIAgentCallResponse Client::forwardAIAgentCall(const ForwardAIAgentCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forwardAIAgentCallWithOptions(request, runtime);
}

/**
 * @summary Creates an agent instance and returns the channel, username, and token to join the channel.
 *
 * @description This API creates an agent instance using the specified AI agent ID (AIAgentId). You can use the information in the response to join the corresponding channel and start a session with the agent.
 * >Notice: 
 * Ensure that the specified AI agent ID is valid and configure optional parameters as needed.
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
    request.setAgentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentConfig(), "AgentConfig", "json"));
  }

  if (!!tmpReq.hasChatSyncConfig()) {
    request.setChatSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChatSyncConfig(), "ChatSyncConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasAgentConfigShrink()) {
    query["AgentConfig"] = request.getAgentConfigShrink();
  }

  if (!!request.hasChatSyncConfigShrink()) {
    query["ChatSyncConfig"] = request.getChatSyncConfigShrink();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.getExpire();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Creates an agent instance and returns the channel, username, and token to join the channel.
 *
 * @description This API creates an agent instance using the specified AI agent ID (AIAgentId). You can use the information in the response to join the corresponding channel and start a session with the agent.
 * >Notice: 
 * Ensure that the specified AI agent ID is valid and configure optional parameters as needed.
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
 * @description ## Prerequisites
 * You must [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c63.p38356.0.0.583760760aj80E) to create a custom KMS key before you can call this operation.
 *
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
 * @description ## Prerequisites
 * You must [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c63.p38356.0.0.583760760aj80E) to create a custom KMS key before you can call this operation.
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
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.getExpire();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Retrieves the current number of active concurrent calls for a specified AI agent. This is a lightweight query operation that returns only the number of currently active instances. It does not return instance details or historical peak values.
 *
 * @param request GetAIAgentConcurrencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIAgentConcurrencyResponse
 */
GetAIAgentConcurrencyResponse Client::getAIAgentConcurrencyWithOptions(const GetAIAgentConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAIAgentConcurrency"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIAgentConcurrencyResponse>();
}

/**
 * @summary Retrieves the current number of active concurrent calls for a specified AI agent. This is a lightweight query operation that returns only the number of currently active instances. It does not return instance details or historical peak values.
 *
 * @param request GetAIAgentConcurrencyRequest
 * @return GetAIAgentConcurrencyResponse
 */
GetAIAgentConcurrencyResponse Client::getAIAgentConcurrency(const GetAIAgentConcurrencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIAgentConcurrencyWithOptions(request, runtime);
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
    query["TaskId"] = request.getTaskId();
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
    query["Name"] = request.getName();
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
 * @summary Retrieves a list of Real-time Conversational AI authentication codes and their status for a specified batch.
 *
 * @description ## [](#)Usage notes
 * - This API retrieves a list of authorization codes for a specific batch ID. You can filter the results by status and type.
 * - Pagination is supported via the `PageNo` and `PageSize` parameters.
 * - By default, the `NeedTotalCount` parameter is set to `true`, indicating that the response includes the total count of matching records.
 * - `LicenseItemId` is a required parameter that specifies the batch to query.
 *
 * @param request GetAiRtcAuthCodeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiRtcAuthCodeListResponse
 */
GetAiRtcAuthCodeListResponse Client::getAiRtcAuthCodeListWithOptions(const GetAiRtcAuthCodeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLicenseItemId()) {
    query["LicenseItemId"] = request.getLicenseItemId();
  }

  if (!!request.hasNeedTotalCount()) {
    query["NeedTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiRtcAuthCodeList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiRtcAuthCodeListResponse>();
}

/**
 * @summary Retrieves a list of Real-time Conversational AI authentication codes and their status for a specified batch.
 *
 * @description ## [](#)Usage notes
 * - This API retrieves a list of authorization codes for a specific batch ID. You can filter the results by status and type.
 * - Pagination is supported via the `PageNo` and `PageSize` parameters.
 * - By default, the `NeedTotalCount` parameter is set to `true`, indicating that the response includes the total count of matching records.
 * - `LicenseItemId` is a required parameter that specifies the batch to query.
 *
 * @param request GetAiRtcAuthCodeListRequest
 * @return GetAiRtcAuthCodeListResponse
 */
GetAiRtcAuthCodeListResponse Client::getAiRtcAuthCodeList(const GetAiRtcAuthCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiRtcAuthCodeListWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for AI Real-Time Communication license batches that match specified filter criteria.
 *
 * @description ## Description
 * - Retrieve AI Real-Time Communication license batches based on filter criteria such as License Item ID, Status, and Type.
 * - The `NeedTotalCount` parameter defaults to `true`. When set to true, the response includes the total count of matching entries. To exclude the total count, set this parameter to `false`.
 * - If you do not specify any filter criteria, the operation returns the details for all license batches by default.
 *
 * @param request GetAiRtcLicenseInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAiRtcLicenseInfoListResponse
 */
GetAiRtcLicenseInfoListResponse Client::getAiRtcLicenseInfoListWithOptions(const GetAiRtcLicenseInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLicenseItemId()) {
    query["LicenseItemId"] = request.getLicenseItemId();
  }

  if (!!request.hasNeedTotalCount()) {
    query["NeedTotalCount"] = request.getNeedTotalCount();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAiRtcLicenseInfoList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAiRtcLicenseInfoListResponse>();
}

/**
 * @summary Retrieves details for AI Real-Time Communication license batches that match specified filter criteria.
 *
 * @description ## Description
 * - Retrieve AI Real-Time Communication license batches based on filter criteria such as License Item ID, Status, and Type.
 * - The `NeedTotalCount` parameter defaults to `true`. When set to true, the response includes the total count of matching entries. To exclude the total count, set this parameter to `false`.
 * - If you do not specify any filter criteria, the operation returns the details for all license batches by default.
 *
 * @param request GetAiRtcLicenseInfoListRequest
 * @return GetAiRtcLicenseInfoListResponse
 */
GetAiRtcLicenseInfoListResponse Client::getAiRtcLicenseInfoList(const GetAiRtcLicenseInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAiRtcLicenseInfoListWithOptions(request, runtime);
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
    query["AvatarId"] = request.getAvatarId();
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
    query["JobId"] = request.getJobId();
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
 * @summary Obtain detailed information about batch Intelligent One-Click Video Editing jobs, including the input parameters, job status, and the IDs and URLs of the generated media assets. This API supports querying job data from the past year only.
 *
 * @param request GetBatchMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchMediaProducingJobResponse
 */
GetBatchMediaProducingJobResponse Client::getBatchMediaProducingJobWithOptions(const GetBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Obtain detailed information about batch Intelligent One-Click Video Editing jobs, including the input parameters, job status, and the IDs and URLs of the generated media assets. This API supports querying job data from the past year only.
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
 * @description Query the information about a category and its subcategories based on the category ID and category type.
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
 * @description Query the information about a category and its subcategories based on the category ID and category type.
 *
 * @param request GetCategoriesRequest
 * @return GetCategoriesResponse
 */
GetCategoriesResponse Client::getCategories(const GetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCategoriesWithOptions(request, runtime);
}

/**
 * @summary Gets information about a channel in MediaWeaver.
 *
 * @param request GetChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChannelResponse
 */
GetChannelResponse Client::getChannelWithOptions(const GetChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
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
 * @summary Gets information about a channel in MediaWeaver.
 *
 * @param request GetChannelRequest
 * @return GetChannelResponse
 */
GetChannelResponse Client::getChannel(const GetChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChannelWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration for Intelligent Content Analysis.
 *
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
 * @summary Retrieves the configuration for Intelligent Content Analysis.
 *
 * @return GetContentAnalyzeConfigResponse
 */
GetContentAnalyzeConfigResponse Client::getContentAnalyzeConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContentAnalyzeConfigWithOptions(runtime);
}

/**
 * @summary Gets details of a custom media processing template.
 *
 * @description This operation gets the details of a custom template by its ID or the details of a default template. If you provide a `TemplateId`, the operation ignores other parameters and returns the details for that template. If you omit `TemplateId`, you must specify the `Type` parameter to get the corresponding default template.
 * Template type (`Type`):
 * 1. 1: transcoding template
 * 2. 2: snapshot template
 * 3. 3: Animated GIF template
 * 4. 4: Image watermark template
 * 5. 5: Text watermark template
 * 6. 6: Subtitle template
 * 7. 7: AI content moderation template
 * 8. 8: AI smart cover template
 * 9. 9: AI smart erase template
 * Transcoding template subtype (`Subtype`):
 * 1. 1: Normal (Normal)
 * 2. 2: Audio transcoding (AudioTranscode)
 * 3. 3: remuxing (Remux)
 * 4. 4: Narrowband HD 1.0 (NarrowBandV1)
 * 5. 5: Narrowband HD 2.0 (NarrowBandV2)
 * Snapshot template subtype (`Subtype`):
 * 1. 1: Static screenshot (Normal)
 * 2. 2: sprite (Sprite)
 * 3. 3: WebVTT screenshot (WebVtt)
 * AI content moderation template subtype (`Subtype`):
 * 1. 1: Video moderation (Video)
 * 2. 2: Audio moderation (Audio)
 * 3. 3: Image moderation (Image)
 * AI smart erase template subtype (`Subtype`):
 * 1. 1: Logo removal (VideoDelogo)
 * 2. 2: Subtitle removal (VideoDetext)
 *
 * @param request GetCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomTemplateResponse
 */
GetCustomTemplateResponse Client::getCustomTemplateWithOptions(const GetCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubtype()) {
    query["Subtype"] = request.getSubtype();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Gets details of a custom media processing template.
 *
 * @description This operation gets the details of a custom template by its ID or the details of a default template. If you provide a `TemplateId`, the operation ignores other parameters and returns the details for that template. If you omit `TemplateId`, you must specify the `Type` parameter to get the corresponding default template.
 * Template type (`Type`):
 * 1. 1: transcoding template
 * 2. 2: snapshot template
 * 3. 3: Animated GIF template
 * 4. 4: Image watermark template
 * 5. 5: Text watermark template
 * 6. 6: Subtitle template
 * 7. 7: AI content moderation template
 * 8. 8: AI smart cover template
 * 9. 9: AI smart erase template
 * Transcoding template subtype (`Subtype`):
 * 1. 1: Normal (Normal)
 * 2. 2: Audio transcoding (AudioTranscode)
 * 3. 3: remuxing (Remux)
 * 4. 4: Narrowband HD 1.0 (NarrowBandV1)
 * 5. 5: Narrowband HD 2.0 (NarrowBandV2)
 * Snapshot template subtype (`Subtype`):
 * 1. 1: Static screenshot (Normal)
 * 2. 2: sprite (Sprite)
 * 3. 3: WebVTT screenshot (WebVtt)
 * AI content moderation template subtype (`Subtype`):
 * 1. 1: Video moderation (Video)
 * 2. 2: Audio moderation (Audio)
 * 3. 3: Image moderation (Image)
 * AI smart erase template subtype (`Subtype`):
 * 1. 1: Logo removal (VideoDelogo)
 * 2. 2: Subtitle removal (VideoDetext)
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
    query["VoiceId"] = request.getVoiceId();
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
    query["JobId"] = request.getJobId();
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
 * @summary This topic describes the API request parameters and sample for obtaining the default storage configuration.
 *
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
 * @summary This topic describes the API request parameters and sample for obtaining the default storage configuration.
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
    query["Scenario"] = request.getScenario();
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
    query["JobId"] = request.getJobId();
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
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.getRequestSource();
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
 * @summary Retrieve all media assets bound to the current editing project.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterialsWithOptions(const GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Retrieve all media assets bound to the current editing project.
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
 * @description ##
 * Retrieve details of a specified hotword library based on the ID, including the library name, description, and content and attributes of all hotwords in it.
 *
 * @param request GetHotwordLibraryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotwordLibraryResponse
 */
GetHotwordLibraryResponse Client::getHotwordLibraryWithOptions(const GetHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotwordLibraryId()) {
    query["HotwordLibraryId"] = request.getHotwordLibraryId();
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
 * @description ##
 * Retrieve details of a specified hotword library based on the ID, including the library name, description, and content and attributes of all hotwords in it.
 *
 * @param request GetHotwordLibraryRequest
 * @return GetHotwordLibraryResponse
 */
GetHotwordLibraryResponse Client::getHotwordLibrary(const GetHotwordLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotwordLibraryWithOptions(request, runtime);
}

/**
 * @summary Obtain IPC device information.
 *
 * @param request GetIpcDeviceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIpcDeviceInfoResponse
 */
GetIpcDeviceInfoResponse Client::getIpcDeviceInfoWithOptions(const GetIpcDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapability()) {
    query["Capability"] = request.getCapability();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIpcDeviceInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIpcDeviceInfoResponse>();
}

/**
 * @summary Obtain IPC device information.
 *
 * @param request GetIpcDeviceInfoRequest
 * @return GetIpcDeviceInfoResponse
 */
GetIpcDeviceInfoResponse Client::getIpcDeviceInfo(const GetIpcDeviceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpcDeviceInfoWithOptions(request, runtime);
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
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. Query only live editing jobs created within the past year.
 *
 * @param request GetLiveEditingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveEditingJobResponse
 */
GetLiveEditingJobResponse Client::getLiveEditingJobWithOptions(const GetLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. Query only live editing jobs created within the past year.
 *
 * @param request GetLiveEditingJobRequest
 * @return GetLiveEditingJobResponse
 */
GetLiveEditingJobResponse Client::getLiveEditingJob(const GetLiveEditingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveEditingJobWithOptions(request, runtime);
}

/**
 * @summary Gets details about a live package channel.
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Gets details about a live package channel.
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
 * @summary Gets details about a live package channel group by name.
 *
 * @description ## [](#)Usage notes
 * Gets details about a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
 *
 * @param request GetLivePackageChannelGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivePackageChannelGroupResponse
 */
GetLivePackageChannelGroupResponse Client::getLivePackageChannelGroupWithOptions(const GetLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Gets details about a live package channel group by name.
 *
 * @description ## [](#)Usage notes
 * Gets details about a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
 *
 * @param request GetLivePackageChannelGroupRequest
 * @return GetLivePackageChannelGroupResponse
 */
GetLivePackageChannelGroupResponse Client::getLivePackageChannelGroup(const GetLivePackageChannelGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLivePackageChannelGroupWithOptions(request, runtime);
}

/**
 * @summary Query the real-time stream packaging origin configuration details of a specified channel.
 *
 * @description ## Request Description
 *
 * @param request GetLivePackageOriginEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivePackageOriginEndpointResponse
 */
GetLivePackageOriginEndpointResponse Client::getLivePackageOriginEndpointWithOptions(const GetLivePackageOriginEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.getEndpointName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Query the real-time stream packaging origin configuration details of a specified channel.
 *
 * @description ## Request Description
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
    query["JobId"] = request.getJobId();
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
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Retrieves the details of a MediaConnect Flow instance.
 *
 * @description - This operation returns an error if the specified `FlowId` does not exist.
 * - The `StartTime` in the response is valid only when the flow status is `online`.
 *
 * @param request GetMediaConnectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowResponse
 */
GetMediaConnectFlowResponse Client::getMediaConnectFlowWithOptions(const GetMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
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
 * @summary Retrieves the details of a MediaConnect Flow instance.
 *
 * @description - This operation returns an error if the specified `FlowId` does not exist.
 * - The `StartTime` in the response is valid only when the flow status is `online`.
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
    query["FlowId"] = request.getFlowId();
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
 * @summary Retrieves the input information of a MediaConnect instance.
 *
 * @description - If the specified Flow instance ID does not exist, the API returns an error.
 *
 * @param request GetMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowInputResponse
 */
GetMediaConnectFlowInputResponse Client::getMediaConnectFlowInputWithOptions(const GetMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasWithInternalVip()) {
    query["WithInternalVip"] = request.getWithInternalVip();
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
 * @summary Retrieves the input information of a MediaConnect instance.
 *
 * @description - If the specified Flow instance ID does not exist, the API returns an error.
 *
 * @param request GetMediaConnectFlowInputRequest
 * @return GetMediaConnectFlowInputResponse
 */
GetMediaConnectFlowInputResponse Client::getMediaConnectFlowInput(const GetMediaConnectFlowInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectFlowInputWithOptions(request, runtime);
}

/**
 * @summary Retrieve detailed information of a specific output based on outputName
 *
 * @description - When the provided Flow instance ID does not exist, the interface will return an error.
 *
 * @param request GetMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowOutputResponse
 */
GetMediaConnectFlowOutputResponse Client::getMediaConnectFlowOutputWithOptions(const GetMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
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
 * @summary Retrieve detailed information of a specific output based on outputName
 *
 * @description - When the provided Flow instance ID does not exist, the interface will return an error.
 *
 * @param request GetMediaConnectFlowOutputRequest
 * @return GetMediaConnectFlowOutputResponse
 */
GetMediaConnectFlowOutputResponse Client::getMediaConnectFlowOutput(const GetMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary MediaConvert task details
 *
 * @param request GetMediaConvertJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConvertJobResponse
 */
GetMediaConvertJobResponse Client::getMediaConvertJobWithOptions(const GetMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary MediaConvert task details
 *
 * @param request GetMediaConvertJobRequest
 * @return GetMediaConvertJobResponse
 */
GetMediaConvertJobResponse Client::getMediaConvertJob(const GetMediaConvertJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConvertJobWithOptions(request, runtime);
}

/**
 * @summary Retrieves media asset information using an Intelligent Media Services (IMS) `mediaId` or an `InputURL`.
 *
 * @description `MediaId` takes precedence. If `MediaId` is empty, `InputURL` must not be null.
 *
 * @param request GetMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaInfoResponse
 */
GetMediaInfoResponse Client::getMediaInfoWithOptions(const GetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
  }

  if (!!request.hasReturnDetailedInfo()) {
    query["ReturnDetailedInfo"] = request.getReturnDetailedInfo();
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
 * @summary Retrieves media asset information using an Intelligent Media Services (IMS) `mediaId` or an `InputURL`.
 *
 * @description `MediaId` takes precedence. If `MediaId` is empty, `InputURL` must not be null.
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
    query["JobId"] = request.getJobId();
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
    body["ChannelId"] = request.getChannelId();
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
 * @summary Query the details of a media live input.
 *
 * @description - Query the details of a media live input.
 * ## Queries per second (QPS) limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request GetMediaLiveInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaLiveInputResponse
 */
GetMediaLiveInputResponse Client::getMediaLiveInputWithOptions(const GetMediaLiveInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInputId()) {
    body["InputId"] = request.getInputId();
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
 * @summary Query the details of a media live input.
 *
 * @description - Query the details of a media live input.
 * ## Queries per second (QPS) limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request GetMediaLiveInputRequest
 * @return GetMediaLiveInputResponse
 */
GetMediaLiveInputResponse Client::getMediaLiveInput(const GetMediaLiveInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaLiveInputWithOptions(request, runtime);
}

/**
 * @summary Gets details about a security group in MediaLive.
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
    body["SecurityGroupId"] = request.getSecurityGroupId();
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
 * @summary Gets details about a security group in MediaLive.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaMarkIds()) {
    query["MediaMarkIds"] = request.getMediaMarkIds();
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
 * @summary Retrieves details for an editing and composition job, such as its task status, timeline, template, and data.
 *
 * @description ### Limitations
 * This API can only retrieve editing job data from the past year.
 *
 * @param request GetMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaProducingJobResponse
 */
GetMediaProducingJobResponse Client::getMediaProducingJobWithOptions(const GetMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaProducingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaProducingJobResponse>();
}

/**
 * @summary Retrieves details for an editing and composition job, such as its task status, timeline, template, and data.
 *
 * @description ### Limitations
 * This API can only retrieve editing job data from the past year.
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
    query["JobId"] = request.getJobId();
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
    query["PipelineId"] = request.getPipelineId();
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
 * @summary This API retrieves the playback URL for a media file (video or audio) using a given audio/video ID. Use this URL for audio/video playback after integrating the Alibaba Cloud Player SDK (for URL-based playback) or a third-party player.
 *
 * @param request GetPlayInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfoWithOptions(const GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
 * @summary This API retrieves the playback URL for a media file (video or audio) using a given audio/video ID. Use this URL for audio/video playback after integrating the Alibaba Cloud Player SDK (for URL-based playback) or a third-party player.
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.getProgramName();
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
 * @summary Queries the information about a project export task.
 *
 * @param request GetProjectExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectExportJobResponse
 */
GetProjectExportJobResponse Client::getProjectExportJobWithOptions(const GetProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Queries the information about a project export task.
 *
 * @param request GetProjectExportJobRequest
 * @return GetProjectExportJobResponse
 */
GetProjectExportJobResponse Client::getProjectExportJob(const GetProjectExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectExportJobWithOptions(request, runtime);
}

/**
 * @summary Obtain and return media asset information based on the mediaId of an ICE public copyright media asset. The URL returned by the API is a preview or audition address for the copyright media asset. The official material will be used during synthesis.
 *
 * @param request GetPublicMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublicMediaInfoResponse
 */
GetPublicMediaInfoResponse Client::getPublicMediaInfoWithOptions(const GetPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<GetPublicMediaInfoResponse>();
}

/**
 * @summary Obtain and return media asset information based on the mediaId of an ICE public copyright media asset. The URL returned by the API is a preview or audition address for the copyright media asset. The official material will be used during synthesis.
 *
 * @param request GetPublicMediaInfoRequest
 * @return GetPublicMediaInfoResponse
 */
GetPublicMediaInfoResponse Client::getPublicMediaInfo(const GetPublicMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPublicMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information and execution result for a smart task by task ID. This API only supports querying editing tasks from the past year.
 *
 * @param request GetSmartHandleJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartHandleJobResponse
 */
GetSmartHandleJobResponse Client::getSmartHandleJobWithOptions(const GetSmartHandleJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Retrieves the information and execution result for a smart task by task ID. This API only supports querying editing tasks from the past year.
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
    query["JobId"] = request.getJobId();
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
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
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
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
    query["SourceLocationName"] = request.getSourceLocationName();
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the information about a template based on the template ID. Query the information about an advanced template if the template is in the Available state.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelatedMediaidFlag()) {
    query["RelatedMediaidFlag"] = request.getRelatedMediaidFlag();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries the information about a template based on the template ID. Query the information about an advanced template if the template is in the Available state.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
    query["FileList"] = request.getFileList();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Obtain the replaceable material parameter information of a template, including the parameter name, default material value, and material thumbnail. Currently, only advanced templates are supported.
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
 * @summary Obtain the replaceable material parameter information of a template, including the parameter name, default material value, and material thumbnail. Currently, only advanced templates are supported.
 *
 * @param request GetTemplateParamsRequest
 * @return GetTemplateParamsResponse
 */
GetTemplateParamsResponse Client::getTemplateParams(const GetTemplateParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateParamsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a single transcoding job.
 *
 * @description <props="intl">
 * This API is deprecated. Call [GetMediaConvertJob – Query media transcoding jobs](https://help.aliyun.com/document_detail/2867675.html) instead.
 *
 * @param request GetTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeJobResponse
 */
GetTranscodeJobResponse Client::getTranscodeJobWithOptions(const GetTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParentJobId()) {
    query["ParentJobId"] = request.getParentJobId();
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
 * @summary Queries the details of a single transcoding job.
 *
 * @description <props="intl">
 * This API is deprecated. Call [GetMediaConvertJob – Query media transcoding jobs](https://help.aliyun.com/document_detail/2867675.html) instead.
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
 * @description Query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
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
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.getUploadURLs();
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
 * @description Query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
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
 * @summary Gets information about video and audio files.
 *
 * @description Get information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Gets information about video and audio files.
 *
 * @description Get information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
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
    query["AssetName"] = request.getAssetName();
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
    query["ConfigurationName"] = request.getConfigurationName();
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
 * @summary Queries a VOD packaging group.
 *
 * @param request GetVodPackagingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVodPackagingGroupResponse
 */
GetVodPackagingGroupResponse Client::getVodPackagingGroupWithOptions(const GetVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
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
 * @summary Queries a VOD packaging group.
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
    query["TaskId"] = request.getTaskId();
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
 * @summary Retrieves the details of a Yike AI App job.
 *
 * @param request GetYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAIAppJobResponse
 */
GetYikeAIAppJobResponse Client::getYikeAIAppJobWithOptions(const GetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeAIAppJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAIAppJobResponse>();
}

/**
 * @summary Retrieves the details of a Yike AI App job.
 *
 * @param request GetYikeAIAppJobRequest
 * @return GetYikeAIAppJobResponse
 */
GetYikeAIAppJobResponse Client::getYikeAIAppJob(const GetYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Gets media asset information.
 *
 * @param request GetYikeAssetMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeAssetMediaInfoResponse
 */
GetYikeAssetMediaInfoResponse Client::getYikeAssetMediaInfoWithOptions(const GetYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeAssetMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeAssetMediaInfoResponse>();
}

/**
 * @summary Gets media asset information.
 *
 * @param request GetYikeAssetMediaInfoRequest
 * @return GetYikeAssetMediaInfoResponse
 */
GetYikeAssetMediaInfoResponse Client::getYikeAssetMediaInfo(const GetYikeAssetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeAssetMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a Yike storyboard job.
 *
 * @param request GetYikeStoryboardJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeStoryboardJobResponse
 */
GetYikeStoryboardJobResponse Client::getYikeStoryboardJobWithOptions(const GetYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeStoryboardJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeStoryboardJobResponse>();
}

/**
 * @summary Retrieves the details of a Yike storyboard job.
 *
 * @param request GetYikeStoryboardJobRequest
 * @return GetYikeStoryboardJobResponse
 */
GetYikeStoryboardJobResponse Client::getYikeStoryboardJob(const GetYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeStoryboardJobWithOptions(request, runtime);
}

/**
 * @summary Gets information about a Yike sub-account.
 *
 * @param request GetYikeUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeUserResponse
 */
GetYikeUserResponse Client::getYikeUserWithOptions(const GetYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeUser"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeUserResponse>();
}

/**
 * @summary Gets information about a Yike sub-account.
 *
 * @param request GetYikeUserRequest
 * @return GetYikeUserResponse
 */
GetYikeUserResponse Client::getYikeUser(const GetYikeUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves the credit balance for a Yike user.
 *
 * @param request GetYikeUserCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYikeUserCreditResponse
 */
GetYikeUserCreditResponse Client::getYikeUserCreditWithOptions(const GetYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYikeUserCredit"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYikeUserCreditResponse>();
}

/**
 * @summary Retrieves the credit balance for a Yike user.
 *
 * @param request GetYikeUserCreditRequest
 * @return GetYikeUserCreditResponse
 */
GetYikeUserCreditResponse Client::getYikeUserCredit(const GetYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYikeUserCreditWithOptions(request, runtime);
}

/**
 * @summary Insert a media asset into the search library.
 *
 * @description ### Prerequisites
 * Before inserting a media asset into the search library, you must call the [CreateSearchLib](https://help.aliyun.com/document_detail/2584454.html) API to create the search library.
 *
 * @param request InsertMediaToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertMediaToSearchLibResponse
 */
InsertMediaToSearchLibResponse Client::insertMediaToSearchLibWithOptions(const InsertMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImagesInput()) {
    query["ImagesInput"] = request.getImagesInput();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.getMsgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Insert a media asset into the search library.
 *
 * @description ### Prerequisites
 * Before inserting a media asset into the search library, you must call the [CreateSearchLib](https://help.aliyun.com/document_detail/2584454.html) API to create the search library.
 *
 * @param request InsertMediaToSearchLibRequest
 * @return InsertMediaToSearchLibResponse
 */
InsertMediaToSearchLibResponse Client::insertMediaToSearchLib(const InsertMediaToSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertMediaToSearchLibWithOptions(request, runtime);
}

/**
 * @summary Returns the session history.
 *
 * @param request ListAIAgentDialoguesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentDialoguesResponse
 */
ListAIAgentDialoguesResponse Client::listAIAgentDialoguesWithOptions(const ListAIAgentDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasRoundLimit()) {
    query["RoundLimit"] = request.getRoundLimit();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Returns the session history.
 *
 * @param request ListAIAgentDialoguesRequest
 * @return ListAIAgentDialoguesResponse
 */
ListAIAgentDialoguesResponse Client::listAIAgentDialogues(const ListAIAgentDialoguesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentDialoguesWithOptions(request, runtime);
}

/**
 * @summary List AI agent instances. You can retrieve all instances or filter them by specified conditions.
 *
 * @description This operation lists AI agent instances. Filter results by agent ID (`AIAgentId`). Optionally, specify a time range (`StartTime` and `EndTime`), the number of results per page (`PageSize`), and the page number (`PageNumber`). The response includes each instance’s status, runtime configuration, template configuration, user-defined data, and a download link for the conversation call log.
 * >Notice: 
 * Default pagination values: PageSize is 10. PageNumber is 1.
 *
 * @param request ListAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentInstanceResponse
 */
ListAIAgentInstanceResponse Client::listAIAgentInstanceWithOptions(const ListAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary List AI agent instances. You can retrieve all instances or filter them by specified conditions.
 *
 * @description This operation lists AI agent instances. Filter results by agent ID (`AIAgentId`). Optionally, specify a time range (`StartTime` and `EndTime`), the number of results per page (`PageSize`), and the page number (`PageNumber`). The response includes each instance’s status, runtime configuration, template configuration, user-defined data, and a download link for the conversation call log.
 * >Notice: 
 * Default pagination values: PageSize is 10. PageNumber is 1.
 *
 * @param request ListAIAgentInstanceRequest
 * @return ListAIAgentInstanceResponse
 */
ListAIAgentInstanceResponse Client::listAIAgentInstance(const ListAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary List user phone resources API.
 *
 * @description This API allows a User to query phone resources based on the number of records per page (`PageSize`) and the current page number (`PageNumber`). The Return Result includes phone numbers and their corresponding status.
 *
 * @param request ListAIAgentPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentPhoneNumberResponse
 */
ListAIAgentPhoneNumberResponse Client::listAIAgentPhoneNumberWithOptions(const ListAIAgentPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary List user phone resources API.
 *
 * @description This API allows a User to query phone resources based on the number of records per page (`PageSize`) and the current page number (`PageNumber`). The Return Result includes phone numbers and their corresponding status.
 *
 * @param request ListAIAgentPhoneNumberRequest
 * @return ListAIAgentPhoneNumberResponse
 */
ListAIAgentPhoneNumberResponse Client::listAIAgentPhoneNumber(const ListAIAgentPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of AI agent voiceprints.
 *
 * @param request ListAIAgentVoiceprintsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentVoiceprintsResponse
 */
ListAIAgentVoiceprintsResponse Client::listAIAgentVoiceprintsWithOptions(const ListAIAgentVoiceprintsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegistrationMode()) {
    query["RegistrationMode"] = request.getRegistrationMode();
  }

  if (!!request.hasVoiceprintId()) {
    query["VoiceprintId"] = request.getVoiceprintId();
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
 * @summary Retrieves a list of AI agent voiceprints.
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
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.getGmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.getGmtStart();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.getResourceArn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.getSortByModifiedTime();
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
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ListAllPublicMediaTagsResponse>();
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
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    query["AvatarType"] = request.getAvatarType();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.getGmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.getGmtStart();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.getResourceArn();
  }

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.getSortByModifiedTime();
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasChannelTier()) {
    query["ChannelTier"] = request.getChannelTier();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlaybackMode()) {
    query["PlaybackMode"] = request.getPlaybackMode();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.getSortByModifiedTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary Retrieves a list of user-defined Video on Demand (VOD) media processing templates.
 *
 * @param request ListCustomTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomTemplatesResponse
 */
ListCustomTemplatesResponse Client::listCustomTemplatesWithOptions(const ListCustomTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSubtype()) {
    query["Subtype"] = request.getSubtype();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Retrieves a list of user-defined Video on Demand (VOD) media processing templates.
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
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
    query["DBIds"] = request.getDBIds();
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
 * @summary Lists files in a media fingerprint library.
 *
 * @description Queries files in a media fingerprint library based on the library ID. The queried results can be paginated.
 *
 * @param request ListDNAFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDNAFilesResponse
 */
ListDNAFilesResponse Client::listDNAFilesWithOptions(const ListDNAFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBId()) {
    query["DBId"] = request.getDBId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Lists files in a media fingerprint library.
 *
 * @description Queries files in a media fingerprint library based on the library ID. The queried results can be paginated.
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
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    query["CreateSource"] = request.getCreateSource();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.getProjectType();
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

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * - Get information about all hotword libraries that you created.
 * - The API supports fuzzy search by `Name`, filtering by creation time range, and pagination.
 * - By default, the results are sorted by creation time in descending order. You can set `SortBy` to change the sorting order.
 * - The maximum number of entries returned for each request is 100. Default value: 10.
 * - Use `NextToken` for pagination.
 *
 * @param request ListHotwordLibrariesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotwordLibrariesResponse
 */
ListHotwordLibrariesResponse Client::listHotwordLibrariesWithOptions(const ListHotwordLibrariesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.getUsageScenario();
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
 * - Get information about all hotword libraries that you created.
 * - The API supports fuzzy search by `Name`, filtering by creation time range, and pagination.
 * - By default, the results are sorted by creation time in descending order. You can set `SortBy` to change the sorting order.
 * - The maximum number of entries returned for each request is 100. Default value: 10.
 * - Use `NextToken` for pagination.
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
    query["Keyword"] = request.getKeyword();
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
 * - **GroupName** is required to specify the channel group to which the channel belongs.
 * - **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
 * - **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
 * - **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
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
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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
 * - **GroupName** is required to specify the channel group to which the channel belongs.
 * - **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
 * - **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
 * - **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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
 * @summary Call `ListLiveRecordTemplates` to retrieve a list of your real-time recording templates.
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
 * @summary Call `ListLiveRecordTemplates` to retrieve a list of your real-time recording templates.
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
 * @summary Retrieves a paginated list of live snapshot jobs.
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
 * @summary Retrieves a paginated list of live snapshot jobs.
 *
 * @param request ListLiveSnapshotJobsRequest
 * @return ListLiveSnapshotJobsResponse
 */
ListLiveSnapshotJobsResponse Client::listLiveSnapshotJobs(const ListLiveSnapshotJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveSnapshotJobsWithOptions(request, runtime);
}

/**
 * @summary Returns a paginated list of Live Snapshot templates.
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
 * @summary Returns a paginated list of Live Snapshot templates.
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
    query["KeyWord"] = request.getKeyWord();
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

  if (!!request.hasStartMode()) {
    query["StartMode"] = request.getStartMode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
    query["Category"] = request.getCategory();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
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

  if (!!request.hasVideoCodec()) {
    query["VideoCodec"] = request.getVideoCodec();
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
 * @summary Returns basic information about media assets that match the specified parameters.
 *
 * @description - If the `includeFileBasicInfo` field is set to true, the response also includes basic source file information, such as its duration and file size.
 * - Returns a maximum of 100 matching media assets.
 * - The query returns only media assets that exactly match all specified non-empty fields. The fields that support exact matching are media type, source, business type, category, and resource status.
 * - If the result set is too large for a single response, use the returned `nextToken` to retrieve the next page of results.
 *
 * @param request ListMediaBasicInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaBasicInfosResponse
 */
ListMediaBasicInfosResponse Client::listMediaBasicInfosWithOptions(const ListMediaBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIncludeFileBasicInfo()) {
    query["IncludeFileBasicInfo"] = request.getIncludeFileBasicInfo();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Returns basic information about media assets that match the specified parameters.
 *
 * @description - If the `includeFileBasicInfo` field is set to true, the response also includes basic source file information, such as its duration and file size.
 * - Returns a maximum of 100 matching media assets.
 * - The query returns only media assets that exactly match all specified non-empty fields. The fields that support exact matching are media type, source, business type, category, and resource status.
 * - If the result set is too large for a single response, use the returned `nextToken` to retrieve the next page of results.
 *
 * @param request ListMediaBasicInfosRequest
 * @return ListMediaBasicInfosResponse
 */
ListMediaBasicInfosResponse Client::listMediaBasicInfos(const ListMediaBasicInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaBasicInfosWithOptions(request, runtime);
}

/**
 * @summary This operation lists media convert jobs.
 *
 * @param request ListMediaConvertJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaConvertJobsResponse
 */
ListMediaConvertJobsResponse Client::listMediaConvertJobsWithOptions(const ListMediaConvertJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary This operation lists media convert jobs.
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
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStates()) {
    body["States"] = request.getStates();
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
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
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
 * @summary Query the list of media live inputs.
 *
 * @description - You can invoke this API to query the list of media live inputs.
 * ## QPS Limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request ListMediaLiveInputsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaLiveInputsResponse
 */
ListMediaLiveInputsResponse Client::listMediaLiveInputsWithOptions(const ListMediaLiveInputsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasTypes()) {
    body["Types"] = request.getTypes();
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
 * @summary Query the list of media live inputs.
 *
 * @description - You can invoke this API to query the list of media live inputs.
 * ## QPS Limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaMarkIds()) {
    query["MediaMarkIds"] = request.getMediaMarkIds();
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMasterJobId()) {
    query["MasterJobId"] = request.getMasterJobId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
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
 * @summary Queries packaging jobs.
 *
 * @param request ListPackageJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPackageJobsResponse
 */
ListPackageJobsResponse Client::listPackageJobsWithOptions(const ListPackageJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Queries packaging jobs.
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
    query["Speed"] = request.getSpeed();
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.getProgramName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
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
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasIncludeFileBasicInfo()) {
    query["IncludeFileBasicInfo"] = request.getIncludeFileBasicInfo();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMediaTagId()) {
    query["MediaTagId"] = request.getMediaTagId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ListPublicMediaBasicInfosResponse>();
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
 * @summary Lists entities in a specified recognition library. Pagination is supported.
 *
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Supports up to 50 calls per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request ListRecognitionEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecognitionEntitiesResponse
 */
ListRecognitionEntitiesResponse Client::listRecognitionEntitiesWithOptions(const ListRecognitionEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @summary Lists entities in a specified recognition library. Pagination is supported.
 *
 * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - Supports up to 50 calls per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request ListRecognitionEntitiesRequest
 * @return ListRecognitionEntitiesResponse
 */
ListRecognitionEntitiesResponse Client::listRecognitionEntities(const ListRecognitionEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecognitionEntitiesWithOptions(request, runtime);
}

/**
 * @summary Perform a paged query to retrieve information about all Custom detection libraries under the current User.
 *
 * @description - This API currently supports the following Regions: China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen). Other Regions are not supported at this time.
 * - The queries per second (QPS) limit for this API is 50 per User. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListRecognitionLibsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecognitionLibsResponse
 */
ListRecognitionLibsResponse Client::listRecognitionLibsWithOptions(const ListRecognitionLibsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @summary Perform a paged query to retrieve information about all Custom detection libraries under the current User.
 *
 * @description - This API currently supports the following Regions: China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen). Other Regions are not supported at this time.
 * - The queries per second (QPS) limit for this API is 50 per User. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
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
 * @description - This API is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
 *
 * @param request ListRecognitionSamplesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecognitionSamplesResponse
 */
ListRecognitionSamplesResponse Client::listRecognitionSamplesWithOptions(const ListRecognitionSamplesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.getEntityName();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @description - This API is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * - You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWindowDurationSeconds()) {
    query["WindowDurationSeconds"] = request.getWindowDurationSeconds();
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
 * @summary Retrieves a list of search libraries.
 *
 * @param request ListSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchLibResponse
 */
ListSearchLibResponse Client::listSearchLibWithOptions(const ListSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary Retrieves a list of search libraries.
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
 * @summary Retrieves a paginated list of system digital avatars.
 *
 * @param request ListSmartSysAvatarModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmartSysAvatarModelsResponse
 */
ListSmartSysAvatarModelsResponse Client::listSmartSysAvatarModelsWithOptions(const ListSmartSysAvatarModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSdkVersion()) {
    query["SdkVersion"] = request.getSdkVersion();
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
 * @summary Retrieves a paginated list of system digital avatars.
 *
 * @param request ListSmartSysAvatarModelsRequest
 * @return ListSmartSysAvatarModelsResponse
 */
ListSmartSysAvatarModelsResponse Client::listSmartSysAvatarModels(const ListSmartSysAvatarModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmartSysAvatarModelsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of available smart voices, including their names, genders, and sample audio. The voices are grouped by scenario.
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
 * @summary Retrieves a list of available smart voices, including their names, genders, and sample audio. The voices are grouped by scenario.
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
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    query["FilterState"] = request.getFilterState();
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

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.getSortByModifiedTime();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
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
    query["FilterState"] = request.getFilterState();
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

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.getSortByModifiedTime();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
 * 1. 1: transcoding template.
 * 2. 2: snapshot template.
 * 3. 3: animated image template.
 * 4. 4\\. image watermark template.
 * 5. 5: text watermark template.
 * 6. 6: subtitle template.
 * 7. 7: AI-assisted content moderation template.
 * 8. 8: AI-assisted intelligent thumbnail template.
 * 9. 9: AI-assisted intelligent erasure template.
 * Subtypes of transcoding templates:
 * 1. 1 (Normal): regular template.
 * 2. 2 (AudioTranscode): audio transcoding template.
 * 3. 3 (Remux): container format conversion template.
 * 4. 4 (NarrowBandV1): Narrowband HD 1.0 template.
 * 5. 5 (NarrowBandV2): Narrowband HD 2.0 template.
 * Subtypes of snapshot templates:
 * 1. 1 (Normal): regular template.
 * 2. 2 (Sprite): sprite template.
 * 3. 3 (WebVtt): WebVTT template.
 * Subtypes of AI-assisted content moderation templates:
 * 1. 1 (Video): video moderation template.
 * 2. 2 (Audio): audio moderation template.
 * 3. 3 (Image): image moderation template.
 * Subtypes of AI-assisted intelligent erasure templates:
 * 1. 1 (VideoDelogo): logo erasure template.
 * 2. 2 (VideoDetext): subtitle erasure template.
 *
 * @param request ListSystemTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemTemplatesResponse
 */
ListSystemTemplatesResponse Client::listSystemTemplatesWithOptions(const ListSystemTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSubtype()) {
    query["Subtype"] = request.getSubtype();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * 1. 1: transcoding template.
 * 2. 2: snapshot template.
 * 3. 3: animated image template.
 * 4. 4\\. image watermark template.
 * 5. 5: text watermark template.
 * 6. 6: subtitle template.
 * 7. 7: AI-assisted content moderation template.
 * 8. 8: AI-assisted intelligent thumbnail template.
 * 9. 9: AI-assisted intelligent erasure template.
 * Subtypes of transcoding templates:
 * 1. 1 (Normal): regular template.
 * 2. 2 (AudioTranscode): audio transcoding template.
 * 3. 3 (Remux): container format conversion template.
 * 4. 4 (NarrowBandV1): Narrowband HD 1.0 template.
 * 5. 5 (NarrowBandV2): Narrowband HD 2.0 template.
 * Subtypes of snapshot templates:
 * 1. 1 (Normal): regular template.
 * 2. 2 (Sprite): sprite template.
 * 3. 3 (WebVtt): WebVTT template.
 * Subtypes of AI-assisted content moderation templates:
 * 1. 1 (Video): video moderation template.
 * 2. 2 (Audio): audio moderation template.
 * 3. 3 (Image): image moderation template.
 * Subtypes of AI-assisted intelligent erasure templates:
 * 1. 1 (VideoDelogo): logo erasure template.
 * 2. 2 (VideoDetext): subtitle erasure template.
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
 * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request ListTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSource()) {
    query["CreateSource"] = request.getCreateSource();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatesWithOptions(request, runtime);
}

/**
 * @summary Lists the transcoding jobs for a media file.
 *
 * @param request ListTranscodeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscodeJobsResponse
 */
ListTranscodeJobsResponse Client::listTranscodeJobsWithOptions(const ListTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentJobId()) {
    query["ParentJobId"] = request.getParentJobId();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Lists the transcoding jobs for a media file.
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
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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
 * @summary Lists VOD packaging configurations.
 *
 * @param request ListVodPackagingConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodPackagingConfigurationsResponse
 */
ListVodPackagingConfigurationsResponse Client::listVodPackagingConfigurationsWithOptions(const ListVodPackagingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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
 * @summary Lists VOD packaging configurations.
 *
 * @param request ListVodPackagingConfigurationsRequest
 * @return ListVodPackagingConfigurationsResponse
 */
ListVodPackagingConfigurationsResponse Client::listVodPackagingConfigurations(const ListVodPackagingConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVodPackagingConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Lists VOD packaging groups.
 *
 * @param request ListVodPackagingGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodPackagingGroupsResponse
 */
ListVodPackagingGroupsResponse Client::listVodPackagingGroupsWithOptions(const ListVodPackagingGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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
 * @summary Lists VOD packaging groups.
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
    query["EndOfCreateTime"] = request.getEndOfCreateTime();
  }

  if (!!request.hasKeyText()) {
    query["KeyText"] = request.getKeyText();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.getStartOfCreateTime();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
  }

  if (!!request.hasWorkflowName()) {
    query["WorkflowName"] = request.getWorkflowName();
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
 * @summary Retrieves a list of Yike folders.
 *
 * @param request ListYikeAssetFoldersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListYikeAssetFoldersResponse
 */
ListYikeAssetFoldersResponse Client::listYikeAssetFoldersWithOptions(const ListYikeAssetFoldersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListYikeAssetFolders"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListYikeAssetFoldersResponse>();
}

/**
 * @summary Retrieves a list of Yike folders.
 *
 * @param request ListYikeAssetFoldersRequest
 * @return ListYikeAssetFoldersResponse
 */
ListYikeAssetFoldersResponse Client::listYikeAssetFolders(const ListYikeAssetFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeAssetFoldersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Yike projects.
 *
 * @param request ListYikeProductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListYikeProductionsResponse
 */
ListYikeProductionsResponse Client::listYikeProductionsWithOptions(const ListYikeProductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListYikeProductions"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListYikeProductionsResponse>();
}

/**
 * @summary Queries the list of Yike projects.
 *
 * @param request ListYikeProductionsRequest
 * @return ListYikeProductionsResponse
 */
ListYikeProductionsResponse Client::listYikeProductions(const ListYikeProductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listYikeProductionsWithOptions(request, runtime);
}

/**
 * @summary Enables Source Failover for a MediaConnect flow.
 *
 * @description - Before this operation, you must add a source to the flow.
 * - After Source Failover is enabled, you can add an additional source. The input type of the two sources must be identical.
 *
 * @param request OpenMediaConnectFlowFailoverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenMediaConnectFlowFailoverResponse
 */
OpenMediaConnectFlowFailoverResponse Client::openMediaConnectFlowFailoverWithOptions(const OpenMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
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
 * @description - Before this operation, you must add a source to the flow.
 * - After Source Failover is enabled, you can add an additional source. The input type of the two sources must be identical.
 *
 * @param request OpenMediaConnectFlowFailoverRequest
 * @return OpenMediaConnectFlowFailoverResponse
 */
OpenMediaConnectFlowFailoverResponse Client::openMediaConnectFlowFailover(const OpenMediaConnectFlowFailoverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openMediaConnectFlowFailoverWithOptions(request, runtime);
}

/**
 * @summary Validates the parameters of an application.
 *
 * @param request PrecheckYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrecheckYikeAIAppJobResponse
 */
PrecheckYikeAIAppJobResponse Client::precheckYikeAIAppJobWithOptions(const PrecheckYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppParams()) {
    query["AppParams"] = request.getAppParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrecheckYikeAIAppJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrecheckYikeAIAppJobResponse>();
}

/**
 * @summary Validates the parameters of an application.
 *
 * @param request PrecheckYikeAIAppJobRequest
 * @return PrecheckYikeAIAppJobResponse
 */
PrecheckYikeAIAppJobResponse Client::precheckYikeAIAppJob(const PrecheckYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return precheckYikeAIAppJobWithOptions(request, runtime);
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
    query["JobId"] = request.getJobId();
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
 * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryCopyrightJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCopyrightJobListResponse
 */
QueryCopyrightJobListResponse Client::queryCopyrightJobListWithOptions(const QueryCopyrightJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
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
 * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
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
 * @summary Call `QueryIProductionJob` to get the status and result of an intelligent production job.
 *
 * @param request QueryIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIProductionJobResponse
 */
QueryIProductionJobResponse Client::queryIProductionJobWithOptions(const QueryIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Call `QueryIProductionJob` to get the status and result of an intelligent production job.
 *
 * @param request QueryIProductionJobRequest
 * @return QueryIProductionJobResponse
 */
QueryIProductionJobResponse Client::queryIProductionJob(const QueryIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Query IPC usage.
 *
 * @param request QueryIpcQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIpcQuotaResponse
 */
QueryIpcQuotaResponse Client::queryIpcQuotaWithOptions(const QueryIpcQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapability()) {
    query["Capability"] = request.getCapability();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryIpcQuota"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryIpcQuotaResponse>();
}

/**
 * @summary Query IPC usage.
 *
 * @param request QueryIpcQuotaRequest
 * @return QueryIpcQuotaResponse
 */
QueryIpcQuotaResponse Client::queryIpcQuota(const QueryIpcQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIpcQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a content moderation job.
 *
 * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. Call this operation again to query the remaining moderation results of the video.
 *
 * @param request QueryMediaCensorJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaCensorJobDetailResponse
 */
QueryMediaCensorJobDetailResponse Client::queryMediaCensorJobDetailWithOptions(const QueryMediaCensorJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.getMaximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
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
 * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. Call this operation again to query the remaining moderation results of the video.
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
 * @description Query only the content moderation jobs within the most recent three months.
 *
 * @param request QueryMediaCensorJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaCensorJobListResponse
 */
QueryMediaCensorJobListResponse Client::queryMediaCensorJobListWithOptions(const QueryMediaCensorJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfJobCreatedTimeRange()) {
    query["EndOfJobCreatedTimeRange"] = request.getEndOfJobCreatedTimeRange();
  }

  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.getMaximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartOfJobCreatedTimeRange()) {
    query["StartOfJobCreatedTimeRange"] = request.getStartOfJobCreatedTimeRange();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @description Query only the content moderation jobs within the most recent three months.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Gets details about a search index.
 *
 * @param request QuerySearchIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySearchIndexResponse
 */
QuerySearchIndexResponse Client::querySearchIndexWithOptions(const QuerySearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexType()) {
    query["IndexType"] = request.getIndexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Gets details about a search index.
 *
 * @param request QuerySearchIndexRequest
 * @return QuerySearchIndexResponse
 */
QuerySearchIndexResponse Client::querySearchIndex(const QuerySearchIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySearchIndexWithOptions(request, runtime);
}

/**
 * @summary Gets information about a search library.
 *
 * @param request QuerySearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySearchLibResponse
 */
QuerySearchLibResponse Client::querySearchLibWithOptions(const QuerySearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Gets information about a search library.
 *
 * @param request QuerySearchLibRequest
 * @return QuerySearchLibResponse
 */
QuerySearchLibResponse Client::querySearchLib(const QuerySearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySearchLibWithOptions(request, runtime);
}

/**
 * @summary Querying a smart tag task.
 *
 * @param request QuerySmarttagJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmarttagJobResponse
 */
QuerySmarttagJobResponse Client::querySmarttagJobWithOptions(const QuerySmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
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
 * @summary Querying a smart tag task.
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
 * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryTraceAbJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceAbJobListResponse
 */
QueryTraceAbJobListResponse Client::queryTraceAbJobListWithOptions(const QueryTraceAbJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTraceMediaId()) {
    query["TraceMediaId"] = request.getTraceMediaId();
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
 * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
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
    query["JobId"] = request.getJobId();
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
 * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * - The M3U8 file with absolute paths generated by the SubmitTraceM3u8Job API has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. After the signature expires, the M3U8 file will become inaccessible. You must submit a new M3U8 generation job.
 *
 * @param request QueryTraceM3u8JobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceM3u8JobListResponse
 */
QueryTraceM3u8JobListResponse Client::queryTraceM3u8JobListWithOptions(const QueryTraceM3u8JobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * - The M3U8 file with absolute paths generated by the SubmitTraceM3u8Job API has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. After the signature expires, the M3U8 file will become inaccessible. You must submit a new M3U8 generation job.
 *
 * @param request QueryTraceM3u8JobListRequest
 * @return QueryTraceM3u8JobListResponse
 */
QueryTraceM3u8JobListResponse Client::queryTraceM3u8JobList(const QueryTraceM3u8JobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceM3u8JobListWithOptions(request, runtime);
}

/**
 * @summary Querying video understanding task results
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
    request.setIncludeResultsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeResults(), "IncludeResults", "json"));
  }

  json query = {};
  if (!!request.hasIncludeResultsShrink()) {
    query["IncludeResults"] = request.getIncludeResultsShrink();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
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
 * @summary Querying video understanding task results
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
 * @param request RefreshUploadMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshUploadMediaResponse
 */
RefreshUploadMediaResponse Client::refreshUploadMediaWithOptions(const RefreshUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
 * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the [GetMediaInfo](https://help.aliyun.com/document_detail/441155.html) operation at this time, you may fail to obtain the information about the media asset.
 *
 * @param request RegisterMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterMediaInfoResponse
 */
RegisterMediaInfoResponse Client::registerMediaInfoWithOptions(const RegisterMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.getMediaTags();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasRegisterConfig()) {
    query["RegisterConfig"] = request.getRegisterConfig();
  }

  if (!!request.hasSmartTagTemplateId()) {
    query["SmartTagTemplateId"] = request.getSmartTagTemplateId();
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
 * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the [GetMediaInfo](https://help.aliyun.com/document_detail/441155.html) operation at this time, you may fail to obtain the information about the media asset.
 *
 * @param request RegisterMediaInfoRequest
 * @return RegisterMediaInfoResponse
 */
RegisterMediaInfoResponse Client::registerMediaInfo(const RegisterMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Registers a media stream file stored in OSS with the media service and attaches the media stream to a specified MediaId.
 *
 * @param request RegisterMediaStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterMediaStreamResponse
 */
RegisterMediaStreamResponse Client::registerMediaStreamWithOptions(const RegisterMediaStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasStreamTags()) {
    query["StreamTags"] = request.getStreamTags();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Registers a media stream file stored in OSS with the media service and attaches the media stream to a specified MediaId.
 *
 * @param request RegisterMediaStreamRequest
 * @return RegisterMediaStreamResponse
 */
RegisterMediaStreamResponse Client::registerMediaStream(const RegisterMediaStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerMediaStreamWithOptions(request, runtime);
}

/**
 * @summary Registers a media asset in the asset library.
 *
 * @param request RegisterYikeAssetMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterYikeAssetMediaInfoResponse
 */
RegisterYikeAssetMediaInfoResponse Client::registerYikeAssetMediaInfoWithOptions(const RegisterYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasProductionId()) {
    query["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterYikeAssetMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterYikeAssetMediaInfoResponse>();
}

/**
 * @summary Registers a media asset in the asset library.
 *
 * @param request RegisterYikeAssetMediaInfoRequest
 * @return RegisterYikeAssetMediaInfoResponse
 */
RegisterYikeAssetMediaInfoResponse Client::registerYikeAssetMediaInfo(const RegisterYikeAssetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerYikeAssetMediaInfoWithOptions(request, runtime);
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
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
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
 * @summary Resumes a storyboard job.
 *
 * @param request ResumeYikeStoryboardJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeYikeStoryboardJobResponse
 */
ResumeYikeStoryboardJobResponse Client::resumeYikeStoryboardJobWithOptions(const ResumeYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeYikeStoryboardJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeYikeStoryboardJobResponse>();
}

/**
 * @summary Resumes a storyboard job.
 *
 * @param request ResumeYikeStoryboardJobRequest
 * @return ResumeYikeStoryboardJobResponse
 */
ResumeYikeStoryboardJobResponse Client::resumeYikeStoryboardJob(const ResumeYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeYikeStoryboardJobWithOptions(request, runtime);
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
    query["CreateSource"] = request.getCreateSource();
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

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.getProjectType();
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

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Rerun the search index jobs for the specified media assets in batch. You can rerun index jobs for up to 20 media assets per request.
 *
 * @param request SearchIndexJobRerunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchIndexJobRerunResponse
 */
SearchIndexJobRerunResponse Client::searchIndexJobRerunWithOptions(const SearchIndexJobRerunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasTask()) {
    query["Task"] = request.getTask();
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
 * @summary Rerun the search index jobs for the specified media assets in batch. You can rerun index jobs for up to 20 media assets per request.
 *
 * @param request SearchIndexJobRerunRequest
 * @return SearchIndexJobRerunResponse
 */
SearchIndexJobRerunResponse Client::searchIndexJobRerun(const SearchIndexJobRerunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchIndexJobRerunWithOptions(request, runtime);
}

/**
 * @summary Returns media assets that match the specified conditions.
 *
 * @description If you have any questions about the multi-modal search feature, join our DingTalk group (ID: 30415005038) for assistance.
 *
 * @param request SearchMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMediaWithOptions(const SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.getCustomFilters();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
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

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
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
 * @summary Returns media assets that match the specified conditions.
 *
 * @description If you have any questions about the multi-modal search feature, join our DingTalk group (ID: 30415005038) for assistance.
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary You can perform multimodal search based on person names, captions, and AI categorization.
 *
 * @description You can perform multimodal search based on person names, captions, and AI categorization. Coarse search supports returning results at the media asset granularity, while fine search supports returning hit segment information within media assets.
 *
 * @param request SearchMediaByAILabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByAILabelResponse
 */
SearchMediaByAILabelResponse Client::searchMediaByAILabelWithOptions(const SearchMediaByAILabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.getCustomFilters();
  }

  if (!!request.hasMatchingMode()) {
    query["MatchingMode"] = request.getMatchingMode();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasMultimodalSearchType()) {
    query["MultimodalSearchType"] = request.getMultimodalSearchType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSpecificSearch()) {
    query["SpecificSearch"] = request.getSpecificSearch();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.getUtcCreate();
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
 * @summary You can perform multimodal search based on person names, captions, and AI categorization.
 *
 * @description You can perform multimodal search based on person names, captions, and AI categorization. Coarse search supports returning results at the media asset granularity, while fine search supports returning hit segment information within media assets.
 *
 * @param request SearchMediaByAILabelRequest
 * @return SearchMediaByAILabelResponse
 */
SearchMediaByAILabelResponse Client::searchMediaByAILabel(const SearchMediaByAILabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByAILabelWithOptions(request, runtime);
}

/**
 * @summary Search media assets by face image (coarse search). Input a face image to retrieve information about media assets containing the person in the image.
 *
 * @description For questions about using or troubleshooting the Intelligent Media Asset Search feature of Alibaba Cloud Intelligent Media Services, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
 *
 * @param request SearchMediaByFaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByFaceResponse
 */
SearchMediaByFaceResponse Client::searchMediaByFaceWithOptions(const SearchMediaByFaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.getCustomFilters();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasFaceSearchToken()) {
    query["FaceSearchToken"] = request.getFaceSearchToken();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPersonImageUrl()) {
    query["PersonImageUrl"] = request.getPersonImageUrl();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.getUtcCreate();
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
 * @summary Search media assets by face image (coarse search). Input a face image to retrieve information about media assets containing the person in the image.
 *
 * @description For questions about using or troubleshooting the Intelligent Media Asset Search feature of Alibaba Cloud Intelligent Media Services, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
 *
 * @param request SearchMediaByFaceRequest
 * @return SearchMediaByFaceResponse
 */
SearchMediaByFaceResponse Client::searchMediaByFace(const SearchMediaByFaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByFaceWithOptions(request, runtime);
}

/**
 * @summary Hybrid media asset search. Combines the text search capability of DataQ - Smart Tag Service and the LLM-based search capability to perform multi-channel recall, allowing users to search using natural language descriptions.
 *
 * @description For questions about or assistance with the Intelligent Media Services intelligent media asset search feature on Alibaba Cloud, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
 *
 * @param request SearchMediaByHybridRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByHybridResponse
 */
SearchMediaByHybridResponse Client::searchMediaByHybridWithOptions(const SearchMediaByHybridRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.getCustomFilters();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.getUtcCreate();
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
 * @summary Hybrid media asset search. Combines the text search capability of DataQ - Smart Tag Service and the LLM-based search capability to perform multi-channel recall, allowing users to search using natural language descriptions.
 *
 * @description For questions about or assistance with the Intelligent Media Services intelligent media asset search feature on Alibaba Cloud, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
 *
 * @param request SearchMediaByHybridRequest
 * @return SearchMediaByHybridResponse
 */
SearchMediaByHybridResponse Client::searchMediaByHybrid(const SearchMediaByHybridRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByHybridWithOptions(request, runtime);
}

/**
 * @summary LLM search. You can use natural language descriptions to perform searches.
 *
 * @description For questions about the Intelligent Media Services intelligent media asset search feature or related issues, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
 *
 * @param request SearchMediaByMultimodalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByMultimodalResponse
 */
SearchMediaByMultimodalResponse Client::searchMediaByMultimodalWithOptions(const SearchMediaByMultimodalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.getCustomFilters();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.getUtcCreate();
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
 * @summary LLM search. You can use natural language descriptions to perform searches.
 *
 * @description For questions about the Intelligent Media Services intelligent media asset search feature or related issues, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
 *
 * @param request SearchMediaByMultimodalRequest
 * @return SearchMediaByMultimodalResponse
 */
SearchMediaByMultimodalResponse Client::searchMediaByMultimodal(const SearchMediaByMultimodalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByMultimodalWithOptions(request, runtime);
}

/**
 * @summary The API for searching media asset segments by face image (fine search) returns information about relevant character segments in the media asset where the face appears, based on coarse search results.
 *
 * @description For questions about using or troubleshooting the Intelligent Media Search feature of Alibaba Cloud Intelligent Media Services, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
 *
 * @param request SearchMediaClipByFaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaClipByFaceResponse
 */
SearchMediaClipByFaceResponse Client::searchMediaClipByFaceWithOptions(const SearchMediaClipByFaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasFaceSearchToken()) {
    query["FaceSearchToken"] = request.getFaceSearchToken();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary The API for searching media asset segments by face image (fine search) returns information about relevant character segments in the media asset where the face appears, based on coarse search results.
 *
 * @description For questions about using or troubleshooting the Intelligent Media Search feature of Alibaba Cloud Intelligent Media Services, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
 *
 * @param request SearchMediaClipByFaceRequest
 * @return SearchMediaClipByFaceResponse
 */
SearchMediaClipByFaceResponse Client::searchMediaClipByFace(const SearchMediaClipByFaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaClipByFaceWithOptions(request, runtime);
}

/**
 * @summary Search for media assets that meet the conditions based on the parameters provided by the User.
 *
 * @param request SearchPublicMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchPublicMediaInfoResponse
 */
SearchPublicMediaInfoResponse Client::searchPublicMediaInfoWithOptions(const SearchPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorized()) {
    query["Authorized"] = request.getAuthorized();
  }

  if (!!request.hasDynamicMetaDataMatchFields()) {
    query["DynamicMetaDataMatchFields"] = request.getDynamicMetaDataMatchFields();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasFavorite()) {
    query["Favorite"] = request.getFavorite();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
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
 * @summary Search for media assets that meet the conditions based on the parameters provided by the User.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
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
 * @summary Instructs a specified agent instance to immediately play back a text message, with support for interrupt settings.
 *
 * @description You can use this API to immediately instruct an AI agent instance to perform voice playback by passing in the specified text content. You can optionally allow this playback to interrupt any currently playing audio. By default, interruption is allowed.
 * **Note:**
 * - The `InstanceId` must be valid and correspond to an existing agent instance.
 * - The `Text` content must comply with specifications and must not contain sensitive or inappropriate information.
 * - If you do not want the new playback to interrupt the current audio, you must explicitly set `EnableInterrupt` to `false`.
 *
 * @param request SendAIAgentSpeechRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAIAgentSpeechResponse
 */
SendAIAgentSpeechResponse Client::sendAIAgentSpeechWithOptions(const SendAIAgentSpeechRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableInterrupt()) {
    query["EnableInterrupt"] = request.getEnableInterrupt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Instructs a specified agent instance to immediately play back a text message, with support for interrupt settings.
 *
 * @description You can use this API to immediately instruct an AI agent instance to perform voice playback by passing in the specified text content. You can optionally allow this playback to interrupt any currently playing audio. By default, interruption is allowed.
 * **Note:**
 * - The `InstanceId` must be valid and correspond to an existing agent instance.
 * - The `Text` content must comply with specifications and must not contain sensitive or inappropriate information.
 * - If you do not want the new playback to interrupt the current audio, you must explicitly set `EnableInterrupt` to `false`.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
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
    body["Command"] = request.getCommand();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
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
    query["Command"] = request.getCommand();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasNeedArchiving()) {
    query["NeedArchiving"] = request.getNeedArchiving();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.getReceiverId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasVoiceprintId()) {
    query["VoiceprintId"] = request.getVoiceprintId();
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
 * @summary Configures settings for Intelligent Content Analysis.
 *
 * @param request SetContentAnalyzeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetContentAnalyzeConfigResponse
 */
SetContentAnalyzeConfigResponse Client::setContentAnalyzeConfigWithOptions(const SetContentAnalyzeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuto()) {
    query["Auto"] = request.getAuto();
  }

  if (!!request.hasSaveType()) {
    query["SaveType"] = request.getSaveType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Configures settings for Intelligent Content Analysis.
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
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Set the default storage path for temporary files. The default storage address is used by the ICE online editor and the integrated web SDK to store temporary files generated during video editing, such as audio files generated by Intelligent configurations. Setting a default storage address avoids inconveniencing users who would otherwise need to specify storage paths for various temporary resources during editing. If you integrate ICE editing capabilities through an API, you can flexibly specify the path in the API request, and this default path will not take effect.
 *
 * @description - Intelligent Media Services supports storage in either Object Storage Service or ApsaraVideo VOD. Activate the corresponding service based on your required storage type. The differences between the two are as follows:
 * - **ApsaraVideo VOD storage**: ApsaraVideo VOD provides an all-in-one audio and video solution, including video storage, media asset management, and CDN-based playback. When storing media assets in ApsaraVideo VOD, Intelligent Media Services enhances VOD capabilities, enabling rapid development and publishing of video applications using VOD-provided APIs.
 * - **Object Storage**: Object Storage Service (OSS) is Alibaba Cloud’s secure, low-cost, highly durable, and scalable cloud storage service. You can leverage the combined capabilities of Intelligent Media Services and OSS to develop audio and video applications for diverse scenarios.
 * - You can also configure the storage address in the console. For details, see [Configure Storage Address](https://help.aliyun.com/document_detail/609918.html).
 * - Storage fees are billed through OSS or ApsaraVideo VOD based on your configured storage address. For details, see [Media Asset Storage Billing](https://help.aliyun.com/document_detail/440701.html).
 *
 * @param request SetDefaultStorageLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultStorageLocationResponse
 */
SetDefaultStorageLocationResponse Client::setDefaultStorageLocationWithOptions(const SetDefaultStorageLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.getBucket();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
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
 * @summary Set the default storage path for temporary files. The default storage address is used by the ICE online editor and the integrated web SDK to store temporary files generated during video editing, such as audio files generated by Intelligent configurations. Setting a default storage address avoids inconveniencing users who would otherwise need to specify storage paths for various temporary resources during editing. If you integrate ICE editing capabilities through an API, you can flexibly specify the path in the API request, and this default path will not take effect.
 *
 * @description - Intelligent Media Services supports storage in either Object Storage Service or ApsaraVideo VOD. Activate the corresponding service based on your required storage type. The differences between the two are as follows:
 * - **ApsaraVideo VOD storage**: ApsaraVideo VOD provides an all-in-one audio and video solution, including video storage, media asset management, and CDN-based playback. When storing media assets in ApsaraVideo VOD, Intelligent Media Services enhances VOD capabilities, enabling rapid development and publishing of video applications using VOD-provided APIs.
 * - **Object Storage**: Object Storage Service (OSS) is Alibaba Cloud’s secure, low-cost, highly durable, and scalable cloud storage service. You can leverage the combined capabilities of Intelligent Media Services and OSS to develop audio and video applications for diverse scenarios.
 * - You can also configure the storage address in the console. For details, see [Configure Storage Address](https://help.aliyun.com/document_detail/609918.html).
 * - Storage fees are billed through OSS or ApsaraVideo VOD based on your configured storage address. For details, see [Media Asset Storage Billing](https://help.aliyun.com/document_detail/440701.html).
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
    query["AuthKey"] = request.getAuthKey();
  }

  if (!!request.hasAuthSwitch()) {
    query["AuthSwitch"] = request.getAuthSwitch();
  }

  if (!!request.hasCallbackQueueName()) {
    query["CallbackQueueName"] = request.getCallbackQueueName();
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
 * @summary Enables or disables event notifications for an AI Agent and sets the Callback URL and the Event Types to subscribe to.
 *
 * @description ## Description
 * This operation configures event notification settings for an AI Agent instance. You can enable or disable event notifications, specify the Callback URL, and define the Event Types to subscribe to. You can also provide an Authentication Token for enhanced security. A successful request returns a unique Request ID for tracking and troubleshooting.
 *
 * @param request SetNotifyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetNotifyConfigResponse
 */
SetNotifyConfigResponse Client::setNotifyConfigWithOptions(const SetNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasAudioOssPath()) {
    query["AudioOssPath"] = request.getAudioOssPath();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasEnableAudioRecording()) {
    query["EnableAudioRecording"] = request.getEnableAudioRecording();
  }

  if (!!request.hasEnableNotify()) {
    query["EnableNotify"] = request.getEnableNotify();
  }

  if (!!request.hasEventTypes()) {
    query["EventTypes"] = request.getEventTypes();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
 * @summary Enables or disables event notifications for an AI Agent and sets the Callback URL and the Event Types to subscribe to.
 *
 * @description ## Description
 * This operation configures event notification settings for an AI Agent instance. You can enable or disable event notifications, specify the Callback URL, and define the Event Types to subscribe to. You can also provide an Authentication Token for enhanced security. A successful request returns a unique Request ID for tracking and troubleshooting.
 *
 * @param request SetNotifyConfigRequest
 * @return SetNotifyConfigResponse
 */
SetNotifyConfigResponse Client::setNotifyConfig(const SetNotifyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setNotifyConfigWithOptions(request, runtime);
}

/**
 * @summary Sets a user role.
 *
 * @param request SetYikeUserRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetYikeUserRoleResponse
 */
SetYikeUserRoleResponse Client::setYikeUserRoleWithOptions(const SetYikeUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetYikeUserRole"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetYikeUserRoleResponse>();
}

/**
 * @summary Sets a user role.
 *
 * @param request SetYikeUserRoleRequest
 * @return SetYikeUserRoleResponse
 */
SetYikeUserRoleResponse Client::setYikeUserRole(const SetYikeUserRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setYikeUserRoleWithOptions(request, runtime);
}

/**
 * @summary Start an AI agent instance configured in IMS.
 *
 * @description You can use this API to start a configured AI agent instance and join it to a chat. Specify the agent ID (`AIAgentId`), runtime configuration (`RuntimeConfig`), and optionally a template configuration (`TemplateConfig`) and user-defined data (`UserData`). After the agent instance starts successfully, the API returns a unique `InstanceId` for tracking or further operations.
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
    request.setAgentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentConfig(), "AgentConfig", "json"));
  }

  if (!!tmpReq.hasChatSyncConfig()) {
    request.setChatSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChatSyncConfig(), "ChatSyncConfig", "json"));
  }

  if (!!tmpReq.hasRuntimeConfig()) {
    request.setRuntimeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimeConfig(), "RuntimeConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasAgentConfigShrink()) {
    query["AgentConfig"] = request.getAgentConfigShrink();
  }

  if (!!request.hasChatSyncConfigShrink()) {
    query["ChatSyncConfig"] = request.getChatSyncConfigShrink();
  }

  if (!!request.hasRuntimeConfigShrink()) {
    query["RuntimeConfig"] = request.getRuntimeConfigShrink();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Start an AI agent instance configured in IMS.
 *
 * @description You can use this API to start a configured AI agent instance and join it to a chat. Specify the agent ID (`AIAgentId`), runtime configuration (`RuntimeConfig`), and optionally a template configuration (`TemplateConfig`) and user-defined data (`UserData`). After the agent instance starts successfully, the API returns a unique `InstanceId` for tracking or further operations.
 *
 * @param request StartAIAgentInstanceRequest
 * @return StartAIAgentInstanceResponse
 */
StartAIAgentInstanceResponse Client::startAIAgentInstance(const StartAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary Initiates an AI agent outbound call from a specific caller number to a called number and returns the call\\"s InstanceId.
 *
 * @description Use this API to start a configured AI agent instance and place an outbound call to a specified called number. Upon successful startup, the API returns a unique `InstanceId` for tracking or subsequent operations. Each caller number supports **up to 15 concurrent calls**.
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
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.getCallerNumber();
  }

  if (!!request.hasConfigShrink()) {
    query["Config"] = request.getConfigShrink();
  }

  if (!!request.hasImsAIAgentFreeObCall()) {
    query["ImsAIAgentFreeObCall"] = request.getImsAIAgentFreeObCall();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Initiates an AI agent outbound call from a specific caller number to a called number and returns the call\\"s InstanceId.
 *
 * @description Use this API to start a configured AI agent instance and place an outbound call to a specified called number. Upon successful startup, the API returns a unique `InstanceId` for tracking or subsequent operations. Each caller number supports **up to 15 concurrent calls**.
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
 * @description - You must specify a workflow template. To create one, go to the [Intelligent Media Services (IMS)](https://ims.console.aliyun.com/ai-workflow/template) console.
 *
 * @param request StartAIWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAIWorkflowResponse
 */
StartAIWorkflowResponse Client::startAIWorkflowWithOptions(const StartAIWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchTag()) {
    query["DispatchTag"] = request.getDispatchTag();
  }

  if (!!request.hasInputs()) {
    query["Inputs"] = request.getInputs();
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
 * @description - You must specify a workflow template. To create one, go to the [Intelligent Media Services (IMS)](https://ims.console.aliyun.com/ai-workflow/template) console.
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
    query["ChannelName"] = request.getChannelName();
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
 * @description - Starts a channel only when the channel is idle. You cannot start a channel repeatedly.
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
    body["ChannelId"] = request.getChannelId();
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
 * @description - Starts a channel only when the channel is idle. You cannot start a channel repeatedly.
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
 * @summary Starts an RTC interactive AI agent instance and joins an RTC call.
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
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasAuthToken()) {
    query["AuthToken"] = request.getAuthToken();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasConfigShrink()) {
    query["Config"] = request.getConfigShrink();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.getRobotId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Starts an RTC interactive AI agent instance and joins an RTC call.
 *
 * @param request StartRtcRobotInstanceRequest
 * @return StartRtcRobotInstanceResponse
 */
StartRtcRobotInstanceResponse Client::startRtcRobotInstance(const StartRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary By invoking the StartWorkflow API, you can submit a media workflow template task to implement an automated media processing flow based on the workflow template.
 *
 * @description - Currently, only media assets from Intelligent Media Services or ApsaraVideo VOD are supported as workflow inputs.
 * - When submitting a flow task, you must specify a workflow template. You can create a workflow template in the [Intelligent Media Services console](https://ims.console.aliyun.com/settings/workflow/list) or use a system preset workflow template.
 *
 * @param request StartWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartWorkflowResponse
 */
StartWorkflowResponse Client::startWorkflowWithOptions(const StartWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkipInputVerification()) {
    query["SkipInputVerification"] = request.getSkipInputVerification();
  }

  if (!!request.hasTaskInput()) {
    query["TaskInput"] = request.getTaskInput();
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
 * @summary By invoking the StartWorkflow API, you can submit a media workflow template task to implement an automated media processing flow based on the workflow template.
 *
 * @description - Currently, only media assets from Intelligent Media Services or ApsaraVideo VOD are supported as workflow inputs.
 * - When submitting a flow task, you must specify a workflow template. You can create a workflow template in the [Intelligent Media Services console](https://ims.console.aliyun.com/settings/workflow/list) or use a system preset workflow template.
 *
 * @param request StartWorkflowRequest
 * @return StartWorkflowResponse
 */
StartWorkflowResponse Client::startWorkflow(const StartWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startWorkflowWithOptions(request, runtime);
}

/**
 * @summary Stop an agent instance.
 *
 * @description - **Feature description**: Stops and terminates a running agent instance and release the associated resources.
 * - **Parameter notes**: You must provide the unique ID (InstanceId) of the instance to be stopped as a query parameter.
 * - **Common scenarios**: When an agent is no longer needed for a call or job, you can invoke this API to end its execution.
 *
 * @param request StopAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAIAgentInstanceResponse
 */
StopAIAgentInstanceResponse Client::stopAIAgentInstanceWithOptions(const StopAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Stop an agent instance.
 *
 * @description - **Feature description**: Stops and terminates a running agent instance and release the associated resources.
 * - **Parameter notes**: You must provide the unique ID (InstanceId) of the instance to be stopped as a query parameter.
 * - **Common scenarios**: When an agent is no longer needed for a call or job, you can invoke this API to end its execution.
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
    query["TaskId"] = request.getTaskId();
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
    query["ChannelName"] = request.getChannelName();
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
    body["ChannelId"] = request.getChannelId();
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
 * @summary Stop an RTC interactive AI agent instance.
 *
 * @param request StopRtcRobotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRtcRobotInstanceResponse
 */
StopRtcRobotInstanceResponse Client::stopRtcRobotInstanceWithOptions(const StopRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Stop an RTC interactive AI agent instance.
 *
 * @param request StopRtcRobotInstanceRequest
 * @return StopRtcRobotInstanceResponse
 */
StopRtcRobotInstanceResponse Client::stopRtcRobotInstance(const StopRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary Deducts credits from a sub-account.
 *
 * @param request SubYikeUserCreditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubYikeUserCreditResponse
 */
SubYikeUserCreditResponse Client::subYikeUserCreditWithOptions(const SubYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredit()) {
    query["Credit"] = request.getCredit();
  }

  if (!!request.hasYikeUserId()) {
    query["YikeUserId"] = request.getYikeUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubYikeUserCredit"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubYikeUserCreditResponse>();
}

/**
 * @summary Deducts credits from a sub-account.
 *
 * @param request SubYikeUserCreditRequest
 * @return SubYikeUserCreditResponse
 */
SubYikeUserCreditResponse Client::subYikeUserCredit(const SubYikeUserCreditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subYikeUserCreditWithOptions(request, runtime);
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
    request.setCallbackConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallbackConfig(), "CallbackConfig", "json"));
  }

  if (!!tmpReq.hasCapturePolicies()) {
    request.setCapturePoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCapturePolicies(), "CapturePolicies", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.getAIAgentId();
  }

  if (!!request.hasAuditInterval()) {
    query["AuditInterval"] = request.getAuditInterval();
  }

  if (!!request.hasCallbackConfigShrink()) {
    query["CallbackConfig"] = request.getCallbackConfigShrink();
  }

  if (!!request.hasCapturePoliciesShrink()) {
    query["CapturePolicies"] = request.getCapturePoliciesShrink();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Transcribes speech from a media file and returns the text with corresponding start and end timestamps.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and processes the job in the background. The results are sent through a callback notification, or you can query the job status by calling the [GetSmartTaskResult](https://help.aliyun.com/document_detail/441172.html) operation.
 *
 * @param request SubmitASRJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitASRJobResponse
 */
SubmitASRJobResponse Client::submitASRJobWithOptions(const SubmitASRJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputFile()) {
    query["InputFile"] = request.getInputFile();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Transcribes speech from a media file and returns the text with corresponding start and end timestamps.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and processes the job in the background. The results are sent through a callback notification, or you can query the job status by calling the [GetSmartTaskResult](https://help.aliyun.com/document_detail/441172.html) operation.
 *
 * @param request SubmitASRJobRequest
 * @return SubmitASRJobResponse
 */
SubmitASRJobResponse Client::submitASRJob(const SubmitASRJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitASRJobWithOptions(request, runtime);
}

/**
 * @summary This API converts text into a high-quality audio file of speech.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, you receive a job ID, and the job is processed in the background. You can get the result through a callback notification or by querying the job status with the [GetSmartJobResult API](https://help.aliyun.com/document_detail/441172.html).
 *
 * @param request SubmitAudioProduceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAudioProduceJobResponse
 */
SubmitAudioProduceJobResponse Client::submitAudioProduceJobWithOptions(const SubmitAudioProduceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    query["InputConfig"] = request.getInputConfig();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
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
 * @summary This API converts text into a high-quality audio file of speech.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, you receive a job ID, and the job is processed in the background. You can get the result through a callback notification or by querying the job status with the [GetSmartJobResult API](https://help.aliyun.com/document_detail/441172.html).
 *
 * @param request SubmitAudioProduceJobRequest
 * @return SubmitAudioProduceJobResponse
 */
SubmitAudioProduceJobResponse Client::submitAudioProduceJob(const SubmitAudioProduceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAudioProduceJobWithOptions(request, runtime);
}

/**
 * @summary Use this operation to submit a new avatar training job or to resubmit a failed job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you call this operation, it returns a JobId and queues the training job for background processing. The initial response confirms the job submission, not its completion. The final result is sent via a callback notification, or you can check the job\\"s status by [querying the details of an avatar training job](https://help.aliyun.com/document_detail/2526661.html).
 *
 * @param request SubmitAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAvatarTrainingJobResponse
 */
SubmitAvatarTrainingJobResponse Client::submitAvatarTrainingJobWithOptions(const SubmitAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Use this operation to submit a new avatar training job or to resubmit a failed job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you call this operation, it returns a JobId and queues the training job for background processing. The initial response confirms the job submission, not its completion. The final result is sent via a callback notification, or you can check the job\\"s status by [querying the details of an avatar training job](https://help.aliyun.com/document_detail/2526661.html).
 *
 * @param request SubmitAvatarTrainingJobRequest
 * @return SubmitAvatarTrainingJobResponse
 */
SubmitAvatarTrainingJobResponse Client::submitAvatarTrainingJob(const SubmitAvatarTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAvatarTrainingJobWithOptions(request, runtime);
}

/**
 * @summary Renders an avatar video from text or an audio file.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and queues the job for background processing. The service delivers the final result through a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also query the job status by calling the [GetSmartJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
 * - The input can be text or an audio file in MP3 or WAV format.
 * - The output supports both MP4 and WebM formats. When the output format is MP4, the job produces a video of the avatar against a green screen and a separate [alpha mask video]() for post-production. We recommend this option. When the output format is WebM, the job produces a single video with a transparent [alpha channel](), which is suitable for front-end display. Rendering in WebM format is slower due to encoding complexity.
 * - The output includes [sentence-level timestamps]() for the generated speech, useful for subsequent video editing.
 *
 * @param request SubmitAvatarVideoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAvatarVideoJobResponse
 */
SubmitAvatarVideoJobResponse Client::submitAvatarVideoJobWithOptions(const SubmitAvatarVideoJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    query["InputConfig"] = request.getInputConfig();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
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
 * @summary Renders an avatar video from text or an audio file.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and queues the job for background processing. The service delivers the final result through a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also query the job status by calling the [GetSmartJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
 * - The input can be text or an audio file in MP3 or WAV format.
 * - The output supports both MP4 and WebM formats. When the output format is MP4, the job produces a video of the avatar against a green screen and a separate [alpha mask video]() for post-production. We recommend this option. When the output format is WebM, the job produces a single video with a transparent [alpha channel](), which is suitable for front-end display. Rendering in WebM format is slower due to encoding complexity.
 * - The output includes [sentence-level timestamps]() for the generated speech, useful for subsequent video editing.
 *
 * @param request SubmitAvatarVideoJobRequest
 * @return SubmitAvatarVideoJobResponse
 */
SubmitAvatarVideoJobResponse Client::submitAvatarVideoJob(const SubmitAvatarVideoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAvatarVideoJobWithOptions(request, runtime);
}

/**
 * @summary Intelligently edits and combines multiple video, audio, and image media assets to create videos in batches with a single API call.
 *
 * @description <props="china">
 * - To use the one-click smart video creation feature, you must first subscribe to the IMS Subscription Service. For more information, see [Subscription Billing](~~439260#3285adfad70dw~~).
 * <props="china">
 * - For more information about billing for one-click smart video creation, see [One-click Video Creation](https://help.aliyun.com/document_detail/2840901.html).
 * - The one-click smart video creation feature is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a job ID and queues the job for asynchronous processing. The system delivers the final result through a callback. You can also query the job status by calling the [Get Batch Media Production Job Information](https://help.aliyun.com/document_detail/2693269.html) operation.
 * - The one-click smart video creation feature offers multiple solutions, including Script-based Automated Video Creation, AI-powered Image-Text Matching Video Creation (General), AI-powered Image-Text Matching Video Creation (Highlights), Sports Highlight Video Creation, and High-Energy Montage Video Creation. For more information about these features, see [One-click Video Creation](https://help.aliyun.com/document_detail/2689046.html).
 * - Script-based Automated Video Creation and AI-powered Image-Text Matching Video Creation share the same API for submitting jobs. To learn how to differentiate between them using parameters, see [Parameter Differences for One-click Video Creation](https://help.aliyun.com/document_detail/2846101.html).
 * - After you submit a batch job for one-click smart video creation, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve a list of all matching jobs. Call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to get detailed information about a job, including its status, the generated media asset ID, and the media asset URL.
 *
 * @param request SubmitBatchMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitBatchMediaProducingJobResponse
 */
SubmitBatchMediaProducingJobResponse Client::submitBatchMediaProducingJobWithOptions(const SubmitBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
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
 * @summary Intelligently edits and combines multiple video, audio, and image media assets to create videos in batches with a single API call.
 *
 * @description <props="china">
 * - To use the one-click smart video creation feature, you must first subscribe to the IMS Subscription Service. For more information, see [Subscription Billing](~~439260#3285adfad70dw~~).
 * <props="china">
 * - For more information about billing for one-click smart video creation, see [One-click Video Creation](https://help.aliyun.com/document_detail/2840901.html).
 * - The one-click smart video creation feature is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a job ID and queues the job for asynchronous processing. The system delivers the final result through a callback. You can also query the job status by calling the [Get Batch Media Production Job Information](https://help.aliyun.com/document_detail/2693269.html) operation.
 * - The one-click smart video creation feature offers multiple solutions, including Script-based Automated Video Creation, AI-powered Image-Text Matching Video Creation (General), AI-powered Image-Text Matching Video Creation (Highlights), Sports Highlight Video Creation, and High-Energy Montage Video Creation. For more information about these features, see [One-click Video Creation](https://help.aliyun.com/document_detail/2689046.html).
 * - Script-based Automated Video Creation and AI-powered Image-Text Matching Video Creation share the same API for submitting jobs. To learn how to differentiate between them using parameters, see [Parameter Differences for One-click Video Creation](https://help.aliyun.com/document_detail/2846101.html).
 * - After you submit a batch job for one-click smart video creation, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve a list of all matching jobs. Call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to get detailed information about a job, including its status, the generated media asset ID, and the media asset URL.
 *
 * @param request SubmitBatchMediaProducingJobRequest
 * @return SubmitBatchMediaProducingJobResponse
 */
SubmitBatchMediaProducingJobResponse Client::submitBatchMediaProducingJob(const SubmitBatchMediaProducingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchMediaProducingJobWithOptions(request, runtime);
}

/**
 * @summary Submits a copyright watermark extraction job.
 *
 * @description - The digital watermark APIs are available only in the China (Shanghai) and China (Beijing) regions.
 * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID. The service then queues the job for asynchronous processing. You can get the final results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or query the job status by calling the [QueryCopyrightExtractJob](https://help.aliyun.com/document_detail/2862132.html) operation.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a copyright watermark extraction job.
 *
 * @description - The digital watermark APIs are available only in the China (Shanghai) and China (Beijing) regions.
 * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID. The service then queues the job for asynchronous processing. You can get the final results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or query the job status by calling the [QueryCopyrightExtractJob](https://help.aliyun.com/document_detail/2862132.html) operation.
 *
 * @param request SubmitCopyrightExtractJobRequest
 * @return SubmitCopyrightExtractJobResponse
 */
SubmitCopyrightExtractJobResponse Client::submitCopyrightExtractJob(const SubmitCopyrightExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCopyrightExtractJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video copyright watermark job.
 *
 * @description - By default, this operation supports only videos 3 minutes or longer. Submitting a job for a shorter video may fail or produce no output. To watermark shorter videos, use the `Params` parameter.
 * - You can submit a watermark job for only one video per API call.
 * - Currently, digital watermark-related APIs are available only in the China (Shanghai) and China (Beijing) regions.
 * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for background processing. Results are delivered via callback notification. Alternatively, you can call the [Query Video Copyright Job List](https://help.aliyun.com/document_detail/2862135.html) operation to check the job status.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTotalTime()) {
    query["TotalTime"] = request.getTotalTime();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a video copyright watermark job.
 *
 * @description - By default, this operation supports only videos 3 minutes or longer. Submitting a job for a shorter video may fail or produce no output. To watermark shorter videos, use the `Params` parameter.
 * - You can submit a watermark job for only one video per API call.
 * - Currently, digital watermark-related APIs are available only in the China (Shanghai) and China (Beijing) regions.
 * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for background processing. Results are delivered via callback notification. Alternatively, you can call the [Query Video Copyright Job List](https://help.aliyun.com/document_detail/2862135.html) operation to check the job status.
 *
 * @param request SubmitCopyrightJobRequest
 * @return SubmitCopyrightJobResponse
 */
SubmitCopyrightJobResponse Client::submitCopyrightJob(const SubmitCopyrightJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCopyrightJobWithOptions(request, runtime);
}

/**
 * @summary Submits a basic voice cloning job.
 *
 * @description <props="china">
 * - Billing for voice cloning is based on customization and usage. For more information, see [voice cloning pricing](~~2399891#section-gy3-80e-clt~~).
 * - When you submit a voice cloning job, the `VoiceId` must match the one provided during audio detection. The service uses this parameter to locate the staged audio for training.
 * - While the job is training, you can call the [GetCustomizedVoiceJob - Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation to query the job status.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After a job is submitted, the API immediately returns a `JobId` and queues the job for background processing. The result is delivered via a callback. Alternatively, you can poll for the job status by using the [Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation.
 *
 * @param request SubmitCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCustomizedVoiceJobResponse
 */
SubmitCustomizedVoiceJobResponse Client::submitCustomizedVoiceJobWithOptions(const SubmitCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDemoAudioMediaURL()) {
    query["DemoAudioMediaURL"] = request.getDemoAudioMediaURL();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.getVoiceId();
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
 * @summary Submits a basic voice cloning job.
 *
 * @description <props="china">
 * - Billing for voice cloning is based on customization and usage. For more information, see [voice cloning pricing](~~2399891#section-gy3-80e-clt~~).
 * - When you submit a voice cloning job, the `VoiceId` must match the one provided during audio detection. The service uses this parameter to locate the staged audio for training.
 * - While the job is training, you can call the [GetCustomizedVoiceJob - Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation to query the job status.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After a job is submitted, the API immediately returns a `JobId` and queues the job for background processing. The result is delivered via a callback. Alternatively, you can poll for the job status by using the [Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation.
 *
 * @param request SubmitCustomizedVoiceJobRequest
 * @return SubmitCustomizedVoiceJobResponse
 */
SubmitCustomizedVoiceJobResponse Client::submitCustomizedVoiceJob(const SubmitCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Submits a DNA job.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous execution in the background. You receive the final result in a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also call the [ListDNAJobs](https://help.aliyun.com/document_detail/479279.html) operation to query the job status.
 * - This operation is available in the following regions: China (Beijing), China (Hangzhou), and China (Shanghai).
 * - Text-based DNA jobs are currently supported only in the China (Shanghai) region.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDBId()) {
    query["DBId"] = request.getDBId();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasPrimaryKey()) {
    query["PrimaryKey"] = request.getPrimaryKey();
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a DNA job.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous execution in the background. You receive the final result in a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also call the [ListDNAJobs](https://help.aliyun.com/document_detail/479279.html) operation to query the job status.
 * - This operation is available in the following regions: China (Beijing), China (Hangzhou), and China (Shanghai).
 * - Text-based DNA jobs are currently supported only in the China (Shanghai) region.
 *
 * @param request SubmitDNAJobRequest
 * @return SubmitDNAJobResponse
 */
SubmitDNAJobResponse Client::submitDNAJob(const SubmitDNAJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDNAJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job to generate a dynamic chart video, such as a Line Chart, Pie Chart, or Bar Chart, from Excel data. You can customize chart elements like line colors and fonts.
 *
 * @description This operation generates a dynamic chart video from Excel data. This feature is available only in the Shanghai Region.
 * - Customize text elements including the Chart Title, Subtitle, Data Source, and Unit. You can also specify the Font and Font Size. For supported fonts, see the [Font List](https://help.aliyun.com/document_detail/449567.html).
 * - Supports five built-in styles: Normal, Mystery, Lively, Business, and Green.
 * - Set a custom Background Color or Background Image.
 * - Configure output video properties such as Video Duration, Dimensions, and Bitrate.
 * Examples:
 * - Line Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4).
 * - Bar Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4).
 * - Pie Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4).
 * - Normal style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4).
 * - Mystery style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4).
 * - Lively style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4).
 * - Business style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4).
 * - Green style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4).
 *
 * @param request SubmitDynamicChartJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDynamicChartJobResponse
 */
SubmitDynamicChartJobResponse Client::submitDynamicChartJobWithOptions(const SubmitDynamicChartJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAxisParams()) {
    query["AxisParams"] = request.getAxisParams();
  }

  if (!!request.hasBackground()) {
    query["Background"] = request.getBackground();
  }

  if (!!request.hasChartConfig()) {
    query["ChartConfig"] = request.getChartConfig();
  }

  if (!!request.hasChartTitle()) {
    query["ChartTitle"] = request.getChartTitle();
  }

  if (!!request.hasChartType()) {
    query["ChartType"] = request.getChartType();
  }

  if (!!request.hasDataSource()) {
    query["DataSource"] = request.getDataSource();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasSubtitle()) {
    query["Subtitle"] = request.getSubtitle();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUnit()) {
    query["Unit"] = request.getUnit();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a job to generate a dynamic chart video, such as a Line Chart, Pie Chart, or Bar Chart, from Excel data. You can customize chart elements like line colors and fonts.
 *
 * @description This operation generates a dynamic chart video from Excel data. This feature is available only in the Shanghai Region.
 * - Customize text elements including the Chart Title, Subtitle, Data Source, and Unit. You can also specify the Font and Font Size. For supported fonts, see the [Font List](https://help.aliyun.com/document_detail/449567.html).
 * - Supports five built-in styles: Normal, Mystery, Lively, Business, and Green.
 * - Set a custom Background Color or Background Image.
 * - Configure output video properties such as Video Duration, Dimensions, and Bitrate.
 * Examples:
 * - Line Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4).
 * - Bar Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4).
 * - Pie Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4).
 * - Normal style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4).
 * - Mystery style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4).
 * - Lively style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4).
 * - Business style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4).
 * - Green style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4).
 *
 * @param request SubmitDynamicChartJobRequest
 * @return SubmitDynamicChartJobResponse
 */
SubmitDynamicChartJobResponse Client::submitDynamicChartJob(const SubmitDynamicChartJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDynamicChartJobWithOptions(request, runtime);
}

/**
 * @summary Use this API to submit a task to generate a dynamic image.
 *
 * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, you will immediately receive a task ID while the task is queued for asynchronous execution in the background. The final result is sent via a callback notification, or you can poll the task status by [querying the dynamic image task details](https://help.aliyun.com/document_detail/441199.html).
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Use this API to submit a task to generate a dynamic image.
 *
 * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, you will immediately receive a task ID while the task is queued for asynchronous execution in the background. The final result is sent via a callback notification, or you can poll the task status by [querying the dynamic image task details](https://help.aliyun.com/document_detail/441199.html).
 *
 * @param request SubmitDynamicImageJobRequest
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJob(const SubmitDynamicImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDynamicImageJobWithOptions(request, runtime);
}

/**
 * @summary Submits a highlight extraction job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the API returns a job ID. The system then queues the job for background processing and sends the final result via a callback notification. You can also query the job status by calling the [Get Smart Task Result](https://help.aliyun.com/document_detail/441172.html) operation.
 *
 * @param request SubmitHighlightExtractionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitHighlightExtractionJobResponse
 */
SubmitHighlightExtractionJobResponse Client::submitHighlightExtractionJobWithOptions(const SubmitHighlightExtractionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
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
 * @summary Submits a highlight extraction job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the API returns a job ID. The system then queues the job for background processing and sends the final result via a callback notification. You can also query the job status by calling the [Get Smart Task Result](https://help.aliyun.com/document_detail/441172.html) operation.
 *
 * @param request SubmitHighlightExtractionJobRequest
 * @return SubmitHighlightExtractionJobResponse
 */
SubmitHighlightExtractionJobResponse Client::submitHighlightExtractionJob(const SubmitHighlightExtractionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitHighlightExtractionJobWithOptions(request, runtime);
}

/**
 * @summary Use the `SubmitIProductionJob` operation to submit an intelligent production job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for asynchronous processing. The final result is delivered via a callback. You can also query the task status by calling [QuerySmartProductionTask](https://help.aliyun.com/document_detail/441215.html).
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
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
 * @summary Use the `SubmitIProductionJob` operation to submit an intelligent production job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for asynchronous processing. The final result is delivered via a callback. You can also query the task status by calling [QuerySmartProductionTask](https://help.aliyun.com/document_detail/441215.html).
 *
 * @param request SubmitIProductionJobRequest
 * @return SubmitIProductionJobResponse
 */
SubmitIProductionJobResponse Client::submitIProductionJob(const SubmitIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Live editing creates an output file by combining one or more segments from live streams. After you submit a live editing job, it is processed asynchronously. You can then call the GetLiveEditingJob operation with the returned JobId to query the job status, or call the GetMediaInfo operation with the MediaId to get details of the generated media asset.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a JobId before the job is complete. The job is then queued for asynchronous processing. You will receive a [callback notification](https://help.aliyun.com/document_detail/441150.html) when the job completes. Alternatively, you can query the job status by calling the [GetLiveEditingJob](https://help.aliyun.com/document_detail/441150.html) operation.
 * - You can edit live streams that are recorded to either OSS or VOD. When editing multiple live streams together, all streams must be recorded to the same service, either all to OSS or all to VOD.
 *
 * @param request SubmitLiveEditingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitLiveEditingJobResponse
 */
SubmitLiveEditingJobResponse Client::submitLiveEditingJobWithOptions(const SubmitLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClips()) {
    query["Clips"] = request.getClips();
  }

  if (!!request.hasLiveStreamConfig()) {
    query["LiveStreamConfig"] = request.getLiveStreamConfig();
  }

  if (!!request.hasMediaProduceConfig()) {
    query["MediaProduceConfig"] = request.getMediaProduceConfig();
  }

  if (!!request.hasOutputMediaConfig()) {
    query["OutputMediaConfig"] = request.getOutputMediaConfig();
  }

  if (!!request.hasOutputMediaTarget()) {
    query["OutputMediaTarget"] = request.getOutputMediaTarget();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Live editing creates an output file by combining one or more segments from live streams. After you submit a live editing job, it is processed asynchronously. You can then call the GetLiveEditingJob operation with the returned JobId to query the job status, or call the GetMediaInfo operation with the MediaId to get details of the generated media asset.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a JobId before the job is complete. The job is then queued for asynchronous processing. You will receive a [callback notification](https://help.aliyun.com/document_detail/441150.html) when the job completes. Alternatively, you can query the job status by calling the [GetLiveEditingJob](https://help.aliyun.com/document_detail/441150.html) operation.
 * - You can edit live streams that are recorded to either OSS or VOD. When editing multiple live streams together, all streams must be recorded to the same service, either all to OSS or all to VOD.
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
 * @description Record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
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
    request.setRecordOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordOutput(), "RecordOutput", "json"));
  }

  if (!!tmpReq.hasStreamInput()) {
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamInput(), "StreamInput", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNotifyUrl()) {
    body["NotifyUrl"] = request.getNotifyUrl();
  }

  if (!!request.hasRecordOutputShrink()) {
    body["RecordOutput"] = request.getRecordOutputShrink();
  }

  if (!!request.hasStreamInputShrink()) {
    body["StreamInput"] = request.getStreamInputShrink();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
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
 * @description Record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
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
    request.setSnapshotOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSnapshotOutput(), "SnapshotOutput", "json"));
  }

  if (!!tmpReq.hasStreamInput()) {
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamInput(), "StreamInput", "json"));
  }

  json body = {};
  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasJobName()) {
    body["JobName"] = request.getJobName();
  }

  if (!!request.hasSnapshotOutputShrink()) {
    body["SnapshotOutput"] = request.getSnapshotOutputShrink();
  }

  if (!!request.hasStreamInputShrink()) {
    body["StreamInput"] = request.getStreamInputShrink();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
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
 * @description - When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
 * - When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
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
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamInput(), "StreamInput", "json"));
  }

  if (!!tmpReq.hasTimedConfig()) {
    request.setTimedConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTimedConfig(), "TimedConfig", "json"));
  }

  if (!!tmpReq.hasTranscodeOutput()) {
    request.setTranscodeOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscodeOutput(), "TranscodeOutput", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasStartMode()) {
    query["StartMode"] = request.getStartMode();
  }

  if (!!request.hasStreamInputShrink()) {
    query["StreamInput"] = request.getStreamInputShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTimedConfigShrink()) {
    query["TimedConfig"] = request.getTimedConfigShrink();
  }

  if (!!request.hasTranscodeOutputShrink()) {
    query["TranscodeOutput"] = request.getTranscodeOutputShrink();
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
 * @description - When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
 * - When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
 *
 * @param request SubmitLiveTranscodeJobRequest
 * @return SubmitLiveTranscodeJobResponse
 */
SubmitLiveTranscodeJobResponse Client::submitLiveTranscodeJob(const SubmitLiveTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitLiveTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Perform structured analysis on media assets to enable speaker analysis, video translation, paragraph summarization, and other analyses on videos.
 *
 * @param request SubmitMediaAiAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaAiAnalysisJobResponse
 */
SubmitMediaAiAnalysisJobResponse Client::submitMediaAiAnalysisJobWithOptions(const SubmitMediaAiAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisParams()) {
    query["AnalysisParams"] = request.getAnalysisParams();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.getInput();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Perform structured analysis on media assets to enable speaker analysis, video translation, paragraph summarization, and other analyses on videos.
 *
 * @param request SubmitMediaAiAnalysisJobRequest
 * @return SubmitMediaAiAnalysisJobResponse
 */
SubmitMediaAiAnalysisJobResponse Client::submitMediaAiAnalysisJob(const SubmitMediaAiAnalysisJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaAiAnalysisJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media file to Intelligent Media Services for a censor job. This API automates the scanning of video, audio, or image content to detect potentially non-compliant, sensitive, or inappropriate material.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and processes the job in the background. You receive the final result through a callback notification. You can also check the job status by calling the [QueryMediaCensorJob](https://help.aliyun.com/document_detail/444847.html) API.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasBarrages()) {
    query["Barrages"] = request.getBarrages();
  }

  if (!!request.hasCoverImages()) {
    query["CoverImages"] = request.getCoverImages();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.getNotifyUrl();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.getOutput();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Submits a media file to Intelligent Media Services for a censor job. This API automates the scanning of video, audio, or image content to detect potentially non-compliant, sensitive, or inappropriate material.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and processes the job in the background. You receive the final result through a callback notification. You can also check the job status by calling the [QueryMediaCensorJob](https://help.aliyun.com/document_detail/444847.html) API.
 *
 * @param request SubmitMediaCensorJobRequest
 * @return SubmitMediaCensorJobResponse
 */
SubmitMediaCensorJobResponse Client::submitMediaCensorJob(const SubmitMediaCensorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaCensorJobWithOptions(request, runtime);
}

/**
 * @summary Submit a media processing job
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a task, the API returns a task ID and queues the task for asynchronous processing. You will receive the final result via a callback notification, or you can poll for the task status by calling the [Query Media Transcoding Task](https://help.aliyun.com/document_detail/2867675.html) operation.
 *
 * @param request SubmitMediaConvertJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaConvertJobResponse
 */
SubmitMediaConvertJobResponse Client::submitMediaConvertJobWithOptions(const SubmitMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submit a media processing job
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a task, the API returns a task ID and queues the task for asynchronous processing. You will receive the final result via a callback notification, or you can poll for the task status by calling the [Query Media Transcoding Task](https://help.aliyun.com/document_detail/2867675.html) operation.
 *
 * @param request SubmitMediaConvertJobRequest
 * @return SubmitMediaConvertJobResponse
 */
SubmitMediaConvertJobResponse Client::submitMediaConvertJob(const SubmitMediaConvertJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaConvertJobWithOptions(request, runtime);
}

/**
 * @summary Creates an asynchronous job to retrieve media information.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for background processing. You can retrieve the final result via a callback or by [querying media information tasks](https://help.aliyun.com/document_detail/441200.html).
 * - Use this API to perform media analysis on input files. It is ideal for use cases that are not time-sensitive or that require high concurrency.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Creates an asynchronous job to retrieve media information.
 *
 * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for background processing. You can retrieve the final result via a callback or by [querying media information tasks](https://help.aliyun.com/document_detail/441200.html).
 * - Use this API to perform media analysis on input files. It is ideal for use cases that are not time-sensitive or that require high concurrency.
 *
 * @param request SubmitMediaInfoJobRequest
 * @return SubmitMediaInfoJobResponse
 */
SubmitMediaInfoJobResponse Client::submitMediaInfoJob(const SubmitMediaInfoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaInfoJobWithOptions(request, runtime);
}

/**
 * @summary The `SubmitMediaProducingJob` API submits a media production job. This job provides automated processing for post-production tasks, such as editing and composing video and audio assets.
 *
 * @description - **Billing: Video editing is charged based on the duration of the output video. For more information, see [video editing](https://help.aliyun.com/document_detail/2840899.html). Failed jobs incur no charges.**
 * - Flexible editing capabilities: Use this operation to arrange and design assets. It supports complex video editing through flexible [timeline](https://help.aliyun.com/document_detail/198823.html) configurations.
 * - Asset reference rules: Assets referenced in the timeline can be media assets from your asset library or OSS objects. External URLs and CDN URLs are not supported. If an asset is an OSS object, MediaUrl must be an OSS URL, for example: https\\://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
 * - Asynchronous job execution: This operation creates an [asynchronous task](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a task ID and queues the job for background processing. The job is not yet complete at this stage. The system delivers the final result via a callback notification. You can also query the job status by [querying the editing and compositing job](https://help.aliyun.com/document_detail/441149.html).
 * - Job status query:
 *   1. Call [Query an editing and compositing job](https://help.aliyun.com/document_detail/441149.html) and pass the JobId to query the job status and result.
 *   2. When you submit an editing and compositing job, you can include a callback URL in the **UserData** parameter of your request. When the job completes or fails, the system sends a notification to this callback URL. You can use the callback data to retrieve the job status.
 * - Media asset registration and analysis: After video compositing completes, the system automatically registers a new media asset, which is initially in an analyzing state. After the analysis is complete, you can use the MediaId to retrieve the duration and resolution of the output video.
 * ## Limitations
 * - The throttling limit for this operation is 30 QPS. Submitted jobs are queued and processed asynchronously.
 *   > If you exceed this limit, you may encounter a "Throttling.User" error. For more information, see ["Throttling.User" error when submitting editing jobs](https://help.aliyun.com/document_detail/453484.html).
 * - When you submit a large number of jobs (for example, 1,000 or 10,000), the system scales out automatically, but you may experience queueing delays.
 * - The maximum number of tracks is 100 for each type: video, image, and subtitle.
 * - While there is no limit on the number of assets, their total size must not exceed 1 TB.
 * - The region of the input or output OSS bucket must match the IMS region.
 * - When the output is a video, the following resolution limits apply:
 *   - Both the width and height must be at least 128 px.
 *   - Neither the width nor the height can exceed 4096 px.
 *   - The shorter side cannot exceed 2160 px.
 *
 * @param request SubmitMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaProducingJobResponse
 */
SubmitMediaProducingJobResponse Client::submitMediaProducingJobWithOptions(const SubmitMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClipsParam()) {
    query["ClipsParam"] = request.getClipsParam();
  }

  if (!!request.hasEditingProduceConfig()) {
    query["EditingProduceConfig"] = request.getEditingProduceConfig();
  }

  if (!!request.hasMediaMetadata()) {
    query["MediaMetadata"] = request.getMediaMetadata();
  }

  if (!!request.hasOutputMediaConfig()) {
    query["OutputMediaConfig"] = request.getOutputMediaConfig();
  }

  if (!!request.hasOutputMediaTarget()) {
    query["OutputMediaTarget"] = request.getOutputMediaTarget();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectMetadata()) {
    query["ProjectMetadata"] = request.getProjectMetadata();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.getTimeline();
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
 * @summary The `SubmitMediaProducingJob` API submits a media production job. This job provides automated processing for post-production tasks, such as editing and composing video and audio assets.
 *
 * @description - **Billing: Video editing is charged based on the duration of the output video. For more information, see [video editing](https://help.aliyun.com/document_detail/2840899.html). Failed jobs incur no charges.**
 * - Flexible editing capabilities: Use this operation to arrange and design assets. It supports complex video editing through flexible [timeline](https://help.aliyun.com/document_detail/198823.html) configurations.
 * - Asset reference rules: Assets referenced in the timeline can be media assets from your asset library or OSS objects. External URLs and CDN URLs are not supported. If an asset is an OSS object, MediaUrl must be an OSS URL, for example: https\\://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
 * - Asynchronous job execution: This operation creates an [asynchronous task](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a task ID and queues the job for background processing. The job is not yet complete at this stage. The system delivers the final result via a callback notification. You can also query the job status by [querying the editing and compositing job](https://help.aliyun.com/document_detail/441149.html).
 * - Job status query:
 *   1. Call [Query an editing and compositing job](https://help.aliyun.com/document_detail/441149.html) and pass the JobId to query the job status and result.
 *   2. When you submit an editing and compositing job, you can include a callback URL in the **UserData** parameter of your request. When the job completes or fails, the system sends a notification to this callback URL. You can use the callback data to retrieve the job status.
 * - Media asset registration and analysis: After video compositing completes, the system automatically registers a new media asset, which is initially in an analyzing state. After the analysis is complete, you can use the MediaId to retrieve the duration and resolution of the output video.
 * ## Limitations
 * - The throttling limit for this operation is 30 QPS. Submitted jobs are queued and processed asynchronously.
 *   > If you exceed this limit, you may encounter a "Throttling.User" error. For more information, see ["Throttling.User" error when submitting editing jobs](https://help.aliyun.com/document_detail/453484.html).
 * - When you submit a large number of jobs (for example, 1,000 or 10,000), the system scales out automatically, but you may experience queueing delays.
 * - The maximum number of tracks is 100 for each type: video, image, and subtitle.
 * - While there is no limit on the number of assets, their total size must not exceed 1 TB.
 * - The region of the input or output OSS bucket must match the IMS region.
 * - When the output is a video, the following resolution limits apply:
 *   - Both the width and height must be at least 128 px.
 *   - Neither the width nor the height can exceed 4096 px.
 *   - The shorter side cannot exceed 2160 px.
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
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputs(), "Inputs", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputsShrink()) {
    query["Inputs"] = request.getInputsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
    query["ExportType"] = request.getExportType();
  }

  if (!!request.hasOutputMediaConfig()) {
    query["OutputMediaConfig"] = request.getOutputMediaConfig();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.getTimeline();
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
 * @summary Submits a batch job to render multiple videos by providing a list of editing project IDs.
 *
 * @description - After submitting a job, you can call ListBatchMediaProducingJob to retrieve all matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call GetBatchMediaProducingJob.
 *
 * @param request SubmitSceneBatchEditingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSceneBatchEditingJobResponse
 */
SubmitSceneBatchEditingJobResponse Client::submitSceneBatchEditingJobWithOptions(const SubmitSceneBatchEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSceneBatchEditingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSceneBatchEditingJobResponse>();
}

/**
 * @summary Submits a batch job to render multiple videos by providing a list of editing project IDs.
 *
 * @description - After submitting a job, you can call ListBatchMediaProducingJob to retrieve all matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call GetBatchMediaProducingJob.
 *
 * @param request SubmitSceneBatchEditingJobRequest
 * @return SubmitSceneBatchEditingJobResponse
 */
SubmitSceneBatchEditingJobResponse Client::submitSceneBatchEditingJob(const SubmitSceneBatchEditingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSceneBatchEditingJobWithOptions(request, runtime);
}

/**
 * @summary Selects suitable clips based on the submitted videos, images, and voiceovers, and returns the selection results. Two scenarios are supported: image-text matching and highlight mashup.
 *
 * @description - After a job is submitted, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to query submitted jobs, or [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to query the job status and results.
 * * The feature is in public preview and charges no fees.
 *
 * @param request SubmitSceneMediaSelectionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSceneMediaSelectionJobResponse
 */
SubmitSceneMediaSelectionJobResponse Client::submitSceneMediaSelectionJobWithOptions(const SubmitSceneMediaSelectionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
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
 * @description - After a job is submitted, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to query submitted jobs, or [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to query the job status and results.
 * * The feature is in public preview and charges no fees.
 *
 * @param request SubmitSceneMediaSelectionJobRequest
 * @return SubmitSceneMediaSelectionJobResponse
 */
SubmitSceneMediaSelectionJobResponse Client::submitSceneMediaSelectionJob(const SubmitSceneMediaSelectionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSceneMediaSelectionJobWithOptions(request, runtime);
}

/**
 * @summary Arranges media assets, including videos, images, background music, and voiceovers, into a complete timeline based on media selection results, and creates an editing project for preview. Two scenarios are supported: image-text matching and highlight mashup.
 *
 * @description - After submitting a job, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html).
 * * The feature is in public preview and does not charge fees.
 *
 * @param request SubmitSceneTimelineOrganizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSceneTimelineOrganizationJobResponse
 */
SubmitSceneTimelineOrganizationJobResponse Client::submitSceneTimelineOrganizationJobWithOptions(const SubmitSceneTimelineOrganizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasMediaSelectResult()) {
    query["MediaSelectResult"] = request.getMediaSelectResult();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitSceneTimelineOrganizationJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSceneTimelineOrganizationJobResponse>();
}

/**
 * @summary Arranges media assets, including videos, images, background music, and voiceovers, into a complete timeline based on media selection results, and creates an editing project for preview. Two scenarios are supported: image-text matching and highlight mashup.
 *
 * @description - After submitting a job, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html).
 * * The feature is in public preview and does not charge fees.
 *
 * @param request SubmitSceneTimelineOrganizationJobRequest
 * @return SubmitSceneTimelineOrganizationJobResponse
 */
SubmitSceneTimelineOrganizationJobResponse Client::submitSceneTimelineOrganizationJob(const SubmitSceneTimelineOrganizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSceneTimelineOrganizationJobWithOptions(request, runtime);
}

/**
 * @summary Analyzes media assets, such as short-form dramas, to automatically identify highlight clips and generate a highlight compilation.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous processing. Once the job is complete, the system sends the final result through a callback notification.
 *
 * @param request SubmitScreenMediaHighlightsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitScreenMediaHighlightsJobResponse
 */
SubmitScreenMediaHighlightsJobResponse Client::submitScreenMediaHighlightsJobWithOptions(const SubmitScreenMediaHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
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
 * @summary Analyzes media assets, such as short-form dramas, to automatically identify highlight clips and generate a highlight compilation.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous processing. Once the job is complete, the system sends the final result through a callback notification.
 *
 * @param request SubmitScreenMediaHighlightsJobRequest
 * @return SubmitScreenMediaHighlightsJobResponse
 */
SubmitScreenMediaHighlightsJobResponse Client::submitScreenMediaHighlightsJob(const SubmitScreenMediaHighlightsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitScreenMediaHighlightsJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job to segment a long video into multiple video segments. The output can be multiple video files or a new media asset.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job in the background. You can get the results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or by calling the [Get smart task results](https://help.aliyun.com/document_detail/441172.html) operation.
 *
 * @param request SubmitSegmentationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSegmentationJobResponse
 */
SubmitSegmentationJobResponse Client::submitSegmentationJobWithOptions(const SubmitSegmentationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
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
 * @summary Submits a job to segment a long video into multiple video segments. The output can be multiple video files or a new media asset.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job in the background. You can get the results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or by calling the [Get smart task results](https://help.aliyun.com/document_detail/441172.html) operation.
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
 * @description ### Prerequisites
 * Before submitting a smart tagging job, you must configure the analysis types in a template. For more information, see [CreateCustomTemplate](https://help.aliyun.com/document_detail/441184.html).
 * ### Limitations
 * - The smart tagging feature is available only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
 * - The default concurrency for the smart tagging pipeline is 2. To request a higher concurrency limit, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q).
 * - Smart tagging jobs and their results are retained for 180 days, after which they are automatically deleted.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasContentAddr()) {
    query["ContentAddr"] = request.getContentAddr();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.getNotifyUrl();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @description ### Prerequisites
 * Before submitting a smart tagging job, you must configure the analysis types in a template. For more information, see [CreateCustomTemplate](https://help.aliyun.com/document_detail/441184.html).
 * ### Limitations
 * - The smart tagging feature is available only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
 * - The default concurrency for the smart tagging pipeline is 2. To request a higher concurrency limit, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q).
 * - Smart tagging jobs and their results are retained for 180 days, after which they are automatically deleted.
 *
 * @param request SubmitSmarttagJobRequest
 * @return SubmitSmarttagJobResponse
 */
SubmitSmarttagJobResponse Client::submitSmarttagJob(const SubmitSmarttagJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmarttagJobWithOptions(request, runtime);
}

/**
 * @summary This API submits a snapshot job. Specify a media file by its ID or URL, a time point, and the desired format. The API then generates the snapshot and saves it to the specified location.
 *
 * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). Submitting a task returns a task ID and queues it for asynchronous processing. A callback delivers the final result. Alternatively, you can check the task status by [querying screenshot task details](https://help.aliyun.com/document_detail/441203.html).
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary This API submits a snapshot job. Specify a media file by its ID or URL, a time point, and the desired format. The API then generates the snapshot and saves it to the specified location.
 *
 * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). Submitting a task returns a task ID and queues it for asynchronous processing. A callback delivers the final result. Alternatively, you can check the task status by [querying screenshot task details](https://help.aliyun.com/document_detail/441203.html).
 *
 * @param request SubmitSnapshotJobRequest
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJob(const SubmitSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Starts a job to generate a highlight video from sports footage with commentary.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API immediately returns a job ID. The job is then queued for asynchronous processing. A callback delivers the final result.
 *
 * @param request SubmitSportsHighlightsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSportsHighlightsJobResponse
 */
SubmitSportsHighlightsJobResponse Client::submitSportsHighlightsJobWithOptions(const SubmitSportsHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.getInputConfig();
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
 * @summary Starts a job to generate a highlight video from sports footage with commentary.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API immediately returns a job ID. The job is then queued for asynchronous processing. A callback delivers the final result.
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
    query["Audios"] = request.getAudios();
  }

  if (!!request.hasAuthentication()) {
    query["Authentication"] = request.getAuthentication();
  }

  if (!!request.hasDemoAudioMediaURL()) {
    query["DemoAudioMediaURL"] = request.getDemoAudioMediaURL();
  }

  if (!!request.hasGender()) {
    query["Gender"] = request.getGender();
  }

  if (!!request.hasVoiceName()) {
    query["VoiceName"] = request.getVoiceName();
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
 * @description Analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @description Analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
 *
 * @param request SubmitSyncMediaInfoJobRequest
 * @return SubmitSyncMediaInfoJobResponse
 */
SubmitSyncMediaInfoJobResponse Client::submitSyncMediaInfoJob(const SubmitSyncMediaInfoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSyncMediaInfoJobWithOptions(request, runtime);
}

/**
 * @summary Generates marketing copy based on the provided keywords, text length, and number of copy variations. Due to the complexities of the Chinese language, the length of the output text may differ from the requested length. After submitting the job, call the `GetSmartHandleJob` operation with the returned job ID to query the job status and retrieve the results.
 *
 * @description - Before you call this operation, you must purchase the enterprise subscription service to obtain the required permissions<props="china">. For more information, see [subscription billing](~~439260#3285adfad70dw~~).
 * - This operation is billed based on the number of tokens in the generated content. The number of tokens is positively correlated with the number of characters in the generated text. For more information, see [smart video creation](https://help.aliyun.com/document_detail/2840901.html). No charges are incurred for failed jobs.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID. The job is then queued for background processing. The service delivers results via a callback. You can also call [GetSmartHandleJob](https://help.aliyun.com/document_detail/441172.html) to actively poll for the job status.
 *
 * @param request SubmitTextGenerateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTextGenerateJobResponse
 */
SubmitTextGenerateJobResponse Client::submitTextGenerateJobWithOptions(const SubmitTextGenerateJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGenerateConfig()) {
    query["GenerateConfig"] = request.getGenerateConfig();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Generates marketing copy based on the provided keywords, text length, and number of copy variations. Due to the complexities of the Chinese language, the length of the output text may differ from the requested length. After submitting the job, call the `GetSmartHandleJob` operation with the returned job ID to query the job status and retrieve the results.
 *
 * @description - Before you call this operation, you must purchase the enterprise subscription service to obtain the required permissions<props="china">. For more information, see [subscription billing](~~439260#3285adfad70dw~~).
 * - This operation is billed based on the number of tokens in the generated content. The number of tokens is positively correlated with the number of characters in the generated text. For more information, see [smart video creation](https://help.aliyun.com/document_detail/2840901.html). No charges are incurred for failed jobs.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID. The job is then queued for background processing. The service delivers results via a callback. You can also call [GetSmartHandleJob](https://help.aliyun.com/document_detail/441172.html) to actively poll for the job status.
 *
 * @param request SubmitTextGenerateJobRequest
 * @return SubmitTextGenerateJobResponse
 */
SubmitTextGenerateJobResponse Client::submitTextGenerateJob(const SubmitTextGenerateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTextGenerateJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job to generate A/B stream variants of a video for forensic watermarking.
 *
 * @description - This operation supports only videos that are three minutes or longer. Submitting a job for a shorter video may cause the API call to fail or produce no output.
 * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job asynchronously. You can obtain the processing result through a callback or by [querying the list of A/B stream forensic watermarking jobs](https://help.aliyun.com/document_detail/2862133.html).
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  json query = {};
  if (!!request.hasCipherBase64ed()) {
    query["CipherBase64ed"] = request.getCipherBase64ed();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTotalTime()) {
    query["TotalTime"] = request.getTotalTime();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a job to generate A/B stream variants of a video for forensic watermarking.
 *
 * @description - This operation supports only videos that are three minutes or longer. Submitting a job for a shorter video may cause the API call to fail or produce no output.
 * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job asynchronously. You can obtain the processing result through a callback or by [querying the list of A/B stream forensic watermarking jobs](https://help.aliyun.com/document_detail/2862133.html).
 *
 * @param request SubmitTraceAbJobRequest
 * @return SubmitTraceAbJobResponse
 */
SubmitTraceAbJobResponse Client::submitTraceAbJob(const SubmitTraceAbJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceAbJobWithOptions(request, runtime);
}

/**
 * @summary Submits a trace watermark extraction job.
 *
 * @description - The digital watermarking APIs are available only in the China (Shanghai) and China (Beijing) regions.
 * - Trace watermark extraction is supported only for videos that are 3 minutes or longer. Jobs for shorter videos will fail.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, a job ID is returned. The job is not immediately complete and is queued for asynchronous processing. You can get the final result through a callback notification or check the job status by calling the [GetTraceExtractJob](https://help.aliyun.com/document_detail/2862130.html) operation.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a trace watermark extraction job.
 *
 * @description - The digital watermarking APIs are available only in the China (Shanghai) and China (Beijing) regions.
 * - Trace watermark extraction is supported only for videos that are 3 minutes or longer. Jobs for shorter videos will fail.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, a job ID is returned. The job is not immediately complete and is queued for asynchronous processing. You can get the final result through a callback notification or check the job status by calling the [GetTraceExtractJob](https://help.aliyun.com/document_detail/2862130.html) operation.
 *
 * @param request SubmitTraceExtractJobRequest
 * @return SubmitTraceExtractJobResponse
 */
SubmitTraceExtractJobResponse Client::submitTraceExtractJob(const SubmitTraceExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceExtractJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job to process an M3U8 file for video watermarking for tracing.
 *
 * @description - You must first obtain a media ID by submitting a job for an A/B stream with video watermarking for tracing. This operation uses the returned media ID for processing.
 * - Currently, digital watermarking-related operations are supported only in the China (Shanghai) and China (Beijing) regions.
 * - This is an [asynchronous call](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a task ID and processes the job in the background. The initial response does not mean the job is complete. You can get the final result through a [callback notification](https://help.aliyun.com/document_detail/2862136.html) or by calling the [QueryTraceM3u8JobList](https://help.aliyun.com/document_detail/2862136.html) operation to check the job\\"s status.
 * - The signature for an M3U8 file generated by a video watermarking for tracing job is valid for 24 hours after job completion. You must query and use the watermarking information within this period. If the signature expires, you can no longer retrieve the watermarking information. To regain access, you must submit a new job.
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
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  json query = {};
  if (!!request.hasKeyUri()) {
    query["KeyUri"] = request.getKeyUri();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.getOutputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasTrace()) {
    query["Trace"] = request.getTrace();
  }

  if (!!request.hasTraceMediaId()) {
    query["TraceMediaId"] = request.getTraceMediaId();
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
 * @summary Submits a job to process an M3U8 file for video watermarking for tracing.
 *
 * @description - You must first obtain a media ID by submitting a job for an A/B stream with video watermarking for tracing. This operation uses the returned media ID for processing.
 * - Currently, digital watermarking-related operations are supported only in the China (Shanghai) and China (Beijing) regions.
 * - This is an [asynchronous call](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a task ID and processes the job in the background. The initial response does not mean the job is complete. You can get the final result through a [callback notification](https://help.aliyun.com/document_detail/2862136.html) or by calling the [QueryTraceM3u8JobList](https://help.aliyun.com/document_detail/2862136.html) operation to check the job\\"s status.
 * - The signature for an M3U8 file generated by a video watermarking for tracing job is valid for 24 hours after job completion. You must query and use the watermarking information within this period. If the signature expires, you can no longer retrieve the watermarking information. To regain access, you must submit a new job.
 *
 * @param request SubmitTraceM3u8JobRequest
 * @return SubmitTraceM3u8JobResponse
 */
SubmitTraceM3u8JobResponse Client::submitTraceM3u8Job(const SubmitTraceM3u8JobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceM3u8JobWithOptions(request, runtime);
}

/**
 * @summary Call the SubmitTranscodeJob operation to submit a video or audio transcoding job to Intelligent Media Services. In the request, you must specify the source file to transcode, the output format, and related parameters.
 *
 * @description - This operation will be discontinued on December 31, 2025. Use [SubmitMediaConvertJob](https://help.aliyun.com/document_detail/2867673.html) instead.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID. The job is not completed immediately but is queued for asynchronous execution in the background. You will receive the final result through a callback notification. You can also call [QueryTranscodeJob](https://help.aliyun.com/document_detail/441206.html) to query the job status.
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
    request.setInputGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputGroup(), "InputGroup", "json"));
  }

  if (!!tmpReq.hasOutputGroup()) {
    request.setOutputGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutputGroup(), "OutputGroup", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInputGroupShrink()) {
    query["InputGroup"] = request.getInputGroupShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOutputGroupShrink()) {
    query["OutputGroup"] = request.getOutputGroupShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.getScheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Call the SubmitTranscodeJob operation to submit a video or audio transcoding job to Intelligent Media Services. In the request, you must specify the source file to transcode, the output format, and related parameters.
 *
 * @description - This operation will be discontinued on December 31, 2025. Use [SubmitMediaConvertJob](https://help.aliyun.com/document_detail/2867673.html) instead.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID. The job is not completed immediately but is queued for asynchronous execution in the background. You will receive the final result through a callback notification. You can also call [QueryTranscodeJob](https://help.aliyun.com/document_detail/441206.html) to query the job status.
 *
 * @param request SubmitTranscodeJobRequest
 * @return SubmitTranscodeJobResponse
 */
SubmitTranscodeJobResponse Client::submitTranscodeJob(const SubmitTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video cognition job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and queues it for processing. The final results are delivered via a callback notification. You can also check the job status by calling the [QueryIntelligentContentUnderstandingTask](https://help.aliyun.com/document_detail/2975154.html) operation.
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
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.getInputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Submits a video cognition job.
 *
 * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and queues it for processing. The final results are delivered via a callback notification. You can also check the job status by calling the [QueryIntelligentContentUnderstandingTask](https://help.aliyun.com/document_detail/2975154.html) operation.
 *
 * @param request SubmitVideoCognitionJobRequest
 * @return SubmitVideoCognitionJobResponse
 */
SubmitVideoCognitionJobResponse Client::submitVideoCognitionJob(const SubmitVideoCognitionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoCognitionJobWithOptions(request, runtime);
}

/**
 * @summary Call this operation to submit a video translation job. This service can translate subtitles and spoken content, and generate lip-sync for the translated audio.
 *
 * @description - The region in each media asset\\"s OSS URL must match the region of the API endpoint you call.
 * - This operation supports up to 30 requests per second (QPS). If you submit a large number of jobs, they are automatically queued and processed with dynamic scaling. Job concurrency is unlimited.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID and queues the job for background processing. The final result is delivered through a callback. You can also poll for the job status by calling the [GetAIJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
 * >Notice: 
 * For detailed parameter descriptions and examples, see
 * <props="china">
 * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/zh/ims/use-cases/introduction-and-examples-of-video-translation-parameters)
 * <props="intl">
 * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/document_detail/2852702.html)
 *
 * @param request SubmitVideoTranslationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJobWithOptions(const SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.getEditingConfig();
  }

  if (!!request.hasInputConfig()) {
    query["InputConfig"] = request.getInputConfig();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.getOutputConfig();
  }

  if (!!request.hasSignature()) {
    query["Signature"] = request.getSignature();
  }

  if (!!request.hasSignatureMehtod()) {
    query["SignatureMehtod"] = request.getSignatureMehtod();
  }

  if (!!request.hasSignatureNonce()) {
    query["SignatureNonce"] = request.getSignatureNonce();
  }

  if (!!request.hasSignatureType()) {
    query["SignatureType"] = request.getSignatureType();
  }

  if (!!request.hasSignatureVersion()) {
    query["SignatureVersion"] = request.getSignatureVersion();
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
 * @summary Call this operation to submit a video translation job. This service can translate subtitles and spoken content, and generate lip-sync for the translated audio.
 *
 * @description - The region in each media asset\\"s OSS URL must match the region of the API endpoint you call.
 * - This operation supports up to 30 requests per second (QPS). If you submit a large number of jobs, they are automatically queued and processed with dynamic scaling. Job concurrency is unlimited.
 * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID and queues the job for background processing. The final result is delivered through a callback. You can also poll for the job status by calling the [GetAIJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
 * >Notice: 
 * For detailed parameter descriptions and examples, see
 * <props="china">
 * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/zh/ims/use-cases/introduction-and-examples-of-video-translation-parameters)
 * <props="intl">
 * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/document_detail/2852702.html)
 *
 * @param request SubmitVideoTranslationJobRequest
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJob(const SubmitVideoTranslationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoTranslationJobWithOptions(request, runtime);
}

/**
 * @summary Submits a Yike AI application job.
 *
 * @param request SubmitYikeAIAppJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeAIAppJobResponse
 */
SubmitYikeAIAppJobResponse Client::submitYikeAIAppJobWithOptions(const SubmitYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppParams()) {
    body["AppParams"] = request.getAppParams();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  if (!!request.hasProductionId()) {
    body["ProductionId"] = request.getProductionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitYikeAIAppJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeAIAppJobResponse>();
}

/**
 * @summary Submits a Yike AI application job.
 *
 * @param request SubmitYikeAIAppJobRequest
 * @return SubmitYikeAIAppJobResponse
 */
SubmitYikeAIAppJobResponse Client::submitYikeAIAppJob(const SubmitYikeAIAppJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeAIAppJobWithOptions(request, runtime);
}

/**
 * @summary Submits a Yike AI application job.
 *
 * @param request SubmitYikeStoryboardJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitYikeStoryboardJobResponse
 */
SubmitYikeStoryboardJobResponse Client::submitYikeStoryboardJobWithOptions(const SubmitYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAspectRatio()) {
    query["AspectRatio"] = request.getAspectRatio();
  }

  if (!!request.hasExecMode()) {
    query["ExecMode"] = request.getExecMode();
  }

  if (!!request.hasModelParams()) {
    query["ModelParams"] = request.getModelParams();
  }

  if (!!request.hasNarrationVoiceId()) {
    query["NarrationVoiceId"] = request.getNarrationVoiceId();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasShotPromptMode()) {
    query["ShotPromptMode"] = request.getShotPromptMode();
  }

  if (!!request.hasSkipFailureShot()) {
    query["SkipFailureShot"] = request.getSkipFailureShot();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVideoModel()) {
    query["VideoModel"] = request.getVideoModel();
  }

  json body = {};
  if (!!request.hasFileURL()) {
    body["FileURL"] = request.getFileURL();
  }

  if (!!request.hasShotSplitMode()) {
    body["ShotSplitMode"] = request.getShotSplitMode();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStyleId()) {
    body["StyleId"] = request.getStyleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitYikeStoryboardJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitYikeStoryboardJobResponse>();
}

/**
 * @summary Submits a Yike AI application job.
 *
 * @param request SubmitYikeStoryboardJobRequest
 * @return SubmitYikeStoryboardJobResponse
 */
SubmitYikeStoryboardJobResponse Client::submitYikeStoryboardJob(const SubmitYikeStoryboardJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitYikeStoryboardJobWithOptions(request, runtime);
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
    query["HumanAgentUserId"] = request.getHumanAgentUserId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequireToken()) {
    query["RequireToken"] = request.getRequireToken();
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
 * @summary Modifies the configuration of a specified AI agent instance.
 *
 * @description This operation updates the configuration of an AI agent instance, such as its voice.
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
    request.setAgentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentConfig(), "AgentConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentConfigShrink()) {
    query["AgentConfig"] = request.getAgentConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Modifies the configuration of a specified AI agent instance.
 *
 * @description This operation updates the configuration of an AI agent instance, such as its voice.
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
    body["AdMarkerPassthrough"] = request.getAdMarkerPassthrough();
  }

  if (!!request.hasAdsUrl()) {
    body["AdsUrl"] = request.getAdsUrl();
  }

  if (!!request.hasCdnAdSegmentUrlPrefix()) {
    body["CdnAdSegmentUrlPrefix"] = request.getCdnAdSegmentUrlPrefix();
  }

  if (!!request.hasCdnContentSegmentUrlPrefix()) {
    body["CdnContentSegmentUrlPrefix"] = request.getCdnContentSegmentUrlPrefix();
  }

  if (!!request.hasConfigAliases()) {
    body["ConfigAliases"] = request.getConfigAliases();
  }

  if (!!request.hasContentUrlPrefix()) {
    body["ContentUrlPrefix"] = request.getContentUrlPrefix();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPersonalizationThreshold()) {
    body["PersonalizationThreshold"] = request.getPersonalizationThreshold();
  }

  if (!!request.hasSlateAdUrl()) {
    body["SlateAdUrl"] = request.getSlateAdUrl();
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
    query["AvatarDescription"] = request.getAvatarDescription();
  }

  if (!!request.hasAvatarName()) {
    query["AvatarName"] = request.getAvatarName();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPortrait()) {
    query["Portrait"] = request.getPortrait();
  }

  if (!!request.hasThumbnail()) {
    query["Thumbnail"] = request.getThumbnail();
  }

  if (!!request.hasTransparent()) {
    query["Transparent"] = request.getTransparent();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.getVideo();
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
    query["AccessPolicy"] = request.getAccessPolicy();
  }

  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasFillerSourceLocationName()) {
    query["FillerSourceLocationName"] = request.getFillerSourceLocationName();
  }

  if (!!request.hasFillerSourceName()) {
    query["FillerSourceName"] = request.getFillerSourceName();
  }

  if (!!request.hasOutPutConfigList()) {
    query["OutPutConfigList"] = request.getOutPutConfigList();
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
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
    query["DemoAudioMediaId"] = request.getDemoAudioMediaId();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.getVoiceId();
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
 * @summary Updates the title, timeline, cover, and other properties of a cloud editing project.
 *
 * @param request UpdateEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProjectWithOptions(const UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessStatus()) {
    query["BusinessStatus"] = request.getBusinessStatus();
  }

  if (!!request.hasClipsParam()) {
    query["ClipsParam"] = request.getClipsParam();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.getTimeline();
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
 * @summary Updates the title, timeline, cover, and other properties of a cloud editing project.
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
 * - Modify a specified hotword library.
 * - The hotword library ID (`HotwordLibraryId`) is required to identify the library that requires modification.
 * - You can modify its name (`Name` ), description (`Description` ), and hotword list (`HotWords`).
 * - Each hotword in the list can also be modified, including its content (`Text`), weight (`Weight`), language (`Language`), and translation results (`TranspositionResultList`).
 * - A single account supports up to 100 hotword libraries, each containing a maximum of 300 hotword entries. In a library, the combination of `language` and `text` of an entry must be unique. The combination of `TranslatedText` and `TargetLanguage` in `TranspositionResultList` must also be unique.
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
    request.setHotwordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotwords(), "Hotwords", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHotwordLibraryId()) {
    query["HotwordLibraryId"] = request.getHotwordLibraryId();
  }

  if (!!request.hasHotwordsShrink()) {
    query["Hotwords"] = request.getHotwordsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
 * - Modify a specified hotword library.
 * - The hotword library ID (`HotwordLibraryId`) is required to identify the library that requires modification.
 * - You can modify its name (`Name` ), description (`Description` ), and hotword list (`HotWords`).
 * - Each hotword in the list can also be modified, including its content (`Text`), weight (`Weight`), language (`Language`), and translation results (`TranspositionResultList`).
 * - A single account supports up to 100 hotword libraries, each containing a maximum of 300 hotword entries. In a library, the combination of `language` and `text` of an entry must be unique. The combination of `TranslatedText` and `TargetLanguage` in `TranspositionResultList` must also be unique.
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
    body["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasSegmentCount()) {
    body["SegmentCount"] = request.getSegmentCount();
  }

  if (!!request.hasSegmentDuration()) {
    body["SegmentDuration"] = request.getSegmentDuration();
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
    body["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasRotateCredentials()) {
    body["RotateCredentials"] = request.getRotateCredentials();
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
    body["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
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
 * @summary Update the real-time packaging origin endpoint configuration of a channel group, supporting protocol, time-shift settings, and access control.
 *
 * @description ## Request Description
 * Modify the origin endpoint configuration for the real-time packaging service under a specified channel group. You can use this API to adjust the origin protocol policy, set the time-shift duration in days, define the playlist name, and configure IP blacklists and whitelists to achieve fine-grained management of real-time streaming media delivery. Note that some parameters are required, and you must provide either an IP whitelist or an origin request header (at least one of them).
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
    request.setLivePackagingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLivePackagingConfig(), "LivePackagingConfig", "json"));
  }

  json body = {};
  if (!!request.hasAuthorizationCode()) {
    body["AuthorizationCode"] = request.getAuthorizationCode();
  }

  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointName()) {
    body["EndpointName"] = request.getEndpointName();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasIpBlacklist()) {
    body["IpBlacklist"] = request.getIpBlacklist();
  }

  if (!!request.hasIpWhitelist()) {
    body["IpWhitelist"] = request.getIpWhitelist();
  }

  if (!!request.hasLivePackagingConfigShrink()) {
    body["LivePackagingConfig"] = request.getLivePackagingConfigShrink();
  }

  if (!!request.hasManifestName()) {
    body["ManifestName"] = request.getManifestName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasTimeshiftVision()) {
    body["TimeshiftVision"] = request.getTimeshiftVision();
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
 * @summary Update the real-time packaging origin endpoint configuration of a channel group, supporting protocol, time-shift settings, and access control.
 *
 * @description ## Request Description
 * Modify the origin endpoint configuration for the real-time packaging service under a specified channel group. You can use this API to adjust the origin protocol policy, set the time-shift duration in days, define the playlist name, and configure IP blacklists and whitelists to achieve fine-grained management of real-time streaming media delivery. Note that some parameters are required, and you must provide either an IP whitelist or an origin request header (at least one of them).
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
    request.setRecordFormatShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordFormat(), "RecordFormat", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRecordFormatShrink()) {
    body["RecordFormat"] = request.getRecordFormatShrink();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
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
    body["OverwriteFormat"] = request.getOverwriteFormat();
  }

  if (!!request.hasSequenceFormat()) {
    body["SequenceFormat"] = request.getSequenceFormat();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTimeInterval()) {
    body["TimeInterval"] = request.getTimeInterval();
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
 * @description - For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
 * - For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
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
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamInput(), "StreamInput", "json"));
  }

  if (!!tmpReq.hasTimedConfig()) {
    request.setTimedConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTimedConfig(), "TimedConfig", "json"));
  }

  if (!!tmpReq.hasTranscodeOutput()) {
    request.setTranscodeOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscodeOutput(), "TranscodeOutput", "json"));
  }

  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasStreamInputShrink()) {
    query["StreamInput"] = request.getStreamInputShrink();
  }

  if (!!request.hasTimedConfigShrink()) {
    query["TimedConfig"] = request.getTimedConfigShrink();
  }

  if (!!request.hasTranscodeOutputShrink()) {
    query["TranscodeOutput"] = request.getTranscodeOutputShrink();
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
 * @description - For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
 * - For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
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
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.getTemplateConfigShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Modify the input information of a specific MediaConnect flow
 *
 * @description - The input can only be modified when the Flow instance status is offline.
 * - The input type cannot be modified.
 *
 * @param request UpdateMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaConnectFlowInputResponse
 */
UpdateMediaConnectFlowInputResponse Client::updateMediaConnectFlowInputWithOptions(const UpdateMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.getCidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasInputFromUrl()) {
    query["InputFromUrl"] = request.getInputFromUrl();
  }

  if (!!request.hasInputName()) {
    query["InputName"] = request.getInputName();
  }

  if (!!request.hasMaxBitrate()) {
    query["MaxBitrate"] = request.getMaxBitrate();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.getSrtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.getSrtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.getSrtPbkeyLen();
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
 * @summary Modify the input information of a specific MediaConnect flow
 *
 * @description - The input can only be modified when the Flow instance status is offline.
 * - The input type cannot be modified.
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
 * @description - You can modify an output only when the flow is in the offline state.
 * - The output type cannot be modified.
 *
 * @param request UpdateMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaConnectFlowOutputResponse
 */
UpdateMediaConnectFlowOutputResponse Client::updateMediaConnectFlowOutputWithOptions(const UpdateMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.getCidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
  }

  if (!!request.hasOutputToUrl()) {
    query["OutputToUrl"] = request.getOutputToUrl();
  }

  if (!!request.hasPlayerLimit()) {
    query["PlayerLimit"] = request.getPlayerLimit();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.getSrtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.getSrtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.getSrtPbkeyLen();
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
 * @description - You can modify an output only when the flow is in the offline state.
 * - The output type cannot be modified.
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
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    query["AppendTags"] = request.getAppendTags();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.getInputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.getMediaTags();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
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
 * @description - You can modify a MediaLive channel only when it is not running.
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
    request.setAudioSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAudioSettings(), "AudioSettings", "json"));
  }

  if (!!tmpReq.hasInputAttachments()) {
    request.setInputAttachmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputAttachments(), "InputAttachments", "json"));
  }

  if (!!tmpReq.hasOutputGroups()) {
    request.setOutputGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutputGroups(), "OutputGroups", "json"));
  }

  if (!!tmpReq.hasVideoSettings()) {
    request.setVideoSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoSettings(), "VideoSettings", "json"));
  }

  json body = {};
  if (!!request.hasAudioSettingsShrink()) {
    body["AudioSettings"] = request.getAudioSettingsShrink();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasInputAttachmentsShrink()) {
    body["InputAttachments"] = request.getInputAttachmentsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputGroupsShrink()) {
    body["OutputGroups"] = request.getOutputGroupsShrink();
  }

  if (!!request.hasVideoSettingsShrink()) {
    body["VideoSettings"] = request.getVideoSettingsShrink();
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
 * @description - You can modify a MediaLive channel only when it is not running.
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
 * @summary Update a media live input.
 *
 * @description - Invoke this API to update a media live input.
 * - You can update an input only when it is not attached to any media live channel. Inputs that are already attached to a channel cannot be updated.
 * ## Queries per second (QPS) limit
 * The QPS limit for this API is 50 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API calls, which may impact your business. Make sure to call this API appropriately.
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
    request.setInputSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputSettings(), "InputSettings", "json"));
  }

  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityGroupIds(), "SecurityGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasInputSettingsShrink()) {
    query["InputSettings"] = request.getInputSettingsShrink();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIdsShrink();
  }

  json body = {};
  if (!!request.hasInputId()) {
    body["InputId"] = request.getInputId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Update a media live input.
 *
 * @description - Invoke this API to update a media live input.
 * - You can update an input only when it is not attached to any media live channel. Inputs that are already attached to a channel cannot be updated.
 * ## Queries per second (QPS) limit
 * The QPS limit for this API is 50 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API calls, which may impact your business. Make sure to call this API appropriately.
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
 * @description - You can modify a security group only when it is not associated with a MediaLive input.
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
    request.setWhitelistRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWhitelistRules(), "WhitelistRules", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasWhitelistRulesShrink()) {
    body["WhitelistRules"] = request.getWhitelistRulesShrink();
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
 * @description - You can modify a security group only when it is not associated with a MediaLive input.
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
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaMarks()) {
    query["MediaMarks"] = request.getMediaMarks();
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
 * @summary Update media asset information in the search library.
 *
 * @param request UpdateMediaToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaToSearchLibResponse
 */
UpdateMediaToSearchLibResponse Client::updateMediaToSearchLibWithOptions(const UpdateMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.getMsgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.getSearchLibName();
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
 * @summary Update media asset information in the search library.
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
    query["Name"] = request.getName();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
    query["AdBreaks"] = request.getAdBreaks();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.getChannelName();
  }

  if (!!request.hasClipRange()) {
    query["ClipRange"] = request.getClipRange();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.getProgramName();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTransition()) {
    query["Transition"] = request.getTransition();
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
 * @summary Updates the configuration of an RTC AI Agent instance, such as its voice and greeting.
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
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasConfigShrink()) {
    query["Config"] = request.getConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Updates the configuration of an RTC AI Agent instance, such as its voice and greeting.
 *
 * @param request UpdateRtcRobotInstanceRequest
 * @return UpdateRtcRobotInstanceResponse
 */
UpdateRtcRobotInstanceResponse Client::updateRtcRobotInstance(const UpdateRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies a source.
 *
 * @param request UpdateSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSourceResponse
 */
UpdateSourceResponse Client::updateSourceWithOptions(const UpdateSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHttpPackageConfigurations()) {
    query["HttpPackageConfigurations"] = request.getHttpPackageConfigurations();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.getSourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
 * @summary Modifies a source.
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
    query["BaseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasEnableSegmentDelivery()) {
    query["EnableSegmentDelivery"] = request.getEnableSegmentDelivery();
  }

  if (!!request.hasSegmentDeliveryUrl()) {
    query["SegmentDeliveryUrl"] = request.getSegmentDeliveryUrl();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.getSourceLocationName();
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
 * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request UpdateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverUrl()) {
    query["CoverUrl"] = request.getCoverUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPreviewMedia()) {
    query["PreviewMedia"] = request.getPreviewMedia();
  }

  if (!!request.hasRelatedMediaids()) {
    query["RelatedMediaids"] = request.getRelatedMediaids();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
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
 * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTemplateWithOptions(request, runtime);
}

/**
 * @summary The UploadMediaByURL API uploads audio or video files from source URLs. It supports batch uploads and is ideal for uploading files from a public URL instead of a local server or device.
 *
 * @description ### Description
 * - If a callback is configured, the service sends an event notification when the URL upload is complete. You can query the upload status by calling the API to retrieve URL upload information.
 * - After you successfully submit an upload job, the system creates an asynchronous task in the cloud and queues it for execution. After the upload is complete, you can use the URL and media ID from the event notification (message callback) to update your records.
 * ### Limitations
 * - This API supports uploading files to VOD storage only and does not support uploading to your own Object Storage Service (OSS) buckets. To use your own OSS storage, you must first pull the files to a local device, upload them to OSS by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) API to register the OSS object with the media asset library.
 * - This API is currently available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 * - This API supports uploading audio and video files only.
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

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasMediaMetaData()) {
    query["MediaMetaData"] = request.getMediaMetaData();
  }

  if (!!request.hasPostProcessConfig()) {
    query["PostProcessConfig"] = request.getPostProcessConfig();
  }

  if (!!request.hasUploadTargetConfig()) {
    query["UploadTargetConfig"] = request.getUploadTargetConfig();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.getUploadURLs();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary The UploadMediaByURL API uploads audio or video files from source URLs. It supports batch uploads and is ideal for uploading files from a public URL instead of a local server or device.
 *
 * @description ### Description
 * - If a callback is configured, the service sends an event notification when the URL upload is complete. You can query the upload status by calling the API to retrieve URL upload information.
 * - After you successfully submit an upload job, the system creates an asynchronous task in the cloud and queues it for execution. After the upload is complete, you can use the URL and media ID from the event notification (message callback) to update your records.
 * ### Limitations
 * - This API supports uploading files to VOD storage only and does not support uploading to your own Object Storage Service (OSS) buckets. To use your own OSS storage, you must first pull the files to a local device, upload them to OSS by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) API to register the OSS object with the media asset library.
 * - This API is currently available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 * - This API supports uploading audio and video files only.
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
 * @description - Pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
 * - Upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @description - Pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
 * - Upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
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