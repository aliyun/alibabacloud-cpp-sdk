#include <darabonba/Core.hpp>
#include <alibabacloud/Imm20200930.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Imm20200930::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Imm20200930
{

AlibabaCloud::Imm20200930::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing-gov-1" , "imm-vpc.cn-beijing-gov-1.aliyuncs.com"},
    {"us-west-1" , "imm.us-west-1.aliyuncs.com"},
    {"us-east-1" , "imm.us-east-1.aliyuncs.com"},
    {"eu-west-1" , "imm.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "imm.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "imm.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "imm.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "imm.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "imm.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "imm.cn-qingdao.aliyuncs.com"},
    {"cn-north-2-gov-1" , "imm.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-hongkong" , "imm.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "imm.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "imm.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "imm.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "imm.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "imm.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-2" , "imm.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "imm.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "imm.ap-south-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("imm", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds mosaics, Gaussian blurs, or solid color shapes to blur one or more areas of an image for privacy protection and saves the output image to the specified path in Object Storage Service (OSS).
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * *   The operation accepts JPG and PNG images with a maximum side length of 30,000 pixels and a total of up to 250 million pixels.
 *
 * @param tmpReq AddImageMosaicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImageMosaicResponse
 */
AddImageMosaicResponse Client::addImageMosaicWithOptions(const AddImageMosaicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddImageMosaicShrinkRequest request = AddImageMosaicShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasImageFormat()) {
    query["ImageFormat"] = request.getImageFormat();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasQuality()) {
    query["Quality"] = request.getQuality();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.getTargetsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddImageMosaic"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImageMosaicResponse>();
}

/**
 * @summary Adds mosaics, Gaussian blurs, or solid color shapes to blur one or more areas of an image for privacy protection and saves the output image to the specified path in Object Storage Service (OSS).
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * *   The operation accepts JPG and PNG images with a maximum side length of 30,000 pixels and a total of up to 250 million pixels.
 *
 * @param request AddImageMosaicRequest
 * @return AddImageMosaicResponse
 */
AddImageMosaicResponse Client::addImageMosaic(const AddImageMosaicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addImageMosaicWithOptions(request, runtime);
}

/**
 * @summary Adds objects to a story.
 *
 * @param tmpReq AddStoryFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddStoryFilesResponse
 */
AddStoryFilesResponse Client::addStoryFilesWithOptions(const AddStoryFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddStoryFilesShrinkRequest request = AddStoryFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  json body = {};
  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFilesShrink()) {
    body["Files"] = request.getFilesShrink();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddStoryFiles"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddStoryFilesResponse>();
}

/**
 * @summary Adds objects to a story.
 *
 * @param request AddStoryFilesRequest
 * @return AddStoryFilesResponse
 */
AddStoryFilesResponse Client::addStoryFiles(const AddStoryFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addStoryFilesWithOptions(request, runtime);
}

/**
 * @summary Binds an Object Storage Service (OSS) bucket to the specified project. The binding enables you to use IMM features by using the x-oss-process parameter.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   To use data processing capabilities of IMM based on the x-oss-process parameter, you must bind an OSS bucket to an IMM project. For more information, see [x-oss-process](https://help.aliyun.com/document_detail/2391270.html).
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 *
 * @param request AttachOSSBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachOSSBucketResponse
 */
AttachOSSBucketResponse Client::attachOSSBucketWithOptions(const AttachOSSBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.getOSSBucket();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachOSSBucket"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachOSSBucketResponse>();
}

/**
 * @summary Binds an Object Storage Service (OSS) bucket to the specified project. The binding enables you to use IMM features by using the x-oss-process parameter.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   To use data processing capabilities of IMM based on the x-oss-process parameter, you must bind an OSS bucket to an IMM project. For more information, see [x-oss-process](https://help.aliyun.com/document_detail/2391270.html).
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 *
 * @param request AttachOSSBucketRequest
 * @return AttachOSSBucketResponse
 */
AttachOSSBucketResponse Client::attachOSSBucket(const AttachOSSBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachOSSBucketWithOptions(request, runtime);
}

/**
 * @summary Deletes the metadata of multiple files from a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
 * > 
 * *   If you delete the metadata of a file from a dataset, the file stored in Object Storage Service (OSS) or Photo and Drive Service is **not** deleted. If you want to delete the file, use the operations provided by OSS or Photo and Drive Service.
 * *   Metadata deletion affects existing face groups and stories but does not affect existing spatiotemporal groups.
 *
 * @param tmpReq BatchDeleteFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteFileMetaResponse
 */
BatchDeleteFileMetaResponse Client::batchDeleteFileMetaWithOptions(const BatchDeleteFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteFileMetaShrinkRequest request = BatchDeleteFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasURIs()) {
    request.setURIsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getURIs(), "URIs", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURIsShrink()) {
    query["URIs"] = request.getURIsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteFileMetaResponse>();
}

/**
 * @summary Deletes the metadata of multiple files from a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
 * > 
 * *   If you delete the metadata of a file from a dataset, the file stored in Object Storage Service (OSS) or Photo and Drive Service is **not** deleted. If you want to delete the file, use the operations provided by OSS or Photo and Drive Service.
 * *   Metadata deletion affects existing face groups and stories but does not affect existing spatiotemporal groups.
 *
 * @param request BatchDeleteFileMetaRequest
 * @return BatchDeleteFileMetaResponse
 */
BatchDeleteFileMetaResponse Client::batchDeleteFileMeta(const BatchDeleteFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteFileMetaWithOptions(request, runtime);
}

/**
 * @summary Queries face clusters.
 *
 * @param tmpReq BatchGetFigureClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetFigureClusterResponse
 */
BatchGetFigureClusterResponse Client::batchGetFigureClusterWithOptions(const BatchGetFigureClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetFigureClusterShrinkRequest request = BatchGetFigureClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectIds()) {
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectIds(), "ObjectIds", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasObjectIdsShrink()) {
    query["ObjectIds"] = request.getObjectIdsShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetFigureCluster"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetFigureClusterResponse>();
}

/**
 * @summary Queries face clusters.
 *
 * @param request BatchGetFigureClusterRequest
 * @return BatchGetFigureClusterResponse
 */
BatchGetFigureClusterResponse Client::batchGetFigureCluster(const BatchGetFigureClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetFigureClusterWithOptions(request, runtime);
}

/**
 * @summary Queries metadata of multiple objects or files in the specified dataset.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, feel free to join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 *
 * @param tmpReq BatchGetFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetFileMetaResponse
 */
BatchGetFileMetaResponse Client::batchGetFileMetaWithOptions(const BatchGetFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetFileMetaShrinkRequest request = BatchGetFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasURIs()) {
    request.setURIsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getURIs(), "URIs", "json"));
  }

  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWithFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURIsShrink()) {
    query["URIs"] = request.getURIsShrink();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.getWithFieldsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetFileMetaResponse>();
}

/**
 * @summary Queries metadata of multiple objects or files in the specified dataset.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, feel free to join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 *
 * @param request BatchGetFileMetaRequest
 * @return BatchGetFileMetaResponse
 */
BatchGetFileMetaResponse Client::batchGetFileMeta(const BatchGetFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetFileMetaWithOptions(request, runtime);
}

/**
 * @summary This operation performs a batch index of object metadata by processing input files for tasks such as label detection, face detection, and location detection. The object metadata is then indexed into a dataset to support various data retrieval methods.
 *
 * @description - **Before you use this API, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 * - For a list of supported data processing tasks, see [Define a workflow](https://help.aliyun.com/document_detail/466304.html).
 * - The files to be indexed are subject to limits on their total number and size. For more information about dataset limits, see [Limits](https://help.aliyun.com/document_detail/475569.html). For information about how to create a dataset, see the parameter descriptions.
 * - For information about the regions that support file indexing, see the dataset and index information in [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq BatchIndexFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchIndexFileMetaResponse
 */
BatchIndexFileMetaResponse Client::batchIndexFileMetaWithOptions(const BatchIndexFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchIndexFileMetaShrinkRequest request = BatchIndexFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.getFilesShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchIndexFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchIndexFileMetaResponse>();
}

/**
 * @summary This operation performs a batch index of object metadata by processing input files for tasks such as label detection, face detection, and location detection. The object metadata is then indexed into a dataset to support various data retrieval methods.
 *
 * @description - **Before you use this API, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 * - For a list of supported data processing tasks, see [Define a workflow](https://help.aliyun.com/document_detail/466304.html).
 * - The files to be indexed are subject to limits on their total number and size. For more information about dataset limits, see [Limits](https://help.aliyun.com/document_detail/475569.html). For information about how to create a dataset, see the parameter descriptions.
 * - For information about the regions that support file indexing, see the dataset and index information in [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request BatchIndexFileMetaRequest
 * @return BatchIndexFileMetaResponse
 */
BatchIndexFileMetaResponse Client::batchIndexFileMeta(const BatchIndexFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchIndexFileMetaWithOptions(request, runtime);
}

/**
 * @summary Updates some metadata items of files indexed into a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   You cannot call this operation to update all metadata. You can update only metadata fields such as CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
 *
 * @param tmpReq BatchUpdateFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateFileMetaResponse
 */
BatchUpdateFileMetaResponse Client::batchUpdateFileMetaWithOptions(const BatchUpdateFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateFileMetaShrinkRequest request = BatchUpdateFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.getFilesShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchUpdateFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateFileMetaResponse>();
}

/**
 * @summary Updates some metadata items of files indexed into a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   You cannot call this operation to update all metadata. You can update only metadata fields such as CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
 *
 * @param request BatchUpdateFileMetaRequest
 * @return BatchUpdateFileMetaResponse
 */
BatchUpdateFileMetaResponse Client::batchUpdateFileMeta(const BatchUpdateFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateFileMetaWithOptions(request, runtime);
}

/**
 * @summary Compares the similarity of the largest faces in two images. The largest face refers to the largest face frame in an image after face detection.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   For the input image, only the face with the largest face frame in the image is used for face comparison. The face frame detection result is consistent with the responses of the [DetectImageFaces](https://help.aliyun.com/document_detail/478213.html) operation.
 *
 * @param tmpReq CompareImageFacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareImageFacesResponse
 */
CompareImageFacesResponse Client::compareImageFacesWithOptions(const CompareImageFacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CompareImageFacesShrinkRequest request = CompareImageFacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasSource()) {
    request.setSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSource(), "Source", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceShrink()) {
    query["Source"] = request.getSourceShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompareImageFaces"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareImageFacesResponse>();
}

/**
 * @summary Compares the similarity of the largest faces in two images. The largest face refers to the largest face frame in an image after face detection.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   For the input image, only the face with the largest face frame in the image is used for face comparison. The face frame detection result is consistent with the responses of the [DetectImageFaces](https://help.aliyun.com/document_detail/478213.html) operation.
 *
 * @param request CompareImageFacesRequest
 * @return CompareImageFacesResponse
 */
CompareImageFacesResponse Client::compareImageFaces(const CompareImageFacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareImageFacesWithOptions(request, runtime);
}

/**
 * @summary Phase II of AI Assistant, Q\\&A API
 *
 * @description ### Precautions
 * - Before using this interface, please make sure you fully understand the billing method and [pricing](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk) of the Intelligent Media Management product.
 * - Before calling this interface, ensure that you have indexed the files into the dataset (Dataset) through binding ([CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF)) or active indexing ([IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) or [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ)).
 * - The returned result is only an example. Depending on the [workflow template configuration](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp), the categories and content of the file metadata information obtained may differ from the example. If you have any questions, please join the DingTalk group by searching for the group number 21714099 in DingTalk.
 * ### Usage Restrictions
 * - The maximum length of the historical conversation is 100, including both user and assistant messages.
 * - Each message should not exceed 1000 Chinese characters.
 *
 * @param tmpReq ContextualAnswerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContextualAnswerResponse
 */
FutureGenerator<ContextualAnswerResponse> Client::contextualAnswerWithSSE(const ContextualAnswerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ContextualAnswerShrinkRequest request = ContextualAnswerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  json body = {};
  if (!!request.hasFilesShrink()) {
    body["Files"] = request.getFilesShrink();
  }

  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ContextualAnswer"},
    {"version" , "2020-09-30"},
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
      })).get<ContextualAnswerResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Phase II of AI Assistant, Q\\&A API
 *
 * @description ### Precautions
 * - Before using this interface, please make sure you fully understand the billing method and [pricing](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk) of the Intelligent Media Management product.
 * - Before calling this interface, ensure that you have indexed the files into the dataset (Dataset) through binding ([CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF)) or active indexing ([IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) or [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ)).
 * - The returned result is only an example. Depending on the [workflow template configuration](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp), the categories and content of the file metadata information obtained may differ from the example. If you have any questions, please join the DingTalk group by searching for the group number 21714099 in DingTalk.
 * ### Usage Restrictions
 * - The maximum length of the historical conversation is 100, including both user and assistant messages.
 * - Each message should not exceed 1000 Chinese characters.
 *
 * @param tmpReq ContextualAnswerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContextualAnswerResponse
 */
ContextualAnswerResponse Client::contextualAnswerWithOptions(const ContextualAnswerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ContextualAnswerShrinkRequest request = ContextualAnswerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  json body = {};
  if (!!request.hasFilesShrink()) {
    body["Files"] = request.getFilesShrink();
  }

  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ContextualAnswer"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContextualAnswerResponse>();
}

/**
 * @summary Phase II of AI Assistant, Q\\&A API
 *
 * @description ### Precautions
 * - Before using this interface, please make sure you fully understand the billing method and [pricing](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk) of the Intelligent Media Management product.
 * - Before calling this interface, ensure that you have indexed the files into the dataset (Dataset) through binding ([CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF)) or active indexing ([IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) or [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ)).
 * - The returned result is only an example. Depending on the [workflow template configuration](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp), the categories and content of the file metadata information obtained may differ from the example. If you have any questions, please join the DingTalk group by searching for the group number 21714099 in DingTalk.
 * ### Usage Restrictions
 * - The maximum length of the historical conversation is 100, including both user and assistant messages.
 * - Each message should not exceed 1000 Chinese characters.
 *
 * @param request ContextualAnswerRequest
 * @return ContextualAnswerResponse
 */
ContextualAnswerResponse Client::contextualAnswer(const ContextualAnswerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return contextualAnswerWithOptions(request, runtime);
}

/**
 * @summary Retrieves semantically similar documents. The operation is designed for multi-turn conversations and can process message input in historical conversations. The operation returns results that are highly related to the current conversation based on an in-depth understanding of contextual content. It provides consistent and efficient information retrieval in multi-turn conversations.
 *
 * @description ### 注意事项
 * - 请确保在使用该接口前，已充分了解智能媒体管理产品的收费方式和[价格](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk)。
 * - 调用该接口前，请确保您已通过绑定方式（ [CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF) ）或者主动索引（ [IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) 或者 [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ) ）方式将文件索引到数据集（Dataset）中。
 * - 返回结果仅为示例，根据[工作流模板配置](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp)不同，获取到的文件元数据信息的类别和包含的内容均有可能与示例不同。如果有疑问，请使用钉钉搜索钉钉群号 21714099 加入钉钉群进行反馈。
 * ### 使用限制
 * - 历史对话长度最长限制为 100，包括用户消息和助手消息。
 * - 每条消息长度不超过 1000 个汉字。
 *
 * @param tmpReq ContextualRetrievalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContextualRetrievalResponse
 */
