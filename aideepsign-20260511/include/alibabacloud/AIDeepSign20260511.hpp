// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIDEEPSIGN20260511_HPP_
#define ALIBABACLOUD_AIDEEPSIGN20260511_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AIDeepSign20260511Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AIDeepSign20260511.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an asynchronous image detection task that supports AIGC and tampering detection.
       *
       * @description ## Operation description
       * - This operation creates an asynchronous image detection task that supports automatic classification, AIGC detection, and tampering detection.
       * - You must specify at least one of `ImageUrl` and `ObjectKey`. If both are specified, `ObjectKey` takes precedence.
       * - If you set `DetectType` to `auto`, the system automatically determines whether to perform AIGC detection or tampering detection based on the image content.
       *
       * @param request CreateImageDetectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageDetectionTaskResponse
       */
      Models::CreateImageDetectionTaskResponse createImageDetectionTaskWithOptions(const Models::CreateImageDetectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous image detection task that supports AIGC and tampering detection.
       *
       * @description ## Operation description
       * - This operation creates an asynchronous image detection task that supports automatic classification, AIGC detection, and tampering detection.
       * - You must specify at least one of `ImageUrl` and `ObjectKey`. If both are specified, `ObjectKey` takes precedence.
       * - If you set `DetectType` to `auto`, the system automatically determines whether to perform AIGC detection or tampering detection based on the image content.
       *
       * @param request CreateImageDetectionTaskRequest
       * @return CreateImageDetectionTaskResponse
       */
      Models::CreateImageDetectionTaskResponse createImageDetectionTask(const Models::CreateImageDetectionTaskRequest &request);

      /**
       * @summary Generates images based on a provided text description and returns a task ID.
       *
       * @description ## Operation description
       * - This operation creates an AI image generation task. The system generates images based on the positive prompt provided by the user.
       * - You can configure parameters such as negative prompt, model, and image size to optimize the generation results.
       * - By default, generated images are automatically embedded with a C2PA digital signature. You can optionally add a watermark in the lower-right corner.
       * - Set the ClientToken parameter to ensure the idempotence of the request and guarantee uniqueness across different requests.
       * - After the task is created, call the GetImageTaskResult operation with the TaskId to query the generation results.
       *
       * @param request CreateImageTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageTaskResponse
       */
      Models::CreateImageTaskResponse createImageTaskWithOptions(const Models::CreateImageTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates images based on a provided text description and returns a task ID.
       *
       * @description ## Operation description
       * - This operation creates an AI image generation task. The system generates images based on the positive prompt provided by the user.
       * - You can configure parameters such as negative prompt, model, and image size to optimize the generation results.
       * - By default, generated images are automatically embedded with a C2PA digital signature. You can optionally add a watermark in the lower-right corner.
       * - Set the ClientToken parameter to ensure the idempotence of the request and guarantee uniqueness across different requests.
       * - After the task is created, call the GetImageTaskResult operation with the TaskId to query the generation results.
       *
       * @param request CreateImageTaskRequest
       * @return CreateImageTaskResponse
       */
      Models::CreateImageTaskResponse createImageTask(const Models::CreateImageTaskRequest &request);

      /**
       * @summary Creates an image sensitive information scan task and returns the task ID.
       *
       * @description ## Operation description
       * - This operation creates an image sensitive information scan task. The system performs sensitive data identification on the specified image.
       * - You can specify the image to scan by using an image URL or an OSS ObjectKey.
       * - The image size cannot exceed 10 MB.
       * - You must specify at least one of ImageUrl and ObjectKey. If both are specified, ObjectKey takes precedence.
       * - When you use ObjectKey, make sure that the key belongs to the namespace of the current caller. Cross-tenant access is not allowed.
       * - You can use the ClientToken parameter to ensure the idempotence of the request.
       *
       * @param request CreateSensitiveScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSensitiveScanTaskResponse
       */
      Models::CreateSensitiveScanTaskResponse createSensitiveScanTaskWithOptions(const Models::CreateSensitiveScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image sensitive information scan task and returns the task ID.
       *
       * @description ## Operation description
       * - This operation creates an image sensitive information scan task. The system performs sensitive data identification on the specified image.
       * - You can specify the image to scan by using an image URL or an OSS ObjectKey.
       * - The image size cannot exceed 10 MB.
       * - You must specify at least one of ImageUrl and ObjectKey. If both are specified, ObjectKey takes precedence.
       * - When you use ObjectKey, make sure that the key belongs to the namespace of the current caller. Cross-tenant access is not allowed.
       * - You can use the ClientToken parameter to ensure the idempotence of the request.
       *
       * @param request CreateSensitiveScanTaskRequest
       * @return CreateSensitiveScanTaskResponse
       */
      Models::CreateSensitiveScanTaskResponse createSensitiveScanTask(const Models::CreateSensitiveScanTaskRequest &request);

      /**
       * @summary Determines whether an image is AI-generated and returns detection labels and confidence levels.
       *
       * @description ## Operation description
       * - This operation detects whether a specified image is AI-generated content (AIGC). You can specify the image to detect by using an image URL or an OSS ObjectKey.
       * - You must provide at least one of ImageUrl and ObjectKey. If both are provided, ObjectKey takes precedence.
       * - When you use the ObjectKey method, the system verifies whether the ObjectKey belongs to the current caller. Cross-tenant access is not allowed.
       * - This is a synchronous operation suitable for real-time detection of a single image. To perform asynchronous detection or credential detection at the same time, use the CreateImageDetectionTask operation.
       *
       * @param request DetectAigcImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectAigcImageResponse
       */
      Models::DetectAigcImageResponse detectAigcImageWithOptions(const Models::DetectAigcImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Determines whether an image is AI-generated and returns detection labels and confidence levels.
       *
       * @description ## Operation description
       * - This operation detects whether a specified image is AI-generated content (AIGC). You can specify the image to detect by using an image URL or an OSS ObjectKey.
       * - You must provide at least one of ImageUrl and ObjectKey. If both are provided, ObjectKey takes precedence.
       * - When you use the ObjectKey method, the system verifies whether the ObjectKey belongs to the current caller. Cross-tenant access is not allowed.
       * - This is a synchronous operation suitable for real-time detection of a single image. To perform asynchronous detection or credential detection at the same time, use the CreateImageDetectionTask operation.
       *
       * @param request DetectAigcImageRequest
       * @return DetectAigcImageResponse
       */
      Models::DetectAigcImageResponse detectAigcImage(const Models::DetectAigcImageRequest &request);

      /**
       * @summary Retrieves basic information about a specified image, such as the file name, format, size, and resolution.
       *
       * @description ## Description
       * - This operation detects and returns basic information about an image, including but not limited to the file name, image format (such as JPEG or PNG), file size, and resolution.
       * - You can specify the image to detect by providing an image URL or an OSS ObjectKey. If both ImageUrl and ObjectKey are provided, ObjectKey takes precedence.
       * - When using ObjectKey, ensure that the object belongs to the namespace of the current caller. Cross-tenant access is not allowed.
       * - The optional parameter ClientToken ensures the idempotence of the request. Generate a new unique value for each request.
       *
       * @param request DetectImageBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageBasicInfoResponse
       */
      Models::DetectImageBasicInfoResponse detectImageBasicInfoWithOptions(const Models::DetectImageBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves basic information about a specified image, such as the file name, format, size, and resolution.
       *
       * @description ## Description
       * - This operation detects and returns basic information about an image, including but not limited to the file name, image format (such as JPEG or PNG), file size, and resolution.
       * - You can specify the image to detect by providing an image URL or an OSS ObjectKey. If both ImageUrl and ObjectKey are provided, ObjectKey takes precedence.
       * - When using ObjectKey, ensure that the object belongs to the namespace of the current caller. Cross-tenant access is not allowed.
       * - The optional parameter ClientToken ensures the idempotence of the request. Generate a new unique value for each request.
       *
       * @param request DetectImageBasicInfoRequest
       * @return DetectImageBasicInfoResponse
       */
      Models::DetectImageBasicInfoResponse detectImageBasicInfo(const Models::DetectImageBasicInfoRequest &request);

      /**
       * @summary Queries the status and results of an image detection task, including AIGC detection labels and tamper detection results.
       *
       * @description ## Operation description
       * Call this operation to query the execution status and results of an asynchronous detection task created by `CreateImageDetectionTask`. Poll at intervals of 2 to 5 seconds until the task status changes to `succeeded` or `failed`.
       * ### Before you begin
       * - Use a valid `TaskId` for the query.
       * - If the task is not complete, increase the polling interval to avoid unnecessary resource consumption caused by frequent requests.
       *
       * @param request GetImageDetectionTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageDetectionTaskResultResponse
       */
      Models::GetImageDetectionTaskResultResponse getImageDetectionTaskResultWithOptions(const Models::GetImageDetectionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status and results of an image detection task, including AIGC detection labels and tamper detection results.
       *
       * @description ## Operation description
       * Call this operation to query the execution status and results of an asynchronous detection task created by `CreateImageDetectionTask`. Poll at intervals of 2 to 5 seconds until the task status changes to `succeeded` or `failed`.
       * ### Before you begin
       * - Use a valid `TaskId` for the query.
       * - If the task is not complete, increase the polling interval to avoid unnecessary resource consumption caused by frequent requests.
       *
       * @param request GetImageDetectionTaskResultRequest
       * @return GetImageDetectionTaskResultResponse
       */
      Models::GetImageDetectionTaskResultResponse getImageDetectionTaskResult(const Models::GetImageDetectionTaskResultRequest &request);

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
      Models::GetImageTaskResultResponse getImageTaskResultWithOptions(const Models::GetImageTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetImageTaskResultResponse getImageTaskResult(const Models::GetImageTaskResultRequest &request);

      /**
       * @summary Queries the status and result of a sensitive information scan task and returns the details of the sensitive data discovered during the scan.
       *
       * @description ## Operation description
       * - Call this operation to query the execution status and result of a sensitive information scan task created by `CreateSensitiveScanTask`.
       * - Poll at intervals of 3 to 5 seconds until the task status changes to `completed` or `terminated`.
       * - The `ClientToken` parameter ensures the idempotence of the request. It is generated by the client, must be unique across different requests, supports ASCII characters, and cannot exceed 64 characters in length.
       *
       * @param request GetSensitiveScanResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSensitiveScanResultResponse
       */
      Models::GetSensitiveScanResultResponse getSensitiveScanResultWithOptions(const Models::GetSensitiveScanResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status and result of a sensitive information scan task and returns the details of the sensitive data discovered during the scan.
       *
       * @description ## Operation description
       * - Call this operation to query the execution status and result of a sensitive information scan task created by `CreateSensitiveScanTask`.
       * - Poll at intervals of 3 to 5 seconds until the task status changes to `completed` or `terminated`.
       * - The `ClientToken` parameter ensures the idempotence of the request. It is generated by the client, must be unique across different requests, supports ASCII characters, and cannot exceed 64 characters in length.
       *
       * @param request GetSensitiveScanResultRequest
       * @return GetSensitiveScanResultResponse
       */
      Models::GetSensitiveScanResultResponse getSensitiveScanResult(const Models::GetSensitiveScanResultRequest &request);

      /**
       * @summary Embeds a C2PA digital signature into a user-uploaded image and returns the download URL.
       *
       * @description ## Operation description
       * - Specify at least one of `ImageUrl` and `ObjectKey`. If both are specified, `ObjectKey` takes precedence.
       * - When you use `ObjectKey`, the system verifies that the `ObjectKey` belongs to the current caller. Cross-tenant access is not allowed.
       * - Supported image formats are JPEG and PNG. Unsupported formats return the `C2PA_FORMAT_UNSUPPORTED` error.
       * - If the original image already contains a C2PA signature, the system retains the original signature as an ingredient and appends a new signature.
       * - Use the `ClientToken` parameter to ensure idempotence. Make sure the value is unique across different requests and does not exceed 64 characters.
       *
       * @param request SignUserImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignUserImageResponse
       */
      Models::SignUserImageResponse signUserImageWithOptions(const Models::SignUserImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Embeds a C2PA digital signature into a user-uploaded image and returns the download URL.
       *
       * @description ## Operation description
       * - Specify at least one of `ImageUrl` and `ObjectKey`. If both are specified, `ObjectKey` takes precedence.
       * - When you use `ObjectKey`, the system verifies that the `ObjectKey` belongs to the current caller. Cross-tenant access is not allowed.
       * - Supported image formats are JPEG and PNG. Unsupported formats return the `C2PA_FORMAT_UNSUPPORTED` error.
       * - If the original image already contains a C2PA signature, the system retains the original signature as an ingredient and appends a new signature.
       * - Use the `ClientToken` parameter to ensure idempotence. Make sure the value is unique across different requests and does not exceed 64 characters.
       *
       * @param request SignUserImageRequest
       * @return SignUserImageResponse
       */
      Models::SignUserImageResponse signUserImage(const Models::SignUserImageRequest &request);

      /**
       * @summary Verifies the C2PA digital signature in an image and returns the signature status and issuer information.
       *
       * @description ## Operation description
       * - This operation verifies the C2PA digital signature embedded in an image and returns the signature verification status, issuer trustworthiness, issuer information, and the complete content credentials manifest.
       * - You can specify the image to verify by using an image URL or an OSS ObjectKey. If both ImageUrl and ObjectKey are provided, ObjectKey takes precedence.
       * - When you use the ObjectKey method, the system verifies whether the ObjectKey belongs to the current caller. Cross-tenant access is not allowed.
       * - To ensure request idempotency, provide the ClientToken parameter. Ensure that the value is unique across different requests and does not exceed 64 characters.
       *
       * @param request VerifyImageSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyImageSignatureResponse
       */
      Models::VerifyImageSignatureResponse verifyImageSignatureWithOptions(const Models::VerifyImageSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the C2PA digital signature in an image and returns the signature status and issuer information.
       *
       * @description ## Operation description
       * - This operation verifies the C2PA digital signature embedded in an image and returns the signature verification status, issuer trustworthiness, issuer information, and the complete content credentials manifest.
       * - You can specify the image to verify by using an image URL or an OSS ObjectKey. If both ImageUrl and ObjectKey are provided, ObjectKey takes precedence.
       * - When you use the ObjectKey method, the system verifies whether the ObjectKey belongs to the current caller. Cross-tenant access is not allowed.
       * - To ensure request idempotency, provide the ClientToken parameter. Ensure that the value is unique across different requests and does not exceed 64 characters.
       *
       * @param request VerifyImageSignatureRequest
       * @return VerifyImageSignatureResponse
       */
      Models::VerifyImageSignatureResponse verifyImageSignature(const Models::VerifyImageSignatureRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
