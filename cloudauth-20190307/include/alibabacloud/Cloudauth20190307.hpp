// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDAUTH20190307_HPP_
#define ALIBABACLOUD_CLOUDAUTH20190307_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20190307Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cloudauth20190307.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
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
       * @param request ContrastFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContrastFaceVerifyResponse
       */
      Models::ContrastFaceVerifyResponse contrastFaceVerifyWithOptions(const Models::ContrastFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ContrastFaceVerifyRequest
       * @return ContrastFaceVerifyResponse
       */
      Models::ContrastFaceVerifyResponse contrastFaceVerify(const Models::ContrastFaceVerifyRequest &request);

      Models::ContrastFaceVerifyResponse contrastFaceVerifyAdvance(const Models::ContrastFaceVerifyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAuthKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthKeyResponse
       */
      Models::CreateAuthKeyResponse createAuthKeyWithOptions(const Models::CreateAuthKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAuthKeyRequest
       * @return CreateAuthKeyResponse
       */
      Models::CreateAuthKeyResponse createAuthKey(const Models::CreateAuthKeyRequest &request);

      /**
       * @param request CreateVerifySettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVerifySettingResponse
       */
      Models::CreateVerifySettingResponse createVerifySettingWithOptions(const Models::CreateVerifySettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateVerifySettingRequest
       * @return CreateVerifySettingResponse
       */
      Models::CreateVerifySettingResponse createVerifySetting(const Models::CreateVerifySettingRequest &request);

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
       * @summary 凭证核验
       *
       * @param tmpReq CredentialVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyResponse
       */
      Models::CredentialVerifyResponse credentialVerifyWithOptions(const Models::CredentialVerifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 凭证核验
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
       * @summary 图片要素核验获取认证结果
       *
       * @param request DescribeCardVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCardVerifyResponse
       */
      Models::DescribeCardVerifyResponse describeCardVerifyWithOptions(const Models::DescribeCardVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片要素核验获取认证结果
       *
       * @param request DescribeCardVerifyRequest
       * @return DescribeCardVerifyResponse
       */
      Models::DescribeCardVerifyResponse describeCardVerify(const Models::DescribeCardVerifyRequest &request);

      /**
       * @param request DescribeDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfoWithOptions(const Models::DescribeDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDeviceInfoRequest
       * @return DescribeDeviceInfoResponse
       */
      Models::DescribeDeviceInfoResponse describeDeviceInfo(const Models::DescribeDeviceInfoRequest &request);

      /**
       * @summary 金融级人脸保镖服务
       *
       * @param request DescribeFaceGuardRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaceGuardRiskResponse
       */
      Models::DescribeFaceGuardRiskResponse describeFaceGuardRiskWithOptions(const Models::DescribeFaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 金融级人脸保镖服务
       *
       * @param request DescribeFaceGuardRiskRequest
       * @return DescribeFaceGuardRiskResponse
       */
      Models::DescribeFaceGuardRiskResponse describeFaceGuardRisk(const Models::DescribeFaceGuardRiskRequest &request);

      /**
       * @param request DescribeFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaceVerifyResponse
       */
      Models::DescribeFaceVerifyResponse describeFaceVerifyWithOptions(const Models::DescribeFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeFaceVerifyRequest
       * @return DescribeFaceVerifyResponse
       */
      Models::DescribeFaceVerifyResponse describeFaceVerify(const Models::DescribeFaceVerifyRequest &request);

      /**
       * @param request DescribeOssUploadTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssUploadTokenResponse
       */
      Models::DescribeOssUploadTokenResponse describeOssUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeOssUploadTokenResponse
       */
      Models::DescribeOssUploadTokenResponse describeOssUploadToken();

      /**
       * @summary Open API新增金融级数据统计API
       *
       * @param request DescribePageFaceVerifyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePageFaceVerifyDataResponse
       */
      Models::DescribePageFaceVerifyDataResponse describePageFaceVerifyDataWithOptions(const Models::DescribePageFaceVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Open API新增金融级数据统计API
       *
       * @param request DescribePageFaceVerifyDataRequest
       * @return DescribePageFaceVerifyDataResponse
       */
      Models::DescribePageFaceVerifyDataResponse describePageFaceVerifyData(const Models::DescribePageFaceVerifyDataRequest &request);

      /**
       * @param request DescribeSmartStatisticsPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmartStatisticsPageListResponse
       */
      Models::DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageListWithOptions(const Models::DescribeSmartStatisticsPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeSmartStatisticsPageListRequest
       * @return DescribeSmartStatisticsPageListResponse
       */
      Models::DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageList(const Models::DescribeSmartStatisticsPageListRequest &request);

      /**
       * @param request DescribeVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyResultResponse
       */
      Models::DescribeVerifyResultResponse describeVerifyResultWithOptions(const Models::DescribeVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVerifyResultRequest
       * @return DescribeVerifyResultResponse
       */
      Models::DescribeVerifyResultResponse describeVerifyResult(const Models::DescribeVerifyResultRequest &request);

      /**
       * @param request DescribeVerifySDKRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifySDKResponse
       */
      Models::DescribeVerifySDKResponse describeVerifySDKWithOptions(const Models::DescribeVerifySDKRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVerifySDKRequest
       * @return DescribeVerifySDKResponse
       */
      Models::DescribeVerifySDKResponse describeVerifySDK(const Models::DescribeVerifySDKRequest &request);

      /**
       * @param request DescribeVerifyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyTokenResponse
       */
      Models::DescribeVerifyTokenResponse describeVerifyTokenWithOptions(const Models::DescribeVerifyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVerifyTokenRequest
       * @return DescribeVerifyTokenResponse
       */
      Models::DescribeVerifyTokenResponse describeVerifyToken(const Models::DescribeVerifyTokenRequest &request);

      /**
       * @param request DetectFaceAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectFaceAttributesResponse
       */
      Models::DetectFaceAttributesResponse detectFaceAttributesWithOptions(const Models::DetectFaceAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectFaceAttributesRequest
       * @return DetectFaceAttributesResponse
       */
      Models::DetectFaceAttributesResponse detectFaceAttributes(const Models::DetectFaceAttributesRequest &request);

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
       * @param request InitFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitFaceVerifyResponse
       */
      Models::InitFaceVerifyResponse initFaceVerifyWithOptions(const Models::InitFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request LivenessFaceVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LivenessFaceVerifyResponse
       */
      Models::LivenessFaceVerifyResponse livenessFaceVerifyWithOptions(const Models::LivenessFaceVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request VerifyMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyMaterialResponse
       */
      Models::VerifyMaterialResponse verifyMaterialWithOptions(const Models::VerifyMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request VerifyMaterialRequest
       * @return VerifyMaterialResponse
       */
      Models::VerifyMaterialResponse verifyMaterial(const Models::VerifyMaterialRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
