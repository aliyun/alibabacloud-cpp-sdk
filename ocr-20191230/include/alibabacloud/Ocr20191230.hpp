// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OCR20191230_HPP_
#define ALIBABACLOUD_OCR20191230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ocr20191230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ocr20191230.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request GetAsyncJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResultWithOptions(const Models::GetAsyncJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsyncJobResultRequest
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResult(const Models::GetAsyncJobResultRequest &request);

      /**
       * @param request RecognizeBankCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeBankCardResponse
       */
      Models::RecognizeBankCardResponse recognizeBankCardWithOptions(const Models::RecognizeBankCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeBankCardRequest
       * @return RecognizeBankCardResponse
       */
      Models::RecognizeBankCardResponse recognizeBankCard(const Models::RecognizeBankCardRequest &request);

      Models::RecognizeBankCardResponse recognizeBankCardAdvance(const Models::RecognizeBankCardAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeBusinessLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeBusinessLicenseResponse
       */
      Models::RecognizeBusinessLicenseResponse recognizeBusinessLicenseWithOptions(const Models::RecognizeBusinessLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeBusinessLicenseRequest
       * @return RecognizeBusinessLicenseResponse
       */
      Models::RecognizeBusinessLicenseResponse recognizeBusinessLicense(const Models::RecognizeBusinessLicenseRequest &request);

      Models::RecognizeBusinessLicenseResponse recognizeBusinessLicenseAdvance(const Models::RecognizeBusinessLicenseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeCharacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeCharacterResponse
       */
      Models::RecognizeCharacterResponse recognizeCharacterWithOptions(const Models::RecognizeCharacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeCharacterRequest
       * @return RecognizeCharacterResponse
       */
      Models::RecognizeCharacterResponse recognizeCharacter(const Models::RecognizeCharacterRequest &request);

      Models::RecognizeCharacterResponse recognizeCharacterAdvance(const Models::RecognizeCharacterAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeDriverLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeDriverLicenseResponse
       */
      Models::RecognizeDriverLicenseResponse recognizeDriverLicenseWithOptions(const Models::RecognizeDriverLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeDriverLicenseRequest
       * @return RecognizeDriverLicenseResponse
       */
      Models::RecognizeDriverLicenseResponse recognizeDriverLicense(const Models::RecognizeDriverLicenseRequest &request);

      Models::RecognizeDriverLicenseResponse recognizeDriverLicenseAdvance(const Models::RecognizeDriverLicenseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeDrivingLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeDrivingLicenseResponse
       */
      Models::RecognizeDrivingLicenseResponse recognizeDrivingLicenseWithOptions(const Models::RecognizeDrivingLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeDrivingLicenseRequest
       * @return RecognizeDrivingLicenseResponse
       */
      Models::RecognizeDrivingLicenseResponse recognizeDrivingLicense(const Models::RecognizeDrivingLicenseRequest &request);

      Models::RecognizeDrivingLicenseResponse recognizeDrivingLicenseAdvance(const Models::RecognizeDrivingLicenseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeIdentityCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeIdentityCardResponse
       */
      Models::RecognizeIdentityCardResponse recognizeIdentityCardWithOptions(const Models::RecognizeIdentityCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeIdentityCardRequest
       * @return RecognizeIdentityCardResponse
       */
      Models::RecognizeIdentityCardResponse recognizeIdentityCard(const Models::RecognizeIdentityCardRequest &request);

      Models::RecognizeIdentityCardResponse recognizeIdentityCardAdvance(const Models::RecognizeIdentityCardAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeLicensePlateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeLicensePlateResponse
       */
      Models::RecognizeLicensePlateResponse recognizeLicensePlateWithOptions(const Models::RecognizeLicensePlateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeLicensePlateRequest
       * @return RecognizeLicensePlateResponse
       */
      Models::RecognizeLicensePlateResponse recognizeLicensePlate(const Models::RecognizeLicensePlateRequest &request);

      Models::RecognizeLicensePlateResponse recognizeLicensePlateAdvance(const Models::RecognizeLicensePlateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PDF识别
       *
       * @param request RecognizePdfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizePdfResponse
       */
      Models::RecognizePdfResponse recognizePdfWithOptions(const Models::RecognizePdfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PDF识别
       *
       * @param request RecognizePdfRequest
       * @return RecognizePdfResponse
       */
      Models::RecognizePdfResponse recognizePdf(const Models::RecognizePdfRequest &request);

      Models::RecognizePdfResponse recognizePdfAdvance(const Models::RecognizePdfAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeQrCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeQrCodeResponse
       */
      Models::RecognizeQrCodeResponse recognizeQrCodeWithOptions(const Models::RecognizeQrCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeQrCodeRequest
       * @return RecognizeQrCodeResponse
       */
      Models::RecognizeQrCodeResponse recognizeQrCode(const Models::RecognizeQrCodeRequest &request);

      Models::RecognizeQrCodeResponse recognizeQrCodeAdvance(const Models::RecognizeQrCodeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 定额发票识别
       *
       * @param request RecognizeQuotaInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeQuotaInvoiceResponse
       */
      Models::RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceWithOptions(const Models::RecognizeQuotaInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 定额发票识别
       *
       * @param request RecognizeQuotaInvoiceRequest
       * @return RecognizeQuotaInvoiceResponse
       */
      Models::RecognizeQuotaInvoiceResponse recognizeQuotaInvoice(const Models::RecognizeQuotaInvoiceRequest &request);

      Models::RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceAdvance(const Models::RecognizeQuotaInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeTableResponse
       */
      Models::RecognizeTableResponse recognizeTableWithOptions(const Models::RecognizeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeTableRequest
       * @return RecognizeTableResponse
       */
      Models::RecognizeTableResponse recognizeTable(const Models::RecognizeTableRequest &request);

      Models::RecognizeTableResponse recognizeTableAdvance(const Models::RecognizeTableAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeTaxiInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeTaxiInvoiceResponse
       */
      Models::RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceWithOptions(const Models::RecognizeTaxiInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeTaxiInvoiceRequest
       * @return RecognizeTaxiInvoiceResponse
       */
      Models::RecognizeTaxiInvoiceResponse recognizeTaxiInvoice(const Models::RecognizeTaxiInvoiceRequest &request);

      Models::RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceAdvance(const Models::RecognizeTaxiInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增值税发票卷票
       *
       * @param request RecognizeTicketInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeTicketInvoiceResponse
       */
      Models::RecognizeTicketInvoiceResponse recognizeTicketInvoiceWithOptions(const Models::RecognizeTicketInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增值税发票卷票
       *
       * @param request RecognizeTicketInvoiceRequest
       * @return RecognizeTicketInvoiceResponse
       */
      Models::RecognizeTicketInvoiceResponse recognizeTicketInvoice(const Models::RecognizeTicketInvoiceRequest &request);

      Models::RecognizeTicketInvoiceResponse recognizeTicketInvoiceAdvance(const Models::RecognizeTicketInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeTrainTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeTrainTicketResponse
       */
      Models::RecognizeTrainTicketResponse recognizeTrainTicketWithOptions(const Models::RecognizeTrainTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeTrainTicketRequest
       * @return RecognizeTrainTicketResponse
       */
      Models::RecognizeTrainTicketResponse recognizeTrainTicket(const Models::RecognizeTrainTicketRequest &request);

      Models::RecognizeTrainTicketResponse recognizeTrainTicketAdvance(const Models::RecognizeTrainTicketAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeVATInvoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeVATInvoiceResponse
       */
      Models::RecognizeVATInvoiceResponse recognizeVATInvoiceWithOptions(const Models::RecognizeVATInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeVATInvoiceRequest
       * @return RecognizeVATInvoiceResponse
       */
      Models::RecognizeVATInvoiceResponse recognizeVATInvoice(const Models::RecognizeVATInvoiceRequest &request);

      Models::RecognizeVATInvoiceResponse recognizeVATInvoiceAdvance(const Models::RecognizeVATInvoiceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeVINCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeVINCodeResponse
       */
      Models::RecognizeVINCodeResponse recognizeVINCodeWithOptions(const Models::RecognizeVINCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeVINCodeRequest
       * @return RecognizeVINCodeResponse
       */
      Models::RecognizeVINCodeResponse recognizeVINCode(const Models::RecognizeVINCodeRequest &request);

      Models::RecognizeVINCodeResponse recognizeVINCodeAdvance(const Models::RecognizeVINCodeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用视频文字识别
       *
       * @param request RecognizeVideoCharacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeVideoCharacterResponse
       */
      Models::RecognizeVideoCharacterResponse recognizeVideoCharacterWithOptions(const Models::RecognizeVideoCharacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用视频文字识别
       *
       * @param request RecognizeVideoCharacterRequest
       * @return RecognizeVideoCharacterResponse
       */
      Models::RecognizeVideoCharacterResponse recognizeVideoCharacter(const Models::RecognizeVideoCharacterRequest &request);

      Models::RecognizeVideoCharacterResponse recognizeVideoCharacterAdvance(const Models::RecognizeVideoCharacterAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
