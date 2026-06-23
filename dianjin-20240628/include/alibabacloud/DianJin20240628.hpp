// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DIANJIN20240628_HPP_
#define ALIBABACLOUD_DIANJIN20240628_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DianJin20240628Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DianJin20240628.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 申请取数
       *
       * @param request CommercializeFetchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommercializeFetchResponse
       */
      Models::CommercializeFetchResponse commercializeFetchWithOptions(const string &workspaceId, const string &cjfCode, const string &zjfCode, const Models::CommercializeFetchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请取数
       *
       * @param request CommercializeFetchRequest
       * @return CommercializeFetchResponse
       */
      Models::CommercializeFetchResponse commercializeFetch(const string &workspaceId, const string &cjfCode, const string &zjfCode, const Models::CommercializeFetchRequest &request);

      /**
       * @summary Create a task to summarize documents by year.
       *
       * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateAnnualDocSummaryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnnualDocSummaryTaskResponse
       */
      Models::CreateAnnualDocSummaryTaskResponse createAnnualDocSummaryTaskWithOptions(const string &workspaceId, const Models::CreateAnnualDocSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a task to summarize documents by year.
       *
       * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateAnnualDocSummaryTaskRequest
       * @return CreateAnnualDocSummaryTaskResponse
       */
      Models::CreateAnnualDocSummaryTaskResponse createAnnualDocSummaryTask(const string &workspaceId, const Models::CreateAnnualDocSummaryTaskRequest &request);

      /**
       * @summary Creates an outbound call session.
       *
       * @param request CreateDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDialogResponse
       */
      Models::CreateDialogResponse createDialogWithOptions(const string &workspaceId, const Models::CreateDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an outbound call session.
       *
       * @param request CreateDialogRequest
       * @return CreateDialogResponse
       */
      Models::CreateDialogResponse createDialog(const string &workspaceId, const Models::CreateDialogRequest &request);

      /**
       * @summary Creates a session analysis task. After the task is created, use the session ID with GetDialogAnalysisResult to retrieve the results.
       *
       * @description Before you use this API, review the billing methods and pricing for DianJin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and DianJin.
       * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateDialogAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDialogAnalysisTaskResponse
       */
      Models::CreateDialogAnalysisTaskResponse createDialogAnalysisTaskWithOptions(const string &workspaceId, const Models::CreateDialogAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a session analysis task. After the task is created, use the session ID with GetDialogAnalysisResult to retrieve the results.
       *
       * @description Before you use this API, review the billing methods and pricing for DianJin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and DianJin.
       * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateDialogAnalysisTaskRequest
       * @return CreateDialogAnalysisTaskResponse
       */
      Models::CreateDialogAnalysisTaskResponse createDialogAnalysisTask(const string &workspaceId, const Models::CreateDialogAnalysisTaskRequest &request);

      /**
       * @summary Creates a multi-document summary task.
       *
       * @description Before you use this API, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * You have obtained a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateDocsSummaryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocsSummaryTaskResponse
       */
      Models::CreateDocsSummaryTaskResponse createDocsSummaryTaskWithOptions(const string &workspaceId, const Models::CreateDocsSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multi-document summary task.
       *
       * @description Before you use this API, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * You have obtained a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateDocsSummaryTaskRequest
       * @return CreateDocsSummaryTaskResponse
       */
      Models::CreateDocsSummaryTaskResponse createDocsSummaryTask(const string &workspaceId, const Models::CreateDocsSummaryTaskRequest &request);

      /**
       * @summary Creates a financial report summary.
       *
       * @description Before using this API, review the pricing and billing methods for Alibaba Cloud Gold products.
       * **Prerequisites**
       * - Enable Alibaba Cloud Model Studio and Alibaba Cloud Gold services.
       * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateFinReportSummaryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFinReportSummaryTaskResponse
       */
      Models::CreateFinReportSummaryTaskResponse createFinReportSummaryTaskWithOptions(const string &workspaceId, const Models::CreateFinReportSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a financial report summary.
       *
       * @description Before using this API, review the pricing and billing methods for Alibaba Cloud Gold products.
       * **Prerequisites**
       * - Enable Alibaba Cloud Model Studio and Alibaba Cloud Gold services.
       * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateFinReportSummaryTaskRequest
       * @return CreateFinReportSummaryTaskResponse
       */
      Models::CreateFinReportSummaryTaskResponse createFinReportSummaryTask(const string &workspaceId, const Models::CreateFinReportSummaryTaskRequest &request);

      /**
       * @summary 创建图片检测任务
       *
       * @param request CreateImageDetectionTaskRequest
       * @param headers CreateImageDetectionTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageDetectionTaskResponse
       */
      Models::CreateImageDetectionTaskResponse createImageDetectionTaskWithOptions(const string &workspaceId, const Models::CreateImageDetectionTaskRequest &request, const Models::CreateImageDetectionTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建图片检测任务
       *
       * @param request CreateImageDetectionTaskRequest
       * @return CreateImageDetectionTaskResponse
       */
      Models::CreateImageDetectionTaskResponse createImageDetectionTask(const string &workspaceId, const Models::CreateImageDetectionTaskRequest &request);

      /**
       * @summary Creates a document library. A document library isolates document and index data. If your use case requires frequent natural language search by category, create multiple libraries to isolate different data types. You can customize vector and text indexes by format.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain the workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLibraryResponse
       */
      Models::CreateLibraryResponse createLibraryWithOptions(const string &workspaceId, const Models::CreateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document library. A document library isolates document and index data. If your use case requires frequent natural language search by category, create multiple libraries to isolate different data types. You can customize vector and text indexes by format.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain the workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateLibraryRequest
       * @return CreateLibraryResponse
       */
      Models::CreateLibraryResponse createLibrary(const string &workspaceId, const Models::CreateLibraryRequest &request);

      /**
       * @summary Create a PDF document translation task. Submit the task to start asynchronous translation.
       *
       * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a workspace ID. To obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreatePdfTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdfTranslateTaskResponse
       */
      Models::CreatePdfTranslateTaskResponse createPdfTranslateTaskWithOptions(const string &workspaceId, const Models::CreatePdfTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a PDF document translation task. Submit the task to start asynchronous translation.
       *
       * @description Before you use this operation, review the billing methods and pricing for Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a workspace ID. To obtain your [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreatePdfTranslateTaskRequest
       * @return CreatePdfTranslateTaskResponse
       */
      Models::CreatePdfTranslateTaskResponse createPdfTranslateTask(const string &workspaceId, const Models::CreatePdfTranslateTaskRequest &request);

      /**
       * @summary Creates document chunks based on your business scenarios.
       *
       * @description Before using this API, review the billing methods and pricing for Tongyi Dianjin.
       * **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain a workspace ID. For more information, see [Get a workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreatePredefinedDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePredefinedDocumentResponse
       */
      Models::CreatePredefinedDocumentResponse createPredefinedDocumentWithOptions(const string &workspaceId, const Models::CreatePredefinedDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates document chunks based on your business scenarios.
       *
       * @description Before using this API, review the billing methods and pricing for Tongyi Dianjin.
       * **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain a workspace ID. For more information, see [Get a workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreatePredefinedDocumentRequest
       * @return CreatePredefinedDocumentResponse
       */
      Models::CreatePredefinedDocumentResponse createPredefinedDocument(const string &workspaceId, const Models::CreatePredefinedDocumentRequest &request);

      /**
       * @summary Creates a quality check task.
       *
       * @description Before using this API, review the pricing and billing methods for the Tongyi Dianjin product.
       * Prerequisites
       * Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * Obtain the workspaceId: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateQualityCheckTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityCheckTaskResponse
       */
      Models::CreateQualityCheckTaskResponse createQualityCheckTaskWithOptions(const string &workspaceId, const Models::CreateQualityCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quality check task.
       *
       * @description Before using this API, review the pricing and billing methods for the Tongyi Dianjin product.
       * Prerequisites
       * Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * Obtain the workspaceId: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request CreateQualityCheckTaskRequest
       * @return CreateQualityCheckTaskResponse
       */
      Models::CreateQualityCheckTaskResponse createQualityCheckTask(const string &workspaceId, const Models::CreateQualityCheckTaskRequest &request);

      /**
       * @summary 创建视频生成任务
       *
       * @param request CreateVideoCreationTaskRequest
       * @param headers CreateVideoCreationTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoCreationTaskResponse
       */
      Models::CreateVideoCreationTaskResponse createVideoCreationTaskWithOptions(const string &workspaceId, const Models::CreateVideoCreationTaskRequest &request, const Models::CreateVideoCreationTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建视频生成任务
       *
       * @param request CreateVideoCreationTaskRequest
       * @return CreateVideoCreationTaskResponse
       */
      Models::CreateVideoCreationTaskResponse createVideoCreationTask(const string &workspaceId, const Models::CreateVideoCreationTaskRequest &request);

      /**
       * @summary A callback event that indicates the completion of a Dashscope asynchronous task.
       *
       * @param request DashscopeAsyncTaskFinishEventRequest
       * @param headers DashscopeAsyncTaskFinishEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DashscopeAsyncTaskFinishEventResponse
       */
      Models::DashscopeAsyncTaskFinishEventResponse dashscopeAsyncTaskFinishEventWithOptions(const string &workspaceId, const Models::DashscopeAsyncTaskFinishEventRequest &request, const Models::DashscopeAsyncTaskFinishEventHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A callback event that indicates the completion of a Dashscope asynchronous task.
       *
       * @param request DashscopeAsyncTaskFinishEventRequest
       * @return DashscopeAsyncTaskFinishEventResponse
       */
      Models::DashscopeAsyncTaskFinishEventResponse dashscopeAsyncTaskFinishEvent(const string &workspaceId, const Models::DashscopeAsyncTaskFinishEventRequest &request);

      /**
       * @summary Deletes a document. After deletion, you cannot view the original document or recall it.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request DeleteDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const string &workspaceId, const Models::DeleteDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a document. After deletion, you cannot view the original document or recall it.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const string &workspaceId, const Models::DeleteDocumentRequest &request);

      /**
       * @summary Delete a document library. ⚠️ This operation deletes the library and all its associated documents.
       *
       * @description **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain your workspaceId. For more information, refer to the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request DeleteLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLibraryResponse
       */
      Models::DeleteLibraryResponse deleteLibraryWithOptions(const string &workspaceId, const Models::DeleteLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a document library. ⚠️ This operation deletes the library and all its associated documents.
       *
       * @description **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain your workspaceId. For more information, refer to the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request DeleteLibraryRequest
       * @return DeleteLibraryResponse
       */
      Models::DeleteLibraryResponse deleteLibrary(const string &workspaceId, const Models::DeleteLibraryRequest &request);

      /**
       * @summary This API uses the WebSocket protocol to perform real-time conversational transcription, intent recognition, and speech synthesis. It supports various audio formats for both input and output to ensure real-time performance and high compatibility.
       *
       * @param request EndToEndRealTimeDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndToEndRealTimeDialogResponse
       */
      Models::EndToEndRealTimeDialogResponse endToEndRealTimeDialogWithOptions(const string &workspaceId, const Models::EndToEndRealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API uses the WebSocket protocol to perform real-time conversational transcription, intent recognition, and speech synthesis. It supports various audio formats for both input and output to ensure real-time performance and high compatibility.
       *
       * @param request EndToEndRealTimeDialogRequest
       * @return EndToEndRealTimeDialogResponse
       */
      Models::EndToEndRealTimeDialogResponse endToEndRealTimeDialog(const string &workspaceId, const Models::EndToEndRealTimeDialogRequest &request);

      /**
       * @summary Terminate the job.
       *
       * @param request EvictTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvictTaskResponse
       */
      Models::EvictTaskResponse evictTaskWithOptions(const string &workspaceId, const Models::EvictTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminate the job.
       *
       * @param request EvictTaskRequest
       * @return EvictTaskResponse
       */
      Models::EvictTaskResponse evictTask(const string &workspaceId, const Models::EvictTaskRequest &request);

      /**
       * @summary 兑换权益
       *
       * @param request ExchangeEntitlementRequest
       * @param headers ExchangeEntitlementHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExchangeEntitlementResponse
       */
      Models::ExchangeEntitlementResponse exchangeEntitlementWithOptions(const string &workspaceId, const string &tenantId, const Models::ExchangeEntitlementRequest &request, const Models::ExchangeEntitlementHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 兑换权益
       *
       * @param request ExchangeEntitlementRequest
       * @return ExchangeEntitlementResponse
       */
      Models::ExchangeEntitlementResponse exchangeEntitlement(const string &workspaceId, const string &tenantId, const Models::ExchangeEntitlementRequest &request);

      /**
       * @summary Parses question and answer (Q&A) pairs from a document. You can use the UpdateQaLibrary API to update the Q&A pairs.
       *
       * @description Before you use this API, make sure you understand the billing methods and pricing of the Tongyi Dianjin product.
       * Prerequisites
       * Activate Alibaba Cloud Model Studio and the Tongyi Dianjin service.
       * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GenDocQaResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenDocQaResultResponse
       */
      Models::GenDocQaResultResponse genDocQaResultWithOptions(const string &workspaceId, const Models::GenDocQaResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses question and answer (Q&A) pairs from a document. You can use the UpdateQaLibrary API to update the Q&A pairs.
       *
       * @description Before you use this API, make sure you understand the billing methods and pricing of the Tongyi Dianjin product.
       * Prerequisites
       * Activate Alibaba Cloud Model Studio and the Tongyi Dianjin service.
       * Obtain a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GenDocQaResultRequest
       * @return GenDocQaResultResponse
       */
      Models::GenDocQaResultResponse genDocQaResult(const string &workspaceId, const Models::GenDocQaResultRequest &request);

      /**
       * @summary Retrieve app configuration.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
       * - You can obtain the workspace ID. For details, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%E3%80%9DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetAppConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppConfigResponse
       */
      Models::GetAppConfigResponse getAppConfigWithOptions(const string &workspaceId, const Models::GetAppConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve app configuration.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
       * - You can obtain the workspace ID. For details, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%E3%80%9DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetAppConfigRequest
       * @return GetAppConfigResponse
       */
      Models::GetAppConfigResponse getAppConfig(const string &workspaceId, const Models::GetAppConfigRequest &request);

      /**
       * @summary Retrieves the Q&A results generated by the SubmitChatQuestion API.
       *
       * @param request GetChatQuestionRespRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatQuestionRespResponse
       */
      Models::GetChatQuestionRespResponse getChatQuestionRespWithOptions(const string &workspaceId, const Models::GetChatQuestionRespRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Q&A results generated by the SubmitChatQuestion API.
       *
       * @param request GetChatQuestionRespRequest
       * @return GetChatQuestionRespResponse
       */
      Models::GetChatQuestionRespResponse getChatQuestionResp(const string &workspaceId, const Models::GetChatQuestionRespRequest &request);

      /**
       * @summary Retrieve session analysis results. You can retrieve results in batches by specifying a list of session IDs or a time range.
       *
       * @param request GetDialogAnalysisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDialogAnalysisResultResponse
       */
      Models::GetDialogAnalysisResultResponse getDialogAnalysisResultWithOptions(const string &workspaceId, const Models::GetDialogAnalysisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve session analysis results. You can retrieve results in batches by specifying a list of session IDs or a time range.
       *
       * @param request GetDialogAnalysisResultRequest
       * @return GetDialogAnalysisResultResponse
       */
      Models::GetDialogAnalysisResultResponse getDialogAnalysisResult(const string &workspaceId, const Models::GetDialogAnalysisResultRequest &request);

      /**
       * @summary Retrieve session details.
       *
       * @param request GetDialogDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDialogDetailResponse
       */
      Models::GetDialogDetailResponse getDialogDetailWithOptions(const string &workspaceId, const Models::GetDialogDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve session details.
       *
       * @param request GetDialogDetailRequest
       * @return GetDialogDetailResponse
       */
      Models::GetDialogDetailResponse getDialogDetail(const string &workspaceId, const Models::GetDialogDetailRequest &request);

      /**
       * @summary Retrieves records of real-time conversations and the results of intent analysis.
       *
       * @description ## Request description
       * This API retrieves conversation records between customers and service agents, along with intent analysis results generated by the model.
       *
       * @param request GetDialogLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDialogLogResponse
       */
      Models::GetDialogLogResponse getDialogLogWithOptions(const string &workspaceId, const Models::GetDialogLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves records of real-time conversations and the results of intent analysis.
       *
       * @description ## Request description
       * This API retrieves conversation records between customers and service agents, along with intent analysis results generated by the model.
       *
       * @param request GetDialogLogRequest
       * @return GetDialogLogResponse
       */
      Models::GetDialogLogResponse getDialogLog(const string &workspaceId, const Models::GetDialogLogRequest &request);

      /**
       * @summary Retrieve a list of document chunks. You can filter them by query conditions.
       *
       * @description **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Gold Service.
       * - Obtain the workspaceId and the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%B3).
       *
       * @param request GetDocumentChunkListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentChunkListResponse
       */
      Models::GetDocumentChunkListResponse getDocumentChunkListWithOptions(const string &workspaceId, const Models::GetDocumentChunkListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of document chunks. You can filter them by query conditions.
       *
       * @description **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Gold Service.
       * - Obtain the workspaceId and the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%B3).
       *
       * @param request GetDocumentChunkListRequest
       * @return GetDocumentChunkListResponse
       */
      Models::GetDocumentChunkListResponse getDocumentChunkList(const string &workspaceId, const Models::GetDocumentChunkListRequest &request);

      /**
       * @summary Retrieves a list of documents from a document library. This operation supports paged queries and filtering by document status.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and the Tongyi Gold Point service.
       * - You have obtained a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetDocumentListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentListResponse
       */
      Models::GetDocumentListResponse getDocumentListWithOptions(const string &workspaceId, const Models::GetDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of documents from a document library. This operation supports paged queries and filtering by document status.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and the Tongyi Gold Point service.
       * - You have obtained a workspace ID. For more information, see [Get a workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetDocumentListRequest
       * @return GetDocumentListResponse
       */
      Models::GetDocumentListResponse getDocumentList(const string &workspaceId, const Models::GetDocumentListRequest &request);

      /**
       * @summary Retrieve a download URL for a document. The URL expires after 1 hour.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetDocumentUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentUrlResponse
       */
      Models::GetDocumentUrlResponse getDocumentUrlWithOptions(const string &workspaceId, const Models::GetDocumentUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a download URL for a document. The URL expires after 1 hour.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetDocumentUrlRequest
       * @return GetDocumentUrlResponse
       */
      Models::GetDocumentUrlResponse getDocumentUrl(const string &workspaceId, const Models::GetDocumentUrlRequest &request);

      /**
       * @summary This operation retrieves a list of documents. You can filter documents by metadata or use paging.
       *
       * @description Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * To obtain the workspace ID, see [the document about obtaining the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetFilterDocumentListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFilterDocumentListResponse
       */
      Models::GetFilterDocumentListResponse getFilterDocumentListWithOptions(const string &workspaceId, const Models::GetFilterDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves a list of documents. You can filter documents by metadata or use paging.
       *
       * @description Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * To obtain the workspace ID, see [the document about obtaining the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetFilterDocumentListRequest
       * @return GetFilterDocumentListResponse
       */
      Models::GetFilterDocumentListResponse getFilterDocumentList(const string &workspaceId, const Models::GetFilterDocumentListRequest &request);

      /**
       * @summary Retrieve conversation history records by business type.
       *
       * @param request GetHistoryListByBizTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoryListByBizTypeResponse
       */
      Models::GetHistoryListByBizTypeResponse getHistoryListByBizTypeWithOptions(const string &workspaceId, const Models::GetHistoryListByBizTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve conversation history records by business type.
       *
       * @param request GetHistoryListByBizTypeRequest
       * @return GetHistoryListByBizTypeResponse
       */
      Models::GetHistoryListByBizTypeResponse getHistoryListByBizType(const string &workspaceId, const Models::GetHistoryListByBizTypeRequest &request);

      /**
       * @summary 获取检测结果
       *
       * @param request GetImageDetectionTaskResultRequest
       * @param headers GetImageDetectionTaskResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageDetectionTaskResultResponse
       */
      Models::GetImageDetectionTaskResultResponse getImageDetectionTaskResultWithOptions(const string &workspaceId, const Models::GetImageDetectionTaskResultRequest &request, const Models::GetImageDetectionTaskResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取检测结果
       *
       * @param request GetImageDetectionTaskResultRequest
       * @return GetImageDetectionTaskResultResponse
       */
      Models::GetImageDetectionTaskResultResponse getImageDetectionTaskResult(const string &workspaceId, const Models::GetImageDetectionTaskResultRequest &request);

      /**
       * @summary Retrieves the detailed configuration of a document library, including its name, description, and index settings.
       *
       * @description **Prerequisites**
       * - Activate the Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryResponse
       */
      Models::GetLibraryResponse getLibraryWithOptions(const string &workspaceId, const Models::GetLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration of a document library, including its name, description, and index settings.
       *
       * @description **Prerequisites**
       * - Activate the Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain a [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetLibraryRequest
       * @return GetLibraryResponse
       */
      Models::GetLibraryResponse getLibrary(const string &workspaceId, const Models::GetLibraryRequest &request);

      /**
       * @summary Retrieve the document library list. The list includes document names, descriptions, and unique identifiers.
       *
       * @description Prerequisites
       * - You must activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain the workspaceId. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetLibraryListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryListResponse
       */
      Models::GetLibraryListResponse getLibraryListWithOptions(const string &workspaceId, const Models::GetLibraryListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the document library list. The list includes document names, descriptions, and unique identifiers.
       *
       * @description Prerequisites
       * - You must activate Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain the workspaceId. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetLibraryListRequest
       * @return GetLibraryListResponse
       */
      Models::GetLibraryListResponse getLibraryList(const string &workspaceId, const Models::GetLibraryListRequest &request);

      /**
       * @summary Retrieve document parsing results. You can query the document\\"s parsing status and obtain the parsing results.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
       * - Obtain the workspace ID. For more information, see [the workspace identity document](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetParseResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParseResultResponse
       */
      Models::GetParseResultResponse getParseResultWithOptions(const string &workspaceId, const Models::GetParseResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve document parsing results. You can query the document\\"s parsing status and obtain the parsing results.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Gold services.
       * - Obtain the workspace ID. For more information, see [the workspace identity document](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request GetParseResultRequest
       * @return GetParseResultResponse
       */
      Models::GetParseResultResponse getParseResult(const string &workspaceId, const Models::GetParseResultRequest &request);

      /**
       * @summary Retrieve quality check results.
       *
       * @param request GetQualityCheckTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityCheckTaskResultResponse
       */
      Models::GetQualityCheckTaskResultResponse getQualityCheckTaskResultWithOptions(const string &workspaceId, const Models::GetQualityCheckTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve quality check results.
       *
       * @param request GetQualityCheckTaskResultRequest
       * @return GetQualityCheckTaskResultResponse
       */
      Models::GetQualityCheckTaskResultResponse getQualityCheckTaskResult(const string &workspaceId, const Models::GetQualityCheckTaskResultRequest &request);

      /**
       * @summary 获取报告结果
       *
       * @param request GetReportResponseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportResponseResponse
       */
      Models::GetReportResponseResponse getReportResponseWithOptions(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const Models::GetReportResponseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取报告结果
       *
       * @param request GetReportResponseRequest
       * @return GetReportResponseResponse
       */
      Models::GetReportResponseResponse getReportResponse(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const Models::GetReportResponseRequest &request);

      /**
       * @summary 获取任务状态
       *
       * @param request GetReportTaskStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReportTaskStatusResponse
       */
      Models::GetReportTaskStatusResponse getReportTaskStatusWithOptions(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const Models::GetReportTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务状态
       *
       * @param request GetReportTaskStatusRequest
       * @return GetReportTaskStatusResponse
       */
      Models::GetReportTaskStatusResponse getReportTaskStatus(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const Models::GetReportTaskStatusRequest &request);

      /**
       * @summary Retrieves the result of a financial report summary task.
       *
       * @param request GetSummaryTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSummaryTaskResultResponse
       */
      Models::GetSummaryTaskResultResponse getSummaryTaskResultWithOptions(const string &workspaceId, const Models::GetSummaryTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a financial report summary task.
       *
       * @param request GetSummaryTaskResultRequest
       * @return GetSummaryTaskResultResponse
       */
      Models::GetSummaryTaskResultResponse getSummaryTaskResult(const string &workspaceId, const Models::GetSummaryTaskResultRequest &request);

      /**
       * @summary Retrieves the result of an asynchronous task.
       *
       * @param request GetTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResultResponse
       */
      Models::GetTaskResultResponse getTaskResultWithOptions(const string &workspaceId, const Models::GetTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of an asynchronous task.
       *
       * @param request GetTaskResultRequest
       * @return GetTaskResultResponse
       */
      Models::GetTaskResultResponse getTaskResult(const string &workspaceId, const Models::GetTaskResultRequest &request);

      /**
       * @summary Gets the status of a task.
       *
       * @param request GetTaskStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatusWithOptions(const string &workspaceId, const Models::GetTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the status of a task.
       *
       * @param request GetTaskStatusRequest
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatus(const string &workspaceId, const Models::GetTaskStatusRequest &request);

      /**
       * @summary 查询用量明细
       *
       * @param request GetUsageRequest
       * @param headers GetUsageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUsageResponse
       */
      Models::GetUsageResponse getUsageWithOptions(const string &workspaceId, const string &tenantId, const Models::GetUsageRequest &request, const Models::GetUsageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用量明细
       *
       * @param request GetUsageRequest
       * @return GetUsageResponse
       */
      Models::GetUsageResponse getUsage(const string &workspaceId, const string &tenantId, const Models::GetUsageRequest &request);

      /**
       * @summary 获取视频生成任务结果
       *
       * @param request GetVideoCreationTaskResultRequest
       * @param headers GetVideoCreationTaskResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoCreationTaskResultResponse
       */
      Models::GetVideoCreationTaskResultResponse getVideoCreationTaskResultWithOptions(const string &workspaceId, const Models::GetVideoCreationTaskResultRequest &request, const Models::GetVideoCreationTaskResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取视频生成任务结果
       *
       * @param request GetVideoCreationTaskResultRequest
       * @return GetVideoCreationTaskResultResponse
       */
      Models::GetVideoCreationTaskResultResponse getVideoCreationTaskResult(const string &workspaceId, const Models::GetVideoCreationTaskResultRequest &request);

      /**
       * @summary Call a plugin and retrieve its response.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request InvokePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokePluginResponse
       */
      Models::InvokePluginResponse invokePluginWithOptions(const string &workspaceId, const Models::InvokePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call a plugin and retrieve its response.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin services.
       * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request InvokePluginRequest
       * @return InvokePluginResponse
       */
      Models::InvokePluginResponse invokePlugin(const string &workspaceId, const Models::InvokePluginRequest &request);

      /**
       * @summary Preview documents. Retrieve document download links, types, and titles. Use this operation to preview documents.
       *
       * @description **Prerequisites**
       * - You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
       * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request PreviewDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewDocumentResponse
       */
      Models::PreviewDocumentResponse previewDocumentWithOptions(const string &workspaceId, const Models::PreviewDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Preview documents. Retrieve document download links, types, and titles. Use this operation to preview documents.
       *
       * @description **Prerequisites**
       * - You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
       * - Obtain the workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request PreviewDocumentRequest
       * @return PreviewDocumentResponse
       */
      Models::PreviewDocumentResponse previewDocument(const string &workspaceId, const Models::PreviewDocumentRequest &request);

      /**
       * @summary 查询兑换记录
       *
       * @param request QueryApiKeysRequest
       * @param headers QueryApiKeysHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryApiKeysResponse
       */
      Models::QueryApiKeysResponse queryApiKeysWithOptions(const string &workspaceId, const string &tenantId, const Models::QueryApiKeysRequest &request, const Models::QueryApiKeysHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询兑换记录
       *
       * @param request QueryApiKeysRequest
       * @return QueryApiKeysResponse
       */
      Models::QueryApiKeysResponse queryApiKeys(const string &workspaceId, const string &tenantId, const Models::QueryApiKeysRequest &request);

      /**
       * @summary 查询兑换记录
       *
       * @param request QueryRedemptionRecordsRequest
       * @param headers QueryRedemptionRecordsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRedemptionRecordsResponse
       */
      Models::QueryRedemptionRecordsResponse queryRedemptionRecordsWithOptions(const string &workspaceId, const string &tenantId, const Models::QueryRedemptionRecordsRequest &request, const Models::QueryRedemptionRecordsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询兑换记录
       *
       * @param request QueryRedemptionRecordsRequest
       * @return QueryRedemptionRecordsResponse
       */
      Models::QueryRedemptionRecordsResponse queryRedemptionRecords(const string &workspaceId, const string &tenantId, const Models::QueryRedemptionRecordsRequest &request);

      /**
       * @summary Reindexing reprocesses the specified document by parsing it, splitting it into chunks, and building a new index.
       *
       * @description Before you use this operation, review the billing method and pricing for Tongyi Dianjin.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request ReIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReIndexResponse
       */
      Models::ReIndexResponse reIndexWithOptions(const string &workspaceId, const Models::ReIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reindexing reprocesses the specified document by parsing it, splitting it into chunks, and building a new index.
       *
       * @description Before you use this operation, review the billing method and pricing for Tongyi Dianjin.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a workspace ID: Retrieve the [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request ReIndexRequest
       * @return ReIndexResponse
       */
      Models::ReIndexResponse reIndex(const string &workspaceId, const Models::ReIndexRequest &request);

      /**
       * @summary Starts a real-time session. After you create a session by calling the CreateDialog API, use this API to conduct the real-time interaction.
       *
       * @description Before using this API, make sure you understand the billing methods and pricing of the Tongyi Gold service.
       * Prerequisites
       * Alibaba Cloud Model Studio and the Tongyi Gold service are activated.
       * Obtain a workspaceId. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RealTimeDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealTimeDialogResponse
       */
      FutureGenerator<Models::RealTimeDialogResponse> realTimeDialogWithSSE(const string &workspaceId, const Models::RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a real-time session. After you create a session by calling the CreateDialog API, use this API to conduct the real-time interaction.
       *
       * @description Before using this API, make sure you understand the billing methods and pricing of the Tongyi Gold service.
       * Prerequisites
       * Alibaba Cloud Model Studio and the Tongyi Gold service are activated.
       * Obtain a workspaceId. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RealTimeDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealTimeDialogResponse
       */
      Models::RealTimeDialogResponse realTimeDialogWithOptions(const string &workspaceId, const Models::RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a real-time session. After you create a session by calling the CreateDialog API, use this API to conduct the real-time interaction.
       *
       * @description Before using this API, make sure you understand the billing methods and pricing of the Tongyi Gold service.
       * Prerequisites
       * Alibaba Cloud Model Studio and the Tongyi Gold service are activated.
       * Obtain a workspaceId. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RealTimeDialogRequest
       * @return RealTimeDialogResponse
       */
      Models::RealTimeDialogResponse realTimeDialog(const string &workspaceId, const Models::RealTimeDialogRequest &request);

      /**
       * @summary Provides real-time dialog assistance after a session is created using CreateDialog. Note: This operation returns multiple intents, tags, and SOP flows. Unlike real-time sessions, it does not support streaming responses.
       *
       * @description Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/model-studio/tongyi-dianjin-overview?spm=a2c4g.11186623.help-menu-2400256.d_1_6_6_0.15e77499sSMTGb) of Alibaba Cloud Model Studio DianJin.
       * Prerequisites
       * Activate the Alibaba Cloud Model Studio and Model Studio DianJin services.
       * Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8) to use as your workspaceId.
       *
       * @param request RealtimeDialogAssistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealtimeDialogAssistResponse
       */
      Models::RealtimeDialogAssistResponse realtimeDialogAssistWithOptions(const string &workspaceId, const Models::RealtimeDialogAssistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides real-time dialog assistance after a session is created using CreateDialog. Note: This operation returns multiple intents, tags, and SOP flows. Unlike real-time sessions, it does not support streaming responses.
       *
       * @description Before you use this API, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/model-studio/tongyi-dianjin-overview?spm=a2c4g.11186623.help-menu-2400256.d_1_6_6_0.15e77499sSMTGb) of Alibaba Cloud Model Studio DianJin.
       * Prerequisites
       * Activate the Alibaba Cloud Model Studio and Model Studio DianJin services.
       * Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8) to use as your workspaceId.
       *
       * @param request RealtimeDialogAssistRequest
       * @return RealtimeDialogAssistResponse
       */
      Models::RealtimeDialogAssistResponse realtimeDialogAssist(const string &workspaceId, const Models::RealtimeDialogAssistRequest &request);

      /**
       * @summary Rebuilds an existing task. You cannot rebuild tasks that are queued or currently executing.
       *
       * @description Before you use this API, review the billing methods and pricing for the Dianjin service.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and the Dianjin service.
       * You have obtained a workspace ID. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RebuildTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildTaskResponse
       */
      Models::RebuildTaskResponse rebuildTaskWithOptions(const string &workspaceId, const Models::RebuildTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds an existing task. You cannot rebuild tasks that are queued or currently executing.
       *
       * @description Before you use this API, review the billing methods and pricing for the Dianjin service.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and the Dianjin service.
       * You have obtained a workspace ID. For more information, see [Get an app ID and workspace](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RebuildTaskRequest
       * @return RebuildTaskResponse
       */
      Models::RebuildTaskResponse rebuildTask(const string &workspaceId, const Models::RebuildTaskRequest &request);

      /**
       * @summary You can retrieve document chunks from a document library using text. You can specify the number of chunks to retrieve, filter them by metadata conditions, and choose whether to complete the document chunks.
       *
       * @description **Prerequisites**
       * - Activate the Alibaba Cloud Model Studio service and the Tongyi Dianjin service.
       * - Obtain the workspace ID. Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%93%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RecallDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecallDocumentResponse
       */
      Models::RecallDocumentResponse recallDocumentWithOptions(const string &workspaceId, const Models::RecallDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can retrieve document chunks from a document library using text. You can specify the number of chunks to retrieve, filter them by metadata conditions, and choose whether to complete the document chunks.
       *
       * @description **Prerequisites**
       * - Activate the Alibaba Cloud Model Studio service and the Tongyi Dianjin service.
       * - Obtain the workspace ID. Obtain the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%93%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RecallDocumentRequest
       * @return RecallDocumentResponse
       */
      Models::RecallDocumentResponse recallDocument(const string &workspaceId, const Models::RecallDocumentRequest &request);

      /**
       * @summary Detects intents. This operation supports global and hierarchical intent detection, attitude detection, and enterprise detection.
       *
       * @description Before you use this operation, review the billing methods and pricing of Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RecognizeIntentionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeIntentionResponse
       */
      Models::RecognizeIntentionResponse recognizeIntentionWithOptions(const string &workspaceId, const Models::RecognizeIntentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects intents. This operation supports global and hierarchical intent detection, attitude detection, and enterprise detection.
       *
       * @description Before you use this operation, review the billing methods and pricing of Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a [workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RecognizeIntentionRequest
       * @return RecognizeIntentionResponse
       */
      Models::RecognizeIntentionResponse recognizeIntention(const string &workspaceId, const Models::RecognizeIntentionRequest &request);

      /**
       * @summary 重试任务
       *
       * @param request RetryReportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryReportTaskResponse
       */
      Models::RetryReportTaskResponse retryReportTaskWithOptions(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const Models::RetryReportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重试任务
       *
       * @param request RetryReportTaskRequest
       * @return RetryReportTaskResponse
       */
      Models::RetryReportTaskResponse retryReportTask(const string &workspaceId, const string &sceneCode, const string &fundProduct, const string &outRequestNo, const Models::RetryReportTaskRequest &request);

      /**
       * @summary Run an agent. This API supports both streaming and non-streaming responses.
       *
       * @description Before you use this API, review the billing model and pricing for Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain a workspace ID: [Obtain your workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAgentResponse
       */
      FutureGenerator<Models::RunAgentResponse> runAgentWithSSE(const string &workspaceId, const Models::RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Run an agent. This API supports both streaming and non-streaming responses.
       *
       * @description Before you use this API, review the billing model and pricing for Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain a workspace ID: [Obtain your workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAgentResponse
       */
      Models::RunAgentResponse runAgentWithOptions(const string &workspaceId, const Models::RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Run an agent. This API supports both streaming and non-streaming responses.
       *
       * @description Before you use this API, review the billing model and pricing for Tongyi Dianjin.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain a workspace ID: [Obtain your workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunAgentRequest
       * @return RunAgentResponse
       */
      Models::RunAgentResponse runAgent(const string &workspaceId, const Models::RunAgentRequest &request);

      /**
       * @summary Generates chat responses. You can select a model for the conversation and choose streaming or non-streaming output.
       *
       * @description Before you use this API, review the billing method and pricing for Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunChatResultGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunChatResultGenerationResponse
       */
      FutureGenerator<Models::RunChatResultGenerationResponse> runChatResultGenerationWithSSE(const string &workspaceId, const Models::RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates chat responses. You can select a model for the conversation and choose streaming or non-streaming output.
       *
       * @description Before you use this API, review the billing method and pricing for Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunChatResultGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunChatResultGenerationResponse
       */
      Models::RunChatResultGenerationResponse runChatResultGenerationWithOptions(const string &workspaceId, const Models::RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates chat responses. You can select a model for the conversation and choose streaming or non-streaming output.
       *
       * @description Before you use this API, review the billing method and pricing for Alibaba Cloud Tongyi Dianjin.
       * **Prerequisites**
       * - Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain your workspace ID: retrieve your [workspace identifier](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunChatResultGenerationRequest
       * @return RunChatResultGenerationResponse
       */
      Models::RunChatResultGenerationResponse runChatResultGeneration(const string &workspaceId, const Models::RunChatResultGenerationRequest &request);

      /**
       * @summary Retrieves session analysis results through a streaming API.
       *
       * @description Before you use this API, make sure that you understand the billing methods and pricing for Tongyi Gold.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Gold.
       * You must have a workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunDialogAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDialogAnalysisResponse
       */
      FutureGenerator<Models::RunDialogAnalysisResponse> runDialogAnalysisWithSSE(const string &workspaceId, const Models::RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves session analysis results through a streaming API.
       *
       * @description Before you use this API, make sure that you understand the billing methods and pricing for Tongyi Gold.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Gold.
       * You must have a workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunDialogAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDialogAnalysisResponse
       */
      Models::RunDialogAnalysisResponse runDialogAnalysisWithOptions(const string &workspaceId, const Models::RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves session analysis results through a streaming API.
       *
       * @description Before you use this API, make sure that you understand the billing methods and pricing for Tongyi Gold.
       * Prerequisites
       * You have activated Alibaba Cloud Model Studio and Tongyi Gold.
       * You must have a workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request RunDialogAnalysisRequest
       * @return RunDialogAnalysisResponse
       */
      Models::RunDialogAnalysisResponse runDialogAnalysis(const string &workspaceId, const Models::RunDialogAnalysisRequest &request);

      /**
       * @summary Generates a chat response from a document library. You can ask questions in natural language, and the system retrieves relevant information to provide a summarized answer.
       *
       * @param request RunLibraryChatGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunLibraryChatGenerationResponse
       */
      FutureGenerator<Models::RunLibraryChatGenerationResponse> runLibraryChatGenerationWithSSE(const string &workspaceId, const Models::RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a chat response from a document library. You can ask questions in natural language, and the system retrieves relevant information to provide a summarized answer.
       *
       * @param request RunLibraryChatGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunLibraryChatGenerationResponse
       */
      Models::RunLibraryChatGenerationResponse runLibraryChatGenerationWithOptions(const string &workspaceId, const Models::RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a chat response from a document library. You can ask questions in natural language, and the system retrieves relevant information to provide a summarized answer.
       *
       * @param request RunLibraryChatGenerationRequest
       * @return RunLibraryChatGenerationResponse
       */
      Models::RunLibraryChatGenerationResponse runLibraryChatGeneration(const string &workspaceId, const Models::RunLibraryChatGenerationRequest &request);

      /**
       * @summary Submit a list of questions and retrieve results by calling the `GetChatQuestionResp` API.
       *
       * @description Review the pricing and billing details for the Tongyi Dianjin product before you use this API.
       * Prerequisites
       * Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain the \\`workspaceId\\`: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request SubmitChatQuestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitChatQuestionResponse
       */
      Models::SubmitChatQuestionResponse submitChatQuestionWithOptions(const string &workspaceId, const Models::SubmitChatQuestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a list of questions and retrieve results by calling the `GetChatQuestionResp` API.
       *
       * @description Review the pricing and billing details for the Tongyi Dianjin product before you use this API.
       * Prerequisites
       * Activate Alibaba Cloud Model Studio and Tongyi Dianjin.
       * Obtain the \\`workspaceId\\`: Retrieve the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request SubmitChatQuestionRequest
       * @return SubmitChatQuestionResponse
       */
      Models::SubmitChatQuestionResponse submitChatQuestion(const string &workspaceId, const Models::SubmitChatQuestionRequest &request);

      /**
       * @summary Updates the title, metadata, and other information of a document.
       *
       * @description **Prerequisites**
       * - Activate the Alibaba Cloud Model Studio service and the Tongyi Gold service.
       * - Obtain your workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UpdateDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocumentWithOptions(const string &workspaceId, const Models::UpdateDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the title, metadata, and other information of a document.
       *
       * @description **Prerequisites**
       * - Activate the Alibaba Cloud Model Studio service and the Tongyi Gold service.
       * - Obtain your workspace ID. For more information, see [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UpdateDocumentRequest
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocument(const string &workspaceId, const Models::UpdateDocumentRequest &request);

      /**
       * @summary Update the text content of a document chunk in a document.
       *
       * @description Before using this API, ensure you understand the billing methods and pricing of the Tongyi Gold product.
       * Prerequisites
       * You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
       * Obtain the workspaceId. For more information, see the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UpdateDocumentChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocumentChunkResponse
       */
      Models::UpdateDocumentChunkResponse updateDocumentChunkWithOptions(const string &workspaceId, const Models::UpdateDocumentChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the text content of a document chunk in a document.
       *
       * @description Before using this API, ensure you understand the billing methods and pricing of the Tongyi Gold product.
       * Prerequisites
       * You must activate Alibaba Cloud Model Studio and Tongyi Gold services.
       * Obtain the workspaceId. For more information, see the [workspace identity](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UpdateDocumentChunkRequest
       * @return UpdateDocumentChunkResponse
       */
      Models::UpdateDocumentChunkResponse updateDocumentChunk(const string &workspaceId, const Models::UpdateDocumentChunkRequest &request);

      /**
       * @summary Updates a document library. You can update the library name, description, and index configuration.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UpdateLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLibraryResponse
       */
      Models::UpdateLibraryResponse updateLibraryWithOptions(const string &workspaceId, const Models::UpdateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a document library. You can update the library name, description, and index configuration.
       *
       * @description **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - Obtain the workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UpdateLibraryRequest
       * @return UpdateLibraryResponse
       */
      Models::UpdateLibraryResponse updateLibrary(const string &workspaceId, const Models::UpdateLibraryRequest &request);

      /**
       * @summary Updates a Q&A library. After the update, use the GenDocQaResult API to parse the Q&A pairs.
       *
       * @param request UpdateQaLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQaLibraryResponse
       */
      Models::UpdateQaLibraryResponse updateQaLibraryWithOptions(const string &workspaceId, const Models::UpdateQaLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Q&A library. After the update, use the GenDocQaResult API to parse the Q&A pairs.
       *
       * @param request UpdateQaLibraryRequest
       * @return UpdateQaLibraryResponse
       */
      Models::UpdateQaLibraryResponse updateQaLibrary(const string &workspaceId, const Models::UpdateQaLibraryRequest &request);

      /**
       * @summary Upload a document to a document library. The system parses the document, splits it into chunks, and builds an index.
       *
       * @description Before you use this operation, review the Tongyi Dianjin pricing details.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UploadDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocumentWithOptions(const string &workspaceId, const Models::UploadDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a document to a document library. The system parses the document, splits it into chunks, and builds an index.
       *
       * @description Before you use this operation, review the Tongyi Dianjin pricing details.
       * **Prerequisites**
       * - You have activated Alibaba Cloud Model Studio and Tongyi Dianjin.
       * - You have obtained a workspace ID. For more information, see [Get the workspace ID](https://help.aliyun.com/zh/model-studio/developer-reference/get-app-id-and-workspace?spm=openapi-amp.newDocPublishment.0.0.2eb8281foUVd15#2612f896detsz:~:text=%E6%9F%A5%E7%9C%8BAPI%2DKEY%E3%80%82-,%E8%8E%B7%E5%8F%96APP%2DID%E5%92%8CWORKSPACE,-%E8%BF%9B%E5%85%A5%E6%88%91%E7%9A%84%E5%BA%94%E7%94%A8).
       *
       * @param request UploadDocumentRequest
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocument(const string &workspaceId, const Models::UploadDocumentRequest &request);

      Models::UploadDocumentResponse uploadDocumentAdvance(const string &workspaceId, const Models::UploadDocumentAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
