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
       * @summary 地址相似比对
       *
       * @param request AddressCompareIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressCompareIntlResponse
       */
      Models::AddressCompareIntlResponse addressCompareIntlWithOptions(const Models::AddressCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 地址相似比对
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
       * @summary 地址核验
       *
       * @param request AddressVerifyV2IntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressVerifyV2IntlResponse
       */
      Models::AddressVerifyV2IntlResponse addressVerifyV2IntlWithOptions(const Models::AddressVerifyV2IntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 地址核验
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
       * @summary 人脸凭证核验
       *
       * @param request DeepfakeDetectIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeDetectIntlResponse
       */
      Models::DeepfakeDetectIntlResponse deepfakeDetectIntlWithOptions(const Models::DeepfakeDetectIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸凭证核验
       *
       * @param request DeepfakeDetectIntlRequest
       * @return DeepfakeDetectIntlResponse
       */
      Models::DeepfakeDetectIntlResponse deepfakeDetectIntl(const Models::DeepfakeDetectIntlRequest &request);

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
       * @summary 全球证件ocr识别接口
       *
       * @param request DocOcrMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrMaxResponse
       */
      Models::DocOcrMaxResponse docOcrMaxWithOptions(const Models::DocOcrMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 全球证件ocr识别接口
       *
       * @param request DocOcrMaxRequest
       * @return DocOcrMaxResponse
       */
      Models::DocOcrMaxResponse docOcrMax(const Models::DocOcrMaxRequest &request);

      /**
       * @summary ekyc纯服务端接口
       *
       * @param request EkycVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EkycVerifyResponse
       */
      Models::EkycVerifyResponse ekycVerifyWithOptions(const Models::EkycVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ekyc纯服务端接口
       *
       * @param request EkycVerifyRequest
       * @return EkycVerifyResponse
       */
      Models::EkycVerifyResponse ekycVerify(const Models::EkycVerifyRequest &request);

      /**
       * @summary 人脸比对
       *
       * @param request FaceCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceCompareResponse
       */
      Models::FaceCompareResponse faceCompareWithOptions(const Models::FaceCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸比对
       *
       * @param request FaceCompareRequest
       * @return FaceCompareResponse
       */
      Models::FaceCompareResponse faceCompare(const Models::FaceCompareRequest &request);

      /**
       * @summary 国际人脸保镖纯服务端接口
       *
       * @param request FaceGuardRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceGuardRiskResponse
       */
      Models::FaceGuardRiskResponse faceGuardRiskWithOptions(const Models::FaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际人脸保镖纯服务端接口
       *
       * @param request FaceGuardRiskRequest
       * @return FaceGuardRiskResponse
       */
      Models::FaceGuardRiskResponse faceGuardRisk(const Models::FaceGuardRiskRequest &request);

      /**
       * @summary 静默活体API 纯服务端
       *
       * @param request FaceLivenessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceLivenessResponse
       */
      Models::FaceLivenessResponse faceLivenessWithOptions(const Models::FaceLivenessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 静默活体API 纯服务端
       *
       * @param request FaceLivenessRequest
       * @return FaceLivenessResponse
       */
      Models::FaceLivenessResponse faceLiveness(const Models::FaceLivenessRequest &request);

      /**
       * @summary 防伪回调接口
       *
       * @param request FraudResultCallBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FraudResultCallBackResponse
       */
      Models::FraudResultCallBackResponse fraudResultCallBackWithOptions(const Models::FraudResultCallBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 防伪回调接口
       *
       * @param request FraudResultCallBackRequest
       * @return FraudResultCallBackResponse
       */
      Models::FraudResultCallBackResponse fraudResultCallBack(const Models::FraudResultCallBackRequest &request);

      /**
       * @summary 身份二要素有效期核验
       *
       * @param request Id2MetaPeriodVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaPeriodVerifyIntlResponse
       */
      Models::Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntlWithOptions(const Models::Id2MetaPeriodVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 身份二要素有效期核验
       *
       * @param request Id2MetaPeriodVerifyIntlRequest
       * @return Id2MetaPeriodVerifyIntlResponse
       */
      Models::Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntl(const Models::Id2MetaPeriodVerifyIntlRequest &request);

      /**
       * @summary 身份二要素国际版接口
       *
       * @param request Id2MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyIntlResponse
       */
      Models::Id2MetaVerifyIntlResponse id2MetaVerifyIntlWithOptions(const Models::Id2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 身份二要素国际版接口
       *
       * @param request Id2MetaVerifyIntlRequest
       * @return Id2MetaVerifyIntlResponse
       */
      Models::Id2MetaVerifyIntlResponse id2MetaVerifyIntl(const Models::Id2MetaVerifyIntlRequest &request);

      /**
       * @summary 认证初始化
       *
       * @param tmpReq InitializeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeResponse
       */
      Models::InitializeResponse initializeWithOptions(const Models::InitializeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 认证初始化
       *
       * @param request InitializeRequest
       * @return InitializeResponse
       */
      Models::InitializeResponse initialize(const Models::InitializeRequest &request);

      /**
       * @summary 客户端连接保持
       *
       * @param request KeepaliveIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KeepaliveIntlResponse
       */
      Models::KeepaliveIntlResponse keepaliveIntlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户端连接保持
       *
       * @return KeepaliveIntlResponse
       */
      Models::KeepaliveIntlResponse keepaliveIntl();

      /**
       * @summary 手机号二要素核验API
       *
       * @param request Mobile2MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile2MetaVerifyIntlResponse
       */
      Models::Mobile2MetaVerifyIntlResponse mobile2MetaVerifyIntlWithOptions(const Models::Mobile2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 手机号二要素核验API
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
  };
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
