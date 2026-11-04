// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDAUTH20190307_HPP_
#define ALIBABACLOUD_CLOUDAUTH20190307_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20190307Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Cloudauth20190307.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Detects AI-generated images and outputs a detection identifier.
       *
       * @param request AIGCFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AIGCFaceVerifyResponse
       */
      Models::AIGCFaceVerifyResponse aIGCFaceVerifyWithOptions(const Models::AIGCFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects AI-generated images and outputs a detection identifier.
       *
       * @param request AIGCFaceVerifyRequest
       * @return AIGCFaceVerifyResponse
       */
      Models::AIGCFaceVerifyResponse aIGCFaceVerify(const Models::AIGCFaceVerifyRequest &request);

      /**
       * @summary The bank card element verification API, including two-element, three-element, and four-element verification.
       *
       * @description Bank card consistency verification, including two-element verification (name and bank card number), three-element verification (name, ID card number, and bank card number), and four-element verification (name, ID card number, mobile phone number, and bank card number).
       * - Service endpoints:
       *   - China (Beijing) region: cloudauth.cn-beijing.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-beijing.aliyuncs.com (IPv6).
       *   - China (Shanghai) region: cloudauth.cn-shanghai.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-shanghai.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request BankMetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BankMetaVerifyResponse
       */
      Models::BankMetaVerifyResponse bankMetaVerifyWithOptions(const Models::BankMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The bank card element verification API, including two-element, three-element, and four-element verification.
       *
       * @description Bank card consistency verification, including two-element verification (name and bank card number), three-element verification (name, ID card number, and bank card number), and four-element verification (name, ID card number, mobile phone number, and bank card number).
       * - Service endpoints:
       *   - China (Beijing) region: cloudauth.cn-beijing.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-beijing.aliyuncs.com (IPv6).
       *   - China (Shanghai) region: cloudauth.cn-shanghai.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-shanghai.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request BankMetaVerifyRequest
       * @return BankMetaVerifyResponse
       */
      Models::BankMetaVerifyResponse bankMetaVerify(const Models::BankMetaVerifyRequest &request);

      /**
       * @summary Performs financial-grade face comparison through a server-side API.
       *
       * @description - API operation: CompareFaceVerify.
       * - Endpoint: cloudauth.aliyuncs.com.
       * - Request methods: HTTPS POST and GET.
       * - Operation description: Implements ID Verification through server-side integration.
       * #### Requirements for uploaded photos
       * When you perform face comparison, upload two face photos that meet all the following conditions.
       * - The photos must be recent photos or recent photos from the base library. The faces must be complete, clear, and unobstructed, with natural expressions and facing the camera directly.
       * - The photos must be clear and properly exposed. The faces must not be too dark, too bright, or have halos. The angle must not deviate significantly.
       * - The resolution must not exceed 1920×1080 and must be at least 640×480. We recommend that you scale the short side to 720 pixels and use a compression ratio greater than 0.9.
       * - Photo size: less than 1 MB.
       * - Photos rotated by 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
       *
       * @param request CompareFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareFaceVerifyResponse
       */
      Models::CompareFaceVerifyResponse compareFaceVerifyWithOptions(const Models::CompareFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs financial-grade face comparison through a server-side API.
       *
       * @description - API operation: CompareFaceVerify.
       * - Endpoint: cloudauth.aliyuncs.com.
       * - Request methods: HTTPS POST and GET.
       * - Operation description: Implements ID Verification through server-side integration.
       * #### Requirements for uploaded photos
       * When you perform face comparison, upload two face photos that meet all the following conditions.
       * - The photos must be recent photos or recent photos from the base library. The faces must be complete, clear, and unobstructed, with natural expressions and facing the camera directly.
       * - The photos must be clear and properly exposed. The faces must not be too dark, too bright, or have halos. The angle must not deviate significantly.
       * - The resolution must not exceed 1920×1080 and must be at least 640×480. We recommend that you scale the short side to 720 pixels and use a compression ratio greater than 0.9.
       * - Photo size: less than 1 MB.
       * - Photos rotated by 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
       *
       * @param request CompareFaceVerifyRequest
       * @return CompareFaceVerifyResponse
       */
      Models::CompareFaceVerifyResponse compareFaceVerify(const Models::CompareFaceVerifyRequest &request);

      /**
       * @summary Performs face comparison.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       * API description: Compares two specified face images and returns the similarity score of the faces in the two images.
       * - At least one of the specified images must be a face photo (FacePic).
       * - If an image contains multiple faces, the algorithm automatically selects the largest face in the image.
       * - If no face is detected in one of the two images, the system returns a "No face detected" error message.
       * When you pass images, you must upload the HTTP URL or Base64 encoding of the image.
       * - HTTP URL: A publicly accessible HTTP URL. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 encoding: A Base64-encoded image in the format of `base64://<Base64 string of the image>`.
       * Image limits.
       * - The relative path or absolute path of local images is not supported.
       * - The size of a single image must be less than 2 MB to prevent algorithm pull timeouts.
       * - The body of a single request is limited to 8 MB. Make sure that the total size of all images and other information in the request does not exceed this limit.
       * - When you use Base64 to pass images, the request method must be POST. You must remove the header description from the Base64 character string, such as the data URI prefix.
       *
       * @param request CompareFacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareFacesResponse
       */
      Models::CompareFacesResponse compareFacesWithOptions(const Models::CompareFacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs face comparison.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       * API description: Compares two specified face images and returns the similarity score of the faces in the two images.
       * - At least one of the specified images must be a face photo (FacePic).
       * - If an image contains multiple faces, the algorithm automatically selects the largest face in the image.
       * - If no face is detected in one of the two images, the system returns a "No face detected" error message.
       * When you pass images, you must upload the HTTP URL or Base64 encoding of the image.
       * - HTTP URL: A publicly accessible HTTP URL. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 encoding: A Base64-encoded image in the format of `base64://<Base64 string of the image>`.
       * Image limits.
       * - The relative path or absolute path of local images is not supported.
       * - The size of a single image must be less than 2 MB to prevent algorithm pull timeouts.
       * - The body of a single request is limited to 8 MB. Make sure that the total size of all images and other information in the request does not exceed this limit.
       * - When you use Base64 to pass images, the request method must be POST. You must remove the header description from the Base64 character string, such as the data URI prefix.
       *
       * @param request CompareFacesRequest
       * @return CompareFacesResponse
       */
      Models::CompareFacesResponse compareFaces(const Models::CompareFacesRequest &request);

      /**
       * @summary Submits authentication materials for verification and comparison, and synchronously returns the authentication result.
       *
       * @description - API operation: ContrastFaceVerify.
       * - Endpoint: cloudauth.aliyuncs.com.
       * - Request methods: HTTPS POST and GET.
       * - Operation description: The API operation used to implement ID Verification through server-side integration.
       * #### Image format requirements
       * When you perform ID Verification, make sure that the uploaded image meets all the following requirements:
       * - The photo is recent, the face is complete, clear, and unobstructed, the expression is natural, and the face is directly facing the camera.
       * - The photo is clear and properly exposed. The face is not too dark, too bright, or surrounded by halos. The angle does not deviate significantly.
       * - The resolution does not exceed 1920×1080 and is at least 640×480. We recommend that you scale the short side to 720 pixels and set the compression ratio to greater than 0.9.
       * - The photo size is less than 1 MB.
       * - Photos rotated by 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
       *
       * @param request ContrastFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContrastFaceVerifyResponse
       */
      Models::ContrastFaceVerifyResponse contrastFaceVerifyWithOptions(const Models::ContrastFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits authentication materials for verification and comparison, and synchronously returns the authentication result.
       *
       * @description - API operation: ContrastFaceVerify.
       * - Endpoint: cloudauth.aliyuncs.com.
       * - Request methods: HTTPS POST and GET.
       * - Operation description: The API operation used to implement ID Verification through server-side integration.
       * #### Image format requirements
       * When you perform ID Verification, make sure that the uploaded image meets all the following requirements:
       * - The photo is recent, the face is complete, clear, and unobstructed, the expression is natural, and the face is directly facing the camera.
       * - The photo is clear and properly exposed. The face is not too dark, too bright, or surrounded by halos. The angle does not deviate significantly.
       * - The resolution does not exceed 1920×1080 and is at least 640×480. We recommend that you scale the short side to 720 pixels and set the compression ratio to greater than 0.9.
       * - The photo size is less than 1 MB.
       * - Photos rotated by 90, 180, and 270 degrees are supported. If multiple faces are detected, the largest face is selected.
       *
       * @param request ContrastFaceVerifyRequest
       * @return ContrastFaceVerifyResponse
       */
      Models::ContrastFaceVerifyResponse contrastFaceVerify(const Models::ContrastFaceVerifyRequest &request);

      Models::ContrastFaceVerifyResponse contrastFaceVerifyAdvance(const Models::ContrastFaceVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network access credential.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request CreateAntCloudAuthSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAntCloudAuthSceneResponse
       */
      Models::CreateAntCloudAuthSceneResponse createAntCloudAuthSceneWithOptions(const Models::CreateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network access credential.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request CreateAntCloudAuthSceneRequest
       * @return CreateAntCloudAuthSceneResponse
       */
      Models::CreateAntCloudAuthSceneResponse createAntCloudAuthScene(const Models::CreateAntCloudAuthSceneRequest &request);

      /**
       * @summary Obtains an authorization key for activating the offline facial recognition SDK.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request CreateAuthKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthKeyResponse
       */
      Models::CreateAuthKeyResponse createAuthKeyWithOptions(const Models::CreateAuthKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an authorization key for activating the offline facial recognition SDK.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request CreateAuthKeyRequest
       * @return CreateAuthKeyResponse
       */
      Models::CreateAuthKeyResponse createAuthKey(const Models::CreateAuthKeyRequest &request);

      /**
       * @summary Creates an authentication scenario for enhanced ID Verification.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization code is valid for 30 minutes and cannot be reused. Obtain a new authorization code before each activation.
       *
       * @param request CreateCloudauthstSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudauthstSceneResponse
       */
      Models::CreateCloudauthstSceneResponse createCloudauthstSceneWithOptions(const Models::CreateCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an authentication scenario for enhanced ID Verification.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization code is valid for 30 minutes and cannot be reused. Obtain a new authorization code before each activation.
       *
       * @param request CreateCloudauthstSceneRequest
       * @return CreateCloudauthstSceneResponse
       */
      Models::CreateCloudauthstSceneResponse createCloudauthstScene(const Models::CreateCloudauthstSceneRequest &request);

      /**
       * @summary Creates an intent authentication configuration.
       *
       * @description Request method: HTTPS POST.
       * Request endpoint: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request CreateSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSceneConfigResponse
       */
      Models::CreateSceneConfigResponse createSceneConfigWithOptions(const Models::CreateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intent authentication configuration.
       *
       * @description Request method: HTTPS POST.
       * Request endpoint: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request CreateSceneConfigRequest
       * @return CreateSceneConfigResponse
       */
      Models::CreateSceneConfigResponse createSceneConfig(const Models::CreateSceneConfigRequest &request);

      /**
       * @summary Creates an ID Verification scenario configuration. This is equivalent to creating a verification scenario in the console.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request CreateVerifySettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVerifySettingResponse
       */
      Models::CreateVerifySettingResponse createVerifySettingWithOptions(const Models::CreateVerifySettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ID Verification scenario configuration. This is equivalent to creating a verification scenario in the console.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request CreateVerifySettingRequest
       * @return CreateVerifySettingResponse
       */
      Models::CreateVerifySettingResponse createVerifySetting(const Models::CreateVerifySettingRequest &request);

      /**
       * @summary Creates a whitelist for ID Verification.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request CreateWhitelistSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWhitelistSettingResponse
       */
      Models::CreateWhitelistSettingResponse createWhitelistSettingWithOptions(const Models::CreateWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a whitelist for ID Verification.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request CreateWhitelistSettingRequest
       * @return CreateWhitelistSettingResponse
       */
      Models::CreateWhitelistSettingResponse createWhitelistSetting(const Models::CreateWhitelistSettingRequest &request);

      /**
       * @summary Detects image tampering, quality (clarity), and similar images by using the API operation of the product image tampering detection service.
       *
       * @description Submits e-commerce product images to detect tampering, quality (clarity), and similar images, and returns risk tags and risk scores.
       *
       * @param request CredentialProductVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialProductVerifyV2Response
       */
      Models::CredentialProductVerifyV2Response credentialProductVerifyV2WithOptions(const Models::CredentialProductVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects image tampering, quality (clarity), and similar images by using the API operation of the product image tampering detection service.
       *
       * @description Submits e-commerce product images to detect tampering, quality (clarity), and similar images, and returns risk tags and risk scores.
       *
       * @param request CredentialProductVerifyV2Request
       * @return CredentialProductVerifyV2Response
       */
      Models::CredentialProductVerifyV2Response credentialProductVerifyV2(const Models::CredentialProductVerifyV2Request &request);

      Models::CredentialProductVerifyV2Response credentialProductVerifyV2Advance(const Models::CredentialProductVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies credentials.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param tmpReq CredentialVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyResponse
       */
      Models::CredentialVerifyResponse credentialVerifyWithOptions(const Models::CredentialVerifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies credentials.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request CredentialVerifyRequest
       * @return CredentialVerifyResponse
       */
      Models::CredentialVerifyResponse credentialVerify(const Models::CredentialVerifyRequest &request);

      /**
       * @summary Verifies credentials.
       *
       * @description Submits credential image information to detect image tampering and forgery and perform image semantic analysis, and returns the risk detection results.
       *
       * @param tmpReq CredentialVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyV2Response
       */
      Models::CredentialVerifyV2Response credentialVerifyV2WithOptions(const Models::CredentialVerifyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies credentials.
       *
       * @description Submits credential image information to detect image tampering and forgery and perform image semantic analysis, and returns the risk detection results.
       *
       * @param request CredentialVerifyV2Request
       * @return CredentialVerifyV2Response
       */
      Models::CredentialVerifyV2Response credentialVerifyV2(const Models::CredentialVerifyV2Request &request);

      Models::CredentialVerifyV2Response credentialVerifyV2Advance(const Models::CredentialVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects deepfake risks in facial images by using algorithms, covering risk scenarios such as AI-generated content (AIGC) faces, deepfake face swaps, template faces, and recaptured faces, and outputs risk tags and confidence levels.
       *
       * @description > The facial deepfake detection API is currently in the free public preview phase. The free public preview ends at 23:59:59 on August 30, 2024. During the public preview, the queries per second (QPS) cannot exceed 3.
       * - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request DeepfakeDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeDetectResponse
       */
      Models::DeepfakeDetectResponse deepfakeDetectWithOptions(const Models::DeepfakeDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects deepfake risks in facial images by using algorithms, covering risk scenarios such as AI-generated content (AIGC) faces, deepfake face swaps, template faces, and recaptured faces, and outputs risk tags and confidence levels.
       *
       * @description > The facial deepfake detection API is currently in the free public preview phase. The free public preview ends at 23:59:59 on August 30, 2024. During the public preview, the queries per second (QPS) cannot exceed 3.
       * - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request DeepfakeDetectRequest
       * @return DeepfakeDetectResponse
       */
      Models::DeepfakeDetectResponse deepfakeDetect(const Models::DeepfakeDetectRequest &request);

      /**
       * @summary Deletes all custom throttling policies.
       *
       * @description Request method: You can send requests by using the HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DeleteAllCustomizeFlowStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllCustomizeFlowStrategyResponse
       */
      Models::DeleteAllCustomizeFlowStrategyResponse deleteAllCustomizeFlowStrategyWithOptions(const Models::DeleteAllCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all custom throttling policies.
       *
       * @description Request method: You can send requests by using the HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DeleteAllCustomizeFlowStrategyRequest
       * @return DeleteAllCustomizeFlowStrategyResponse
       */
      Models::DeleteAllCustomizeFlowStrategyResponse deleteAllCustomizeFlowStrategy(const Models::DeleteAllCustomizeFlowStrategyRequest &request);

      /**
       * @summary Deletes a China Finance Verification scene.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DeleteAntCloudAuthSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAntCloudAuthSceneResponse
       */
      Models::DeleteAntCloudAuthSceneResponse deleteAntCloudAuthSceneWithOptions(const Models::DeleteAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a China Finance Verification scene.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DeleteAntCloudAuthSceneRequest
       * @return DeleteAntCloudAuthSceneResponse
       */
      Models::DeleteAntCloudAuthSceneResponse deleteAntCloudAuthScene(const Models::DeleteAntCloudAuthSceneRequest &request);

      /**
       * @summary Deletes a blacklist rule.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request DeleteBlackListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBlackListStrategyResponse
       */
      Models::DeleteBlackListStrategyResponse deleteBlackListStrategyWithOptions(const Models::DeleteBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a blacklist rule.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request DeleteBlackListStrategyRequest
       * @return DeleteBlackListStrategyResponse
       */
      Models::DeleteBlackListStrategyResponse deleteBlackListStrategy(const Models::DeleteBlackListStrategyRequest &request);

      /**
       * @summary Delete a specified authentication scene for Enhanced Real-person Identity Verification
       *
       * @description Request method: Supports sending requests using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. We recommend that you obtain a new key before each activation.
       *
       * @param request DeleteCloudauthstSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudauthstSceneResponse
       */
      Models::DeleteCloudauthstSceneResponse deleteCloudauthstSceneWithOptions(const Models::DeleteCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a specified authentication scene for Enhanced Real-person Identity Verification
       *
       * @description Request method: Supports sending requests using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. We recommend that you obtain a new key before each activation.
       *
       * @param request DeleteCloudauthstSceneRequest
       * @return DeleteCloudauthstSceneResponse
       */
      Models::DeleteCloudauthstSceneResponse deleteCloudauthstScene(const Models::DeleteCloudauthstSceneRequest &request);

      /**
       * @summary Deletes the stability alert rule.
       *
       * @description Request method: You can send requests by using the HTTPS POST method.
       * Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request DeleteControlStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteControlStrategyResponse
       */
      Models::DeleteControlStrategyResponse deleteControlStrategyWithOptions(const Models::DeleteControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the stability alert rule.
       *
       * @description Request method: You can send requests by using the HTTPS POST method.
       * Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request DeleteControlStrategyRequest
       * @return DeleteControlStrategyResponse
       */
      Models::DeleteControlStrategyResponse deleteControlStrategy(const Models::DeleteControlStrategyRequest &request);

      /**
       * @summary Deletes a custom rate limiting policy.
       *
       * @description Request method: You can send requests by using the HTTPS POST and GET methods.
       * > An authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DeleteCustomizeFlowStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizeFlowStrategyResponse
       */
      Models::DeleteCustomizeFlowStrategyResponse deleteCustomizeFlowStrategyWithOptions(const Models::DeleteCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom rate limiting policy.
       *
       * @description Request method: You can send requests by using the HTTPS POST and GET methods.
       * > An authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DeleteCustomizeFlowStrategyRequest
       * @return DeleteCustomizeFlowStrategyResponse
       */
      Models::DeleteCustomizeFlowStrategyResponse deleteCustomizeFlowStrategy(const Models::DeleteCustomizeFlowStrategyRequest &request);

      /**
       * @summary Deletes sensitive data for financial-grade services.
       *
       * @description Deletes all fields related to personal information in the request, such as the name, ID card number, mobile phone number, IP address, images, videos, and device information.
       *
       * @param request DeleteFaceVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceVerifyResultResponse
       */
      Models::DeleteFaceVerifyResultResponse deleteFaceVerifyResultWithOptions(const Models::DeleteFaceVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes sensitive data for financial-grade services.
       *
       * @description Deletes all fields related to personal information in the request, such as the name, ID card number, mobile phone number, IP address, images, videos, and device information.
       *
       * @param request DeleteFaceVerifyResultRequest
       * @return DeleteFaceVerifyResultResponse
       */
      Models::DeleteFaceVerifyResultResponse deleteFaceVerifyResult(const Models::DeleteFaceVerifyResultRequest &request);

      /**
       * @summary Deletes the scenario configuration.
       *
       * @description - Request method: Supports HTTPS POST and GET methods.
       * - Endpoint: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DeleteSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSceneConfigResponse
       */
      Models::DeleteSceneConfigResponse deleteSceneConfigWithOptions(const Models::DeleteSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the scenario configuration.
       *
       * @description - Request method: Supports HTTPS POST and GET methods.
       * - Endpoint: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DeleteSceneConfigRequest
       * @return DeleteSceneConfigResponse
       */
      Models::DeleteSceneConfigResponse deleteSceneConfig(const Models::DeleteSceneConfigRequest &request);

      /**
       * @summary Deletes the version of a specified cluster.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request DeleteWhitelistSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWhitelistSettingResponse
       */
      Models::DeleteWhitelistSettingResponse deleteWhitelistSettingWithOptions(const Models::DeleteWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the version of a specified cluster.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request DeleteWhitelistSettingRequest
       * @return DeleteWhitelistSettingResponse
       */
      Models::DeleteWhitelistSettingResponse deleteWhitelistSetting(const Models::DeleteWhitelistSettingRequest &request);

      /**
       * @summary Queries the activation status of different ID Verification product plans.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAntAndCloudAuthUserStatusResponse
       */
      Models::DescribeAntAndCloudAuthUserStatusResponse describeAntAndCloudAuthUserStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status of different ID Verification product plans.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @return DescribeAntAndCloudAuthUserStatusResponse
       */
      Models::DescribeAntAndCloudAuthUserStatusResponse describeAntAndCloudAuthUserStatus();

      /**
       * @summary Retrieves the OCR result.
       *
       * @param request DescribeAuthVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthVerifyResponse
       */
      Models::DescribeAuthVerifyResponse describeAuthVerifyWithOptions(const Models::DescribeAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OCR result.
       *
       * @param request DescribeAuthVerifyRequest
       * @return DescribeAuthVerifyResponse
       */
      Models::DescribeAuthVerifyResponse describeAuthVerify(const Models::DescribeAuthVerifyRequest &request);

      /**
       * @summary Retrieves the authentication result of image element verification.
       *
       * @description After you receive a callback notification, you can call this operation on your server to retrieve the authentication status and materials.
       *
       * @param request DescribeCardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCardVerifyResponse
       */
      Models::DescribeCardVerifyResponse describeCardVerifyWithOptions(const Models::DescribeCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the authentication result of image element verification.
       *
       * @description After you receive a callback notification, you can call this operation on your server to retrieve the authentication status and materials.
       *
       * @param request DescribeCardVerifyRequest
       * @return DescribeCardVerifyResponse
       */
      Models::DescribeCardVerifyResponse describeCardVerify(const Models::DescribeCardVerifyRequest &request);

      /**
       * @summary Queries the verification scenarios of Enhanced ID Verification.
       *
       * @description Request method: You can send requests by using the HTTPS POST or GET method.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DescribeCloudauthstSceneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudauthstSceneListResponse
       */
      Models::DescribeCloudauthstSceneListResponse describeCloudauthstSceneListWithOptions(const Models::DescribeCloudauthstSceneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the verification scenarios of Enhanced ID Verification.
       *
       * @description Request method: You can send requests by using the HTTPS POST or GET method.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DescribeCloudauthstSceneListRequest
       * @return DescribeCloudauthstSceneListResponse
       */
      Models::DescribeCloudauthstSceneListResponse describeCloudauthstSceneList(const Models::DescribeCloudauthstSceneListRequest &request);

      /**
       * @summary Such as authorization validity period, custom business identifiers defined by the integrating party, and device IDs.
       *
       * @description Request method: supports sending requests using HTTPS POST and GET methods.
       *
       * @param request DescribeDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfoWithOptions(const Models::DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Such as authorization validity period, custom business identifiers defined by the integrating party, and device IDs.
       *
       * @description Request method: supports sending requests using HTTPS POST and GET methods.
       *
       * @param request DescribeDeviceInfoRequest
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfo(const Models::DescribeDeviceInfoRequest &request);

      /**
       * @summary Provides the financial-grade Face Guard service.
       *
       * @param request DescribeFaceGuardRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaceGuardRiskResponse
       */
      Models::DescribeFaceGuardRiskResponse describeFaceGuardRiskWithOptions(const Models::DescribeFaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the financial-grade Face Guard service.
       *
       * @param request DescribeFaceGuardRiskRequest
       * @return DescribeFaceGuardRiskResponse
       */
      Models::DescribeFaceGuardRiskResponse describeFaceGuardRisk(const Models::DescribeFaceGuardRiskRequest &request);

      /**
       * @summary Retrieves the verification status and verification materials after the China-based mobile client receives a callback.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaceVerifyResponse
       */
      Models::DescribeFaceVerifyResponse describeFaceVerifyWithOptions(const Models::DescribeFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the verification status and verification materials after the China-based mobile client receives a callback.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeFaceVerifyRequest
       * @return DescribeFaceVerifyResponse
       */
      Models::DescribeFaceVerifyResponse describeFaceVerify(const Models::DescribeFaceVerifyRequest &request);

      /**
       * @summary Queries export tasks for information verification in a paged manner.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       *
       * @param request DescribeInfoCheckExportRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInfoCheckExportRecordResponse
       */
      Models::DescribeInfoCheckExportRecordResponse describeInfoCheckExportRecordWithOptions(const Models::DescribeInfoCheckExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries export tasks for information verification in a paged manner.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       *
       * @param request DescribeInfoCheckExportRecordRequest
       * @return DescribeInfoCheckExportRecordResponse
       */
      Models::DescribeInfoCheckExportRecordResponse describeInfoCheckExportRecord(const Models::DescribeInfoCheckExportRecordRequest &request);

      /**
       * @summary Queries the list of financial-grade authentication scenarios.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DescribeListAntCloudAuthScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListAntCloudAuthScenesResponse
       */
      Models::DescribeListAntCloudAuthScenesResponse describeListAntCloudAuthScenesWithOptions(const Models::DescribeListAntCloudAuthScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of financial-grade authentication scenarios.
       *
       * @description Request method: Supports sending requests by using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. Obtain a new key before each activation.
       *
       * @param request DescribeListAntCloudAuthScenesRequest
       * @return DescribeListAntCloudAuthScenesResponse
       */
      Models::DescribeListAntCloudAuthScenesResponse describeListAntCloudAuthScenes(const Models::DescribeListAntCloudAuthScenesRequest &request);

      /**
       * @summary Queries the list of facial recognition data.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListFaceVerifyDataResponse
       */
      Models::DescribeListFaceVerifyDataResponse describeListFaceVerifyDataWithOptions(const Models::DescribeListFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of facial recognition data.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyDataRequest
       * @return DescribeListFaceVerifyDataResponse
       */
      Models::DescribeListFaceVerifyDataResponse describeListFaceVerifyData(const Models::DescribeListFaceVerifyDataRequest &request);

      /**
       * @summary Retrieves facial recognition authentication records (legacy).
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListFaceVerifyInfosResponse
       */
      Models::DescribeListFaceVerifyInfosResponse describeListFaceVerifyInfosWithOptions(const Models::DescribeListFaceVerifyInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves facial recognition authentication records (legacy).
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyInfosRequest
       * @return DescribeListFaceVerifyInfosResponse
       */
      Models::DescribeListFaceVerifyInfosResponse describeListFaceVerifyInfos(const Models::DescribeListFaceVerifyInfosRequest &request);

      /**
       * @summary Queries information verification details by paging.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeMetaSearchPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaSearchPageListResponse
       */
      Models::DescribeMetaSearchPageListResponse describeMetaSearchPageListWithOptions(const Models::DescribeMetaSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information verification details by paging.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeMetaSearchPageListRequest
       * @return DescribeMetaSearchPageListResponse
       */
      Models::DescribeMetaSearchPageListResponse describeMetaSearchPageList(const Models::DescribeMetaSearchPageListRequest &request);

      /**
       * @summary Queries statistics information for information verification authentication.
       *
       * @description - Request method: Supports sending requests by using HTTPS POST and GET methods.
       * - Service address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeMetaStatisticsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaStatisticsListResponse
       */
      Models::DescribeMetaStatisticsListResponse describeMetaStatisticsListWithOptions(const Models::DescribeMetaStatisticsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics information for information verification authentication.
       *
       * @description - Request method: Supports sending requests by using HTTPS POST and GET methods.
       * - Service address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeMetaStatisticsListRequest
       * @return DescribeMetaStatisticsListResponse
       */
      Models::DescribeMetaStatisticsListResponse describeMetaStatisticsList(const Models::DescribeMetaStatisticsListRequest &request);

      /**
       * @summary Queries information verification data by paging.
       *
       * @description - Request method: HTTPS POST and GET methods are supported.
       * - Service address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeMetaStatisticsPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaStatisticsPageListResponse
       */
      Models::DescribeMetaStatisticsPageListResponse describeMetaStatisticsPageListWithOptions(const Models::DescribeMetaStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information verification data by paging.
       *
       * @description - Request method: HTTPS POST and GET methods are supported.
       * - Service address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeMetaStatisticsPageListRequest
       * @return DescribeMetaStatisticsPageListResponse
       */
      Models::DescribeMetaStatisticsPageListResponse describeMetaStatisticsPageList(const Models::DescribeMetaStatisticsPageListRequest &request);

      /**
       * @summary Queries the status of OSS.
       *
       * @description - Request method: HTTPS POST and GET methods are supported.
       * - Endpoint: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssStatusResponse
       */
      Models::DescribeOssStatusResponse describeOssStatusWithOptions(const Models::DescribeOssStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of OSS.
       *
       * @description - Request method: HTTPS POST and GET methods are supported.
       * - Endpoint: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusRequest
       * @return DescribeOssStatusResponse
       */
      Models::DescribeOssStatusResponse describeOssStatus(const Models::DescribeOssStatusRequest &request);

      /**
       * @summary Queries the OSS status of a user (V2).
       *
       * @description - Request methods: Supports HTTPS POST and GET methods.
       * - Service endpoint: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssStatusV2Response
       */
      Models::DescribeOssStatusV2Response describeOssStatusV2WithOptions(const Models::DescribeOssStatusV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the OSS status of a user (V2).
       *
       * @description - Request methods: Supports HTTPS POST and GET methods.
       * - Service endpoint: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusV2Request
       * @return DescribeOssStatusV2Response
       */
      Models::DescribeOssStatusV2Response describeOssStatusV2(const Models::DescribeOssStatusV2Request &request);

      /**
       * @summary Retrieves the token required to upload photos to OSS.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssUploadTokenResponse
       */
      Models::DescribeOssUploadTokenResponse describeOssUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the token required to upload photos to OSS.
       *
       * @return DescribeOssUploadTokenResponse
       */
      Models::DescribeOssUploadTokenResponse describeOssUploadToken();

      /**
       * @summary Queries the paging statistics of financial-grade ID Verification invocations.
       *
       * @param request DescribePageFaceVerifyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePageFaceVerifyDataResponse
       */
      Models::DescribePageFaceVerifyDataResponse describePageFaceVerifyDataWithOptions(const Models::DescribePageFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the paging statistics of financial-grade ID Verification invocations.
       *
       * @param request DescribePageFaceVerifyDataRequest
       * @return DescribePageFaceVerifyDataResponse
       */
      Models::DescribePageFaceVerifyDataResponse describePageFaceVerifyData(const Models::DescribePageFaceVerifyDataRequest &request);

      /**
       * @summary Queries page settings and returns the reasons for authentication failure.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePageSettingResponse
       */
      Models::DescribePageSettingResponse describePageSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries page settings and returns the reasons for authentication failure.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @return DescribePageSettingResponse
       */
      Models::DescribePageSettingResponse describePageSetting();

      /**
       * @summary Retrieves the product codes for financial-grade ID Verification.
       *
       * @description Request method: Send requests by using the HTTPS GET or POST method.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductCodeResponse
       */
      Models::DescribeProductCodeResponse describeProductCodeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the product codes for financial-grade ID Verification.
       *
       * @description Request method: Send requests by using the HTTPS GET or POST method.
       *
       * @return DescribeProductCodeResponse
       */
      Models::DescribeProductCodeResponse describeProductCode();

      /**
       * @summary Queries the invoke statistics of enhanced ID Verification by using a paged query.
       *
       * @param request DescribeSmartStatisticsPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartStatisticsPageListResponse
       */
      Models::DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageListWithOptions(const Models::DescribeSmartStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invoke statistics of enhanced ID Verification by using a paged query.
       *
       * @param request DescribeSmartStatisticsPageListRequest
       * @return DescribeSmartStatisticsPageListResponse
       */
      Models::DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageList(const Models::DescribeSmartStatisticsPageListRequest &request);

      /**
       * @summary Retrieves statistics of verification devices.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyDeviceRiskStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyDeviceRiskStatisticsResponse
       */
      Models::DescribeVerifyDeviceRiskStatisticsResponse describeVerifyDeviceRiskStatisticsWithOptions(const Models::DescribeVerifyDeviceRiskStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistics of verification devices.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyDeviceRiskStatisticsRequest
       * @return DescribeVerifyDeviceRiskStatisticsResponse
       */
      Models::DescribeVerifyDeviceRiskStatisticsResponse describeVerifyDeviceRiskStatistics(const Models::DescribeVerifyDeviceRiskStatisticsRequest &request);

      /**
       * @summary Queries the total number of failed authentication requests.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyFailStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyFailStatisticsResponse
       */
      Models::DescribeVerifyFailStatisticsResponse describeVerifyFailStatisticsWithOptions(const Models::DescribeVerifyFailStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of failed authentication requests.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyFailStatisticsRequest
       * @return DescribeVerifyFailStatisticsResponse
       */
      Models::DescribeVerifyFailStatisticsResponse describeVerifyFailStatistics(const Models::DescribeVerifyFailStatisticsRequest &request);

      /**
       * @summary Queries the distribution data of phone models used by authenticated users.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
       */
      Models::DescribeVerifyPersonasDeviceModelStatisticsResponse describeVerifyPersonasDeviceModelStatisticsWithOptions(const Models::DescribeVerifyPersonasDeviceModelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution data of phone models used by authenticated users.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
       * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
       */
      Models::DescribeVerifyPersonasDeviceModelStatisticsResponse describeVerifyPersonasDeviceModelStatistics(const Models::DescribeVerifyPersonasDeviceModelStatisticsRequest &request);

      /**
       * @summary Queries the distribution data of authenticated devices.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasOsStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyPersonasOsStatisticsResponse
       */
      Models::DescribeVerifyPersonasOsStatisticsResponse describeVerifyPersonasOsStatisticsWithOptions(const Models::DescribeVerifyPersonasOsStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution data of authenticated devices.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasOsStatisticsRequest
       * @return DescribeVerifyPersonasOsStatisticsResponse
       */
      Models::DescribeVerifyPersonasOsStatisticsResponse describeVerifyPersonasOsStatistics(const Models::DescribeVerifyPersonasOsStatisticsRequest &request);

      /**
       * @summary Queries authentication statistics by province where individuals are located.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasProvinceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyPersonasProvinceStatisticsResponse
       */
      Models::DescribeVerifyPersonasProvinceStatisticsResponse describeVerifyPersonasProvinceStatisticsWithOptions(const Models::DescribeVerifyPersonasProvinceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries authentication statistics by province where individuals are located.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasProvinceStatisticsRequest
       * @return DescribeVerifyPersonasProvinceStatisticsResponse
       */
      Models::DescribeVerifyPersonasProvinceStatisticsResponse describeVerifyPersonasProvinceStatistics(const Models::DescribeVerifyPersonasProvinceStatisticsRequest &request);

      /**
       * @summary Queries ID Verification statistics by gender.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasSexStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyPersonasSexStatisticsResponse
       */
      Models::DescribeVerifyPersonasSexStatisticsResponse describeVerifyPersonasSexStatisticsWithOptions(const Models::DescribeVerifyPersonasSexStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ID Verification statistics by gender.
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasSexStatisticsRequest
       * @return DescribeVerifyPersonasSexStatisticsResponse
       */
      Models::DescribeVerifyPersonasSexStatisticsResponse describeVerifyPersonasSexStatistics(const Models::DescribeVerifyPersonasSexStatisticsRequest &request);

      /**
       * @summary Queries the ID Verification result.
       *
       * @description Before you begin: Before integrating this API, make sure that you have completed the required preparations. For more information, see [Preparations for integrating the ID Verification server](https://help.aliyun.com/document_detail/127471.html) and [Preparations for integrating the face liveness verification server](https://help.aliyun.com/document_detail/127717.html).
       * > Alibaba Cloud ID Verification stores verification data only for the last 180 days. To use the verification data for subsequent business purposes, call this API to retrieve and store the data promptly to prevent service interruptions.
       * Request methods: HTTPS POST and GET.
       * Operation description: After the mobile client of the integrator receives a callback, the server can call this API to retrieve the corresponding verification status and materials.
       * Applicable scope: This API applies to the verification solution that integrates the SDK and the server.
       *
       * @param request DescribeVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyResultResponse
       */
      Models::DescribeVerifyResultResponse describeVerifyResultWithOptions(const Models::DescribeVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID Verification result.
       *
       * @description Before you begin: Before integrating this API, make sure that you have completed the required preparations. For more information, see [Preparations for integrating the ID Verification server](https://help.aliyun.com/document_detail/127471.html) and [Preparations for integrating the face liveness verification server](https://help.aliyun.com/document_detail/127717.html).
       * > Alibaba Cloud ID Verification stores verification data only for the last 180 days. To use the verification data for subsequent business purposes, call this API to retrieve and store the data promptly to prevent service interruptions.
       * Request methods: HTTPS POST and GET.
       * Operation description: After the mobile client of the integrator receives a callback, the server can call this API to retrieve the corresponding verification status and materials.
       * Applicable scope: This API applies to the verification solution that integrates the SDK and the server.
       *
       * @param request DescribeVerifyResultRequest
       * @return DescribeVerifyResultResponse
       */
      Models::DescribeVerifyResultResponse describeVerifyResult(const Models::DescribeVerifyResultRequest &request);

      /**
       * @summary Retrieves the download URL of an offline SDK.
       *
       * @description Request method: Supports HTTPS POST and GET methods.
       * Operation description: Retrieves the result of an offline facial recognition SDK generation task based on the task ID.
       *
       * @param request DescribeVerifySDKRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifySDKResponse
       */
      Models::DescribeVerifySDKResponse describeVerifySDKWithOptions(const Models::DescribeVerifySDKRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL of an offline SDK.
       *
       * @description Request method: Supports HTTPS POST and GET methods.
       * Operation description: Retrieves the result of an offline facial recognition SDK generation task based on the task ID.
       *
       * @param request DescribeVerifySDKRequest
       * @return DescribeVerifySDKResponse
       */
      Models::DescribeVerifySDKResponse describeVerifySDK(const Models::DescribeVerifySDKRequest &request);

      /**
       * @summary Queries the details of authentication records with paging and conditional query.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifySearchPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifySearchPageListResponse
       */
      Models::DescribeVerifySearchPageListResponse describeVerifySearchPageListWithOptions(const Models::DescribeVerifySearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of authentication records with paging and conditional query.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifySearchPageListRequest
       * @return DescribeVerifySearchPageListResponse
       */
      Models::DescribeVerifySearchPageListResponse describeVerifySearchPageList(const Models::DescribeVerifySearchPageListRequest &request);

      /**
       * @summary Queries the statistics information of authentication requests.
       *
       * @description - Request method: HTTPS POST and GET methods are supported.
       * - Service address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeVerifyStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyStatisticsResponse
       */
      Models::DescribeVerifyStatisticsResponse describeVerifyStatisticsWithOptions(const Models::DescribeVerifyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics information of authentication requests.
       *
       * @description - Request method: HTTPS POST and GET methods are supported.
       * - Service address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeVerifyStatisticsRequest
       * @return DescribeVerifyStatisticsResponse
       */
      Models::DescribeVerifyStatisticsResponse describeVerifyStatistics(const Models::DescribeVerifyStatisticsRequest &request);

      /**
       * @summary Initiates an authentication request and obtains an authentication token. This operation applies to authentication solutions that use SDK and server-side integration.
       *
       * @description Preparations: Before integrating this API, make sure that you have completed the corresponding preparations. For more information, see [Overview of the integration process for ID Verification solutions](https://help.aliyun.com/document_detail/127536.html) and [Overview of the integration process for face liveness verification solutions (liveness detection solutions)](https://help.aliyun.com/document_detail/127687.html).
       * Request methods: HTTPS POST and GET.
       * Operation description: Before each authentication, call this operation to obtain an authentication token (VerifyToken). The token is used to link all operations in the authentication request.
       * Applicable scope: This operation applies to mobile SDK integration.
       * Image URL: You must use an HTTP or HTTPS URL that is accessible over the Internet. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * Image limits:
       * - The relative path or absolute path of local images is not supported.
       * - The size of a single image must not exceed 2 MB to prevent algorithm pull timeouts.
       * - The face area in the image must be at least 64 × 64 pixels.
       * - The body of a single request is limited to 8 MB. Calculate the total size of all images and other information in the request to ensure that the limit is not exceeded.
       *
       * @param request DescribeVerifyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyTokenResponse
       */
      Models::DescribeVerifyTokenResponse describeVerifyTokenWithOptions(const Models::DescribeVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an authentication request and obtains an authentication token. This operation applies to authentication solutions that use SDK and server-side integration.
       *
       * @description Preparations: Before integrating this API, make sure that you have completed the corresponding preparations. For more information, see [Overview of the integration process for ID Verification solutions](https://help.aliyun.com/document_detail/127536.html) and [Overview of the integration process for face liveness verification solutions (liveness detection solutions)](https://help.aliyun.com/document_detail/127687.html).
       * Request methods: HTTPS POST and GET.
       * Operation description: Before each authentication, call this operation to obtain an authentication token (VerifyToken). The token is used to link all operations in the authentication request.
       * Applicable scope: This operation applies to mobile SDK integration.
       * Image URL: You must use an HTTP or HTTPS URL that is accessible over the Internet. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * Image limits:
       * - The relative path or absolute path of local images is not supported.
       * - The size of a single image must not exceed 2 MB to prevent algorithm pull timeouts.
       * - The face area in the image must be at least 64 × 64 pixels.
       * - The body of a single request is limited to 8 MB. Calculate the total size of all images and other information in the request to ensure that the limit is not exceeded.
       *
       * @param request DescribeVerifyTokenRequest
       * @return DescribeVerifyTokenResponse
       */
      Models::DescribeVerifyTokenResponse describeVerifyToken(const Models::DescribeVerifyTokenRequest &request);

      /**
       * @summary Queries the whitelist of a specified scenario.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request DescribeWhitelistSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistSettingResponse
       */
      Models::DescribeWhitelistSettingResponse describeWhitelistSettingWithOptions(const Models::DescribeWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of a specified scenario.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       *
       * @param request DescribeWhitelistSettingRequest
       * @return DescribeWhitelistSettingResponse
       */
      Models::DescribeWhitelistSettingResponse describeWhitelistSetting(const Models::DescribeWhitelistSettingRequest &request);

      /**
       * @summary Detects the validity attributes of faces in a photo.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       * API description: Detects the validity-related attributes of faces in the input photo to help you determine whether the photo meets your business requirements for retention or comparison. Currently supported face validity attributes include whether it is a face, whether it is blurred, whether glasses are worn, face pose, and whether it is a smiling face.
       * Image URL description: When you pass an image, you must provide its HTTP URL, OSS URL, or Base64-encoded string.
       * - HTTP URL: A publicly accessible HTTP URL. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 encoding: A Base64-encoded image in the format of `base64://<Base64 string of the image>`.
       * Image limits:
       * - Neither a relative path nor an absolute path is supported for local images.
       * - The size of a single image must not exceed 2 MB to prevent algorithm pulling timeouts.
       * - The body of a single request is limited to 8 MB. Calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
       * - When you use Base64 to pass an image, the request method of the API must be POST. The header description, such as the data:image/png prefix, must be removed from the Base64 character string of the image.
       *
       * @param request DetectFaceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectFaceAttributesResponse
       */
      Models::DetectFaceAttributesResponse detectFaceAttributesWithOptions(const Models::DetectFaceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects the validity attributes of faces in a photo.
       *
       * @description Request method: Only HTTPS POST requests are supported.
       * API description: Detects the validity-related attributes of faces in the input photo to help you determine whether the photo meets your business requirements for retention or comparison. Currently supported face validity attributes include whether it is a face, whether it is blurred, whether glasses are worn, face pose, and whether it is a smiling face.
       * Image URL description: When you pass an image, you must provide its HTTP URL, OSS URL, or Base64-encoded string.
       * - HTTP URL: A publicly accessible HTTP URL. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 encoding: A Base64-encoded image in the format of `base64://<Base64 string of the image>`.
       * Image limits:
       * - Neither a relative path nor an absolute path is supported for local images.
       * - The size of a single image must not exceed 2 MB to prevent algorithm pulling timeouts.
       * - The body of a single request is limited to 8 MB. Calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
       * - When you use Base64 to pass an image, the request method of the API must be POST. The header description, such as the data:image/png prefix, must be removed from the Base64 character string of the image.
       *
       * @param request DetectFaceAttributesRequest
       * @return DetectFaceAttributesResponse
       */
      Models::DetectFaceAttributesResponse detectFaceAttributes(const Models::DetectFaceAttributesRequest &request);

      /**
       * @summary Retrieves statistical call volume data.
       *
       * @description Retrieves the download link for the statistical call data file of a product solution based on query conditions.
       * - Method: HTTPS POST
       * - Endpoint: cloudauth.aliyuncs.com
       * > ID Verification products calculate call volumes based on CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
       *
       * @param request DownloadVerifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadVerifyRecordsResponse
       */
      Models::DownloadVerifyRecordsResponse downloadVerifyRecordsWithOptions(const Models::DownloadVerifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistical call volume data.
       *
       * @description Retrieves the download link for the statistical call data file of a product solution based on query conditions.
       * - Method: HTTPS POST
       * - Endpoint: cloudauth.aliyuncs.com
       * > ID Verification products calculate call volumes based on CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
       *
       * @param request DownloadVerifyRecordsRequest
       * @return DownloadVerifyRecordsResponse
       */
      Models::DownloadVerifyRecordsResponse downloadVerifyRecords(const Models::DownloadVerifyRecordsRequest &request);

      /**
       * @summary Verifies the validity period of two identity elements.
       *
       * @param request Id2MetaPeriodVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaPeriodVerifyResponse
       */
      Models::Id2MetaPeriodVerifyResponse id2MetaPeriodVerifyWithOptions(const Models::Id2MetaPeriodVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the validity period of two identity elements.
       *
       * @param request Id2MetaPeriodVerifyRequest
       * @return Id2MetaPeriodVerifyResponse
       */
      Models::Id2MetaPeriodVerifyResponse id2MetaPeriodVerify(const Models::Id2MetaPeriodVerifyRequest &request);

      /**
       * @summary Verifies two identity elements in the Standard Edition.
       *
       * @param request Id2MetaStandardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaStandardVerifyResponse
       */
      Models::Id2MetaStandardVerifyResponse id2MetaStandardVerifyWithOptions(const Models::Id2MetaStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies two identity elements in the Standard Edition.
       *
       * @param request Id2MetaStandardVerifyRequest
       * @return Id2MetaStandardVerifyResponse
       */
      Models::Id2MetaStandardVerifyResponse id2MetaStandardVerify(const Models::Id2MetaStandardVerifyRequest &request);

      /**
       * @summary Verifies the authenticity and consistency of a name and an ID card number by using authoritative data sources.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request Id2MetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyResponse
       */
      Models::Id2MetaVerifyResponse id2MetaVerifyWithOptions(const Models::Id2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a name and an ID card number by using authoritative data sources.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request Id2MetaVerifyRequest
       * @return Id2MetaVerifyResponse
       */
      Models::Id2MetaVerifyResponse id2MetaVerify(const Models::Id2MetaVerifyRequest &request);

      /**
       * @summary Verifies the authenticity and consistency of the name and ID card number extracted via OCR from the front and back images of an ID card against an authoritative source.
       *
       * @description Submits the front and back images of an ID card and returns the verification results for the two identity elements from an authoritative data source.
       *
       * @param request Id2MetaVerifyWithOCRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyWithOCRResponse
       */
      Models::Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRWithOptions(const Models::Id2MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of the name and ID card number extracted via OCR from the front and back images of an ID card against an authoritative source.
       *
       * @description Submits the front and back images of an ID card and returns the verification results for the two identity elements from an authoritative data source.
       *
       * @param request Id2MetaVerifyWithOCRRequest
       * @return Id2MetaVerifyWithOCRResponse
       */
      Models::Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCR(const Models::Id2MetaVerifyWithOCRRequest &request);

      Models::Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRAdvance(const Models::Id2MetaVerifyWithOCRAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
       *
       * @description Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
       *
       * @param request Id3MetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id3MetaVerifyResponse
       */
      Models::Id3MetaVerifyResponse id3MetaVerifyWithOptions(const Models::Id3MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
       *
       * @description Verifies the authenticity and consistency of a name, ID card number, and facial photo against an authoritative data source.
       *
       * @param request Id3MetaVerifyRequest
       * @return Id3MetaVerifyResponse
       */
      Models::Id3MetaVerifyResponse id3MetaVerify(const Models::Id3MetaVerifyRequest &request);

      Models::Id3MetaVerifyResponse id3MetaVerifyAdvance(const Models::Id3MetaVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the name, ID card number, and face photo by using the premium edition.
       *
       * @description Verifies the authenticity and consistency of the provided name, ID card number, and face photo against authoritative sources.
       *
       * @param request Id3MetaVerifyPRORequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id3MetaVerifyPROResponse
       */
      Models::Id3MetaVerifyPROResponse id3MetaVerifyPROWithOptions(const Models::Id3MetaVerifyPRORequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the name, ID card number, and face photo by using the premium edition.
       *
       * @description Verifies the authenticity and consistency of the provided name, ID card number, and face photo against authoritative sources.
       *
       * @param request Id3MetaVerifyPRORequest
       * @return Id3MetaVerifyPROResponse
       */
      Models::Id3MetaVerifyPROResponse id3MetaVerifyPRO(const Models::Id3MetaVerifyPRORequest &request);

      Models::Id3MetaVerifyPROResponse id3MetaVerifyPROAdvance(const Models::Id3MetaVerifyPROAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of facial recognition three-factor elements by accepting front and back images of an ID card, extracting the name, ID number, and facial photo through OCR, and checking them against an authoritative source.
       *
       * @description Accepts front and back images of an ID card and returns the verification result of the facial recognition three-factor elements from an authoritative data source.
       *
       * @param request Id3MetaVerifyWithOCRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id3MetaVerifyWithOCRResponse
       */
      Models::Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCRWithOptions(const Models::Id3MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of facial recognition three-factor elements by accepting front and back images of an ID card, extracting the name, ID number, and facial photo through OCR, and checking them against an authoritative source.
       *
       * @description Accepts front and back images of an ID card and returns the verification result of the facial recognition three-factor elements from an authoritative data source.
       *
       * @param request Id3MetaVerifyWithOCRRequest
       * @return Id3MetaVerifyWithOCRResponse
       */
      Models::Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCR(const Models::Id3MetaVerifyWithOCRRequest &request);

      Models::Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCRAdvance(const Models::Id3MetaVerifyWithOCRAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an OCR request.
       *
       * @param request InitAuthVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitAuthVerifyResponse
       */
      Models::InitAuthVerifyResponse initAuthVerifyWithOptions(const Models::InitAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an OCR request.
       *
       * @param request InitAuthVerifyRequest
       * @return InitAuthVerifyResponse
       */
      Models::InitAuthVerifyResponse initAuthVerify(const Models::InitAuthVerifyRequest &request);

      /**
       * @summary Initiates an authentication request for image verification.
       *
       * @description Retrieves a CertifyId by calling this API before each authentication session. The CertifyId is used to link all API calls within the authentication request.
       *
       * @param request InitCardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitCardVerifyResponse
       */
      Models::InitCardVerifyResponse initCardVerifyWithOptions(const Models::InitCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an authentication request for image verification.
       *
       * @description Retrieves a CertifyId by calling this API before each authentication session. The CertifyId is used to link all API calls within the authentication request.
       *
       * @param request InitCardVerifyRequest
       * @return InitCardVerifyResponse
       */
      Models::InitCardVerifyResponse initCardVerify(const Models::InitCardVerifyRequest &request);

      /**
       * @summary Retrieves a CertifyId before each authentication to link the API operations in an authentication request.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - This API operation uses different parameters for different product solutions. For more information, see [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
       * #### Image format requirements
       * When you perform ID Verification, make sure that the uploaded image meets all the following conditions:
       * - The photo is recent, the face is complete, clear, and unobstructed, the expression is natural, and the face is directly facing the camera.
       * - The photo is clear and properly exposed. The face is not too dark, too bright, or surrounded by halos. The angle does not have significant deviation.
       * - The resolution does not exceed 1920×1080 and is at least 640×480. We recommend that you scale the short side to 720 pixels and set the compression ratio to greater than 0.9.
       * - Image size: less than 1 MB.
       * - Photos rotated by 90, 180, or 270 degrees are supported. If multiple faces are detected, the largest face is selected.
       *
       * @param request InitFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitFaceVerifyResponse
       */
      Models::InitFaceVerifyResponse initFaceVerifyWithOptions(const Models::InitFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a CertifyId before each authentication to link the API operations in an authentication request.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - This API operation uses different parameters for different product solutions. For more information, see [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
       * #### Image format requirements
       * When you perform ID Verification, make sure that the uploaded image meets all the following conditions:
       * - The photo is recent, the face is complete, clear, and unobstructed, the expression is natural, and the face is directly facing the camera.
       * - The photo is clear and properly exposed. The face is not too dark, too bright, or surrounded by halos. The angle does not have significant deviation.
       * - The resolution does not exceed 1920×1080 and is at least 640×480. We recommend that you scale the short side to 720 pixels and set the compression ratio to greater than 0.9.
       * - Image size: less than 1 MB.
       * - Photos rotated by 90, 180, or 270 degrees are supported. If multiple faces are detected, the largest face is selected.
       *
       * @param request InitFaceVerifyRequest
       * @return InitFaceVerifyResponse
       */
      Models::InitFaceVerifyResponse initFaceVerify(const Models::InitFaceVerifyRequest &request);

      /**
       * @summary Adds an ID Verification whitelist.
       *
       * @param request InsertWhiteListSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertWhiteListSettingResponse
       */
      Models::InsertWhiteListSettingResponse insertWhiteListSettingWithOptions(const Models::InsertWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an ID Verification whitelist.
       *
       * @param request InsertWhiteListSettingRequest
       * @return InsertWhiteListSettingResponse
       */
      Models::InsertWhiteListSettingResponse insertWhiteListSetting(const Models::InsertWhiteListSettingRequest &request);

      /**
       * @summary Provides passive liveness detection (LivenessFaceVerify) to verify real faces by processing pre-captured face images passed through an API operation. The algorithm primarily identifies the liveness Attack Type, such as screen recaptures and printed photos. This service is suitable for low-risk business scenarios or for use with an offline facial recognition SDK. If your business has high security requirements for real-face verification, integrate the app or Web SDK pattern, or integrate the face deepfake detection service to identify face spoofing risks across more dimensions.
       *
       * @description Calls the LivenessFaceVerify operation to perform liveness detection on face images.
       *
       * @param request LivenessFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LivenessFaceVerifyResponse
       */
      Models::LivenessFaceVerifyResponse livenessFaceVerifyWithOptions(const Models::LivenessFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides passive liveness detection (LivenessFaceVerify) to verify real faces by processing pre-captured face images passed through an API operation. The algorithm primarily identifies the liveness Attack Type, such as screen recaptures and printed photos. This service is suitable for low-risk business scenarios or for use with an offline facial recognition SDK. If your business has high security requirements for real-face verification, integrate the app or Web SDK pattern, or integrate the face deepfake detection service to identify face spoofing risks across more dimensions.
       *
       * @description Calls the LivenessFaceVerify operation to perform liveness detection on face images.
       *
       * @param request LivenessFaceVerifyRequest
       * @return LivenessFaceVerifyResponse
       */
      Models::LivenessFaceVerifyResponse livenessFaceVerify(const Models::LivenessFaceVerifyRequest &request);

      /**
       * @summary Verifies the mobile phone number and name.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number and name against authoritative data sources.
       *
       * @param request Mobile2MetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile2MetaVerifyResponse
       */
      Models::Mobile2MetaVerifyResponse mobile2MetaVerifyWithOptions(const Models::Mobile2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the mobile phone number and name.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number and name against authoritative data sources.
       *
       * @param request Mobile2MetaVerifyRequest
       * @return Mobile2MetaVerifyResponse
       */
      Models::Mobile2MetaVerifyResponse mobile2MetaVerify(const Models::Mobile2MetaVerifyRequest &request);

      /**
       * @summary Verifies the three elements of a mobile phone number in the detailed standard edition.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number, name, and ID card number through authoritative data sources. If the information is inconsistent, the system returns the reason for the inconsistency.
       *
       * @param request Mobile3MetaDetailStandardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaDetailStandardVerifyResponse
       */
      Models::Mobile3MetaDetailStandardVerifyResponse mobile3MetaDetailStandardVerifyWithOptions(const Models::Mobile3MetaDetailStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the three elements of a mobile phone number in the detailed standard edition.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number, name, and ID card number through authoritative data sources. If the information is inconsistent, the system returns the reason for the inconsistency.
       *
       * @param request Mobile3MetaDetailStandardVerifyRequest
       * @return Mobile3MetaDetailStandardVerifyResponse
       */
      Models::Mobile3MetaDetailStandardVerifyResponse mobile3MetaDetailStandardVerify(const Models::Mobile3MetaDetailStandardVerifyRequest &request);

      /**
       * @summary Verifies the authenticity and consistency of a mobile phone number, name, and ID card number through authoritative data sources, and returns the reason if they are inconsistent.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - HTTP method: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request Mobile3MetaDetailVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaDetailVerifyResponse
       */
      Models::Mobile3MetaDetailVerifyResponse mobile3MetaDetailVerifyWithOptions(const Models::Mobile3MetaDetailVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a mobile phone number, name, and ID card number through authoritative data sources, and returns the reason if they are inconsistent.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - HTTP method: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request Mobile3MetaDetailVerifyRequest
       * @return Mobile3MetaDetailVerifyResponse
       */
      Models::Mobile3MetaDetailVerifyResponse mobile3MetaDetailVerify(const Models::Mobile3MetaDetailVerifyRequest &request);

      /**
       * @summary Verifies the mobile phone number, name, and ID card number by using the simplified standard edition.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number, name, and ID card number by using authoritative data sources.
       *
       * @param request Mobile3MetaSimpleStandardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaSimpleStandardVerifyResponse
       */
      Models::Mobile3MetaSimpleStandardVerifyResponse mobile3MetaSimpleStandardVerifyWithOptions(const Models::Mobile3MetaSimpleStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the mobile phone number, name, and ID card number by using the simplified standard edition.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number, name, and ID card number by using authoritative data sources.
       *
       * @param request Mobile3MetaSimpleStandardVerifyRequest
       * @return Mobile3MetaSimpleStandardVerifyResponse
       */
      Models::Mobile3MetaSimpleStandardVerifyResponse mobile3MetaSimpleStandardVerify(const Models::Mobile3MetaSimpleStandardVerifyRequest &request);

      /**
       * @summary Verifies the authenticity and consistency of a name and an ID card number through authoritative data sources.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request Mobile3MetaSimpleVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaSimpleVerifyResponse
       */
      Models::Mobile3MetaSimpleVerifyResponse mobile3MetaSimpleVerifyWithOptions(const Models::Mobile3MetaSimpleVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a name and an ID card number through authoritative data sources.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request methods: POST and GET.
       * - Transport protocol: HTTPS.
       *
       * @param request Mobile3MetaSimpleVerifyRequest
       * @return Mobile3MetaSimpleVerifyResponse
       */
      Models::Mobile3MetaSimpleVerifyResponse mobile3MetaSimpleVerify(const Models::Mobile3MetaSimpleVerifyRequest &request);

      /**
       * @summary Verifies phone numbers.
       *
       * @param request MobileDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileDetectResponse
       */
      Models::MobileDetectResponse mobileDetectWithOptions(const Models::MobileDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies phone numbers.
       *
       * @param request MobileDetectRequest
       * @return MobileDetectResponse
       */
      Models::MobileDetectResponse mobileDetect(const Models::MobileDetectRequest &request);

      /**
       * @summary Queries the network status of a mobile phone number.
       *
       * @param request MobileOnlineStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileOnlineStatusResponse
       */
      Models::MobileOnlineStatusResponse mobileOnlineStatusWithOptions(const Models::MobileOnlineStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network status of a mobile phone number.
       *
       * @param request MobileOnlineStatusRequest
       * @return MobileOnlineStatusResponse
       */
      Models::MobileOnlineStatusResponse mobileOnlineStatus(const Models::MobileOnlineStatusRequest &request);

      /**
       * @summary Queries the network tenure of a mobile phone number.
       *
       * @param request MobileOnlineTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileOnlineTimeResponse
       */
      Models::MobileOnlineTimeResponse mobileOnlineTimeWithOptions(const Models::MobileOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network tenure of a mobile phone number.
       *
       * @param request MobileOnlineTimeRequest
       * @return MobileOnlineTimeResponse
       */
      Models::MobileOnlineTimeResponse mobileOnlineTime(const Models::MobileOnlineTimeRequest &request);

      /**
       * @summary Verifies whether a mobile phone number has been reassigned.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number and its registration time by using an authoritative data source.
       *
       * @param request MobileRecycledMetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileRecycledMetaVerifyResponse
       */
      Models::MobileRecycledMetaVerifyResponse mobileRecycledMetaVerifyWithOptions(const Models::MobileRecycledMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether a mobile phone number has been reassigned.
       *
       * @description Verifies the authenticity and consistency of a mobile phone number and its registration time by using an authoritative data source.
       *
       * @param request MobileRecycledMetaVerifyRequest
       * @return MobileRecycledMetaVerifyResponse
       */
      Models::MobileRecycledMetaVerifyResponse mobileRecycledMetaVerify(const Models::MobileRecycledMetaVerifyRequest &request);

      /**
       * @summary Creates or modifies blacklist rules.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       * - Operation description: Creates or modifies blacklist rules.
       *
       * @param tmpReq ModifyBlackListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBlackListStrategyResponse
       */
      Models::ModifyBlackListStrategyResponse modifyBlackListStrategyWithOptions(const Models::ModifyBlackListStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies blacklist rules.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       * - Operation description: Creates or modifies blacklist rules.
       *
       * @param request ModifyBlackListStrategyRequest
       * @return ModifyBlackListStrategyResponse
       */
      Models::ModifyBlackListStrategyResponse modifyBlackListStrategy(const Models::ModifyBlackListStrategyRequest &request);

      /**
       * @summary Modifies stability alert rules.
       *
       * @description - Request method: Requests are sent by using the HTTPS POST method.
       * - Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param tmpReq ModifyControlStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyControlStrategyResponse
       */
      Models::ModifyControlStrategyResponse modifyControlStrategyWithOptions(const Models::ModifyControlStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies stability alert rules.
       *
       * @description - Request method: Requests are sent by using the HTTPS POST method.
       * - Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request ModifyControlStrategyRequest
       * @return ModifyControlStrategyResponse
       */
      Models::ModifyControlStrategyResponse modifyControlStrategy(const Models::ModifyControlStrategyRequest &request);

      /**
       * @summary Modifies the list of custom rate limiting policies.
       *
       * @description - Request method: You can send requests by using the HTTPS POST and GET methods.
       * - Service endpoint: cloudauth.aliyuncs.com.
       *
       * @param tmpReq ModifyCustomizeFlowStrategyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomizeFlowStrategyListResponse
       */
      Models::ModifyCustomizeFlowStrategyListResponse modifyCustomizeFlowStrategyListWithOptions(const Models::ModifyCustomizeFlowStrategyListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the list of custom rate limiting policies.
       *
       * @description - Request method: You can send requests by using the HTTPS POST and GET methods.
       * - Service endpoint: cloudauth.aliyuncs.com.
       *
       * @param request ModifyCustomizeFlowStrategyListRequest
       * @return ModifyCustomizeFlowStrategyListResponse
       */
      Models::ModifyCustomizeFlowStrategyListResponse modifyCustomizeFlowStrategyList(const Models::ModifyCustomizeFlowStrategyListRequest &request);

      /**
       * @summary Updates device-related information, such as extending the device authorization validity period, updating custom business identifiers, and updating device IDs. This operation is applicable to scenarios such as device validity period renewal.
       *
       * @description Request method: You can send requests by using the HTTPS POST and GET methods.
       *
       * @param request ModifyDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceInfoResponse
       */
      Models::ModifyDeviceInfoResponse modifyDeviceInfoWithOptions(const Models::ModifyDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates device-related information, such as extending the device authorization validity period, updating custom business identifiers, and updating device IDs. This operation is applicable to scenarios such as device validity period renewal.
       *
       * @description Request method: You can send requests by using the HTTPS POST and GET methods.
       *
       * @param request ModifyDeviceInfoRequest
       * @return ModifyDeviceInfoResponse
       */
      Models::ModifyDeviceInfoResponse modifyDeviceInfo(const Models::ModifyDeviceInfoRequest &request);

      /**
       * @summary Queries ID Verification whitelist configurations by paging.
       *
       * @param request PageQueryWhiteListSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageQueryWhiteListSettingResponse
       */
      Models::PageQueryWhiteListSettingResponse pageQueryWhiteListSettingWithOptions(const Models::PageQueryWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ID Verification whitelist configurations by paging.
       *
       * @param request PageQueryWhiteListSettingRequest
       * @return PageQueryWhiteListSettingResponse
       */
      Models::PageQueryWhiteListSettingResponse pageQueryWhiteListSetting(const Models::PageQueryWhiteListSettingRequest &request);

      /**
       * @summary Queries the list of blacklist configurations.
       *
       * @description - Request URL: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * > You can configure blacklists for IP addresses, ID card numbers, mobile phone numbers, and bank card numbers. When a request matches a blacklist, the system rejects the request and returns a fixed error code.
       * You can configure blacklists for IP addresses, ID card numbers, mobile phone numbers, and bank card numbers. When a request matches a blacklist, the system rejects the request and returns a fixed error code.
       *
       * @param request QueryBlackListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBlackListStrategyResponse
       */
      Models::QueryBlackListStrategyResponse queryBlackListStrategyWithOptions(const Models::QueryBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of blacklist configurations.
       *
       * @description - Request URL: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * > You can configure blacklists for IP addresses, ID card numbers, mobile phone numbers, and bank card numbers. When a request matches a blacklist, the system rejects the request and returns a fixed error code.
       * You can configure blacklists for IP addresses, ID card numbers, mobile phone numbers, and bank card numbers. When a request matches a blacklist, the system rejects the request and returns a fixed error code.
       *
       * @param request QueryBlackListStrategyRequest
       * @return QueryBlackListStrategyResponse
       */
      Models::QueryBlackListStrategyResponse queryBlackListStrategy(const Models::QueryBlackListStrategyRequest &request);

      /**
       * @summary Queries the list of stability rules. The system triggers alerts when the monitored stability metrics for the server-side InitFaceVerify initialization operation and API integration operations reach the specified thresholds.
       *
       * @description - Request method: The HTTPS POST and GET methods are supported.
       * - Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request QueryControlStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryControlStrategyResponse
       */
      Models::QueryControlStrategyResponse queryControlStrategyWithOptions(const Models::QueryControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of stability rules. The system triggers alerts when the monitored stability metrics for the server-side InitFaceVerify initialization operation and API integration operations reach the specified thresholds.
       *
       * @description - Request method: The HTTPS POST and GET methods are supported.
       * - Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request QueryControlStrategyRequest
       * @return QueryControlStrategyResponse
       */
      Models::QueryControlStrategyResponse queryControlStrategy(const Models::QueryControlStrategyRequest &request);

      /**
       * @summary Queries security rules.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - Security rules: monitoring rules that ensure system security, such as API abuse and abnormal account theft. When a threshold is reached, the system triggers an alert.
       *
       * @param request QueryCustomizeFlowStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomizeFlowStrategyResponse
       */
      Models::QueryCustomizeFlowStrategyResponse queryCustomizeFlowStrategyWithOptions(const Models::QueryCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security rules.
       *
       * @description - Endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - Security rules: monitoring rules that ensure system security, such as API abuse and abnormal account theft. When a threshold is reached, the system triggers an alert.
       *
       * @param request QueryCustomizeFlowStrategyRequest
       * @return QueryCustomizeFlowStrategyResponse
       */
      Models::QueryCustomizeFlowStrategyResponse queryCustomizeFlowStrategy(const Models::QueryCustomizeFlowStrategyRequest &request);

      /**
       * @summary Queries the list of willingness authentication settings.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request methods: HTTPS POST and GET.
       *
       * @param request QuerySceneConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySceneConfigsResponse
       */
      Models::QuerySceneConfigsResponse querySceneConfigsWithOptions(const Models::QuerySceneConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of willingness authentication settings.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com.
       * - Request methods: HTTPS POST and GET.
       *
       * @param request QuerySceneConfigsRequest
       * @return QuerySceneConfigsResponse
       */
      Models::QuerySceneConfigsResponse querySceneConfigs(const Models::QuerySceneConfigsRequest &request);

      /**
       * @summary Queries an ID Verification download task.
       *
       * @description Retrieves the download URL for the statistical call data file of a product plan based on query conditions.
       * - Method: HTTPS POST
       * - Endpoint: cloudauth.aliyuncs.com
       * > The ID Verification product calculates the call volume based on CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
       *
       * @param request QueryVerifyDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVerifyDownloadTaskResponse
       */
      Models::QueryVerifyDownloadTaskResponse queryVerifyDownloadTaskWithOptions(const Models::QueryVerifyDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an ID Verification download task.
       *
       * @description Retrieves the download URL for the statistical call data file of a product plan based on query conditions.
       * - Method: HTTPS POST
       * - Endpoint: cloudauth.aliyuncs.com
       * > The ID Verification product calculates the call volume based on CertifyId. To facilitate reconciliation, retain the CertifyId field in your system.
       *
       * @param request QueryVerifyDownloadTaskRequest
       * @return QueryVerifyDownloadTaskResponse
       */
      Models::QueryVerifyDownloadTaskResponse queryVerifyDownloadTask(const Models::QueryVerifyDownloadTaskRequest &request);

      /**
       * @summary Queries data transfer plans.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - This operation uses different parameters for different product plans. For more information, refer to the [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
       *
       * @param request QueryVerifyFlowPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVerifyFlowPackageResponse
       */
      Models::QueryVerifyFlowPackageResponse queryVerifyFlowPackageWithOptions(const Models::QueryVerifyFlowPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data transfer plans.
       *
       * @description - Service endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - This operation uses different parameters for different product plans. For more information, refer to the [official documentation](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/product-overview/introduction/).
       *
       * @param request QueryVerifyFlowPackageRequest
       * @return QueryVerifyFlowPackageResponse
       */
      Models::QueryVerifyFlowPackageResponse queryVerifyFlowPackage(const Models::QueryVerifyFlowPackageRequest &request);

      /**
       * @summary Queries the call volume of a product code based on different product plans.
       *
       * @description - Request endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * > ID Verification products use CertifyId to calculate call volume. To facilitate reconciliation, retain the CertifyId field in your system.
       *
       * @param request QueryVerifyInvokeSatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVerifyInvokeSatisticResponse
       */
      Models::QueryVerifyInvokeSatisticResponse queryVerifyInvokeSatisticWithOptions(const Models::QueryVerifyInvokeSatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the call volume of a product code based on different product plans.
       *
       * @description - Request endpoint: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * > ID Verification products use CertifyId to calculate call volume. To facilitate reconciliation, retain the CertifyId field in your system.
       *
       * @param request QueryVerifyInvokeSatisticRequest
       * @return QueryVerifyInvokeSatisticResponse
       */
      Models::QueryVerifyInvokeSatisticResponse queryVerifyInvokeSatistic(const Models::QueryVerifyInvokeSatisticRequest &request);

      /**
       * @summary Deletes an ID Verification whitelist.
       *
       * @param tmpReq RemoveWhiteListSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveWhiteListSettingResponse
       */
      Models::RemoveWhiteListSettingResponse removeWhiteListSettingWithOptions(const Models::RemoveWhiteListSettingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ID Verification whitelist.
       *
       * @param request RemoveWhiteListSettingRequest
       * @return RemoveWhiteListSettingResponse
       */
      Models::RemoveWhiteListSettingResponse removeWhiteListSetting(const Models::RemoveWhiteListSettingRequest &request);

      /**
       * @summary Updates a China Finance Certification scenario.
       *
       * @description Updates the information of a China Finance Certification scenario based on the scenario ID.
       * - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST.
       *
       * @param request UpdateAntCloudAuthSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAntCloudAuthSceneResponse
       */
      Models::UpdateAntCloudAuthSceneResponse updateAntCloudAuthSceneWithOptions(const Models::UpdateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a China Finance Certification scenario.
       *
       * @description Updates the information of a China Finance Certification scenario based on the scenario ID.
       * - Service endpoint: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST.
       *
       * @param request UpdateAntCloudAuthSceneRequest
       * @return UpdateAntCloudAuthSceneResponse
       */
      Models::UpdateAntCloudAuthSceneResponse updateAntCloudAuthScene(const Models::UpdateAntCloudAuthSceneRequest &request);

      /**
       * @summary Updates the willingness scenario configuration.
       *
       * @description - Request method: HTTPS POST.
       * - Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request UpdateSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSceneConfigResponse
       */
      Models::UpdateSceneConfigResponse updateSceneConfigWithOptions(const Models::UpdateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the willingness scenario configuration.
       *
       * @description - Request method: HTTPS POST.
       * - Request endpoint: cloudauth.aliyuncs.com.
       *
       * @param request UpdateSceneConfigRequest
       * @return UpdateSceneConfigResponse
       */
      Models::UpdateSceneConfigResponse updateSceneConfig(const Models::UpdateSceneConfigRequest &request);

      /**
       * @summary Retrieves the five key vehicle information items.
       *
       * @description Queries the basic vehicle information based on the license plate number and vehicle type.
       *
       * @param request Vehicle5ItemQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Vehicle5ItemQueryResponse
       */
      Models::Vehicle5ItemQueryResponse vehicle5ItemQueryWithOptions(const Models::Vehicle5ItemQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the five key vehicle information items.
       *
       * @description Queries the basic vehicle information based on the license plate number and vehicle type.
       *
       * @param request Vehicle5ItemQueryRequest
       * @return Vehicle5ItemQueryResponse
       */
      Models::Vehicle5ItemQueryResponse vehicle5ItemQuery(const Models::Vehicle5ItemQueryRequest &request);

      /**
       * @summary Queries the insurance date of a vehicle.
       *
       * @description Queries the insurance date of a vehicle by license plate number, vehicle type, and vehicle identification number (VIN).
       *
       * @param request VehicleInsureQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleInsureQueryResponse
       */
      Models::VehicleInsureQueryResponse vehicleInsureQueryWithOptions(const Models::VehicleInsureQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the insurance date of a vehicle.
       *
       * @description Queries the insurance date of a vehicle by license plate number, vehicle type, and vehicle identification number (VIN).
       *
       * @param request VehicleInsureQueryRequest
       * @return VehicleInsureQueryResponse
       */
      Models::VehicleInsureQueryResponse vehicleInsureQuery(const Models::VehicleInsureQueryRequest &request);

      /**
       * @summary Verifies vehicle identity elements.
       *
       * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type.
       *
       * @param request VehicleMetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleMetaVerifyResponse
       */
      Models::VehicleMetaVerifyResponse vehicleMetaVerifyWithOptions(const Models::VehicleMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies vehicle identity elements.
       *
       * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type.
       *
       * @param request VehicleMetaVerifyRequest
       * @return VehicleMetaVerifyResponse
       */
      Models::VehicleMetaVerifyResponse vehicleMetaVerify(const Models::VehicleMetaVerifyRequest &request);

      /**
       * @summary Verifies vehicle attributes by using the enhanced edition.
       *
       * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type, and returns vehicle details.
       *
       * @param request VehicleMetaVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleMetaVerifyV2Response
       */
      Models::VehicleMetaVerifyV2Response vehicleMetaVerifyV2WithOptions(const Models::VehicleMetaVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies vehicle attributes by using the enhanced edition.
       *
       * @description Verifies the consistency of the name, ID card number, license plate number, and vehicle type, and returns vehicle details.
       *
       * @param request VehicleMetaVerifyV2Request
       * @return VehicleMetaVerifyV2Response
       */
      Models::VehicleMetaVerifyV2Response vehicleMetaVerifyV2(const Models::VehicleMetaVerifyV2Request &request);

      /**
       * @summary Retrieves vehicle information.
       *
       * @description Queries the detailed information of a vehicle by license plate number and vehicle type.
       *
       * @param request VehicleQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleQueryResponse
       */
      Models::VehicleQueryResponse vehicleQueryWithOptions(const Models::VehicleQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves vehicle information.
       *
       * @description Queries the detailed information of a vehicle by license plate number and vehicle type.
       *
       * @param request VehicleQueryRequest
       * @return VehicleQueryResponse
       */
      Models::VehicleQueryResponse vehicleQuery(const Models::VehicleQueryRequest &request);

      /**
       * @summary Performs ID Verification based on the name, ID card number, portrait photo, and optional front and back photos of the ID card, and returns the result synchronously.
       *
       * @description Preparations: Before integrating this API, ensure that you have completed the required preparations. For more information, see [Server-side integration preparations](https://help.aliyun.com/document_detail/127471.html).
       * Request methods: HTTPS POST and GET.
       * API description: The integrator\\"s server submits authentication materials to the ID Verification service for verification and comparison, and the result is returned synchronously.
       * Applicable scope: This API is applicable only to server-only integration authentication solutions.
       * Image URL description:
       * - HTTP or HTTPS URL: Publicly accessible HTTP or HTTPS URLs are supported. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - OSS URL: If the integrator\\"s images are local files, Alibaba Cloud provides corresponding upload SDKs. You can use the SDK to upload images to the OSS bucket specified by the ID Verification service, obtain the corresponding OSS URL, and use it as the image URL parameter for the API. If your business requires the upload SDK, submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
       * Image limits:
       * - The relative path or absolute path of a local image is not supported.
       * - Keep the size of a single image within 2 MB to prevent timeouts when the algorithm pulls the image.
       * - The face area in the image must be at least 64 × 64 pixels.
       * - The body of a single request is limited to 8 MB. Calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
       *
       * @param request VerifyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyMaterialResponse
       */
      Models::VerifyMaterialResponse verifyMaterialWithOptions(const Models::VerifyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs ID Verification based on the name, ID card number, portrait photo, and optional front and back photos of the ID card, and returns the result synchronously.
       *
       * @description Preparations: Before integrating this API, ensure that you have completed the required preparations. For more information, see [Server-side integration preparations](https://help.aliyun.com/document_detail/127471.html).
       * Request methods: HTTPS POST and GET.
       * API description: The integrator\\"s server submits authentication materials to the ID Verification service for verification and comparison, and the result is returned synchronously.
       * Applicable scope: This API is applicable only to server-only integration authentication solutions.
       * Image URL description:
       * - HTTP or HTTPS URL: Publicly accessible HTTP or HTTPS URLs are supported. Example: `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - OSS URL: If the integrator\\"s images are local files, Alibaba Cloud provides corresponding upload SDKs. You can use the SDK to upload images to the OSS bucket specified by the ID Verification service, obtain the corresponding OSS URL, and use it as the image URL parameter for the API. If your business requires the upload SDK, submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
       * Image limits:
       * - The relative path or absolute path of a local image is not supported.
       * - Keep the size of a single image within 2 MB to prevent timeouts when the algorithm pulls the image.
       * - The face area in the image must be at least 64 × 64 pixels.
       * - The body of a single request is limited to 8 MB. Calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
       *
       * @param request VerifyMaterialRequest
       * @return VerifyMaterialResponse
       */
      Models::VerifyMaterialResponse verifyMaterial(const Models::VerifyMaterialRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
