// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTRANSLATIONAGENT20260622_HPP_
#define ALIBABACLOUD_REALTRANSLATIONAGENT20260622_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RealTranslationAgent20260622Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/RealTranslationAgent20260622.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels a translation task that is currently running.
       *
       * @description **Billing description**
       * After the task is successfully canceled, the Credits frozen for this translation task will be fully refunded to your account.
       * **Before you begin**
       * - This operation only supports canceling translation tasks that are in the processing state. Tasks that are completed or failed cannot be canceled.
       *
       * @param request CancelTranslationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTranslationTaskResponse
       */
      Models::CancelTranslationTaskResponse cancelTranslationTaskWithOptions(const Models::CancelTranslationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a translation task that is currently running.
       *
       * @description **Billing description**
       * After the task is successfully canceled, the Credits frozen for this translation task will be fully refunded to your account.
       * **Before you begin**
       * - This operation only supports canceling translation tasks that are in the processing state. Tasks that are completed or failed cannot be canceled.
       *
       * @param request CancelTranslationTaskRequest
       * @return CancelTranslationTaskResponse
       */
      Models::CancelTranslationTaskResponse cancelTranslationTask(const Models::CancelTranslationTaskRequest &request);

      /**
       * @summary Retrieves the download URL of the original file for a translation task.
       *
       * @param request GetOriginalFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginalFileUrlResponse
       */
      Models::GetOriginalFileUrlResponse getOriginalFileUrlWithOptions(const Models::GetOriginalFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL of the original file for a translation task.
       *
       * @param request GetOriginalFileUrlRequest
       * @return GetOriginalFileUrlResponse
       */
      Models::GetOriginalFileUrlResponse getOriginalFileUrl(const Models::GetOriginalFileUrlRequest &request);

      /**
       * @summary Retrieves the download URL of the translated file for a translation task.
       *
       * @param request GetTranslatedFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranslatedFileUrlResponse
       */
      Models::GetTranslatedFileUrlResponse getTranslatedFileUrlWithOptions(const Models::GetTranslatedFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL of the translated file for a translation task.
       *
       * @param request GetTranslatedFileUrlRequest
       * @return GetTranslatedFileUrlResponse
       */
      Models::GetTranslatedFileUrlResponse getTranslatedFileUrl(const Models::GetTranslatedFileUrlRequest &request);

      /**
       * @summary Retrieves the details of a translation task.
       *
       * @param request GetTranslationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranslationTaskResponse
       */
      Models::GetTranslationTaskResponse getTranslationTaskWithOptions(const Models::GetTranslationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a translation task.
       *
       * @param request GetTranslationTaskRequest
       * @return GetTranslationTaskResponse
       */
      Models::GetTranslationTaskResponse getTranslationTask(const Models::GetTranslationTaskRequest &request);

      /**
       * @summary Queries translation tasks by paging.
       *
       * @param request ListTranslationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranslationTasksResponse
       */
      Models::ListTranslationTasksResponse listTranslationTasksWithOptions(const Models::ListTranslationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries translation tasks by paging.
       *
       * @param request ListTranslationTasksRequest
       * @return ListTranslationTasksResponse
       */
      Models::ListTranslationTasksResponse listTranslationTasks(const Models::ListTranslationTasksRequest &request);

      /**
       * @summary Submits a translation task. You can submit a new translation task by passing in a TaskId, or resubmit a historical task for translation by passing in a BaseTaskId. After successful submission, the translation task ID and current task status are returned. You can use the task ID to call subsequent operations to query translation progress and results.
       *
       * @description **Billing description**
       * This operation involves Credits consumption. Before submitting a translation task, ensure that your account has sufficient Credits balance. After calling `UploadTranslationFile`, you can check the `CreditsAvailable` field in the response to confirm whether your current balance meets the requirements of this translation task. For detailed billing information, refer to the `CreditBreakdown` field.
       * **Task submission description**
       * - To submit a new translation task, pass in the `TaskId` returned by the `UploadTranslationFile` operation.
       * - To resubmit a historical task for translation, pass in the task ID of a previously submitted translation task, which is the `BaseTaskId`.
       * - You must pass in either `TaskId` or `BaseTaskId`. You cannot pass in both at the same time.
       * **Precautions**
       * - The `Style` parameter takes effect only when the translation file is a PPT file. Passing in this parameter for files in other formats has no effect.
       * - For new tasks, you can obtain the list of available fonts from the `Fonts` field in the response of `UploadTranslationFile`. For retranslation of historical tasks, you can obtain the list of available fonts by calling the `GetTranslationTask` operation.
       *
       * @param tmpReq SubmitTranslationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTranslationTaskResponse
       */
      Models::SubmitTranslationTaskResponse submitTranslationTaskWithOptions(const Models::SubmitTranslationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a translation task. You can submit a new translation task by passing in a TaskId, or resubmit a historical task for translation by passing in a BaseTaskId. After successful submission, the translation task ID and current task status are returned. You can use the task ID to call subsequent operations to query translation progress and results.
       *
       * @description **Billing description**
       * This operation involves Credits consumption. Before submitting a translation task, ensure that your account has sufficient Credits balance. After calling `UploadTranslationFile`, you can check the `CreditsAvailable` field in the response to confirm whether your current balance meets the requirements of this translation task. For detailed billing information, refer to the `CreditBreakdown` field.
       * **Task submission description**
       * - To submit a new translation task, pass in the `TaskId` returned by the `UploadTranslationFile` operation.
       * - To resubmit a historical task for translation, pass in the task ID of a previously submitted translation task, which is the `BaseTaskId`.
       * - You must pass in either `TaskId` or `BaseTaskId`. You cannot pass in both at the same time.
       * **Precautions**
       * - The `Style` parameter takes effect only when the translation file is a PPT file. Passing in this parameter for files in other formats has no effect.
       * - For new tasks, you can obtain the list of available fonts from the `Fonts` field in the response of `UploadTranslationFile`. For retranslation of historical tasks, you can obtain the list of available fonts by calling the `GetTranslationTask` operation.
       *
       * @param request SubmitTranslationTaskRequest
       * @return SubmitTranslationTaskResponse
       */
      Models::SubmitTranslationTaskResponse submitTranslationTask(const Models::SubmitTranslationTaskRequest &request);

      /**
       * @summary Uploads a document, parses document-related information, and generates a translation task. After a successful upload, the task ID and document parsing results are returned, including word count, page count, estimated Credits consumption, estimated translation time, detected language type, and font list. The system also performs sensitive information detection on the uploaded document, and you can decide whether to proceed with submitting the translation task based on the detection results.
       *
       * @description > - This operation only involves document upload and information estimation. **No fees are incurred.** Credits consumption starts only after you **officially submit the translation** task.
       * **Language detection**
       * The system automatically detects the language type of the uploaded document. Currently, Chinese is supported.
       * **Sensitive information detection**
       * The system performs sensitive information detection on the uploaded document. If sensitive information is detected, the `SensitiveDetected` field in the response is set to `true`, and the `SensitiveTags` field returns the list of matched keywords.
       * >  - You can decide whether to proceed with submitting the translation task based on your actual needs.
       * >  - If the translation quality setting is set to ultimate mode when you submit the task, the system automatically switches the **portions containing sensitive information** to auto mode.
       * **Notes**
       * - Make sure the uploaded document format is supported by the system. Otherwise, parsing may fail.
       * - The `EstimatedCostCredits` value in the response is the estimated Credits consumption. The actual consumption is based on the settlement after the translation task is officially submitted.
       * - The `EstimatedTime` value in the response is the estimated translation duration in milliseconds. The actual translation duration may vary depending on document complexity.
       * - The `Fonts` field in the response contains the languages that support font modification and the corresponding font lists. You can select an appropriate font based on the target language.
       *
       * @param request UploadTranslationFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadTranslationFileResponse
       */
      Models::UploadTranslationFileResponse uploadTranslationFileWithOptions(const Models::UploadTranslationFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a document, parses document-related information, and generates a translation task. After a successful upload, the task ID and document parsing results are returned, including word count, page count, estimated Credits consumption, estimated translation time, detected language type, and font list. The system also performs sensitive information detection on the uploaded document, and you can decide whether to proceed with submitting the translation task based on the detection results.
       *
       * @description > - This operation only involves document upload and information estimation. **No fees are incurred.** Credits consumption starts only after you **officially submit the translation** task.
       * **Language detection**
       * The system automatically detects the language type of the uploaded document. Currently, Chinese is supported.
       * **Sensitive information detection**
       * The system performs sensitive information detection on the uploaded document. If sensitive information is detected, the `SensitiveDetected` field in the response is set to `true`, and the `SensitiveTags` field returns the list of matched keywords.
       * >  - You can decide whether to proceed with submitting the translation task based on your actual needs.
       * >  - If the translation quality setting is set to ultimate mode when you submit the task, the system automatically switches the **portions containing sensitive information** to auto mode.
       * **Notes**
       * - Make sure the uploaded document format is supported by the system. Otherwise, parsing may fail.
       * - The `EstimatedCostCredits` value in the response is the estimated Credits consumption. The actual consumption is based on the settlement after the translation task is officially submitted.
       * - The `EstimatedTime` value in the response is the estimated translation duration in milliseconds. The actual translation duration may vary depending on document complexity.
       * - The `Fonts` field in the response contains the languages that support font modification and the corresponding font lists. You can select an appropriate font based on the target language.
       *
       * @param request UploadTranslationFileRequest
       * @return UploadTranslationFileResponse
       */
      Models::UploadTranslationFileResponse uploadTranslationFile(const Models::UploadTranslationFileRequest &request);

      Models::UploadTranslationFileResponse uploadTranslationFileAdvance(const Models::UploadTranslationFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
