// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDAUTHINTL20220809_HPP_
#define ALIBABACLOUD_CLOUDAUTHINTL20220809_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudauthIntl20220809Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudauthIntl20220809.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Address Similarity Comparison
       *
       * @description API for comparing two addresses, standardizing and checking address consistency.
       *
       * @param request AddressCompareIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressCompareIntlResponse
       */
      Models::AddressCompareIntlResponse addressCompareIntlWithOptions(const Models::AddressCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Address Similarity Comparison
       *
       * @description API for comparing two addresses, standardizing and checking address consistency.
       *
       * @param request AddressCompareIntlRequest
       * @return AddressCompareIntlResponse
       */
      Models::AddressCompareIntlResponse addressCompareIntl(const Models::AddressCompareIntlRequest &request);

      /**
       * @summary Address Verification
       *
       * @description Based on the operator\\"s capabilities, input the phone number and address (or latitude and longitude) to verify whether the provided address is the user\\"s usual residence.
       *
       * @param request AddressVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressVerifyIntlResponse
       */
      Models::AddressVerifyIntlResponse addressVerifyIntlWithOptions(const Models::AddressVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Address Verification
       *
       * @description Based on the operator\\"s capabilities, input the phone number and address (or latitude and longitude) to verify whether the provided address is the user\\"s usual residence.
       *
       * @param request AddressVerifyIntlRequest
       * @return AddressVerifyIntlResponse
       */
      Models::AddressVerifyIntlResponse addressVerifyIntl(const Models::AddressVerifyIntlRequest &request);

      /**
       * @summary This topic describes the address verification API operation, which verifies the region and address of a device using device data and carrier big data capabilities.
       *
       * @param request AddressVerifyV2IntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressVerifyV2IntlResponse
       */
      Models::AddressVerifyV2IntlResponse addressVerifyV2IntlWithOptions(const Models::AddressVerifyV2IntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the address verification API operation, which verifies the region and address of a device using device data and carrier big data capabilities.
       *
       * @param request AddressVerifyV2IntlRequest
       * @return AddressVerifyV2IntlResponse
       */
      Models::AddressVerifyV2IntlResponse addressVerifyV2Intl(const Models::AddressVerifyV2IntlRequest &request);

      /**
       * @summary Bank Card Verification
       *
       * @description Verification of bank card elements, including: two-element verification (name + bank card number), three-element verification (name + ID number + bank card number), and four-element verification (name + ID number + phone number + bank card number) for consistency.
       *
       * @param request BankMetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BankMetaVerifyIntlResponse
       */
      Models::BankMetaVerifyIntlResponse bankMetaVerifyIntlWithOptions(const Models::BankMetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bank Card Verification
       *
       * @description Verification of bank card elements, including: two-element verification (name + bank card number), three-element verification (name + ID number + bank card number), and four-element verification (name + ID number + phone number + bank card number) for consistency.
       *
       * @param request BankMetaVerifyIntlRequest
       * @return BankMetaVerifyIntlResponse
       */
      Models::BankMetaVerifyIntlResponse bankMetaVerifyIntl(const Models::BankMetaVerifyIntlRequest &request);

      /**
       * @deprecated OpenAPI CardOcr is deprecated, please use Cloudauth-intl::2022-08-09::DocOcr instead.
       *
       * @summary Pure server-side interface for document OCR recognition
       *
       * @param request CardOcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CardOcrResponse
       */
      Models::CardOcrResponse cardOcrWithOptions(const Models::CardOcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CardOcr is deprecated, please use Cloudauth-intl::2022-08-09::DocOcr instead.
       *
       * @summary Pure server-side interface for document OCR recognition
       *
       * @param request CardOcrRequest
       * @return CardOcrResponse
       */
      Models::CardOcrResponse cardOcr(const Models::CardOcrRequest &request);

      /**
       * @summary Result Query
       *
       * @param request CheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResultResponse
       */
      Models::CheckResultResponse checkResultWithOptions(const Models::CheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Result Query
       *
       * @param request CheckResultRequest
       * @return CheckResultResponse
       */
      Models::CheckResultResponse checkResult(const Models::CheckResultRequest &request);

      /**
       * @summary Authentication Log Query Interface
       *
       * @param request CheckVerifyLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckVerifyLogResponse
       */
      Models::CheckVerifyLogResponse checkVerifyLogWithOptions(const Models::CheckVerifyLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authentication Log Query Interface
       *
       * @param request CheckVerifyLogRequest
       * @return CheckVerifyLogResponse
       */
      Models::CheckVerifyLogResponse checkVerifyLog(const Models::CheckVerifyLogRequest &request);

      /**
       * @summary 凭证识别查询
       *
       * @param request CredentialGetResultIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialGetResultIntlResponse
       */
      Models::CredentialGetResultIntlResponse credentialGetResultIntlWithOptions(const Models::CredentialGetResultIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 凭证识别查询
       *
       * @param request CredentialGetResultIntlRequest
       * @return CredentialGetResultIntlResponse
       */
      Models::CredentialGetResultIntlResponse credentialGetResultIntl(const Models::CredentialGetResultIntlRequest &request);

      /**
       * @summary Credential Recognition
       *
       * @description Detects whether a voucher (such as water, electricity, gas, credit card, etc., e-bills) is forged using AI technology and extracts key information from the voucher.
       *
       * @param request CredentialRecognitionIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialRecognitionIntlResponse
       */
      Models::CredentialRecognitionIntlResponse credentialRecognitionIntlWithOptions(const Models::CredentialRecognitionIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Credential Recognition
       *
       * @description Detects whether a voucher (such as water, electricity, gas, credit card, etc., e-bills) is forged using AI technology and extracts key information from the voucher.
       *
       * @param request CredentialRecognitionIntlRequest
       * @return CredentialRecognitionIntlResponse
       */
      Models::CredentialRecognitionIntlResponse credentialRecognitionIntl(const Models::CredentialRecognitionIntlRequest &request);

      /**
       * @summary 凭证识别提交
       *
       * @param request CredentialSubmitIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialSubmitIntlResponse
       */
      Models::CredentialSubmitIntlResponse credentialSubmitIntlWithOptions(const Models::CredentialSubmitIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 凭证识别提交
       *
       * @param request CredentialSubmitIntlRequest
       * @return CredentialSubmitIntlResponse
       */
      Models::CredentialSubmitIntlResponse credentialSubmitIntl(const Models::CredentialSubmitIntlRequest &request);

      /**
       * @summary Credential Verification
       *
       * @description Input credential image information, perform image quality, tampering, and forgery detection, and return the detection results.
       *
       * @param request CredentialVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyIntlResponse
       */
      Models::CredentialVerifyIntlResponse credentialVerifyIntlWithOptions(const Models::CredentialVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Credential Verification
       *
       * @description Input credential image information, perform image quality, tampering, and forgery detection, and return the detection results.
       *
       * @param request CredentialVerifyIntlRequest
       * @return CredentialVerifyIntlResponse
       */
      Models::CredentialVerifyIntlResponse credentialVerifyIntl(const Models::CredentialVerifyIntlRequest &request);

      Models::CredentialVerifyIntlResponse credentialVerifyIntlAdvance(const Models::CredentialVerifyIntlAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Face Credential Verification
       *
       * @description Input a face image and use the algorithm to detect if there is a risk of deep forgery. This includes risk scenarios such as AIGC-generated faces, deepfake face swapping, template faces, and rephotographed faces, and outputs risk labels and confidence levels.
       *
       * @param request DeepfakeDetectIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeDetectIntlResponse
       */
      Models::DeepfakeDetectIntlResponse deepfakeDetectIntlWithOptions(const Models::DeepfakeDetectIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Face Credential Verification
       *
       * @description Input a face image and use the algorithm to detect if there is a risk of deep forgery. This includes risk scenarios such as AIGC-generated faces, deepfake face swapping, template faces, and rephotographed faces, and outputs risk labels and confidence levels.
       *
       * @param request DeepfakeDetectIntlRequest
       * @return DeepfakeDetectIntlResponse
       */
      Models::DeepfakeDetectIntlResponse deepfakeDetectIntl(const Models::DeepfakeDetectIntlRequest &request);

      /**
       * @summary Delete Face Group
       *
       * @param request DeleteFaceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceGroupResponse
       */
      Models::DeleteFaceGroupResponse deleteFaceGroupWithOptions(const Models::DeleteFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Face Group
       *
       * @param request DeleteFaceGroupRequest
       * @return DeleteFaceGroupResponse
       */
      Models::DeleteFaceGroupResponse deleteFaceGroup(const Models::DeleteFaceGroupRequest &request);

      /**
       * @summary Delete Face
       *
       * @param request DeleteFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceRecordResponse
       */
      Models::DeleteFaceRecordResponse deleteFaceRecordWithOptions(const Models::DeleteFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Face
       *
       * @param request DeleteFaceRecordRequest
       * @return DeleteFaceRecordResponse
       */
      Models::DeleteFaceRecordResponse deleteFaceRecord(const Models::DeleteFaceRecordRequest &request);

      /**
       * @summary Delete user authentication record results
       *
       * @param request DeleteVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVerifyResultResponse
       */
      Models::DeleteVerifyResultResponse deleteVerifyResultWithOptions(const Models::DeleteVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete user authentication record results
       *
       * @param request DeleteVerifyResultRequest
       * @return DeleteVerifyResultResponse
       */
      Models::DeleteVerifyResultResponse deleteVerifyResult(const Models::DeleteVerifyResultRequest &request);

      /**
       * @summary Card and document OCR pure server-side
       *
       * @param request DocOcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrResponse
       */
      Models::DocOcrResponse docOcrWithOptions(const Models::DocOcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Card and document OCR pure server-side
       *
       * @param request DocOcrRequest
       * @return DocOcrResponse
       */
      Models::DocOcrResponse docOcr(const Models::DocOcrRequest &request);

      /**
       * @summary Global Document OCR Recognition Interface
       *
       * @param request DocOcrMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrMaxResponse
       */
      Models::DocOcrMaxResponse docOcrMaxWithOptions(const Models::DocOcrMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Global Document OCR Recognition Interface
       *
       * @param request DocOcrMaxRequest
       * @return DocOcrMaxResponse
       */
      Models::DocOcrMaxResponse docOcrMax(const Models::DocOcrMaxRequest &request);

      /**
       * @summary This topic describes how to integrate with ID Verification using only the server-side API.
       *
       * @param request EkycVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EkycVerifyResponse
       */
      Models::EkycVerifyResponse ekycVerifyWithOptions(const Models::EkycVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to integrate with ID Verification using only the server-side API.
       *
       * @param request EkycVerifyRequest
       * @return EkycVerifyResponse
       */
      Models::EkycVerifyResponse ekycVerify(const Models::EkycVerifyRequest &request);

      /**
       * @summary This topic describes how to integrate FaceCompare using only the server-side API.
       *
       * @param request FaceCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceCompareResponse
       */
      Models::FaceCompareResponse faceCompareWithOptions(const Models::FaceCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to integrate FaceCompare using only the server-side API.
       *
       * @param request FaceCompareRequest
       * @return FaceCompareResponse
       */
      Models::FaceCompareResponse faceCompare(const Models::FaceCompareRequest &request);

      /**
       * @summary 人脸交叉比对
       *
       * @param request FaceCrossCompareIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceCrossCompareIntlResponse
       */
      Models::FaceCrossCompareIntlResponse faceCrossCompareIntlWithOptions(const Models::FaceCrossCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸交叉比对
       *
       * @param request FaceCrossCompareIntlRequest
       * @return FaceCrossCompareIntlResponse
       */
      Models::FaceCrossCompareIntlResponse faceCrossCompareIntl(const Models::FaceCrossCompareIntlRequest &request);

      /**
       * @summary Face Duplication Detection API
       *
       * @param request FaceDuplicationCheckIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceDuplicationCheckIntlResponse
       */
      Models::FaceDuplicationCheckIntlResponse faceDuplicationCheckIntlWithOptions(const Models::FaceDuplicationCheckIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Face Duplication Detection API
       *
       * @param request FaceDuplicationCheckIntlRequest
       * @return FaceDuplicationCheckIntlResponse
       */
      Models::FaceDuplicationCheckIntlResponse faceDuplicationCheckIntl(const Models::FaceDuplicationCheckIntlRequest &request);

      /**
       * @summary This topic describes how to set up the server for FACE_GUARD.
       *
       * @param request FaceGuardRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceGuardRiskResponse
       */
      Models::FaceGuardRiskResponse faceGuardRiskWithOptions(const Models::FaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes how to set up the server for FACE_GUARD.
       *
       * @param request FaceGuardRiskRequest
       * @return FaceGuardRiskResponse
       */
      Models::FaceGuardRiskResponse faceGuardRisk(const Models::FaceGuardRiskRequest &request);

      /**
       * @summary Passive liveness detection (FaceLiveness) is a service that detects whether a pre-captured facial image, submitted to an API operation, is a real face. The algorithm primarily detects presentation attacks, such as screen replays and printed photos. This service is suitable for low-risk business scen
       *
       * @param request FaceLivenessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceLivenessResponse
       */
      Models::FaceLivenessResponse faceLivenessWithOptions(const Models::FaceLivenessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Passive liveness detection (FaceLiveness) is a service that detects whether a pre-captured facial image, submitted to an API operation, is a real face. The algorithm primarily detects presentation attacks, such as screen replays and printed photos. This service is suitable for low-risk business scen
       *
       * @param request FaceLivenessRequest
       * @return FaceLivenessResponse
       */
      Models::FaceLivenessResponse faceLiveness(const Models::FaceLivenessRequest &request);

      /**
       * @summary Anti-Fraud Callback Interface
       *
       * @param request FraudResultCallBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FraudResultCallBackResponse
       */
      Models::FraudResultCallBackResponse fraudResultCallBackWithOptions(const Models::FraudResultCallBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Anti-Fraud Callback Interface
       *
       * @param request FraudResultCallBackRequest
       * @return FraudResultCallBackResponse
       */
      Models::FraudResultCallBackResponse fraudResultCallBack(const Models::FraudResultCallBackRequest &request);

      /**
       * @summary This operation verifies the authenticity and consistency of a name, ID card number, and the start and end dates of the ID card\\"s validity period against an authoritative source.
       *
       * @param request Id2MetaPeriodVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaPeriodVerifyIntlResponse
       */
      Models::Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntlWithOptions(const Models::Id2MetaPeriodVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation verifies the authenticity and consistency of a name, ID card number, and the start and end dates of the ID card\\"s validity period against an authoritative source.
       *
       * @param request Id2MetaPeriodVerifyIntlRequest
       * @return Id2MetaPeriodVerifyIntlResponse
       */
      Models::Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntl(const Models::Id2MetaPeriodVerifyIntlRequest &request);

      /**
       * @summary Verifies that a name and an ID card number are consistent.
       *
       * @param request Id2MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyIntlResponse
       */
      Models::Id2MetaVerifyIntlResponse id2MetaVerifyIntlWithOptions(const Models::Id2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies that a name and an ID card number are consistent.
       *
       * @param request Id2MetaVerifyIntlRequest
       * @return Id2MetaVerifyIntlResponse
       */
      Models::Id2MetaVerifyIntlResponse id2MetaVerifyIntl(const Models::Id2MetaVerifyIntlRequest &request);

      /**
       * @summary Authentication Initialization
       *
       * @param tmpReq InitializeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeResponse
       */
      Models::InitializeResponse initializeWithOptions(const Models::InitializeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authentication Initialization
       *
       * @param request InitializeRequest
       * @return InitializeResponse
       */
      Models::InitializeResponse initialize(const Models::InitializeRequest &request);

      /**
       * @summary If your server makes infrequent calls to the ID Verification API, you can call the KeepaliveIntl operation to maintain the client connection.
       *
       * @param request KeepaliveIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KeepaliveIntlResponse
       */
      Models::KeepaliveIntlResponse keepaliveIntlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If your server makes infrequent calls to the ID Verification API, you can call the KeepaliveIntl operation to maintain the client connection.
       *
       * @return KeepaliveIntlResponse
       */
      Models::KeepaliveIntlResponse keepaliveIntl();

      /**
       * @summary Verifies the authenticity and consistency of a mobile number and name against an authoritative data source.
       *
       * @param request Mobile2MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile2MetaVerifyIntlResponse
       */
      Models::Mobile2MetaVerifyIntlResponse mobile2MetaVerifyIntlWithOptions(const Models::Mobile2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a mobile number and name against an authoritative data source.
       *
       * @param request Mobile2MetaVerifyIntlRequest
       * @return Mobile2MetaVerifyIntlResponse
       */
      Models::Mobile2MetaVerifyIntlResponse mobile2MetaVerifyIntl(const Models::Mobile2MetaVerifyIntlRequest &request);

      /**
       * @summary International Version of Mobile Three Elements API
       *
       * @param request Mobile3MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaVerifyIntlResponse
       */
      Models::Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntlWithOptions(const Models::Mobile3MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary International Version of Mobile Three Elements API
       *
       * @param request Mobile3MetaVerifyIntlRequest
       * @return Mobile3MetaVerifyIntlResponse
       */
      Models::Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntl(const Models::Mobile3MetaVerifyIntlRequest &request);

      /**
       * @summary 修改人脸库
       *
       * @param request ModifyFaceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFaceGroupResponse
       */
      Models::ModifyFaceGroupResponse modifyFaceGroupWithOptions(const Models::ModifyFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改人脸库
       *
       * @param request ModifyFaceGroupRequest
       * @return ModifyFaceGroupResponse
       */
      Models::ModifyFaceGroupResponse modifyFaceGroup(const Models::ModifyFaceGroupRequest &request);

      /**
       * @summary 新增人脸
       *
       * @param request ModifyFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFaceRecordResponse
       */
      Models::ModifyFaceRecordResponse modifyFaceRecordWithOptions(const Models::ModifyFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增人脸
       *
       * @param request ModifyFaceRecordRequest
       * @return ModifyFaceRecordResponse
       */
      Models::ModifyFaceRecordResponse modifyFaceRecord(const Models::ModifyFaceRecordRequest &request);

      /**
       * @summary 查询人脸库
       *
       * @param request QueryFaceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceGroupResponse
       */
      Models::QueryFaceGroupResponse queryFaceGroupWithOptions(const Models::QueryFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询人脸库
       *
       * @param request QueryFaceGroupRequest
       * @return QueryFaceGroupResponse
       */
      Models::QueryFaceGroupResponse queryFaceGroup(const Models::QueryFaceGroupRequest &request);

      /**
       * @summary 查询人脸记录
       *
       * @param request QueryFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceRecordResponse
       */
      Models::QueryFaceRecordResponse queryFaceRecordWithOptions(const Models::QueryFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询人脸记录
       *
       * @param request QueryFaceRecordRequest
       * @return QueryFaceRecordResponse
       */
      Models::QueryFaceRecordResponse queryFaceRecord(const Models::QueryFaceRecordRequest &request);

      /**
       * @summary 获取临时token
       *
       * @param request TempAccessTokenIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempAccessTokenIntlResponse
       */
      Models::TempAccessTokenIntlResponse tempAccessTokenIntlWithOptions(const Models::TempAccessTokenIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取临时token
       *
       * @param request TempAccessTokenIntlRequest
       * @return TempAccessTokenIntlResponse
       */
      Models::TempAccessTokenIntlResponse tempAccessTokenIntl(const Models::TempAccessTokenIntlRequest &request);

      /**
       * @summary 获取文件临时地址
       *
       * @param request TempOssUrlIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempOssUrlIntlResponse
       */
      Models::TempOssUrlIntlResponse tempOssUrlIntlWithOptions(const Models::TempOssUrlIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件临时地址
       *
       * @param request TempOssUrlIntlRequest
       * @return TempOssUrlIntlResponse
       */
      Models::TempOssUrlIntlResponse tempOssUrlIntl(const Models::TempOssUrlIntlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
