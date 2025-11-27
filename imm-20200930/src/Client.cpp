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
    {"cn-beijing-gov-1" , "imm-vpc.cn-beijing-gov-1.aliyuncs.com"}
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasImageFormat()) {
    query["ImageFormat"] = request.imageFormat();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasQuality()) {
    query["Quality"] = request.quality();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.targetsShrink();
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
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  json body = {};
  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFilesShrink()) {
    body["Files"] = request.filesShrink();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
    query["Description"] = request.description();
  }

  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.OSSBucket();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    request.setURIsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.URIs(), "URIs", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURIsShrink()) {
    query["URIs"] = request.URIsShrink();
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
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.objectIds(), "ObjectIds", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasObjectIdsShrink()) {
    query["ObjectIds"] = request.objectIdsShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, feel free to join the DingTalk chat group (ID: 31690030817) and share your questions with us.
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
    request.setURIsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.URIs(), "URIs", "json"));
  }

  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.withFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURIsShrink()) {
    query["URIs"] = request.URIsShrink();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.withFieldsShrink();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, feel free to join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 *
 * @param request BatchGetFileMetaRequest
 * @return BatchGetFileMetaResponse
 */
BatchGetFileMetaResponse Client::batchGetFileMeta(const BatchGetFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetFileMetaWithOptions(request, runtime);
}

/**
 * @summary Indexes metadata of multiple objects into the specified dataset. The process involves data processing operations such as label detection, face detection, and location detection. Metadata indexing helps meet diverse data retrieval requirements.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Data processing operations supported for metadata processing vary with workflow templates. For more information, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
 * *   Metadata indexing poses limits on the total number and size of objects. For more information about these limits, see [Limits](https://help.aliyun.com/document_detail/475569.html). For more information about how to create
 * *   Metadata indexing is available in specific regions. For information about regions that support metadata indexing, see the "Data management and indexing" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
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
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.filesShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Indexes metadata of multiple objects into the specified dataset. The process involves data processing operations such as label detection, face detection, and location detection. Metadata indexing helps meet diverse data retrieval requirements.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Data processing operations supported for metadata processing vary with workflow templates. For more information, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
 * *   Metadata indexing poses limits on the total number and size of objects. For more information about these limits, see [Limits](https://help.aliyun.com/document_detail/475569.html). For more information about how to create
 * *   Metadata indexing is available in specific regions. For information about regions that support metadata indexing, see the "Data management and indexing" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
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
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.filesShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasSource()) {
    request.setSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.source(), "Source", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceShrink()) {
    query["Source"] = request.sourceShrink();
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
FutrueGenerator<ContextualAnswerResponse> Client::contextualAnswerWithSSE(const ContextualAnswerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ContextualAnswerShrinkRequest request = ContextualAnswerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.messages(), "Messages", "json"));
  }

  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  json body = {};
  if (!!request.hasFilesShrink()) {
    body["Files"] = request.filesShrink();
  }

  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.messagesShrink();
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
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<ContextualAnswerResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
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
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.messages(), "Messages", "json"));
  }

  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  json body = {};
  if (!!request.hasFilesShrink()) {
    body["Files"] = request.filesShrink();
  }

  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.messagesShrink();
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
 * @description ### [](#)Usage notes
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk) of Intelligent Media Management (IMM).
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) or [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ) operation.
 * *   The response provided in this example is for reference only. The categories and content of metadata vary based on configurations of [workflow templates](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp). For any inquiries, join the DingTalk chat group (ID: 21714099) for feedback.
 * ### [](#)Limitations
 * *   The conversation history can hold up to 100 messages, including user-sent messages and assistant-generated messages.
 * *   Each message cannot exceed 1,000 characters in length.
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
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.messages(), "Messages", "json"));
  }

  if (!!tmpReq.hasSmartClusterIds()) {
    request.setSmartClusterIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.smartClusterIds(), "SmartClusterIds", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRecallOnly()) {
    query["RecallOnly"] = request.recallOnly();
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.messagesShrink();
  }

  if (!!request.hasSmartClusterIdsShrink()) {
    body["SmartClusterIds"] = request.smartClusterIdsShrink();
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
 * @description ### [](#)Usage notes
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/zh/imm/product-overview/billable-items?spm=openapi-amp.newDocPublishment.0.0.1ecd281fi27Zgk) of Intelligent Media Management (IMM).
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-createbinding?spm=a2c4g.11186623.0.0.a3d76f44xJrOnF) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-indexfilemeta?spm=a2c4g.11186623.help-menu-search-62354.d_0) or [BatchIndexFileMeta](https://help.aliyun.com/zh/imm/developer-reference/api-imm-2020-09-30-batchindexfilemeta?spm=a2c4g.11186623.help-menu-62354.d_5_2_4_2_1_1.f1d86f44iBs3QZ) operation.
 * *   The response provided in this example is for reference only. The categories and content of metadata vary based on configurations of [workflow templates](https://help.aliyun.com/zh/imm/user-guide/workflow-templates-and-operators?spm=a2c4g.11186623.0.0.a3d775abr3hDFp). For any inquiries, join the DingTalk chat group (ID: 21714099) for feedback.
 * ### [](#)Limitations
 * *   The conversation history can hold up to 100 messages, including user-sent messages and assistant-generated messages.
 * *   Each message cannot exceed 1,000 characters in length.
 *
 * @param request ContextualRetrievalRequest
 * @return ContextualRetrievalResponse
 */
ContextualRetrievalResponse Client::contextualRetrieval(const ContextualRetrievalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return contextualRetrievalWithOptions(request, runtime);
}

/**
 * @summary Creates an archive file inspection task to preview the files in a package without decompressing the package.
 *
 * @description >  The operation is in public preview. For any inquires, join our DingTalk chat group (ID: 31690030817) and share your questions with us.
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The operation supports a package that contains up to 80,000 files.
 * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates an archive file inspection task to preview the files in a package without decompressing the package.
 *
 * @description >  The operation is in public preview. For any inquires, join our DingTalk chat group (ID: 31690030817) and share your questions with us.
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The operation supports a package that contains up to 80,000 files.
 * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateArchiveFileInspectionTaskRequest
 * @return CreateArchiveFileInspectionTaskResponse
 */
CreateArchiveFileInspectionTaskResponse Client::createArchiveFileInspectionTask(const CreateArchiveFileInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArchiveFileInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a batch processing task to perform a data processing operation, such as transcoding or format conversion, on multiple existing files at a time.
 *
 * @description If you want to create a batch processing task to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
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
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.actions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.actionsShrink();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.inputShrink();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasServiceRole()) {
    body["ServiceRole"] = request.serviceRole();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
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
 * @summary Creates a batch processing task to perform a data processing operation, such as transcoding or format conversion, on multiple existing files at a time.
 *
 * @description If you want to create a batch processing task to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
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
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2743997.html) of Intelligent Media Management (IMM).****
 * >  Asynchronous processing does not guarantee timely task completion.
 * Before you create a binding, make sure that the project and the dataset that you want to use exist.
 * *   For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
 * >  The CreateBinding operation works by using the [workflow template](https://help.aliyun.com/document_detail/466304.html) that is specified when you created the project or dataset.
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
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.URI();
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
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2743997.html) of Intelligent Media Management (IMM).****
 * >  Asynchronous processing does not guarantee timely task completion.
 * Before you create a binding, make sure that the project and the dataset that you want to use exist.
 * *   For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
 * >  The CreateBinding operation works by using the [workflow template](https://help.aliyun.com/document_detail/466304.html) that is specified when you created the project or dataset.
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
 * @summary Compresses point cloud data (PCD) in Object Storage Service (OSS) to reduce the amount of data transferred over networks.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   This operation supports only Point Cloud Data (PCD) files.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasKdtreeOption()) {
    request.setKdtreeOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kdtreeOption(), "KdtreeOption", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasOctreeOption()) {
    request.setOctreeOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.octreeOption(), "OctreeOption", "json"));
  }

  if (!!tmpReq.hasPointCloudFields()) {
    request.setPointCloudFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.pointCloudFields(), "PointCloudFields", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCompressMethod()) {
    query["CompressMethod"] = request.compressMethod();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasKdtreeOptionShrink()) {
    query["KdtreeOption"] = request.kdtreeOptionShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasOctreeOptionShrink()) {
    query["OctreeOption"] = request.octreeOptionShrink();
  }

  if (!!request.hasPointCloudFieldsShrink()) {
    query["PointCloudFields"] = request.pointCloudFieldsShrink();
  }

  if (!!request.hasPointCloudFileFormat()) {
    query["PointCloudFileFormat"] = request.pointCloudFileFormat();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Compresses point cloud data (PCD) in Object Storage Service (OSS) to reduce the amount of data transferred over networks.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   This operation supports only Point Cloud Data (PCD) files.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
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
    request.setCoverShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cover(), "Cover", "json"));
  }

  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customLabels(), "CustomLabels", "json"));
  }

  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  json body = {};
  if (!!request.hasCoverShrink()) {
    body["Cover"] = request.coverShrink();
  }

  if (!!request.hasCustomLabelsShrink()) {
    body["CustomLabels"] = request.customLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFilesShrink()) {
    body["Files"] = request.filesShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasStoryName()) {
    body["StoryName"] = request.storyName();
  }

  if (!!request.hasStorySubType()) {
    body["StorySubType"] = request.storySubType();
  }

  if (!!request.hasStoryType()) {
    body["StoryType"] = request.storyType();
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
 * @summary Create Dataset
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - The dataset name must be unique within the same project.
 * - There is a limit to the number of datasets that can be created, which can be queried through [GetProject](https://help.aliyun.com/document_detail/478155.html).
 * - After creating a dataset, you can use [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) to build file metadata indexes, enabling diversified [data retrieval and statistics](https://help.aliyun.com/document_detail/478175.html) and intelligent management.
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
    request.setWorkflowParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.workflowParameters(), "WorkflowParameters", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.datasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.datasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.datasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.datasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.datasetMaxTotalFileSize();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasWorkflowParametersShrink()) {
    query["WorkflowParameters"] = request.workflowParametersShrink();
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
 * @summary Create Dataset
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - The dataset name must be unique within the same project.
 * - There is a limit to the number of datasets that can be created, which can be queried through [GetProject](https://help.aliyun.com/document_detail/478155.html).
 * - After creating a dataset, you can use [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) to build file metadata indexes, enabling diversified [data retrieval and statistics](https://help.aliyun.com/document_detail/478175.html) and intelligent management.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary Decodes the blind watermark in an image.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
 *     **
 *     **Note that** Asynchronous processing does not guarantee timely task completion.
 * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   The region and project specified in the request to decode a blind watermark must match those in the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) request to encode the blind watermark.
 * *   A blind watermark can still be extracted even if attacks, such as compression, scaling, cropping, and color transformation, are performed on the image.
 * *   This operation is compatible with its earlier version DecodeBlindWatermark.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasImageQuality()) {
    query["ImageQuality"] = request.imageQuality();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasOriginalImageURI()) {
    query["OriginalImageURI"] = request.originalImageURI();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasStrengthLevel()) {
    query["StrengthLevel"] = request.strengthLevel();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasWatermarkType()) {
    query["WatermarkType"] = request.watermarkType();
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
 * @summary Decodes the blind watermark in an image.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
 *     **
 *     **Note that** Asynchronous processing does not guarantee timely task completion.
 * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   The region and project specified in the request to decode a blind watermark must match those in the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) request to encode the blind watermark.
 * *   A blind watermark can still be extracted even if attacks, such as compression, scaling, cropping, and color transformation, are performed on the image.
 * *   This operation is compatible with its earlier version DecodeBlindWatermark.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateDecodeBlindWatermarkTaskRequest
 * @return CreateDecodeBlindWatermarkTaskResponse
 */
CreateDecodeBlindWatermarkTaskResponse Client::createDecodeBlindWatermarkTask(const CreateDecodeBlindWatermarkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDecodeBlindWatermarkTaskWithOptions(request, runtime);
}

/**
 * @summary Searches the dataset for the specified number of images most similar to the specified image or face and returns face IDs and boundaries in descending order of similarity.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The operation searches for faces that are similar to the face within the largest bounding box in each input image.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasMaxResult()) {
    query["MaxResult"] = request.maxResult();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Searches the dataset for the specified number of images most similar to the specified image or face and returns face IDs and boundaries in descending order of similarity.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The operation searches for faces that are similar to the face within the largest bounding box in each input image.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateFacesSearchingTaskRequest
 * @return CreateFacesSearchingTaskResponse
 */
CreateFacesSearchingTaskResponse Client::createFacesSearchingTask(const CreateFacesSearchingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFacesSearchingTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a face clustering task to cluster faces of different persons in images by person based on the intelligent algorithms.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   Before you call this operation, make sure that you have indexed file metadata into the [dataset](~~CreateDataset~~) automatically by calling the [CreateBinding](~~CreateBinding~~) operation or manually by calling the [IndexFileMeta](~~IndexFileMeta~~) or [BatchIndexFileMeta](~~BatchIndexFileMeta~~) operation.
 * *   Each call to the operation incrementally processes metadata in the [dataset](~~CreateDataset~~). You can regularly call this operation to process incremental files.
 * *   After the clustering task is complete, you can call the [GetFigureCluster](~~GetFigureCluster~~) or [BatchGetFigureCluster](~~BatchGetFigureCluster~~) operation to query information about a specific cluster. You can also call the [QueryFigureClusters](~~QueryFigureClusters~~) operation to query all face clusters of the specified dataset.
 * *   Removing image information from the dataset causes changes to face clusters. When images that contain all faces in a cluster are removed, the cluster is deleted.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](~~GetTask~~) or [ListTasks](~~ListTasks~~) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates a face clustering task to cluster faces of different persons in images by person based on the intelligent algorithms.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   Before you call this operation, make sure that you have indexed file metadata into the [dataset](~~CreateDataset~~) automatically by calling the [CreateBinding](~~CreateBinding~~) operation or manually by calling the [IndexFileMeta](~~IndexFileMeta~~) or [BatchIndexFileMeta](~~BatchIndexFileMeta~~) operation.
 * *   Each call to the operation incrementally processes metadata in the [dataset](~~CreateDataset~~). You can regularly call this operation to process incremental files.
 * *   After the clustering task is complete, you can call the [GetFigureCluster](~~GetFigureCluster~~) or [BatchGetFigureCluster](~~BatchGetFigureCluster~~) operation to query information about a specific cluster. You can also call the [QueryFigureClusters](~~QueryFigureClusters~~) operation to query all face clusters of the specified dataset.
 * *   Removing image information from the dataset causes changes to face clusters. When images that contain all faces in a cluster are removed, the cluster is deleted.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](~~GetTask~~) or [ListTasks](~~ListTasks~~) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateFigureClusteringTaskRequest
 * @return CreateFigureClusteringTaskResponse
 */
CreateFigureClusteringTaskResponse Client::createFigureClusteringTask(const CreateFigureClusteringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFigureClusteringTaskWithOptions(request, runtime);
}

/**
 * @summary Merges two or more face clustering groups into one face clustering group.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
 * *   If you merge unrelated groups, the feature values of the target groups are affected. As a result, the incremental data may be inaccurately grouped when you create a face clustering task.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setFromsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.froms(), "Froms", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasFromsShrink()) {
    query["Froms"] = request.fromsShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTo()) {
    query["To"] = request.to();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Merges two or more face clustering groups into one face clustering group.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
 * *   If you merge unrelated groups, the feature values of the target groups are affected. As a result, the incremental data may be inaccurately grouped when you create a face clustering task.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateFigureClustersMergingTaskRequest
 * @return CreateFigureClustersMergingTaskResponse
 */
CreateFigureClustersMergingTaskResponse Client::createFigureClustersMergingTask(const CreateFigureClustersMergingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFigureClustersMergingTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a file packing task.
 *
 * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
 * >  The operation supports file packing only. Compression support will be added later.
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   A call to the operation can pack up to 80,000 objects into a package.
 * *   The total size of all objects to be packed into a package cannot exceed 200 GB.
 * *   The operation can pack only Standard objects in Object Storage Service (OSS). To pack an object in another storage class, you must first [convert the storage class of the object](https://help.aliyun.com/document_detail/90090.html).
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  json query = {};
  if (!!request.hasCompressedFormat()) {
    query["CompressedFormat"] = request.compressedFormat();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceManifestURI()) {
    query["SourceManifestURI"] = request.sourceManifestURI();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates a file packing task.
 *
 * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
 * >  The operation supports file packing only. Compression support will be added later.
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   A call to the operation can pack up to 80,000 objects into a package.
 * *   The total size of all objects to be packed into a package cannot exceed 200 GB.
 * *   The operation can pack only Standard objects in Object Storage Service (OSS). To pack an object in another storage class, you must first [convert the storage class of the object](https://help.aliyun.com/document_detail/90090.html).
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateFileCompressionTaskRequest
 * @return CreateFileCompressionTaskResponse
 */
CreateFileCompressionTaskResponse Client::createFileCompressionTask(const CreateFileCompressionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileCompressionTaskWithOptions(request, runtime);
}

/**
 * @summary Extracts the specified files from a ZIP, RAR, or 7z package to the specified directory or decompresses the entire package.
 *
 * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The operation supports a package that contains up to 80,000 files.
 * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
 * *   The operation extracts files in streams to the specified directory. If the file extraction task is interrupted by a corrupt file, files that have been extracted are not deleted.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSelectedFiles()) {
    request.setSelectedFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.selectedFiles(), "SelectedFiles", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSelectedFilesShrink()) {
    query["SelectedFiles"] = request.selectedFilesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Extracts the specified files from a ZIP, RAR, or 7z package to the specified directory or decompresses the entire package.
 *
 * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The operation supports a package that contains up to 80,000 files.
 * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
 * *   The operation extracts files in streams to the specified directory. If the file extraction task is interrupted by a corrupt file, files that have been extracted are not deleted.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateFileUncompressionTaskRequest
 * @return CreateFileUncompressionTaskResponse
 */
CreateFileUncompressionTaskResponse Client::createFileUncompressionTask(const CreateFileUncompressionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileUncompressionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an image moderation task to ensure image content compliance. You can call this operation to identify inappropriate content, such as pornography, violence, terrorism, politically sensitive content, undesirable scenes, unauthorized logos, and non-compliant ads.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The image for which you want to create a content moderation task must meet the following requirements:
 *     *   The image URL uses the HTTP or HTTPS protocol.
 *     *   The image is in one of the following formats: PNG, JPG, JPEG, BMP, GIF, and WebP
 *     *   The image size is limited to 20 MB for synchronous and asynchronous calls, with a maximum height or width of 30,000 pixels. The total number of pixels in the image cannot exceed 250 million. GIF images are limited to 4,194,304 pixels, with a maximum height or width of 30,000 pixels.
 *     *   The image download time is limited to 3 seconds. If the download takes longer, a timeout error occurs.
 *     *   To ensure effective moderation, we recommend that you submit an image with dimensions of at least 256 × 256 pixels.
 *     *   The response time of the CreateImageModerationTask operation varies based on the duration of the image download. Make sure that the image is stored in a stable and reliable service. We recommend that you store images on Alibaba Cloud Object Storage Service (OSS) or cache them on Alibaba Cloud CDN.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can also obtain information about the task based on notifications.
 * >  The detection result is sent as an asynchronous notification. The Suggestion field of the notification can have one of the following values:
 * *   pass: No non-compliant content is found.
 * *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance categories. For more information, see Content moderation results.
 * *   review: A manual review is needed. After the manual review is completed, an asynchronous notification is sent to inform you of the result. >
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasScenes()) {
    request.setScenesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scenes(), "Scenes", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMaxFrames()) {
    query["MaxFrames"] = request.maxFrames();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasScenesShrink()) {
    query["Scenes"] = request.scenesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates an image moderation task to ensure image content compliance. You can call this operation to identify inappropriate content, such as pornography, violence, terrorism, politically sensitive content, undesirable scenes, unauthorized logos, and non-compliant ads.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The image for which you want to create a content moderation task must meet the following requirements:
 *     *   The image URL uses the HTTP or HTTPS protocol.
 *     *   The image is in one of the following formats: PNG, JPG, JPEG, BMP, GIF, and WebP
 *     *   The image size is limited to 20 MB for synchronous and asynchronous calls, with a maximum height or width of 30,000 pixels. The total number of pixels in the image cannot exceed 250 million. GIF images are limited to 4,194,304 pixels, with a maximum height or width of 30,000 pixels.
 *     *   The image download time is limited to 3 seconds. If the download takes longer, a timeout error occurs.
 *     *   To ensure effective moderation, we recommend that you submit an image with dimensions of at least 256 × 256 pixels.
 *     *   The response time of the CreateImageModerationTask operation varies based on the duration of the image download. Make sure that the image is stored in a stable and reliable service. We recommend that you store images on Alibaba Cloud Object Storage Service (OSS) or cache them on Alibaba Cloud CDN.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can also obtain information about the task based on notifications.
 * >  The detection result is sent as an asynchronous notification. The Suggestion field of the notification can have one of the following values:
 * *   pass: No non-compliant content is found.
 * *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance categories. For more information, see Content moderation results.
 * *   review: A manual review is needed. After the manual review is completed, an asynchronous notification is sent to inform you of the result. >
 *
 * @param request CreateImageModerationTaskRequest
 * @return CreateImageModerationTaskResponse
 */
CreateImageModerationTaskResponse Client::createImageModerationTask(const CreateImageModerationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageModerationTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an image splicing task. You can call this operation to splice multiple images into one based on a given rule and save the final image into an Object Storage Service (OSS) bucket.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * *   You can call this operation to merge up to 10 images. Each side of an image cannot exceed 32,876 pixels, and the total number of pixels of the image cannot exceed 1 billion.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAlign()) {
    query["Align"] = request.align();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.backgroundColor();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasImageFormat()) {
    query["ImageFormat"] = request.imageFormat();
  }

  if (!!request.hasMargin()) {
    query["Margin"] = request.margin();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasPadding()) {
    query["Padding"] = request.padding();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasQuality()) {
    query["Quality"] = request.quality();
  }

  if (!!request.hasScaleType()) {
    query["ScaleType"] = request.scaleType();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates an image splicing task. You can call this operation to splice multiple images into one based on a given rule and save the final image into an Object Storage Service (OSS) bucket.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * *   You can call this operation to merge up to 10 images. Each side of an image cannot exceed 32,876 pixels, and the total number of pixels of the image cannot exceed 1 billion.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateImageSplicingTaskRequest
 * @return CreateImageSplicingTaskResponse
 */
CreateImageSplicingTaskResponse Client::createImageSplicingTask(const CreateImageSplicingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageSplicingTaskWithOptions(request, runtime);
}

/**
 * @summary Converts multiple images into one single PDF file and stores the PDF file to the specified path in Object Storage Service (OSS).
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * *   You can specify up to 100 images in a call to the operation.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Converts multiple images into one single PDF file and stores the PDF file to the specified path in Object Storage Service (OSS).
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
 * *   You can specify up to 100 images in a call to the operation.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateImageToPDFTaskRequest
 * @return CreateImageToPDFTaskResponse
 */
CreateImageToPDFTaskResponse Client::createImageToPDFTask(const CreateImageToPDFTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageToPDFTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a spatiotemporal clustering task to cluster photos and videos based on geolocation and time information. Spatiotemporal clustering allows you to group photos and videos taken during a travel or at different places by their spatial and temporal similarity. Based on spatiotemporal clustering, you can develop media capabilities such as media file categorization, photo collections, and image and video-based stories.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
 * *   After a spatiotemporal clustering task is complete, you can call the [QueryLocationDateClusters](https://help.aliyun.com/document_detail/478189.html) operation to query the spatiotemporal clustering result.
 * *   Removing metadata from a dataset does not affect existing spatiotemporal clusters for the dataset. To delete a spatiotemporal cluster, call the [DeleteLocationDateCluster](https://help.aliyun.com/document_detail/478191.html) operation.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setDateOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dateOptions(), "DateOptions", "json"));
  }

  if (!!tmpReq.hasLocationOptions()) {
    request.setLocationOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.locationOptions(), "LocationOptions", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasDateOptionsShrink()) {
    query["DateOptions"] = request.dateOptionsShrink();
  }

  if (!!request.hasLocationOptionsShrink()) {
    query["LocationOptions"] = request.locationOptionsShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates a spatiotemporal clustering task to cluster photos and videos based on geolocation and time information. Spatiotemporal clustering allows you to group photos and videos taken during a travel or at different places by their spatial and temporal similarity. Based on spatiotemporal clustering, you can develop media capabilities such as media file categorization, photo collections, and image and video-based stories.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
 * *   After a spatiotemporal clustering task is complete, you can call the [QueryLocationDateClusters](https://help.aliyun.com/document_detail/478189.html) operation to query the spatiotemporal clustering result.
 * *   Removing metadata from a dataset does not affect existing spatiotemporal clusters for the dataset. To delete a spatiotemporal cluster, call the [DeleteLocationDateCluster](https://help.aliyun.com/document_detail/478191.html) operation.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateLocationDateClusteringTaskRequest
 * @return CreateLocationDateClusteringTaskResponse
 */
CreateLocationDateClusteringTaskResponse Client::createLocationDateClusteringTask(const CreateLocationDateClusteringTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLocationDateClusteringTaskWithOptions(request, runtime);
}

/**
 * @summary Create Transcoding Service
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/88317.html) of the Intelligent Media Management product before using this interface.**
 * - Before calling this interface, make sure that there is an available project (Project) in the current Region. For more details, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 * >Notice: Asynchronous tasks do not guarantee timeliness.
 * - When using this interface for media transcoding, by default, only one video/audio/subtitle stream is processed, but you can also configure the number of video/audio/subtitle streams to be processed.
 * - When using this interface for media concatenation, a maximum of 11 media files are supported. In this case, the configured transcoding, frame extraction, and other parameters will apply to the concatenated media data.
 * - This is an asynchronous interface. After the task starts, the task information is retained for 7 days. If it exceeds 7 days, the information cannot be retrieved. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) interface to get the returned `TaskId` and view the task information. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) message notification parameter to obtain task information through message notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasAlignmentIndex()) {
    query["AlignmentIndex"] = request.alignmentIndex();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.targetsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Create Transcoding Service
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/88317.html) of the Intelligent Media Management product before using this interface.**
 * - Before calling this interface, make sure that there is an available project (Project) in the current Region. For more details, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 * >Notice: Asynchronous tasks do not guarantee timeliness.
 * - When using this interface for media transcoding, by default, only one video/audio/subtitle stream is processed, but you can also configure the number of video/audio/subtitle streams to be processed.
 * - When using this interface for media concatenation, a maximum of 11 media files are supported. In this case, the configured transcoding, frame extraction, and other parameters will apply to the concatenated media data.
 * - This is an asynchronous interface. After the task starts, the task information is retained for 7 days. If it exceeds 7 days, the information cannot be retrieved. Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) interface to get the returned `TaskId` and view the task information. You can also set the [Notification](https://help.aliyun.com/document_detail/2743997.html) message notification parameter to obtain task information through message notifications.
 *
 * @param request CreateMediaConvertTaskRequest
 * @return CreateMediaConvertTaskResponse
 */
CreateMediaConvertTaskResponse Client::createMediaConvertTask(const CreateMediaConvertTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMediaConvertTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a document format conversion task to convert the format of a document stored in an Object Storage Service (OSS) bucket.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   Supported input formats:
 *     *   Text documents: doc, docx, wps, wpss, docm, dotm, dot, dotx, and html
 *     *   Presentation documents: pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss
 *     *   Spreadsheet documents: xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets
 *     *   PDF documents: pdf
 * *   Supported output formats:
 *     *   Image files: png and jpg
 *     *   Text files: txt
 *     *   PDF files: pdf
 * *   Each input document can be up to 200 MB in size. The upper limit cannot be adjusted.
 * *   If the document size is large or the content is complex, the conversion task may time out.
 * *   The limit on the number of requests per second for a single user is 50.
 * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can use one of the following methods to query the task information in a timely manner:
 *     *   Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.``
 *     *   In the region in which the IMM project is located, configure a Simple Message Queue (SMQ) subscription to receive task information notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For information about SMQ SDKs, see [Use queues](https://help.aliyun.com/document_detail/32449.html).
 *     *   In the region in which the IMM project is located, create an ApsaraMQ for RocketMQ 4.0 instance, a topic, and a group to receive task notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For more information about how to use ApsaraMQ for RocketMQ, see [Call HTTP SDKs to send and subscribe to messages](https://help.aliyun.com/document_detail/169009.html).
 *     *   In the region in which the IMM project is located, use [EventBridge](https://www.aliyun.com/product/aliware/eventbridge) to receive task information notifications. For more information, see [IMM events](https://help.aliyun.com/document_detail/205730.html).
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTrimPolicy()) {
    request.setTrimPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trimPolicy(), "TrimPolicy", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasEndPage()) {
    query["EndPage"] = request.endPage();
  }

  if (!!request.hasFirstPage()) {
    query["FirstPage"] = request.firstPage();
  }

  if (!!request.hasFitToHeight()) {
    query["FitToHeight"] = request.fitToHeight();
  }

  if (!!request.hasFitToWidth()) {
    query["FitToWidth"] = request.fitToWidth();
  }

  if (!!request.hasHoldLineFeed()) {
    query["HoldLineFeed"] = request.holdLineFeed();
  }

  if (!!request.hasImageDPI()) {
    query["ImageDPI"] = request.imageDPI();
  }

  if (!!request.hasLongPicture()) {
    query["LongPicture"] = request.longPicture();
  }

  if (!!request.hasLongText()) {
    query["LongText"] = request.longText();
  }

  if (!!request.hasMaxSheetColumn()) {
    query["MaxSheetColumn"] = request.maxSheetColumn();
  }

  if (!!request.hasMaxSheetRow()) {
    query["MaxSheetRow"] = request.maxSheetRow();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasPages()) {
    query["Pages"] = request.pages();
  }

  if (!!request.hasPaperHorizontal()) {
    query["PaperHorizontal"] = request.paperHorizontal();
  }

  if (!!request.hasPaperSize()) {
    query["PaperSize"] = request.paperSize();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasQuality()) {
    query["Quality"] = request.quality();
  }

  if (!!request.hasScalePercentage()) {
    query["ScalePercentage"] = request.scalePercentage();
  }

  if (!!request.hasSheetCount()) {
    query["SheetCount"] = request.sheetCount();
  }

  if (!!request.hasSheetIndex()) {
    query["SheetIndex"] = request.sheetIndex();
  }

  if (!!request.hasShowComments()) {
    query["ShowComments"] = request.showComments();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasStartPage()) {
    query["StartPage"] = request.startPage();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
  }

  if (!!request.hasTargetURIPrefix()) {
    query["TargetURIPrefix"] = request.targetURIPrefix();
  }

  if (!!request.hasTrimPolicyShrink()) {
    query["TrimPolicy"] = request.trimPolicyShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasSourcesShrink()) {
    body["Sources"] = request.sourcesShrink();
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
 * @summary Creates a document format conversion task to convert the format of a document stored in an Object Storage Service (OSS) bucket.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   Supported input formats:
 *     *   Text documents: doc, docx, wps, wpss, docm, dotm, dot, dotx, and html
 *     *   Presentation documents: pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss
 *     *   Spreadsheet documents: xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets
 *     *   PDF documents: pdf
 * *   Supported output formats:
 *     *   Image files: png and jpg
 *     *   Text files: txt
 *     *   PDF files: pdf
 * *   Each input document can be up to 200 MB in size. The upper limit cannot be adjusted.
 * *   If the document size is large or the content is complex, the conversion task may time out.
 * *   The limit on the number of requests per second for a single user is 50.
 * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can use one of the following methods to query the task information in a timely manner:
 *     *   Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.``
 *     *   In the region in which the IMM project is located, configure a Simple Message Queue (SMQ) subscription to receive task information notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For information about SMQ SDKs, see [Use queues](https://help.aliyun.com/document_detail/32449.html).
 *     *   In the region in which the IMM project is located, create an ApsaraMQ for RocketMQ 4.0 instance, a topic, and a group to receive task notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For more information about how to use ApsaraMQ for RocketMQ, see [Call HTTP SDKs to send and subscribe to messages](https://help.aliyun.com/document_detail/169009.html).
 *     *   In the region in which the IMM project is located, use [EventBridge](https://www.aliyun.com/product/aliware/eventbridge) to receive task information notifications. For more information, see [IMM events](https://help.aliyun.com/document_detail/205730.html).
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
 * @description *   The name of a project must be unique in a region.
 * *   By default, you can create up to 100 projects in a region. If you want to request a quota increase to create more projects, submit a ticket or join the DingTalk chat group (ID: 88490020073).
 * *   After you create a project, you can create other Intelligent Media Management (IMM) resources in the project. For more information, see the following links:
 *     *   [CreateDataset](https://help.aliyun.com/document_detail/478160.html)
 *     *   [CreateTrigger](https://help.aliyun.com/document_detail/479912.html)
 *     *   [CreateBatch](https://help.aliyun.com/document_detail/606694.html)
 *     *   [CreateBinding](https://help.aliyun.com/document_detail/478202.html)
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.datasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.datasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.datasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.datasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.datasetMaxTotalFileSize();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectMaxDatasetCount()) {
    query["ProjectMaxDatasetCount"] = request.projectMaxDatasetCount();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasServiceRole()) {
    query["ServiceRole"] = request.serviceRole();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
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
 * @description *   The name of a project must be unique in a region.
 * *   By default, you can create up to 100 projects in a region. If you want to request a quota increase to create more projects, submit a ticket or join the DingTalk chat group (ID: 88490020073).
 * *   After you create a project, you can create other Intelligent Media Management (IMM) resources in the project. For more information, see the following links:
 *     *   [CreateDataset](https://help.aliyun.com/document_detail/478160.html)
 *     *   [CreateTrigger](https://help.aliyun.com/document_detail/479912.html)
 *     *   [CreateBatch](https://help.aliyun.com/document_detail/606694.html)
 *     *   [CreateBinding](https://help.aliyun.com/document_detail/478202.html)
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary Clusters images indexed into a dataset by similarity. Image clustering is suitable for image deduplication and selection. For example, you can use image clustering to filter photos in your album that are taken in continuous shooting mode.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note that** Asynchronous processing does not guarantee timely task completion.
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
 * *   After clustering is completed, you can call the [QuerySimilarImageClusters](https://help.aliyun.com/document_detail/611304.html) operation to query image clustering results.
 * *   An image cluster contains at lest two images. Removing similar images from the dataset affects existing image clusters. If image deletion reduces the number of images in a cluster to less than 2, the cluster is automatically deleted.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Clusters images indexed into a dataset by similarity. Image clustering is suitable for image deduplication and selection. For example, you can use image clustering to filter photos in your album that are taken in continuous shooting mode.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note that** Asynchronous processing does not guarantee timely task completion.
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
 * *   After clustering is completed, you can call the [QuerySimilarImageClusters](https://help.aliyun.com/document_detail/611304.html) operation to query image clustering results.
 * *   An image cluster contains at lest two images. Removing similar images from the dataset affects existing image clusters. If image deletion reduces the number of images in a cluster to less than 2, the cluster is automatically deleted.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.address(), "Address", "json"));
  }

  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customLabels(), "CustomLabels", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasAddressShrink()) {
    body["Address"] = request.addressShrink();
  }

  if (!!request.hasCustomId()) {
    body["CustomId"] = request.customId();
  }

  if (!!request.hasCustomLabelsShrink()) {
    body["CustomLabels"] = request.customLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.datasetName();
  }

  if (!!request.hasMaxFileCount()) {
    body["MaxFileCount"] = request.maxFileCount();
  }

  if (!!request.hasMinFileCount()) {
    body["MinFileCount"] = request.minFileCount();
  }

  if (!!request.hasNotifyTopicName()) {
    body["NotifyTopicName"] = request.notifyTopicName();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasStoryEndTime()) {
    body["StoryEndTime"] = request.storyEndTime();
  }

  if (!!request.hasStoryName()) {
    body["StoryName"] = request.storyName();
  }

  if (!!request.hasStoryStartTime()) {
    body["StoryStartTime"] = request.storyStartTime();
  }

  if (!!request.hasStorySubType()) {
    body["StorySubType"] = request.storySubType();
  }

  if (!!request.hasStoryType()) {
    body["StoryType"] = request.storyType();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateStoryRequest
 * @return CreateStoryResponse
 */
CreateStoryResponse Client::createStory(const CreateStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStoryWithOptions(request, runtime);
}

/**
 * @summary Creates a trigger. A trigger can trigger Intelligent Media Management (IMM) based on events such as events in Object Storage Service (OSS) to process files, such as images, videos, and documents based on data processing templates.
 *
 * @description If you want to create a trigger to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
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
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.actions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.actionsShrink();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.inputShrink();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasServiceRole()) {
    body["ServiceRole"] = request.serviceRole();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
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
 * @summary Creates a trigger. A trigger can trigger Intelligent Media Management (IMM) based on events such as events in Object Storage Service (OSS) to process files, such as images, videos, and documents based on data processing templates.
 *
 * @description If you want to create a trigger to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param request CreateTriggerRequest
 * @return CreateTriggerResponse
 */
CreateTriggerResponse Client::createTrigger(const CreateTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTriggerWithOptions(request, runtime);
}

/**
 * @summary Detects the scene, object, and event tag information of video content. Scene information includes categories such as natural landscapes, life scenes, and disaster scenes. Event information includes categories such as talent shows, office events, performances, and production events. Object information includes categories such as tableware, electronic products, furniture, and transportation. Video tag detection supports more than 30 tag categories and thousands of tags.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2747104.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   For more information about video label detection, see [Video label detection](https://help.aliyun.com/document_detail/477189.html).
 * *   This operation supports multiple video formats, such as MP4, MPEG-TS, MKV, MOV, AVI, FLV, and M3U8.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Detects the scene, object, and event tag information of video content. Scene information includes categories such as natural landscapes, life scenes, and disaster scenes. Event information includes categories such as talent shows, office events, performances, and production events. Object information includes categories such as tableware, electronic products, furniture, and transportation. Video tag detection supports more than 30 tag categories and thousands of tags.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2747104.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   For more information about video label detection, see [Video label detection](https://help.aliyun.com/document_detail/477189.html).
 * *   This operation supports multiple video formats, such as MP4, MPEG-TS, MKV, MOV, AVI, FLV, and M3U8.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
 *
 * @param request CreateVideoLabelClassificationTaskRequest
 * @return CreateVideoLabelClassificationTaskResponse
 */
CreateVideoLabelClassificationTaskResponse Client::createVideoLabelClassificationTask(const CreateVideoLabelClassificationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVideoLabelClassificationTaskWithOptions(request, runtime);
}

/**
 * @summary Detects risky or non-compliant content from videos. You can use this operation in scenarios such as intelligent pornography detection, terrorist content and political bias detection, ad violation detection, and logo detection.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The detection result is sent as an asynchronous notification. The Suggestion parameter in asynchronous notifications supports the following values:
 *     *   pass: No non-compliant content is found.
 *     *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance category. For more information, see [Content moderation results](https://help.aliyun.com/document_detail/2743995.html).
 *     *   review: A manual review is needed. After the manual review is completed, an asynchronous notification is sent to inform you about the result.
 * *   The following video frame requirements apply:
 *     *   The URLs for video frames must use HTTP or HTTPS.
 *     *   Video frames must be in PNG, JPG, JPEG, BMP, GIF, or WebP format.
 *     *   The size of a video frame cannot exceed 10 MB.
 *     *   The resolution for video frames is not lower than 256 × 256 pixels. A frame resolution lower than this recommended resolution may affect detection accuracy.
 *     *   The response time of the operation varies based on the amount of time required to download frames. Make sure that video frames to be detected are stored in a reliable and stable service. We recommend that you store video frames in OSS or cache video frames on Alibaba Cloud CDN.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasScenes()) {
    request.setScenesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scenes(), "Scenes", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMaxFrames()) {
    query["MaxFrames"] = request.maxFrames();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasScenesShrink()) {
    query["Scenes"] = request.scenesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Detects risky or non-compliant content from videos. You can use this operation in scenarios such as intelligent pornography detection, terrorist content and political bias detection, ad violation detection, and logo detection.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
 *     **
 *     **Note** Asynchronous processing does not guarantee timely task completion.
 * *   The detection result is sent as an asynchronous notification. The Suggestion parameter in asynchronous notifications supports the following values:
 *     *   pass: No non-compliant content is found.
 *     *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance category. For more information, see [Content moderation results](https://help.aliyun.com/document_detail/2743995.html).
 *     *   review: A manual review is needed. After the manual review is completed, an asynchronous notification is sent to inform you about the result.
 * *   The following video frame requirements apply:
 *     *   The URLs for video frames must use HTTP or HTTPS.
 *     *   Video frames must be in PNG, JPG, JPEG, BMP, GIF, or WebP format.
 *     *   The size of a video frame cannot exceed 10 MB.
 *     *   The resolution for video frames is not lower than 256 × 256 pixels. A frame resolution lower than this recommended resolution may affect detection accuracy.
 *     *   The response time of the operation varies based on the amount of time required to download frames. Make sure that video frames to be detected are stored in a reliable and stable service. We recommend that you store video frames in OSS or cache video frames on Alibaba Cloud CDN.
 * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   If you delete a binding, new changes in the OSS bucket are not synchronized to the dataset. Exercise caution when you perform this operation.
 *
 * @param request DeleteBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBindingResponse
 */
DeleteBindingResponse Client::deleteBindingWithOptions(const DeleteBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.URI();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   If you delete a binding, new changes in the OSS bucket are not synchronized to the dataset. Exercise caution when you perform this operation.
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
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.URI();
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
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  json body = {};
  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.objectId();
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
 * @description *   Before you delete a project, make sure that all resources in the project, such as datasets, bindings, batch processing tasks, and triggers, are deleted. For more information, see [DeleteDataset](https://help.aliyun.com/document_detail/478164.html), [DeleteBatch](https://help.aliyun.com/document_detail/479918.html), and [DeleteTrigger](https://help.aliyun.com/document_detail/479915.html).
 * *   After a project is deleted, all resources used by the project are recycled, and all related data is lost and cannot be recovered.
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @description *   Before you delete a project, make sure that all resources in the project, such as datasets, bindings, batch processing tasks, and triggers, are deleted. For more information, see [DeleteDataset](https://help.aliyun.com/document_detail/478164.html), [DeleteBatch](https://help.aliyun.com/document_detail/479918.html), and [DeleteTrigger](https://help.aliyun.com/document_detail/479915.html).
 * *   After a project is deleted, all resources used by the project are recycled, and all related data is lost and cannot be recovered.
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
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
    query["OSSBucket"] = request.OSSBucket();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSensitivity()) {
    query["Sensitivity"] = request.sensitivity();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
 * @summary Detects the cropping area that produces the optimal visual effect based on a given image ratio by using AI model capabilities.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasAspectRatios()) {
    query["AspectRatios"] = request.aspectRatios();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
 * @summary Detects the cropping area that produces the optimal visual effect based on a given image ratio by using AI model capabilities.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Make sure that an IMM [project](https://help.aliyun.com/document_detail/478273.html) is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   For more information about the features of this operation, see [Image label detection](https://help.aliyun.com/document_detail/477179.html).
 * *   For more information about the input images supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.threshold();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Make sure that an IMM [project](https://help.aliyun.com/document_detail/478273.html) is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   For more information about the features of this operation, see [Image label detection](https://help.aliyun.com/document_detail/477179.html).
 * *   For more information about the input images supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
    query["Content"] = request.content();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    query["Content"] = request.content();
  }

  if (!!request.hasImageQuality()) {
    query["ImageQuality"] = request.imageQuality();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasStrengthLevel()) {
    query["StrengthLevel"] = request.strengthLevel();
  }

  if (!!request.hasTargetURI()) {
    query["TargetURI"] = request.targetURI();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
 * @summary Queries the extracted file metadata, including the file name, labels, path, custom tags, text, and other fields. If the value of a metadata field of a file matches the specified string, the metadata of the file is returned.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 88490020073) and share your questions with us.
 * *   For information about the fields that you can use as query conditions, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
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
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.withFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.withFieldsShrink();
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
 * @summary Queries the extracted file metadata, including the file name, labels, path, custom tags, text, and other fields. If the value of a metadata field of a file matches the specified string, the metadata of the file is returned.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 88490020073) and share your questions with us.
 * *   For information about the fields that you can use as query conditions, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
 *
 * @param request FuzzyQueryRequest
 * @return FuzzyQueryResponse
 */
FuzzyQueryResponse Client::fuzzyQuery(const FuzzyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fuzzyQueryWithOptions(request, runtime);
}

/**
 * @summary Generates a live transcoding playlist and converts video files into M3U8 files. After a playlist is generated, the videos in the playlist are immediately played and the video files are transcoded based on the playback progress. Compared with offline transcoding, online transcoding significantly reduces the time spent in waiting for the videos to be transcoded and reduces transcoding and storage costs.
 *
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).**
 * *   Make sure that the project that you want to use is available in the current region. For more information, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 * *   By default, you can call this operation to process only one video, audio, or subtitle track. You can specify the number of the video, audio, or subtitle tracks that you want to process.
 * *   You can call this operation to generate a media playlist and a master playlist. For more information, see the parameter description.
 * *   This operation is a synchronous operation. Synchronous or asynchronous transcoding is triggered only during playback or pre-transcoding. You can configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to obtain the transcoding task result.
 * *   For information about the feature description of this operation, see [Live transcoding](https://help.aliyun.com/document_detail/477192.html).
 * *   The data processing capability of Object Storage Service (OSS) also provides the playlist generation feature. However, this feature can generate only a media playlist, and related parameters are simplified.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasSourceSubtitles()) {
    request.setSourceSubtitlesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceSubtitles(), "SourceSubtitles", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasMasterURI()) {
    query["MasterURI"] = request.masterURI();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasOverwritePolicy()) {
    query["OverwritePolicy"] = request.overwritePolicy();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceDuration()) {
    query["SourceDuration"] = request.sourceDuration();
  }

  if (!!request.hasSourceStartTime()) {
    query["SourceStartTime"] = request.sourceStartTime();
  }

  if (!!request.hasSourceSubtitlesShrink()) {
    query["SourceSubtitles"] = request.sourceSubtitlesShrink();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.targetsShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Generates a live transcoding playlist and converts video files into M3U8 files. After a playlist is generated, the videos in the playlist are immediately played and the video files are transcoded based on the playback progress. Compared with offline transcoding, online transcoding significantly reduces the time spent in waiting for the videos to be transcoded and reduces transcoding and storage costs.
 *
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).**
 * *   Make sure that the project that you want to use is available in the current region. For more information, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
 * *   By default, you can call this operation to process only one video, audio, or subtitle track. You can specify the number of the video, audio, or subtitle tracks that you want to process.
 * *   You can call this operation to generate a media playlist and a master playlist. For more information, see the parameter description.
 * *   This operation is a synchronous operation. Synchronous or asynchronous transcoding is triggered only during playback or pre-transcoding. You can configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to obtain the transcoding task result.
 * *   For information about the feature description of this operation, see [Live transcoding](https://help.aliyun.com/document_detail/477192.html).
 * *   The data processing capability of Object Storage Service (OSS) also provides the playlist generation feature. However, this feature can generate only a media playlist, and related parameters are simplified.
 *
 * @param request GenerateVideoPlaylistRequest
 * @return GenerateVideoPlaylistResponse
 */
GenerateVideoPlaylistResponse Client::generateVideoPlaylist(const GenerateVideoPlaylistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateVideoPlaylistWithOptions(request, runtime);
}

/**
 * @summary Generates an access token for document preview or editing.
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - The access token expires in 30 minutes, and the refresh token expires in 1 day.
 * - The returned expiration time is in UTC, which has an 8-hour difference from Beijing Time.
 * - Supported input file formats:
 *     - Word documents: doc, docx, txt, dot, wps, wpt, dotx, docm, dotm, rtf.
 *     - Presentation documents (PPT): ppt, pptx, pptm, ppsx, ppsm, pps, potx, potm, dpt, dps.
 *     - Spreadsheet documents (Excel): et, xls, xlt, xlsx, xlsm, xltx, xltm, csv
 *     - PDF documents: pdf.
 * - Supports files up to 200MB.
 * - Supports documents with a maximum of 5000 pages.
 * - Projects created before 2023-12-01 are billed based on the number of document openings. Currently, billing is based on the number of API calls. To switch to the new billing model, simply create a new project. Note that one API call can only be used by one user; if reused, only the last user will have normal access, and the access rights of other users will be revoked.
 * - In the same region as the Intelligent Media Management, activate MNS service, create topics and queues, and configure subscription relationships. You can pass the MNS topic name through the NotifyTopicName parameter to receive message notifications for file saves. For more information about the MNS SDK, see [Receiving and Deleting Messages](https://help.aliyun.com/document_detail/32449.html).
 * For an example of the JSON format of the Message field in file save message notifications, refer to [WebOffice Message Notification Format](https://help.aliyun.com/document_detail/2743999.html).
 * > To use the multi-version feature, you must first enable the multi-version feature in OSS, then set the \\"History\\" parameter to true.
 * >
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasPermission()) {
    request.setPermissionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.permission(), "Permission", "json"));
  }

  if (!!tmpReq.hasUser()) {
    request.setUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.user(), "User", "json"));
  }

  if (!!tmpReq.hasWatermark()) {
    request.setWatermarkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.watermark(), "Watermark", "json"));
  }

  json query = {};
  if (!!request.hasCachePreview()) {
    query["CachePreview"] = request.cachePreview();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasExternalUploaded()) {
    query["ExternalUploaded"] = request.externalUploaded();
  }

  if (!!request.hasFilename()) {
    query["Filename"] = request.filename();
  }

  if (!!request.hasHidecmb()) {
    query["Hidecmb"] = request.hidecmb();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasNotifyTopicName()) {
    query["NotifyTopicName"] = request.notifyTopicName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPermissionShrink()) {
    query["Permission"] = request.permissionShrink();
  }

  if (!!request.hasPreviewPages()) {
    query["PreviewPages"] = request.previewPages();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasReferer()) {
    query["Referer"] = request.referer();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
  }

  if (!!request.hasUserShrink()) {
    query["User"] = request.userShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasWatermarkShrink()) {
    query["Watermark"] = request.watermarkShrink();
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
 * @summary Generates an access token for document preview or editing.
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - The access token expires in 30 minutes, and the refresh token expires in 1 day.
 * - The returned expiration time is in UTC, which has an 8-hour difference from Beijing Time.
 * - Supported input file formats:
 *     - Word documents: doc, docx, txt, dot, wps, wpt, dotx, docm, dotm, rtf.
 *     - Presentation documents (PPT): ppt, pptx, pptm, ppsx, ppsm, pps, potx, potm, dpt, dps.
 *     - Spreadsheet documents (Excel): et, xls, xlt, xlsx, xlsm, xltx, xltm, csv
 *     - PDF documents: pdf.
 * - Supports files up to 200MB.
 * - Supports documents with a maximum of 5000 pages.
 * - Projects created before 2023-12-01 are billed based on the number of document openings. Currently, billing is based on the number of API calls. To switch to the new billing model, simply create a new project. Note that one API call can only be used by one user; if reused, only the last user will have normal access, and the access rights of other users will be revoked.
 * - In the same region as the Intelligent Media Management, activate MNS service, create topics and queues, and configure subscription relationships. You can pass the MNS topic name through the NotifyTopicName parameter to receive message notifications for file saves. For more information about the MNS SDK, see [Receiving and Deleting Messages](https://help.aliyun.com/document_detail/32449.html).
 * For an example of the JSON format of the Message field in file save message notifications, refer to [WebOffice Message Notification Format](https://help.aliyun.com/document_detail/2743999.html).
 * > To use the multi-version feature, you must first enable the multi-version feature in OSS, then set the \\"History\\" parameter to true.
 * >
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
    query["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * *   Make sure that the binding relationship that you want to query exists. For information about how to create a binding relationship, see [CreateBinding](https://help.aliyun.com/document_detail/478202.html).
 *
 * @param request GetBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBindingResponse
 */
GetBindingResponse Client::getBindingWithOptions(const GetBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.URI();
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
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * *   Make sure that the binding relationship that you want to query exists. For information about how to create a binding relationship, see [CreateBinding](https://help.aliyun.com/document_detail/478202.html).
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
    query["KeyId"] = request.keyId();
  }

  if (!!request.hasNotifyEndpoint()) {
    query["NotifyEndpoint"] = request.notifyEndpoint();
  }

  if (!!request.hasNotifyTopicName()) {
    query["NotifyTopicName"] = request.notifyTopicName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasProtectionSystem()) {
    query["ProtectionSystem"] = request.protectionSystem();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   The GetDataset operation supports real-time retrieval of file statistics. You can specify WithStatistics to enable real-time retrieval of file statistics.
 *
 * @param request GetDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasWithStatistics()) {
    query["WithStatistics"] = request.withStatistics();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   The GetDataset operation supports real-time retrieval of file statistics. You can specify WithStatistics to enable real-time retrieval of file statistics.
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
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
 *
 * @param request GetFigureClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFigureClusterResponse
 */
GetFigureClusterResponse Client::getFigureClusterWithOptions(const GetFigureClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
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
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.withFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.URI();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.withFieldsShrink();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
 *
 * @param request GetFileMetaRequest
 * @return GetFileMetaResponse
 */
GetFileMetaResponse Client::getFileMeta(const GetFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileMetaWithOptions(request, runtime);
}

/**
 * @summary Queries an image compliance detection task.
 *
 * @param request GetImageModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageModerationResultResponse
 */
GetImageModerationResultResponse Client::getImageModerationResultWithOptions(const GetImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
 * @summary Queries an image compliance detection task.
 *
 * @param request GetImageModerationResultRequest
 * @return GetImageModerationResultResponse
 */
GetImageModerationResultResponse Client::getImageModerationResult(const GetImageModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageModerationResultWithOptions(request, runtime);
}

/**
 * @summary Queries the name of the project bound to an Object Storage Service (OSS) bucket.
 *
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * *   Before you call this operation, make sure that [the project whose name you want to query is bound to the specified OSS bucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param request GetOSSBucketAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOSSBucketAttachmentResponse
 */
GetOSSBucketAttachmentResponse Client::getOSSBucketAttachmentWithOptions(const GetOSSBucketAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOSSBucket()) {
    query["OSSBucket"] = request.OSSBucket();
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
 * @summary Queries the name of the project bound to an Object Storage Service (OSS) bucket.
 *
 * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
 * *   Before you call this operation, make sure that [the project whose name you want to query is bound to the specified OSS bucket](https://help.aliyun.com/document_detail/478206.html).
 *
 * @param request GetOSSBucketAttachmentRequest
 * @return GetOSSBucketAttachmentResponse
 */
GetOSSBucketAttachmentResponse Client::getOSSBucketAttachment(const GetOSSBucketAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOSSBucketAttachmentWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information, datasets, and file statistics of a project.
 *
 * @description When you call this operation, you can enable the real-time retrieval of file statistics based on your business requirements. For more information, see the "Request parameters" section of this topic.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasWithStatistics()) {
    query["WithStatistics"] = request.withStatistics();
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
 * @summary Queries the basic information, datasets, and file statistics of a project.
 *
 * @description When you call this operation, you can enable the real-time retrieval of file statistics based on your business requirements. For more information, see the "Request parameters" section of this topic.
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request GetStoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStoryResponse
 */
GetStoryResponse Client::getStoryWithOptions(const GetStoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request GetStoryRequest
 * @return GetStoryResponse
 */
GetStoryResponse Client::getStory(const GetStoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStoryWithOptions(request, runtime);
}

/**
 * @summary Queries information about an asynchronous task. Intelligent Media Management (IMM) has multiple asynchronous data processing capabilities, each of which has its own operation for creating tasks. For example, you can call the CreateFigureClusteringTask operation to create a face clustering task and the CreateFileCompressionTask operation to create a file compression task. The GetTask operation is a general operation. You can call this operation to query information about asynchronous tasks by task ID or type.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRequestDefinition()) {
    query["RequestDefinition"] = request.requestDefinition();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
 * @summary Queries information about an asynchronous task. Intelligent Media Management (IMM) has multiple asynchronous data processing capabilities, each of which has its own operation for creating tasks. For example, you can call the CreateFigureClusteringTask operation to create a face clustering task and the CreateFileCompressionTask operation to create a file compression task. The GetTask operation is a general operation. You can call this operation to query information about asynchronous tasks by task ID or type.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.
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
    query["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @summary Queries the results of a video label detection task.
 *
 * @description *   Before you call this operation, make sure that a [project](https://help.aliyun.com/document_detail/478273.html) is created on Intelligent Media Management (IMM). For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   Before you call this operation, make sure that a video label detection task is created and the `TaskId` of the task is obtained. For more information, see [CreateVideoLabelClassificationTask](https://help.aliyun.com/document_detail/478223.html).
 *
 * @param request GetVideoLabelClassificationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoLabelClassificationResultResponse
 */
GetVideoLabelClassificationResultResponse Client::getVideoLabelClassificationResultWithOptions(const GetVideoLabelClassificationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
 * @summary Queries the results of a video label detection task.
 *
 * @description *   Before you call this operation, make sure that a [project](https://help.aliyun.com/document_detail/478273.html) is created on Intelligent Media Management (IMM). For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
 * *   Before you call this operation, make sure that a video label detection task is created and the `TaskId` of the task is obtained. For more information, see [CreateVideoLabelClassificationTask](https://help.aliyun.com/document_detail/478223.html).
 *
 * @param request GetVideoLabelClassificationResultRequest
 * @return GetVideoLabelClassificationResultResponse
 */
GetVideoLabelClassificationResultResponse Client::getVideoLabelClassificationResult(const GetVideoLabelClassificationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoLabelClassificationResultWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a video moderation task.
 *
 * @param request GetVideoModerationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoModerationResultResponse
 */
GetVideoModerationResultResponse Client::getVideoModerationResultWithOptions(const GetVideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
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
 * @summary Queries the result of a video moderation task.
 *
 * @param request GetVideoModerationResultRequest
 * @return GetVideoModerationResultResponse
 */
GetVideoModerationResultResponse Client::getVideoModerationResult(const GetVideoModerationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoModerationResultWithOptions(request, runtime);
}

/**
 * @summary Creates an index from metadata extracted by using techniques such as label recognition, face detection, and location detection from input files. You can retrieve data from the same dataset by using multiple methods.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   For information about how to create indexes from metadata, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
 * *   For information about the limits on the maximum number and size of index files that you can create, see the "Limits on datasets" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic. For information about how to create a dataset, see the "CreateDataset" topic.
 * *   For information about the regions in which you can create index files from metadata, see the "Datasets and indexes" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
 * *   After you create an index from metadata, you can try [simple query](https://help.aliyun.com/document_detail/478175.html) to retrieve data. For information about other query capabilities, see [Query and statistics](https://help.aliyun.com/document_detail/2402363.html). You can also [create a face clustering task](https://help.aliyun.com/document_detail/478180.html) to group faces. For information about other clustering capabilities, see [Intelligent management](https://help.aliyun.com/document_detail/2402365.html).
 * **
 * **Usage notes**
 * *   The IndexFileMeta operation is asynchronous, indicating that it takes some time to process the data after a request is submitted. After the processing is complete, the metadata is stored in your dataset. The amount of time it takes for this process varies based on [the workflow template, the operator](https://help.aliyun.com/document_detail/466304.html), and the content of the file, ranging from several seconds to several minutes or even longer. You can subscribe to [Simple Message Service](https://help.aliyun.com/document_detail/2743997.html) for task completion notifications.
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
    request.setFileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.file(), "File", "json"));
  }

  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFileShrink()) {
    query["File"] = request.fileShrink();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary Creates an index from metadata extracted by using techniques such as label recognition, face detection, and location detection from input files. You can retrieve data from the same dataset by using multiple methods.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   For information about how to create indexes from metadata, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
 * *   For information about the limits on the maximum number and size of index files that you can create, see the "Limits on datasets" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic. For information about how to create a dataset, see the "CreateDataset" topic.
 * *   For information about the regions in which you can create index files from metadata, see the "Datasets and indexes" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
 * *   After you create an index from metadata, you can try [simple query](https://help.aliyun.com/document_detail/478175.html) to retrieve data. For information about other query capabilities, see [Query and statistics](https://help.aliyun.com/document_detail/2402363.html). You can also [create a face clustering task](https://help.aliyun.com/document_detail/478180.html) to group faces. For information about other clustering capabilities, see [Intelligent management](https://help.aliyun.com/document_detail/2402365.html).
 * **
 * **Usage notes**
 * *   The IndexFileMeta operation is asynchronous, indicating that it takes some time to process the data after a request is submitted. After the processing is complete, the metadata is stored in your dataset. The amount of time it takes for this process varies based on [the workflow template, the operator](https://help.aliyun.com/document_detail/466304.html), and the content of the file, ranging from several seconds to several minutes or even longer. You can subscribe to [Simple Message Service](https://help.aliyun.com/document_detail/2743997.html) for task completion notifications.
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
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTagSelector()) {
    query["TagSelector"] = request.tagSelector();
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
 * @summary Queries bindings between a dataset and Object Storage Service (OSS) buckets.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
 *
 * @param request ListBindingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindingsResponse
 */
ListBindingsResponse Client::listBindingsWithOptions(const ListBindingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @summary Queries bindings between a dataset and Object Storage Service (OSS) buckets.
 *
 * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
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
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.prefix();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
 * @summary Queries projects. You can call this operation to query the basic information, datasets, and file statistics of multiple projects at the same time.
 *
 * @description The ListProjects operation supports pagination. When you call this operation, you must specify the token that is obtained from the previous query as the value of NextToken. You must also specify MaxResults to limit the number of entries to return.
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.prefix();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
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
 * @summary Queries projects. You can call this operation to query the basic information, datasets, and file statistics of multiple projects at the same time.
 *
 * @description The ListProjects operation supports pagination. When you call this operation, you must specify the token that is obtained from the previous query as the value of NextToken. You must also specify MaxResults to limit the number of entries to return.
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
    query["AcceptLanguage"] = request.acceptLanguage();
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
    request.setEndTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.endTimeRange(), "EndTimeRange", "json"));
  }

  if (!!tmpReq.hasStartTimeRange()) {
    request.setStartTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.startTimeRange(), "StartTimeRange", "json"));
  }

  if (!!tmpReq.hasTaskTypes()) {
    request.setTaskTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskTypes(), "TaskTypes", "json"));
  }

  json query = {};
  if (!!request.hasEndTimeRangeShrink()) {
    query["EndTimeRange"] = request.endTimeRangeShrink();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRequestDefinition()) {
    query["RequestDefinition"] = request.requestDefinition();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStartTimeRangeShrink()) {
    query["StartTimeRange"] = request.startTimeRangeShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagSelector()) {
    query["TagSelector"] = request.tagSelector();
  }

  if (!!request.hasTaskTypesShrink()) {
    query["TaskTypes"] = request.taskTypesShrink();
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
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTagSelector()) {
    query["TagSelector"] = request.tagSelector();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
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
    request.setCreateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.createTimeRange(), "CreateTimeRange", "json"));
  }

  if (!!tmpReq.hasUpdateTimeRange()) {
    request.setUpdateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.updateTimeRange(), "UpdateTimeRange", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimeRangeShrink()) {
    query["CreateTimeRange"] = request.createTimeRangeShrink();
  }

  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.customLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasUpdateTimeRangeShrink()) {
    query["UpdateTimeRange"] = request.updateTimeRangeShrink();
  }

  if (!!request.hasWithTotalCount()) {
    query["WithTotalCount"] = request.withTotalCount();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
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
    request.setAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.address(), "Address", "json"));
  }

  if (!!tmpReq.hasCreateTimeRange()) {
    request.setCreateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.createTimeRange(), "CreateTimeRange", "json"));
  }

  if (!!tmpReq.hasLocationDateClusterEndTimeRange()) {
    request.setLocationDateClusterEndTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.locationDateClusterEndTimeRange(), "LocationDateClusterEndTimeRange", "json"));
  }

  if (!!tmpReq.hasLocationDateClusterLevels()) {
    request.setLocationDateClusterLevelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.locationDateClusterLevels(), "LocationDateClusterLevels", "json"));
  }

  if (!!tmpReq.hasLocationDateClusterStartTimeRange()) {
    request.setLocationDateClusterStartTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.locationDateClusterStartTimeRange(), "LocationDateClusterStartTimeRange", "json"));
  }

  if (!!tmpReq.hasUpdateTimeRange()) {
    request.setUpdateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.updateTimeRange(), "UpdateTimeRange", "json"));
  }

  json query = {};
  if (!!request.hasAddressShrink()) {
    query["Address"] = request.addressShrink();
  }

  if (!!request.hasCreateTimeRangeShrink()) {
    query["CreateTimeRange"] = request.createTimeRangeShrink();
  }

  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.customLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasLocationDateClusterEndTimeRangeShrink()) {
    query["LocationDateClusterEndTimeRange"] = request.locationDateClusterEndTimeRangeShrink();
  }

  if (!!request.hasLocationDateClusterLevelsShrink()) {
    query["LocationDateClusterLevels"] = request.locationDateClusterLevelsShrink();
  }

  if (!!request.hasLocationDateClusterStartTimeRangeShrink()) {
    query["LocationDateClusterStartTimeRange"] = request.locationDateClusterStartTimeRangeShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUpdateTimeRangeShrink()) {
    query["UpdateTimeRange"] = request.updateTimeRangeShrink();
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
    query["CustomLabels"] = request.customLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
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
    request.setCreateTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.createTimeRange(), "CreateTimeRange", "json"));
  }

  if (!!tmpReq.hasFigureClusterIds()) {
    request.setFigureClusterIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.figureClusterIds(), "FigureClusterIds", "json"));
  }

  if (!!tmpReq.hasStoryEndTimeRange()) {
    request.setStoryEndTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storyEndTimeRange(), "StoryEndTimeRange", "json"));
  }

  if (!!tmpReq.hasStoryStartTimeRange()) {
    request.setStoryStartTimeRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.storyStartTimeRange(), "StoryStartTimeRange", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimeRangeShrink()) {
    query["CreateTimeRange"] = request.createTimeRangeShrink();
  }

  if (!!request.hasCustomLabels()) {
    query["CustomLabels"] = request.customLabels();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFigureClusterIdsShrink()) {
    query["FigureClusterIds"] = request.figureClusterIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStoryEndTimeRangeShrink()) {
    query["StoryEndTimeRange"] = request.storyEndTimeRangeShrink();
  }

  if (!!request.hasStoryName()) {
    query["StoryName"] = request.storyName();
  }

  if (!!request.hasStoryStartTimeRangeShrink()) {
    query["StoryStartTimeRange"] = request.storyStartTimeRangeShrink();
  }

  if (!!request.hasStorySubType()) {
    query["StorySubType"] = request.storySubType();
  }

  if (!!request.hasStoryType()) {
    query["StoryType"] = request.storyType();
  }

  if (!!request.hasWithEmptyStories()) {
    query["WithEmptyStories"] = request.withEmptyStories();
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
 * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
 * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
 * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
 *
 * @param request QueryStoriesRequest
 * @return QueryStoriesResponse
 */
QueryStoriesResponse Client::queryStories(const QueryStoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryStoriesWithOptions(request, runtime);
}

/**
 * @summary Refresh Document Preview and Editing Token
 *
 * @description **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - For detailed billing information, refer to the [WebOffice Billing Instructions](https://help.aliyun.com/document_detail/2639703.html).
 * - The access token expires after 30 minutes. You must open the preview before the access token expires; otherwise, you will not be able to preview.
 * - The refresh token expires after 1 day. You need to call the refresh interface before the refresh token expires; otherwise, the token will become invalid.
 * - The expiration time returned is in UTC, which has an 8-hour difference from Beijing Time.
 * > The access token is used for actual preview session access, while the refresh token is used to reduce the parameters required for users to refresh tokens. You can use the refresh token to directly obtain a new token based on previous configurations.
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.accessToken();
  }

  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasRefreshToken()) {
    query["RefreshToken"] = request.refreshToken();
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
 * @summary Refresh Document Preview and Editing Token
 *
 * @description **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - For detailed billing information, refer to the [WebOffice Billing Instructions](https://help.aliyun.com/document_detail/2639703.html).
 * - The access token expires after 30 minutes. You must open the preview before the access token expires; otherwise, you will not be able to preview.
 * - The refresh token expires after 1 day. You need to call the refresh interface before the refresh token expires; otherwise, the token will become invalid.
 * - The expiration time returned is in UTC, which has an 8-hour difference from Beijing Time.
 * > The access token is used for actual preview session access, while the refresh token is used to reduce the parameters required for users to refresh tokens. You can use the refresh token to directly obtain a new token based on previous configurations.
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
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.files(), "Files", "json"));
  }

  json body = {};
  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFilesShrink()) {
    body["Files"] = request.filesShrink();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
    request.setCredentialConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.credentialConfig(), "CredentialConfig", "json"));
  }

  json query = {};
  if (!!request.hasCredentialConfigShrink()) {
    query["CredentialConfig"] = request.credentialConfigShrink();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSourceURI()) {
    query["SourceURI"] = request.sourceURI();
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
 * @description ### [](#)Precautions
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**** Each time you call this operation, you are charged for semantic understanding and query fees.
 * *   Before you call this operation, make sure that the file that you want to use is indexed into the dataset that you use. To index a file into a dataset, you can call one of the following operations: [CreateBinding](https://help.aliyun.com/document_detail/478202.html), [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html), and [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * *   The response provided in this example is for reference only. The categories and content of metadata vary based on configurations of [workflow templates](https://help.aliyun.com/document_detail/466304.html). If you have questions, search for and join the DingTalk group numbered 21714099.
 * ### [](#)Usage limits
 * *   Each time you call this operation, up to 1,000 metadata files are returned.
 * *   Pagination is not supported.
 * *   The natural language processing capability may not always produce completely accurate results.
 * ### [](#)Usage methods
 * You can query files within a dataset by using natural language keywords. Key information supported for understanding includes labels (Labels.LabelName), time (ProduceTime), and location (Address.AddressLine). For example, if you use `2023 Hangzhou scenery` as the query criterion, the operation intelligently breaks the query criterion down into the following sub-criteria, and returns the files that meet all the sub-criteria:
 * *   ProduceTime: 00:00 on January 1, 2023 to 00:00 on December 31, 2023.
 * *   Address.AddressLine: `Hangzhou`
 * *   Labels.LabelName: `scenery`.
 * When you call this operation, you can configure a [workflow template](https://help.aliyun.com/document_detail/466304.html) that includes the `ImageEmbeddingExtraction` operator. This allows the operation to return image content when the query you input matches the image content, thereby achieving intelligent image retrieval.``
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
    request.setMediaTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.mediaTypes(), "MediaTypes", "json"));
  }

  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.withFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasMediaTypesShrink()) {
    query["MediaTypes"] = request.mediaTypesShrink();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.withFieldsShrink();
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
 * @description ### [](#)Precautions
 * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**** Each time you call this operation, you are charged for semantic understanding and query fees.
 * *   Before you call this operation, make sure that the file that you want to use is indexed into the dataset that you use. To index a file into a dataset, you can call one of the following operations: [CreateBinding](https://help.aliyun.com/document_detail/478202.html), [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html), and [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
 * *   The response provided in this example is for reference only. The categories and content of metadata vary based on configurations of [workflow templates](https://help.aliyun.com/document_detail/466304.html). If you have questions, search for and join the DingTalk group numbered 21714099.
 * ### [](#)Usage limits
 * *   Each time you call this operation, up to 1,000 metadata files are returned.
 * *   Pagination is not supported.
 * *   The natural language processing capability may not always produce completely accurate results.
 * ### [](#)Usage methods
 * You can query files within a dataset by using natural language keywords. Key information supported for understanding includes labels (Labels.LabelName), time (ProduceTime), and location (Address.AddressLine). For example, if you use `2023 Hangzhou scenery` as the query criterion, the operation intelligently breaks the query criterion down into the following sub-criteria, and returns the files that meet all the sub-criteria:
 * *   ProduceTime: 00:00 on January 1, 2023 to 00:00 on December 31, 2023.
 * *   Address.AddressLine: `Hangzhou`
 * *   Labels.LabelName: `scenery`.
 * When you call this operation, you can configure a [workflow template](https://help.aliyun.com/document_detail/466304.html) that includes the `ImageEmbeddingExtraction` operator. This allows the operation to return image content when the query you input matches the image content, thereby achieving intelligent image retrieval.``
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
    request.setAggregationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aggregations(), "Aggregations", "json"));
  }

  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.query(), "Query", "json"));
  }

  if (!!tmpReq.hasWithFields()) {
    request.setWithFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.withFields(), "WithFields", "json"));
  }

  json query = {};
  if (!!request.hasAggregationsShrink()) {
    query["Aggregations"] = request.aggregationsShrink();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
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

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasQueryShrink()) {
    query["Query"] = request.queryShrink();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasWithFieldsShrink()) {
    query["WithFields"] = request.withFieldsShrink();
  }

  if (!!request.hasWithoutTotalHits()) {
    query["WithoutTotalHits"] = request.withoutTotalHits();
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
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
 * @summary Updates information about a batch processing task, including the input data source, data processing settings, and tags.
 *
 * @description *   You can update only a batch processing task that is in the Ready or Failed state. The update operation does not change the status of the batch processing task.
 * *   If you update a batch processing task that is in progress, the task is not automatically resumed after the update is complete. You must call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume the task.
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
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.actions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.actionsShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.inputShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
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
 * @summary Updates information about a batch processing task, including the input data source, data processing settings, and tags.
 *
 * @description *   You can update only a batch processing task that is in the Ready or Failed state. The update operation does not change the status of the batch processing task.
 * *   If you update a batch processing task that is in progress, the task is not automatically resumed after the update is complete. You must call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume the task.
 *
 * @param request UpdateBatchRequest
 * @return UpdateBatchResponse
 */
UpdateBatchResponse Client::updateBatch(const UpdateBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchWithOptions(request, runtime);
}

/**
 * @summary Update Media Set
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - When updating dataset information, make sure the dataset has been successfully created. For creating a dataset, please refer to the request parameter description.
 * - When updating dataset information, only fill in the fields that need to be updated; unfilled fields will not change.
 * - The update of the dataset will not take effect immediately and may require up to 5 minutes to become effective.
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
    request.setWorkflowParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.workflowParameters(), "WorkflowParameters", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.datasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.datasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.datasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.datasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.datasetMaxTotalFileSize();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasWorkflowParametersShrink()) {
    query["WorkflowParameters"] = request.workflowParametersShrink();
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
 * @summary Update Media Set
 *
 * @description - **Please ensure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/477042.html) of the Intelligent Media Management product before using this interface.**
 * - When updating dataset information, make sure the dataset has been successfully created. For creating a dataset, please refer to the request parameter description.
 * - When updating dataset information, only fill in the fields that need to be updated; unfilled fields will not change.
 * - The update of the dataset will not take effect immediately and may require up to 5 minutes to become effective.
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
    request.setFigureClusterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.figureCluster(), "FigureCluster", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFigureClusterShrink()) {
    query["FigureCluster"] = request.figureClusterShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    request.setFileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.file(), "File", "json"));
  }

  json query = {};
  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasFileShrink()) {
    query["File"] = request.fileShrink();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
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
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customLabels(), "CustomLabels", "json"));
  }

  json query = {};
  if (!!request.hasCustomId()) {
    query["CustomId"] = request.customId();
  }

  if (!!request.hasCustomLabelsShrink()) {
    query["CustomLabels"] = request.customLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    query["DatasetName"] = request.datasetName();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary Updates information about a project.
 *
 * @description *   Before you call this operation, make sure that the project exists. For information about how to create a project, see "CreateProject".
 * *   When you call this operation, you need to specify only the parameters that you want to update. The parameters that you do not specify remain unchanged after you call this operation.
 * *   Wait for up to 5 minutes for the update to take effect.
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasDatasetMaxBindCount()) {
    query["DatasetMaxBindCount"] = request.datasetMaxBindCount();
  }

  if (!!request.hasDatasetMaxEntityCount()) {
    query["DatasetMaxEntityCount"] = request.datasetMaxEntityCount();
  }

  if (!!request.hasDatasetMaxFileCount()) {
    query["DatasetMaxFileCount"] = request.datasetMaxFileCount();
  }

  if (!!request.hasDatasetMaxRelationCount()) {
    query["DatasetMaxRelationCount"] = request.datasetMaxRelationCount();
  }

  if (!!request.hasDatasetMaxTotalFileSize()) {
    query["DatasetMaxTotalFileSize"] = request.datasetMaxTotalFileSize();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectMaxDatasetCount()) {
    query["ProjectMaxDatasetCount"] = request.projectMaxDatasetCount();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasServiceRole()) {
    query["ServiceRole"] = request.serviceRole();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
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
 * @summary Updates information about a project.
 *
 * @description *   Before you call this operation, make sure that the project exists. For information about how to create a project, see "CreateProject".
 * *   When you call this operation, you need to specify only the parameters that you want to update. The parameters that you do not specify remain unchanged after you call this operation.
 * *   Wait for up to 5 minutes for the update to take effect.
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
    request.setCoverShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cover(), "Cover", "json"));
  }

  if (!!tmpReq.hasCustomLabels()) {
    request.setCustomLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customLabels(), "CustomLabels", "json"));
  }

  json body = {};
  if (!!request.hasCoverShrink()) {
    body["Cover"] = request.coverShrink();
  }

  if (!!request.hasCustomId()) {
    body["CustomId"] = request.customId();
  }

  if (!!request.hasCustomLabelsShrink()) {
    body["CustomLabels"] = request.customLabelsShrink();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.datasetName();
  }

  if (!!request.hasObjectId()) {
    body["ObjectId"] = request.objectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasStoryName()) {
    body["StoryName"] = request.storyName();
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
    request.setActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.actions(), "Actions", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasActionsShrink()) {
    body["Actions"] = request.actionsShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.inputShrink();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
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