ContextualRetrievalResponse Client::contextualRetrievalWithOptions(const ContextualRetrievalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ContextualRetrievalShrinkRequest request = ContextualRetrievalShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  if (!!tmpReq.hasSmartClusterIds()) {
    request.setSmartClusterIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSmartClusterIds(), "SmartClusterIds", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRecallOnly()) {
    query["RecallOnly"] = request.getRecallOnly();
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  if (!!request.hasSmartClusterIdsShrink()) {
    body["SmartClusterIds"] = request.getSmartClusterIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ContextualRetrieval"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContextualRetrievalResponse>();
}

/**
 * @summary Retrieves semantically similar documents. The operation is designed for multi-turn conversations and can process message input in historical conversations. The operation returns results that are highly related to the current conversation based on an in-depth understanding of contextual content. It provides consistent and efficient information retrieval in multi-turn conversations.
 *
 * @description ### 注意事项
 * - 请确保在使用该接口前，已充分了解智能媒体管理产品的收费方式和[价格](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk)。
 * - 调用该接口前，请确保您已通过绑定方式（ [CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF) ）或者主动索引（ [IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) 或者 [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ) ）方式将文件索引到数据集（Dataset）中。
 * - 返回结果仅为示例，根据[工作流模板配置](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp)不同，获取到的文件元数据信息的类别和包含的内容均有可能与示例不同。如果有疑问，请使用钉钉搜索钉钉群号 21714099 加入钉钉群进行反馈。
 * ### 使用限制
 * - 历史对话长度最长限制为 100，包括用户消息和助手消息。
 * - 每条消息长度不超过 1000 个汉字。
 *
 * @param request ContextualRetrievalRequest
 * @return ContextualRetrievalResponse
 */
ContextualRetrievalResponse Client::contextualRetrieval(const ContextualRetrievalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return contextualRetrievalWithOptions(request, runtime);
}

/**
 * @summary Creates a task to inspect a compressed file and retrieve a list of its contents without decompressing the file.
 *
 * @description > This API is in public preview. If you have any questions, join the DingTalk group to provide feedback. For the DingTalk group number, see [Contact us](https://help.aliyun.com/document_detail/84454.html).
 * - **Before using this API, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM)**.
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - File count limit: A compressed file can contain a maximum of 80,000 files.
 * - File size limit: The maximum size is 200 GB for ZIP and RAR files, and 50 GB for 7z files.
 * - This is an asynchronous API. Task information is saved for 7 days after a task starts and is then deleted. To view the task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through notification messages.
 *
 * @param tmpReq CreateArchiveFileInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArchiveFileInspectionTaskResponse
 */
CreateArchiveFileInspectionTaskResponse Client::createArchiveFileInspectionTaskWithOptions(const CreateArchiveFileInspectionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateArchiveFileInspectionTaskShrinkRequest request = CreateArchiveFileInspectionTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateArchiveFileInspectionTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateArchiveFileInspectionTaskResponse>();
}

/**
 * @summary Creates a task to inspect a compressed file and retrieve a list of its contents without decompressing the file.
 *
 * @description > This API is in public preview. If you have any questions, join the DingTalk group to provide feedback. For the DingTalk group number, see [Contact us](https://help.aliyun.com/document_detail/84454.html).
 * - **Before using this API, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM)**.
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - File count limit: A compressed file can contain a maximum of 80,000 files.
 * - File size limit: The maximum size is 200 GB for ZIP and RAR files, and 50 GB for 7z files.
 * - This is an asynchronous API. Task information is saved for 7 days after a task starts and is then deleted. To view the task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through notification messages.
 *
 * @param request CreateArchiveFileInspectionTaskRequest
 * @return CreateArchiveFileInspectionTaskResponse
 */
CreateArchiveFileInspectionTaskResponse Client::createArchiveFileInspectionTask(const CreateArchiveFileInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArchiveFileInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a batch processing task that performs specified operations, such as transcoding and format conversion, on multiple existing files.
 *
 * @description If you want to process data using [Object Storage Service (OSS) data processing](https://help.aliyun.com/document_detail/99372.html), make sure you [bind an OSS bucket](https://help.aliyun.com/document_detail/478206.html) before you create a batch processing task.
 *
 * @param tmpReq CreateBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchResponse
 */
CreateBatchResponse Client::createBatchWithOptions(const CreateBatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBatchShrinkRequest request = CreateBatchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActions()) {
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.getActionsShrink();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.getInputShrink();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasServiceRole()) {
    body["ServiceRole"] = request.getServiceRole();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateBatch"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchResponse>();
}

/**
 * @summary Creates a batch processing task that performs specified operations, such as transcoding and format conversion, on multiple existing files.
 *
 * @description If you want to process data using [Object Storage Service (OSS) data processing](https://help.aliyun.com/document_detail/99372.html), make sure you [bind an OSS bucket](https://help.aliyun.com/document_detail/478206.html) before you create a batch processing task.
 *
 * @param request CreateBatchRequest
 * @return CreateBatchResponse
 */
CreateBatchResponse Client::createBatch(const CreateBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchWithOptions(request, runtime);
}

/**
 * @summary Creates a binding relationship between a dataset and an Object Storage Service (OSS) bucket. This allows for the automatic synchronization of incremental and full data and indexing.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2743997.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * > Asynchronous processing does not guarantee timely task completion.
 * Before you create a binding, make sure that the project and the dataset that you want to use exist.
 * - For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * - For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
 * > The CreateBinding operation works by using the [workflow template](https://help.aliyun.com/document_detail/466304.html) that is specified when you created the project or dataset.
 * After you create a binding between a dataset and an OSS bucket, IMM scans the existing objects in the bucket and extracts metadata based on the scanning result. Then, IMM creates an index from the extracted metadata. If new objects are uploaded to the OSS bucket, IMM tracks and scans the objects and updates the index. For objects whose metadata index is created by calling this operation, you can call query operations, such as [SimpleQuery](https://help.aliyun.com/document_detail/478175.html), to query objects, manage objects, and collect statistics on objects.
 *
 * @param request CreateBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBindingResponse
 */
CreateBindingResponse Client::createBindingWithOptions(const CreateBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBinding"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBindingResponse>();
}

/**
 * @summary Creates a binding relationship between a dataset and an Object Storage Service (OSS) bucket. This allows for the automatic synchronization of incremental and full data and indexing.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2743997.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * > Asynchronous processing does not guarantee timely task completion.
 * Before you create a binding, make sure that the project and the dataset that you want to use exist.
 * - For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * - For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
 * > The CreateBinding operation works by using the [workflow template](https://help.aliyun.com/document_detail/466304.html) that is specified when you created the project or dataset.
 * After you create a binding between a dataset and an OSS bucket, IMM scans the existing objects in the bucket and extracts metadata based on the scanning result. Then, IMM creates an index from the extracted metadata. If new objects are uploaded to the OSS bucket, IMM tracks and scans the objects and updates the index. For objects whose metadata index is created by calling this operation, you can call query operations, such as [SimpleQuery](https://help.aliyun.com/document_detail/478175.html), to query objects, manage objects, and collect statistics on objects.
 *
 * @param request CreateBindingRequest
 * @return CreateBindingResponse
 */
CreateBindingResponse Client::createBinding(const CreateBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBindingWithOptions(request, runtime);
}

/**
 * @summary The point cloud compression feature compresses point cloud data in Object Storage Service (OSS). This helps reduce data transmission over the network.
 *
 * @description - **Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - File format: Only point cloud files in the PCD format are supported.
 * - This is an asynchronous API. After a task starts, its information is saved for only 7 days. After this period, the information cannot be retrieved. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through notification messages.
 *
 * @param tmpReq CreateCompressPointCloudTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCompressPointCloudTaskResponse
 */
CreateCompressPointCloudTaskResponse Client::createCompressPointCloudTaskWithOptions(const CreateCompressPointCloudTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCompressPointCloudTaskShrinkRequest request = CreateCompressPointCloudTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasKdtreeOption()) {
    request.setKdtreeOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKdtreeOption(), "KdtreeOption", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasOctreeOption()) {
    request.setOctreeOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOctreeOption(), "OctreeOption", "json"));
  }

  if (!!tmpReq.hasPointCloudFields()) {
    request.setPointCloudFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPointCloudFields(), "PointCloudFields", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCompressMethod()) {
    query["CompressMethod"] = request.getCompressMethod();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasKdtreeOptionShrink()) {
    query["KdtreeOption"] = request.getKdtreeOptionShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasOctreeOptionShrink()) {
    query["OctreeOption"] = request.getOctreeOptionShrink();
  }

  if (!!request.hasPointCloudFieldsShrink()) {
    query["PointCloudFields"] = request.getPointCloudFieldsShrink();
  }

  if (!!request.hasPointCloudFileFormat()) {
    query["PointCloudFileFormat"] = request.getPointCloudFileFormat();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCompressPointCloudTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCompressPointCloudTaskResponse>();
}

/**
 * @summary The point cloud compression feature compresses point cloud data in Object Storage Service (OSS). This helps reduce data transmission over the network.
 *
 * @description - **Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - File format: Only point cloud files in the PCD format are supported.
 * - This is an asynchronous API. After a task starts, its information is saved for only 7 days. After this period, the information cannot be retrieved. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through notification messages.
 *
 * @param request CreateCompressPointCloudTaskRequest
 * @return CreateCompressPointCloudTaskResponse
 */
CreateCompressPointCloudTaskResponse Client::createCompressPointCloudTask(const CreateCompressPointCloudTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCompressPointCloudTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a story based on the specified images and videos.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 *
 * @param tmpReq CreateCustomizedStoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomizedStoryResponse
 */
CreateCustomizedStoryResponse Client::createCustomizedStoryWithOptions(const CreateCustomizedStoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCustomizedStoryShrinkRequest request = CreateCustomizedStoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCover()) {
    request.setCoverShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCover(), "Cover", "json"));
  }

  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomLabels(), "CustomLabels", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  json body = {};
  if (!!request.hasCoverShrink()) {
    body["Cover"] = request.getCoverShrink();
  }

  if (!!request.hasCustomLabelsShrink()) {
    body["CustomLabels"] = request.getCustomLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFilesShrink()) {
    body["Files"] = request.getFilesShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasStoryName()) {
    body["StoryName"] = request.getStoryName();
  }

  if (!!request.hasStorySubType()) {
    body["StorySubType"] = request.getStorySubType();
  }

  if (!!request.hasStoryType()) {
    body["StoryType"] = request.getStoryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCustomizedStory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomizedStoryResponse>();
}

/**
 * @summary Creates a story based on the specified images and videos.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 *
 * @param request CreateCustomizedStoryRequest
 * @return CreateCustomizedStoryResponse
 */
CreateCustomizedStoryResponse Client::createCustomizedStory(const CreateCustomizedStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomizedStoryWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset.
 *
 * @description - **Before you use this operation, make sure that you fully understand the billing of Intelligent Media Management (IMM) and its [pricing](https://help.aliyun.com/document_detail/477042.html)**.
 * - Dataset names must be unique within the same project.
 * - The number of datasets that can be created is limited. You can call [GetProjcet](https://help.aliyun.com/document_detail/478155.html) to query this limit.
 * - After you create a dataset, you can call [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) to create file metadata indexes for diversified [data retrieval, statistics](https://help.aliyun.com/document_detail/478175.html), and intelligent management.
 *
 * @param tmpReq CreateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDatasetShrinkRequest request = CreateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkflowParameters()) {
    request.setWorkflowParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowParameters(), "WorkflowParameters", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.getDatasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.getDatasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.getDatasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.getDatasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.getDatasetMaxTotalFileSize();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasWorkflowParametersShrink()) {
    query["WorkflowParameters"] = request.getWorkflowParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2020-09-30"},
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
 * @summary Creates a dataset.
 *
 * @description - **Before you use this operation, make sure that you fully understand the billing of Intelligent Media Management (IMM) and its [pricing](https://help.aliyun.com/document_detail/477042.html)**.
 * - Dataset names must be unique within the same project.
 * - The number of datasets that can be created is limited. You can call [GetProjcet](https://help.aliyun.com/document_detail/478155.html) to query this limit.
 * - After you create a dataset, you can call [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) to create file metadata indexes for diversified [data retrieval, statistics](https://help.aliyun.com/document_detail/478175.html), and intelligent management.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary Extracts a blind watermark.
 *
 * @description - Before you use this API, make sure that you understand the billing methods and pricing of Intelligent Media Management (IMM).
 *   >Notice: Asynchronous tasks are not guaranteed to be completed within a specific time frame.
 * - Make sure that a project is created in IMM. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
 * - Make sure the service region and project are the same as those used to add the blind watermark using the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) operation. Otherwise, the watermark cannot be extracted.
 * - The watermark can be extracted even after the image undergoes attacks such as compression, scaling, clipping, and color changes.
 * - This API is compatible with the previous version of the blind watermarking feature. Some parameters are from the previous DecodeBlindWatermark API.
 * - This is an asynchronous API. After a task starts, its information is saved for only 7 days. After this period, the information can no longer be retrieved. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) API to retrieve the TaskId and view task information. Alternatively, set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 *
 * @param tmpReq CreateDecodeBlindWatermarkTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDecodeBlindWatermarkTaskResponse
 */
CreateDecodeBlindWatermarkTaskResponse Client::createDecodeBlindWatermarkTaskWithOptions(const CreateDecodeBlindWatermarkTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDecodeBlindWatermarkTaskShrinkRequest request = CreateDecodeBlindWatermarkTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasImageQuality()) {
    query["ImageQuality"] = request.getImageQuality();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasOriginalImageURI()) {
    query["OriginalImageURI"] = request.getOriginalImageURI();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasStrengthLevel()) {
    query["StrengthLevel"] = request.getStrengthLevel();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasWatermarkType()) {
    query["WatermarkType"] = request.getWatermarkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDecodeBlindWatermarkTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDecodeBlindWatermarkTaskResponse>();
}

/**
 * @summary Extracts a blind watermark.
 *
 * @description - Before you use this API, make sure that you understand the billing methods and pricing of Intelligent Media Management (IMM).
 *   >Notice: Asynchronous tasks are not guaranteed to be completed within a specific time frame.
 * - Make sure that a project is created in IMM. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
 * - Make sure the service region and project are the same as those used to add the blind watermark using the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) operation. Otherwise, the watermark cannot be extracted.
 * - The watermark can be extracted even after the image undergoes attacks such as compression, scaling, clipping, and color changes.
 * - This API is compatible with the previous version of the blind watermarking feature. Some parameters are from the previous DecodeBlindWatermark API.
 * - This is an asynchronous API. After a task starts, its information is saved for only 7 days. After this period, the information can no longer be retrieved. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) API to retrieve the TaskId and view task information. Alternatively, set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 *
 * @param request CreateDecodeBlindWatermarkTaskRequest
 * @return CreateDecodeBlindWatermarkTaskResponse
 */
CreateDecodeBlindWatermarkTaskResponse Client::createDecodeBlindWatermarkTask(const CreateDecodeBlindWatermarkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDecodeBlindWatermarkTaskWithOptions(request, runtime);
}

/**
 * @summary Searches a media set for the top N images most similar to a specified image or face ID. The operation returns the corresponding face IDs and bounding boxes, sorted by similarity in descending order.
 *
 * @description - **Before you use this operation, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html)**
 *   >Notice: 
 *   The execution time of asynchronous tasks is not guaranteed.
 *   
 * - For each input image, only the face with the largest bounding box is used for the face search.
 * - This is an asynchronous operation. After a task starts, the task information is retained for 7 days and cannot be retrieved after this period. To retrieve task information, you can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. Alternatively, you can configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notifications that contain task information.
 *
 * @param tmpReq CreateFacesSearchingTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFacesSearchingTaskResponse
 */
CreateFacesSearchingTaskResponse Client::createFacesSearchingTaskWithOptions(const CreateFacesSearchingTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFacesSearchingTaskShrinkRequest request = CreateFacesSearchingTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.getMaxResult();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.getSourcesShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFacesSearchingTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFacesSearchingTaskResponse>();
}

/**
 * @summary Searches a media set for the top N images most similar to a specified image or face ID. The operation returns the corresponding face IDs and bounding boxes, sorted by similarity in descending order.
 *
 * @description - **Before you use this operation, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html)**
 *   >Notice: 
 *   The execution time of asynchronous tasks is not guaranteed.
 *   
 * - For each input image, only the face with the largest bounding box is used for the face search.
 * - This is an asynchronous operation. After a task starts, the task information is retained for 7 days and cannot be retrieved after this period. To retrieve task information, you can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. Alternatively, you can configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notifications that contain task information.
 *
 * @param request CreateFacesSearchingTaskRequest
 * @return CreateFacesSearchingTaskResponse
 */
CreateFacesSearchingTaskResponse Client::createFacesSearchingTask(const CreateFacesSearchingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFacesSearchingTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a figure clustering task. This task uses an intelligent algorithm to group the faces of different people in images that are indexed in a dataset.
 *
 * @description - **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - Before you call this operation, make sure that you have indexed files to a dataset ([CreateDataset](~~CreateDataset~~)) by attaching them ([CreateBinding](~~CreateBinding~~)) or by indexing them ([IndexFileMeta](~~IndexFileMeta~~) or [BatchIndexFileMeta](~~BatchIndexFileMeta~~)).
 * - Each time you call this operation, files in the dataset ([CreateDataset](~~CreateDataset~~)) are incrementally processed. You can periodically call this operation to process new files.
 * - After the clustering is complete, you can call the [GetFigureCluster](~~GetFigureCluster~~) or [BatchGetFigureCluster](~~BatchGetFigureCluster~~) operation to retrieve information about specific groups. You can also call [QueryFigureClusters](~~QueryFigureClusters~~) to query and list the groups in the dataset.
 * - Deleting files from a dataset changes the face clustering results. When all images that contain the faces in a cluster are deleted, the cluster is also deleted.
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. You cannot retrieve the task information after this period. You can call the [GetTask](~~GetTask~~) or [ListTasks](~~ListTasks~~) operation to view the task information. Alternatively, you can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information from asynchronous notification messages.
 *
 * @param tmpReq CreateFigureClusteringTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFigureClusteringTaskResponse
 */
CreateFigureClusteringTaskResponse Client::createFigureClusteringTaskWithOptions(const CreateFigureClusteringTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFigureClusteringTaskShrinkRequest request = CreateFigureClusteringTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFigureClusteringTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFigureClusteringTaskResponse>();
}

/**
 * @summary Creates a figure clustering task. This task uses an intelligent algorithm to group the faces of different people in images that are indexed in a dataset.
 *
 * @description - **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - Before you call this operation, make sure that you have indexed files to a dataset ([CreateDataset](~~CreateDataset~~)) by attaching them ([CreateBinding](~~CreateBinding~~)) or by indexing them ([IndexFileMeta](~~IndexFileMeta~~) or [BatchIndexFileMeta](~~BatchIndexFileMeta~~)).
 * - Each time you call this operation, files in the dataset ([CreateDataset](~~CreateDataset~~)) are incrementally processed. You can periodically call this operation to process new files.
 * - After the clustering is complete, you can call the [GetFigureCluster](~~GetFigureCluster~~) or [BatchGetFigureCluster](~~BatchGetFigureCluster~~) operation to retrieve information about specific groups. You can also call [QueryFigureClusters](~~QueryFigureClusters~~) to query and list the groups in the dataset.
 * - Deleting files from a dataset changes the face clustering results. When all images that contain the faces in a cluster are deleted, the cluster is also deleted.
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. You cannot retrieve the task information after this period. You can call the [GetTask](~~GetTask~~) or [ListTasks](~~ListTasks~~) operation to view the task information. Alternatively, you can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information from asynchronous notification messages.
 *
 * @param request CreateFigureClusteringTaskRequest
 * @return CreateFigureClusteringTaskResponse
 */
CreateFigureClusteringTaskResponse Client::createFigureClusteringTask(const CreateFigureClusteringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFigureClusteringTaskWithOptions(request, runtime);
}

/**
 * @summary Merges two or more figure clustering groups into a single figure clustering group.
 *
 * @description - **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 * - Before you call this operation, make sure that you have clustered all faces in the dataset by calling the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation.
 * - Merging unrelated groups affects the feature values of the destination group. This may cause inaccurate grouping of incremental data when you create a figure clustering task.
 * - This operation is asynchronous. Task information is retained for only 7 days. During this period, you can query task information by calling the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notification messages about the task.
 *
 * @param tmpReq CreateFigureClustersMergingTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFigureClustersMergingTaskResponse
 */
CreateFigureClustersMergingTaskResponse Client::createFigureClustersMergingTaskWithOptions(const CreateFigureClustersMergingTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFigureClustersMergingTaskShrinkRequest request = CreateFigureClustersMergingTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFroms()) {
    request.setFromsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFroms(), "Froms", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasFromsShrink()) {
    query["Froms"] = request.getFromsShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTo()) {
    query["To"] = request.getTo();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFigureClustersMergingTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFigureClustersMergingTaskResponse>();
}

/**
 * @summary Merges two or more figure clustering groups into a single figure clustering group.
 *
 * @description - **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 * - Before you call this operation, make sure that you have clustered all faces in the dataset by calling the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation.
 * - Merging unrelated groups affects the feature values of the destination group. This may cause inaccurate grouping of incremental data when you create a figure clustering task.
 * - This operation is asynchronous. Task information is retained for only 7 days. During this period, you can query task information by calling the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notification messages about the task.
 *
 * @param request CreateFigureClustersMergingTaskRequest
 * @return CreateFigureClustersMergingTaskResponse
 */
CreateFigureClustersMergingTaskResponse Client::createFigureClustersMergingTask(const CreateFigureClustersMergingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFigureClustersMergingTaskWithOptions(request, runtime);
}

/**
 * @summary Package Download API
 *
 * @description > This API is in public preview. If you have any questions, join our DingTalk group to provide feedback. For the group number, see [Contact us](https://help.aliyun.com/document_detail/84454.html).
 * > This API currently supports packaging but not compression. The compression feature will be added later.
 * - **Before using this API, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM)**.
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - File count limit: You can package up to 80,000 files.
 * - File size limit: The total size of all files before packaging must not exceed 200 GB.
 * - This feature supports files of the Standard storage class on OSS. To package files of other storage classes, first [convert their storage class](https://help.aliyun.com/document_detail/90090.html).
 * - This is an asynchronous API. After a task starts, its information is stored for 7 days. After 7 days, the information can no longer be retrieved. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 *
 * @param tmpReq CreateFileCompressionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileCompressionTaskResponse
 */
CreateFileCompressionTaskResponse Client::createFileCompressionTaskWithOptions(const CreateFileCompressionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFileCompressionTaskShrinkRequest request = CreateFileCompressionTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  json query = {};
  if (!!request.hasCompressedFormat()) {
    query["CompressedFormat"] = request.getCompressedFormat();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceManifestURI()) {
    query["SourceManifestURI"] = request.getSourceManifestURI();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.getSourcesShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileCompressionTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileCompressionTaskResponse>();
}

/**
 * @summary Package Download API
 *
 * @description > This API is in public preview. If you have any questions, join our DingTalk group to provide feedback. For the group number, see [Contact us](https://help.aliyun.com/document_detail/84454.html).
 * > This API currently supports packaging but not compression. The compression feature will be added later.
 * - **Before using this API, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM)**.
 *   >Notice: The completion time of asynchronous tasks is not guaranteed.
 * - File count limit: You can package up to 80,000 files.
 * - File size limit: The total size of all files before packaging must not exceed 200 GB.
 * - This feature supports files of the Standard storage class on OSS. To package files of other storage classes, first [convert their storage class](https://help.aliyun.com/document_detail/90090.html).
 * - This is an asynchronous API. After a task starts, its information is stored for 7 days. After 7 days, the information can no longer be retrieved. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 *
 * @param request CreateFileCompressionTaskRequest
 * @return CreateFileCompressionTaskResponse
 */
CreateFileCompressionTaskResponse Client::createFileCompressionTask(const CreateFileCompressionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileCompressionTaskWithOptions(request, runtime);
}

/**
 * @summary A file decompression task lets you decompress specific files or an entire compressed package to a specified location. Supported formats include Zip, RAR, and 7z.
 *
 * @description > This API is in public preview. If you have any questions, join our DingTalk group to provide feedback. For the group number, see [Contact us](https://help.aliyun.com/document_detail/84454.html).
 * - **Before you use this API, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) for Intelligent Media Management.**
 *   >Notice: Timeliness is not guaranteed for asynchronous tasks.
 * - File count limit: A compressed package can contain a maximum of 80,000 files.
 * - File size limit: 200 GB for Zip and RAR formats, and 50 GB for 7z format.
 * - File decompression tasks use stream decompression, which outputs files as they are decompressed. If an operation is aborted due to file corruption, the files that have already been decompressed are not deleted.
 * - This is an asynchronous API. Task information is stored for only 7 days and cannot be retrieved after this period. To view the task information, you can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. Alternatively, you can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through an asynchronous notification message.
 *
 * @param tmpReq CreateFileUncompressionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileUncompressionTaskResponse
 */
CreateFileUncompressionTaskResponse Client::createFileUncompressionTaskWithOptions(const CreateFileUncompressionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFileUncompressionTaskShrinkRequest request = CreateFileUncompressionTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSelectedFiles()) {
    request.setSelectedFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSelectedFiles(), "SelectedFiles", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSelectedFilesShrink()) {
    query["SelectedFiles"] = request.getSelectedFilesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileUncompressionTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileUncompressionTaskResponse>();
}

/**
 * @summary A file decompression task lets you decompress specific files or an entire compressed package to a specified location. Supported formats include Zip, RAR, and 7z.
 *
 * @description > This API is in public preview. If you have any questions, join our DingTalk group to provide feedback. For the group number, see [Contact us](https://help.aliyun.com/document_detail/84454.html).
 * - **Before you use this API, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) for Intelligent Media Management.**
 *   >Notice: Timeliness is not guaranteed for asynchronous tasks.
 * - File count limit: A compressed package can contain a maximum of 80,000 files.
 * - File size limit: 200 GB for Zip and RAR formats, and 50 GB for 7z format.
 * - File decompression tasks use stream decompression, which outputs files as they are decompressed. If an operation is aborted due to file corruption, the files that have already been decompressed are not deleted.
 * - This is an asynchronous API. Task information is stored for only 7 days and cannot be retrieved after this period. To view the task information, you can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. Alternatively, you can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through an asynchronous notification message.
 *
 * @param request CreateFileUncompressionTaskRequest
 * @return CreateFileUncompressionTaskResponse
 */
CreateFileUncompressionTaskResponse Client::createFileUncompressionTask(const CreateFileUncompressionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileUncompressionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a video highlight task. This feature is in invitational preview.
 *
 * @description - **Before you use this operation, make sure that you fully understand the billing of Intelligent Media Management (IMM).** For more information, see [Billing overview](https://www.alibabacloud.com/help/en/imm/product-overview/billing-overview). This operation incurs fees for highlight extraction and media processing.
 * - Before you call this operation, make sure that a project already exists in the current region. For more information, see [Project management](https://www.alibabacloud.com/help/en/imm/developer-reference/api-imm-2020-09-30-createproject).
 * >Notice: Asynchronous tasks do not guarantee timeliness..
 *
 * @param tmpReq CreateHighlightTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHighlightTaskResponse
 */
CreateHighlightTaskResponse Client::createHighlightTaskWithOptions(const CreateHighlightTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHighlightTaskShrinkRequest request = CreateHighlightTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasEdit()) {
    request.setEditShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEdit(), "Edit", "json"));
  }

  if (!!tmpReq.hasHighlight()) {
    request.setHighlightShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHighlight(), "Highlight", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutput(), "Output", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  json body = {};
  if (!!request.hasCredentialConfigShrink()) {
    body["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasEditShrink()) {
    body["Edit"] = request.getEditShrink();
  }

  if (!!request.hasHighlightShrink()) {
    body["Highlight"] = request.getHighlightShrink();
  }

  if (!!request.hasMode()) {
    body["Mode"] = request.getMode();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasOutputShrink()) {
    body["Output"] = request.getOutputShrink();
  }

  if (!!request.hasSourcesShrink()) {
    body["Sources"] = request.getSourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateHighlightTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHighlightTaskResponse>();
}

/**
 * @summary Creates a video highlight task. This feature is in invitational preview.
 *
 * @description - **Before you use this operation, make sure that you fully understand the billing of Intelligent Media Management (IMM).** For more information, see [Billing overview](https://www.alibabacloud.com/help/en/imm/product-overview/billing-overview). This operation incurs fees for highlight extraction and media processing.
 * - Before you call this operation, make sure that a project already exists in the current region. For more information, see [Project management](https://www.alibabacloud.com/help/en/imm/developer-reference/api-imm-2020-09-30-createproject).
 * >Notice: Asynchronous tasks do not guarantee timeliness..
 *
 * @param request CreateHighlightTaskRequest
 * @return CreateHighlightTaskResponse
 */
CreateHighlightTaskResponse Client::createHighlightTask(const CreateHighlightTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHighlightTaskWithOptions(request, runtime);
}

/**
 * @summary Detects non-compliant content in images, such as pornography, terrorism, undesirable scenes, logos, and text-in-image violations.
 *
 * @description - **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 *   >Notice: 
 *   The execution time of asynchronous tasks is not guaranteed.
 *   
 * - Image requirements:
 *   - Image URLs support the HTTP and HTTPS protocols.
 *   - The following image formats are supported: PNG, JPG, JPEG, BMP, GIF, and WEBP.
 *   - The image size cannot exceed 20 MB for both synchronous and asynchronous invocations. The height or width cannot exceed 30,000 pixels, and the total number of pixels cannot exceed 250 million. For GIF images, the total number of pixels cannot exceed 4,194,304, and the height or width cannot exceed 30,000 pixels.
 *   - The image download timeout period is 3 seconds. If the download takes longer than 3 seconds, a timeout error is returned.
 *   - For best results, the image resolution should be at least 256 × 256 pixels. Low resolution may affect detection accuracy.
 *   - The response time for image detection depends on the image download time. Ensure the storage service where the image is stored is stable and reliable. Use Alibaba Cloud Object Storage Service (OSS) or CDN.
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. You cannot query the information after this period. To view task information, you can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId`. Alternatively, you can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 * > The detection results are returned in an asynchronous notification message. The Suggestion field in the message has one of the following values:
 * >
 * > - pass: The image passed the review. No non-compliant content was detected.
 * >
 * > - block: The image failed the review. Non-compliant content was detected. The Categories field indicates the non-compliant category. For more information about the categories, see Content Moderation detection results.
 * >
 * > - review: The image requires manual review. After the manual review is complete, another asynchronous notification message is sent to inform you of the result.
 *
 * @param tmpReq CreateImageModerationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageModerationTaskResponse
 */
CreateImageModerationTaskResponse Client::createImageModerationTaskWithOptions(const CreateImageModerationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateImageModerationTaskShrinkRequest request = CreateImageModerationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasScenes()) {
    request.setScenesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScenes(), "Scenes", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMaxFrames()) {
    query["MaxFrames"] = request.getMaxFrames();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasScenesShrink()) {
    query["Scenes"] = request.getScenesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageModerationTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageModerationTaskResponse>();
}

/**
 * @summary Detects non-compliant content in images, such as pornography, terrorism, undesirable scenes, logos, and text-in-image violations.
 *
 * @description - **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management.**
 *   >Notice: 
 *   The execution time of asynchronous tasks is not guaranteed.
 *   
 * - Image requirements:
 *   - Image URLs support the HTTP and HTTPS protocols.
 *   - The following image formats are supported: PNG, JPG, JPEG, BMP, GIF, and WEBP.
 *   - The image size cannot exceed 20 MB for both synchronous and asynchronous invocations. The height or width cannot exceed 30,000 pixels, and the total number of pixels cannot exceed 250 million. For GIF images, the total number of pixels cannot exceed 4,194,304, and the height or width cannot exceed 30,000 pixels.
 *   - The image download timeout period is 3 seconds. If the download takes longer than 3 seconds, a timeout error is returned.
 *   - For best results, the image resolution should be at least 256 × 256 pixels. Low resolution may affect detection accuracy.
 *   - The response time for image detection depends on the image download time. Ensure the storage service where the image is stored is stable and reliable. Use Alibaba Cloud Object Storage Service (OSS) or CDN.
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. You cannot query the information after this period. To view task information, you can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId`. Alternatively, you can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 * > The detection results are returned in an asynchronous notification message. The Suggestion field in the message has one of the following values:
 * >
 * > - pass: The image passed the review. No non-compliant content was detected.
 * >
 * > - block: The image failed the review. Non-compliant content was detected. The Categories field indicates the non-compliant category. For more information about the categories, see Content Moderation detection results.
 * >
 * > - review: The image requires manual review. After the manual review is complete, another asynchronous notification message is sent to inform you of the result.
 *
 * @param request CreateImageModerationTaskRequest
 * @return CreateImageModerationTaskResponse
 */
CreateImageModerationTaskResponse Client::createImageModerationTask(const CreateImageModerationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageModerationTaskWithOptions(request, runtime);
}

/**
 * @summary Stitches multiple images into a single image based on specified rules and saves the output to a specified OSS object.
 *
 * @description - **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 * - Before you call this operation, ensure that an active project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * - You can stitch a maximum of 10 images in this operation. The length of a single edge of each image cannot exceed 32,876 pixels. The total number of pixels cannot exceed 1 billion.
 * - This is an asynchronous operation. After a task starts, its information is saved for 7 days. After this period, you can no longer query the task information. To query task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notifications about the task.
 *
 * @param tmpReq CreateImageSplicingTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageSplicingTaskResponse
 */
CreateImageSplicingTaskResponse Client::createImageSplicingTaskWithOptions(const CreateImageSplicingTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateImageSplicingTaskShrinkRequest request = CreateImageSplicingTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAlign()) {
    query["Align"] = request.getAlign();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.getBackgroundColor();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasImageFormat()) {
    query["ImageFormat"] = request.getImageFormat();
  }

  if (!!request.hasMargin()) {
    query["Margin"] = request.getMargin();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasPadding()) {
    query["Padding"] = request.getPadding();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasQuality()) {
    query["Quality"] = request.getQuality();
  }

  if (!!request.hasScaleType()) {
    query["ScaleType"] = request.getScaleType();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.getSourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageSplicingTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageSplicingTaskResponse>();
}

/**
 * @summary Stitches multiple images into a single image based on specified rules and saves the output to a specified OSS object.
 *
 * @description - **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 * - Before you call this operation, ensure that an active project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * - You can stitch a maximum of 10 images in this operation. The length of a single edge of each image cannot exceed 32,876 pixels. The total number of pixels cannot exceed 1 billion.
 * - This is an asynchronous operation. After a task starts, its information is saved for 7 days. After this period, you can no longer query the task information. To query task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notifications about the task.
 *
 * @param request CreateImageSplicingTaskRequest
 * @return CreateImageSplicingTaskResponse
 */
CreateImageSplicingTaskResponse Client::createImageSplicingTask(const CreateImageSplicingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageSplicingTaskWithOptions(request, runtime);
}

/**
 * @summary Converts multiple images into a single PDF file and saves the file as a specified OSS object.
 *
 * @description - **Before using this API, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 * - Before calling this API, make sure that an active project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * - This API supports up to 100 input images.
 * - This is an asynchronous API. After a task starts, its information is stored for only 7 days and cannot be retrieved after this period. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) API with the returned `TaskId`. You can also receive task information through asynchronous notification messages by setting the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter.
 *
 * @param tmpReq CreateImageToPDFTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageToPDFTaskResponse
 */
CreateImageToPDFTaskResponse Client::createImageToPDFTaskWithOptions(const CreateImageToPDFTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateImageToPDFTaskShrinkRequest request = CreateImageToPDFTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.getSourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageToPDFTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageToPDFTaskResponse>();
}

/**
 * @summary Converts multiple images into a single PDF file and saves the file as a specified OSS object.
 *
 * @description - **Before using this API, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 * - Before calling this API, make sure that an active project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * - This API supports up to 100 input images.
 * - This is an asynchronous API. After a task starts, its information is stored for only 7 days and cannot be retrieved after this period. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) API with the returned `TaskId`. You can also receive task information through asynchronous notification messages by setting the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter.
 *
 * @param request CreateImageToPDFTaskRequest
 * @return CreateImageToPDFTaskResponse
 */
CreateImageToPDFTaskResponse Client::createImageToPDFTask(const CreateImageToPDFTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageToPDFTaskWithOptions(request, runtime);
}

/**
 * @summary The spatio-temporal clustering feature classifies files in a dataset based on their time and location. This feature works on indexed files, such as images and videos, that contain shooting time and location data. These classifications can represent content from a user\\"s trip, where files have similar timestamps and locations. The classifications can also represent content shot at different places where a user lives or works. Analyzing the locations and time ranges of these classifications lets you categorize media files, create highlight reels, and generate photo and video stories.
 *
 * @description - **Before you use this operation, you must understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM)**.
 *   >Notice: Asynchronous tasks do not have a guaranteed processing time.
 * - Before you call this operation, you must index files into a dataset. You can index files by binding data sources using [CreateBinding](https://help.aliyun.com/document_detail/478202.html) or by indexing files using [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * - Each call to this operation processes the files in the specified `Dataset` **incrementally**. You can call this operation periodically to process new files.
 * - After clustering is complete, you can call the [QueryLocationDateClusters](https://help.aliyun.com/document_detail/478189.html) operation to retrieve the clustering results.
 * - Deleting a file from a dataset does not change the spatio-temporal clusters. To delete existing spatio-temporal clusters, you can call the [DeleteLocationDateCluster](https://help.aliyun.com/document_detail/478191.html) operation.
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. You cannot retrieve task information after 7 days. You can call the [GetTask](~~GetTask~~) or [ListTasks](~~ListTasks~~) operation to view task information using the returned `TaskId`. You can also configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through message notifications.
 *
 * @param tmpReq CreateLocationDateClusteringTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLocationDateClusteringTaskResponse
 */
CreateLocationDateClusteringTaskResponse Client::createLocationDateClusteringTaskWithOptions(const CreateLocationDateClusteringTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLocationDateClusteringTaskShrinkRequest request = CreateLocationDateClusteringTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDateOptions()) {
    request.setDateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDateOptions(), "DateOptions", "json"));
  }

  if (!!tmpReq.hasLocationOptions()) {
    request.setLocationOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocationOptions(), "LocationOptions", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDateOptionsShrink()) {
    query["DateOptions"] = request.getDateOptionsShrink();
  }

  if (!!request.hasLocationOptionsShrink()) {
    query["LocationOptions"] = request.getLocationOptionsShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLocationDateClusteringTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLocationDateClusteringTaskResponse>();
}

/**
 * @summary The spatio-temporal clustering feature classifies files in a dataset based on their time and location. This feature works on indexed files, such as images and videos, that contain shooting time and location data. These classifications can represent content from a user\\"s trip, where files have similar timestamps and locations. The classifications can also represent content shot at different places where a user lives or works. Analyzing the locations and time ranges of these classifications lets you categorize media files, create highlight reels, and generate photo and video stories.
 *
 * @description - **Before you use this operation, you must understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM)**.
 *   >Notice: Asynchronous tasks do not have a guaranteed processing time.
 * - Before you call this operation, you must index files into a dataset. You can index files by binding data sources using [CreateBinding](https://help.aliyun.com/document_detail/478202.html) or by indexing files using [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * - Each call to this operation processes the files in the specified `Dataset` **incrementally**. You can call this operation periodically to process new files.
 * - After clustering is complete, you can call the [QueryLocationDateClusters](https://help.aliyun.com/document_detail/478189.html) operation to retrieve the clustering results.
 * - Deleting a file from a dataset does not change the spatio-temporal clusters. To delete existing spatio-temporal clusters, you can call the [DeleteLocationDateCluster](https://help.aliyun.com/document_detail/478191.html) operation.
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. You cannot retrieve task information after 7 days. You can call the [GetTask](~~GetTask~~) or [ListTasks](~~ListTasks~~) operation to view task information using the returned `TaskId`. You can also configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through message notifications.
 *
 * @param request CreateLocationDateClusteringTaskRequest
 * @return CreateLocationDateClusteringTaskResponse
 */
CreateLocationDateClusteringTaskResponse Client::createLocationDateClusteringTask(const CreateLocationDateClusteringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLocationDateClusteringTaskWithOptions(request, runtime);
}

/**
 * @summary Create an asynchronous media transcoding task. This task processes audio and video files for media transcoding, media concatenation, video frame capture, and animated GIF generation.
 *
 * @description - **Before you call this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) for Intelligent Media Management.**
 * - Before calling this operation, ensure a project is available in the current region. For more information, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 *   >Notice: 
 *   The completion time of an asynchronous task is not guaranteed.
 *   
 * - When you use this operation for media transcoding, it processes only one video, audio, or subtitle stream by default. You can also configure the number of streams to process.
 * - When you use this operation for media concatenation, you can specify a maximum of 11 media files. Parameters for operations such as media transcoding and frame capture apply to the final concatenated output.
 * - This operation is asynchronous. After a task starts, its information is retained for only 7 days. After this period, you cannot retrieve it. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information via message notifications.
 *
 * @param tmpReq CreateMediaConvertTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMediaConvertTaskResponse
 */
CreateMediaConvertTaskResponse Client::createMediaConvertTaskWithOptions(const CreateMediaConvertTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMediaConvertTaskShrinkRequest request = CreateMediaConvertTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTargetGroups()) {
    request.setTargetGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargetGroups(), "TargetGroups", "json"));
  }

  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasAlignmentIndex()) {
    query["AlignmentIndex"] = request.getAlignmentIndex();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.getSourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetGroupsShrink()) {
    query["TargetGroups"] = request.getTargetGroupsShrink();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.getTargetsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMediaConvertTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMediaConvertTaskResponse>();
}

/**
 * @summary Create an asynchronous media transcoding task. This task processes audio and video files for media transcoding, media concatenation, video frame capture, and animated GIF generation.
 *
 * @description - **Before you call this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) for Intelligent Media Management.**
 * - Before calling this operation, ensure a project is available in the current region. For more information, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 *   >Notice: 
 *   The completion time of an asynchronous task is not guaranteed.
 *   
 * - When you use this operation for media transcoding, it processes only one video, audio, or subtitle stream by default. You can also configure the number of streams to process.
 * - When you use this operation for media concatenation, you can specify a maximum of 11 media files. Parameters for operations such as media transcoding and frame capture apply to the final concatenated output.
 * - This operation is asynchronous. After a task starts, its information is retained for only 7 days. After this period, you cannot retrieve it. To view task information, call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information via message notifications.
 *
 * @param request CreateMediaConvertTaskRequest
 * @return CreateMediaConvertTaskResponse
 */
CreateMediaConvertTaskResponse Client::createMediaConvertTask(const CreateMediaConvertTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMediaConvertTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a document conversion task that converts documents, such as Word, PowerPoint, Excel, and PDF files, stored in Object Storage Service (OSS) into images, text files, or PDF files.
 *
 * @description - **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 *   >Notice: The execution time of asynchronous tasks is not guaranteed.
 * - Supported input file formats:
 *   - Word processor documents (Word): doc, docx, wps, wpss, docm, dotm, dot, and dotx.
 *   - Presentation documents (PowerPoint): pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss.
 *   - Spreadsheet documents (Excel): xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets.
 *   - PDF documents: pdf.
 * - Supported output file formats:
 *   - Images: png and jpg.
 *   - Text: txt.
 *   - PDF: pdf.
 * - The maximum size of a single file is 200 MB. This limit cannot be changed.
 * - If a file is large or its content is complex, the conversion may time out.
 * - The number of requests per second is limited to 50 for a single user.
 * - Task information is stored for only 7 days after a task starts. After this period, the information cannot be retrieved. You can promptly obtain task information using one of the following methods:
 *   - You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to obtain the returned `TaskId` and view the task information.
 *   - You can activate Message Service (MNS) in the same region as IMM and configure a subscription to promptly receive task information notifications. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html). For more information about the MNS software development kit (SDK), see [Receive and delete messages](https://help.aliyun.com/document_detail/32449.html).
 *   - You can activate RocketMQ in the same region as IMM, and create a RocketMQ 4.0 instance, a topic, and a group to promptly receive task information notifications. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html). For more information about how to use RocketMQ, see [Use an SDK for HTTP to send and receive normal messages](https://help.aliyun.com/document_detail/169009.html).
 *   - You can activate and connect to [EventBridge](https://www.aliyun.com/product/aliware/eventbridge) in the same region as IMM to promptly receive task information notifications. For more information, see [Intelligent Media Management IMM events](https://help.aliyun.com/document_detail/205730.html).
 *
 * @param tmpReq CreateOfficeConversionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOfficeConversionTaskResponse
 */
CreateOfficeConversionTaskResponse Client::createOfficeConversionTaskWithOptions(const CreateOfficeConversionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOfficeConversionTaskShrinkRequest request = CreateOfficeConversionTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTrimPolicy()) {
    request.setTrimPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrimPolicy(), "TrimPolicy", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasEndPage()) {
    query["EndPage"] = request.getEndPage();
  }

  if (!!request.hasFirstPage()) {
    query["FirstPage"] = request.getFirstPage();
  }

  if (!!request.hasFitToHeight()) {
    query["FitToHeight"] = request.getFitToHeight();
  }

  if (!!request.hasFitToWidth()) {
    query["FitToWidth"] = request.getFitToWidth();
  }

  if (!!request.hasHoldLineFeed()) {
    query["HoldLineFeed"] = request.getHoldLineFeed();
  }

  if (!!request.hasImageDPI()) {
    query["ImageDPI"] = request.getImageDPI();
  }

  if (!!request.hasLongPicture()) {
    query["LongPicture"] = request.getLongPicture();
  }

  if (!!request.hasLongText()) {
    query["LongText"] = request.getLongText();
  }

  if (!!request.hasMaxSheetColumn()) {
    query["MaxSheetColumn"] = request.getMaxSheetColumn();
  }

  if (!!request.hasMaxSheetRow()) {
    query["MaxSheetRow"] = request.getMaxSheetRow();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasPages()) {
    query["Pages"] = request.getPages();
  }

  if (!!request.hasPaperHorizontal()) {
    query["PaperHorizontal"] = request.getPaperHorizontal();
  }

  if (!!request.hasPaperSize()) {
    query["PaperSize"] = request.getPaperSize();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasQuality()) {
    query["Quality"] = request.getQuality();
  }

  if (!!request.hasScalePercentage()) {
    query["ScalePercentage"] = request.getScalePercentage();
  }

  if (!!request.hasSheetCount()) {
    query["SheetCount"] = request.getSheetCount();
  }

  if (!!request.hasSheetIndex()) {
    query["SheetIndex"] = request.getSheetIndex();
  }

  if (!!request.hasShowComments()) {
    query["ShowComments"] = request.getShowComments();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasStartPage()) {
    query["StartPage"] = request.getStartPage();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  if (!!request.hasTargetURIPrefix()) {
    query["TargetURIPrefix"] = request.getTargetURIPrefix();
  }

  if (!!request.hasTrimPolicyShrink()) {
    query["TrimPolicy"] = request.getTrimPolicyShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasSourcesShrink()) {
    body["Sources"] = request.getSourcesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOfficeConversionTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOfficeConversionTaskResponse>();
}

/**
 * @summary Creates a document conversion task that converts documents, such as Word, PowerPoint, Excel, and PDF files, stored in Object Storage Service (OSS) into images, text files, or PDF files.
 *
 * @description - **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 *   >Notice: The execution time of asynchronous tasks is not guaranteed.
 * - Supported input file formats:
 *   - Word processor documents (Word): doc, docx, wps, wpss, docm, dotm, dot, and dotx.
 *   - Presentation documents (PowerPoint): pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss.
 *   - Spreadsheet documents (Excel): xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets.
 *   - PDF documents: pdf.
 * - Supported output file formats:
 *   - Images: png and jpg.
 *   - Text: txt.
 *   - PDF: pdf.
 * - The maximum size of a single file is 200 MB. This limit cannot be changed.
 * - If a file is large or its content is complex, the conversion may time out.
 * - The number of requests per second is limited to 50 for a single user.
 * - Task information is stored for only 7 days after a task starts. After this period, the information cannot be retrieved. You can promptly obtain task information using one of the following methods:
 *   - You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to obtain the returned `TaskId` and view the task information.
 *   - You can activate Message Service (MNS) in the same region as IMM and configure a subscription to promptly receive task information notifications. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html). For more information about the MNS software development kit (SDK), see [Receive and delete messages](https://help.aliyun.com/document_detail/32449.html).
 *   - You can activate RocketMQ in the same region as IMM, and create a RocketMQ 4.0 instance, a topic, and a group to promptly receive task information notifications. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html). For more information about how to use RocketMQ, see [Use an SDK for HTTP to send and receive normal messages](https://help.aliyun.com/document_detail/169009.html).
 *   - You can activate and connect to [EventBridge](https://www.aliyun.com/product/aliware/eventbridge) in the same region as IMM to promptly receive task information notifications. For more information, see [Intelligent Media Management IMM events](https://help.aliyun.com/document_detail/205730.html).
 *
 * @param request CreateOfficeConversionTaskRequest
 * @return CreateOfficeConversionTaskResponse
 */
CreateOfficeConversionTaskResponse Client::createOfficeConversionTask(const CreateOfficeConversionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOfficeConversionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a project.
 *
 * @description * Project names must be unique within the same region.
 * * The number of projects that can be created is limited. By default, you can create up to 100 projects. To increase the quota, submit a ticket or search for DingTalk group 88490020073 to join the group and submit a request.
 * * After you create a project, you can create other Intelligent Media Management (IMM) resources:
 *     + [Create a dataset](https://help.aliyun.com/document_detail/478160.html)
 *     + [Create a trigger](https://help.aliyun.com/document_detail/479912.html)
 *     + [Create a batch task](https://help.aliyun.com/document_detail/606694.html)
 *     + [Create a binding task](https://help.aliyun.com/document_detail/478202.html)
 *
 * @param tmpReq CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectShrinkRequest request = CreateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.getDatasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.getDatasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.getDatasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.getDatasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.getDatasetMaxTotalFileSize();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectMaxDatasetCount()) {
    query["ProjectMaxDatasetCount"] = request.getProjectMaxDatasetCount();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasServiceRole()) {
    query["ServiceRole"] = request.getServiceRole();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2020-09-30"},
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
 * @summary Creates a project.
 *
 * @description * Project names must be unique within the same region.
 * * The number of projects that can be created is limited. By default, you can create up to 100 projects. To increase the quota, submit a ticket or search for DingTalk group 88490020073 to join the group and submit a request.
 * * After you create a project, you can create other Intelligent Media Management (IMM) resources:
 *     + [Create a dataset](https://help.aliyun.com/document_detail/478160.html)
 *     + [Create a trigger](https://help.aliyun.com/document_detail/479912.html)
 *     + [Create a batch task](https://help.aliyun.com/document_detail/606694.html)
 *     + [Create a binding task](https://help.aliyun.com/document_detail/478202.html)
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary The similar image clustering feature groups images that you have indexed in a dataset into clusters based on visual similarity. This feature is useful for scenarios such as deduplicating images or selecting the best shots. For example, you can use it to filter burst photos in an album.
 *
 * @description - **Before calling this operation, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 *   >Notice: The execution time of asynchronous tasks is not guaranteed.
 * - Before calling this operation, index files to a dataset. You can index files by attaching a data source using [CreateBinding](https://help.aliyun.com/document_detail/478202.html), or by actively indexing files using [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * - Each call to this operation **incrementally** processes the files in the specified `Dataset`. You can call this operation periodically to process new files.
 * - After clustering completes, call the [QuerySimilarImageClusters](https://help.aliyun.com/document_detail/611304.html) operation to retrieve the clustering results.
 * - Each similar image cluster must contain at least two images. Deleting a file from a dataset changes the similar image clusters. If deleting an image reduces a cluster to fewer than two images, the cluster is automatically deleted.
 * - This operation is asynchronous. After a task starts, its information is retained for only seven days. You cannot query the information after this period. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId` to view task information. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notification messages about the task.
 *
 * @param tmpReq CreateSimilarImageClusteringTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimilarImageClusteringTaskResponse
 */
CreateSimilarImageClusteringTaskResponse Client::createSimilarImageClusteringTaskWithOptions(const CreateSimilarImageClusteringTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSimilarImageClusteringTaskShrinkRequest request = CreateSimilarImageClusteringTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSimilarImageClusteringTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSimilarImageClusteringTaskResponse>();
}

/**
 * @summary The similar image clustering feature groups images that you have indexed in a dataset into clusters based on visual similarity. This feature is useful for scenarios such as deduplicating images or selecting the best shots. For example, you can use it to filter burst photos in an album.
 *
 * @description - **Before calling this operation, review the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 *   >Notice: The execution time of asynchronous tasks is not guaranteed.
 * - Before calling this operation, index files to a dataset. You can index files by attaching a data source using [CreateBinding](https://help.aliyun.com/document_detail/478202.html), or by actively indexing files using [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * - Each call to this operation **incrementally** processes the files in the specified `Dataset`. You can call this operation periodically to process new files.
 * - After clustering completes, call the [QuerySimilarImageClusters](https://help.aliyun.com/document_detail/611304.html) operation to retrieve the clustering results.
 * - Each similar image cluster must contain at least two images. Deleting a file from a dataset changes the similar image clusters. If deleting an image reduces a cluster to fewer than two images, the cluster is automatically deleted.
 * - This operation is asynchronous. After a task starts, its information is retained for only seven days. You cannot query the information after this period. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation and use the returned `TaskId` to view task information. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive asynchronous notification messages about the task.
 *
 * @param request CreateSimilarImageClusteringTaskRequest
 * @return CreateSimilarImageClusteringTaskResponse
 */
CreateSimilarImageClusteringTaskResponse Client::createSimilarImageClusteringTask(const CreateSimilarImageClusteringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimilarImageClusteringTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a story.
 *
 * @description - **Before calling this operation, understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * - Before calling this operation, index files to a dataset by calling [CreateBinding](https://help.aliyun.com/document_detail/478202.html), [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html), or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. The information cannot be retrieved after this period. Call [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) with the returned TaskId to view task information. Alternatively, set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to obtain task information from notification messages.
 *
 * @param tmpReq CreateStoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStoryResponse
 */
CreateStoryResponse Client::createStoryWithOptions(const CreateStoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStoryShrinkRequest request = CreateStoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddress()) {
    request.setAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddress(), "Address", "json"));
  }

  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomLabels(), "CustomLabels", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  json body = {};
  if (!!request.hasAddressShrink()) {
    body["Address"] = request.getAddressShrink();
  }

  if (!!request.hasCustomId()) {
    body["CustomId"] = request.getCustomId();
  }

  if (!!request.hasCustomLabelsShrink()) {
    body["CustomLabels"] = request.getCustomLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxFileCount()) {
    body["MaxFileCount"] = request.getMaxFileCount();
  }

  if (!!request.hasMinFileCount()) {
    body["MinFileCount"] = request.getMinFileCount();
  }

  if (!!request.hasNotifyTopicName()) {
    body["NotifyTopicName"] = request.getNotifyTopicName();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasStoryEndTime()) {
    body["StoryEndTime"] = request.getStoryEndTime();
  }

  if (!!request.hasStoryName()) {
    body["StoryName"] = request.getStoryName();
  }

  if (!!request.hasStoryStartTime()) {
    body["StoryStartTime"] = request.getStoryStartTime();
  }

  if (!!request.hasStorySubType()) {
    body["StorySubType"] = request.getStorySubType();
  }

  if (!!request.hasStoryType()) {
    body["StoryType"] = request.getStoryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStoryResponse>();
}

/**
 * @summary Creates a story.
 *
 * @description - **Before calling this operation, understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * - Before calling this operation, index files to a dataset by calling [CreateBinding](https://help.aliyun.com/document_detail/478202.html), [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html), or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * - This is an asynchronous operation. After a task starts, its information is saved for only 7 days. The information cannot be retrieved after this period. Call [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) with the returned TaskId to view task information. Alternatively, set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to obtain task information from notification messages.
 *
 * @param request CreateStoryRequest
 * @return CreateStoryResponse
 */
CreateStoryResponse Client::createStory(const CreateStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStoryWithOptions(request, runtime);
}

/**
 * @summary Creates a trigger to start data processing in Intelligent Media Management (IMM). The trigger is activated by event sources, such as Object Storage Service (OSS), and uses data processing templates to process media files, such as images, videos, and documents.
 *
 * @description To process data from [Object Storage Service](https://help.aliyun.com/document_detail/99372.html), ensure that you have [attached an OSS bucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param tmpReq CreateTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTriggerWithOptions(const CreateTriggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTriggerShrinkRequest request = CreateTriggerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActions()) {
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.getActionsShrink();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.getInputShrink();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasServiceRole()) {
    body["ServiceRole"] = request.getServiceRole();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTrigger"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTriggerResponse>();
}

/**
 * @summary Creates a trigger to start data processing in Intelligent Media Management (IMM). The trigger is activated by event sources, such as Object Storage Service (OSS), and uses data processing templates to process media files, such as images, videos, and documents.
 *
 * @description To process data from [Object Storage Service](https://help.aliyun.com/document_detail/99372.html), ensure that you have [attached an OSS bucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param request CreateTriggerRequest
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTrigger(const CreateTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTriggerWithOptions(request, runtime);
}

/**
 * @summary Detects labels for scenarios, objects, and events in video content. This feature supports more than 30 categories and thousands of labels. Scenario labels include natural landscapes, life scenes, and disaster scenes. Event labels include talent shows, office work, performances, and production. Object labels include tableware, electronic products, furniture, and vehicles.
 *
 * @description - **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2747104.html) of Intelligent Media Management.**
 * - Before you call this operation, make sure that you have created a project in Intelligent Media Management. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
 *   >Notice: 
 *   The completion time of asynchronous tasks is not guaranteed.
 *   
 * - For more information about the features of this operation, see [Video label detection](https://help.aliyun.com/document_detail/477189.html).
 * - This operation supports multiple video formats, such as MP4, MPEG-TS, MKV, MOV, AVI, FLV, and M3U8.
 * - This is an asynchronous operation. After a task starts, its information is stored for seven days. You cannot retrieve the information after this period. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId` to view task information. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through message notifications.
 *
 * @param tmpReq CreateVideoLabelClassificationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoLabelClassificationTaskResponse
 */
CreateVideoLabelClassificationTaskResponse Client::createVideoLabelClassificationTaskWithOptions(const CreateVideoLabelClassificationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVideoLabelClassificationTaskShrinkRequest request = CreateVideoLabelClassificationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVideoLabelClassificationTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoLabelClassificationTaskResponse>();
}

/**
 * @summary Detects labels for scenarios, objects, and events in video content. This feature supports more than 30 categories and thousands of labels. Scenario labels include natural landscapes, life scenes, and disaster scenes. Event labels include talent shows, office work, performances, and production. Object labels include tableware, electronic products, furniture, and vehicles.
 *
 * @description - **Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2747104.html) of Intelligent Media Management.**
 * - Before you call this operation, make sure that you have created a project in Intelligent Media Management. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
 *   >Notice: 
 *   The completion time of asynchronous tasks is not guaranteed.
 *   
 * - For more information about the features of this operation, see [Video label detection](https://help.aliyun.com/document_detail/477189.html).
 * - This operation supports multiple video formats, such as MP4, MPEG-TS, MKV, MOV, AVI, FLV, and M3U8.
 * - This is an asynchronous operation. After a task starts, its information is stored for seven days. You cannot retrieve the information after this period. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation with the returned `TaskId` to view task information. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through message notifications.
 *
 * @param request CreateVideoLabelClassificationTaskRequest
 * @return CreateVideoLabelClassificationTaskResponse
 */
CreateVideoLabelClassificationTaskResponse Client::createVideoLabelClassificationTask(const CreateVideoLabelClassificationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVideoLabelClassificationTaskWithOptions(request, runtime);
}

/**
 * @summary Detects threats or non-compliant content in videos. This operation can be used in scenarios such as pornography detection, terrorism and politically sensitive content detection, text and image violation detection, undesirable scene detection, and logo detection.
 *
 * @description - **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 *   >Notice: 
 *   The completion time of asynchronous tasks is not guaranteed.
 *   
 * - The detection results are returned in an asynchronous notification message. The Suggestion field in the asynchronous notification message can have the following values:
 *   - pass: The video passed the review. No non-compliant content was detected.
 *   - block: The video must be blocked. This value is returned when non-compliant content is detected. The Categories field indicates the category of the non-compliant content. For more information about the categories, see [Content Moderation detection results](https://help.aliyun.com/document_detail/2743995.html).
 *   - review: The video requires manual review. After the manual review is complete, another asynchronous notification message is sent with the result.
 * - Video snapshot requirements:
 *   - Video frame URLs support the HTTP and HTTPS protocols.
 *   - Supported video frame formats: PNG, JPG, JPEG, BMP, GIF, and WEBP.
 *   - The size of a video frame cannot exceed 10 MB.
 *   - The recommended resolution for video frames is at least 256 × 256 pixels. A lower resolution may affect detection accuracy.
 *   - The response time for the video detection operation depends on the download time of the video frames. Make sure that the storage service for your video frames is stable and reliable. We recommend that you use Alibaba Cloud Object Storage Service (OSS) or cache frames with Alibaba Cloud CDN.
 * - This is an asynchronous operation. After a task is created, the task information is saved for only 7 days. After this period, the information cannot be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query the task information using the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 *
 * @param tmpReq CreateVideoModerationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoModerationTaskResponse
 */
CreateVideoModerationTaskResponse Client::createVideoModerationTaskWithOptions(const CreateVideoModerationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVideoModerationTaskShrinkRequest request = CreateVideoModerationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasScenes()) {
    request.setScenesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScenes(), "Scenes", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMaxFrames()) {
    query["MaxFrames"] = request.getMaxFrames();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasScenesShrink()) {
    query["Scenes"] = request.getScenesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVideoModerationTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoModerationTaskResponse>();
}

/**
 * @summary Detects threats or non-compliant content in videos. This operation can be used in scenarios such as pornography detection, terrorism and politically sensitive content detection, text and image violation detection, undesirable scene detection, and logo detection.
 *
 * @description - **Before you use this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 *   >Notice: 
 *   The completion time of asynchronous tasks is not guaranteed.
 *   
 * - The detection results are returned in an asynchronous notification message. The Suggestion field in the asynchronous notification message can have the following values:
 *   - pass: The video passed the review. No non-compliant content was detected.
 *   - block: The video must be blocked. This value is returned when non-compliant content is detected. The Categories field indicates the category of the non-compliant content. For more information about the categories, see [Content Moderation detection results](https://help.aliyun.com/document_detail/2743995.html).
 *   - review: The video requires manual review. After the manual review is complete, another asynchronous notification message is sent with the result.
 * - Video snapshot requirements:
 *   - Video frame URLs support the HTTP and HTTPS protocols.
 *   - Supported video frame formats: PNG, JPG, JPEG, BMP, GIF, and WEBP.
 *   - The size of a video frame cannot exceed 10 MB.
 *   - The recommended resolution for video frames is at least 256 × 256 pixels. A lower resolution may affect detection accuracy.
 *   - The response time for the video detection operation depends on the download time of the video frames. Make sure that the storage service for your video frames is stable and reliable. We recommend that you use Alibaba Cloud Object Storage Service (OSS) or cache frames with Alibaba Cloud CDN.
 * - This is an asynchronous operation. After a task is created, the task information is saved for only 7 days. After this period, the information cannot be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query the task information using the returned `TaskId`. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive task information through asynchronous notification messages.
 *
 * @param request CreateVideoModerationTaskRequest
 * @return CreateVideoModerationTaskResponse
 */
CreateVideoModerationTaskResponse Client::createVideoModerationTask(const CreateVideoModerationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVideoModerationTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a batch processing task.
 *
 * @description *   You can delete only a batch processing task that is in one of the following states: Ready, Failed, Suspended, and Succeeded.
 * *   Before you delete a batch processing task, you can call the [GetBatch](https://help.aliyun.com/document_detail/479922.html) operation to query the task status. This ensures a successful deletion.
 *
 * @param request DeleteBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBatchResponse
 */
DeleteBatchResponse Client::deleteBatchWithOptions(const DeleteBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteBatch"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBatchResponse>();
}

/**
 * @summary Deletes a batch processing task.
 *
 * @description *   You can delete only a batch processing task that is in one of the following states: Ready, Failed, Suspended, and Succeeded.
 * *   Before you delete a batch processing task, you can call the [GetBatch](https://help.aliyun.com/document_detail/479922.html) operation to query the task status. This ensures a successful deletion.
 *
 * @param request DeleteBatchRequest
 * @return DeleteBatchResponse
 */
DeleteBatchResponse Client::deleteBatch(const DeleteBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBatchWithOptions(request, runtime);
}

/**
 * @summary Deletes the binding between a dataset and an Object Storage Service (OSS) bucket.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - If you delete a binding, new changes in the OSS bucket are not synchronized to the dataset. Exercise caution when you perform this operation.
 *
 * @param request DeleteBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBindingResponse
 */
DeleteBindingResponse Client::deleteBindingWithOptions(const DeleteBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBinding"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBindingResponse>();
}

/**
 * @summary Deletes the binding between a dataset and an Object Storage Service (OSS) bucket.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - If you delete a binding, new changes in the OSS bucket are not synchronized to the dataset. Exercise caution when you perform this operation.
 *
 * @param request DeleteBindingRequest
 * @return DeleteBindingResponse
 */
DeleteBindingResponse Client::deleteBinding(const DeleteBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBindingWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataset.
 *
 * @description *   Before you delete a dataset, make sure that you have deleted all indexes in the dataset. For more information about how to delete indexes, see [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) and [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html).
 * *   Before you [delete a dataset](https://help.aliyun.com/document_detail/478160.html), make sure that you have deleted all bindings between the dataset and Object Storage Service (OSS) buckets. For more information about how to delete a binding, see [DeleteBinding](https://help.aliyun.com/document_detail/478205.html). The [DeleteBinding](https://help.aliyun.com/document_detail/478205.html) operation does not delete an index that is manually created, even if you set the `Cleanup` parameter to `true`. To delete indexes that are manually created, you must call the [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) or [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html) operation. For more information about the differences between automatically and manually created indexes, see [Create a metadata index](https://help.aliyun.com/document_detail/478166.html).
 *
 * @param request DeleteDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2020-09-30"},
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
 * @summary Deletes a dataset.
 *
 * @description *   Before you delete a dataset, make sure that you have deleted all indexes in the dataset. For more information about how to delete indexes, see [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) and [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html).
 * *   Before you [delete a dataset](https://help.aliyun.com/document_detail/478160.html), make sure that you have deleted all bindings between the dataset and Object Storage Service (OSS) buckets. For more information about how to delete a binding, see [DeleteBinding](https://help.aliyun.com/document_detail/478205.html). The [DeleteBinding](https://help.aliyun.com/document_detail/478205.html) operation does not delete an index that is manually created, even if you set the `Cleanup` parameter to `true`. To delete indexes that are manually created, you must call the [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) or [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html) operation. For more information about the differences between automatically and manually created indexes, see [Create a metadata index](https://help.aliyun.com/document_detail/478166.html).
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetWithOptions(request, runtime);
}

/**
 * @summary Removes the metadata of a file from a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
 * > 
 * *   The objects stored in Object Storage Service (OSS) or Photo and Drive Service are **not** deleted if you delete metadata from a dataset. If you want to delete the file, call the corresponding operations of OSS and Photo and Drive Service.
 * *   When you delete file metadata, the corresponding face clustering group information and story (if any) are changed, but the spatiotemporal clustering is not changed.
 *
 * @param request DeleteFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileMetaResponse
 */
DeleteFileMetaResponse Client::deleteFileMetaWithOptions(const DeleteFileMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileMetaResponse>();
}

/**
 * @summary Removes the metadata of a file from a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
 * > 
 * *   The objects stored in Object Storage Service (OSS) or Photo and Drive Service are **not** deleted if you delete metadata from a dataset. If you want to delete the file, call the corresponding operations of OSS and Photo and Drive Service.
 * *   When you delete file metadata, the corresponding face clustering group information and story (if any) are changed, but the spatiotemporal clustering is not changed.
 *
 * @param request DeleteFileMetaRequest
 * @return DeleteFileMetaResponse
 */
DeleteFileMetaResponse Client::deleteFileMeta(const DeleteFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileMetaWithOptions(request, runtime);
}

/**
 * @summary Deletes a spatiotemporal cluster.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
 * *   Before you call this operation, you must call the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to perform spatiotemporal clustering.
 * *   A successful deletion is returned regardless of whether a spatiotemporal clustering group ID exists.
 *
 * @param request DeleteLocationDateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLocationDateClusterResponse
 */
DeleteLocationDateClusterResponse Client::deleteLocationDateClusterWithOptions(const DeleteLocationDateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  json body = {};
  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteLocationDateCluster"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLocationDateClusterResponse>();
}

/**
 * @summary Deletes a spatiotemporal cluster.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
 * *   Before you call this operation, you must call the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to perform spatiotemporal clustering.
 * *   A successful deletion is returned regardless of whether a spatiotemporal clustering group ID exists.
 *
 * @param request DeleteLocationDateClusterRequest
 * @return DeleteLocationDateClusterResponse
 */
DeleteLocationDateClusterResponse Client::deleteLocationDateCluster(const DeleteLocationDateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLocationDateClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a project.
 *
 * @description - Before you delete a project, make sure that all resources in the project, such as datasets, bindings, batch processing tasks, and triggers, are deleted. For more information, see [DeleteDataset](https://help.aliyun.com/document_detail/478164.html), [DeleteBatch](https://help.aliyun.com/document_detail/479918.html), and [DeleteTrigger](https://help.aliyun.com/document_detail/479915.html).
 * - After a project is deleted, all resources used by the project are recycled, and all related data is lost and cannot be recovered.
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2020-09-30"},
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
 * @summary Deletes a project.
 *
 * @description - Before you delete a project, make sure that all resources in the project, such as datasets, bindings, batch processing tasks, and triggers, are deleted. For more information, see [DeleteDataset](https://help.aliyun.com/document_detail/478164.html), [DeleteBatch](https://help.aliyun.com/document_detail/479918.html), and [DeleteTrigger](https://help.aliyun.com/document_detail/479915.html).
 * - After a project is deleted, all resources used by the project are recycled, and all related data is lost and cannot be recovered.
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes a story.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request DeleteStoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStoryResponse
 */
DeleteStoryResponse Client::deleteStoryWithOptions(const DeleteStoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStoryResponse>();
}

/**
 * @summary Deletes a story.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request DeleteStoryRequest
 * @return DeleteStoryResponse
 */
DeleteStoryResponse Client::deleteStory(const DeleteStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a trigger.
 *
 * @description You can delete a trigger only if the trigger is in one of the following states: Ready, Failed, Suspended, and Succeeded. You cannot delete a trigger that is in the Running state.
 *
 * @param request DeleteTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTriggerWithOptions(const DeleteTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteTrigger"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTriggerResponse>();
}

/**
 * @summary Deletes a trigger.
 *
 * @description You can delete a trigger only if the trigger is in one of the following states: Ready, Failed, Suspended, and Succeeded. You cannot delete a trigger that is in the Running state.
 *
 * @param request DeleteTriggerRequest
 * @return DeleteTriggerResponse
 */
DeleteTriggerResponse Client::deleteTrigger(const DeleteTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTriggerWithOptions(request, runtime);
}

/**
 * @summary Unbinds an Object Storage Service (OSS) bucket from the corresponding project.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that the project is bound to a bucket. For more information, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param request DetachOSSBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachOSSBucketResponse
 */
DetachOSSBucketResponse Client::detachOSSBucketWithOptions(const DetachOSSBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.getOSSBucket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachOSSBucket"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachOSSBucketResponse>();
}

/**
 * @summary Unbinds an Object Storage Service (OSS) bucket from the corresponding project.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that the project is bound to a bucket. For more information, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param request DetachOSSBucketRequest
 * @return DetachOSSBucketResponse
 */
DetachOSSBucketResponse Client::detachOSSBucket(const DetachOSSBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachOSSBucketWithOptions(request, runtime);
}

/**
 * @summary Detects human body information, such as the confidence level and body bounding box, in an image.
 *
 * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq DetectImageBodiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageBodiesResponse
 */
DetectImageBodiesResponse Client::detectImageBodiesWithOptions(const DetectImageBodiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageBodiesShrinkRequest request = DetectImageBodiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSensitivity()) {
    query["Sensitivity"] = request.getSensitivity();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageBodies"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageBodiesResponse>();
}

/**
 * @summary Detects human body information, such as the confidence level and body bounding box, in an image.
 *
 * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request DetectImageBodiesRequest
 * @return DetectImageBodiesResponse
 */
DetectImageBodiesResponse Client::detectImageBodies(const DetectImageBodiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageBodiesWithOptions(request, runtime);
}

/**
 * @summary Detects the outline data, attributes, and license plate information of vehicles in an image. The vehicle attributes include the vehicle color (CarColor) and vehicle type (CarType). The license plate information includes the recognition content (Content) and plate frame (Boundary).
 *
 * @description *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq DetectImageCarsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageCarsResponse
 */
DetectImageCarsResponse Client::detectImageCarsWithOptions(const DetectImageCarsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageCarsShrinkRequest request = DetectImageCarsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageCars"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageCarsResponse>();
}

/**
 * @summary Detects the outline data, attributes, and license plate information of vehicles in an image. The vehicle attributes include the vehicle color (CarColor) and vehicle type (CarType). The license plate information includes the recognition content (Content) and plate frame (Boundary).
 *
 * @description *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request DetectImageCarsRequest
 * @return DetectImageCarsResponse
 */
DetectImageCarsResponse Client::detectImageCars(const DetectImageCarsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageCarsWithOptions(request, runtime);
}

/**
 * @summary Detects barcodes and QR codes in an image.
 *
 * @description *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq DetectImageCodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageCodesResponse
 */
DetectImageCodesResponse Client::detectImageCodesWithOptions(const DetectImageCodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageCodesShrinkRequest request = DetectImageCodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageCodes"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageCodesResponse>();
}

/**
 * @summary Detects barcodes and QR codes in an image.
 *
 * @description *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request DetectImageCodesRequest
 * @return DetectImageCodesResponse
 */
DetectImageCodesResponse Client::detectImageCodes(const DetectImageCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageCodesWithOptions(request, runtime);
}

/**
 * @summary Detects visually optimal cropping regions in an image at a specified aspect ratio by using AI model capabilities.
 *
 * @param tmpReq DetectImageCroppingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageCroppingResponse
 */
DetectImageCroppingResponse Client::detectImageCroppingWithOptions(const DetectImageCroppingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageCroppingShrinkRequest request = DetectImageCroppingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasInclusionHints()) {
    request.setInclusionHintsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInclusionHints(), "InclusionHints", "json"));
  }

  json query = {};
  if (!!request.hasAspectRatios()) {
    query["AspectRatios"] = request.getAspectRatios();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasInclusionHintsShrink()) {
    query["InclusionHints"] = request.getInclusionHintsShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageCropping"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageCroppingResponse>();
}

/**
 * @summary Detects visually optimal cropping regions in an image at a specified aspect ratio by using AI model capabilities.
 *
 * @param request DetectImageCroppingRequest
 * @return DetectImageCroppingResponse
 */
DetectImageCroppingResponse Client::detectImageCropping(const DetectImageCroppingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageCroppingWithOptions(request, runtime);
}

/**
 * @summary Detects faces from an image, including face boundary information, attributes, and quality. The boundary information includes the distance from the y-coordinate of the vertex to the top edge (Top), distance from the x-coordinate of the vertex to the left edge (Left), height (Height), and width (Width). Face attributes include the age (Age), age standard deviation (AgeSD), gender (Gender), emotion (Emotion), mouth opening (Mouth), beard (Beard), hat wearing (Hat), mask wearing (Mask), glasses wearing (Glasses), head orientation (HeadPose), attractiveness (Attractive), and confidence levels for preceding attributes. Quality information includes the face quality score (FaceQuality) and face resolution (Sharpness).
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq DetectImageFacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageFacesResponse
 */
DetectImageFacesResponse Client::detectImageFacesWithOptions(const DetectImageFacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageFacesShrinkRequest request = DetectImageFacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageFaces"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageFacesResponse>();
}

/**
 * @summary Detects faces from an image, including face boundary information, attributes, and quality. The boundary information includes the distance from the y-coordinate of the vertex to the top edge (Top), distance from the x-coordinate of the vertex to the left edge (Left), height (Height), and width (Width). Face attributes include the age (Age), age standard deviation (AgeSD), gender (Gender), emotion (Emotion), mouth opening (Mouth), beard (Beard), hat wearing (Hat), mask wearing (Mask), glasses wearing (Glasses), head orientation (HeadPose), attractiveness (Attractive), and confidence levels for preceding attributes. Quality information includes the face quality score (FaceQuality) and face resolution (Sharpness).
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request DetectImageFacesRequest
 * @return DetectImageFacesResponse
 */
DetectImageFacesResponse Client::detectImageFaces(const DetectImageFacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageFacesWithOptions(request, runtime);
}

/**
 * @summary Detects scene, object, and event information in an image. Scene information includes natural landscapes, daily life, and disasters. Event information includes talent shows, office events, performances, and production events. Object information includes tableware, electronics, furniture, and transportation. The DetectImageLabels operation supports more than 30 different categories and thousands of labels.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Make sure that an IMM [project](https://help.aliyun.com/document_detail/478273.html) is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * - For more information about the features of this operation, see [Image label detection](https://help.aliyun.com/document_detail/477179.html).
 * - For more information about the input images supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq DetectImageLabelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageLabelsResponse
 */
DetectImageLabelsResponse Client::detectImageLabelsWithOptions(const DetectImageLabelsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageLabelsShrinkRequest request = DetectImageLabelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageLabels"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageLabelsResponse>();
}

/**
 * @summary Detects scene, object, and event information in an image. Scene information includes natural landscapes, daily life, and disasters. Event information includes talent shows, office events, performances, and production events. Object information includes tableware, electronics, furniture, and transportation. The DetectImageLabels operation supports more than 30 different categories and thousands of labels.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Make sure that an IMM [project](https://help.aliyun.com/document_detail/478273.html) is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * - For more information about the features of this operation, see [Image label detection](https://help.aliyun.com/document_detail/477179.html).
 * - For more information about the input images supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request DetectImageLabelsRequest
 * @return DetectImageLabelsResponse
 */
DetectImageLabelsResponse Client::detectImageLabels(const DetectImageLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageLabelsWithOptions(request, runtime);
}

/**
 * @summary Calculates the aesthetics quality score of an image based on metrics such as the composition, brightness, contrast, color, and resolution. The operation returns a score within the range from 0 to 1. A higher score indicates better image quality.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478273.html).[](~~478152~~)
 * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param tmpReq DetectImageScoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageScoreResponse
 */
DetectImageScoreResponse Client::detectImageScoreWithOptions(const DetectImageScoreRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageScoreShrinkRequest request = DetectImageScoreShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageScore"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageScoreResponse>();
}

/**
 * @summary Calculates the aesthetics quality score of an image based on metrics such as the composition, brightness, contrast, color, and resolution. The operation returns a score within the range from 0 to 1. A higher score indicates better image quality.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478273.html).[](~~478152~~)
 * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
 *
 * @param request DetectImageScoreRequest
 * @return DetectImageScoreResponse
 */
DetectImageScoreResponse Client::detectImageScore(const DetectImageScoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageScoreWithOptions(request, runtime);
}

/**
 * @summary Recognizes and extracts text content from an image.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   The size of the image cannot exceed 20 MB.
 * *   The shortest side of the image is not less than 20 px, and the longest side is not more than 30,000 px.
 * *   The aspect ratio of the image is less than 1:2.
 * *   We recommend that you do not use an image that is smaller than 15 px × 15 px in size. Otherwise, the recognition rate is low.
 *
 * @param tmpReq DetectImageTextsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageTextsResponse
 */
DetectImageTextsResponse Client::detectImageTextsWithOptions(const DetectImageTextsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectImageTextsShrinkRequest request = DetectImageTextsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageTexts"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageTextsResponse>();
}

/**
 * @summary Recognizes and extracts text content from an image.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   The size of the image cannot exceed 20 MB.
 * *   The shortest side of the image is not less than 20 px, and the longest side is not more than 30,000 px.
 * *   The aspect ratio of the image is less than 1:2.
 * *   We recommend that you do not use an image that is smaller than 15 px × 15 px in size. Otherwise, the recognition rate is low.
 *
 * @param request DetectImageTextsRequest
 * @return DetectImageTextsResponse
 */
DetectImageTextsResponse Client::detectImageTexts(const DetectImageTextsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageTextsWithOptions(request, runtime);
}

/**
 * @summary Queries media metadata, including the media format and stream information.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 *
 * @param tmpReq DetectMediaMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectMediaMetaResponse
 */
DetectMediaMetaResponse Client::detectMediaMetaWithOptions(const DetectMediaMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectMediaMetaShrinkRequest request = DetectMediaMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectMediaMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectMediaMetaResponse>();
}

/**
 * @summary Queries media metadata, including the media format and stream information.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 *
 * @param request DetectMediaMetaRequest
 * @return DetectMediaMetaResponse
 */
DetectMediaMetaResponse Client::detectMediaMeta(const DetectMediaMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectMediaMetaWithOptions(request, runtime);
}

/**
 * @summary Detects whether specified text contains anomalies, such as pornography, advertisements, excessive junk content, politically sensitive content, and abuse.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * >  The text compliance detection feature only supports Chinese characters.
 *
 * @param request DetectTextAnomalyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectTextAnomalyResponse
 */
DetectTextAnomalyResponse Client::detectTextAnomalyWithOptions(const DetectTextAnomalyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectTextAnomaly"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectTextAnomalyResponse>();
}

/**
 * @summary Detects whether specified text contains anomalies, such as pornography, advertisements, excessive junk content, politically sensitive content, and abuse.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * >  The text compliance detection feature only supports Chinese characters.
 *
 * @param request DetectTextAnomalyRequest
 * @return DetectTextAnomalyResponse
 */
DetectTextAnomalyResponse Client::detectTextAnomaly(const DetectTextAnomalyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectTextAnomalyWithOptions(request, runtime);
}

/**
 * @summary Embeds specific textual information into an image as watermarks. These watermarks are visually imperceptible and do not affect the aesthetics of the image or the integrity of the original data. The watermarks can be extracted by using the CreateDecodeBlindWatermarkTask operation.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
 * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   You can embed only text as blind watermarks to an image.
 * *   The format of the output image is the same as that of the input image.
 * *   A blind watermark can still be extracted even if attacks, such as compression, scaling, cropping, and color transformation, are performed on the image.
 * *   Pure black and white images and images with low resolution (roughly less than 200 px × 200 px,) are not supported.
 *
 * @param request EncodeBlindWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EncodeBlindWatermarkResponse
 */
EncodeBlindWatermarkResponse Client::encodeBlindWatermarkWithOptions(const EncodeBlindWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasImageQuality()) {
    query["ImageQuality"] = request.getImageQuality();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasStrengthLevel()) {
    query["StrengthLevel"] = request.getStrengthLevel();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.getTargetURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EncodeBlindWatermark"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EncodeBlindWatermarkResponse>();
}

/**
 * @summary Embeds specific textual information into an image as watermarks. These watermarks are visually imperceptible and do not affect the aesthetics of the image or the integrity of the original data. The watermarks can be extracted by using the CreateDecodeBlindWatermarkTask operation.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
 * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   You can embed only text as blind watermarks to an image.
 * *   The format of the output image is the same as that of the input image.
 * *   A blind watermark can still be extracted even if attacks, such as compression, scaling, cropping, and color transformation, are performed on the image.
 * *   Pure black and white images and images with low resolution (roughly less than 200 px × 200 px,) are not supported.
 *
 * @param request EncodeBlindWatermarkRequest
 * @return EncodeBlindWatermarkResponse
 */
EncodeBlindWatermarkResponse Client::encodeBlindWatermark(const EncodeBlindWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return encodeBlindWatermarkWithOptions(request, runtime);
}

/**
 * @summary Extract text from the document
 *
 * @description - **Before using this interface, please make sure you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/88317.html) of the Intelligent Media Management product.**
 * - Before calling this interface, ensure that there is an available project ([Project](https://help.aliyun.com/document_detail/478273.html)) in the current Region. For more details, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 * - Supports common Word, Excel, PPT, PDF, and TXT documents.
 * - The file size must not exceed 200 MB. The extracted plain text file size should not exceed 2 MB (approximately 600,000 Chinese characters).
 * >Notice: If the document format is complex or the text volume is too large, a timeout error may occur. In such scenarios, it is recommended to use the [CreateOfficeConversionTask](478228) interface and specify the output format as txt to achieve similar functionality.
 *
 * @param tmpReq ExtractDocumentTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExtractDocumentTextResponse
 */
ExtractDocumentTextResponse Client::extractDocumentTextWithOptions(const ExtractDocumentTextRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExtractDocumentTextShrinkRequest request = ExtractDocumentTextShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExtractDocumentText"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExtractDocumentTextResponse>();
}

/**
 * @summary Extract text from the document
 *
 * @description - **Before using this interface, please make sure you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/88317.html) of the Intelligent Media Management product.**
 * - Before calling this interface, ensure that there is an available project ([Project](https://help.aliyun.com/document_detail/478273.html)) in the current Region. For more details, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 * - Supports common Word, Excel, PPT, PDF, and TXT documents.
 * - The file size must not exceed 200 MB. The extracted plain text file size should not exceed 2 MB (approximately 600,000 Chinese characters).
 * >Notice: If the document format is complex or the text volume is too large, a timeout error may occur. In such scenarios, it is recommended to use the [CreateOfficeConversionTask](478228) interface and specify the output format as txt to achieve similar functionality.
 *
 * @param request ExtractDocumentTextRequest
 * @return ExtractDocumentTextResponse
 */
ExtractDocumentTextResponse Client::extractDocumentText(const ExtractDocumentTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return extractDocumentTextWithOptions(request, runtime);
}

/**
 * @summary Queries the extracted file metadata, including the file name, labels, path, custom tags, and other fields. If the value of a metadata field of a file matches the specified string, the metadata of the file is returned.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 88490020073) and share your questions with us.
 * - For information about the fields that you can use as query conditions, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
 *
 * @param tmpReq FuzzyQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FuzzyQueryResponse
 */
FuzzyQueryResponse Client::fuzzyQueryWithOptions(const FuzzyQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FuzzyQueryShrinkRequest request = FuzzyQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWithFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.getWithFieldsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FuzzyQuery"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FuzzyQueryResponse>();
}

/**
 * @summary Queries the extracted file metadata, including the file name, labels, path, custom tags, and other fields. If the value of a metadata field of a file matches the specified string, the metadata of the file is returned.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 88490020073) and share your questions with us.
 * - For information about the fields that you can use as query conditions, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
 *
 * @param request FuzzyQueryRequest
 * @return FuzzyQueryResponse
 */
FuzzyQueryResponse Client::fuzzyQuery(const FuzzyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fuzzyQueryWithOptions(request, runtime);
}

/**
 * @summary Generates a playlist from a video file for live transcoding. The output is an M3U8 file that enables immediate playback and on-demand transcoding based on playback progress. Compared with offline transcoding, this method significantly reduces transcoding wait times and lowers transcoding and storage overhead.
 *
 * @description - **Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 * - Before you call this API, ensure that an active project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * - By default, this API processes only one video, audio, or subtitle stream. You can also configure the number of video, audio, and subtitle streams to process.
 *   >Notice: 
 *   The Video, Audio, and Subtitle parameters within Targets cannot all be empty. If a parameter is left empty, the corresponding processing is disabled. For example, if the Video parameter is empty, video processing is disabled, and the output TS file does not contain a video stream.
 *   
 * - The source video must be at least 0.x seconds long. The minimum duration varies slightly based on the output frame rate.
 * - This API supports generating both Media playlists and Master playlists. For more information, see the parameter descriptions in this document.
 * - This is a synchronous API. Transcoding is triggered only during playback or pre-transcoding. You can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive the transcoding task result through an asynchronous notification message.
 * - For more information about the features of this API, see [Live transcoding](https://help.aliyun.com/document_detail/477192.html).
 * - The data processing feature of OSS can also be used to generate playlists. However, this feature generates only Media Playlists and uses simplified parameters. For more information, see the OSS data processing topic [Generate a playlist](https://help.aliyun.com/document_detail/2709281.html).
 *
 * @param tmpReq GenerateVideoPlaylistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateVideoPlaylistResponse
 */
GenerateVideoPlaylistResponse Client::generateVideoPlaylistWithOptions(const GenerateVideoPlaylistRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateVideoPlaylistShrinkRequest request = GenerateVideoPlaylistShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSourceSubtitles()) {
    request.setSourceSubtitlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceSubtitles(), "SourceSubtitles", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTargets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasMasterURI()) {
    query["MasterURI"] = request.getMasterURI();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasOverwritePolicy()) {
    query["OverwritePolicy"] = request.getOverwritePolicy();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceDuration()) {
    query["SourceDuration"] = request.getSourceDuration();
  }

  if (!!request.hasSourceStartTime()) {
    query["SourceStartTime"] = request.getSourceStartTime();
  }

  if (!!request.hasSourceSubtitlesShrink()) {
    query["SourceSubtitles"] = request.getSourceSubtitlesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.getTargetsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateVideoPlaylist"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateVideoPlaylistResponse>();
}

/**
 * @summary Generates a playlist from a video file for live transcoding. The output is an M3U8 file that enables immediate playback and on-demand transcoding based on playback progress. Compared with offline transcoding, this method significantly reduces transcoding wait times and lowers transcoding and storage overhead.
 *
 * @description - **Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management.**
 * - Before you call this API, ensure that an active project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * - By default, this API processes only one video, audio, or subtitle stream. You can also configure the number of video, audio, and subtitle streams to process.
 *   >Notice: 
 *   The Video, Audio, and Subtitle parameters within Targets cannot all be empty. If a parameter is left empty, the corresponding processing is disabled. For example, if the Video parameter is empty, video processing is disabled, and the output TS file does not contain a video stream.
 *   
 * - The source video must be at least 0.x seconds long. The minimum duration varies slightly based on the output frame rate.
 * - This API supports generating both Media playlists and Master playlists. For more information, see the parameter descriptions in this document.
 * - This is a synchronous API. Transcoding is triggered only during playback or pre-transcoding. You can set the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to receive the transcoding task result through an asynchronous notification message.
 * - For more information about the features of this API, see [Live transcoding](https://help.aliyun.com/document_detail/477192.html).
 * - The data processing feature of OSS can also be used to generate playlists. However, this feature generates only Media Playlists and uses simplified parameters. For more information, see the OSS data processing topic [Generate a playlist](https://help.aliyun.com/document_detail/2709281.html).
 *
 * @param request GenerateVideoPlaylistRequest
 * @return GenerateVideoPlaylistResponse
 */
GenerateVideoPlaylistResponse Client::generateVideoPlaylist(const GenerateVideoPlaylistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateVideoPlaylistWithOptions(request, runtime);
}

/**
 * @summary Retrieves the preview and editing credentials for a document.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing of Intelligent Media Management. For more information, see [Pricing](https://help.aliyun.com/document_detail/477042.html)**.
 * - Do not perform cross-border access on OSS files. For example, if a file is stored in a bucket in the Singapore region, do not initiate preview, read, or download requests from the Chinese mainland. In such scenarios, the network link quality is significantly affected by the cross-border network environment, which may cause increased access latency, preview failures, download interruptions, or unstable connections. Network stability and access experience cannot be guaranteed. Make sure that the access point and the bucket are in the same region to avoid uncertainties caused by cross-border access.
 * - The access credential expires in 30 minutes, and the refresh credential expires in 1 day.
 * - The returned expiration time is in UTC, which is 8 hours behind UTC+8.
 * - Supported input file formats:
 *     - Word documents: doc, docx, txt, dot, wps, wpt, dotx, docm, dotm, and rtf.
 *     - Presentation documents (PPT): ppt, pptx, pptm, ppsx, ppsm, pps, potx, potm, dpt, and dps.
 *     - Excel documents: et, xls, xlt, xlsx, xlsm, xltx, xltm, and csv.
 *     - PDF documents: pdf.
 * - The maximum supported file size is 200 MB.
 * - The maximum supported number of document pages is 5,000.
 * - For projects created before December 1, 2023, billing is based on the number of document opens. Currently, billing is based on the number of API calls. To switch to the new billing mode, create a new project. Note that each API call can be used by only one user. If the call is reused, only the last user can access the document normally, and the access permissions of other users are revoked.
 * - Activate Message Service (MNS) in the same region as Intelligent Media Management, create a topic and a queue, and configure a subscription. You can pass in the MNS topic name by using the NotifyTopicName parameter to receive message notifications about file saves. For more information about the MNS SDK, see [Receive and delete messages](https://help.aliyun.com/document_detail/32449.html).
 * For an example of the JSON format of the Message field in file save message notifications, see [WebOffice message notification format](https://help.aliyun.com/document_detail/2743999.html).
 * > To use the versioning feature, you must first enable versioning in OSS and then set the History parameter to true.
 * >.
 *
 * @param tmpReq GenerateWebofficeTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateWebofficeTokenResponse
 */
GenerateWebofficeTokenResponse Client::generateWebofficeTokenWithOptions(const GenerateWebofficeTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateWebofficeTokenShrinkRequest request = GenerateWebofficeTokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasPermission()) {
    request.setPermissionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermission(), "Permission", "json"));
  }

  if (!!tmpReq.hasUser()) {
    request.setUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUser(), "User", "json"));
  }

  if (!!tmpReq.hasWatermark()) {
    request.setWatermarkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWatermark(), "Watermark", "json"));
  }

  json query = {};
  if (!!request.hasCachePreview()) {
    query["CachePreview"] = request.getCachePreview();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasExternalUploaded()) {
    query["ExternalUploaded"] = request.getExternalUploaded();
  }

  if (!!request.hasFilename()) {
    query["Filename"] = request.getFilename();
  }

  if (!!request.hasHidecmb()) {
    query["Hidecmb"] = request.getHidecmb();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasNotifyTopicName()) {
    query["NotifyTopicName"] = request.getNotifyTopicName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPermissionShrink()) {
    query["Permission"] = request.getPermissionShrink();
  }

  if (!!request.hasPreviewPages()) {
    query["PreviewPages"] = request.getPreviewPages();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasReferer()) {
    query["Referer"] = request.getReferer();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasUserShrink()) {
    query["User"] = request.getUserShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasWatermarkShrink()) {
    query["Watermark"] = request.getWatermarkShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateWebofficeToken"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateWebofficeTokenResponse>();
}

/**
 * @summary Retrieves the preview and editing credentials for a document.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing of Intelligent Media Management. For more information, see [Pricing](https://help.aliyun.com/document_detail/477042.html)**.
 * - Do not perform cross-border access on OSS files. For example, if a file is stored in a bucket in the Singapore region, do not initiate preview, read, or download requests from the Chinese mainland. In such scenarios, the network link quality is significantly affected by the cross-border network environment, which may cause increased access latency, preview failures, download interruptions, or unstable connections. Network stability and access experience cannot be guaranteed. Make sure that the access point and the bucket are in the same region to avoid uncertainties caused by cross-border access.
 * - The access credential expires in 30 minutes, and the refresh credential expires in 1 day.
 * - The returned expiration time is in UTC, which is 8 hours behind UTC+8.
 * - Supported input file formats:
 *     - Word documents: doc, docx, txt, dot, wps, wpt, dotx, docm, dotm, and rtf.
 *     - Presentation documents (PPT): ppt, pptx, pptm, ppsx, ppsm, pps, potx, potm, dpt, and dps.
 *     - Excel documents: et, xls, xlt, xlsx, xlsm, xltx, xltm, and csv.
 *     - PDF documents: pdf.
 * - The maximum supported file size is 200 MB.
 * - The maximum supported number of document pages is 5,000.
 * - For projects created before December 1, 2023, billing is based on the number of document opens. Currently, billing is based on the number of API calls. To switch to the new billing mode, create a new project. Note that each API call can be used by only one user. If the call is reused, only the last user can access the document normally, and the access permissions of other users are revoked.
 * - Activate Message Service (MNS) in the same region as Intelligent Media Management, create a topic and a queue, and configure a subscription. You can pass in the MNS topic name by using the NotifyTopicName parameter to receive message notifications about file saves. For more information about the MNS SDK, see [Receive and delete messages](https://help.aliyun.com/document_detail/32449.html).
 * For an example of the JSON format of the Message field in file save message notifications, see [WebOffice message notification format](https://help.aliyun.com/document_detail/2743999.html).
 * > To use the versioning feature, you must first enable versioning in OSS and then set the History parameter to true.
 * >.
 *
 * @param request GenerateWebofficeTokenRequest
 * @return GenerateWebofficeTokenResponse
 */
GenerateWebofficeTokenResponse Client::generateWebofficeToken(const GenerateWebofficeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateWebofficeTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a batch processing task.
 *
 * @param request GetBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchResponse
 */
GetBatchResponse Client::getBatchWithOptions(const GetBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatch"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchResponse>();
}

/**
 * @summary Queries the information about a batch processing task.
 *
 * @param request GetBatchRequest
 * @return GetBatchResponse
 */
GetBatchResponse Client::getBatch(const GetBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchWithOptions(request, runtime);
}

/**
 * @summary Queries the binding relationship between a specific dataset and an Object Storage Service (OSS) bucket.
 *
 * @description - **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * - Make sure that the binding relationship that you want to query exists. For information about how to create a binding relationship, see [CreateBinding](https://help.aliyun.com/document_detail/478202.html).
 *
 * @param request GetBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBindingResponse
 */
GetBindingResponse Client::getBindingWithOptions(const GetBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBinding"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBindingResponse>();
}

/**
 * @summary Queries the binding relationship between a specific dataset and an Object Storage Service (OSS) bucket.
 *
 * @description - **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * - Make sure that the binding relationship that you want to query exists. For information about how to create a binding relationship, see [CreateBinding](https://help.aliyun.com/document_detail/478202.html).
 *
 * @param request GetBindingRequest
 * @return GetBindingResponse
 */
GetBindingResponse Client::getBinding(const GetBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBindingWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetDRMLicense is deprecated
 *
 * @summary drmlicense获取
 *
 * @param request GetDRMLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDRMLicenseResponse
 */
GetDRMLicenseResponse Client::getDRMLicenseWithOptions(const GetDRMLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyId()) {
    query["KeyId"] = request.getKeyId();
  }

  if (!!request.hasNotifyEndpoint()) {
    query["NotifyEndpoint"] = request.getNotifyEndpoint();
  }

  if (!!request.hasNotifyTopicName()) {
    query["NotifyTopicName"] = request.getNotifyTopicName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasProtectionSystem()) {
    query["ProtectionSystem"] = request.getProtectionSystem();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDRMLicense"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDRMLicenseResponse>();
}

/**
 * @deprecated OpenAPI GetDRMLicense is deprecated
 *
 * @summary drmlicense获取
 *
 * @param request GetDRMLicenseRequest
 * @return GetDRMLicenseResponse
 */
GetDRMLicenseResponse Client::getDRMLicense(const GetDRMLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDRMLicenseWithOptions(request, runtime);
}

/**
 * @summary Queries a dataset.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - The GetDataset operation supports real-time retrieval of file statistics. You can specify WithStatistics to enable real-time retrieval of file statistics.
 *
 * @param request GetDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasWithStatistics()) {
    query["WithStatistics"] = request.getWithStatistics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2020-09-30"},
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
 * @summary Queries a dataset.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - The GetDataset operation supports real-time retrieval of file statistics. You can specify WithStatistics to enable real-time retrieval of file statistics.
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetWithOptions(request, runtime);
}

/**
 * @summary Queries the result of an invisible watermark parsing task.
 *
 * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   Before you call this operation, make sure that an invisible watermark task is created and the task ID is obtained.``
 *
 * @param request GetDecodeBlindWatermarkResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDecodeBlindWatermarkResultResponse
 */
GetDecodeBlindWatermarkResultResponse Client::getDecodeBlindWatermarkResultWithOptions(const GetDecodeBlindWatermarkResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDecodeBlindWatermarkResult"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDecodeBlindWatermarkResultResponse>();
}

/**
 * @summary Queries the result of an invisible watermark parsing task.
 *
 * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   Before you call this operation, make sure that an invisible watermark task is created and the task ID is obtained.``
 *
 * @param request GetDecodeBlindWatermarkResultRequest
 * @return GetDecodeBlindWatermarkResultResponse
 */
GetDecodeBlindWatermarkResultResponse Client::getDecodeBlindWatermarkResult(const GetDecodeBlindWatermarkResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDecodeBlindWatermarkResultWithOptions(request, runtime);
}

/**
 * @summary Obtains basic information about face clustering, including the creation time, number of images, and cover.
 *
 * @description - **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * - Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
 *
 * @param request GetFigureClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFigureClusterResponse
 */
GetFigureClusterResponse Client::getFigureClusterWithOptions(const GetFigureClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFigureCluster"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFigureClusterResponse>();
}

/**
 * @summary Obtains basic information about face clustering, including the creation time, number of images, and cover.
 *
 * @description - **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * - Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
 *
 * @param request GetFigureClusterRequest
 * @return GetFigureClusterResponse
 */
GetFigureClusterResponse Client::getFigureCluster(const GetFigureClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFigureClusterWithOptions(request, runtime);
}

/**
 * @summary Queries metadata of a file whose metadata is indexed into the dataset.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 *
 * @param tmpReq GetFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileMetaResponse
 */
GetFileMetaResponse Client::getFileMetaWithOptions(const GetFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetFileMetaShrinkRequest request = GetFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWithFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.getWithFieldsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileMetaResponse>();
}

/**
 * @summary Queries metadata of a file whose metadata is indexed into the dataset.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 *
 * @param request GetFileMetaRequest
 * @return GetFileMetaResponse
 */
GetFileMetaResponse Client::getFileMeta(const GetFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileMetaWithOptions(request, runtime);
}

/**
 * @summary Retrieves an image content moderation task.
 *
 * @param request GetImageModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageModerationResultResponse
 */
GetImageModerationResultResponse Client::getImageModerationResultWithOptions(const GetImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageModerationResult"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageModerationResultResponse>();
}

/**
 * @summary Retrieves an image content moderation task.
 *
 * @param request GetImageModerationResultRequest
 * @return GetImageModerationResultResponse
 */
GetImageModerationResultResponse Client::getImageModerationResult(const GetImageModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageModerationResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the project name of a project that is bound to a specified OSS bucket in the same region.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM) and its [pricing](https://help.aliyun.com/document_detail/477042.html).**
 * - Before you call this operation, make sure that you have called the [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html) operation to bind a project to an OSS bucket.
 *
 * @param request GetOSSBucketAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOSSBucketAttachmentResponse
 */
GetOSSBucketAttachmentResponse Client::getOSSBucketAttachmentWithOptions(const GetOSSBucketAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.getOSSBucket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOSSBucketAttachment"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOSSBucketAttachmentResponse>();
}

/**
 * @summary Retrieves the project name of a project that is bound to a specified OSS bucket in the same region.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM) and its [pricing](https://help.aliyun.com/document_detail/477042.html).**
 * - Before you call this operation, make sure that you have called the [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html) operation to bind a project to an OSS bucket.
 *
 * @param request GetOSSBucketAttachmentRequest
 * @return GetOSSBucketAttachmentResponse
 */
GetOSSBucketAttachmentResponse Client::getOSSBucketAttachment(const GetOSSBucketAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOSSBucketAttachmentWithOptions(request, runtime);
}

/**
 * @summary Queries information about a specified project, including basic information and statistics information related to datasets and files.
 *
 * @description Querying project information supports real-time retrieval of file statistics information. You can enable this feature through parameter settings. For details, see the request parameters section.
 * >Notice: Only files in datasets created before December 20, 2025 can be counted.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasWithStatistics()) {
    query["WithStatistics"] = request.getWithStatistics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2020-09-30"},
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
 * @summary Queries information about a specified project, including basic information and statistics information related to datasets and files.
 *
 * @description Querying project information supports real-time retrieval of file statistics information. You can enable this feature through parameter settings. For details, see the request parameters section.
 * >Notice: Only files in datasets created before December 20, 2025 can be counted.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary Queries a story.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request GetStoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStoryResponse
 */
GetStoryResponse Client::getStoryWithOptions(const GetStoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStoryResponse>();
}

/**
 * @summary Queries a story.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request GetStoryRequest
 * @return GetStoryResponse
 */
GetStoryResponse Client::getStory(const GetStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStoryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specified asynchronous task. Intelligent Media Management (IMM) supports various asynchronous data processing capabilities, each with its own task creation operation, such as CreateFigureClusteringTask for creating figure clustering tasks and CreateFileCompressionTask for creating file compression tasks. This operation is a general-purpose operation that allows you to query the details of an asynchronous task by task ID and type.
 *
 * @description **Before you use this operation, make sure that you are familiar with the billing of Intelligent Media Management and its [pricing](https://help.aliyun.com/document_detail/477042.html).**.
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRequestDefinition()) {
    query["RequestDefinition"] = request.getRequestDefinition();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Queries the information about a specified asynchronous task. Intelligent Media Management (IMM) supports various asynchronous data processing capabilities, each with its own task creation operation, such as CreateFigureClusteringTask for creating figure clustering tasks and CreateFileCompressionTask for creating file compression tasks. This operation is a general-purpose operation that allows you to query the details of an asynchronous task by task ID and type.
 *
 * @description **Before you use this operation, make sure that you are familiar with the billing of Intelligent Media Management and its [pricing](https://help.aliyun.com/document_detail/477042.html).**.
 *
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a trigger.
 *
 * @param request GetTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTriggerResponse
 */
GetTriggerResponse Client::getTriggerWithOptions(const GetTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrigger"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTriggerResponse>();
}

/**
 * @summary Queries the information about a trigger.
 *
 * @param request GetTriggerRequest
 * @return GetTriggerResponse
 */
GetTriggerResponse Client::getTrigger(const GetTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTriggerWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of a video label detection task.
 *
 * @description - Before you call this operation, make sure that you have created a project ([Project](https://help.aliyun.com/document_detail/478273.html)) in Intelligent Media Management. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * - Before you call this operation, make sure that you have created a [video label detection task](https://help.aliyun.com/document_detail/478223.html) and obtained the `TaskId` of the task.
 *
 * @param request GetVideoLabelClassificationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoLabelClassificationResultResponse
 */
GetVideoLabelClassificationResultResponse Client::getVideoLabelClassificationResultWithOptions(const GetVideoLabelClassificationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoLabelClassificationResult"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoLabelClassificationResultResponse>();
}

/**
 * @summary Retrieves the result of a video label detection task.
 *
 * @description - Before you call this operation, make sure that you have created a project ([Project](https://help.aliyun.com/document_detail/478273.html)) in Intelligent Media Management. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * - Before you call this operation, make sure that you have created a [video label detection task](https://help.aliyun.com/document_detail/478223.html) and obtained the `TaskId` of the task.
 *
 * @param request GetVideoLabelClassificationResultRequest
 * @return GetVideoLabelClassificationResultResponse
 */
GetVideoLabelClassificationResultResponse Client::getVideoLabelClassificationResult(const GetVideoLabelClassificationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoLabelClassificationResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves a video content moderation task.
 *
 * @param request GetVideoModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoModerationResultResponse
 */
GetVideoModerationResultResponse Client::getVideoModerationResultWithOptions(const GetVideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoModerationResult"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoModerationResultResponse>();
}

/**
 * @summary Retrieves a video content moderation task.
 *
 * @param request GetVideoModerationResultRequest
 * @return GetVideoModerationResultResponse
 */
GetVideoModerationResultResponse Client::getVideoModerationResult(const GetVideoModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoModerationResultWithOptions(request, runtime);
}

/**
 * @summary Performs data processing on input files for tasks such as label detection, face detection, and location detection. This operation extracts object metadata and creates an index, which lets you retrieve data from a dataset.
 *
 * @description - **Make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management before you use this API.**
 * - For a list of supported data processing operations for indexing object metadata, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
 * - The total number and size of files that can be indexed are limited. For more information, see the Dataset limits section in [Limits](https://help.aliyun.com/document_detail/475569.html). For information about how to create a dataset, see the parameter descriptions.
 * - For a list of regions where you can index object metadata, see the \\"Features supported by region, Datasets and indexes\\" section in [Limits](https://help.aliyun.com/document_detail/475569.html).
 * - After you index object metadata, you can retrieve data using [Simple query](https://help.aliyun.com/document_detail/478175.html). For information about other retrieval features, see [Query and statistics](https://help.aliyun.com/document_detail/2402363.html). You can also create face groups using [Create a face clustering task](https://help.aliyun.com/document_detail/478180.html). For information about other clustering features, see [Intelligent management](https://help.aliyun.com/document_detail/2402365.html).
 * > * This is an asynchronous operation. After you submit a request, the file is processed. The processing time can range from several seconds to several minutes or longer, depending on the [workflow template and operators](https://help.aliyun.com/document_detail/466304.html) and file content. After the processing is complete, the metadata is stored in the dataset. You can use the [message subscription](https://help.aliyun.com/document_detail/603317.html) feature to receive a notification when the task is complete.
 *
 * @param tmpReq IndexFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IndexFileMetaResponse
 */
IndexFileMetaResponse Client::indexFileMetaWithOptions(const IndexFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IndexFileMetaShrinkRequest request = IndexFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFile()) {
    request.setFileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFile(), "File", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFileShrink()) {
    query["File"] = request.getFileShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IndexFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IndexFileMetaResponse>();
}

/**
 * @summary Performs data processing on input files for tasks such as label detection, face detection, and location detection. This operation extracts object metadata and creates an index, which lets you retrieve data from a dataset.
 *
 * @description - **Make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management before you use this API.**
 * - For a list of supported data processing operations for indexing object metadata, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
 * - The total number and size of files that can be indexed are limited. For more information, see the Dataset limits section in [Limits](https://help.aliyun.com/document_detail/475569.html). For information about how to create a dataset, see the parameter descriptions.
 * - For a list of regions where you can index object metadata, see the \\"Features supported by region, Datasets and indexes\\" section in [Limits](https://help.aliyun.com/document_detail/475569.html).
 * - After you index object metadata, you can retrieve data using [Simple query](https://help.aliyun.com/document_detail/478175.html). For information about other retrieval features, see [Query and statistics](https://help.aliyun.com/document_detail/2402363.html). You can also create face groups using [Create a face clustering task](https://help.aliyun.com/document_detail/478180.html). For information about other clustering features, see [Intelligent management](https://help.aliyun.com/document_detail/2402365.html).
 * > * This is an asynchronous operation. After you submit a request, the file is processed. The processing time can range from several seconds to several minutes or longer, depending on the [workflow template and operators](https://help.aliyun.com/document_detail/466304.html) and file content. After the processing is complete, the metadata is stored in the dataset. You can use the [message subscription](https://help.aliyun.com/document_detail/603317.html) feature to receive a notification when the task is complete.
 *
 * @param request IndexFileMetaRequest
 * @return IndexFileMetaResponse
 */
IndexFileMetaResponse Client::indexFileMeta(const IndexFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return indexFileMetaWithOptions(request, runtime);
}

/**
 * @summary List bound attachments
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/88317.html) of the Intelligent Media Management product before using this interface.**
 * - Ensure that you have called [Bind Object Storage Bucket](～～478206～～) to bind the OSS Bucket to the project.
 *
 * @param request ListAttachedOSSBucketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAttachedOSSBucketsResponse
 */
ListAttachedOSSBucketsResponse Client::listAttachedOSSBucketsWithOptions(const ListAttachedOSSBucketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAttachedOSSBuckets"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAttachedOSSBucketsResponse>();
}

/**
 * @summary List bound attachments
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/88317.html) of the Intelligent Media Management product before using this interface.**
 * - Ensure that you have called [Bind Object Storage Bucket](～～478206～～) to bind the OSS Bucket to the project.
 *
 * @param request ListAttachedOSSBucketsRequest
 * @return ListAttachedOSSBucketsResponse
 */
ListAttachedOSSBucketsResponse Client::listAttachedOSSBuckets(const ListAttachedOSSBucketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAttachedOSSBucketsWithOptions(request, runtime);
}

/**
 * @summary Queries batch processing tasks. You can query batch processing tasks based on conditions such task tags and status. The results can be sorted.
 *
 * @param request ListBatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBatchesResponse
 */
ListBatchesResponse Client::listBatchesWithOptions(const ListBatchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTagSelector()) {
    query["TagSelector"] = request.getTagSelector();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBatches"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBatchesResponse>();
}

/**
 * @summary Queries batch processing tasks. You can query batch processing tasks based on conditions such task tags and status. The results can be sorted.
 *
 * @param request ListBatchesRequest
 * @return ListBatchesResponse
 */
ListBatchesResponse Client::listBatches(const ListBatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBatchesWithOptions(request, runtime);
}

/**
 * @summary Query the list of bindings between datasets and Object Storage Service (OSS) buckets.
 *
 * @description **Before you use this operation, make sure that you are familiar with the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 *
 * @param request ListBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindingsResponse
 */
ListBindingsResponse Client::listBindingsWithOptions(const ListBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBindings"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindingsResponse>();
}

/**
 * @summary Query the list of bindings between datasets and Object Storage Service (OSS) buckets.
 *
 * @description **Before you use this operation, make sure that you are familiar with the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 *
 * @param request ListBindingsRequest
 * @return ListBindingsResponse
 */
ListBindingsResponse Client::listBindings(const ListBindingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindingsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of datasets. You can query the list by dataset prefix.
 *
 * @param request ListDatasetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const ListDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.getPrefix();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2020-09-30"},
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
 * @summary Queries a list of datasets. You can query the list by dataset prefix.
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetsWithOptions(request, runtime);
}

/**
 * @summary Queries information about all projects, including basic information and statistics information related to datasets and files.
 *
 * @description Paging is supported for viewing returned data. When performing a paged query for the first page, set only MaxResults to limit the number of returned entries. The NextToken value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the NextToken value obtained from the previous response as the query credential, and set MaxResults to limit the number of returned entries.
 *
 * @param tmpReq ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectsShrinkRequest request = ListProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.getPrefix();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2020-09-30"},
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
 * @summary Queries information about all projects, including basic information and statistics information related to datasets and files.
 *
 * @description Paging is supported for viewing returned data. When performing a paged query for the first page, set only MaxResults to limit the number of returned entries. The NextToken value in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the NextToken value obtained from the previous response as the query credential, and set MaxResults to limit the number of returned entries.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Get the list of regions
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Get the list of regions
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary Lists tasks based on specific conditions, such as by time range and by tag.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
 *
 * @param tmpReq ListTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTasksShrinkRequest request = ListTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEndTimeRange()) {
    request.setEndTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndTimeRange(), "EndTimeRange", "json"));
  }

  if (!!tmpReq.hasStartTimeRange()) {
    request.setStartTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartTimeRange(), "StartTimeRange", "json"));
  }

  if (!!tmpReq.hasTaskTypes()) {
    request.setTaskTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskTypes(), "TaskTypes", "json"));
  }

  json query = {};
  if (!!request.hasEndTimeRangeShrink()) {
    query["EndTimeRange"] = request.getEndTimeRangeShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRequestDefinition()) {
    query["RequestDefinition"] = request.getRequestDefinition();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTimeRangeShrink()) {
    query["StartTimeRange"] = request.getStartTimeRangeShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTagSelector()) {
    query["TagSelector"] = request.getTagSelector();
  }

  if (!!request.hasTaskTypesShrink()) {
    query["TaskTypes"] = request.getTaskTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2020-09-30"},
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
 * @summary Lists tasks based on specific conditions, such as by time range and by tag.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTasksWithOptions(request, runtime);
}

/**
 * @summary Queries triggers by tag or status.
 *
 * @param request ListTriggersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTriggersResponse
 */
ListTriggersResponse Client::listTriggersWithOptions(const ListTriggersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTagSelector()) {
    query["TagSelector"] = request.getTagSelector();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTriggers"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTriggersResponse>();
}

/**
 * @summary Queries triggers by tag or status.
 *
 * @param request ListTriggersRequest
 * @return ListTriggersResponse
 */
ListTriggersResponse Client::listTriggers(const ListTriggersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTriggersWithOptions(request, runtime);
}

/**
 * @summary Queries face groups based on given conditions.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
 *
 * @param tmpReq QueryFigureClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFigureClustersResponse
 */
QueryFigureClustersResponse Client::queryFigureClustersWithOptions(const QueryFigureClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryFigureClustersShrinkRequest request = QueryFigureClustersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateTimeRange()) {
    request.setCreateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateTimeRange(), "CreateTimeRange", "json"));
  }

  if (!!tmpReq.hasUpdateTimeRange()) {
    request.setUpdateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateTimeRange(), "UpdateTimeRange", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimeRangeShrink()) {
    query["CreateTimeRange"] = request.getCreateTimeRangeShrink();
  }

  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.getCustomLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasUpdateTimeRangeShrink()) {
    query["UpdateTimeRange"] = request.getUpdateTimeRangeShrink();
  }

  if (!!request.hasWithTotalCount()) {
    query["WithTotalCount"] = request.getWithTotalCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFigureClusters"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFigureClustersResponse>();
}

/**
 * @summary Queries face groups based on given conditions.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
 *
 * @param request QueryFigureClustersRequest
 * @return QueryFigureClustersResponse
 */
QueryFigureClustersResponse Client::queryFigureClusters(const QueryFigureClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFigureClustersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of spatiotemporal clusters based on the specified conditions.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
 * *   Before you call this operation, make sure that you have called the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to create spatiotemporal clusters in the project.
 *
 * @param tmpReq QueryLocationDateClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLocationDateClustersResponse
 */
QueryLocationDateClustersResponse Client::queryLocationDateClustersWithOptions(const QueryLocationDateClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryLocationDateClustersShrinkRequest request = QueryLocationDateClustersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddress()) {
    request.setAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddress(), "Address", "json"));
  }

  if (!!tmpReq.hasCreateTimeRange()) {
    request.setCreateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateTimeRange(), "CreateTimeRange", "json"));
  }

  if (!!tmpReq.hasLocationDateClusterEndTimeRange()) {
    request.setLocationDateClusterEndTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocationDateClusterEndTimeRange(), "LocationDateClusterEndTimeRange", "json"));
  }

  if (!!tmpReq.hasLocationDateClusterLevels()) {
    request.setLocationDateClusterLevelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocationDateClusterLevels(), "LocationDateClusterLevels", "json"));
  }

  if (!!tmpReq.hasLocationDateClusterStartTimeRange()) {
    request.setLocationDateClusterStartTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocationDateClusterStartTimeRange(), "LocationDateClusterStartTimeRange", "json"));
  }

  if (!!tmpReq.hasUpdateTimeRange()) {
    request.setUpdateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateTimeRange(), "UpdateTimeRange", "json"));
  }

  json query = {};
  if (!!request.hasAddressShrink()) {
    query["Address"] = request.getAddressShrink();
  }

  if (!!request.hasCreateTimeRangeShrink()) {
    query["CreateTimeRange"] = request.getCreateTimeRangeShrink();
  }

  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.getCustomLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasLocationDateClusterEndTimeRangeShrink()) {
    query["LocationDateClusterEndTimeRange"] = request.getLocationDateClusterEndTimeRangeShrink();
  }

  if (!!request.hasLocationDateClusterLevelsShrink()) {
    query["LocationDateClusterLevels"] = request.getLocationDateClusterLevelsShrink();
  }

  if (!!request.hasLocationDateClusterStartTimeRangeShrink()) {
    query["LocationDateClusterStartTimeRange"] = request.getLocationDateClusterStartTimeRangeShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUpdateTimeRangeShrink()) {
    query["UpdateTimeRange"] = request.getUpdateTimeRangeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryLocationDateClusters"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLocationDateClustersResponse>();
}

/**
 * @summary Queries a list of spatiotemporal clusters based on the specified conditions.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
 * *   Before you call this operation, make sure that you have called the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to create spatiotemporal clusters in the project.
 *
 * @param request QueryLocationDateClustersRequest
 * @return QueryLocationDateClustersResponse
 */
QueryLocationDateClustersResponse Client::queryLocationDateClusters(const QueryLocationDateClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLocationDateClustersWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query the list of similar image clusters.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, you must call the [CreateSimilarImageClusteringTask](https://help.aliyun.com/document_detail/611302.html) operation to cluster similar images in the dataset.
 *
 * @param request QuerySimilarImageClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySimilarImageClustersResponse
 */
QuerySimilarImageClustersResponse Client::querySimilarImageClustersWithOptions(const QuerySimilarImageClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.getCustomLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySimilarImageClusters"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySimilarImageClustersResponse>();
}

/**
 * @summary You can call this operation to query the list of similar image clusters.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, you must call the [CreateSimilarImageClusteringTask](https://help.aliyun.com/document_detail/611302.html) operation to cluster similar images in the dataset.
 *
 * @param request QuerySimilarImageClustersRequest
 * @return QuerySimilarImageClustersResponse
 */
QuerySimilarImageClustersResponse Client::querySimilarImageClusters(const QuerySimilarImageClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySimilarImageClustersWithOptions(request, runtime);
}

/**
 * @summary Queries stories based on the specified conditions.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param tmpReq QueryStoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryStoriesResponse
 */
QueryStoriesResponse Client::queryStoriesWithOptions(const QueryStoriesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryStoriesShrinkRequest request = QueryStoriesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateTimeRange()) {
    request.setCreateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateTimeRange(), "CreateTimeRange", "json"));
  }

  if (!!tmpReq.hasFigureClusterIds()) {
    request.setFigureClusterIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFigureClusterIds(), "FigureClusterIds", "json"));
  }

  if (!!tmpReq.hasStoryEndTimeRange()) {
    request.setStoryEndTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStoryEndTimeRange(), "StoryEndTimeRange", "json"));
  }

  if (!!tmpReq.hasStoryStartTimeRange()) {
    request.setStoryStartTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStoryStartTimeRange(), "StoryStartTimeRange", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimeRangeShrink()) {
    query["CreateTimeRange"] = request.getCreateTimeRangeShrink();
  }

  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.getCustomLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFigureClusterIdsShrink()) {
    query["FigureClusterIds"] = request.getFigureClusterIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStoryEndTimeRangeShrink()) {
    query["StoryEndTimeRange"] = request.getStoryEndTimeRangeShrink();
  }

  if (!!request.hasStoryName()) {
    query["StoryName"] = request.getStoryName();
  }

  if (!!request.hasStoryStartTimeRangeShrink()) {
    query["StoryStartTimeRange"] = request.getStoryStartTimeRangeShrink();
  }

  if (!!request.hasStorySubType()) {
    query["StorySubType"] = request.getStorySubType();
  }

  if (!!request.hasStoryType()) {
    query["StoryType"] = request.getStoryType();
  }

  if (!!request.hasWithEmptyStories()) {
    query["WithEmptyStories"] = request.getWithEmptyStories();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryStories"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryStoriesResponse>();
}

/**
 * @summary Queries stories based on the specified conditions.
 *
 * @description - Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).\\*\\*\\*\\*
 * - Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * - Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request QueryStoriesRequest
 * @return QueryStoriesResponse
 */
QueryStoriesResponse Client::queryStories(const QueryStoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryStoriesWithOptions(request, runtime);
}

/**
 * @summary Refreshes a Weboffice access token. A Weboffice access token is valid for 30 minutes. After it expires, you can no longer access Weboffice. To continue accessing Weboffice, call this operation to refresh the Weboffice access token and obtain a new token that is also valid for 30 minutes.
 *
 * @description **Make sure that you are familiar with the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM) before you invoke this operation.**
 * - For billing details, refer to [WebOffice billing](https://help.aliyun.com/document_detail/2639703.html).
 * - The access token expires in 30 minutes. Open the preview before the access token expires. After the token expires, previewing is no longer available.
 * - The refresh token expires in 1 day. Invoke the refresh operation before the refresh token expires. After the token expires, it becomes invalid.
 * - The returned expiration time is in UTC, which is 8 hours behind UTC+8.
 * > The access token is used for actual preview session access. The refresh token simplifies the parameter settings required for refreshing tokens. You can use the refresh token to directly obtain a new token with the previously configured settings.
 * >
 *
 * @param tmpReq RefreshWebofficeTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshWebofficeTokenResponse
 */
RefreshWebofficeTokenResponse Client::refreshWebofficeTokenWithOptions(const RefreshWebofficeTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RefreshWebofficeTokenShrinkRequest request = RefreshWebofficeTokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRefreshToken()) {
    query["RefreshToken"] = request.getRefreshToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshWebofficeToken"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshWebofficeTokenResponse>();
}

/**
 * @summary Refreshes a Weboffice access token. A Weboffice access token is valid for 30 minutes. After it expires, you can no longer access Weboffice. To continue accessing Weboffice, call this operation to refresh the Weboffice access token and obtain a new token that is also valid for 30 minutes.
 *
 * @description **Make sure that you are familiar with the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM) before you invoke this operation.**
 * - For billing details, refer to [WebOffice billing](https://help.aliyun.com/document_detail/2639703.html).
 * - The access token expires in 30 minutes. Open the preview before the access token expires. After the token expires, previewing is no longer available.
 * - The refresh token expires in 1 day. Invoke the refresh operation before the refresh token expires. After the token expires, it becomes invalid.
 * - The returned expiration time is in UTC, which is 8 hours behind UTC+8.
 * > The access token is used for actual preview session access. The refresh token simplifies the parameter settings required for refreshing tokens. You can use the refresh token to directly obtain a new token with the previously configured settings.
 * >
 *
 * @param request RefreshWebofficeTokenRequest
 * @return RefreshWebofficeTokenResponse
 */
RefreshWebofficeTokenResponse Client::refreshWebofficeToken(const RefreshWebofficeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshWebofficeTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes files from a story.
 *
 * @param tmpReq RemoveStoryFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveStoryFilesResponse
 */
RemoveStoryFilesResponse Client::removeStoryFilesWithOptions(const RemoveStoryFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveStoryFilesShrinkRequest request = RemoveStoryFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  json body = {};
  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFilesShrink()) {
    body["Files"] = request.getFilesShrink();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveStoryFiles"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveStoryFilesResponse>();
}

/**
 * @summary Deletes files from a story.
 *
 * @param request RemoveStoryFilesRequest
 * @return RemoveStoryFilesResponse
 */
RemoveStoryFilesResponse Client::removeStoryFiles(const RemoveStoryFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeStoryFilesWithOptions(request, runtime);
}

/**
 * @summary Resumes a batch processing task that is in the Suspended or Failed state.
 *
 * @description You can resume a batch processing task only when the task is in the Suspended or Failed state. A batch processing task continues to provide services after you resume the task.
 *
 * @param request ResumeBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeBatchResponse
 */
ResumeBatchResponse Client::resumeBatchWithOptions(const ResumeBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResumeBatch"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeBatchResponse>();
}

/**
 * @summary Resumes a batch processing task that is in the Suspended or Failed state.
 *
 * @description You can resume a batch processing task only when the task is in the Suspended or Failed state. A batch processing task continues to provide services after you resume the task.
 *
 * @param request ResumeBatchRequest
 * @return ResumeBatchResponse
 */
ResumeBatchResponse Client::resumeBatch(const ResumeBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeBatchWithOptions(request, runtime);
}

/**
 * @summary Resumes a trigger that is in the Suspended or Failed state.
 *
 * @description You can resume only a trigger that is in the Suspended or Failed state. After you resume a trigger, the trigger continues to provide services as expected.
 *
 * @param request ResumeTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeTriggerResponse
 */
ResumeTriggerResponse Client::resumeTriggerWithOptions(const ResumeTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResumeTrigger"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeTriggerResponse>();
}

/**
 * @summary Resumes a trigger that is in the Suspended or Failed state.
 *
 * @description You can resume only a trigger that is in the Suspended or Failed state. After you resume a trigger, the trigger continues to provide services as expected.
 *
 * @param request ResumeTriggerRequest
 * @return ResumeTriggerResponse
 */
ResumeTriggerResponse Client::resumeTrigger(const ResumeTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeTriggerWithOptions(request, runtime);
}

/**
 * @summary Queries face clusters that contain a specific face in an image. Each face cluster contains information such as bounding boxes and similarity.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have created a face clustering task by calling the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
 *
 * @param tmpReq SearchImageFigureClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchImageFigureClusterResponse
 */
SearchImageFigureClusterResponse Client::searchImageFigureClusterWithOptions(const SearchImageFigureClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchImageFigureClusterShrinkRequest request = SearchImageFigureClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentialConfig()) {
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.getCredentialConfigShrink();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchImageFigureCluster"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchImageFigureClusterResponse>();
}

/**
 * @summary Queries face clusters that contain a specific face in an image. Each face cluster contains information such as bounding boxes and similarity.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have created a face clustering task by calling the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
 *
 * @param request SearchImageFigureClusterRequest
 * @return SearchImageFigureClusterResponse
 */
SearchImageFigureClusterResponse Client::searchImageFigureCluster(const SearchImageFigureClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageFigureClusterWithOptions(request, runtime);
}

/**
 * @summary Queries metadata in a dataset by inputting natural language.
 *
 * @description ### 注意事项
 * - **请确保在使用该接口前，已充分了解智能媒体管理产品的收费方式和[价格](https://help.aliyun.com/document_detail/477042.html)**。该接口每次请求，会产生语义理解费用和查询费用两种计费项各一次。
 * - 调用该接口前，请确保您已通过绑定方式（ [CreateBinding](https://help.aliyun.com/document_detail/478202.html) ）或者主动索引（ [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) 或者 [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) ）方式将文件索引到数据集（Dataset）中。
 * - 返回结果仅为示例，根据[工作流模板配置](https://help.aliyun.com/document_detail/466304.html)不同，获取到的文件元数据信息的类别和包含的内容均有可能与示例不同。如果有疑问，请加入钉钉群进行反馈，钉钉群号请参见[联系我们](https://help.aliyun.com/document_detail/84454.html)。
 * ### 使用限制
 * - 每次查询最多返回 100 个文件信息。
 * - 不支持翻页查询。
 * - 自然语言理解不保证完全准确。
 * - 该功能在美国（硅谷），美国（弗吉尼亚）地域下不支持。
 * ### 使用方式
 * 使用自然语言关键词对数据集内的文件进行搜索查询。目前支持理解的关键信息包括标签（Labels.LabelName）、时间（ProduceTime）和地点（Address.AddressLine）等。例如，以`2023 年杭州的风景`为条件进行查询，会被智能拆分为如下三个条件，并查找出同时满足这些条件的文件：
 * - ProduceTime：2023 年 1 月 1 日零点起到 2023 年 12 月 31 日结束止
 * - Address.AddressLine：包含`杭州`关键词
 * - Labels.LabelName：包含`风景`标签
 * 配合[工作流模板配置](https://help.aliyun.com/document_detail/466304.html)，当模板中包含`ImageEmbeddingExtraction`算子时，该搜索请求会提供基于图片内容的搜索，即您输入的`Query`内容会同时被理解为图片内包含的内容，从而实现对图片的智能检索。
 *
 * @param tmpReq SemanticQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SemanticQueryResponse
 */
SemanticQueryResponse Client::semanticQueryWithOptions(const SemanticQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SemanticQueryShrinkRequest request = SemanticQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMediaTypes()) {
    request.setMediaTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMediaTypes(), "MediaTypes", "json"));
  }

  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWithFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMediaTypesShrink()) {
    query["MediaTypes"] = request.getMediaTypesShrink();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.getSourceURI();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.getWithFieldsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SemanticQuery"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SemanticQueryResponse>();
}

/**
 * @summary Queries metadata in a dataset by inputting natural language.
 *
 * @description ### 注意事项
 * - **请确保在使用该接口前，已充分了解智能媒体管理产品的收费方式和[价格](https://help.aliyun.com/document_detail/477042.html)**。该接口每次请求，会产生语义理解费用和查询费用两种计费项各一次。
 * - 调用该接口前，请确保您已通过绑定方式（ [CreateBinding](https://help.aliyun.com/document_detail/478202.html) ）或者主动索引（ [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) 或者 [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) ）方式将文件索引到数据集（Dataset）中。
 * - 返回结果仅为示例，根据[工作流模板配置](https://help.aliyun.com/document_detail/466304.html)不同，获取到的文件元数据信息的类别和包含的内容均有可能与示例不同。如果有疑问，请加入钉钉群进行反馈，钉钉群号请参见[联系我们](https://help.aliyun.com/document_detail/84454.html)。
 * ### 使用限制
 * - 每次查询最多返回 100 个文件信息。
 * - 不支持翻页查询。
 * - 自然语言理解不保证完全准确。
 * - 该功能在美国（硅谷），美国（弗吉尼亚）地域下不支持。
 * ### 使用方式
 * 使用自然语言关键词对数据集内的文件进行搜索查询。目前支持理解的关键信息包括标签（Labels.LabelName）、时间（ProduceTime）和地点（Address.AddressLine）等。例如，以`2023 年杭州的风景`为条件进行查询，会被智能拆分为如下三个条件，并查找出同时满足这些条件的文件：
 * - ProduceTime：2023 年 1 月 1 日零点起到 2023 年 12 月 31 日结束止
 * - Address.AddressLine：包含`杭州`关键词
 * - Labels.LabelName：包含`风景`标签
 * 配合[工作流模板配置](https://help.aliyun.com/document_detail/466304.html)，当模板中包含`ImageEmbeddingExtraction`算子时，该搜索请求会提供基于图片内容的搜索，即您输入的`Query`内容会同时被理解为图片内包含的内容，从而实现对图片的智能检索。
 *
 * @param request SemanticQueryRequest
 * @return SemanticQueryResponse
 */
SemanticQueryResponse Client::semanticQuery(const SemanticQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return semanticQueryWithOptions(request, runtime);
}

/**
 * @summary Queries files in a dataset by performing a simple query operation. The operation supports logical expressions.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 * **Limits**
 * *   Each query returns information about up to 100 files.
 * *   Each query returns up to 2,000 aggregations.
 * *   A subquery supports up to 100 conditions.
 * *   A subquery can have a maximum nesting depth of 5 levels.
 * **Example query conditions**
 * *   Retrieve JPEG images larger than 1,000 pixels:
 * <!---->
 *     {
 *       "SubQueries":[
 *         {
 *           "Field":"ContentType",
 *           "Value": "image/jpeg",
 *           "Operation":"eq"
 *         },         
 *         {
 *           "Field":"ImageWidth",
 *           "Value":"1000",
 *           "Operation":"gt"
 *         }
 *       ],
 *       "Operation":"and"
 *     }
 * *   Search `oss://examplebucket/path/` for objects that have the `TV` or `Stereo` label and are larger than 10 MB in size:
 * >  This query requires matching files to have the `TV` or `Stereo` label. The two labels are specified as separate objects in the `Labels` fields.
 * ```
 * {
 *   "SubQueries": [
 *     {
 *       "Field": "URI",
 *       "Value": "oss://examplebucket/path/",
 *       "Operation": "prefix"
 *     },
 *     {
 *       "Field": "Size",
 *       "Value": "1048576",
 *       "Operation": "gt"
 *     },
 *     {
 *       "SubQueries": [
 *         {
 *           "Field": "Labels.LabelName",
 *           "Value": "TV",
 *           "Operation": "eq"
 *         },
 *         {
 *           "Field": "Labels.LabelName",
 *           "Value": "Stereo",
 *           "Operation": "eq"
 *         }
 *       ],
 *       "Operation": "or"
 *     }
 *   ],
 *   "Operation": "and"
 * }
 *         
 * ```
 * *   Exclude images that contain a face of a male over the age of 36:
 * >  In this example query, an image will be excluded from the query results if it contains a face of a male over the age of 36. This query is different from excluding an image that contains a male face or a face of a person over the age of 36. In this query, you need to use the `nested` operator to specify that the conditions are met on the same element.
 *     {
 *     	"Operation": "not",
 *     	"SubQueries": [{
 *     		"Operation": "nested",
 *     		"SubQueries": [{
 *     			"Operation": "and",
 *     			"SubQueries": [{
 *     				"Field": "Figures.Age",
 *     				"Operation": "gt",
 *     				"Value": "36"
 *     			}, {
 *     				"Field": "Figures.Gender",
 *     				"Operation": "eq",
 *     				"Value": "male"
 *     			}]
 *     		}]
 *     	}]
 *     }
 * *   Query JPEG images that have both custom labels and system labels:
 * <!---->
 *     {
 *       "SubQueries":[
 *         {
 *           "Field":"ContentType",
 *           "Value": "image/jpeg",
 *           "Operation":"eq"
 *         },         
 *         {
 *           "Field":"CustomLabels.test",
 *           "Operation":"exist"
 *         },         
 *         {
 *           "Field":"Labels.LabelName",
 *           "Operation":"exist"
 *         }
 *       ],
 *       "Operation":"and"
 *     }
 * You can also perform aggregate operations to collect and analyze different data based on the specified conditions. For example, you can calculate the sum, count, average value, or maximum value of all files that meet the query conditions. You can also calculate the size distribution of images that meet the query conditions.
 *
 * @param tmpReq SimpleQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SimpleQueryResponse
 */
SimpleQueryResponse Client::simpleQueryWithOptions(const SimpleQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SimpleQueryShrinkRequest request = SimpleQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAggregations()) {
    request.setAggregationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAggregations(), "Aggregations", "json"));
  }

  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWithFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasAggregationsShrink()) {
    query["Aggregations"] = request.getAggregationsShrink();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasQueryShrink()) {
    query["Query"] = request.getQueryShrink();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.getWithFieldsShrink();
  }

  if (!!request.hasWithoutTotalHits()) {
    query["WithoutTotalHits"] = request.getWithoutTotalHits();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SimpleQuery"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SimpleQueryResponse>();
}

/**
 * @summary Queries files in a dataset by performing a simple query operation. The operation supports logical expressions.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 * **Limits**
 * *   Each query returns information about up to 100 files.
 * *   Each query returns up to 2,000 aggregations.
 * *   A subquery supports up to 100 conditions.
 * *   A subquery can have a maximum nesting depth of 5 levels.
 * **Example query conditions**
 * *   Retrieve JPEG images larger than 1,000 pixels:
 * <!---->
 *     {
 *       "SubQueries":[
 *         {
 *           "Field":"ContentType",
 *           "Value": "image/jpeg",
 *           "Operation":"eq"
 *         },         
 *         {
 *           "Field":"ImageWidth",
 *           "Value":"1000",
 *           "Operation":"gt"
 *         }
 *       ],
 *       "Operation":"and"
 *     }
 * *   Search `oss://examplebucket/path/` for objects that have the `TV` or `Stereo` label and are larger than 10 MB in size:
 * >  This query requires matching files to have the `TV` or `Stereo` label. The two labels are specified as separate objects in the `Labels` fields.
 * ```
 * {
 *   "SubQueries": [
 *     {
 *       "Field": "URI",
 *       "Value": "oss://examplebucket/path/",
 *       "Operation": "prefix"
 *     },
 *     {
 *       "Field": "Size",
 *       "Value": "1048576",
 *       "Operation": "gt"
 *     },
 *     {
 *       "SubQueries": [
 *         {
 *           "Field": "Labels.LabelName",
 *           "Value": "TV",
 *           "Operation": "eq"
 *         },
 *         {
 *           "Field": "Labels.LabelName",
 *           "Value": "Stereo",
 *           "Operation": "eq"
 *         }
 *       ],
 *       "Operation": "or"
 *     }
 *   ],
 *   "Operation": "and"
 * }
 *         
 * ```
 * *   Exclude images that contain a face of a male over the age of 36:
 * >  In this example query, an image will be excluded from the query results if it contains a face of a male over the age of 36. This query is different from excluding an image that contains a male face or a face of a person over the age of 36. In this query, you need to use the `nested` operator to specify that the conditions are met on the same element.
 *     {
 *     	"Operation": "not",
 *     	"SubQueries": [{
 *     		"Operation": "nested",
 *     		"SubQueries": [{
 *     			"Operation": "and",
 *     			"SubQueries": [{
 *     				"Field": "Figures.Age",
 *     				"Operation": "gt",
 *     				"Value": "36"
 *     			}, {
 *     				"Field": "Figures.Gender",
 *     				"Operation": "eq",
 *     				"Value": "male"
 *     			}]
 *     		}]
 *     	}]
 *     }
 * *   Query JPEG images that have both custom labels and system labels:
 * <!---->
 *     {
 *       "SubQueries":[
 *         {
 *           "Field":"ContentType",
 *           "Value": "image/jpeg",
 *           "Operation":"eq"
 *         },         
 *         {
 *           "Field":"CustomLabels.test",
 *           "Operation":"exist"
 *         },         
 *         {
 *           "Field":"Labels.LabelName",
 *           "Operation":"exist"
 *         }
 *       ],
 *       "Operation":"and"
 *     }
 * You can also perform aggregate operations to collect and analyze different data based on the specified conditions. For example, you can calculate the sum, count, average value, or maximum value of all files that meet the query conditions. You can also calculate the size distribution of images that meet the query conditions.
 *
 * @param request SimpleQueryRequest
 * @return SimpleQueryResponse
 */
SimpleQueryResponse Client::simpleQuery(const SimpleQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return simpleQueryWithOptions(request, runtime);
}

/**
 * @summary Suspends a batch processing task.
 *
 * @description You can suspend a batch processing task that is in the Running state. You can call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume a batch processing task that is suspended.
 *
 * @param request SuspendBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendBatchResponse
 */
SuspendBatchResponse Client::suspendBatchWithOptions(const SuspendBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendBatch"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendBatchResponse>();
}

/**
 * @summary Suspends a batch processing task.
 *
 * @description You can suspend a batch processing task that is in the Running state. You can call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume a batch processing task that is suspended.
 *
 * @param request SuspendBatchRequest
 * @return SuspendBatchResponse
 */
SuspendBatchResponse Client::suspendBatch(const SuspendBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendBatchWithOptions(request, runtime);
}

/**
 * @summary Suspends a running trigger.
 *
 * @description The operation can be used to suspend a trigger only in the Running state. If you want to resume a suspended trigger, call the [ResumeTrigger](https://help.aliyun.com/document_detail/479919.html) operation.
 *
 * @param request SuspendTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendTriggerResponse
 */
SuspendTriggerResponse Client::suspendTriggerWithOptions(const SuspendTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendTrigger"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendTriggerResponse>();
}

/**
 * @summary Suspends a running trigger.
 *
 * @description The operation can be used to suspend a trigger only in the Running state. If you want to resume a suspended trigger, call the [ResumeTrigger](https://help.aliyun.com/document_detail/479919.html) operation.
 *
 * @param request SuspendTriggerRequest
 * @return SuspendTriggerResponse
 */
SuspendTriggerResponse Client::suspendTrigger(const SuspendTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendTriggerWithOptions(request, runtime);
}

/**
 * @summary Updates information for a batch processing task, such as the data source configuration, data processing configuration, and tags.
 *
 * @description - You can update a batch processing task only when its status is Ready or Failed. The update does not change the current status of the task.
 * - After the update, an incomplete batch processing task does not automatically resume. To resume the task, call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation.
 *
 * @param tmpReq UpdateBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBatchResponse
 */
UpdateBatchResponse Client::updateBatchWithOptions(const UpdateBatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBatchShrinkRequest request = UpdateBatchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActions()) {
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.getActionsShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.getInputShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateBatch"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBatchResponse>();
}

/**
 * @summary Updates information for a batch processing task, such as the data source configuration, data processing configuration, and tags.
 *
 * @description - You can update a batch processing task only when its status is Ready or Failed. The update does not change the current status of the task.
 * - After the update, an incomplete batch processing task does not automatically resume. To resume the task, call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation.
 *
 * @param request UpdateBatchRequest
 * @return UpdateBatchResponse
 */
UpdateBatchResponse Client::updateBatch(const UpdateBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a dataset.
 *
 * @description - **Before you use this operation, make sure that you fully understand the billing of Intelligent Media Management (IMM) and its [pricing](https://help.aliyun.com/document_detail/477042.html)**.
 * - Before you update dataset information, make sure that the dataset has been created. To create a dataset, refer to the request parameter descriptions.
 * - When you update dataset information, specify only the fields that you want to update. Fields that are not specified remain unchanged.
 * - After a dataset is updated, the changes may take up to 5 minutes to take effect.
 *
 * @param tmpReq UpdateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDatasetShrinkRequest request = UpdateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkflowParameters()) {
    request.setWorkflowParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkflowParameters(), "WorkflowParameters", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.getDatasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.getDatasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.getDatasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.getDatasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.getDatasetMaxTotalFileSize();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasWorkflowParametersShrink()) {
    query["WorkflowParameters"] = request.getWorkflowParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2020-09-30"},
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
 * @summary Updates the information of a dataset.
 *
 * @description - **Before you use this operation, make sure that you fully understand the billing of Intelligent Media Management (IMM) and its [pricing](https://help.aliyun.com/document_detail/477042.html)**.
 * - Before you update dataset information, make sure that the dataset has been created. To create a dataset, refer to the request parameter descriptions.
 * - When you update dataset information, specify only the fields that you want to update. Fields that are not specified remain unchanged.
 * - After a dataset is updated, the changes may take up to 5 minutes to take effect.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetWithOptions(request, runtime);
}

/**
 * @summary Updates information about a face cluster, such as the cluster name and labels.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
 * *   The operation updates only the cover image, cluster name, and tags.
 * *   After the operation is successful, you can call the [GetFigureCluster](https://help.aliyun.com/document_detail/478182.html) or [BatchGetFigureCluster](https://help.aliyun.com/document_detail/2248450.html) operation to query the updated cluster.
 *
 * @param tmpReq UpdateFigureClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFigureClusterResponse
 */
UpdateFigureClusterResponse Client::updateFigureClusterWithOptions(const UpdateFigureClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFigureClusterShrinkRequest request = UpdateFigureClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFigureCluster()) {
    request.setFigureClusterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFigureCluster(), "FigureCluster", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFigureClusterShrink()) {
    query["FigureCluster"] = request.getFigureClusterShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFigureCluster"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFigureClusterResponse>();
}

/**
 * @summary Updates information about a face cluster, such as the cluster name and labels.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
 * *   The operation updates only the cover image, cluster name, and tags.
 * *   After the operation is successful, you can call the [GetFigureCluster](https://help.aliyun.com/document_detail/478182.html) or [BatchGetFigureCluster](https://help.aliyun.com/document_detail/2248450.html) operation to query the updated cluster.
 *
 * @param request UpdateFigureClusterRequest
 * @return UpdateFigureClusterResponse
 */
UpdateFigureClusterResponse Client::updateFigureCluster(const UpdateFigureClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFigureClusterWithOptions(request, runtime);
}

/**
 * @summary Updates the partial metadata of the indexed files in a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   You cannot call this operation to update all metadata. You can update only metadata specified by CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
 *
 * @param tmpReq UpdateFileMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileMetaResponse
 */
UpdateFileMetaResponse Client::updateFileMetaWithOptions(const UpdateFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFileMetaShrinkRequest request = UpdateFileMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFile()) {
    request.setFileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFile(), "File", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasFileShrink()) {
    query["File"] = request.getFileShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFileMeta"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileMetaResponse>();
}

/**
 * @summary Updates the partial metadata of the indexed files in a dataset.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   You cannot call this operation to update all metadata. You can update only metadata specified by CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
 *
 * @param request UpdateFileMetaRequest
 * @return UpdateFileMetaResponse
 */
UpdateFileMetaResponse Client::updateFileMeta(const UpdateFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileMetaWithOptions(request, runtime);
}

/**
 * @summary Updates a spatiotemporal cluster.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have called the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to create spatiotemporal clusters in the project.
 *
 * @param tmpReq UpdateLocationDateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLocationDateClusterResponse
 */
UpdateLocationDateClusterResponse Client::updateLocationDateClusterWithOptions(const UpdateLocationDateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLocationDateClusterShrinkRequest request = UpdateLocationDateClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomLabels(), "CustomLabels", "json"));
  }

  json query = {};
  if (!!request.hasCustomId()) {
    query["CustomId"] = request.getCustomId();
  }

  if (!!request.hasCustomLabelsShrink()) {
    query["CustomLabels"] = request.getCustomLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLocationDateCluster"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLocationDateClusterResponse>();
}

/**
 * @summary Updates a spatiotemporal cluster.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have called the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to create spatiotemporal clusters in the project.
 *
 * @param request UpdateLocationDateClusterRequest
 * @return UpdateLocationDateClusterResponse
 */
UpdateLocationDateClusterResponse Client::updateLocationDateCluster(const UpdateLocationDateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLocationDateClusterWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a created project.
 *
 * @description - Before updating project information, make sure the project has been created. To create a project, refer to the request parameter descriptions.
 * - When updating project information, specify only the fields that you want to update. Fields that are not specified remain unchanged.
 * - Project updates do not take effect immediately. Wait up to 5 minutes for the updates to take effect.
 *
 * @param tmpReq UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProjectShrinkRequest request = UpdateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.getDatasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.getDatasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.getDatasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.getDatasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.getDatasetMaxTotalFileSize();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasProjectMaxDatasetCount()) {
    query["ProjectMaxDatasetCount"] = request.getProjectMaxDatasetCount();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasServiceRole()) {
    query["ServiceRole"] = request.getServiceRole();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2020-09-30"},
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
 * @summary Updates the information of a created project.
 *
 * @description - Before updating project information, make sure the project has been created. To create a project, refer to the request parameter descriptions.
 * - When updating project information, specify only the fields that you want to update. Fields that are not specified remain unchanged.
 * - Project updates do not take effect immediately. Wait up to 5 minutes for the updates to take effect.
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a story, such as the story name and cover image.
 *
 * @param tmpReq UpdateStoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStoryResponse
 */
UpdateStoryResponse Client::updateStoryWithOptions(const UpdateStoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStoryShrinkRequest request = UpdateStoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCover()) {
    request.setCoverShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCover(), "Cover", "json"));
  }

  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomLabels(), "CustomLabels", "json"));
  }

  json body = {};
  if (!!request.hasCoverShrink()) {
    body["Cover"] = request.getCoverShrink();
  }

  if (!!request.hasCustomId()) {
    body["CustomId"] = request.getCustomId();
  }

  if (!!request.hasCustomLabelsShrink()) {
    body["CustomLabels"] = request.getCustomLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasStoryName()) {
    body["StoryName"] = request.getStoryName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateStory"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStoryResponse>();
}

/**
 * @summary Updates the information about a story, such as the story name and cover image.
 *
 * @param request UpdateStoryRequest
 * @return UpdateStoryResponse
 */
UpdateStoryResponse Client::updateStory(const UpdateStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStoryWithOptions(request, runtime);
}

/**
 * @summary Updates information about a trigger, such as the input data source, data processing settings, and tags.
 *
 * @description *   You can update only a trigger that is in the Ready or Failed state. The update operation does not change the trigger status.
 * *   After you update a trigger, the uncompleted tasks under the original trigger are no longer executed. You can call the [ResumeTrigger](https://help.aliyun.com/document_detail/479916.html) operation to resume the execution of the trigger.
 *
 * @param tmpReq UpdateTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTriggerResponse
 */
UpdateTriggerResponse Client::updateTriggerWithOptions(const UpdateTriggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTriggerShrinkRequest request = UpdateTriggerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActions()) {
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.getActionsShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.getInputShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateTrigger"},
    {"version" , "2020-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTriggerResponse>();
}

/**
 * @summary Updates information about a trigger, such as the input data source, data processing settings, and tags.
 *
 * @description *   You can update only a trigger that is in the Ready or Failed state. The update operation does not change the trigger status.
 * *   After you update a trigger, the uncompleted tasks under the original trigger are no longer executed. You can call the [ResumeTrigger](https://help.aliyun.com/document_detail/479916.html) operation to resume the execution of the trigger.
 *
 * @param request UpdateTriggerRequest
 * @return UpdateTriggerResponse
 */
UpdateTriggerResponse Client::updateTrigger(const UpdateTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTriggerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Imm20200930