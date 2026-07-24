// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDAUTHINTL20220809_HPP_
#define ALIBABACLOUD_CLOUDAUTHINTL20220809_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudauthIntl20220809Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/CloudauthIntl20220809.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a face image to a specified face library.
       *
       * @param request AddFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceRecordResponse
       */
      Models::AddFaceRecordResponse addFaceRecordWithOptions(const Models::AddFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a face image to a specified face library.
       *
       * @param request AddFaceRecordRequest
       * @return AddFaceRecordResponse
       */
      Models::AddFaceRecordResponse addFaceRecord(const Models::AddFaceRecordRequest &request);

      Models::AddFaceRecordResponse addFaceRecordAdvance(const Models::AddFaceRecordAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares the similarity of two addresses.
       *
       * @description Compares two addresses for consistency by using address standardization.
       *
       * @param request AddressCompareIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressCompareIntlResponse
       */
      Models::AddressCompareIntlResponse addressCompareIntlWithOptions(const Models::AddressCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares the similarity of two addresses.
       *
       * @description Compares two addresses for consistency by using address standardization.
       *
       * @param request AddressCompareIntlRequest
       * @return AddressCompareIntlResponse
       */
      Models::AddressCompareIntlResponse addressCompareIntl(const Models::AddressCompareIntlRequest &request);

      /**
       * @deprecated OpenAPI AddressVerifyIntl is deprecated, please use Cloudauth-intl::2022-08-09::AddressVerifyV2Intl instead.
       *
       * @summary Verifies whether a specified address belongs to a user\\"s residential address based on telecommunications service provider capabilities, using a phone number and an address (or coordinates).
       *
       * @description Verifies whether a specified address belongs to a user\\"s residential address based on telecommunications service provider capabilities, using a phone number and an address (or coordinates).
       *
       * @param request AddressVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressVerifyIntlResponse
       */
      Models::AddressVerifyIntlResponse addressVerifyIntlWithOptions(const Models::AddressVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddressVerifyIntl is deprecated, please use Cloudauth-intl::2022-08-09::AddressVerifyV2Intl instead.
       *
       * @summary Verifies whether a specified address belongs to a user\\"s residential address based on telecommunications service provider capabilities, using a phone number and an address (or coordinates).
       *
       * @description Verifies whether a specified address belongs to a user\\"s residential address based on telecommunications service provider capabilities, using a phone number and an address (or coordinates).
       *
       * @param request AddressVerifyIntlRequest
       * @return AddressVerifyIntlResponse
       */
      Models::AddressVerifyIntlResponse addressVerifyIntl(const Models::AddressVerifyIntlRequest &request);

      /**
       * @summary Verifies an address.
       *
       * @param request AddressVerifyV2IntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressVerifyV2IntlResponse
       */
      Models::AddressVerifyV2IntlResponse addressVerifyV2IntlWithOptions(const Models::AddressVerifyV2IntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies an address.
       *
       * @param request AddressVerifyV2IntlRequest
       * @return AddressVerifyV2IntlResponse
       */
      Models::AddressVerifyV2IntlResponse addressVerifyV2Intl(const Models::AddressVerifyV2IntlRequest &request);

      /**
       * @summary Provides bank card element verification (two-element, three-element, and four-element) API operations.
       *
       * @description Verifies bank card elements, including two-element verification (name + bank card number), three-element verification (name + ID card number + bank card number), and four-element verification (name + ID card number + phone number + bank card number) for consistency.
       *
       * @param request BankMetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BankMetaVerifyIntlResponse
       */
      Models::BankMetaVerifyIntlResponse bankMetaVerifyIntlWithOptions(const Models::BankMetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides bank card element verification (two-element, three-element, and four-element) API operations.
       *
       * @description Verifies bank card elements, including two-element verification (name + bank card number), three-element verification (name + ID card number + bank card number), and four-element verification (name + ID card number + phone number + bank card number) for consistency.
       *
       * @param request BankMetaVerifyIntlRequest
       * @return BankMetaVerifyIntlResponse
       */
      Models::BankMetaVerifyIntlResponse bankMetaVerifyIntl(const Models::BankMetaVerifyIntlRequest &request);

      /**
       * @deprecated OpenAPI CardOcr is deprecated, please use Cloudauth-intl::2022-08-09::DocOcr instead.
       *
       * @summary Provides server-side ID card and certificate OCR capabilities.
       *
       * @param request CardOcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CardOcrResponse
       */
      Models::CardOcrResponse cardOcrWithOptions(const Models::CardOcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CardOcr is deprecated, please use Cloudauth-intl::2022-08-09::DocOcr instead.
       *
       * @summary Provides server-side ID card and certificate OCR capabilities.
       *
       * @param request CardOcrRequest
       * @return CardOcrResponse
       */
      Models::CardOcrResponse cardOcr(const Models::CardOcrRequest &request);

      /**
       * @summary Queries the verification result.
       *
       * @param request CheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResultResponse
       */
      Models::CheckResultResponse checkResultWithOptions(const Models::CheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the verification result.
       *
       * @param request CheckResultRequest
       * @return CheckResultResponse
       */
      Models::CheckResultResponse checkResult(const Models::CheckResultRequest &request);

      /**
       * @summary Authentication log query.
       *
       * @param request CheckVerifyLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckVerifyLogResponse
       */
      Models::CheckVerifyLogResponse checkVerifyLogWithOptions(const Models::CheckVerifyLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authentication log query.
       *
       * @param request CheckVerifyLogRequest
       * @return CheckVerifyLogResponse
       */
      Models::CheckVerifyLogResponse checkVerifyLog(const Models::CheckVerifyLogRequest &request);

      /**
       * @summary Queries the credential recognition result.
       *
       * @description After you obtain the TransactionId, you can call this operation on the server side to retrieve the corresponding authentication result.
       *
       * @param request CredentialGetResultIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialGetResultIntlResponse
       */
      Models::CredentialGetResultIntlResponse credentialGetResultIntlWithOptions(const Models::CredentialGetResultIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential recognition result.
       *
       * @description After you obtain the TransactionId, you can call this operation on the server side to retrieve the corresponding authentication result.
       *
       * @param request CredentialGetResultIntlRequest
       * @return CredentialGetResultIntlResponse
       */
      Models::CredentialGetResultIntlResponse credentialGetResultIntl(const Models::CredentialGetResultIntlRequest &request);

      /**
       * @summary An API operation that uploads a credential image, such as a utility bill or credit card statement, and uses Qwen-VL to intelligently fetch the billing address and name from the credential.
       *
       * @description Uses AI technology to detect whether a credential (such as a water, electricity, gas, or credit card electronic bill) has been forged, and extracts key information from the credential.
       *
       * @param request CredentialRecognitionIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialRecognitionIntlResponse
       */
      Models::CredentialRecognitionIntlResponse credentialRecognitionIntlWithOptions(const Models::CredentialRecognitionIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An API operation that uploads a credential image, such as a utility bill or credit card statement, and uses Qwen-VL to intelligently fetch the billing address and name from the credential.
       *
       * @description Uses AI technology to detect whether a credential (such as a water, electricity, gas, or credit card electronic bill) has been forged, and extracts key information from the credential.
       *
       * @param request CredentialRecognitionIntlRequest
       * @return CredentialRecognitionIntlResponse
       */
      Models::CredentialRecognitionIntlResponse credentialRecognitionIntl(const Models::CredentialRecognitionIntlRequest &request);

      /**
       * @summary Submits credential recognition information.
       *
       * @description Initializes the credential recognition OCR operation and retrieves a transactionId.
       *
       * @param request CredentialSubmitIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialSubmitIntlResponse
       */
      Models::CredentialSubmitIntlResponse credentialSubmitIntlWithOptions(const Models::CredentialSubmitIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits credential recognition information.
       *
       * @description Initializes the credential recognition OCR operation and retrieves a transactionId.
       *
       * @param request CredentialSubmitIntlRequest
       * @return CredentialSubmitIntlResponse
       */
      Models::CredentialSubmitIntlResponse credentialSubmitIntl(const Models::CredentialSubmitIntlRequest &request);

      /**
       * @summary Provides the API operation for the credential verification service. This operation uses a large language model to detect image tampering, forgery, and image quality issues in submitted credential images.
       *
       * @description Submits credential image information, performs image quality, tampering, and forgery detection, and returns the detection results.
       *
       * @param request CredentialVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CredentialVerifyIntlResponse
       */
      Models::CredentialVerifyIntlResponse credentialVerifyIntlWithOptions(const Models::CredentialVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the API operation for the credential verification service. This operation uses a large language model to detect image tampering, forgery, and image quality issues in submitted credential images.
       *
       * @description Submits credential image information, performs image quality, tampering, and forgery detection, and returns the detection results.
       *
       * @param request CredentialVerifyIntlRequest
       * @return CredentialVerifyIntlResponse
       */
      Models::CredentialVerifyIntlResponse credentialVerifyIntl(const Models::CredentialVerifyIntlRequest &request);

      Models::CredentialVerifyIntlResponse credentialVerifyIntlAdvance(const Models::CredentialVerifyIntlAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects deepfake risks in facial images.
       *
       * @description Submits a facial image and uses algorithms to detect potential deepfake risks. This operation covers risk scenarios such as AIGC-generated faces, deep forgery face swaps, template faces, and recaptured faces. It returns risk labels and confidence scores.
       *
       * @param request DeepfakeDetectIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeDetectIntlResponse
       */
      Models::DeepfakeDetectIntlResponse deepfakeDetectIntlWithOptions(const Models::DeepfakeDetectIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects deepfake risks in facial images.
       *
       * @description Submits a facial image and uses algorithms to detect potential deepfake risks. This operation covers risk scenarios such as AIGC-generated faces, deep forgery face swaps, template faces, and recaptured faces. It returns risk labels and confidence scores.
       *
       * @param request DeepfakeDetectIntlRequest
       * @return DeepfakeDetectIntlResponse
       */
      Models::DeepfakeDetectIntlResponse deepfakeDetectIntl(const Models::DeepfakeDetectIntlRequest &request);

      /**
       * @summary ID Verification provides face deepfake detection capabilities, which can be integrated independently through API calls.
       *
       * @description Submit a face image to detect deepfake risks through algorithms. This covers risk scenarios such as AIGC-generated faces, deep forgery face swaps, template faces, and re-captured faces, and outputs risk labels and confidence scores.
       *
       * @param request DeepfakeDetectIntlStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeDetectIntlStreamResponse
       */
      Models::DeepfakeDetectIntlStreamResponse deepfakeDetectIntlStreamWithOptions(const Models::DeepfakeDetectIntlStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ID Verification provides face deepfake detection capabilities, which can be integrated independently through API calls.
       *
       * @description Submit a face image to detect deepfake risks through algorithms. This covers risk scenarios such as AIGC-generated faces, deep forgery face swaps, template faces, and re-captured faces, and outputs risk labels and confidence scores.
       *
       * @param request DeepfakeDetectIntlStreamRequest
       * @return DeepfakeDetectIntlStreamResponse
       */
      Models::DeepfakeDetectIntlStreamResponse deepfakeDetectIntlStream(const Models::DeepfakeDetectIntlStreamRequest &request);

      Models::DeepfakeDetectIntlStreamResponse deepfakeDetectIntlStreamAdvance(const Models::DeepfakeDetectIntlStreamAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a face library.
       *
       * @param request DeleteFaceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceGroupResponse
       */
      Models::DeleteFaceGroupResponse deleteFaceGroupWithOptions(const Models::DeleteFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a face library.
       *
       * @param request DeleteFaceGroupRequest
       * @return DeleteFaceGroupResponse
       */
      Models::DeleteFaceGroupResponse deleteFaceGroup(const Models::DeleteFaceGroupRequest &request);

      /**
       * @summary Deletes a face record.
       *
       * @param request DeleteFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceRecordResponse
       */
      Models::DeleteFaceRecordResponse deleteFaceRecordWithOptions(const Models::DeleteFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a face record.
       *
       * @param request DeleteFaceRecordRequest
       * @return DeleteFaceRecordResponse
       */
      Models::DeleteFaceRecordResponse deleteFaceRecord(const Models::DeleteFaceRecordRequest &request);

      /**
       * @summary Deletes a face record.
       *
       * @param request DeleteFaceRecordV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceRecordV2Response
       */
      Models::DeleteFaceRecordV2Response deleteFaceRecordV2WithOptions(const Models::DeleteFaceRecordV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a face record.
       *
       * @param request DeleteFaceRecordV2Request
       * @return DeleteFaceRecordV2Response
       */
      Models::DeleteFaceRecordV2Response deleteFaceRecordV2(const Models::DeleteFaceRecordV2Request &request);

      /**
       * @summary Deletes data related to a user authentication record.
       *
       * @param request DeleteVerifyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVerifyResultResponse
       */
      Models::DeleteVerifyResultResponse deleteVerifyResultWithOptions(const Models::DeleteVerifyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes data related to a user authentication record.
       *
       * @param request DeleteVerifyResultRequest
       * @return DeleteVerifyResultResponse
       */
      Models::DeleteVerifyResultResponse deleteVerifyResult(const Models::DeleteVerifyResultRequest &request);

      /**
       * @summary Provides server-side card and certificate OCR capabilities.
       *
       * @param request DocOcrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrResponse
       */
      Models::DocOcrResponse docOcrWithOptions(const Models::DocOcrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides server-side card and certificate OCR capabilities.
       *
       * @param request DocOcrRequest
       * @return DocOcrResponse
       */
      Models::DocOcrResponse docOcr(const Models::DocOcrRequest &request);

      /**
       * @summary Recognizes global identity documents through OCR.
       *
       * @param request DocOcrMaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrMaxResponse
       */
      Models::DocOcrMaxResponse docOcrMaxWithOptions(const Models::DocOcrMaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recognizes global identity documents through OCR.
       *
       * @param request DocOcrMaxRequest
       * @return DocOcrMaxResponse
       */
      Models::DocOcrMaxResponse docOcrMax(const Models::DocOcrMaxRequest &request);

      /**
       * @summary Recognizes identity documents worldwide through OCR.
       *
       * @param request DocOcrMaxV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrMaxV2Response
       */
      Models::DocOcrMaxV2Response docOcrMaxV2WithOptions(const Models::DocOcrMaxV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recognizes identity documents worldwide through OCR.
       *
       * @param request DocOcrMaxV2Request
       * @return DocOcrMaxV2Response
       */
      Models::DocOcrMaxV2Response docOcrMaxV2(const Models::DocOcrMaxV2Request &request);

      Models::DocOcrMaxV2Response docOcrMaxV2Advance(const Models::DocOcrMaxV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides server-side card and certificate OCR capabilities.
       *
       * @param request DocOcrV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocOcrV2Response
       */
      Models::DocOcrV2Response docOcrV2WithOptions(const Models::DocOcrV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides server-side card and certificate OCR capabilities.
       *
       * @param request DocOcrV2Request
       * @return DocOcrV2Response
       */
      Models::DocOcrV2Response docOcrV2(const Models::DocOcrV2Request &request);

      Models::DocOcrV2Response docOcrV2Advance(const Models::DocOcrV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads verification task records.
       *
       * @param request DownloadVerifyRecordIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadVerifyRecordIntlResponse
       */
      Models::DownloadVerifyRecordIntlResponse downloadVerifyRecordIntlWithOptions(const Models::DownloadVerifyRecordIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads verification task records.
       *
       * @param request DownloadVerifyRecordIntlRequest
       * @return DownloadVerifyRecordIntlResponse
       */
      Models::DownloadVerifyRecordIntlResponse downloadVerifyRecordIntl(const Models::DownloadVerifyRecordIntlRequest &request);

      /**
       * @summary Provides a server-side-only API for the eKYC solution.
       *
       * @param request EkycVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EkycVerifyResponse
       */
      Models::EkycVerifyResponse ekycVerifyWithOptions(const Models::EkycVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides a server-side-only API for the eKYC solution.
       *
       * @param request EkycVerifyRequest
       * @return EkycVerifyResponse
       */
      Models::EkycVerifyResponse ekycVerify(const Models::EkycVerifyRequest &request);

      /**
       * @summary The eKYC solution server-side API.
       *
       * @param request EkycVerifyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return EkycVerifyV2Response
       */
      Models::EkycVerifyV2Response ekycVerifyV2WithOptions(const Models::EkycVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The eKYC solution server-side API.
       *
       * @param request EkycVerifyV2Request
       * @return EkycVerifyV2Response
       */
      Models::EkycVerifyV2Response ekycVerifyV2(const Models::EkycVerifyV2Request &request);

      Models::EkycVerifyV2Response ekycVerifyV2Advance(const Models::EkycVerifyV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses facial recognition technology to compare and verify two input face images, returning the face comparison result and similarity score.
       *
       * @param request FaceCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceCompareResponse
       */
      Models::FaceCompareResponse faceCompareWithOptions(const Models::FaceCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses facial recognition technology to compare and verify two input face images, returning the face comparison result and similarity score.
       *
       * @param request FaceCompareRequest
       * @return FaceCompareResponse
       */
      Models::FaceCompareResponse faceCompare(const Models::FaceCompareRequest &request);

      /**
       * @summary Compares two face images by using face recognition technology and returns the comparison result and a similarity score.
       *
       * @param request FaceCompareV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceCompareV2Response
       */
      Models::FaceCompareV2Response faceCompareV2WithOptions(const Models::FaceCompareV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares two face images by using face recognition technology and returns the comparison result and a similarity score.
       *
       * @param request FaceCompareV2Request
       * @return FaceCompareV2Response
       */
      Models::FaceCompareV2Response faceCompareV2(const Models::FaceCompareV2Request &request);

      Models::FaceCompareV2Response faceCompareV2Advance(const Models::FaceCompareV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs cross-comparison of faces.
       *
       * @param request FaceCrossCompareIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceCrossCompareIntlResponse
       */
      Models::FaceCrossCompareIntlResponse faceCrossCompareIntlWithOptions(const Models::FaceCrossCompareIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs cross-comparison of faces.
       *
       * @param request FaceCrossCompareIntlRequest
       * @return FaceCrossCompareIntlResponse
       */
      Models::FaceCrossCompareIntlResponse faceCrossCompareIntl(const Models::FaceCrossCompareIntlRequest &request);

      /**
       * @summary Performs face duplication check (FaceDuplicationCheckIntl) for scenarios where SDK integration is not feasible. Submits face images through the API to verify whether a user is a real person, compare the face against a stored face image for identity verification, search a face library to determine whether the face already exists, and automatically register the face in a specified face library after successful verification.
       *
       * @param request FaceDuplicationCheckIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceDuplicationCheckIntlResponse
       */
      Models::FaceDuplicationCheckIntlResponse faceDuplicationCheckIntlWithOptions(const Models::FaceDuplicationCheckIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs face duplication check (FaceDuplicationCheckIntl) for scenarios where SDK integration is not feasible. Submits face images through the API to verify whether a user is a real person, compare the face against a stored face image for identity verification, search a face library to determine whether the face already exists, and automatically register the face in a specified face library after successful verification.
       *
       * @param request FaceDuplicationCheckIntlRequest
       * @return FaceDuplicationCheckIntlResponse
       */
      Models::FaceDuplicationCheckIntlResponse faceDuplicationCheckIntl(const Models::FaceDuplicationCheckIntlRequest &request);

      /**
       * @summary Server-side API for the international Face Guard service.
       *
       * @param request FaceGuardRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceGuardRiskResponse
       */
      Models::FaceGuardRiskResponse faceGuardRiskWithOptions(const Models::FaceGuardRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Server-side API for the international Face Guard service.
       *
       * @param request FaceGuardRiskRequest
       * @return FaceGuardRiskResponse
       */
      Models::FaceGuardRiskResponse faceGuardRisk(const Models::FaceGuardRiskRequest &request);

      /**
       * @summary Provides the server-side API for passive liveness detection.
       *
       * @param request FaceLivenessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceLivenessResponse
       */
      Models::FaceLivenessResponse faceLivenessWithOptions(const Models::FaceLivenessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the server-side API for passive liveness detection.
       *
       * @param request FaceLivenessRequest
       * @return FaceLivenessResponse
       */
      Models::FaceLivenessResponse faceLiveness(const Models::FaceLivenessRequest &request);

      /**
       * @summary Detects whether a face in an image is from a real person by using the API operation. This service combines the Qwen-VL large model for in-depth forgery risk detection to determine face liveness.
       *
       * @description Calls the FaceLivenessV2 operation to perform liveness detection on a face image.
       *
       * @param request FaceLivenessV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceLivenessV2Response
       */
      Models::FaceLivenessV2Response faceLivenessV2WithOptions(const Models::FaceLivenessV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects whether a face in an image is from a real person by using the API operation. This service combines the Qwen-VL large model for in-depth forgery risk detection to determine face liveness.
       *
       * @description Calls the FaceLivenessV2 operation to perform liveness detection on a face image.
       *
       * @param request FaceLivenessV2Request
       * @return FaceLivenessV2Response
       */
      Models::FaceLivenessV2Response faceLivenessV2(const Models::FaceLivenessV2Request &request);

      Models::FaceLivenessV2Response faceLivenessV2Advance(const Models::FaceLivenessV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs real face detection by using face images obtained in advance through an API operation. The algorithm identifies whether a face is a screen recapture or printed photo to detect basic presentation liveness attacks that render such attack types, and supports comparison with another face image to authenticate whether they belong to the same person.
       *
       * @description Calls the FaceVerifyIntl operation to perform liveness detection on face images.
       *
       * @param request FaceVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceVerifyIntlResponse
       */
      Models::FaceVerifyIntlResponse faceVerifyIntlWithOptions(const Models::FaceVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs real face detection by using face images obtained in advance through an API operation. The algorithm identifies whether a face is a screen recapture or printed photo to detect basic presentation liveness attacks that render such attack types, and supports comparison with another face image to authenticate whether they belong to the same person.
       *
       * @description Calls the FaceVerifyIntl operation to perform liveness detection on face images.
       *
       * @param request FaceVerifyIntlRequest
       * @return FaceVerifyIntlResponse
       */
      Models::FaceVerifyIntlResponse faceVerifyIntl(const Models::FaceVerifyIntlRequest &request);

      Models::FaceVerifyIntlResponse faceVerifyIntlAdvance(const Models::FaceVerifyIntlAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI FraudResultCallBack is deprecated
       *
       * @summary Calls the eKYC global anti-spoofing callback operation.
       *
       * @param request FraudResultCallBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FraudResultCallBackResponse
       */
      Models::FraudResultCallBackResponse fraudResultCallBackWithOptions(const Models::FraudResultCallBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI FraudResultCallBack is deprecated
       *
       * @summary Calls the eKYC global anti-spoofing callback operation.
       *
       * @param request FraudResultCallBackRequest
       * @return FraudResultCallBackResponse
       */
      Models::FraudResultCallBackResponse fraudResultCallBack(const Models::FraudResultCallBackRequest &request);

      /**
       * @summary Verifies the validity period of an identity document as a two-factor authentication element.
       *
       * @param request Id2MetaPeriodVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaPeriodVerifyIntlResponse
       */
      Models::Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntlWithOptions(const Models::Id2MetaPeriodVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the validity period of an identity document as a two-factor authentication element.
       *
       * @param request Id2MetaPeriodVerifyIntlRequest
       * @return Id2MetaPeriodVerifyIntlResponse
       */
      Models::Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntl(const Models::Id2MetaPeriodVerifyIntlRequest &request);

      /**
       * @summary Verifies the authenticity and consistency of a name and ID card number against an authoritative data source.
       *
       * @param request Id2MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Id2MetaVerifyIntlResponse
       */
      Models::Id2MetaVerifyIntlResponse id2MetaVerifyIntlWithOptions(const Models::Id2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a name and ID card number against an authoritative data source.
       *
       * @param request Id2MetaVerifyIntlRequest
       * @return Id2MetaVerifyIntlResponse
       */
      Models::Id2MetaVerifyIntlResponse id2MetaVerifyIntl(const Models::Id2MetaVerifyIntlRequest &request);

      /**
       * @summary Verifies the identity of an Indonesian user by calling the authoritative source API in a standalone business scenario.
       *
       * @param request IdnAuthorityVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IdnAuthorityVerifyIntlResponse
       */
      Models::IdnAuthorityVerifyIntlResponse idnAuthorityVerifyIntlWithOptions(const Models::IdnAuthorityVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the identity of an Indonesian user by calling the authoritative source API in a standalone business scenario.
       *
       * @param request IdnAuthorityVerifyIntlRequest
       * @return IdnAuthorityVerifyIntlResponse
       */
      Models::IdnAuthorityVerifyIntlResponse idnAuthorityVerifyIntl(const Models::IdnAuthorityVerifyIntlRequest &request);

      Models::IdnAuthorityVerifyIntlResponse idnAuthorityVerifyIntlAdvance(const Models::IdnAuthorityVerifyIntlAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes an authentication session.
       *
       * @param tmpReq InitializeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeResponse
       */
      Models::InitializeResponse initializeWithOptions(const Models::InitializeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes an authentication session.
       *
       * @param request InitializeRequest
       * @return InitializeResponse
       */
      Models::InitializeResponse initialize(const Models::InitializeRequest &request);

      /**
       * @summary Initializes an authentication session.
       *
       * @param tmpReq InitializeV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeV2Response
       */
      Models::InitializeV2Response initializeV2WithOptions(const Models::InitializeV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes an authentication session.
       *
       * @param request InitializeV2Request
       * @return InitializeV2Response
       */
      Models::InitializeV2Response initializeV2(const Models::InitializeV2Request &request);

      Models::InitializeV2Response initializeV2Advance(const Models::InitializeV2AdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures client connection keep-alive settings.
       *
       * @description Configures client connection keep-alive settings.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return KeepaliveIntlResponse
       */
      Models::KeepaliveIntlResponse keepaliveIntlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures client connection keep-alive settings.
       *
       * @description Configures client connection keep-alive settings.
       *
       * @return KeepaliveIntlResponse
       */
      Models::KeepaliveIntlResponse keepaliveIntl();

      /**
       * @summary Verifies the identity of a phone number owner by using two-factor authentication.
       *
       * @description Pass in a phone number and name to verify their authenticity and consistency through an authoritative data source. Before using this operation, make sure that you fully understand the billing method and pricing of the two-factor phone number verification service.
       *
       * @param request Mobile2MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile2MetaVerifyIntlResponse
       */
      Models::Mobile2MetaVerifyIntlResponse mobile2MetaVerifyIntlWithOptions(const Models::Mobile2MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the identity of a phone number owner by using two-factor authentication.
       *
       * @description Pass in a phone number and name to verify their authenticity and consistency through an authoritative data source. Before using this operation, make sure that you fully understand the billing method and pricing of the two-factor phone number verification service.
       *
       * @param request Mobile2MetaVerifyIntlRequest
       * @return Mobile2MetaVerifyIntlResponse
       */
      Models::Mobile2MetaVerifyIntlResponse mobile2MetaVerifyIntl(const Models::Mobile2MetaVerifyIntlRequest &request);

      /**
       * @summary Verifies the authenticity and consistency of a phone number, name, and ID card number against an authoritative data source. If the information is inconsistent, returns the reason for the inconsistency.
       *
       * @param request Mobile3MetaVerifyIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return Mobile3MetaVerifyIntlResponse
       */
      Models::Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntlWithOptions(const Models::Mobile3MetaVerifyIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the authenticity and consistency of a phone number, name, and ID card number against an authoritative data source. If the information is inconsistent, returns the reason for the inconsistency.
       *
       * @param request Mobile3MetaVerifyIntlRequest
       * @return Mobile3MetaVerifyIntlResponse
       */
      Models::Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntl(const Models::Mobile3MetaVerifyIntlRequest &request);

      /**
       * @summary Modifies a face library.
       *
       * @param request ModifyFaceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFaceGroupResponse
       */
      Models::ModifyFaceGroupResponse modifyFaceGroupWithOptions(const Models::ModifyFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a face library.
       *
       * @param request ModifyFaceGroupRequest
       * @return ModifyFaceGroupResponse
       */
      Models::ModifyFaceGroupResponse modifyFaceGroup(const Models::ModifyFaceGroupRequest &request);

      /**
       * @summary Edits a face record.
       *
       * @param request ModifyFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFaceRecordResponse
       */
      Models::ModifyFaceRecordResponse modifyFaceRecordWithOptions(const Models::ModifyFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a face record.
       *
       * @param request ModifyFaceRecordRequest
       * @return ModifyFaceRecordResponse
       */
      Models::ModifyFaceRecordResponse modifyFaceRecord(const Models::ModifyFaceRecordRequest &request);

      /**
       * @summary Queries face libraries.
       *
       * @param request QueryFaceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceGroupResponse
       */
      Models::QueryFaceGroupResponse queryFaceGroupWithOptions(const Models::QueryFaceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries face libraries.
       *
       * @param request QueryFaceGroupRequest
       * @return QueryFaceGroupResponse
       */
      Models::QueryFaceGroupResponse queryFaceGroup(const Models::QueryFaceGroupRequest &request);

      /**
       * @summary Queries face records.
       *
       * @param request QueryFaceRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceRecordResponse
       */
      Models::QueryFaceRecordResponse queryFaceRecordWithOptions(const Models::QueryFaceRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries face records.
       *
       * @param request QueryFaceRecordRequest
       * @return QueryFaceRecordResponse
       */
      Models::QueryFaceRecordResponse queryFaceRecord(const Models::QueryFaceRecordRequest &request);

      /**
       * @summary Retrieves a temporary token.
       *
       * @param request TempAccessTokenIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempAccessTokenIntlResponse
       */
      Models::TempAccessTokenIntlResponse tempAccessTokenIntlWithOptions(const Models::TempAccessTokenIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a temporary token.
       *
       * @param request TempAccessTokenIntlRequest
       * @return TempAccessTokenIntlResponse
       */
      Models::TempAccessTokenIntlResponse tempAccessTokenIntl(const Models::TempAccessTokenIntlRequest &request);

      /**
       * @summary Retrieves a temporary URL for a file.
       *
       * @param request TempOssUrlIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempOssUrlIntlResponse
       */
      Models::TempOssUrlIntlResponse tempOssUrlIntlWithOptions(const Models::TempOssUrlIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a temporary URL for a file.
       *
       * @param request TempOssUrlIntlRequest
       * @return TempOssUrlIntlResponse
       */
      Models::TempOssUrlIntlResponse tempOssUrlIntl(const Models::TempOssUrlIntlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
