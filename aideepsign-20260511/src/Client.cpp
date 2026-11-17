#include <darabonba/Core.hpp>
#include <alibabacloud/AIDeepSign20260511.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AIDeepSign20260511::Models;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{

AlibabaCloud::AIDeepSign20260511::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "AIDeepSign";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("aideepsign", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Stops a batch C2PA trusted signing task for a specified OSS bucket.
 *
 * @description ## Operation description
 * - This operation stops a batch trusted signing task for a bucket owned by the currently authenticated account. TaskId is the parent task ID of the bucket returned by CreateC2paBucketSignTask.
 * - When the returned Status is `CANCELING`, the task is completing the stop process. Repeated requests may return the completed `CANCELED` status.
 * - Call GetC2paSignResult to query the task status and final result.
 *
 * @param request CancelC2paBucketSignTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelC2paBucketSignTaskResponse
 */
CancelC2paBucketSignTaskResponse Client::cancelC2paBucketSignTaskWithOptions(const CancelC2paBucketSignTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelC2paBucketSignTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelC2paBucketSignTaskResponse>();
}

/**
 * @summary Stops a batch C2PA trusted signing task for a specified OSS bucket.
 *
 * @description ## Operation description
 * - This operation stops a batch trusted signing task for a bucket owned by the currently authenticated account. TaskId is the parent task ID of the bucket returned by CreateC2paBucketSignTask.
 * - When the returned Status is `CANCELING`, the task is completing the stop process. Repeated requests may return the completed `CANCELED` status.
 * - Call GetC2paSignResult to query the task status and final result.
 *
 * @param request CancelC2paBucketSignTaskRequest
 * @return CancelC2paBucketSignTaskResponse
 */
CancelC2paBucketSignTaskResponse Client::cancelC2paBucketSignTask(const CancelC2paBucketSignTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelC2paBucketSignTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a batch C2PA content credential signing task for files in a specified OSS bucket.
 *
 * @description Creates a batch standard C2PA content credential signing task for an OSS bucket. The service recursively scans non-directory objects under `SourcePrefix` and supports JPEG/JPG, PNG, MP4, and audio formats including FLAC, M4A, MP3, and WAV. By default, a single task includes up to 20,000 non-directory objects, and the size of a single file cannot exceed 800 MiB.
 * Before you call this operation, make sure that the `AliyunServiceRoleForAIDeepSign` service-linked role has been granted the OSS List and Get permissions on the source prefix, and the Get and Put permissions on the output prefix. `SourceType`, `SoftwareAgent`, and `CustomAssertions` are optional parameters. The values specified during creation are applied to each file in the batch.
 * A successful creation only indicates that the task has been accepted. Save the returned `TaskId` and call `GetC2paSignResult` to query the status and statistics. You can use `PauseC2paBucketSignTask`, `ResumeC2paBucketSignTask`, and `CancelC2paBucketSignTask` to control the task.
 * The signature files are written to `ai-deepsign-signed/<TaskId>/<folder of the object relative to SourcePrefix>/<original file name>_signed.<extension>` in the same bucket, preserving the relative subdirectory and source file extensions. The final JSON report is saved as `ai-deepsign-signed/<TaskId>/c2pa_report.json`.
 * This operation is metered based on the number of successfully signed files. The same account can create multiple tasks for the same bucket and prefix, and each task uses an independent output directory. Duplicate creations may result in duplicate signing and metering.
 *
 * @param request CreateC2paBucketSignTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateC2paBucketSignTaskResponse
 */
CreateC2paBucketSignTaskResponse Client::createC2paBucketSignTaskWithOptions(const CreateC2paBucketSignTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasBucketRegionId()) {
    query["BucketRegionId"] = request.getBucketRegionId();
  }

  if (!!request.hasCustomAssertions()) {
    query["CustomAssertions"] = request.getCustomAssertions();
  }

  if (!!request.hasSoftwareAgent()) {
    query["SoftwareAgent"] = request.getSoftwareAgent();
  }

  if (!!request.hasSourcePrefix()) {
    query["SourcePrefix"] = request.getSourcePrefix();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateC2paBucketSignTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateC2paBucketSignTaskResponse>();
}

/**
 * @summary Creates a batch C2PA content credential signing task for files in a specified OSS bucket.
 *
 * @description Creates a batch standard C2PA content credential signing task for an OSS bucket. The service recursively scans non-directory objects under `SourcePrefix` and supports JPEG/JPG, PNG, MP4, and audio formats including FLAC, M4A, MP3, and WAV. By default, a single task includes up to 20,000 non-directory objects, and the size of a single file cannot exceed 800 MiB.
 * Before you call this operation, make sure that the `AliyunServiceRoleForAIDeepSign` service-linked role has been granted the OSS List and Get permissions on the source prefix, and the Get and Put permissions on the output prefix. `SourceType`, `SoftwareAgent`, and `CustomAssertions` are optional parameters. The values specified during creation are applied to each file in the batch.
 * A successful creation only indicates that the task has been accepted. Save the returned `TaskId` and call `GetC2paSignResult` to query the status and statistics. You can use `PauseC2paBucketSignTask`, `ResumeC2paBucketSignTask`, and `CancelC2paBucketSignTask` to control the task.
 * The signature files are written to `ai-deepsign-signed/<TaskId>/<folder of the object relative to SourcePrefix>/<original file name>_signed.<extension>` in the same bucket, preserving the relative subdirectory and source file extensions. The final JSON report is saved as `ai-deepsign-signed/<TaskId>/c2pa_report.json`.
 * This operation is metered based on the number of successfully signed files. The same account can create multiple tasks for the same bucket and prefix, and each task uses an independent output directory. Duplicate creations may result in duplicate signing and metering.
 *
 * @param request CreateC2paBucketSignTaskRequest
 * @return CreateC2paBucketSignTaskResponse
 */
CreateC2paBucketSignTaskResponse Client::createC2paBucketSignTask(const CreateC2paBucketSignTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createC2paBucketSignTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a C2PA content credential signing task for a specified file and returns the task ID.
 *
 * @description Adds standard C2PA content credentials to a single JPEG/JPG, PNG, MP4, FLAC, M4A, MP3, or WAV file. The operation receives an accessible absolute HTTP or HTTPS file URL, asynchronously retrieves and signs the file, and returns a TaskId for querying the result. The size of a single file cannot exceed 800 MiB.
 * You can declare the content source, software name, and custom business data by using the optional SourceType, SoftwareAgent, and CustomAssertions parameters. This information is written into the content credentials of the signed file.
 * A successful creation only indicates that the request has been accepted. Save the returned TaskId and call GetC2paSignResult to query the final status and signing result.
 * This operation is independent of the synchronous SignUserImage operation. It only supports creating tasks through file URLs and does not accept file content, buckets, object keys, caller-specified TaskIds, or idempotency keys. This operation is metered based on the number of successfully signed files. Repeated calls create different tasks. Do not create tasks repeatedly before confirming the task result to avoid duplicate signing and metering.
 *
 * @param request CreateC2paSignTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateC2paSignTaskResponse
 */
CreateC2paSignTaskResponse Client::createC2paSignTaskWithOptions(const CreateC2paSignTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowOverwrite()) {
    query["AllowOverwrite"] = request.getAllowOverwrite();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasBucketRegionId()) {
    query["BucketRegionId"] = request.getBucketRegionId();
  }

  if (!!request.hasCustomAssertions()) {
    query["CustomAssertions"] = request.getCustomAssertions();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasObjectKey()) {
    query["ObjectKey"] = request.getObjectKey();
  }

  if (!!request.hasSoftwareAgent()) {
    query["SoftwareAgent"] = request.getSoftwareAgent();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTargetBucketName()) {
    query["TargetBucketName"] = request.getTargetBucketName();
  }

  if (!!request.hasTargetBucketRegion()) {
    query["TargetBucketRegion"] = request.getTargetBucketRegion();
  }

  if (!!request.hasTargetObjectKey()) {
    query["TargetObjectKey"] = request.getTargetObjectKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateC2paSignTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateC2paSignTaskResponse>();
}

/**
 * @summary Creates a C2PA content credential signing task for a specified file and returns the task ID.
 *
 * @description Adds standard C2PA content credentials to a single JPEG/JPG, PNG, MP4, FLAC, M4A, MP3, or WAV file. The operation receives an accessible absolute HTTP or HTTPS file URL, asynchronously retrieves and signs the file, and returns a TaskId for querying the result. The size of a single file cannot exceed 800 MiB.
 * You can declare the content source, software name, and custom business data by using the optional SourceType, SoftwareAgent, and CustomAssertions parameters. This information is written into the content credentials of the signed file.
 * A successful creation only indicates that the request has been accepted. Save the returned TaskId and call GetC2paSignResult to query the final status and signing result.
 * This operation is independent of the synchronous SignUserImage operation. It only supports creating tasks through file URLs and does not accept file content, buckets, object keys, caller-specified TaskIds, or idempotency keys. This operation is metered based on the number of successfully signed files. Repeated calls create different tasks. Do not create tasks repeatedly before confirming the task result to avoid duplicate signing and metering.
 *
 * @param request CreateC2paSignTaskRequest
 * @return CreateC2paSignTaskResponse
 */
CreateC2paSignTaskResponse Client::createC2paSignTask(const CreateC2paSignTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createC2paSignTaskWithOptions(request, runtime);
}

/**
 * @summary Submits an image for defect detection and returns a task ID for querying the result.
 *
 * @description ## Request description
 * - This operation submits an image to the server for defect detection, including but not limited to abnormal issues such as a blurred main subject, distortion, and reflection.
 * - **ImageUrl is required** and must be a publicly accessible HTTP or HTTPS URL. Currently, images from outside the Chinese mainland are not supported. Only image URLs accessible over the public network in the Chinese mainland are supported. We recommend that you upload the image to an Alibaba Cloud OSS bucket in a region in the Chinese mainland, and then use the presigned URL of the image as the input parameter for this operation. Reference: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - After a successful submission, a task ID is immediately returned. Regardless of whether the task is completed immediately or is still being processed, you must poll the GetImageDefectDetectionTaskResult operation to obtain the final detection result.
 * - If a parameter error or other issue occurs during the submission process, the corresponding error message is directly returned without creating a task record.
 * - The image size cannot exceed 10 MB. Detection fails for images that exceed this limit.
 *
 * @param request CreateImageDefectDetectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageDefectDetectionTaskResponse
 */
CreateImageDefectDetectionTaskResponse Client::createImageDefectDetectionTaskWithOptions(const CreateImageDefectDetectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageDefectDetectionTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageDefectDetectionTaskResponse>();
}

/**
 * @summary Submits an image for defect detection and returns a task ID for querying the result.
 *
 * @description ## Request description
 * - This operation submits an image to the server for defect detection, including but not limited to abnormal issues such as a blurred main subject, distortion, and reflection.
 * - **ImageUrl is required** and must be a publicly accessible HTTP or HTTPS URL. Currently, images from outside the Chinese mainland are not supported. Only image URLs accessible over the public network in the Chinese mainland are supported. We recommend that you upload the image to an Alibaba Cloud OSS bucket in a region in the Chinese mainland, and then use the presigned URL of the image as the input parameter for this operation. Reference: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - After a successful submission, a task ID is immediately returned. Regardless of whether the task is completed immediately or is still being processed, you must poll the GetImageDefectDetectionTaskResult operation to obtain the final detection result.
 * - If a parameter error or other issue occurs during the submission process, the corresponding error message is directly returned without creating a task record.
 * - The image size cannot exceed 10 MB. Detection fails for images that exceed this limit.
 *
 * @param request CreateImageDefectDetectionTaskRequest
 * @return CreateImageDefectDetectionTaskResponse
 */
CreateImageDefectDetectionTaskResponse Client::createImageDefectDetectionTask(const CreateImageDefectDetectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageDefectDetectionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an asynchronous image tampering detection task and returns the task ID.
 *
 * @description ## Request description
 * - **ImageUrl** is required and must be a publicly accessible HTTP or HTTPS URL.
 * - Images from outside the Chinese mainland are not supported. Only image URLs accessible over the public network in the Chinese mainland are supported. Upload the image to an Alibaba Cloud OSS bucket in a region in the Chinese mainland and then use the pre-signed URL of the image as the input parameter for this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - The **DetectType** parameter is deprecated. This parameter is still accepted (`tamper` or `aigc`) but does not affect the actual detection mode. Regardless of the value passed, tampering detection is executed and `DetectMode=tamper` is returned. Do not pass this parameter when you invoke the operation.
 * - The **UseTamperSmallModel** parameter specifies whether to use a small model. If it is set to `true`, the small model is used and no large model report is generated. If it is set to `false` or left empty, the large model is used by default and a comprehensive analysis report from the large model is returned.
 *
 * @param request CreateImageDetectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageDetectionTaskResponse
 */
CreateImageDetectionTaskResponse Client::createImageDetectionTaskWithOptions(const CreateImageDetectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDetectType()) {
    query["DetectType"] = request.getDetectType();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasUseTamperSmallModel()) {
    query["UseTamperSmallModel"] = request.getUseTamperSmallModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageDetectionTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageDetectionTaskResponse>();
}

/**
 * @summary Creates an asynchronous image tampering detection task and returns the task ID.
 *
 * @description ## Request description
 * - **ImageUrl** is required and must be a publicly accessible HTTP or HTTPS URL.
 * - Images from outside the Chinese mainland are not supported. Only image URLs accessible over the public network in the Chinese mainland are supported. Upload the image to an Alibaba Cloud OSS bucket in a region in the Chinese mainland and then use the pre-signed URL of the image as the input parameter for this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - The **DetectType** parameter is deprecated. This parameter is still accepted (`tamper` or `aigc`) but does not affect the actual detection mode. Regardless of the value passed, tampering detection is executed and `DetectMode=tamper` is returned. Do not pass this parameter when you invoke the operation.
 * - The **UseTamperSmallModel** parameter specifies whether to use a small model. If it is set to `true`, the small model is used and no large model report is generated. If it is set to `false` or left empty, the large model is used by default and a comprehensive analysis report from the large model is returned.
 *
 * @param request CreateImageDetectionTaskRequest
 * @return CreateImageDetectionTaskResponse
 */
CreateImageDetectionTaskResponse Client::createImageDetectionTask(const CreateImageDetectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageDetectionTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a screenshot of an individual income tax record for forgery detection and returns a task ID.
 *
 * @description ## Request instructions
 * - **ImageUrl** is required and must be a publicly accessible HTTP or HTTPS URL. The server must be able to download the image from this URL.
 * - Currently, images from outside the Chinese mainland are not supported. Only images accessible from the public network within the Chinese mainland are supported. We recommend that you first upload the image to an Alibaba Cloud OSS bucket in a region within the Chinese mainland, and then use the pre-signed URL of the image as the input parameter for this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 * - The image size cannot exceed 10 MB. Detection will be failed for images that exceed this limit.
 *
 * @param request CreateImageIncomeTaxDetectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageIncomeTaxDetectionTaskResponse
 */
CreateImageIncomeTaxDetectionTaskResponse Client::createImageIncomeTaxDetectionTaskWithOptions(const CreateImageIncomeTaxDetectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageIncomeTaxDetectionTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageIncomeTaxDetectionTaskResponse>();
}

/**
 * @summary Submits a screenshot of an individual income tax record for forgery detection and returns a task ID.
 *
 * @description ## Request instructions
 * - **ImageUrl** is required and must be a publicly accessible HTTP or HTTPS URL. The server must be able to download the image from this URL.
 * - Currently, images from outside the Chinese mainland are not supported. Only images accessible from the public network within the Chinese mainland are supported. We recommend that you first upload the image to an Alibaba Cloud OSS bucket in a region within the Chinese mainland, and then use the pre-signed URL of the image as the input parameter for this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 * - The image size cannot exceed 10 MB. Detection will be failed for images that exceed this limit.
 *
 * @param request CreateImageIncomeTaxDetectionTaskRequest
 * @return CreateImageIncomeTaxDetectionTaskResponse
 */
CreateImageIncomeTaxDetectionTaskResponse Client::createImageIncomeTaxDetectionTask(const CreateImageIncomeTaxDetectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageIncomeTaxDetectionTaskWithOptions(request, runtime);
}

/**
 * @summary Generates an image based on the provided text description and returns the task ID.
 *
 * @description ## Request description
 * - This operation creates an AI image generation task. The system generates the corresponding image based on the positive prompt provided by the user.
 * - You can configure parameters such as the negative prompt, model, and image size to optimize the generation results.
 * - By default, the generated image is automatically embedded with a C2PA digital signature. You can choose whether to add a watermark in the lower-right corner.
 * - You can set the `ClientToken` parameter to ensure the idempotence of the request and guarantee uniqueness across different requests.
 * - After the task is created, use the `TaskId` to call the `GetImageTaskResult` operation to query the generation result.
 *
 * @param request CreateImageTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageTaskResponse
 */
CreateImageTaskResponse Client::createImageTaskWithOptions(const CreateImageTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasN()) {
    query["N"] = request.getN();
  }

  if (!!request.hasNegativePrompt()) {
    query["NegativePrompt"] = request.getNegativePrompt();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptExtend()) {
    query["PromptExtend"] = request.getPromptExtend();
  }

  if (!!request.hasSeed()) {
    query["Seed"] = request.getSeed();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageTaskResponse>();
}

/**
 * @summary Generates an image based on the provided text description and returns the task ID.
 *
 * @description ## Request description
 * - This operation creates an AI image generation task. The system generates the corresponding image based on the positive prompt provided by the user.
 * - You can configure parameters such as the negative prompt, model, and image size to optimize the generation results.
 * - By default, the generated image is automatically embedded with a C2PA digital signature. You can choose whether to add a watermark in the lower-right corner.
 * - You can set the `ClientToken` parameter to ensure the idempotence of the request and guarantee uniqueness across different requests.
 * - After the task is created, use the `TaskId` to call the `GetImageTaskResult` operation to query the generation result.
 *
 * @param request CreateImageTaskRequest
 * @return CreateImageTaskResponse
 */
CreateImageTaskResponse Client::createImageTask(const CreateImageTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an image sensitive information scan task and returns the task ID.
 *
 * @description ## Operation description
 * - **ImageUrl** is required and must be a publicly accessible HTTP/HTTPS URL.
 * - External images are not supported. Only image URLs accessible from the Chinese mainland public network are supported. Upload images to an Alibaba Cloud OSS bucket in a Chinese mainland region first, and then use the pre-signed URL of the image as the input parameter of this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - The size of the image uploaded by using ImageUrl cannot exceed 10 MB.
 * - The optional parameter **ClientToken** ensures the idempotence of the request. The client generates this parameter value, which must be unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters.
 *
 * @param request CreateSensitiveScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSensitiveScanTaskResponse
 */
CreateSensitiveScanTaskResponse Client::createSensitiveScanTaskWithOptions(const CreateSensitiveScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSensitiveScanTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSensitiveScanTaskResponse>();
}

/**
 * @summary Creates an image sensitive information scan task and returns the task ID.
 *
 * @description ## Operation description
 * - **ImageUrl** is required and must be a publicly accessible HTTP/HTTPS URL.
 * - External images are not supported. Only image URLs accessible from the Chinese mainland public network are supported. Upload images to an Alibaba Cloud OSS bucket in a Chinese mainland region first, and then use the pre-signed URL of the image as the input parameter of this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - The size of the image uploaded by using ImageUrl cannot exceed 10 MB.
 * - The optional parameter **ClientToken** ensures the idempotence of the request. The client generates this parameter value, which must be unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters.
 *
 * @param request CreateSensitiveScanTaskRequest
 * @return CreateSensitiveScanTaskResponse
 */
CreateSensitiveScanTaskResponse Client::createSensitiveScanTask(const CreateSensitiveScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSensitiveScanTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a video generation task.
 *
 * @description ## Request description
 * - This operation creates an AI video generation task. The system generates a video based on the positive prompt provided by the user.
 * - By default, the generated video is automatically embedded with a C2PA digital signature.
 * - After creating the task, use the `TaskId` to call the `GetVideoTaskResult` operation to query the generation result.
 *
 * @param request CreateVideoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoTaskResponse
 */
CreateVideoTaskResponse Client::createVideoTaskWithOptions(const CreateVideoTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudio()) {
    query["Audio"] = request.getAudio();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptExtend()) {
    query["PromptExtend"] = request.getPromptExtend();
  }

  if (!!request.hasRatio()) {
    query["Ratio"] = request.getRatio();
  }

  if (!!request.hasResolution()) {
    query["Resolution"] = request.getResolution();
  }

  if (!!request.hasSeed()) {
    query["Seed"] = request.getSeed();
  }

  if (!!request.hasWatermark()) {
    query["Watermark"] = request.getWatermark();
  }

  if (!!request.hasMedia()) {
    query["Media"] = request.getMedia();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVideoTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoTaskResponse>();
}

/**
 * @summary Creates a video generation task.
 *
 * @description ## Request description
 * - This operation creates an AI video generation task. The system generates a video based on the positive prompt provided by the user.
 * - By default, the generated video is automatically embedded with a C2PA digital signature.
 * - After creating the task, use the `TaskId` to call the `GetVideoTaskResult` operation to query the generation result.
 *
 * @param request CreateVideoTaskRequest
 * @return CreateVideoTaskResponse
 */
CreateVideoTaskResponse Client::createVideoTask(const CreateVideoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVideoTaskWithOptions(request, runtime);
}

/**
 * @summary Submits an image or video file for invisible watermark embedding and returns a task ID for querying the result.
 *
 * @description ## Request description
 * - **FileUrl** must be a publicly accessible HTTP or HTTPS URL. Files from outside the Chinese mainland are not supported. Only file URLs accessible over the public network in the Chinese mainland are supported. Upload the file to an OSS bucket in a region in the Chinese mainland and use the presigned URL of the file as the input parameter for this operation. References: [How to obtain the URL of a single object or the URLs of multiple objects](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 * - **FileType** must match the actual file type and must be the same during fetch as it was during embedding.
 * - The maximum supported file size is **150 MB**.
 * - The node completion time is approximately equal to the duration of the file. For example, embedding a 10-second video takes about 10 seconds.
 * - If the commit failed, no node record is created and a synchronization fault is returned directly.
 *
 * @param request CreateWatermarkEmbedTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWatermarkEmbedTaskResponse
 */
CreateWatermarkEmbedTaskResponse Client::createWatermarkEmbedTaskWithOptions(const CreateWatermarkEmbedTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasReserved()) {
    query["Reserved"] = request.getReserved();
  }

  if (!!request.hasWatermarkContent()) {
    query["WatermarkContent"] = request.getWatermarkContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWatermarkEmbedTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWatermarkEmbedTaskResponse>();
}

/**
 * @summary Submits an image or video file for invisible watermark embedding and returns a task ID for querying the result.
 *
 * @description ## Request description
 * - **FileUrl** must be a publicly accessible HTTP or HTTPS URL. Files from outside the Chinese mainland are not supported. Only file URLs accessible over the public network in the Chinese mainland are supported. Upload the file to an OSS bucket in a region in the Chinese mainland and use the presigned URL of the file as the input parameter for this operation. References: [How to obtain the URL of a single object or the URLs of multiple objects](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 * - **FileType** must match the actual file type and must be the same during fetch as it was during embedding.
 * - The maximum supported file size is **150 MB**.
 * - The node completion time is approximately equal to the duration of the file. For example, embedding a 10-second video takes about 10 seconds.
 * - If the commit failed, no node record is created and a synchronization fault is returned directly.
 *
 * @param request CreateWatermarkEmbedTaskRequest
 * @return CreateWatermarkEmbedTaskResponse
 */
CreateWatermarkEmbedTaskResponse Client::createWatermarkEmbedTask(const CreateWatermarkEmbedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWatermarkEmbedTaskWithOptions(request, runtime);
}

/**
 * @summary Submits an image or video file to extract an invisible watermark and returns the task ID.
 *
 * @description ## Request description
 * - **FileUrl** must be a publicly accessible HTTP or HTTPS URL. Files from outside the Chinese mainland are not supported. Only URLs accessible over the public network in the Chinese mainland are supported. Upload the file to an OSS bucket in a region in the Chinese mainland and use the presigned URL of the file as the input parameter for this operation. References: [How to obtain the URL of a single object or the URLs of multiple objects](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 * - **FileType must be the same as the one used during embedding**: Make sure that the file type (image, video, or audio) of the file from which you want to fetch the watermark is the same as the file type used when the watermark was embedded.
 * - **File size limit**: The maximum file size is **150 MB**.
 * - **Processing time**: The processing time is approximately equal to the actual playback duration of the file. For example, it takes about 10 seconds to complete the watermark fetch procedure for a 10-second video.
 *
 * @param request CreateWatermarkExtractTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWatermarkExtractTaskResponse
 */
CreateWatermarkExtractTaskResponse Client::createWatermarkExtractTaskWithOptions(const CreateWatermarkExtractTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasReserved()) {
    query["Reserved"] = request.getReserved();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWatermarkExtractTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWatermarkExtractTaskResponse>();
}

/**
 * @summary Submits an image or video file to extract an invisible watermark and returns the task ID.
 *
 * @description ## Request description
 * - **FileUrl** must be a publicly accessible HTTP or HTTPS URL. Files from outside the Chinese mainland are not supported. Only URLs accessible over the public network in the Chinese mainland are supported. Upload the file to an OSS bucket in a region in the Chinese mainland and use the presigned URL of the file as the input parameter for this operation. References: [How to obtain the URL of a single object or the URLs of multiple objects](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 * - **FileType must be the same as the one used during embedding**: Make sure that the file type (image, video, or audio) of the file from which you want to fetch the watermark is the same as the file type used when the watermark was embedded.
 * - **File size limit**: The maximum file size is **150 MB**.
 * - **Processing time**: The processing time is approximately equal to the actual playback duration of the file. For example, it takes about 10 seconds to complete the watermark fetch procedure for a 10-second video.
 *
 * @param request CreateWatermarkExtractTaskRequest
 * @return CreateWatermarkExtractTaskResponse
 */
CreateWatermarkExtractTaskResponse Client::createWatermarkExtractTask(const CreateWatermarkExtractTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWatermarkExtractTaskWithOptions(request, runtime);
}

/**
 * @summary Submits a combined task for invisible watermark embedding and C2PA signing.
 *
 * @description Completes invisible watermark embedding and official C2PA signing in a single call. The service first embeds an invisible watermark into an image, video, or audio file, and then applies an official DigiCert C2PA signature to the result. You only need to upload and download the file once.
 *
 * @param request CreateWatermarkSignTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWatermarkSignTaskResponse
 */
CreateWatermarkSignTaskResponse Client::createWatermarkSignTaskWithOptions(const CreateWatermarkSignTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowOverwrite()) {
    query["AllowOverwrite"] = request.getAllowOverwrite();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomAssertions()) {
    query["CustomAssertions"] = request.getCustomAssertions();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasReserved()) {
    query["Reserved"] = request.getReserved();
  }

  if (!!request.hasSoftwareAgent()) {
    query["SoftwareAgent"] = request.getSoftwareAgent();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTargetBucketName()) {
    query["TargetBucketName"] = request.getTargetBucketName();
  }

  if (!!request.hasTargetBucketRegion()) {
    query["TargetBucketRegion"] = request.getTargetBucketRegion();
  }

  if (!!request.hasTargetObjectKey()) {
    query["TargetObjectKey"] = request.getTargetObjectKey();
  }

  if (!!request.hasWatermarkContent()) {
    query["WatermarkContent"] = request.getWatermarkContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWatermarkSignTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWatermarkSignTaskResponse>();
}

/**
 * @summary Submits a combined task for invisible watermark embedding and C2PA signing.
 *
 * @description Completes invisible watermark embedding and official C2PA signing in a single call. The service first embeds an invisible watermark into an image, video, or audio file, and then applies an official DigiCert C2PA signature to the result. You only need to upload and download the file once.
 *
 * @param request CreateWatermarkSignTaskRequest
 * @return CreateWatermarkSignTaskResponse
 */
CreateWatermarkSignTaskResponse Client::createWatermarkSignTask(const CreateWatermarkSignTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWatermarkSignTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DetectAigcImage is deprecated, please use AIDeepSign::2026-05-11::CreateImageDetectionTask instead.
 *
 * @summary Determines whether an image is AI-generated and returns the detection label and confidence score.
 *
 * @description ## Request description
 * - This operation detects whether a specified image is AI-generated content (AIGC). You can specify the image to be detected by using an image URL or an OSS ObjectKey.
 * - You must specify at least one of ImageUrl and ObjectKey. If both are specified, ObjectKey takes precedence.
 * - When ObjectKey is used, the system verifies whether the ObjectKey belongs to the current caller. Cross-tenant access is not allowed.
 * - This operation is synchronous and suitable for real-time detection of a single image. If you need asynchronous detection or simultaneous credential detection, use the CreateImageDetectionTask operation.
 *
 * @param request DetectAigcImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectAigcImageResponse
 */
DetectAigcImageResponse Client::detectAigcImageWithOptions(const DetectAigcImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectAigcImage"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectAigcImageResponse>();
}

/**
 * @deprecated OpenAPI DetectAigcImage is deprecated, please use AIDeepSign::2026-05-11::CreateImageDetectionTask instead.
 *
 * @summary Determines whether an image is AI-generated and returns the detection label and confidence score.
 *
 * @description ## Request description
 * - This operation detects whether a specified image is AI-generated content (AIGC). You can specify the image to be detected by using an image URL or an OSS ObjectKey.
 * - You must specify at least one of ImageUrl and ObjectKey. If both are specified, ObjectKey takes precedence.
 * - When ObjectKey is used, the system verifies whether the ObjectKey belongs to the current caller. Cross-tenant access is not allowed.
 * - This operation is synchronous and suitable for real-time detection of a single image. If you need asynchronous detection or simultaneous credential detection, use the CreateImageDetectionTask operation.
 *
 * @param request DetectAigcImageRequest
 * @return DetectAigcImageResponse
 */
DetectAigcImageResponse Client::detectAigcImage(const DetectAigcImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectAigcImageWithOptions(request, runtime);
}

/**
 * @summary Retrieves basic information about a specified image, such as the file name, format, size, and resolution.
 *
 * @description ## Description
 * - This operation detects and returns basic information about an image, including but not limited to the file name, image format (such as JPEG/PNG), file size, and resolution.
 * - `ImageUrl` is required and must be a publicly accessible HTTP/HTTPS URL. Currently, only image URLs accessible from the Chinese mainland public network are supported. Upload the image to an Alibaba Cloud OSS bucket in a Chinese mainland region first, and then use the presigned URL of the image as the input parameter for this operation. References: [How do I obtain the URL of one or more objects?](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 *
 * @param request DetectImageBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectImageBasicInfoResponse
 */
DetectImageBasicInfoResponse Client::detectImageBasicInfoWithOptions(const DetectImageBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectImageBasicInfo"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectImageBasicInfoResponse>();
}

/**
 * @summary Retrieves basic information about a specified image, such as the file name, format, size, and resolution.
 *
 * @description ## Description
 * - This operation detects and returns basic information about an image, including but not limited to the file name, image format (such as JPEG/PNG), file size, and resolution.
 * - `ImageUrl` is required and must be a publicly accessible HTTP/HTTPS URL. Currently, only image URLs accessible from the Chinese mainland public network are supported. Upload the image to an Alibaba Cloud OSS bucket in a Chinese mainland region first, and then use the presigned URL of the image as the input parameter for this operation. References: [How do I obtain the URL of one or more objects?](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 *
 * @param request DetectImageBasicInfoRequest
 * @return DetectImageBasicInfoResponse
 */
DetectImageBasicInfoResponse Client::detectImageBasicInfo(const DetectImageBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectImageBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the status and results of a single-file or OSS Bucket batch C2PA signing task.
 *
 * @description ## Request description
 * - This operation queries the status and final results of tasks created by invoking CreateC2paSignTask or CreateC2paBucketSignTask.
 * - You can query signing tasks for images, videos, and various audio formats such as FLAC, M4A, MP3, and WAV.
 * - For BUCKET tasks, intermediate statistics information is not provided when the task is in the PROCESSING, PAUSING, PAUSED, or CANCELING state. Complete statistics information and the report location are returned only after the task enters the SUCCEEDED or CANCELED state.
 * - You must provide a valid TaskId when querying. The ID must be the value returned when the task was created. Standard UUID formats are supported and compatible with legacy decimal task IDs.
 *
 * @param request GetC2paSignResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetC2paSignResultResponse
 */
GetC2paSignResultResponse Client::getC2paSignResultWithOptions(const GetC2paSignResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetC2paSignResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetC2paSignResultResponse>();
}

/**
 * @summary Queries the status and results of a single-file or OSS Bucket batch C2PA signing task.
 *
 * @description ## Request description
 * - This operation queries the status and final results of tasks created by invoking CreateC2paSignTask or CreateC2paBucketSignTask.
 * - You can query signing tasks for images, videos, and various audio formats such as FLAC, M4A, MP3, and WAV.
 * - For BUCKET tasks, intermediate statistics information is not provided when the task is in the PROCESSING, PAUSING, PAUSED, or CANCELING state. Complete statistics information and the report location are returned only after the task enters the SUCCEEDED or CANCELED state.
 * - You must provide a valid TaskId when querying. The ID must be the value returned when the task was created. Standard UUID formats are supported and compatible with legacy decimal task IDs.
 *
 * @param request GetC2paSignResultRequest
 * @return GetC2paSignResultResponse
 */
GetC2paSignResultResponse Client::getC2paSignResult(const GetC2paSignResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getC2paSignResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and result of an image defect detection task, including the abnormality score and reason.
 *
 * @description ## Request description
 * This operation queries the execution status and result of an image defect detection task created by `CreateImageDefectDetectionTask`. Follow these polling conventions:
 * * **Set the polling interval to at least 5 seconds**: When the task is in the `running` state, each call to this operation triggers a real downstream query. Excessively frequent polling only increases system load and does not speed up result retrieval.
 * * **Total timeout is 30 minutes**: If no result is received within 30 minutes after the task is created, the server marks the task as `failed` with the message `poll timeout: no result within 30m0s`. After that, the task no longer initiates new downstream query requests.
 * * After the task reaches the `succeeded` or `failed` desired state, subsequent calls to this operation directly return the stored result without triggering additional downstream processing.
 * Note: The content in the `Result` field may be HTML-escaped JSON data. Unescape it before parsing.
 *
 * @param request GetImageDefectDetectionTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageDefectDetectionTaskResultResponse
 */
GetImageDefectDetectionTaskResultResponse Client::getImageDefectDetectionTaskResultWithOptions(const GetImageDefectDetectionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageDefectDetectionTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageDefectDetectionTaskResultResponse>();
}

/**
 * @summary Queries the status and result of an image defect detection task, including the abnormality score and reason.
 *
 * @description ## Request description
 * This operation queries the execution status and result of an image defect detection task created by `CreateImageDefectDetectionTask`. Follow these polling conventions:
 * * **Set the polling interval to at least 5 seconds**: When the task is in the `running` state, each call to this operation triggers a real downstream query. Excessively frequent polling only increases system load and does not speed up result retrieval.
 * * **Total timeout is 30 minutes**: If no result is received within 30 minutes after the task is created, the server marks the task as `failed` with the message `poll timeout: no result within 30m0s`. After that, the task no longer initiates new downstream query requests.
 * * After the task reaches the `succeeded` or `failed` desired state, subsequent calls to this operation directly return the stored result without triggering additional downstream processing.
 * Note: The content in the `Result` field may be HTML-escaped JSON data. Unescape it before parsing.
 *
 * @param request GetImageDefectDetectionTaskResultRequest
 * @return GetImageDefectDetectionTaskResultResponse
 */
GetImageDefectDetectionTaskResultResponse Client::getImageDefectDetectionTaskResult(const GetImageDefectDetectionTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageDefectDetectionTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and results of an image detection task created by calling CreateImageDetectionTask.
 *
 * @description ## Request description
 * Call this operation to query the execution status and results of a specified image detection task, including AIGC detection labels and tampering detection results. Poll the task at an interval of 2 to 5 seconds until the task status changes to succeeded or failed.
 * ## Precautions
 * * Use a valid TaskId for the query.
 * * If the task is not completed, increase the polling interval to avoid resource waste caused by frequent requests.
 *
 * @param request GetImageDetectionTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageDetectionTaskResultResponse
 */
GetImageDetectionTaskResultResponse Client::getImageDetectionTaskResultWithOptions(const GetImageDetectionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageDetectionTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageDetectionTaskResultResponse>();
}

/**
 * @summary Queries the status and results of an image detection task created by calling CreateImageDetectionTask.
 *
 * @description ## Request description
 * Call this operation to query the execution status and results of a specified image detection task, including AIGC detection labels and tampering detection results. Poll the task at an interval of 2 to 5 seconds until the task status changes to succeeded or failed.
 * ## Precautions
 * * Use a valid TaskId for the query.
 * * If the task is not completed, increase the polling interval to avoid resource waste caused by frequent requests.
 *
 * @param request GetImageDetectionTaskResultRequest
 * @return GetImageDetectionTaskResultResponse
 */
GetImageDetectionTaskResultResponse Client::getImageDetectionTaskResult(const GetImageDetectionTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageDetectionTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and list of abnormal items for an individual income tax screenshot detection task.
 *
 * @description ## Operation description
 * - **Polling recommendation**: Set the polling interval to at least 5 seconds. Polling more frequently while the task is in `running` status does not return results faster.
 * - **Total timeout**: If no result is obtained within 30 minutes after the task is created, the task is marked as `failed` with the Message `poll timeout: no result within 30m0s`.
 * - **Desired state handling**: `succeeded` and `failed` are the final states of the task. The result does not change after the task reaches either state.
 * - **Items is an empty array**: This indicates that no abnormal items are detected. It is not an error.
 * - **Coordinates may be an empty array**: Some abnormalities are image-wide in nature (for example, quality issues affecting the entire image) and cannot be located within a specific bounding box. In this case, `Coordinates` is an empty array, but the abnormal item itself is still valid and should still be presented to the user.
 * - **Stage is an open value set**: Future versions may introduce new `Stage` values. Display unknown values as-is. Do not perform whitelist validation on `Stage` or filter abnormal items based on it.
 * - **quality stage**: A `Stage` value of `quality` indicates that the image quality is too low and the detection result has low confidence. Prompt the user to resubmit a clear original screenshot and run the detection again.
 *
 * @param request GetImageIncomeTaxDetectionTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageIncomeTaxDetectionTaskResultResponse
 */
GetImageIncomeTaxDetectionTaskResultResponse Client::getImageIncomeTaxDetectionTaskResultWithOptions(const GetImageIncomeTaxDetectionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageIncomeTaxDetectionTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageIncomeTaxDetectionTaskResultResponse>();
}

/**
 * @summary Queries the status and list of abnormal items for an individual income tax screenshot detection task.
 *
 * @description ## Operation description
 * - **Polling recommendation**: Set the polling interval to at least 5 seconds. Polling more frequently while the task is in `running` status does not return results faster.
 * - **Total timeout**: If no result is obtained within 30 minutes after the task is created, the task is marked as `failed` with the Message `poll timeout: no result within 30m0s`.
 * - **Desired state handling**: `succeeded` and `failed` are the final states of the task. The result does not change after the task reaches either state.
 * - **Items is an empty array**: This indicates that no abnormal items are detected. It is not an error.
 * - **Coordinates may be an empty array**: Some abnormalities are image-wide in nature (for example, quality issues affecting the entire image) and cannot be located within a specific bounding box. In this case, `Coordinates` is an empty array, but the abnormal item itself is still valid and should still be presented to the user.
 * - **Stage is an open value set**: Future versions may introduce new `Stage` values. Display unknown values as-is. Do not perform whitelist validation on `Stage` or filter abnormal items based on it.
 * - **quality stage**: A `Stage` value of `quality` indicates that the image quality is too low and the detection result has low confidence. Prompt the user to resubmit a clear original screenshot and run the detection again.
 *
 * @param request GetImageIncomeTaxDetectionTaskResultRequest
 * @return GetImageIncomeTaxDetectionTaskResultResponse
 */
GetImageIncomeTaxDetectionTaskResultResponse Client::getImageIncomeTaxDetectionTaskResult(const GetImageIncomeTaxDetectionTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageIncomeTaxDetectionTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and result of an asynchronous image generation task and retrieves the image download URL.
 *
 * @description ## Operation description
 * - Call this operation to query the execution status and result of an asynchronous image generation task created by `CreateImageTask`.
 * - Poll at intervals of 2 to 5 seconds until the task status changes to `succeeded` or `failed`.
 * - The image download URL (Url) returned after the task succeeds is a pre-signed URL that is valid for 1 hour.
 * - To ensure idempotence of the request, set the `ClientToken` parameter.
 *
 * @param request GetImageTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageTaskResultResponse
 */
GetImageTaskResultResponse Client::getImageTaskResultWithOptions(const GetImageTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageTaskResultResponse>();
}

/**
 * @summary Queries the status and result of an asynchronous image generation task and retrieves the image download URL.
 *
 * @description ## Operation description
 * - Call this operation to query the execution status and result of an asynchronous image generation task created by `CreateImageTask`.
 * - Poll at intervals of 2 to 5 seconds until the task status changes to `succeeded` or `failed`.
 * - The image download URL (Url) returned after the task succeeds is a pre-signed URL that is valid for 1 hour.
 * - To ensure idempotence of the request, set the `ClientToken` parameter.
 *
 * @param request GetImageTaskResultRequest
 * @return GetImageTaskResultResponse
 */
GetImageTaskResultResponse Client::getImageTaskResult(const GetImageTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and results of a sensitive information scan task, and returns the details of the sensitive data discovered by the scan.
 *
 * @description ## Request description
 * - Call this operation to query the execution status and results of a sensitive information scan task created by calling `CreateSensitiveScanTask`.
 * - Poll the task at an interval of 3 to 5 seconds until the task status changes to `completed` or `terminated`.
 * - The `ClientToken` parameter is used to ensure the idempotence of the request. It is generated by the client and must be unique across different requests. It supports ASCII characters and can be up to 64 characters in length.
 *
 * @param request GetSensitiveScanResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSensitiveScanResultResponse
 */
GetSensitiveScanResultResponse Client::getSensitiveScanResultWithOptions(const GetSensitiveScanResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSensitiveScanResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSensitiveScanResultResponse>();
}

/**
 * @summary Queries the status and results of a sensitive information scan task, and returns the details of the sensitive data discovered by the scan.
 *
 * @description ## Request description
 * - Call this operation to query the execution status and results of a sensitive information scan task created by calling `CreateSensitiveScanTask`.
 * - Poll the task at an interval of 3 to 5 seconds until the task status changes to `completed` or `terminated`.
 * - The `ClientToken` parameter is used to ensure the idempotence of the request. It is generated by the client and must be unique across different requests. It supports ASCII characters and can be up to 64 characters in length.
 *
 * @param request GetSensitiveScanResultRequest
 * @return GetSensitiveScanResultResponse
 */
GetSensitiveScanResultResponse Client::getSensitiveScanResult(const GetSensitiveScanResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSensitiveScanResultWithOptions(request, runtime);
}

/**
 * @summary Queries the task result of a video generation node.
 *
 * @description ## Operation description
 * - You can call this operation to query the execution status and result of an asynchronous video generation task created by calling `CreateVideoTask`.
 * - Poll the task at an interval of 2 to 5 seconds until the task status changes to `succeeded` or `failed`.
 *
 * @param request GetVideoTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoTaskResultResponse
 */
GetVideoTaskResultResponse Client::getVideoTaskResultWithOptions(const GetVideoTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoTaskResultResponse>();
}

/**
 * @summary Queries the task result of a video generation node.
 *
 * @description ## Operation description
 * - You can call this operation to query the execution status and result of an asynchronous video generation task created by calling `CreateVideoTask`.
 * - Poll the task at an interval of 2 to 5 seconds until the task status changes to `succeeded` or `failed`.
 *
 * @param request GetVideoTaskResultRequest
 * @return GetVideoTaskResultResponse
 */
GetVideoTaskResultResponse Client::getVideoTaskResult(const GetVideoTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and download URL of an invisible watermark embedding task.
 *
 * @description ## Operation description
 * - This operation queries the execution status and result of an invisible watermark embedding task created by `CreateWatermarkEmbedTask`.
 * - Tasks are processed asynchronously on the server side. Call this operation to retrieve the latest status.
 * - **Polling recommendations**: Ensure that the polling interval is at least 5 seconds. For video tasks, the expected completion time is approximately equal to the media duration (about 1x speed). Image tasks are completed within 5 minutes.
 * - **Timeout mechanism**: The total timeout window for video tasks is 10 minutes, and for image tasks is 5 minutes. Tasks that are not completed within this period are marked as failed, and the corresponding error message is returned.
 * - When the task status is `succeeded` or `failed`, the task has reached a desired state, and the result no longer changes.
 *
 * @param request GetWatermarkEmbedTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWatermarkEmbedTaskResultResponse
 */
GetWatermarkEmbedTaskResultResponse Client::getWatermarkEmbedTaskResultWithOptions(const GetWatermarkEmbedTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWatermarkEmbedTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWatermarkEmbedTaskResultResponse>();
}

/**
 * @summary Queries the status and download URL of an invisible watermark embedding task.
 *
 * @description ## Operation description
 * - This operation queries the execution status and result of an invisible watermark embedding task created by `CreateWatermarkEmbedTask`.
 * - Tasks are processed asynchronously on the server side. Call this operation to retrieve the latest status.
 * - **Polling recommendations**: Ensure that the polling interval is at least 5 seconds. For video tasks, the expected completion time is approximately equal to the media duration (about 1x speed). Image tasks are completed within 5 minutes.
 * - **Timeout mechanism**: The total timeout window for video tasks is 10 minutes, and for image tasks is 5 minutes. Tasks that are not completed within this period are marked as failed, and the corresponding error message is returned.
 * - When the task status is `succeeded` or `failed`, the task has reached a desired state, and the result no longer changes.
 *
 * @param request GetWatermarkEmbedTaskResultRequest
 * @return GetWatermarkEmbedTaskResultResponse
 */
GetWatermarkEmbedTaskResultResponse Client::getWatermarkEmbedTaskResult(const GetWatermarkEmbedTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWatermarkEmbedTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status and extraction results of an invisible watermark extraction task.
 *
 * @description ## Request description
 * - **Polling recommendation**: Set the polling interval to at least 5 seconds. The task completion time is approximately equal to the duration of the media file (about 1x speed).
 * - **Timeout handling**: The total timeout window is 10 minutes for video tasks and 5 minutes for image tasks. If a task is not completed within this period, the task status changes to `failed`.
 * - **Final state confirmation**: `succeeded` and `failed` are final states. The results do not change after a task reaches a final state.
 *
 * @param request GetWatermarkExtractTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWatermarkExtractTaskResultResponse
 */
GetWatermarkExtractTaskResultResponse Client::getWatermarkExtractTaskResultWithOptions(const GetWatermarkExtractTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWatermarkExtractTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWatermarkExtractTaskResultResponse>();
}

/**
 * @summary Queries the status and extraction results of an invisible watermark extraction task.
 *
 * @description ## Request description
 * - **Polling recommendation**: Set the polling interval to at least 5 seconds. The task completion time is approximately equal to the duration of the media file (about 1x speed).
 * - **Timeout handling**: The total timeout window is 10 minutes for video tasks and 5 minutes for image tasks. If a task is not completed within this period, the task status changes to `failed`.
 * - **Final state confirmation**: `succeeded` and `failed` are final states. The results do not change after a task reaches a final state.
 *
 * @param request GetWatermarkExtractTaskResultRequest
 * @return GetWatermarkExtractTaskResultResponse
 */
GetWatermarkExtractTaskResultResponse Client::getWatermarkExtractTaskResult(const GetWatermarkExtractTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWatermarkExtractTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the task result of the combined node for invisible watermark embedding and C2PA signing.
 *
 * @description Queries the status and results of a combined task submitted by calling the CreateWatermarkSignTask operation. Returns the current processing stage, such as watermark embedding or C2PA signing, and the URL of the final output.
 *
 * @param request GetWatermarkSignTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWatermarkSignTaskResultResponse
 */
GetWatermarkSignTaskResultResponse Client::getWatermarkSignTaskResultWithOptions(const GetWatermarkSignTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWatermarkSignTaskResult"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWatermarkSignTaskResultResponse>();
}

/**
 * @summary Queries the task result of the combined node for invisible watermark embedding and C2PA signing.
 *
 * @description Queries the status and results of a combined task submitted by calling the CreateWatermarkSignTask operation. Returns the current processing stage, such as watermark embedding or C2PA signing, and the URL of the final output.
 *
 * @param request GetWatermarkSignTaskResultRequest
 * @return GetWatermarkSignTaskResultResponse
 */
GetWatermarkSignTaskResultResponse Client::getWatermarkSignTaskResult(const GetWatermarkSignTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWatermarkSignTaskResultWithOptions(request, runtime);
}

/**
 * @summary Pauses a batch C2PA trusted signing task for a specified OSS bucket.
 *
 * @description ## Operation description
 * - This operation pauses a batch trusted signing parent task for a bucket that is owned and still controllable by the currently authenticated account.
 * - The paused state is persisted to the database and remains effective after a service restart.
 * - If no files have been submitted to the trusted signing service, the task directly enters the `PAUSED` state. If submitted files exist, the task first enters the `PAUSING` state, stops scanning and new submissions, and continues to query the actual results of those files. After all results converge, the task enters the `PAUSED` state.
 * - Pausing does not interrupt an in-progress individual OSS or trusted signing service invoke, nor does it revoke signatures or metering that have already been completed.
 * - Invoking this operation repeatedly on a task that is already in the `PAUSING` or `PAUSED` state is idempotent and succeeds.
 * - Tasks in the `SUCCEEDED`, `FAILED`, `CANCELING`, or `CANCELED` state cannot be paused.
 *
 * @param request PauseC2paBucketSignTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseC2paBucketSignTaskResponse
 */
PauseC2paBucketSignTaskResponse Client::pauseC2paBucketSignTaskWithOptions(const PauseC2paBucketSignTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseC2paBucketSignTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseC2paBucketSignTaskResponse>();
}

/**
 * @summary Pauses a batch C2PA trusted signing task for a specified OSS bucket.
 *
 * @description ## Operation description
 * - This operation pauses a batch trusted signing parent task for a bucket that is owned and still controllable by the currently authenticated account.
 * - The paused state is persisted to the database and remains effective after a service restart.
 * - If no files have been submitted to the trusted signing service, the task directly enters the `PAUSED` state. If submitted files exist, the task first enters the `PAUSING` state, stops scanning and new submissions, and continues to query the actual results of those files. After all results converge, the task enters the `PAUSED` state.
 * - Pausing does not interrupt an in-progress individual OSS or trusted signing service invoke, nor does it revoke signatures or metering that have already been completed.
 * - Invoking this operation repeatedly on a task that is already in the `PAUSING` or `PAUSED` state is idempotent and succeeds.
 * - Tasks in the `SUCCEEDED`, `FAILED`, `CANCELING`, or `CANCELED` state cannot be paused.
 *
 * @param request PauseC2paBucketSignTaskRequest
 * @return PauseC2paBucketSignTaskResponse
 */
PauseC2paBucketSignTaskResponse Client::pauseC2paBucketSignTask(const PauseC2paBucketSignTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseC2paBucketSignTaskWithOptions(request, runtime);
}

/**
 * @summary Resumes a paused or pausing OSS Bucket batch C2PA trusted signing task.
 *
 * @description ## Operation description
 * - This operation resumes a Bucket batch trusted signing parent task owned by the currently authenticated account.
 * - After resumption, the task continues execution from the saved scan cursor and per-file stage. It does not rebuild the object list or resubmit trusted signing service tasks that have already been persisted.
 * - This operation supports resuming from the `PAUSED` or `PAUSING` state. For tasks already in the `PROCESSING` state, repeated calls are idempotent and succeed.
 * - If the task was previously auto-paused due to failures in shared dependencies such as user OSS, internal OSS, or the trusted signing service, the pause error recorded on the parent task is cleared upon resumption. If the dependencies have not yet recovered, the task may enter the `PAUSING` or `PAUSED` state again with a new reason recorded.
 * - Before resuming a task that was paused due to permission issues, restore the OSS permissions of `AliyunServiceRoleForAIDeepSign` for the source prefix and output prefix. Otherwise, the task will be auto-paused again.
 * - Tasks in the `SUCCEEDED`, `FAILED`, `CANCELING`, or `CANCELED` state cannot be resumed.
 *
 * @param request ResumeC2paBucketSignTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeC2paBucketSignTaskResponse
 */
ResumeC2paBucketSignTaskResponse Client::resumeC2paBucketSignTaskWithOptions(const ResumeC2paBucketSignTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeC2paBucketSignTask"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeC2paBucketSignTaskResponse>();
}

/**
 * @summary Resumes a paused or pausing OSS Bucket batch C2PA trusted signing task.
 *
 * @description ## Operation description
 * - This operation resumes a Bucket batch trusted signing parent task owned by the currently authenticated account.
 * - After resumption, the task continues execution from the saved scan cursor and per-file stage. It does not rebuild the object list or resubmit trusted signing service tasks that have already been persisted.
 * - This operation supports resuming from the `PAUSED` or `PAUSING` state. For tasks already in the `PROCESSING` state, repeated calls are idempotent and succeed.
 * - If the task was previously auto-paused due to failures in shared dependencies such as user OSS, internal OSS, or the trusted signing service, the pause error recorded on the parent task is cleared upon resumption. If the dependencies have not yet recovered, the task may enter the `PAUSING` or `PAUSED` state again with a new reason recorded.
 * - Before resuming a task that was paused due to permission issues, restore the OSS permissions of `AliyunServiceRoleForAIDeepSign` for the source prefix and output prefix. Otherwise, the task will be auto-paused again.
 * - Tasks in the `SUCCEEDED`, `FAILED`, `CANCELING`, or `CANCELED` state cannot be resumed.
 *
 * @param request ResumeC2paBucketSignTaskRequest
 * @return ResumeC2paBucketSignTaskResponse
 */
ResumeC2paBucketSignTaskResponse Client::resumeC2paBucketSignTask(const ResumeC2paBucketSignTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeC2paBucketSignTaskWithOptions(request, runtime);
}

/**
 * @summary Signs an image with a basic C2PA signature by using a platform-owned certificate, supports content integrity verification, and returns the download URL of the signed image.
 *
 * @description ## Signature types
 * - **Basic signature**: Signs with a platform-owned certificate and supports content integrity verification.
 * - **Trusted signature**: In addition to integrity verification, the signing certificate chain can be verified through the C2PA official trust list.
 * This operation provides basic signing. For trusted signing, call `CreateC2paSignTask` to create a task and call `GetC2paSignResult` to query the result.
 * ## Request description
 * - `ImageUrl` is required and must be a publicly accessible HTTP/HTTPS URL.
 * - External image URLs are not currently supported. Only image URLs that are publicly accessible within the Chinese mainland are supported. Upload the image to an Alibaba Cloud OSS bucket in a region within the Chinese mainland first, and then use the pre-signed URL of the image as the input parameter of this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - Supported image formats: JPEG and PNG. Unsupported formats return the C2PA_FORMAT_UNSUPPORTED fault.
 *
 * @param request SignUserImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignUserImageResponse
 */
SignUserImageResponse Client::signUserImageWithOptions(const SignUserImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SignUserImage"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SignUserImageResponse>();
}

/**
 * @summary Signs an image with a basic C2PA signature by using a platform-owned certificate, supports content integrity verification, and returns the download URL of the signed image.
 *
 * @description ## Signature types
 * - **Basic signature**: Signs with a platform-owned certificate and supports content integrity verification.
 * - **Trusted signature**: In addition to integrity verification, the signing certificate chain can be verified through the C2PA official trust list.
 * This operation provides basic signing. For trusted signing, call `CreateC2paSignTask` to create a task and call `GetC2paSignResult` to query the result.
 * ## Request description
 * - `ImageUrl` is required and must be a publicly accessible HTTP/HTTPS URL.
 * - External image URLs are not currently supported. Only image URLs that are publicly accessible within the Chinese mainland are supported. Upload the image to an Alibaba Cloud OSS bucket in a region within the Chinese mainland first, and then use the pre-signed URL of the image as the input parameter of this operation. References: [How to obtain the URL of a single file or the URLs of multiple files](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects).
 * - Supported image formats: JPEG and PNG. Unsupported formats return the C2PA_FORMAT_UNSUPPORTED fault.
 *
 * @param request SignUserImageRequest
 * @return SignUserImageResponse
 */
SignUserImageResponse Client::signUserImage(const SignUserImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signUserImageWithOptions(request, runtime);
}

/**
 * @summary Verifies the C2PA signature in an image and returns the content integrity verification status and issuer certificate trust information.
 *
 * @description ## Signature types
 * - **Basic signature**: Uses the platform\\"s own certificate for signing. Supports content integrity verification.
 * - **Trusted signature**: In addition to integrity verification, the signing certificate chain can be verified through the C2PA official trust list.
 * ## Verification result description
 * - Content integrity verification checks whether the image and its signature-protected provenance information remain consistent with the state at the time of signing. It does not indicate that the visual content itself is authentic.
 * - `VerificationState=Valid` indicates that the signature and data hash are valid and content integrity verification has passed. This alone cannot be used to determine that the signature is a trusted signature.
 * - `VerificationState=Trusted` and `IssuerTrusted` present the certificate trust verification results. Whether a signature qualifies as a trusted signature as defined in this topic depends on whether the signing certificate chain can be verified through the C2PA official trust list, not solely on the certificate issuer name.
 * ## Request description
 * - This operation verifies the C2PA (Coalition for Content Provenance and Authenticity) digital signature embedded in a specified image.
 * - `ImageUrl` **does not currently support images from external networks. Only image URLs accessible over the China public network are supported. Upload the image to an Alibaba Cloud OSS bucket in a China region first, and then use the presigned URL of the image as the input parameter for this operation.** References: [How do I obtain the URL of one or more objects?](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 *
 * @param request VerifyImageSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyImageSignatureResponse
 */
VerifyImageSignatureResponse Client::verifyImageSignatureWithOptions(const VerifyImageSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyImageSignature"},
    {"version" , "2026-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyImageSignatureResponse>();
}

/**
 * @summary Verifies the C2PA signature in an image and returns the content integrity verification status and issuer certificate trust information.
 *
 * @description ## Signature types
 * - **Basic signature**: Uses the platform\\"s own certificate for signing. Supports content integrity verification.
 * - **Trusted signature**: In addition to integrity verification, the signing certificate chain can be verified through the C2PA official trust list.
 * ## Verification result description
 * - Content integrity verification checks whether the image and its signature-protected provenance information remain consistent with the state at the time of signing. It does not indicate that the visual content itself is authentic.
 * - `VerificationState=Valid` indicates that the signature and data hash are valid and content integrity verification has passed. This alone cannot be used to determine that the signature is a trusted signature.
 * - `VerificationState=Trusted` and `IssuerTrusted` present the certificate trust verification results. Whether a signature qualifies as a trusted signature as defined in this topic depends on whether the signing certificate chain can be verified through the C2PA official trust list, not solely on the certificate issuer name.
 * ## Request description
 * - This operation verifies the C2PA (Coalition for Content Provenance and Authenticity) digital signature embedded in a specified image.
 * - `ImageUrl` **does not currently support images from external networks. Only image URLs accessible over the China public network are supported. Upload the image to an Alibaba Cloud OSS bucket in a China region first, and then use the presigned URL of the image as the input parameter for this operation.** References: [How do I obtain the URL of one or more objects?](https://www.alibabacloud.com/help/en/oss/user-guide/how-to-obtain-the-url-of-a-single-object-or-the-urls-of-multiple-objects)
 *
 * @param request VerifyImageSignatureRequest
 * @return VerifyImageSignatureResponse
 */
VerifyImageSignatureResponse Client::verifyImageSignature(const VerifyImageSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyImageSignatureWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511