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
       * @summary Add AIGC Face Detection Capability
       *
       * @param request AIGCFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AIGCFaceVerifyResponse
       */
      Models::AIGCFaceVerifyResponse aIGCFaceVerifyWithOptions(const Models::AIGCFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add AIGC Face Detection Capability
       *
       * @param request AIGCFaceVerifyRequest
       * @return AIGCFaceVerifyResponse
       */
      Models::AIGCFaceVerifyResponse aIGCFaceVerify(const Models::AIGCFaceVerifyRequest &request);

      /**
       * @summary Bank Card Element Verification Interface
       *
       * @description Bank card verification, including: two elements (name + bank card number), three elements (name + ID number + bank card number), and four elements (name + ID number + mobile phone number + bank card number) consistency verification.
       * - Service address:
       *   - Beijing region: cloudauth.cn-beijing.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-beijing.aliyuncs.com (IPv6).
       *   - Shanghai region: cloudauth.cn-shanghai.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-shanghai.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request BankMetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BankMetaVerifyResponse
       */
      Models::BankMetaVerifyResponse bankMetaVerifyWithOptions(const Models::BankMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bank Card Element Verification Interface
       *
       * @description Bank card verification, including: two elements (name + bank card number), three elements (name + ID number + bank card number), and four elements (name + ID number + mobile phone number + bank card number) consistency verification.
       * - Service address:
       *   - Beijing region: cloudauth.cn-beijing.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-beijing.aliyuncs.com (IPv6).
       *   - Shanghai region: cloudauth.cn-shanghai.aliyuncs.com (IPv4) or cloudauth-dualstack.cn-shanghai.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request BankMetaVerifyRequest
       * @return BankMetaVerifyResponse
       */
      Models::BankMetaVerifyResponse bankMetaVerify(const Models::BankMetaVerifyRequest &request);

      /**
       * @summary Financial-grade Pure Server-Side API for Face Comparison.
       *
       * @description - API Name: CompareFaceVerify.
       * - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       * - API Description: An interface to achieve real-person authentication through server-side integration.
       * #### Photo Format Requirements
       * When performing face comparison, please upload 2 facial photos that meet all the following conditions:
       * - Recent photo/recent database photo, with a complete, clear, unobstructed face, natural expression, and facing the camera directly.
       * - Clear photo with normal exposure, no overly dark, overly bright, or halo effects on the face, and no significant angle deviation.
       * - Resolution not exceeding 1920*1080, at least 640*480, recommended to scale the shorter side to 720 pixels, with a compression ratio greater than 0.9.
       * - Photo size: <1MB.
       * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
       *
       * @param request CompareFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareFaceVerifyResponse
       */
      Models::CompareFaceVerifyResponse compareFaceVerifyWithOptions(const Models::CompareFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Financial-grade Pure Server-Side API for Face Comparison.
       *
       * @description - API Name: CompareFaceVerify.
       * - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       * - API Description: An interface to achieve real-person authentication through server-side integration.
       * #### Photo Format Requirements
       * When performing face comparison, please upload 2 facial photos that meet all the following conditions:
       * - Recent photo/recent database photo, with a complete, clear, unobstructed face, natural expression, and facing the camera directly.
       * - Clear photo with normal exposure, no overly dark, overly bright, or halo effects on the face, and no significant angle deviation.
       * - Resolution not exceeding 1920*1080, at least 640*480, recommended to scale the shorter side to 720 pixels, with a compression ratio greater than 0.9.
       * - Photo size: <1MB.
       * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
       *
       * @param request CompareFaceVerifyRequest
       * @return CompareFaceVerifyResponse
       */
      Models::CompareFaceVerifyResponse compareFaceVerify(const Models::CompareFaceVerifyRequest &request);

      /**
       * @summary Invoke CompareFaces for face comparison.
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       * Interface Description: Compares two face images and outputs the similarity score of the faces in the two images as the result.
       * - At least one of the specified comparison images should be a face photo (FacePic).
       * - If an image contains multiple faces, the algorithm will automatically select the largest face in the image.
       * - If one of the two comparison images does not detect a face, the system will return an error message stating \\"No face detected\\".
       * When uploading images, you need to provide the HTTP address or base64 encoding of the image.
       * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 Encoding: An image encoded in base64, formatted as `base64://<base64 string of the image>`.
       * Image Restrictions
       * - Does not support relative or absolute paths for local images.
       * - Please keep the size of a single image within 2MB to avoid timeout during retrieval by the algorithm.
       * - The body of a single request has a size limit of 8MB; please calculate the total size of all images and other information in the request to ensure it does not exceed this limit.
       * - When using base64 to transmit images, the request method must be changed to POST; the header description such as `data:image/png;base64,` should be removed from the base64 string of the image.
       *
       * @param request CompareFacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareFacesResponse
       */
      Models::CompareFacesResponse compareFacesWithOptions(const Models::CompareFacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke CompareFaces for face comparison.
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       * Interface Description: Compares two face images and outputs the similarity score of the faces in the two images as the result.
       * - At least one of the specified comparison images should be a face photo (FacePic).
       * - If an image contains multiple faces, the algorithm will automatically select the largest face in the image.
       * - If one of the two comparison images does not detect a face, the system will return an error message stating \\"No face detected\\".
       * When uploading images, you need to provide the HTTP address or base64 encoding of the image.
       * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 Encoding: An image encoded in base64, formatted as `base64://<base64 string of the image>`.
       * Image Restrictions
       * - Does not support relative or absolute paths for local images.
       * - Please keep the size of a single image within 2MB to avoid timeout during retrieval by the algorithm.
       * - The body of a single request has a size limit of 8MB; please calculate the total size of all images and other information in the request to ensure it does not exceed this limit.
       * - When using base64 to transmit images, the request method must be changed to POST; the header description such as `data:image/png;base64,` should be removed from the base64 string of the image.
       *
       * @param request CompareFacesRequest
       * @return CompareFacesResponse
       */
      Models::CompareFacesResponse compareFaces(const Models::CompareFacesRequest &request);

      /**
       * @summary This interface is used to submit authentication materials for verification and comparison, and it synchronously returns the authentication result.
       *
       * @description - Interface Name: ContrastFaceVerify.
       * - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       * - Interface Description: An interface for real person authentication through server-side integration.
       * #### Image Format Requirements
       * When performing real person authentication, please ensure that the images you upload meet all of the following conditions:
       * - Recent photo with a clear, unobstructed, and natural expression, facing the camera directly.
       * - Clear and properly exposed photo, without overly dark, bright, or haloed faces, and with minimal angle deviation.
       * - Resolution not exceeding 1920*1080, at least 640*480, with the shorter side recommended to be resized to 720 pixels, and a compression ratio greater than 0.9.
       * - Photo size: <1MB.
       * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
       *
       * @param request ContrastFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContrastFaceVerifyResponse
       */
      Models::ContrastFaceVerifyResponse contrastFaceVerifyWithOptions(const Models::ContrastFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to submit authentication materials for verification and comparison, and it synchronously returns the authentication result.
       *
       * @description - Interface Name: ContrastFaceVerify.
       * - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       * - Interface Description: An interface for real person authentication through server-side integration.
       * #### Image Format Requirements
       * When performing real person authentication, please ensure that the images you upload meet all of the following conditions:
       * - Recent photo with a clear, unobstructed, and natural expression, facing the camera directly.
       * - Clear and properly exposed photo, without overly dark, bright, or haloed faces, and with minimal angle deviation.
       * - Resolution not exceeding 1920*1080, at least 640*480, with the shorter side recommended to be resized to 720 pixels, and a compression ratio greater than 0.9.
       * - Photo size: <1MB.
       * - Supports 90, 180, and 270-degree photos; in cases of multiple faces, the largest face will be selected.
       *
       * @param request ContrastFaceVerifyRequest
       * @return ContrastFaceVerifyResponse
       */
      Models::ContrastFaceVerifyResponse contrastFaceVerify(const Models::ContrastFaceVerifyRequest &request);

      Models::ContrastFaceVerifyResponse contrastFaceVerifyAdvance(const Models::ContrastFaceVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a financial-grade authentication scenario
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request CreateAntCloudAuthSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAntCloudAuthSceneResponse
       */
      Models::CreateAntCloudAuthSceneResponse createAntCloudAuthSceneWithOptions(const Models::CreateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a financial-grade authentication scenario
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request CreateAntCloudAuthSceneRequest
       * @return CreateAntCloudAuthSceneResponse
       */
      Models::CreateAntCloudAuthSceneResponse createAntCloudAuthScene(const Models::CreateAntCloudAuthSceneRequest &request);

      /**
       * @summary Call CreateAuthKey to get the authorization key, which is used for offline face recognition SDK activation.
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request CreateAuthKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthKeyResponse
       */
      Models::CreateAuthKeyResponse createAuthKeyWithOptions(const Models::CreateAuthKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call CreateAuthKey to get the authorization key, which is used for offline face recognition SDK activation.
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request CreateAuthKeyRequest
       * @return CreateAuthKeyResponse
       */
      Models::CreateAuthKeyResponse createAuthKey(const Models::CreateAuthKeyRequest &request);

      /**
       * @summary Create Cloud Scene
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request CreateCloudauthstSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudauthstSceneResponse
       */
      Models::CreateCloudauthstSceneResponse createCloudauthstSceneWithOptions(const Models::CreateCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Cloud Scene
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request CreateCloudauthstSceneRequest
       * @return CreateCloudauthstSceneResponse
       */
      Models::CreateCloudauthstSceneResponse createCloudauthstScene(const Models::CreateCloudauthstSceneRequest &request);

      /**
       * @summary Create Scene Configuration
       *
       * @description Request Method: Supports sending requests via HTTPS POST.
       * Request Address: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request CreateSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSceneConfigResponse
       */
      Models::CreateSceneConfigResponse createSceneConfigWithOptions(const Models::CreateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Scene Configuration
       *
       * @description Request Method: Supports sending requests via HTTPS POST.
       * Request Address: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request CreateSceneConfigRequest
       * @return CreateSceneConfigResponse
       */
      Models::CreateSceneConfigResponse createSceneConfig(const Models::CreateSceneConfigRequest &request);

      /**
       * @summary Call CreateVerifySetting to create a verification scenario configuration. This operation is equivalent to creating a new verification scenario on the console.
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       *
       * @param request CreateVerifySettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVerifySettingResponse
       */
      Models::CreateVerifySettingResponse createVerifySettingWithOptions(const Models::CreateVerifySettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call CreateVerifySetting to create a verification scenario configuration. This operation is equivalent to creating a new verification scenario on the console.
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       *
       * @param request CreateVerifySettingRequest
       * @return CreateVerifySettingResponse
       */
      Models::CreateVerifySettingResponse createVerifySetting(const Models::CreateVerifySettingRequest &request);

      /**
       * @summary Create Whitelist
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       *
       * @param request CreateWhitelistSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWhitelistSettingResponse
       */
      Models::CreateWhitelistSettingResponse createWhitelistSettingWithOptions(const Models::CreateWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Whitelist
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       *
       * @param request CreateWhitelistSettingRequest
       * @return CreateWhitelistSettingResponse
       */
      Models::CreateWhitelistSettingResponse createWhitelistSetting(const Models::CreateWhitelistSettingRequest &request);

      /**
       * @summary Product Credential Verification
       *
       * @description Upload e-commerce product images to perform tampering, quality (clarity), and similar image detection, returning risk labels and scores.
       *
       * @param request CredentialProductVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialProductVerifyV2Response
       */
      Models::CredentialProductVerifyV2Response credentialProductVerifyV2WithOptions(const Models::CredentialProductVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Product Credential Verification
       *
       * @description Upload e-commerce product images to perform tampering, quality (clarity), and similar image detection, returning risk labels and scores.
       *
       * @param request CredentialProductVerifyV2Request
       * @return CredentialProductVerifyV2Response
       */
      Models::CredentialProductVerifyV2Response credentialProductVerifyV2(const Models::CredentialProductVerifyV2Request &request);

      Models::CredentialProductVerifyV2Response credentialProductVerifyV2Advance(const Models::CredentialProductVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Credential verification
       *
       * @param tmpReq CredentialVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyResponse
       */
      Models::CredentialVerifyResponse credentialVerifyWithOptions(const Models::CredentialVerifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Credential verification
       *
       * @param request CredentialVerifyRequest
       * @return CredentialVerifyResponse
       */
      Models::CredentialVerifyResponse credentialVerify(const Models::CredentialVerifyRequest &request);

      /**
       * @summary Credential Verification
       *
       * @description Input credential image information, perform image tampering and forgery detection, and image semantic understanding. Return the risk detection results.
       *
       * @param tmpReq CredentialVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyV2Response
       */
      Models::CredentialVerifyV2Response credentialVerifyV2WithOptions(const Models::CredentialVerifyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Credential Verification
       *
       * @description Input credential image information, perform image tampering and forgery detection, and image semantic understanding. Return the risk detection results.
       *
       * @param request CredentialVerifyV2Request
       * @return CredentialVerifyV2Response
       */
      Models::CredentialVerifyV2Response credentialVerifyV2(const Models::CredentialVerifyV2Request &request);

      Models::CredentialVerifyV2Response credentialVerifyV2Advance(const Models::CredentialVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Face Credential Verification Service
       *
       * @description > The Face Deepfake Detection API is currently in the free public beta stage, which will end on August 30, 2024, at 23:59:59. During the public beta, the QPS (Queries Per Second) cannot exceed 3 times/second.
       * - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request DeepfakeDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeDetectResponse
       */
      Models::DeepfakeDetectResponse deepfakeDetectWithOptions(const Models::DeepfakeDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Face Credential Verification Service
       *
       * @description > The Face Deepfake Detection API is currently in the free public beta stage, which will end on August 30, 2024, at 23:59:59. During the public beta, the QPS (Queries Per Second) cannot exceed 3 times/second.
       * - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request DeepfakeDetectRequest
       * @return DeepfakeDetectResponse
       */
      Models::DeepfakeDetectResponse deepfakeDetect(const Models::DeepfakeDetectRequest &request);

      /**
       * @summary Delete All Custom Flow Control Strategies
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request DeleteAllCustomizeFlowStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllCustomizeFlowStrategyResponse
       */
      Models::DeleteAllCustomizeFlowStrategyResponse deleteAllCustomizeFlowStrategyWithOptions(const Models::DeleteAllCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete All Custom Flow Control Strategies
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request DeleteAllCustomizeFlowStrategyRequest
       * @return DeleteAllCustomizeFlowStrategyResponse
       */
      Models::DeleteAllCustomizeFlowStrategyResponse deleteAllCustomizeFlowStrategy(const Models::DeleteAllCustomizeFlowStrategyRequest &request);

      /**
       * @summary Delete Watermark Scene
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DeleteAntCloudAuthSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAntCloudAuthSceneResponse
       */
      Models::DeleteAntCloudAuthSceneResponse deleteAntCloudAuthSceneWithOptions(const Models::DeleteAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Watermark Scene
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DeleteAntCloudAuthSceneRequest
       * @return DeleteAntCloudAuthSceneResponse
       */
      Models::DeleteAntCloudAuthSceneResponse deleteAntCloudAuthScene(const Models::DeleteAntCloudAuthSceneRequest &request);

      /**
       * @summary Delete Black and White List Policy
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DeleteBlackListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBlackListStrategyResponse
       */
      Models::DeleteBlackListStrategyResponse deleteBlackListStrategyWithOptions(const Models::DeleteBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Black and White List Policy
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DeleteBlackListStrategyRequest
       * @return DeleteBlackListStrategyResponse
       */
      Models::DeleteBlackListStrategyResponse deleteBlackListStrategy(const Models::DeleteBlackListStrategyRequest &request);

      /**
       * @summary Delete Cloud Scene
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DeleteCloudauthstSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudauthstSceneResponse
       */
      Models::DeleteCloudauthstSceneResponse deleteCloudauthstSceneWithOptions(const Models::DeleteCloudauthstSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Cloud Scene
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DeleteCloudauthstSceneRequest
       * @return DeleteCloudauthstSceneResponse
       */
      Models::DeleteCloudauthstSceneResponse deleteCloudauthstScene(const Models::DeleteCloudauthstSceneRequest &request);

      /**
       * @summary Delete Security Control Strategy
       *
       * @description Request Method: Supports sending requests via HTTPS POST.
       * Request URL: cloudauth.aliyuncs.com.
       *
       * @param request DeleteControlStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteControlStrategyResponse
       */
      Models::DeleteControlStrategyResponse deleteControlStrategyWithOptions(const Models::DeleteControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Security Control Strategy
       *
       * @description Request Method: Supports sending requests via HTTPS POST.
       * Request URL: cloudauth.aliyuncs.com.
       *
       * @param request DeleteControlStrategyRequest
       * @return DeleteControlStrategyResponse
       */
      Models::DeleteControlStrategyResponse deleteControlStrategy(const Models::DeleteControlStrategyRequest &request);

      /**
       * @summary Delete Customized Flow Control Strategy
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request DeleteCustomizeFlowStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizeFlowStrategyResponse
       */
      Models::DeleteCustomizeFlowStrategyResponse deleteCustomizeFlowStrategyWithOptions(const Models::DeleteCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Customized Flow Control Strategy
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request DeleteCustomizeFlowStrategyRequest
       * @return DeleteCustomizeFlowStrategyResponse
       */
      Models::DeleteCustomizeFlowStrategyResponse deleteCustomizeFlowStrategy(const Models::DeleteCustomizeFlowStrategyRequest &request);

      /**
       * @summary Financial Level Sensitive Data Deletion Interface
       *
       * @description Deletes all personal information fields in the request, including name, ID number, phone number, IP, images, videos, and device information, etc.
       *
       * @param request DeleteFaceVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceVerifyResultResponse
       */
      Models::DeleteFaceVerifyResultResponse deleteFaceVerifyResultWithOptions(const Models::DeleteFaceVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Financial Level Sensitive Data Deletion Interface
       *
       * @description Deletes all personal information fields in the request, including name, ID number, phone number, IP, images, videos, and device information, etc.
       *
       * @param request DeleteFaceVerifyResultRequest
       * @return DeleteFaceVerifyResultResponse
       */
      Models::DeleteFaceVerifyResultResponse deleteFaceVerifyResult(const Models::DeleteFaceVerifyResultRequest &request);

      /**
       * @summary Delete Scene Configuration
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Request URL: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DeleteSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSceneConfigResponse
       */
      Models::DeleteSceneConfigResponse deleteSceneConfigWithOptions(const Models::DeleteSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Scene Configuration
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Request URL: cloudauth.aliyuncs.com.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DeleteSceneConfigRequest
       * @return DeleteSceneConfigResponse
       */
      Models::DeleteSceneConfigResponse deleteSceneConfig(const Models::DeleteSceneConfigRequest &request);

      /**
       * @summary Delete Whitelist Configuration
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DeleteWhitelistSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWhitelistSettingResponse
       */
      Models::DeleteWhitelistSettingResponse deleteWhitelistSettingWithOptions(const Models::DeleteWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Whitelist Configuration
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DeleteWhitelistSettingRequest
       * @return DeleteWhitelistSettingResponse
       */
      Models::DeleteWhitelistSettingResponse deleteWhitelistSetting(const Models::DeleteWhitelistSettingRequest &request);

      /**
       * @summary Query the User Status of Ant Blockchain
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DescribeAntAndCloudAuthUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAntAndCloudAuthUserStatusResponse
       */
      Models::DescribeAntAndCloudAuthUserStatusResponse describeAntAndCloudAuthUserStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the User Status of Ant Blockchain
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @return DescribeAntAndCloudAuthUserStatusResponse
       */
      Models::DescribeAntAndCloudAuthUserStatusResponse describeAntAndCloudAuthUserStatus();

      /**
       * @summary 获取结果
       *
       * @param request DescribeAuthVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthVerifyResponse
       */
      Models::DescribeAuthVerifyResponse describeAuthVerifyWithOptions(const Models::DescribeAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取结果
       *
       * @param request DescribeAuthVerifyRequest
       * @return DescribeAuthVerifyResponse
       */
      Models::DescribeAuthVerifyResponse describeAuthVerify(const Models::DescribeAuthVerifyRequest &request);

      /**
       * @summary Obtain Authentication Results from Image Element Verification
       *
       * @description After receiving the callback notification, you can use this interface on the server side to obtain the corresponding authentication status and information.
       *
       * @param request DescribeCardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCardVerifyResponse
       */
      Models::DescribeCardVerifyResponse describeCardVerifyWithOptions(const Models::DescribeCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain Authentication Results from Image Element Verification
       *
       * @description After receiving the callback notification, you can use this interface on the server side to obtain the corresponding authentication status and information.
       *
       * @param request DescribeCardVerifyRequest
       * @return DescribeCardVerifyResponse
       */
      Models::DescribeCardVerifyResponse describeCardVerify(const Models::DescribeCardVerifyRequest &request);

      /**
       * @summary Query Dashboard Data
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request DescribeCloudauthstSceneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudauthstSceneListResponse
       */
      Models::DescribeCloudauthstSceneListResponse describeCloudauthstSceneListWithOptions(const Models::DescribeCloudauthstSceneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Dashboard Data
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to reacquire it before each activation.
       *
       * @param request DescribeCloudauthstSceneListRequest
       * @return DescribeCloudauthstSceneListResponse
       */
      Models::DescribeCloudauthstSceneListResponse describeCloudauthstSceneList(const Models::DescribeCloudauthstSceneListRequest &request);

      /**
       * @summary Call DescribeDeviceInfo to query device-related information, such as the validity period of authorization, business identifiers customized by the access party, and device ID, etc.
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       *
       * @param request DescribeDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfoWithOptions(const Models::DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeDeviceInfo to query device-related information, such as the validity period of authorization, business identifiers customized by the access party, and device ID, etc.
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       *
       * @param request DescribeDeviceInfoRequest
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfo(const Models::DescribeDeviceInfoRequest &request);

      /**
       * @summary Financial-Grade Face Guard Service
       *
       * @param request DescribeFaceGuardRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaceGuardRiskResponse
       */
      Models::DescribeFaceGuardRiskResponse describeFaceGuardRiskWithOptions(const Models::DescribeFaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Financial-Grade Face Guard Service
       *
       * @param request DescribeFaceGuardRiskRequest
       * @return DescribeFaceGuardRiskResponse
       */
      Models::DescribeFaceGuardRiskResponse describeFaceGuardRisk(const Models::DescribeFaceGuardRiskRequest &request);

      /**
       * @summary After the mobile end of the integrator receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaceVerifyResponse
       */
      Models::DescribeFaceVerifyResponse describeFaceVerifyWithOptions(const Models::DescribeFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After the mobile end of the integrator receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeFaceVerifyRequest
       * @return DescribeFaceVerifyResponse
       */
      Models::DescribeFaceVerifyResponse describeFaceVerify(const Models::DescribeFaceVerifyRequest &request);

      /**
       * @summary 查询任务导出记录
       *
       * @param request DescribeInfoCheckExportRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInfoCheckExportRecordResponse
       */
      Models::DescribeInfoCheckExportRecordResponse describeInfoCheckExportRecordWithOptions(const Models::DescribeInfoCheckExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务导出记录
       *
       * @param request DescribeInfoCheckExportRecordRequest
       * @return DescribeInfoCheckExportRecordResponse
       */
      Models::DescribeInfoCheckExportRecordResponse describeInfoCheckExportRecord(const Models::DescribeInfoCheckExportRecordRequest &request);

      /**
       * @summary Query the cloud scenario authentication records of a specific region
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DescribeListAntCloudAuthScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListAntCloudAuthScenesResponse
       */
      Models::DescribeListAntCloudAuthScenesResponse describeListAntCloudAuthScenesWithOptions(const Models::DescribeListAntCloudAuthScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the cloud scenario authentication records of a specific region
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * > The authorization key is valid for 30 minutes and cannot be reused. It is recommended to re-obtain it before each activation.
       *
       * @param request DescribeListAntCloudAuthScenesRequest
       * @return DescribeListAntCloudAuthScenesResponse
       */
      Models::DescribeListAntCloudAuthScenesResponse describeListAntCloudAuthScenes(const Models::DescribeListAntCloudAuthScenesRequest &request);

      /**
       * @summary Query Face Verification Data
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListFaceVerifyDataResponse
       */
      Models::DescribeListFaceVerifyDataResponse describeListFaceVerifyDataWithOptions(const Models::DescribeListFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Face Verification Data
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyDataRequest
       * @return DescribeListFaceVerifyDataResponse
       */
      Models::DescribeListFaceVerifyDataResponse describeListFaceVerifyData(const Models::DescribeListFaceVerifyDataRequest &request);

      /**
       * @summary Get Face Verification Information
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListFaceVerifyInfosResponse
       */
      Models::DescribeListFaceVerifyInfosResponse describeListFaceVerifyInfosWithOptions(const Models::DescribeListFaceVerifyInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Face Verification Information
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeListFaceVerifyInfosRequest
       * @return DescribeListFaceVerifyInfosResponse
       */
      Models::DescribeListFaceVerifyInfosResponse describeListFaceVerifyInfos(const Models::DescribeListFaceVerifyInfosRequest &request);

      /**
       * @summary 查询页面元数据
       *
       * @param request DescribeMetaSearchPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaSearchPageListResponse
       */
      Models::DescribeMetaSearchPageListResponse describeMetaSearchPageListWithOptions(const Models::DescribeMetaSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询页面元数据
       *
       * @param request DescribeMetaSearchPageListRequest
       * @return DescribeMetaSearchPageListResponse
       */
      Models::DescribeMetaSearchPageListResponse describeMetaSearchPageList(const Models::DescribeMetaSearchPageListRequest &request);

      /**
       * @summary 查询认证统计信息
       *
       * @param request DescribeMetaStatisticsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaStatisticsListResponse
       */
      Models::DescribeMetaStatisticsListResponse describeMetaStatisticsListWithOptions(const Models::DescribeMetaStatisticsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询认证统计信息
       *
       * @param request DescribeMetaStatisticsListRequest
       * @return DescribeMetaStatisticsListResponse
       */
      Models::DescribeMetaStatisticsListResponse describeMetaStatisticsList(const Models::DescribeMetaStatisticsListRequest &request);

      /**
       * @summary 查询认证统计页面
       *
       * @param request DescribeMetaStatisticsPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaStatisticsPageListResponse
       */
      Models::DescribeMetaStatisticsPageListResponse describeMetaStatisticsPageListWithOptions(const Models::DescribeMetaStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询认证统计页面
       *
       * @param request DescribeMetaStatisticsPageListRequest
       * @return DescribeMetaStatisticsPageListResponse
       */
      Models::DescribeMetaStatisticsPageListResponse describeMetaStatisticsPageList(const Models::DescribeMetaStatisticsPageListRequest &request);

      /**
       * @summary Query OSS status
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssStatusResponse
       */
      Models::DescribeOssStatusResponse describeOssStatusWithOptions(const Models::DescribeOssStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query OSS status
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusRequest
       * @return DescribeOssStatusResponse
       */
      Models::DescribeOssStatusResponse describeOssStatus(const Models::DescribeOssStatusRequest &request);

      /**
       * @summary Get OSS Activation Status
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssStatusV2Response
       */
      Models::DescribeOssStatusV2Response describeOssStatusV2WithOptions(const Models::DescribeOssStatusV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get OSS Activation Status
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeOssStatusV2Request
       * @return DescribeOssStatusV2Response
       */
      Models::DescribeOssStatusV2Response describeOssStatusV2(const Models::DescribeOssStatusV2Request &request);

      /**
       * @summary Call DescribeOssUploadToken to get the Token required for uploading photos to OSS.
       *
       * @param request DescribeOssUploadTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssUploadTokenResponse
       */
      Models::DescribeOssUploadTokenResponse describeOssUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeOssUploadToken to get the Token required for uploading photos to OSS.
       *
       * @return DescribeOssUploadTokenResponse
       */
      Models::DescribeOssUploadTokenResponse describeOssUploadToken();

      /**
       * @summary Open API adds financial-grade data statistics API
       *
       * @param request DescribePageFaceVerifyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePageFaceVerifyDataResponse
       */
      Models::DescribePageFaceVerifyDataResponse describePageFaceVerifyDataWithOptions(const Models::DescribePageFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Open API adds financial-grade data statistics API
       *
       * @param request DescribePageFaceVerifyDataRequest
       * @return DescribePageFaceVerifyDataResponse
       */
      Models::DescribePageFaceVerifyDataResponse describePageFaceVerifyData(const Models::DescribePageFaceVerifyDataRequest &request);

      /**
       * @summary Query Page Settings
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DescribePageSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePageSettingResponse
       */
      Models::DescribePageSettingResponse describePageSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Page Settings
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @return DescribePageSettingResponse
       */
      Models::DescribePageSettingResponse describePageSetting();

      /**
       * @summary Get Product Code
       *
       * @description Request Method: Supports sending requests via HTTPS GET/POST methods.
       *
       * @param request DescribeProductCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductCodeResponse
       */
      Models::DescribeProductCodeResponse describeProductCodeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Product Code
       *
       * @description Request Method: Supports sending requests via HTTPS GET/POST methods.
       *
       * @return DescribeProductCodeResponse
       */
      Models::DescribeProductCodeResponse describeProductCode();

      /**
       * @summary Enhanced Real Person Authentication Call Statistics Pagination Query Interface
       *
       * @param request DescribeSmartStatisticsPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartStatisticsPageListResponse
       */
      Models::DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageListWithOptions(const Models::DescribeSmartStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enhanced Real Person Authentication Call Statistics Pagination Query Interface
       *
       * @param request DescribeSmartStatisticsPageListRequest
       * @return DescribeSmartStatisticsPageListResponse
       */
      Models::DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageList(const Models::DescribeSmartStatisticsPageListRequest &request);

      /**
       * @summary Get Verification Device Statistics
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
       * @summary Get Verification Device Statistics
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyDeviceRiskStatisticsRequest
       * @return DescribeVerifyDeviceRiskStatisticsResponse
       */
      Models::DescribeVerifyDeviceRiskStatisticsResponse describeVerifyDeviceRiskStatistics(const Models::DescribeVerifyDeviceRiskStatisticsRequest &request);

      /**
       * @summary Overview of authentication request statistics
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
       * @summary Overview of authentication request statistics
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyFailStatisticsRequest
       * @return DescribeVerifyFailStatisticsResponse
       */
      Models::DescribeVerifyFailStatisticsResponse describeVerifyFailStatistics(const Models::DescribeVerifyFailStatisticsRequest &request);

      /**
       * @summary Query Statistics on Device Face Comparison
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
       */
      Models::DescribeVerifyPersonasDeviceModelStatisticsResponse describeVerifyPersonasDeviceModelStatisticsWithOptions(const Models::DescribeVerifyPersonasDeviceModelStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Statistics on Device Face Comparison
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasDeviceModelStatisticsRequest
       * @return DescribeVerifyPersonasDeviceModelStatisticsResponse
       */
      Models::DescribeVerifyPersonasDeviceModelStatisticsResponse describeVerifyPersonasDeviceModelStatistics(const Models::DescribeVerifyPersonasDeviceModelStatisticsRequest &request);

      /**
       * @summary Query Authentication Personnel Statistics
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
       * @summary Query Authentication Personnel Statistics
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasOsStatisticsRequest
       * @return DescribeVerifyPersonasOsStatisticsResponse
       */
      Models::DescribeVerifyPersonasOsStatisticsResponse describeVerifyPersonasOsStatistics(const Models::DescribeVerifyPersonasOsStatisticsRequest &request);

      /**
       * @summary Obtain statistical information on the location of authenticated individuals
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasProvinceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyPersonasProvinceStatisticsResponse
       */
      Models::DescribeVerifyPersonasProvinceStatisticsResponse describeVerifyPersonasProvinceStatisticsWithOptions(const Models::DescribeVerifyPersonasProvinceStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain statistical information on the location of authenticated individuals
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasProvinceStatisticsRequest
       * @return DescribeVerifyPersonasProvinceStatisticsResponse
       */
      Models::DescribeVerifyPersonasProvinceStatisticsResponse describeVerifyPersonasProvinceStatistics(const Models::DescribeVerifyPersonasProvinceStatisticsRequest &request);

      /**
       * @summary Query gender statistics of authentication
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
       * @summary Query gender statistics of authentication
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request DescribeVerifyPersonasSexStatisticsRequest
       * @return DescribeVerifyPersonasSexStatisticsResponse
       */
      Models::DescribeVerifyPersonasSexStatisticsResponse describeVerifyPersonasSexStatistics(const Models::DescribeVerifyPersonasSexStatisticsRequest &request);

      /**
       * @summary Query the result of real-person authentication.
       *
       * @description Prerequisites: Before accessing this API, please ensure that you have completed the necessary preparations. For more details, see [Real Person Authentication Server-side Preparation](https://help.aliyun.com/document_detail/127471.html) and [Liveness Face Verification Server-side Preparation](https://help.aliyun.com/document_detail/127717.html).
       * > Alibaba Cloud Real Person Authentication only stores authentication data for the last 180 days. For any subsequent business use, please call this interface in a timely manner to retrieve and store the data yourself to avoid any impact on usage.
       * Request Method: HTTPS POST and GET.
       * Interface Description: After the mobile end of the access party receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
       * Applicable Scope: This interface is applicable to the authentication solution with SDK + server-side integration.
       *
       * @param request DescribeVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyResultResponse
       */
      Models::DescribeVerifyResultResponse describeVerifyResultWithOptions(const Models::DescribeVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the result of real-person authentication.
       *
       * @description Prerequisites: Before accessing this API, please ensure that you have completed the necessary preparations. For more details, see [Real Person Authentication Server-side Preparation](https://help.aliyun.com/document_detail/127471.html) and [Liveness Face Verification Server-side Preparation](https://help.aliyun.com/document_detail/127717.html).
       * > Alibaba Cloud Real Person Authentication only stores authentication data for the last 180 days. For any subsequent business use, please call this interface in a timely manner to retrieve and store the data yourself to avoid any impact on usage.
       * Request Method: HTTPS POST and GET.
       * Interface Description: After the mobile end of the access party receives the callback, its server can call this interface to obtain the corresponding authentication status and authentication information.
       * Applicable Scope: This interface is applicable to the authentication solution with SDK + server-side integration.
       *
       * @param request DescribeVerifyResultRequest
       * @return DescribeVerifyResultResponse
       */
      Models::DescribeVerifyResultResponse describeVerifyResult(const Models::DescribeVerifyResultRequest &request);

      /**
       * @summary Call DescribeVerifySDK to get the offline SDK download address.
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * Interface Description: Obtain the SDK generation result based on the task ID for generating an offline facial recognition SDK.
       *
       * @param request DescribeVerifySDKRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifySDKResponse
       */
      Models::DescribeVerifySDKResponse describeVerifySDKWithOptions(const Models::DescribeVerifySDKRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeVerifySDK to get the offline SDK download address.
       *
       * @description Request Method: Supports sending requests via HTTPS POST and GET methods.
       * Interface Description: Obtain the SDK generation result based on the task ID for generating an offline facial recognition SDK.
       *
       * @param request DescribeVerifySDKRequest
       * @return DescribeVerifySDKResponse
       */
      Models::DescribeVerifySDKResponse describeVerifySDK(const Models::DescribeVerifySDKRequest &request);

      /**
       * @summary Query the list of authentication schemes
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeVerifySearchPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifySearchPageListResponse
       */
      Models::DescribeVerifySearchPageListResponse describeVerifySearchPageListWithOptions(const Models::DescribeVerifySearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of authentication schemes
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       *
       * @param request DescribeVerifySearchPageListRequest
       * @return DescribeVerifySearchPageListResponse
       */
      Models::DescribeVerifySearchPageListResponse describeVerifySearchPageList(const Models::DescribeVerifySearchPageListRequest &request);

      /**
       * @summary Query Authentication Statistics
       *
       * @description - Request Method: Supports sending requests using HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeVerifyStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyStatisticsResponse
       */
      Models::DescribeVerifyStatisticsResponse describeVerifyStatisticsWithOptions(const Models::DescribeVerifyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Authentication Statistics
       *
       * @description - Request Method: Supports sending requests using HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request DescribeVerifyStatisticsRequest
       * @return DescribeVerifyStatisticsResponse
       */
      Models::DescribeVerifyStatisticsResponse describeVerifyStatistics(const Models::DescribeVerifyStatisticsRequest &request);

      /**
       * @summary Call DescribeVerifyToken to initiate an authentication request and obtain an authentication Token. This interface is suitable for authentication solutions using SDK + server-side integration.
       *
       * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparations have been completed. For details, see [Overview of Real Person Authentication Solution Integration Process](https://help.aliyun.com/document_detail/127536.html) and [Overview of Live Face Verification Solution (Liveness Detection Solution) Integration Process](https://help.aliyun.com/document_detail/127687.html).
       * Request Method: HTTPS POST and GET
       * API Description: Before each authentication, use this interface to obtain an authentication Token (VerifyToken), which is used to link various interfaces in the authentication request.
       * Applicable Scope: This interface is suitable for wireless SDK integration.
       * Image Address: Use HTTP or HTTPS addresses that are publicly accessible over the Internet. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * Image Restrictions:
       * - Relative or absolute paths of local images are not supported.
       * - The size of a single image should be controlled within 2 MB to avoid algorithm retrieval timeout.
       * - The face area in the image must be at least 64*64 pixels (px).
       * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
       *
       * @param request DescribeVerifyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyTokenResponse
       */
      Models::DescribeVerifyTokenResponse describeVerifyTokenWithOptions(const Models::DescribeVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeVerifyToken to initiate an authentication request and obtain an authentication Token. This interface is suitable for authentication solutions using SDK + server-side integration.
       *
       * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparations have been completed. For details, see [Overview of Real Person Authentication Solution Integration Process](https://help.aliyun.com/document_detail/127536.html) and [Overview of Live Face Verification Solution (Liveness Detection Solution) Integration Process](https://help.aliyun.com/document_detail/127687.html).
       * Request Method: HTTPS POST and GET
       * API Description: Before each authentication, use this interface to obtain an authentication Token (VerifyToken), which is used to link various interfaces in the authentication request.
       * Applicable Scope: This interface is suitable for wireless SDK integration.
       * Image Address: Use HTTP or HTTPS addresses that are publicly accessible over the Internet. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * Image Restrictions:
       * - Relative or absolute paths of local images are not supported.
       * - The size of a single image should be controlled within 2 MB to avoid algorithm retrieval timeout.
       * - The face area in the image must be at least 64*64 pixels (px).
       * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request to ensure it does not exceed the limit.
       *
       * @param request DescribeVerifyTokenRequest
       * @return DescribeVerifyTokenResponse
       */
      Models::DescribeVerifyTokenResponse describeVerifyToken(const Models::DescribeVerifyTokenRequest &request);

      /**
       * @summary Get Whitelist Collection Get Whitelist Collection
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DescribeWhitelistSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistSettingResponse
       */
      Models::DescribeWhitelistSettingResponse describeWhitelistSettingWithOptions(const Models::DescribeWhitelistSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Whitelist Collection Get Whitelist Collection
       *
       * @description Request Method: Only supports sending requests via HTTPS POST method.
       *
       * @param request DescribeWhitelistSettingRequest
       * @return DescribeWhitelistSettingResponse
       */
      Models::DescribeWhitelistSettingResponse describeWhitelistSetting(const Models::DescribeWhitelistSettingRequest &request);

      /**
       * @summary Detect Validity Attributes in Face Photos
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       * Interface Description: Detects the validity-related attributes of faces in the input photo, which helps the business side to determine whether the photo meets their own business retention or comparison requirements. The currently supported face validity-related attributes include: whether it is a face, whether it is blurry, whether glasses are worn, face pose, whether it is a smile, etc.
       * Instructions for Uploading Image Addresses: When passing in images, you need to upload their corresponding HTTP, OSS addresses, or Base64 encoding.
       * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 Encoding: An image encoded through base64, with the format being `base64://<image base64 string>`.
       * Image Limitations:
       * - Does not support relative or absolute paths of local images.
       * - Please keep the size of a single image within 2 MB to avoid algorithm timeout.
       * - There is an 8 MB size limit for the Body of a single request; please calculate the total size of all images and other information in the request and do not exceed the limit.
       * - When using Base64 to pass images, the request method needs to be changed to POST; the header description of the image Base64 string, such as `data:image/png;base64`, should be removed.
       *
       * @param request DetectFaceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectFaceAttributesResponse
       */
      Models::DetectFaceAttributesResponse detectFaceAttributesWithOptions(const Models::DetectFaceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detect Validity Attributes in Face Photos
       *
       * @description Request Method: Only supports sending requests via HTTPS POST.
       * Interface Description: Detects the validity-related attributes of faces in the input photo, which helps the business side to determine whether the photo meets their own business retention or comparison requirements. The currently supported face validity-related attributes include: whether it is a face, whether it is blurry, whether glasses are worn, face pose, whether it is a smile, etc.
       * Instructions for Uploading Image Addresses: When passing in images, you need to upload their corresponding HTTP, OSS addresses, or Base64 encoding.
       * - HTTP Address: A publicly accessible HTTP address. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - Base64 Encoding: An image encoded through base64, with the format being `base64://<image base64 string>`.
       * Image Limitations:
       * - Does not support relative or absolute paths of local images.
       * - Please keep the size of a single image within 2 MB to avoid algorithm timeout.
       * - There is an 8 MB size limit for the Body of a single request; please calculate the total size of all images and other information in the request and do not exceed the limit.
       * - When using Base64 to pass images, the request method needs to be changed to POST; the header description of the image Base64 string, such as `data:image/png;base64`, should be removed.
       *
       * @param request DetectFaceAttributesRequest
       * @return DetectFaceAttributesResponse
       */
      Models::DetectFaceAttributesResponse detectFaceAttributes(const Models::DetectFaceAttributesRequest &request);

      /**
       * @summary Real-person Authentication Record Download
       *
       * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
       * - Method: HTTPS POST
       * - Service Address: cloudauth.aliyuncs.com
       * > Real-person authentication products use CertifyId to count call volumes. For ease of reconciliation, please retain the CertifyId field in your system.
       *
       * @param request DownloadVerifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadVerifyRecordsResponse
       */
      Models::DownloadVerifyRecordsResponse downloadVerifyRecordsWithOptions(const Models::DownloadVerifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Real-person Authentication Record Download
       *
       * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
       * - Method: HTTPS POST
       * - Service Address: cloudauth.aliyuncs.com
       * > Real-person authentication products use CertifyId to count call volumes. For ease of reconciliation, please retain the CertifyId field in your system.
       *
       * @param request DownloadVerifyRecordsRequest
       * @return DownloadVerifyRecordsResponse
       */
      Models::DownloadVerifyRecordsResponse downloadVerifyRecords(const Models::DownloadVerifyRecordsRequest &request);

      /**
       * @summary Two-Factor Validity Verification API
       *
       * @param request Id2MetaPeriodVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaPeriodVerifyResponse
       */
      Models::Id2MetaPeriodVerifyResponse id2MetaPeriodVerifyWithOptions(const Models::Id2MetaPeriodVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Two-Factor Validity Verification API
       *
       * @param request Id2MetaPeriodVerifyRequest
       * @return Id2MetaPeriodVerifyResponse
       */
      Models::Id2MetaPeriodVerifyResponse id2MetaPeriodVerify(const Models::Id2MetaPeriodVerifyRequest &request);

      /**
       * @summary Identity Two-Factor Standard
       *
       * @param request Id2MetaStandardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaStandardVerifyResponse
       */
      Models::Id2MetaStandardVerifyResponse id2MetaStandardVerifyWithOptions(const Models::Id2MetaStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identity Two-Factor Standard
       *
       * @param request Id2MetaStandardVerifyRequest
       * @return Id2MetaStandardVerifyResponse
       */
      Models::Id2MetaStandardVerifyResponse id2MetaStandardVerify(const Models::Id2MetaStandardVerifyRequest &request);

      /**
       * @summary Identity Two-Factor Interface
       *
       * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request Id2MetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyResponse
       */
      Models::Id2MetaVerifyResponse id2MetaVerifyWithOptions(const Models::Id2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identity Two-Factor Interface
       *
       * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request Id2MetaVerifyRequest
       * @return Id2MetaVerifyResponse
       */
      Models::Id2MetaVerifyResponse id2MetaVerify(const Models::Id2MetaVerifyRequest &request);

      /**
       * @summary ID Two-Factor Image Verification
       *
       * @description Upload both sides of the ID card, and get the verification result of the two factors from an authoritative data source.
       *
       * @param request Id2MetaVerifyWithOCRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyWithOCRResponse
       */
      Models::Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRWithOptions(const Models::Id2MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ID Two-Factor Image Verification
       *
       * @description Upload both sides of the ID card, and get the verification result of the two factors from an authoritative data source.
       *
       * @param request Id2MetaVerifyWithOCRRequest
       * @return Id2MetaVerifyWithOCRResponse
       */
      Models::Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCR(const Models::Id2MetaVerifyWithOCRRequest &request);

      Models::Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRAdvance(const Models::Id2MetaVerifyWithOCRAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identity Three Elements Verification
       *
       * @description Input name, ID number, and face photo to verify their authenticity and consistency through authoritative sources.
       *
       * @param request Id3MetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id3MetaVerifyResponse
       */
      Models::Id3MetaVerifyResponse id3MetaVerifyWithOptions(const Models::Id3MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identity Three Elements Verification
       *
       * @description Input name, ID number, and face photo to verify their authenticity and consistency through authoritative sources.
       *
       * @param request Id3MetaVerifyRequest
       * @return Id3MetaVerifyResponse
       */
      Models::Id3MetaVerifyResponse id3MetaVerify(const Models::Id3MetaVerifyRequest &request);

      Models::Id3MetaVerifyResponse id3MetaVerifyAdvance(const Models::Id3MetaVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identity Three Elements Image Verification
       *
       * @description Upload both sides of the ID card to get the verification result of the three identity elements from an authoritative data source.
       *
       * @param request Id3MetaVerifyWithOCRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id3MetaVerifyWithOCRResponse
       */
      Models::Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCRWithOptions(const Models::Id3MetaVerifyWithOCRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identity Three Elements Image Verification
       *
       * @description Upload both sides of the ID card to get the verification result of the three identity elements from an authoritative data source.
       *
       * @param request Id3MetaVerifyWithOCRRequest
       * @return Id3MetaVerifyWithOCRResponse
       */
      Models::Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCR(const Models::Id3MetaVerifyWithOCRRequest &request);

      Models::Id3MetaVerifyWithOCRResponse id3MetaVerifyWithOCRAdvance(const Models::Id3MetaVerifyWithOCRAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务端初始化
       *
       * @param request InitAuthVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitAuthVerifyResponse
       */
      Models::InitAuthVerifyResponse initAuthVerifyWithOptions(const Models::InitAuthVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 服务端初始化
       *
       * @param request InitAuthVerifyRequest
       * @return InitAuthVerifyResponse
       */
      Models::InitAuthVerifyResponse initAuthVerify(const Models::InitAuthVerifyRequest &request);

      /**
       * @summary Initiate an authentication request for image verification
       *
       * @description Before each authentication, use this interface to obtain the CertifyId, which is used to link various interfaces in the authentication request.
       *
       * @param request InitCardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitCardVerifyResponse
       */
      Models::InitCardVerifyResponse initCardVerifyWithOptions(const Models::InitCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate an authentication request for image verification
       *
       * @description Before each authentication, use this interface to obtain the CertifyId, which is used to link various interfaces in the authentication request.
       *
       * @param request InitCardVerifyRequest
       * @return InitCardVerifyResponse
       */
      Models::InitCardVerifyResponse initCardVerify(const Models::InitCardVerifyRequest &request);

      /**
       * @summary Real-Person Server Initialization Interface
       *
       * @description - Service Address: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
       * #### Image Format Requirements
       * When performing real-person authentication, please provide images that meet all of the following conditions:
       * - Recent photo with a clear, unobstructed face, natural expression, and facing the camera directly.
       * - Clear photo with normal exposure, no overexposure, underexposure, or halo effects, and no significant angle deviation.
       * - Resolution not exceeding 1920*1080, at least 640*480, recommended short side scaled to 720 pixels, compression ratio greater than 0.9.
       * - Photo size: <1MB.
       * - Supports 90, 180, and 270-degree photos; in the case of multiple faces, the largest face will be selected.
       *
       * @param request InitFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitFaceVerifyResponse
       */
      Models::InitFaceVerifyResponse initFaceVerifyWithOptions(const Models::InitFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Real-Person Server Initialization Interface
       *
       * @description - Service Address: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
       * #### Image Format Requirements
       * When performing real-person authentication, please provide images that meet all of the following conditions:
       * - Recent photo with a clear, unobstructed face, natural expression, and facing the camera directly.
       * - Clear photo with normal exposure, no overexposure, underexposure, or halo effects, and no significant angle deviation.
       * - Resolution not exceeding 1920*1080, at least 640*480, recommended short side scaled to 720 pixels, compression ratio greater than 0.9.
       * - Photo size: <1MB.
       * - Supports 90, 180, and 270-degree photos; in the case of multiple faces, the largest face will be selected.
       *
       * @param request InitFaceVerifyRequest
       * @return InitFaceVerifyResponse
       */
      Models::InitFaceVerifyResponse initFaceVerify(const Models::InitFaceVerifyRequest &request);

      /**
       * @summary Add Real Person Whitelist
       *
       * @param request InsertWhiteListSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertWhiteListSettingResponse
       */
      Models::InsertWhiteListSettingResponse insertWhiteListSettingWithOptions(const Models::InsertWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add Real Person Whitelist
       *
       * @param request InsertWhiteListSettingRequest
       * @return InsertWhiteListSettingResponse
       */
      Models::InsertWhiteListSettingResponse insertWhiteListSetting(const Models::InsertWhiteListSettingRequest &request);

      /**
       * @summary Silent Liveness Face (LivenessFaceVerify) refers to a service that performs real face detection by inputting pre-obtained face images through an API. The algorithm primarily identifies whether the face is from a screen recording, printed picture, or other types of liveness attacks. This service is suitable for low-risk business scenarios or in conjunction with offline facial recognition SDKs. If your business has higher requirements for real face security, it is recommended to integrate App or WebSDK mode, or integrate with Deepfake face detection services to assist in identifying more dimensions of face forgery risks.
       *
       * @description Invoke the LivenessFaceVerify interface to perform liveness detection on a face image.
       *
       * @param request LivenessFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LivenessFaceVerifyResponse
       */
      Models::LivenessFaceVerifyResponse livenessFaceVerifyWithOptions(const Models::LivenessFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Silent Liveness Face (LivenessFaceVerify) refers to a service that performs real face detection by inputting pre-obtained face images through an API. The algorithm primarily identifies whether the face is from a screen recording, printed picture, or other types of liveness attacks. This service is suitable for low-risk business scenarios or in conjunction with offline facial recognition SDKs. If your business has higher requirements for real face security, it is recommended to integrate App or WebSDK mode, or integrate with Deepfake face detection services to assist in identifying more dimensions of face forgery risks.
       *
       * @description Invoke the LivenessFaceVerify interface to perform liveness detection on a face image.
       *
       * @param request LivenessFaceVerifyRequest
       * @return LivenessFaceVerifyResponse
       */
      Models::LivenessFaceVerifyResponse livenessFaceVerify(const Models::LivenessFaceVerifyRequest &request);

      /**
       * @summary Mobile Two-Factor Verification
       *
       * @description Input the phone number and name, verify their authenticity and consistency through authoritative data sources.
       *
       * @param request Mobile2MetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile2MetaVerifyResponse
       */
      Models::Mobile2MetaVerifyResponse mobile2MetaVerifyWithOptions(const Models::Mobile2MetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mobile Two-Factor Verification
       *
       * @description Input the phone number and name, verify their authenticity and consistency through authoritative data sources.
       *
       * @param request Mobile2MetaVerifyRequest
       * @return Mobile2MetaVerifyResponse
       */
      Models::Mobile2MetaVerifyResponse mobile2MetaVerify(const Models::Mobile2MetaVerifyRequest &request);

      /**
       * @summary Detailed Three-Element Verification for Phone Number_Standard Version
       *
       * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources. If they do not match, the reason for the mismatch is returned.
       *
       * @param request Mobile3MetaDetailStandardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaDetailStandardVerifyResponse
       */
      Models::Mobile3MetaDetailStandardVerifyResponse mobile3MetaDetailStandardVerifyWithOptions(const Models::Mobile3MetaDetailStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detailed Three-Element Verification for Phone Number_Standard Version
       *
       * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources. If they do not match, the reason for the mismatch is returned.
       *
       * @param request Mobile3MetaDetailStandardVerifyRequest
       * @return Mobile3MetaDetailStandardVerifyResponse
       */
      Models::Mobile3MetaDetailStandardVerifyResponse mobile3MetaDetailStandardVerify(const Models::Mobile3MetaDetailStandardVerifyRequest &request);

      /**
       * @summary Detailed Mobile Three-Element Verification Interface
       *
       * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request Mobile3MetaDetailVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaDetailVerifyResponse
       */
      Models::Mobile3MetaDetailVerifyResponse mobile3MetaDetailVerifyWithOptions(const Models::Mobile3MetaDetailVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detailed Mobile Three-Element Verification Interface
       *
       * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request Mobile3MetaDetailVerifyRequest
       * @return Mobile3MetaDetailVerifyResponse
       */
      Models::Mobile3MetaDetailVerifyResponse mobile3MetaDetailVerify(const Models::Mobile3MetaDetailVerifyRequest &request);

      /**
       * @summary Simplified Three-Element Verification for Phone Number_Standard Version
       *
       * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources.
       *
       * @param request Mobile3MetaSimpleStandardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaSimpleStandardVerifyResponse
       */
      Models::Mobile3MetaSimpleStandardVerifyResponse mobile3MetaSimpleStandardVerifyWithOptions(const Models::Mobile3MetaSimpleStandardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Simplified Three-Element Verification for Phone Number_Standard Version
       *
       * @description Input the phone number, name, and ID number to verify their authenticity and consistency through authoritative data sources.
       *
       * @param request Mobile3MetaSimpleStandardVerifyRequest
       * @return Mobile3MetaSimpleStandardVerifyResponse
       */
      Models::Mobile3MetaSimpleStandardVerifyResponse mobile3MetaSimpleStandardVerify(const Models::Mobile3MetaSimpleStandardVerifyRequest &request);

      /**
       * @summary Mobile Three Elements Simplified Interface
       *
       * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request Mobile3MetaSimpleVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaSimpleVerifyResponse
       */
      Models::Mobile3MetaSimpleVerifyResponse mobile3MetaSimpleVerifyWithOptions(const Models::Mobile3MetaSimpleVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mobile Three Elements Simplified Interface
       *
       * @description - Service address: cloudauth.aliyuncs.com (IPv4) or cloudauth-dualstack.aliyuncs.com (IPv6).
       * - Request method: POST and GET.
       * - Transfer protocol: HTTPS.
       *
       * @param request Mobile3MetaSimpleVerifyRequest
       * @return Mobile3MetaSimpleVerifyResponse
       */
      Models::Mobile3MetaSimpleVerifyResponse mobile3MetaSimpleVerify(const Models::Mobile3MetaSimpleVerifyRequest &request);

      /**
       * @summary Number Detection
       *
       * @param request MobileDetectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileDetectResponse
       */
      Models::MobileDetectResponse mobileDetectWithOptions(const Models::MobileDetectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Number Detection
       *
       * @param request MobileDetectRequest
       * @return MobileDetectResponse
       */
      Models::MobileDetectResponse mobileDetect(const Models::MobileDetectRequest &request);

      /**
       * @summary Query the online status of a mobile number
       *
       * @param request MobileOnlineStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileOnlineStatusResponse
       */
      Models::MobileOnlineStatusResponse mobileOnlineStatusWithOptions(const Models::MobileOnlineStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the online status of a mobile number
       *
       * @param request MobileOnlineStatusRequest
       * @return MobileOnlineStatusResponse
       */
      Models::MobileOnlineStatusResponse mobileOnlineStatus(const Models::MobileOnlineStatusRequest &request);

      /**
       * @summary Query the online duration of a mobile number
       *
       * @param request MobileOnlineTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MobileOnlineTimeResponse
       */
      Models::MobileOnlineTimeResponse mobileOnlineTimeWithOptions(const Models::MobileOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the online duration of a mobile number
       *
       * @param request MobileOnlineTimeRequest
       * @return MobileOnlineTimeResponse
       */
      Models::MobileOnlineTimeResponse mobileOnlineTime(const Models::MobileOnlineTimeRequest &request);

      /**
       * @summary Modify Black and White List Policy
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       * - Interface Description: Add or modify blacklist rule.
       *
       * @param tmpReq ModifyBlackListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBlackListStrategyResponse
       */
      Models::ModifyBlackListStrategyResponse modifyBlackListStrategyWithOptions(const Models::ModifyBlackListStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Black and White List Policy
       *
       * @description - Service Address: cloudauth.aliyuncs.com.
       * - Request Method: HTTPS POST and GET.
       * - Interface Description: Add or modify blacklist rule.
       *
       * @param request ModifyBlackListStrategyRequest
       * @return ModifyBlackListStrategyResponse
       */
      Models::ModifyBlackListStrategyResponse modifyBlackListStrategy(const Models::ModifyBlackListStrategyRequest &request);

      /**
       * @summary Modify Security Control Strategy
       *
       * @description - Request Method: Supports sending requests via HTTPS POST method.
       * - Request Address: cloudauth.aliyuncs.com.
       *
       * @param tmpReq ModifyControlStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyControlStrategyResponse
       */
      Models::ModifyControlStrategyResponse modifyControlStrategyWithOptions(const Models::ModifyControlStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Security Control Strategy
       *
       * @description - Request Method: Supports sending requests via HTTPS POST method.
       * - Request Address: cloudauth.aliyuncs.com.
       *
       * @param request ModifyControlStrategyRequest
       * @return ModifyControlStrategyResponse
       */
      Models::ModifyControlStrategyResponse modifyControlStrategy(const Models::ModifyControlStrategyRequest &request);

      /**
       * @summary Information Verification Security Management
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param tmpReq ModifyCustomizeFlowStrategyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomizeFlowStrategyListResponse
       */
      Models::ModifyCustomizeFlowStrategyListResponse modifyCustomizeFlowStrategyListWithOptions(const Models::ModifyCustomizeFlowStrategyListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Information Verification Security Management
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Service Address: cloudauth.aliyuncs.com.
       *
       * @param request ModifyCustomizeFlowStrategyListRequest
       * @return ModifyCustomizeFlowStrategyListResponse
       */
      Models::ModifyCustomizeFlowStrategyListResponse modifyCustomizeFlowStrategyList(const Models::ModifyCustomizeFlowStrategyListRequest &request);

      /**
       * @summary Call ModifyDeviceInfo to update device-related information, such as extending the device authorization validity period, updating the business party\\"s custom business identifier, and device ID. Suitable for scenarios like renewing the device validity period.
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       *
       * @param request ModifyDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceInfoResponse
       */
      Models::ModifyDeviceInfoResponse modifyDeviceInfoWithOptions(const Models::ModifyDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ModifyDeviceInfo to update device-related information, such as extending the device authorization validity period, updating the business party\\"s custom business identifier, and device ID. Suitable for scenarios like renewing the device validity period.
       *
       * @description Request Method: Supports sending requests using HTTPS POST and GET methods.
       *
       * @param request ModifyDeviceInfoRequest
       * @return ModifyDeviceInfoResponse
       */
      Models::ModifyDeviceInfoResponse modifyDeviceInfo(const Models::ModifyDeviceInfoRequest &request);

      /**
       * @summary Paging Query for Real Person Whitelist Configuration
       *
       * @param request PageQueryWhiteListSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageQueryWhiteListSettingResponse
       */
      Models::PageQueryWhiteListSettingResponse pageQueryWhiteListSettingWithOptions(const Models::PageQueryWhiteListSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paging Query for Real Person Whitelist Configuration
       *
       * @param request PageQueryWhiteListSettingRequest
       * @return PageQueryWhiteListSettingResponse
       */
      Models::PageQueryWhiteListSettingResponse pageQueryWhiteListSetting(const Models::PageQueryWhiteListSettingRequest &request);

      /**
       * @summary Query Blacklist and Whitelist Policies
       *
       * @description - Request URL: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * > Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
       * Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
       *
       * @param request QueryBlackListStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBlackListStrategyResponse
       */
      Models::QueryBlackListStrategyResponse queryBlackListStrategyWithOptions(const Models::QueryBlackListStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Blacklist and Whitelist Policies
       *
       * @description - Request URL: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * > Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
       * Supports setting blacklists for IP, ID number, phone number, bank card number, etc. When a blacklist is hit, the system rejects the request and returns a fixed error code.
       *
       * @param request QueryBlackListStrategyRequest
       * @return QueryBlackListStrategyResponse
       */
      Models::QueryBlackListStrategyResponse queryBlackListStrategy(const Models::QueryBlackListStrategyRequest &request);

      /**
       * @summary Query Security Control Strategy
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Request Address: cloudauth.aliyuncs.com.
       *
       * @param request QueryControlStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryControlStrategyResponse
       */
      Models::QueryControlStrategyResponse queryControlStrategyWithOptions(const Models::QueryControlStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Security Control Strategy
       *
       * @description - Request Method: Supports sending requests via HTTPS POST and GET methods.
       * - Request Address: cloudauth.aliyuncs.com.
       *
       * @param request QueryControlStrategyRequest
       * @return QueryControlStrategyResponse
       */
      Models::QueryControlStrategyResponse queryControlStrategy(const Models::QueryControlStrategyRequest &request);

      /**
       * @summary Query Custom Flow Control Strategy
       *
       * @description - Service Address: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * - Security Rules: These are rules to ensure system security, such as monitoring for API abuse, account theft, etc. When a threshold is triggered, the system supports alerting.
       *
       * @param request QueryCustomizeFlowStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomizeFlowStrategyResponse
       */
      Models::QueryCustomizeFlowStrategyResponse queryCustomizeFlowStrategyWithOptions(const Models::QueryCustomizeFlowStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Custom Flow Control Strategy
       *
       * @description - Service Address: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * - Security Rules: These are rules to ensure system security, such as monitoring for API abuse, account theft, etc. When a threshold is triggered, the system supports alerting.
       *
       * @param request QueryCustomizeFlowStrategyRequest
       * @return QueryCustomizeFlowStrategyResponse
       */
      Models::QueryCustomizeFlowStrategyResponse queryCustomizeFlowStrategy(const Models::QueryCustomizeFlowStrategyRequest &request);

      /**
       * @summary Query Scene Configuration
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request QuerySceneConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySceneConfigsResponse
       */
      Models::QuerySceneConfigsResponse querySceneConfigsWithOptions(const Models::QuerySceneConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Scene Configuration
       *
       * @description - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST and GET.
       *
       * @param request QuerySceneConfigsRequest
       * @return QuerySceneConfigsResponse
       */
      Models::QuerySceneConfigsResponse querySceneConfigs(const Models::QuerySceneConfigsRequest &request);

      /**
       * @summary Query Real-Person Download Task
       *
       * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
       * - Method: HTTPS POST
       * - Service Address: cloudauth.aliyuncs.com
       * > The real-person authentication product uses CertifyId to count the number of calls. For ease of reconciliation, please retain the CertifyId field in your system.
       *
       * @param request QueryVerifyDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVerifyDownloadTaskResponse
       */
      Models::QueryVerifyDownloadTaskResponse queryVerifyDownloadTaskWithOptions(const Models::QueryVerifyDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Real-Person Download Task
       *
       * @description Obtain the download link for statistical call data files under the product plan based on query conditions.
       * - Method: HTTPS POST
       * - Service Address: cloudauth.aliyuncs.com
       * > The real-person authentication product uses CertifyId to count the number of calls. For ease of reconciliation, please retain the CertifyId field in your system.
       *
       * @param request QueryVerifyDownloadTaskRequest
       * @return QueryVerifyDownloadTaskResponse
       */
      Models::QueryVerifyDownloadTaskResponse queryVerifyDownloadTask(const Models::QueryVerifyDownloadTaskRequest &request);

      /**
       * @summary Query Flow Package
       *
       * @description - Service address: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
       *
       * @param request QueryVerifyFlowPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVerifyFlowPackageResponse
       */
      Models::QueryVerifyFlowPackageResponse queryVerifyFlowPackageWithOptions(const Models::QueryVerifyFlowPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Flow Package
       *
       * @description - Service address: cloudauth.aliyuncs.com
       * - Request method: HTTPS POST and GET.
       * - This interface uses different parameters for different product solutions. For details, please refer to the [official documentation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/product-overview/introduction/?spm=a2c4g.11186623.help-menu-2401581.d_0_0.13f644ecRzFHfm&scm=20140722.H_99169._.OR_help-T_cn~zh-V_1).
       *
       * @param request QueryVerifyFlowPackageRequest
       * @return QueryVerifyFlowPackageResponse
       */
      Models::QueryVerifyFlowPackageResponse queryVerifyFlowPackage(const Models::QueryVerifyFlowPackageRequest &request);

      /**
       * @summary Call Volume Statistics
       *
       * @description - Request URL: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * > Real-person authentication products use CertifyId to count call volume. For ease of reconciliation, please retain the CertifyId field in your system.
       *
       * @param request QueryVerifyInvokeSatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVerifyInvokeSatisticResponse
       */
      Models::QueryVerifyInvokeSatisticResponse queryVerifyInvokeSatisticWithOptions(const Models::QueryVerifyInvokeSatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call Volume Statistics
       *
       * @description - Request URL: cloudauth.aliyuncs.com
       * - Request Method: HTTPS POST and GET.
       * > Real-person authentication products use CertifyId to count call volume. For ease of reconciliation, please retain the CertifyId field in your system.
       *
       * @param request QueryVerifyInvokeSatisticRequest
       * @return QueryVerifyInvokeSatisticResponse
       */
      Models::QueryVerifyInvokeSatisticResponse queryVerifyInvokeSatistic(const Models::QueryVerifyInvokeSatisticRequest &request);

      /**
       * @summary Delete Real Person Whitelist
       *
       * @param tmpReq RemoveWhiteListSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveWhiteListSettingResponse
       */
      Models::RemoveWhiteListSettingResponse removeWhiteListSettingWithOptions(const Models::RemoveWhiteListSettingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Real Person Whitelist
       *
       * @param request RemoveWhiteListSettingRequest
       * @return RemoveWhiteListSettingResponse
       */
      Models::RemoveWhiteListSettingResponse removeWhiteListSetting(const Models::RemoveWhiteListSettingRequest &request);

      /**
       * @summary Update Ant Blockchain Transaction Scenario
       *
       * @description Update the information of a financial-level authentication scenario based on the scenario ID.
       * - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST.
       *
       * @param request UpdateAntCloudAuthSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAntCloudAuthSceneResponse
       */
      Models::UpdateAntCloudAuthSceneResponse updateAntCloudAuthSceneWithOptions(const Models::UpdateAntCloudAuthSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Ant Blockchain Transaction Scenario
       *
       * @description Update the information of a financial-level authentication scenario based on the scenario ID.
       * - Service address: cloudauth.aliyuncs.com.
       * - Request method: HTTPS POST.
       *
       * @param request UpdateAntCloudAuthSceneRequest
       * @return UpdateAntCloudAuthSceneResponse
       */
      Models::UpdateAntCloudAuthSceneResponse updateAntCloudAuthScene(const Models::UpdateAntCloudAuthSceneRequest &request);

      /**
       * @summary Update Scene Configuration
       *
       * @description - Request Method: Supports sending requests via HTTPS POST.
       * - Request URL: cloudauth.aliyuncs.com.
       *
       * @param request UpdateSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSceneConfigResponse
       */
      Models::UpdateSceneConfigResponse updateSceneConfigWithOptions(const Models::UpdateSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Scene Configuration
       *
       * @description - Request Method: Supports sending requests via HTTPS POST.
       * - Request URL: cloudauth.aliyuncs.com.
       *
       * @param request UpdateSceneConfigRequest
       * @return UpdateSceneConfigResponse
       */
      Models::UpdateSceneConfigResponse updateSceneConfig(const Models::UpdateSceneConfigRequest &request);

      /**
       * @summary Five-Item Vehicle Information Recognition
       *
       * @description Query basic vehicle information through the license plate number and vehicle type.
       *
       * @param request Vehicle5ItemQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Vehicle5ItemQueryResponse
       */
      Models::Vehicle5ItemQueryResponse vehicle5ItemQueryWithOptions(const Models::Vehicle5ItemQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Five-Item Vehicle Information Recognition
       *
       * @description Query basic vehicle information through the license plate number and vehicle type.
       *
       * @param request Vehicle5ItemQueryRequest
       * @return Vehicle5ItemQueryResponse
       */
      Models::Vehicle5ItemQueryResponse vehicle5ItemQuery(const Models::Vehicle5ItemQueryRequest &request);

      /**
       * @summary Vehicle Insurance Date Inquiry
       *
       * @description Query the vehicle insurance date through the license plate number, vehicle type, and vehicle identification number (VIN).
       *
       * @param request VehicleInsureQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleInsureQueryResponse
       */
      Models::VehicleInsureQueryResponse vehicleInsureQueryWithOptions(const Models::VehicleInsureQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Vehicle Insurance Date Inquiry
       *
       * @description Query the vehicle insurance date through the license plate number, vehicle type, and vehicle identification number (VIN).
       *
       * @param request VehicleInsureQueryRequest
       * @return VehicleInsureQueryResponse
       */
      Models::VehicleInsureQueryResponse vehicleInsureQuery(const Models::VehicleInsureQueryRequest &request);

      /**
       * @summary Vehicle Element Verification
       *
       * @description Verifies the consistency of name, ID number, vehicle license plate, and vehicle type.
       *
       * @param request VehicleMetaVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleMetaVerifyResponse
       */
      Models::VehicleMetaVerifyResponse vehicleMetaVerifyWithOptions(const Models::VehicleMetaVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Vehicle Element Verification
       *
       * @description Verifies the consistency of name, ID number, vehicle license plate, and vehicle type.
       *
       * @param request VehicleMetaVerifyRequest
       * @return VehicleMetaVerifyResponse
       */
      Models::VehicleMetaVerifyResponse vehicleMetaVerify(const Models::VehicleMetaVerifyRequest &request);

      /**
       * @summary Enhanced Vehicle Element Verification
       *
       * @description Verifies the consistency of name, ID number, license plate number, and vehicle type, and supports returning detailed vehicle information.
       *
       * @param request VehicleMetaVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleMetaVerifyV2Response
       */
      Models::VehicleMetaVerifyV2Response vehicleMetaVerifyV2WithOptions(const Models::VehicleMetaVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enhanced Vehicle Element Verification
       *
       * @description Verifies the consistency of name, ID number, license plate number, and vehicle type, and supports returning detailed vehicle information.
       *
       * @param request VehicleMetaVerifyV2Request
       * @return VehicleMetaVerifyV2Response
       */
      Models::VehicleMetaVerifyV2Response vehicleMetaVerifyV2(const Models::VehicleMetaVerifyV2Request &request);

      /**
       * @summary Vehicle Information Recognition
       *
       * @description Query detailed vehicle information through the license plate number and vehicle type.
       *
       * @param request VehicleQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VehicleQueryResponse
       */
      Models::VehicleQueryResponse vehicleQueryWithOptions(const Models::VehicleQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Vehicle Information Recognition
       *
       * @description Query detailed vehicle information through the license plate number and vehicle type.
       *
       * @param request VehicleQueryRequest
       * @return VehicleQueryResponse
       */
      Models::VehicleQueryResponse vehicleQuery(const Models::VehicleQueryRequest &request);

      /**
       * @summary Call VerifyMaterial, in a pure server-side access authentication solution, input name, ID number, portrait photo, and front and back photos of the ID card (optional) for real-person authentication, and return the authentication result synchronously.
       *
       * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparatory work has been completed. For details, please refer to [Server-side Access Preparation](https://help.aliyun.com/document_detail/127471.html).
       * Request Method: HTTPS POST and GET.
       * API Description: The server of the access party submits the authentication materials to the real-person authentication service for verification and comparison, with the results returned synchronously.
       * Applicable Scope: This interface is only applicable to pure server-side access authentication solutions.
       * Image Upload Address Explanation:
       * - HTTP or HTTPS address: Supports publicly accessible HTTP or HTTPS addresses. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - OSS address: If the images from the access party are local files, Alibaba Cloud also provides an upload SDK, supporting the business party to upload the images to the specified OSS bucket of the real-person authentication service, and use the obtained OSS address as the image address parameter in the interface. If your business needs to use the upload SDK, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us for acquisition.
       * Image Limitations:
       * - Does not support relative or absolute paths of local images.
       * - Please keep the size of a single image within 2 MB to avoid algorithm retrieval timeout.
       * - The face area in the image should be at least 64*64 pixels.
       * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request, and do not exceed the limit.
       *
       * @param request VerifyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyMaterialResponse
       */
      Models::VerifyMaterialResponse verifyMaterialWithOptions(const Models::VerifyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call VerifyMaterial, in a pure server-side access authentication solution, input name, ID number, portrait photo, and front and back photos of the ID card (optional) for real-person authentication, and return the authentication result synchronously.
       *
       * @description Preparation for Access: When integrating this API, please ensure that the corresponding preparatory work has been completed. For details, please refer to [Server-side Access Preparation](https://help.aliyun.com/document_detail/127471.html).
       * Request Method: HTTPS POST and GET.
       * API Description: The server of the access party submits the authentication materials to the real-person authentication service for verification and comparison, with the results returned synchronously.
       * Applicable Scope: This interface is only applicable to pure server-side access authentication solutions.
       * Image Upload Address Explanation:
       * - HTTP or HTTPS address: Supports publicly accessible HTTP or HTTPS addresses. For example, `http://image-demo.img-cn-hangzhou.aliyuncs.com/example.jpg`.
       * - OSS address: If the images from the access party are local files, Alibaba Cloud also provides an upload SDK, supporting the business party to upload the images to the specified OSS bucket of the real-person authentication service, and use the obtained OSS address as the image address parameter in the interface. If your business needs to use the upload SDK, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us for acquisition.
       * Image Limitations:
       * - Does not support relative or absolute paths of local images.
       * - Please keep the size of a single image within 2 MB to avoid algorithm retrieval timeout.
       * - The face area in the image should be at least 64*64 pixels.
       * - There is an 8 MB size limit for the Body of a single request. Please calculate the total size of all images and other information in the request, and do not exceed the limit.
       *
       * @param request VerifyMaterialRequest
       * @return VerifyMaterialResponse
       */
      Models::VerifyMaterialResponse verifyMaterial(const Models::VerifyMaterialRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
