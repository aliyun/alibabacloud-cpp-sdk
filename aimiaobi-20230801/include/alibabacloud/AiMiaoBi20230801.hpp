// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIMIAOBI20230801_HPP_
#define ALIBABACLOUD_AIMIAOBI20230801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AiMiaoBi20230801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AiMiaoBi20230801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Add a custom term to the audit dictionary.
       *
       * @param tmpReq AddAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuditTermsResponse
       */
      Models::AddAuditTermsResponse addAuditTermsWithOptions(const Models::AddAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a custom term to the audit dictionary.
       *
       * @param request AddAuditTermsRequest
       * @return AddAuditTermsResponse
       */
      Models::AddAuditTermsResponse addAuditTerms(const Models::AddAuditTermsRequest &request);

      /**
       * @summary Adds a document to a data source.
       *
       * @param tmpReq AddDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDatasetDocumentResponse
       */
      Models::AddDatasetDocumentResponse addDatasetDocumentWithOptions(const Models::AddDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a document to a data source.
       *
       * @param request AddDatasetDocumentRequest
       * @return AddDatasetDocumentResponse
       */
      Models::AddDatasetDocumentResponse addDatasetDocument(const Models::AddDatasetDocumentRequest &request);

      /**
       * @summary Generates a video clip.
       *
       * @param tmpReq AsyncCreateClipsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncCreateClipsTaskResponse
       */
      Models::AsyncCreateClipsTaskResponse asyncCreateClipsTaskWithOptions(const Models::AsyncCreateClipsTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a video clip.
       *
       * @param request AsyncCreateClipsTaskRequest
       * @return AsyncCreateClipsTaskResponse
       */
      Models::AsyncCreateClipsTaskResponse asyncCreateClipsTask(const Models::AsyncCreateClipsTaskRequest &request);

      /**
       * @summary Creates a timeline for smart video editing.
       *
       * @param tmpReq AsyncCreateClipsTimeLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncCreateClipsTimeLineResponse
       */
      Models::AsyncCreateClipsTimeLineResponse asyncCreateClipsTimeLineWithOptions(const Models::AsyncCreateClipsTimeLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a timeline for smart video editing.
       *
       * @param request AsyncCreateClipsTimeLineRequest
       * @return AsyncCreateClipsTimeLineResponse
       */
      Models::AsyncCreateClipsTimeLineResponse asyncCreateClipsTimeLine(const Models::AsyncCreateClipsTimeLineRequest &request);

      /**
       * @summary Edits the timeline of a video editing task.
       *
       * @param tmpReq AsyncEditTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncEditTimelineResponse
       */
      Models::AsyncEditTimelineResponse asyncEditTimelineWithOptions(const Models::AsyncEditTimelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the timeline of a video editing task.
       *
       * @param request AsyncEditTimelineRequest
       * @return AsyncEditTimelineResponse
       */
      Models::AsyncEditTimelineResponse asyncEditTimeline(const Models::AsyncEditTimelineRequest &request);

      /**
       * @summary Upload a tender document.
       *
       * @param request AsyncUploadTenderDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncUploadTenderDocResponse
       */
      Models::AsyncUploadTenderDocResponse asyncUploadTenderDocWithOptions(const Models::AsyncUploadTenderDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a tender document.
       *
       * @param request AsyncUploadTenderDocRequest
       * @return AsyncUploadTenderDocResponse
       */
      Models::AsyncUploadTenderDocResponse asyncUploadTenderDoc(const Models::AsyncUploadTenderDocRequest &request);

      /**
       * @summary Uploads video assets for editing.
       *
       * @param tmpReq AsyncUploadVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncUploadVideoResponse
       */
      Models::AsyncUploadVideoResponse asyncUploadVideoWithOptions(const Models::AsyncUploadVideoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads video assets for editing.
       *
       * @param request AsyncUploadVideoRequest
       * @return AsyncUploadVideoResponse
       */
      Models::AsyncUploadVideoResponse asyncUploadVideo(const Models::AsyncUploadVideoRequest &request);

      /**
       * @summary An API for writing bidding documents.
       *
       * @param request AsyncWritingBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncWritingBiddingDocResponse
       */
      Models::AsyncWritingBiddingDocResponse asyncWritingBiddingDocWithOptions(const Models::AsyncWritingBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An API for writing bidding documents.
       *
       * @param request AsyncWritingBiddingDocRequest
       * @return AsyncWritingBiddingDocResponse
       */
      Models::AsyncWritingBiddingDocResponse asyncWritingBiddingDoc(const Models::AsyncWritingBiddingDocRequest &request);

      /**
       * @summary Binds a PowerPoint (PPT) artifact.
       *
       * @param request BindPptArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPptArtifactResponse
       */
      Models::BindPptArtifactResponse bindPptArtifactWithOptions(const Models::BindPptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a PowerPoint (PPT) artifact.
       *
       * @param request BindPptArtifactRequest
       * @return BindPptArtifactResponse
       */
      Models::BindPptArtifactResponse bindPptArtifact(const Models::BindPptArtifactRequest &request);

      /**
       * @summary Cancels pending asynchronous tasks.
       *
       * @param request CancelAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAsyncTaskResponse
       */
      Models::CancelAsyncTaskResponse cancelAsyncTaskWithOptions(const Models::CancelAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels pending asynchronous tasks.
       *
       * @param request CancelAsyncTaskRequest
       * @return CancelAsyncTaskResponse
       */
      Models::CancelAsyncTaskResponse cancelAsyncTask(const Models::CancelAsyncTaskRequest &request);

      /**
       * @summary Cancel an audit task.
       *
       * @param request CancelAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAuditTaskResponse
       */
      Models::CancelAuditTaskResponse cancelAuditTaskWithOptions(const Models::CancelAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel an audit task.
       *
       * @param request CancelAuditTaskRequest
       * @return CancelAuditTaskResponse
       */
      Models::CancelAuditTaskResponse cancelAuditTask(const Models::CancelAuditTaskRequest &request);

      /**
       * @summary Cancels a deep writing task.
       *
       * @param request CancelDeepWriteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDeepWriteTaskResponse
       */
      Models::CancelDeepWriteTaskResponse cancelDeepWriteTaskWithOptions(const Models::CancelDeepWriteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a deep writing task.
       *
       * @param request CancelDeepWriteTaskRequest
       * @return CancelDeepWriteTaskResponse
       */
      Models::CancelDeepWriteTaskResponse cancelDeepWriteTask(const Models::CancelDeepWriteTaskRequest &request);

      /**
       * @summary Clears all intervention content.
       *
       * @param request ClearIntervenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearIntervenesResponse
       */
      Models::ClearIntervenesResponse clearIntervenesWithOptions(const Models::ClearIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears all intervention content.
       *
       * @param request ClearIntervenesRequest
       * @return ClearIntervenesResponse
       */
      Models::ClearIntervenesResponse clearIntervenes(const Models::ClearIntervenesRequest &request);

      /**
       * @summary This interface confirms whether the parsing results from your custom rule library submission are used for audit tasks. Because parsing results may not meet your requirements, use this interface to perform a second confirmation. If you are satisfied with the parsing of your submitted rule library, provide the TaskId from that submission as an input parameter. The system then post-processes your uploaded rule library and makes it available for auditing. Otherwise, invoke the SubmitAuditNote interface again to upload the modified rule library.
       *
       * @param request ConfirmAndPostProcessAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmAndPostProcessAuditNoteResponse
       */
      Models::ConfirmAndPostProcessAuditNoteResponse confirmAndPostProcessAuditNoteWithOptions(const Models::ConfirmAndPostProcessAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface confirms whether the parsing results from your custom rule library submission are used for audit tasks. Because parsing results may not meet your requirements, use this interface to perform a second confirmation. If you are satisfied with the parsing of your submitted rule library, provide the TaskId from that submission as an input parameter. The system then post-processes your uploaded rule library and makes it available for auditing. Otherwise, invoke the SubmitAuditNote interface again to upload the modified rule library.
       *
       * @param request ConfirmAndPostProcessAuditNoteRequest
       * @return ConfirmAndPostProcessAuditNoteResponse
       */
      Models::ConfirmAndPostProcessAuditNoteResponse confirmAndPostProcessAuditNote(const Models::ConfirmAndPostProcessAuditNoteRequest &request);

      /**
       * @summary Batch add permissions:\\
       * \\- Dataset permissions\\
       *
       * @param tmpReq CreateDataPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataPermissionsResponse
       */
      Models::CreateDataPermissionsResponse createDataPermissionsWithOptions(const Models::CreateDataPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch add permissions:\\
       * \\- Dataset permissions\\
       *
       * @param request CreateDataPermissionsRequest
       * @return CreateDataPermissionsResponse
       */
      Models::CreateDataPermissionsResponse createDataPermissions(const Models::CreateDataPermissionsRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @param tmpReq CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary General configurations — Create
       *
       * @param request CreateGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGeneralConfigResponse
       */
      Models::CreateGeneralConfigResponse createGeneralConfigWithOptions(const Models::CreateGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary General configurations — Create
       *
       * @param request CreateGeneralConfigRequest
       * @return CreateGeneralConfigResponse
       */
      Models::CreateGeneralConfigResponse createGeneralConfig(const Models::CreateGeneralConfigRequest &request);

      /**
       * @summary Saves an article created in Miaobi. This operation supports rich text.
       *
       * @param tmpReq CreateGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGeneratedContentResponse
       */
      Models::CreateGeneratedContentResponse createGeneratedContentWithOptions(const Models::CreateGeneratedContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves an article created in Miaobi. This operation supports rich text.
       *
       * @param request CreateGeneratedContentRequest
       * @return CreateGeneratedContentResponse
       */
      Models::CreateGeneratedContentResponse createGeneratedContent(const Models::CreateGeneratedContentRequest &request);

      /**
       * @summary Creates a temporary token for the online inference API.
       *
       * @param request CreateTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createTokenWithOptions(const Models::CreateTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a temporary token for the online inference API.
       *
       * @param request CreateTokenRequest
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createToken(const Models::CreateTokenRequest &request);

      /**
       * @summary Deletes all custom rule libraries available for audit under the user account. This operation is irreversible. To archive rule libraries, use the DownloadAuditNote API to save them before deletion.
       *
       * @param request DeleteAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuditNoteResponse
       */
      Models::DeleteAuditNoteResponse deleteAuditNoteWithOptions(const Models::DeleteAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all custom rule libraries available for audit under the user account. This operation is irreversible. To archive rule libraries, use the DownloadAuditNote API to save them before deletion.
       *
       * @param request DeleteAuditNoteRequest
       * @return DeleteAuditNoteResponse
       */
      Models::DeleteAuditNoteResponse deleteAuditNote(const Models::DeleteAuditNoteRequest &request);

      /**
       * @summary Deletes specified term records.
       *
       * @param tmpReq DeleteAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuditTermsResponse
       */
      Models::DeleteAuditTermsResponse deleteAuditTermsWithOptions(const Models::DeleteAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified term records.
       *
       * @param request DeleteAuditTermsRequest
       * @return DeleteAuditTermsResponse
       */
      Models::DeleteAuditTermsResponse deleteAuditTerms(const Models::DeleteAuditTermsRequest &request);

      /**
       * @summary Deletes a custom text.
       *
       * @param request DeleteCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTextResponse
       */
      Models::DeleteCustomTextResponse deleteCustomTextWithOptions(const Models::DeleteCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom text.
       *
       * @param request DeleteCustomTextRequest
       * @return DeleteCustomTextResponse
       */
      Models::DeleteCustomTextResponse deleteCustomText(const Models::DeleteCustomTextRequest &request);

      /**
       * @summary Delete a custom hot spot event by topic name.
       *
       * @param request DeleteCustomTopicByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTopicByTopicResponse
       */
      Models::DeleteCustomTopicByTopicResponse deleteCustomTopicByTopicWithOptions(const Models::DeleteCustomTopicByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a custom hot spot event by topic name.
       *
       * @param request DeleteCustomTopicByTopicRequest
       * @return DeleteCustomTopicByTopicResponse
       */
      Models::DeleteCustomTopicByTopicResponse deleteCustomTopicByTopic(const Models::DeleteCustomTopicByTopicRequest &request);

      /**
       * @summary Deletes a custom topic viewpoint by its ID.
       *
       * @param request DeleteCustomTopicViewPointByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTopicViewPointByIdResponse
       */
      Models::DeleteCustomTopicViewPointByIdResponse deleteCustomTopicViewPointByIdWithOptions(const Models::DeleteCustomTopicViewPointByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom topic viewpoint by its ID.
       *
       * @param request DeleteCustomTopicViewPointByIdRequest
       * @return DeleteCustomTopicViewPointByIdResponse
       */
      Models::DeleteCustomTopicViewPointByIdResponse deleteCustomTopicViewPointById(const Models::DeleteCustomTopicViewPointByIdRequest &request);

      /**
       * @summary Batch delete dataset permissions
       *
       * @param tmpReq DeleteDataPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataPermissionsResponse
       */
      Models::DeleteDataPermissionsResponse deleteDataPermissionsWithOptions(const Models::DeleteDataPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch delete dataset permissions
       *
       * @param request DeleteDataPermissionsRequest
       * @return DeleteDataPermissionsResponse
       */
      Models::DeleteDataPermissionsResponse deleteDataPermissions(const Models::DeleteDataPermissionsRequest &request);

      /**
       * @summary Deletes a dataset from the data source.
       *
       * @param request DeleteDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const Models::DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset from the data source.
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const Models::DeleteDatasetRequest &request);

      /**
       * @summary Delete source documents.
       *
       * @param request DeleteDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetDocumentResponse
       */
      Models::DeleteDatasetDocumentResponse deleteDatasetDocumentWithOptions(const Models::DeleteDatasetDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete source documents.
       *
       * @param request DeleteDatasetDocumentRequest
       * @return DeleteDatasetDocumentResponse
       */
      Models::DeleteDatasetDocumentResponse deleteDatasetDocument(const Models::DeleteDatasetDocumentRequest &request);

      /**
       * @summary Deletes multiple documents.
       *
       * @param tmpReq DeleteDocsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocsResponse
       */
      Models::DeleteDocsResponse deleteDocsWithOptions(const Models::DeleteDocsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple documents.
       *
       * @param request DeleteDocsRequest
       * @return DeleteDocsResponse
       */
      Models::DeleteDocsResponse deleteDocs(const Models::DeleteDocsRequest &request);

      /**
       * @summary Deletes the specified URL used for factuality audit.
       *
       * @param request DeleteFactAuditUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFactAuditUrlResponse
       */
      Models::DeleteFactAuditUrlResponse deleteFactAuditUrlWithOptions(const Models::DeleteFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified URL used for factuality audit.
       *
       * @param request DeleteFactAuditUrlRequest
       * @return DeleteFactAuditUrlResponse
       */
      Models::DeleteFactAuditUrlResponse deleteFactAuditUrl(const Models::DeleteFactAuditUrlRequest &request);

      /**
       * @summary Deletes general configurations.
       *
       * @param request DeleteGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGeneralConfigResponse
       */
      Models::DeleteGeneralConfigResponse deleteGeneralConfigWithOptions(const Models::DeleteGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes general configurations.
       *
       * @param request DeleteGeneralConfigRequest
       * @return DeleteGeneralConfigResponse
       */
      Models::DeleteGeneralConfigResponse deleteGeneralConfig(const Models::DeleteGeneralConfigRequest &request);

      /**
       * @summary Deletes an article created in MiaoBi.
       *
       * @param request DeleteGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGeneratedContentResponse
       */
      Models::DeleteGeneratedContentResponse deleteGeneratedContentWithOptions(const Models::DeleteGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an article created in MiaoBi.
       *
       * @param request DeleteGeneratedContentRequest
       * @return DeleteGeneratedContentResponse
       */
      Models::DeleteGeneratedContentResponse deleteGeneratedContent(const Models::DeleteGeneratedContentRequest &request);

      /**
       * @summary Deletes an intervention rule.
       *
       * @param request DeleteInterveneRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInterveneRuleResponse
       */
      Models::DeleteInterveneRuleResponse deleteInterveneRuleWithOptions(const Models::DeleteInterveneRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an intervention rule.
       *
       * @param request DeleteInterveneRuleRequest
       * @return DeleteInterveneRuleResponse
       */
      Models::DeleteInterveneRuleResponse deleteInterveneRule(const Models::DeleteInterveneRuleRequest &request);

      /**
       * @summary Deletes a material from the material library.
       *
       * @param request DeleteMaterialByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialByIdResponse
       */
      Models::DeleteMaterialByIdResponse deleteMaterialByIdWithOptions(const Models::DeleteMaterialByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a material from the material library.
       *
       * @param request DeleteMaterialByIdRequest
       * @return DeleteMaterialByIdResponse
       */
      Models::DeleteMaterialByIdResponse deleteMaterialById(const Models::DeleteMaterialByIdRequest &request);

      /**
       * @summary Delete a PPT work
       *
       * @description - This API operation uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI portal is not compatible with the SSE inference protocol. You cannot directly test this API operation in the portal. For more information about how to call this API operation using the software development kit (SDK) for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, see [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request DeletePptArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePptArtifactResponse
       */
      Models::DeletePptArtifactResponse deletePptArtifactWithOptions(const Models::DeletePptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a PPT work
       *
       * @description - This API operation uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI portal is not compatible with the SSE inference protocol. You cannot directly test this API operation in the portal. For more information about how to call this API operation using the software development kit (SDK) for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, see [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request DeletePptArtifactRequest
       * @return DeletePptArtifactResponse
       */
      Models::DeletePptArtifactResponse deletePptArtifact(const Models::DeletePptArtifactRequest &request);

      /**
       * @summary Deletes a specified custom style.
       *
       * @param request DeleteStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStyleLearningResultResponse
       */
      Models::DeleteStyleLearningResultResponse deleteStyleLearningResultWithOptions(const Models::DeleteStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified custom style.
       *
       * @param request DeleteStyleLearningResultRequest
       * @return DeleteStyleLearningResultResponse
       */
      Models::DeleteStyleLearningResultResponse deleteStyleLearningResult(const Models::DeleteStyleLearningResultRequest &request);

      /**
       * @summary Extracts the content of documents from URLs.
       *
       * @param tmpReq DocumentExtractionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocumentExtractionResponse
       */
      Models::DocumentExtractionResponse documentExtractionWithOptions(const Models::DocumentExtractionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts the content of documents from URLs.
       *
       * @param request DocumentExtractionRequest
       * @return DocumentExtractionResponse
       */
      Models::DocumentExtractionResponse documentExtraction(const Models::DocumentExtractionRequest &request);

      /**
       * @summary Call this API to download the structured rule library for further processing. You can use this API to download either the structured rule library before post-processing or the structured rule library currently available for auditing. For specific usage, see the input parameter descriptions.
       *
       * @param request DownloadAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadAuditNoteResponse
       */
      Models::DownloadAuditNoteResponse downloadAuditNoteWithOptions(const Models::DownloadAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this API to download the structured rule library for further processing. You can use this API to download either the structured rule library before post-processing or the structured rule library currently available for auditing. For specific usage, see the input parameter descriptions.
       *
       * @param request DownloadAuditNoteRequest
       * @return DownloadAuditNoteResponse
       */
      Models::DownloadAuditNoteResponse downloadAuditNote(const Models::DownloadAuditNoteRequest &request);

      /**
       * @summary API for downloading bidding documents
       *
       * @param request DownloadBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadBiddingDocResponse
       */
      Models::DownloadBiddingDocResponse downloadBiddingDocWithOptions(const Models::DownloadBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API for downloading bidding documents
       *
       * @param request DownloadBiddingDocRequest
       * @return DownloadBiddingDocResponse
       */
      Models::DownloadBiddingDocResponse downloadBiddingDoc(const Models::DownloadBiddingDocRequest &request);

      /**
       * @summary Edit custom audit term records.
       *
       * @param tmpReq EditAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditAuditTermsResponse
       */
      Models::EditAuditTermsResponse editAuditTermsWithOptions(const Models::EditAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit custom audit term records.
       *
       * @param request EditAuditTermsRequest
       * @return EditAuditTermsResponse
       */
      Models::EditAuditTermsResponse editAuditTerms(const Models::EditAuditTermsRequest &request);

      /**
       * @summary Edits the content of a bidding document.
       *
       * @param request EditBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditBiddingDocResponse
       */
      Models::EditBiddingDocResponse editBiddingDocWithOptions(const Models::EditBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the content of a bidding document.
       *
       * @param request EditBiddingDocRequest
       * @return EditBiddingDocResponse
       */
      Models::EditBiddingDocResponse editBiddingDoc(const Models::EditBiddingDocRequest &request);

      /**
       * @summary Exports the tag details for a specified enterprise VOC analysis task.
       *
       * @param tmpReq ExportAnalysisTagDetailByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAnalysisTagDetailByTaskIdResponse
       */
      Models::ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskIdWithOptions(const Models::ExportAnalysisTagDetailByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the tag details for a specified enterprise VOC analysis task.
       *
       * @param request ExportAnalysisTagDetailByTaskIdRequest
       * @return ExportAnalysisTagDetailByTaskIdResponse
       */
      Models::ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskId(const Models::ExportAnalysisTagDetailByTaskIdRequest &request);

      /**
       * @summary Exports an automated review report.
       *
       * @param request ExportAuditContentResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAuditContentResultResponse
       */
      Models::ExportAuditContentResultResponse exportAuditContentResultWithOptions(const Models::ExportAuditContentResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports an automated review report.
       *
       * @param request ExportAuditContentResultRequest
       * @return ExportAuditContentResultResponse
       */
      Models::ExportAuditContentResultResponse exportAuditContentResult(const Models::ExportAuditContentResultRequest &request);

      /**
       * @summary Exports custom data source topic perspective analysis task results.
       *
       * @param request ExportCustomSourceAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomSourceAnalysisTaskResponse
       */
      Models::ExportCustomSourceAnalysisTaskResponse exportCustomSourceAnalysisTaskWithOptions(const Models::ExportCustomSourceAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports custom data source topic perspective analysis task results.
       *
       * @param request ExportCustomSourceAnalysisTaskRequest
       * @return ExportCustomSourceAnalysisTaskResponse
       */
      Models::ExportCustomSourceAnalysisTaskResponse exportCustomSourceAnalysisTask(const Models::ExportCustomSourceAnalysisTaskRequest &request);

      /**
       * @summary Exports the history of articles created in MiaoBi.
       *
       * @param request ExportGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportGeneratedContentResponse
       */
      Models::ExportGeneratedContentResponse exportGeneratedContentWithOptions(const Models::ExportGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the history of articles created in MiaoBi.
       *
       * @param request ExportGeneratedContentRequest
       * @return ExportGeneratedContentResponse
       */
      Models::ExportGeneratedContentResponse exportGeneratedContent(const Models::ExportGeneratedContentRequest &request);

      /**
       * @summary Exports topic planning documents and provides a publicly accessible URL that expires in one hour.
       *
       * @param tmpReq ExportHotTopicPlanningProposalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportHotTopicPlanningProposalsResponse
       */
      Models::ExportHotTopicPlanningProposalsResponse exportHotTopicPlanningProposalsWithOptions(const Models::ExportHotTopicPlanningProposalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports topic planning documents and provides a publicly accessible URL that expires in one hour.
       *
       * @param request ExportHotTopicPlanningProposalsRequest
       * @return ExportHotTopicPlanningProposalsResponse
       */
      Models::ExportHotTopicPlanningProposalsResponse exportHotTopicPlanningProposals(const Models::ExportHotTopicPlanningProposalsRequest &request);

      /**
       * @summary Exports all interventions.
       *
       * @param request ExportIntervenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportIntervenesResponse
       */
      Models::ExportIntervenesResponse exportIntervenesWithOptions(const Models::ExportIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports all interventions.
       *
       * @param request ExportIntervenesRequest
       * @return ExportIntervenesResponse
       */
      Models::ExportIntervenesResponse exportIntervenes(const Models::ExportIntervenesRequest &request);

      /**
       * @summary Exports a PPT artifact.
       *
       * @param request ExportPptArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportPptArtifactResponse
       */
      Models::ExportPptArtifactResponse exportPptArtifactWithOptions(const Models::ExportPptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a PPT artifact.
       *
       * @param request ExportPptArtifactRequest
       * @return ExportPptArtifactResponse
       */
      Models::ExportPptArtifactResponse exportPptArtifact(const Models::ExportPptArtifactRequest &request);

      /**
       * @summary Provides feedback on the quality of the content that the model generates.
       *
       * @param tmpReq FeedbackDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackDialogueResponse
       */
      Models::FeedbackDialogueResponse feedbackDialogueWithOptions(const Models::FeedbackDialogueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides feedback on the quality of the content that the model generates.
       *
       * @param request FeedbackDialogueRequest
       * @return FeedbackDialogueResponse
       */
      Models::FeedbackDialogueResponse feedbackDialogue(const Models::FeedbackDialogueRequest &request);

      /**
       * @summary Retrieves the results of a term library export task.
       *
       * @param request FetchExportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchExportTermsTaskResponse
       */
      Models::FetchExportTermsTaskResponse fetchExportTermsTaskWithOptions(const Models::FetchExportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the results of a term library export task.
       *
       * @param request FetchExportTermsTaskRequest
       * @return FetchExportTermsTaskResponse
       */
      Models::FetchExportTermsTaskResponse fetchExportTermsTask(const Models::FetchExportTermsTaskRequest &request);

      /**
       * @summary Fetches the result of an asynchronous document export task.
       *
       * @param request FetchExportWordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchExportWordTaskResponse
       */
      Models::FetchExportWordTaskResponse fetchExportWordTaskWithOptions(const Models::FetchExportWordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fetches the result of an asynchronous document export task.
       *
       * @param request FetchExportWordTaskRequest
       * @return FetchExportWordTaskResponse
       */
      Models::FetchExportWordTaskResponse fetchExportWordTask(const Models::FetchExportWordTaskRequest &request);

      /**
       * @summary Retrieve the results of image generation tasks.
       *
       * @param tmpReq FetchImageTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchImageTaskResponse
       */
      Models::FetchImageTaskResponse fetchImageTaskWithOptions(const Models::FetchImageTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the results of image generation tasks.
       *
       * @param request FetchImageTaskRequest
       * @return FetchImageTaskResponse
       */
      Models::FetchImageTaskResponse fetchImageTask(const Models::FetchImageTaskRequest &request);

      /**
       * @summary Retrieves the result of a term import task.
       *
       * @param request FetchImportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchImportTermsTaskResponse
       */
      Models::FetchImportTermsTaskResponse fetchImportTermsTaskWithOptions(const Models::FetchImportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a term import task.
       *
       * @param request FetchImportTermsTaskRequest
       * @return FetchImportTermsTaskResponse
       */
      Models::FetchImportTermsTaskResponse fetchImportTermsTask(const Models::FetchImportTermsTaskRequest &request);

      /**
       * @summary Retrieve the layout task result.
       *
       * @param request FetchParseDocumentLayoutTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchParseDocumentLayoutTaskResponse
       */
      Models::FetchParseDocumentLayoutTaskResponse fetchParseDocumentLayoutTaskWithOptions(const Models::FetchParseDocumentLayoutTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the layout task result.
       *
       * @param request FetchParseDocumentLayoutTaskRequest
       * @return FetchParseDocumentLayoutTaskResponse
       */
      Models::FetchParseDocumentLayoutTaskResponse fetchParseDocumentLayoutTask(const Models::FetchParseDocumentLayoutTaskRequest &request);

      /**
       * @summary Start a task to export content as a Word document.
       *
       * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request GenerateExportWordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateExportWordTaskResponse
       */
      Models::GenerateExportWordTaskResponse generateExportWordTaskWithOptions(const Models::GenerateExportWordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start a task to export content as a Word document.
       *
       * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request GenerateExportWordTaskRequest
       * @return GenerateExportWordTaskResponse
       */
      Models::GenerateExportWordTaskResponse generateExportWordTask(const Models::GenerateExportWordTaskRequest &request);

      /**
       * @summary Generate a temporary public URL.
       *
       * @param request GenerateFileUrlByKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileUrlByKeyResponse
       */
      Models::GenerateFileUrlByKeyResponse generateFileUrlByKeyWithOptions(const Models::GenerateFileUrlByKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a temporary public URL.
       *
       * @param request GenerateFileUrlByKeyRequest
       * @return GenerateFileUrlByKeyResponse
       */
      Models::GenerateFileUrlByKeyResponse generateFileUrlByKey(const Models::GenerateFileUrlByKeyRequest &request);

      /**
       * @summary Asynchronously generates an image from text.
       *
       * @param tmpReq GenerateImageTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateImageTaskResponse
       */
      Models::GenerateImageTaskResponse generateImageTaskWithOptions(const Models::GenerateImageTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously generates an image from text.
       *
       * @param request GenerateImageTaskRequest
       * @return GenerateImageTaskResponse
       */
      Models::GenerateImageTaskResponse generateImageTask(const Models::GenerateImageTaskRequest &request);

      /**
       * @summary Generates a file upload configuration.
       * 1\\. Call this API to obtain the upload configuration. The API returns the `PostUrl` (an internal OSS address for AI Writing Assistant), temporary OSS authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`), and the unique file identifier `fileKey`.
       * 2\\. The client uses the `PostUrl` and the temporary authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`) to upload the file.
       * 3\\. Use the `fileKey` to call subsequent APIs that require a `fileKey`, such as `GenerateFileUrlByKey`.
       *
       * @description This API returns the address and credentials for file uploads. For more information, see [OSS Form Upload](https://help.aliyun.com/zh/oss/user-guide/form-upload?scm=20140722.H_31849._.OR_help-T_cn~zh-V_1).
       *
       * @param request GenerateUploadConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadConfigResponse
       */
      Models::GenerateUploadConfigResponse generateUploadConfigWithOptions(const Models::GenerateUploadConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a file upload configuration.
       * 1\\. Call this API to obtain the upload configuration. The API returns the `PostUrl` (an internal OSS address for AI Writing Assistant), temporary OSS authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`), and the unique file identifier `fileKey`.
       * 2\\. The client uses the `PostUrl` and the temporary authentication information (`key`, `OSSAccessKeyId`, `Signature`, and `policy`) to upload the file.
       * 3\\. Use the `fileKey` to call subsequent APIs that require a `fileKey`, such as `GenerateFileUrlByKey`.
       *
       * @description This API returns the address and credentials for file uploads. For more information, see [OSS Form Upload](https://help.aliyun.com/zh/oss/user-guide/form-upload?scm=20140722.H_31849._.OR_help-T_cn~zh-V_1).
       *
       * @param request GenerateUploadConfigRequest
       * @return GenerateUploadConfigResponse
       */
      Models::GenerateUploadConfigResponse generateUploadConfig(const Models::GenerateUploadConfigRequest &request);

      /**
       * @summary Generates viewpoints from article snippets.
       *
       * @param tmpReq GenerateViewPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateViewPointResponse
       */
      Models::GenerateViewPointResponse generateViewPointWithOptions(const Models::GenerateViewPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates viewpoints from article snippets.
       *
       * @param request GenerateViewPointRequest
       * @return GenerateViewPointResponse
       */
      Models::GenerateViewPointResponse generateViewPoint(const Models::GenerateViewPointRequest &request);

      /**
       * @summary Queries the progress of a post-processing task for a rule library. Use this operation together with the ConfirmAndPostProcessAuditNote operation to check the status of the current post-processing task.
       *
       * @param request GetAuditNotePostProcessingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditNotePostProcessingStatusResponse
       */
      Models::GetAuditNotePostProcessingStatusResponse getAuditNotePostProcessingStatusWithOptions(const Models::GetAuditNotePostProcessingStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a post-processing task for a rule library. Use this operation together with the ConfirmAndPostProcessAuditNote operation to check the status of the current post-processing task.
       *
       * @param request GetAuditNotePostProcessingStatusRequest
       * @return GetAuditNotePostProcessingStatusResponse
       */
      Models::GetAuditNotePostProcessingStatusResponse getAuditNotePostProcessingStatus(const Models::GetAuditNotePostProcessingStatusRequest &request);

      /**
       * @summary Checks the processing status of an uploaded rule library. This operation returns the current status of the upload task, the size of the parsed rule library file, and its storage path.
       *
       * @param request GetAuditNoteProcessingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditNoteProcessingStatusResponse
       */
      Models::GetAuditNoteProcessingStatusResponse getAuditNoteProcessingStatusWithOptions(const Models::GetAuditNoteProcessingStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the processing status of an uploaded rule library. This operation returns the current status of the upload task, the size of the parsed rule library file, and its storage path.
       *
       * @param request GetAuditNoteProcessingStatusRequest
       * @return GetAuditNoteProcessingStatusResponse
       */
      Models::GetAuditNoteProcessingStatusResponse getAuditNoteProcessingStatus(const Models::GetAuditNoteProcessingStatusRequest &request);

      /**
       * @summary Retrieves the status of a video editing task.
       *
       * @param request GetAutoClipsTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoClipsTaskInfoResponse
       */
      Models::GetAutoClipsTaskInfoResponse getAutoClipsTaskInfoWithOptions(const Models::GetAutoClipsTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of a video editing task.
       *
       * @param request GetAutoClipsTaskInfoRequest
       * @return GetAutoClipsTaskInfoResponse
       */
      Models::GetAutoClipsTaskInfoResponse getAutoClipsTaskInfo(const Models::GetAutoClipsTaskInfoRequest &request);

      /**
       * @summary Query the rule libraries that are currently available for audit. This operation returns only rule libraries that are active for auditing. To view the contents of a custom rule library, use the DownloadAuditNote API.
       *
       * @param request GetAvailableAuditNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvailableAuditNotesResponse
       */
      Models::GetAvailableAuditNotesResponse getAvailableAuditNotesWithOptions(const Models::GetAvailableAuditNotesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the rule libraries that are currently available for audit. This operation returns only rule libraries that are active for auditing. To view the contents of a custom rule library, use the DownloadAuditNote API.
       *
       * @param request GetAvailableAuditNotesRequest
       * @return GetAvailableAuditNotesResponse
       */
      Models::GetAvailableAuditNotesResponse getAvailableAuditNotes(const Models::GetAvailableAuditNotesRequest &request);

      /**
       * @summary Retrieves the generation results of a bidding document.
       *
       * @param request GetBiddingDocInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBiddingDocInfoResponse
       */
      Models::GetBiddingDocInfoResponse getBiddingDocInfoWithOptions(const Models::GetBiddingDocInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the generation results of a bidding document.
       *
       * @param request GetBiddingDocInfoRequest
       * @return GetBiddingDocInfoResponse
       */
      Models::GetBiddingDocInfoResponse getBiddingDocInfo(const Models::GetBiddingDocInfoRequest &request);

      /**
       * @summary Retrieve the remaining limit for the bidding feature.
       *
       * @param request GetBiddingRemainLimitNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBiddingRemainLimitNumResponse
       */
      Models::GetBiddingRemainLimitNumResponse getBiddingRemainLimitNumWithOptions(const Models::GetBiddingRemainLimitNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the remaining limit for the bidding feature.
       *
       * @param request GetBiddingRemainLimitNumRequest
       * @return GetBiddingRemainLimitNumResponse
       */
      Models::GetBiddingRemainLimitNumResponse getBiddingRemainLimitNum(const Models::GetBiddingRemainLimitNumRequest &request);

      /**
       * @summary Retrieves the classifications from a tag mining task.
       *
       * @param request GetCategoriesByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCategoriesByTaskIdResponse
       */
      Models::GetCategoriesByTaskIdResponse getCategoriesByTaskIdWithOptions(const Models::GetCategoriesByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the classifications from a tag mining task.
       *
       * @param request GetCategoriesByTaskIdRequest
       * @return GetCategoriesByTaskIdResponse
       */
      Models::GetCategoriesByTaskIdResponse getCategoriesByTaskId(const Models::GetCategoriesByTaskIdRequest &request);

      /**
       * @summary Retrieves the built-in resources for smart clipping.
       *
       * @param request GetClipsBuildInResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClipsBuildInResourceResponse
       */
      Models::GetClipsBuildInResourceResponse getClipsBuildInResourceWithOptions(const Models::GetClipsBuildInResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the built-in resources for smart clipping.
       *
       * @param request GetClipsBuildInResourceRequest
       * @return GetClipsBuildInResourceResponse
       */
      Models::GetClipsBuildInResourceResponse getClipsBuildInResource(const Models::GetClipsBuildInResourceRequest &request);

      /**
       * @summary Retrieves the result of a custom hot topic broadcast job.
       *
       * @param request GetCustomHotTopicBroadcastJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomHotTopicBroadcastJobResponse
       */
      Models::GetCustomHotTopicBroadcastJobResponse getCustomHotTopicBroadcastJobWithOptions(const Models::GetCustomHotTopicBroadcastJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a custom hot topic broadcast job.
       *
       * @param request GetCustomHotTopicBroadcastJobRequest
       * @return GetCustomHotTopicBroadcastJobResponse
       */
      Models::GetCustomHotTopicBroadcastJobResponse getCustomHotTopicBroadcastJob(const Models::GetCustomHotTopicBroadcastJobRequest &request);

      /**
       * @summary Retrieves the results of a topic analysis task for a custom data source.
       *
       * @param request GetCustomSourceTopicAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomSourceTopicAnalysisTaskResponse
       */
      Models::GetCustomSourceTopicAnalysisTaskResponse getCustomSourceTopicAnalysisTaskWithOptions(const Models::GetCustomSourceTopicAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the results of a topic analysis task for a custom data source.
       *
       * @param request GetCustomSourceTopicAnalysisTaskRequest
       * @return GetCustomSourceTopicAnalysisTaskResponse
       */
      Models::GetCustomSourceTopicAnalysisTaskResponse getCustomSourceTopicAnalysisTask(const Models::GetCustomSourceTopicAnalysisTaskRequest &request);

      /**
       * @summary Retrieve custom text.
       *
       * @param request GetCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTextResponse
       */
      Models::GetCustomTextResponse getCustomTextWithOptions(const Models::GetCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve custom text.
       *
       * @param request GetCustomTextRequest
       * @return GetCustomTextResponse
       */
      Models::GetCustomTextResponse getCustomText(const Models::GetCustomTextRequest &request);

      /**
       * @summary Retrieve the result of a custom topic selection perspective analysis task.
       *
       * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponse getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the result of a custom topic selection perspective analysis task.
       *
       * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponse getCustomTopicSelectionPerspectiveAnalysisTask(const Models::GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary Retrieves configuration information for write data sources and general search data sources.
       *
       * @param request GetDataSourceOrderConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceOrderConfigResponse
       */
      Models::GetDataSourceOrderConfigResponse getDataSourceOrderConfigWithOptions(const Models::GetDataSourceOrderConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves configuration information for write data sources and general search data sources.
       *
       * @param request GetDataSourceOrderConfigRequest
       * @return GetDataSourceOrderConfigResponse
       */
      Models::GetDataSourceOrderConfigResponse getDataSourceOrderConfig(const Models::GetDataSourceOrderConfigRequest &request);

      /**
       * @summary Data source management details.
       *
       * @param request GetDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const Models::GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Data source management details.
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const Models::GetDatasetRequest &request);

      /**
       * @summary Retrieve the data source document.
       *
       * @param tmpReq GetDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetDocumentResponse
       */
      Models::GetDatasetDocumentResponse getDatasetDocumentWithOptions(const Models::GetDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the data source document.
       *
       * @param request GetDatasetDocumentRequest
       * @return GetDatasetDocumentResponse
       */
      Models::GetDatasetDocumentResponse getDatasetDocument(const Models::GetDatasetDocumentRequest &request);

      /**
       * @summary Queries deep writing tasks. You can use it to check the running status of a specific task.
       *
       * @param request GetDeepWriteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeepWriteTaskResponse
       */
      Models::GetDeepWriteTaskResponse getDeepWriteTaskWithOptions(const Models::GetDeepWriteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deep writing tasks. You can use it to check the running status of a specific task.
       *
       * @param request GetDeepWriteTaskRequest
       * @return GetDeepWriteTaskResponse
       */
      Models::GetDeepWriteTaskResponse getDeepWriteTask(const Models::GetDeepWriteTaskRequest &request);

      /**
       * @summary Queries the result of a deep writing task. If the task is not complete, the operation returns its current status—such as queued, running, failed, or canceled. If the task is complete, the operation returns a URL that points to a compressed package of the task output that you can download.
       *
       * @param request GetDeepWriteTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeepWriteTaskResultResponse
       */
      Models::GetDeepWriteTaskResultResponse getDeepWriteTaskResultWithOptions(const Models::GetDeepWriteTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a deep writing task. If the task is not complete, the operation returns its current status—such as queued, running, failed, or canceled. If the task is complete, the operation returns a URL that points to a compressed package of the task output that you can download.
       *
       * @param request GetDeepWriteTaskResultRequest
       * @return GetDeepWriteTaskResultResponse
       */
      Models::GetDeepWriteTaskResultResponse getDeepWriteTaskResult(const Models::GetDeepWriteTaskResultRequest &request);

      /**
       * @summary Retrieves the result of a content aggregation task.
       *
       * @param request GetDocClusterTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocClusterTaskResponse
       */
      Models::GetDocClusterTaskResponse getDocClusterTaskWithOptions(const Models::GetDocClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a content aggregation task.
       *
       * @param request GetDocClusterTaskRequest
       * @return GetDocClusterTaskResponse
       */
      Models::GetDocClusterTaskResponse getDocClusterTask(const Models::GetDocClusterTaskRequest &request);

      /**
       * @summary Retrieves information about a document.
       *
       * @param request GetDocInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocInfoResponse
       */
      Models::GetDocInfoResponse getDocInfoWithOptions(const Models::GetDocInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a document.
       *
       * @param request GetDocInfoRequest
       * @return GetDocInfoResponse
       */
      Models::GetDocInfoResponse getDocInfo(const Models::GetDocInfoRequest &request);

      /**
       * @summary Retrieves the result of an enterprise Voice of the Customer (VOC) analysis task.
       *
       * @param request GetEnterpriseVocAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnterpriseVocAnalysisTaskResponse
       */
      Models::GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTaskWithOptions(const Models::GetEnterpriseVocAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of an enterprise Voice of the Customer (VOC) analysis task.
       *
       * @param request GetEnterpriseVocAnalysisTaskRequest
       * @return GetEnterpriseVocAnalysisTaskResponse
       */
      Models::GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTask(const Models::GetEnterpriseVocAnalysisTaskRequest &request);

      /**
       * @summary Retrieves the source URL that is currently used for factuality audit.
       *
       * @param request GetFactAuditUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFactAuditUrlResponse
       */
      Models::GetFactAuditUrlResponse getFactAuditUrlWithOptions(const Models::GetFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the source URL that is currently used for factuality audit.
       *
       * @param request GetFactAuditUrlRequest
       * @return GetFactAuditUrlResponse
       */
      Models::GetFactAuditUrlResponse getFactAuditUrl(const Models::GetFactAuditUrlRequest &request);

      /**
       * @summary MiaoRead calculates the word count for a document.
       *
       * @param request GetFileContentLengthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileContentLengthResponse
       */
      Models::GetFileContentLengthResponse getFileContentLengthWithOptions(const Models::GetFileContentLengthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary MiaoRead calculates the word count for a document.
       *
       * @param request GetFileContentLengthRequest
       * @return GetFileContentLengthResponse
       */
      Models::GetFileContentLengthResponse getFileContentLength(const Models::GetFileContentLengthRequest &request);

      /**
       * @summary Queries general configurations.
       *
       * @param request GetGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGeneralConfigResponse
       */
      Models::GetGeneralConfigResponse getGeneralConfigWithOptions(const Models::GetGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries general configurations.
       *
       * @param request GetGeneralConfigRequest
       * @return GetGeneralConfigResponse
       */
      Models::GetGeneralConfigResponse getGeneralConfig(const Models::GetGeneralConfigRequest &request);

      /**
       * @summary Get generated content. Queries the history of articles generated in MiaoBi.
       *
       * @param request GetGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGeneratedContentResponse
       */
      Models::GetGeneratedContentResponse getGeneratedContentWithOptions(const Models::GetGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get generated content. Queries the history of articles generated in MiaoBi.
       *
       * @param request GetGeneratedContentRequest
       * @return GetGeneratedContentResponse
       */
      Models::GetGeneratedContentResponse getGeneratedContent(const Models::GetGeneratedContentRequest &request);

      /**
       * @summary Query news broadcast orders.
       *
       * @param tmpReq GetHotTopicBroadcastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotTopicBroadcastResponse
       */
      Models::GetHotTopicBroadcastResponse getHotTopicBroadcastWithOptions(const Models::GetHotTopicBroadcastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query news broadcast orders.
       *
       * @param request GetHotTopicBroadcastRequest
       * @return GetHotTopicBroadcastResponse
       */
      Models::GetHotTopicBroadcastResponse getHotTopicBroadcast(const Models::GetHotTopicBroadcastRequest &request);

      /**
       * @summary Retrieve the global intervention reply.
       *
       * @param request GetInterveneGlobalReplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneGlobalReplyResponse
       */
      Models::GetInterveneGlobalReplyResponse getInterveneGlobalReplyWithOptions(const Models::GetInterveneGlobalReplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the global intervention reply.
       *
       * @param request GetInterveneGlobalReplyRequest
       * @return GetInterveneGlobalReplyResponse
       */
      Models::GetInterveneGlobalReplyResponse getInterveneGlobalReply(const Models::GetInterveneGlobalReplyRequest &request);

      /**
       * @summary Gets information about an import task.
       *
       * @param request GetInterveneImportTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneImportTaskInfoResponse
       */
      Models::GetInterveneImportTaskInfoResponse getInterveneImportTaskInfoWithOptions(const Models::GetInterveneImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about an import task.
       *
       * @param request GetInterveneImportTaskInfoRequest
       * @return GetInterveneImportTaskInfoResponse
       */
      Models::GetInterveneImportTaskInfoResponse getInterveneImportTaskInfo(const Models::GetInterveneImportTaskInfoRequest &request);

      /**
       * @summary Retrieves the details of an intervention rule.
       *
       * @param request GetInterveneRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneRuleDetailResponse
       */
      Models::GetInterveneRuleDetailResponse getInterveneRuleDetailWithOptions(const Models::GetInterveneRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an intervention rule.
       *
       * @param request GetInterveneRuleDetailRequest
       * @return GetInterveneRuleDetailResponse
       */
      Models::GetInterveneRuleDetailResponse getInterveneRuleDetail(const Models::GetInterveneRuleDetailRequest &request);

      /**
       * @summary Retrieves the download URL for the intervention import template.
       *
       * @param request GetInterveneTemplateFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneTemplateFileUrlResponse
       */
      Models::GetInterveneTemplateFileUrlResponse getInterveneTemplateFileUrlWithOptions(const Models::GetInterveneTemplateFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL for the intervention import template.
       *
       * @param request GetInterveneTemplateFileUrlRequest
       * @return GetInterveneTemplateFileUrlResponse
       */
      Models::GetInterveneTemplateFileUrlResponse getInterveneTemplateFileUrl(const Models::GetInterveneTemplateFileUrlRequest &request);

      /**
       * @summary Retrieves detailed information about a material from the Material Library.
       *
       * @param request GetMaterialByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMaterialByIdResponse
       */
      Models::GetMaterialByIdResponse getMaterialByIdWithOptions(const Models::GetMaterialByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves detailed information about a material from the Material Library.
       *
       * @param request GetMaterialByIdRequest
       * @return GetMaterialByIdResponse
       */
      Models::GetMaterialByIdResponse getMaterialById(const Models::GetMaterialByIdRequest &request);

      /**
       * @summary Queries information about a PPT artifact.
       *
       * @description Usage notes:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI portal is not compatible with the SSE protocol and cannot be used for direct debugging. For examples of how to call the API using an SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, [download it from the API portal](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request GetPptArtifactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPptArtifactResponse
       */
      Models::GetPptArtifactResponse getPptArtifactWithOptions(const Models::GetPptArtifactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a PPT artifact.
       *
       * @description Usage notes:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI portal is not compatible with the SSE protocol and cannot be used for direct debugging. For examples of how to call the API using an SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/zh/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, [download it from the API portal](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request GetPptArtifactRequest
       * @return GetPptArtifactResponse
       */
      Models::GetPptArtifactResponse getPptArtifact(const Models::GetPptArtifactRequest &request);

      /**
       * @summary Retrieves the result of a PPT export task.
       *
       * @param request GetPptArtifactExportResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPptArtifactExportResultResponse
       */
      Models::GetPptArtifactExportResultResponse getPptArtifactExportResultWithOptions(const Models::GetPptArtifactExportResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a PPT export task.
       *
       * @param request GetPptArtifactExportResultRequest
       * @return GetPptArtifactExportResultResponse
       */
      Models::GetPptArtifactExportResultResponse getPptArtifactExportResult(const Models::GetPptArtifactExportResultRequest &request);

      /**
       * @summary Retrieves the configuration of a PPT component.
       *
       * @param request GetPptConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPptConfigResponse
       */
      Models::GetPptConfigResponse getPptConfigWithOptions(const Models::GetPptConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a PPT component.
       *
       * @param request GetPptConfigRequest
       * @return GetPptConfigResponse
       */
      Models::GetPptConfigResponse getPptConfig(const Models::GetPptConfigRequest &request);

      /**
       * @summary Gets information about a PPT task.
       *
       * @param request GetPptInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPptInfoResponse
       */
      Models::GetPptInfoResponse getPptInfoWithOptions(const Models::GetPptInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about a PPT task.
       *
       * @param request GetPptInfoRequest
       * @return GetPptInfoResponse
       */
      Models::GetPptInfoResponse getPptInfo(const Models::GetPptInfoRequest &request);

      /**
       * @summary Retrieves the filters for PowerPoint (PPT) templates.
       *
       * @param request GetPptTemplateSelectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPptTemplateSelectorResponse
       */
      Models::GetPptTemplateSelectorResponse getPptTemplateSelectorWithOptions(const Models::GetPptTemplateSelectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the filters for PowerPoint (PPT) templates.
       *
       * @param request GetPptTemplateSelectorRequest
       * @return GetPptTemplateSelectorResponse
       */
      Models::GetPptTemplateSelectorResponse getPptTemplateSelector(const Models::GetPptTemplateSelectorRequest &request);

      /**
       * @summary Retrieves configuration information, such as intelligent configuration styles and inference-related metadata configurations.
       *
       * @param request GetPropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPropertiesResponse
       */
      Models::GetPropertiesResponse getPropertiesWithOptions(const Models::GetPropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves configuration information, such as intelligent configuration styles and inference-related metadata configurations.
       *
       * @param request GetPropertiesRequest
       * @return GetPropertiesResponse
       */
      Models::GetPropertiesResponse getProperties(const Models::GetPropertiesRequest &request);

      /**
       * @summary Queries the result of an automated review.
       *
       * @param request GetSmartAuditResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartAuditResultResponse
       */
      Models::GetSmartAuditResultResponse getSmartAuditResultWithOptions(const Models::GetSmartAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of an automated review.
       *
       * @param request GetSmartAuditResultRequest
       * @return GetSmartAuditResultResponse
       */
      Models::GetSmartAuditResultResponse getSmartAuditResult(const Models::GetSmartAuditResultRequest &request);

      /**
       * @summary Queries a one-click video editing task.
       *
       * @param request GetSmartClipTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartClipTaskResponse
       */
      Models::GetSmartClipTaskResponse getSmartClipTaskWithOptions(const Models::GetSmartClipTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a one-click video editing task.
       *
       * @param request GetSmartClipTaskRequest
       * @return GetSmartClipTaskResponse
       */
      Models::GetSmartClipTaskResponse getSmartClipTask(const Models::GetSmartClipTaskRequest &request);

      /**
       * @summary Retrieves the analysis result of a style learning task.
       *
       * @param request GetStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStyleLearningResultResponse
       */
      Models::GetStyleLearningResultResponse getStyleLearningResultWithOptions(const Models::GetStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the analysis result of a style learning task.
       *
       * @param request GetStyleLearningResultRequest
       * @return GetStyleLearningResultResponse
       */
      Models::GetStyleLearningResultResponse getStyleLearningResult(const Models::GetStyleLearningResultRequest &request);

      /**
       * @summary Retrieve hot topic event information by ID.
       *
       * @param request GetTopicByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicByIdResponse
       */
      Models::GetTopicByIdResponse getTopicByIdWithOptions(const Models::GetTopicByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve hot topic event information by ID.
       *
       * @param request GetTopicByIdRequest
       * @return GetTopicByIdResponse
       */
      Models::GetTopicByIdResponse getTopicById(const Models::GetTopicByIdRequest &request);

      /**
       * @summary Retrieves the result of a topic selection perspective analysis task.
       *
       * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetTopicSelectionPerspectiveAnalysisTaskResponse getTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::GetTopicSelectionPerspectiveAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a topic selection perspective analysis task.
       *
       * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
       * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetTopicSelectionPerspectiveAnalysisTaskResponse getTopicSelectionPerspectiveAnalysisTask(const Models::GetTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary Imports an intervention file.
       *
       * @param request ImportInterveneFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportInterveneFileResponse
       */
      Models::ImportInterveneFileResponse importInterveneFileWithOptions(const Models::ImportInterveneFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an intervention file.
       *
       * @param request ImportInterveneFileRequest
       * @return ImportInterveneFileResponse
       */
      Models::ImportInterveneFileResponse importInterveneFile(const Models::ImportInterveneFileRequest &request);

      /**
       * @summary Asynchronously import an intervention file.
       *
       * @param request ImportInterveneFileAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportInterveneFileAsyncResponse
       */
      Models::ImportInterveneFileAsyncResponse importInterveneFileAsyncWithOptions(const Models::ImportInterveneFileAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously import an intervention file.
       *
       * @param request ImportInterveneFileAsyncRequest
       * @return ImportInterveneFileAsyncResponse
       */
      Models::ImportInterveneFileAsyncResponse importInterveneFileAsync(const Models::ImportInterveneFileAsyncRequest &request);

      /**
       * @summary Important: This is a billable API operation.
       * This API performs two operations:
       * 1\\. Returns the initialization code for the "PPT Generation" frontend component.
       * 2\\. Performs billing.
       *
       * @param request InitiatePptCreationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitiatePptCreationResponse
       */
      Models::InitiatePptCreationResponse initiatePptCreationWithOptions(const Models::InitiatePptCreationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Important: This is a billable API operation.
       * This API performs two operations:
       * 1\\. Returns the initialization code for the "PPT Generation" frontend component.
       * 2\\. Performs billing.
       *
       * @param request InitiatePptCreationRequest
       * @return InitiatePptCreationResponse
       */
      Models::InitiatePptCreationResponse initiatePptCreation(const Models::InitiatePptCreationRequest &request);

      /**
       * @summary Starts a task to create a presentation.
       *
       * @param request InitiatePptCreationV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitiatePptCreationV2Response
       */
      Models::InitiatePptCreationV2Response initiatePptCreationV2WithOptions(const Models::InitiatePptCreationV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a task to create a presentation.
       *
       * @param request InitiatePptCreationV2Request
       * @return InitiatePptCreationV2Response
       */
      Models::InitiatePptCreationV2Response initiatePptCreationV2(const Models::InitiatePptCreationV2Request &request);

      /**
       * @summary Sets global intervention replies.
       *
       * @param tmpReq InsertInterveneGlobalReplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertInterveneGlobalReplyResponse
       */
      Models::InsertInterveneGlobalReplyResponse insertInterveneGlobalReplyWithOptions(const Models::InsertInterveneGlobalReplyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets global intervention replies.
       *
       * @param request InsertInterveneGlobalReplyRequest
       * @return InsertInterveneGlobalReplyResponse
       */
      Models::InsertInterveneGlobalReplyResponse insertInterveneGlobalReply(const Models::InsertInterveneGlobalReplyRequest &request);

      /**
       * @summary Insert an intervention rule.
       *
       * @param tmpReq InsertInterveneRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertInterveneRuleResponse
       */
      Models::InsertInterveneRuleResponse insertInterveneRuleWithOptions(const Models::InsertInterveneRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Insert an intervention rule.
       *
       * @param request InsertInterveneRuleRequest
       * @return InsertInterveneRuleResponse
       */
      Models::InsertInterveneRuleResponse insertInterveneRule(const Models::InsertInterveneRuleRequest &request);

      /**
       * @summary Retrieves a paginated list of details for an enterprise Voice of the Customer (VOC) analysis task.
       *
       * @param tmpReq ListAnalysisTagDetailByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnalysisTagDetailByTaskIdResponse
       */
      Models::ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskIdWithOptions(const Models::ListAnalysisTagDetailByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of details for an enterprise Voice of the Customer (VOC) analysis task.
       *
       * @param request ListAnalysisTagDetailByTaskIdRequest
       * @return ListAnalysisTagDetailByTaskIdResponse
       */
      Models::ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskId(const Models::ListAnalysisTagDetailByTaskIdRequest &request);

      /**
       * @summary Retrieves a list of asynchronous tasks.
       *
       * @param tmpReq ListAsyncTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasksWithOptions(const Models::ListAsyncTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasks(const Models::ListAsyncTasksRequest &request);

      /**
       * @summary Retrieves a list of audit dimensions.
       *
       * @param request ListAuditContentErrorTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditContentErrorTypesResponse
       */
      Models::ListAuditContentErrorTypesResponse listAuditContentErrorTypesWithOptions(const Models::ListAuditContentErrorTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of audit dimensions.
       *
       * @param request ListAuditContentErrorTypesRequest
       * @return ListAuditContentErrorTypesResponse
       */
      Models::ListAuditContentErrorTypesResponse listAuditContentErrorTypes(const Models::ListAuditContentErrorTypesRequest &request);

      /**
       * @summary Retrieve a list of term libraries.
       *
       * @param request ListAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditTermsResponse
       */
      Models::ListAuditTermsResponse listAuditTermsWithOptions(const Models::ListAuditTermsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of term libraries.
       *
       * @param request ListAuditTermsRequest
       * @return ListAuditTermsResponse
       */
      Models::ListAuditTermsResponse listAuditTerms(const Models::ListAuditTermsRequest &request);

      /**
       * @summary Lists smart video editing tasks.
       *
       * @param request ListAutoClipsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoClipsTaskResponse
       */
      Models::ListAutoClipsTaskResponse listAutoClipsTaskWithOptions(const Models::ListAutoClipsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists smart video editing tasks.
       *
       * @param request ListAutoClipsTaskRequest
       * @return ListAutoClipsTaskResponse
       */
      Models::ListAutoClipsTaskResponse listAutoClipsTask(const Models::ListAutoClipsTaskRequest &request);

      /**
       * @summary Retrieves the list of bidding document writing tasks.
       *
       * @param request ListBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBiddingDocResponse
       */
      Models::ListBiddingDocResponse listBiddingDocWithOptions(const Models::ListBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of bidding document writing tasks.
       *
       * @param request ListBiddingDocRequest
       * @return ListBiddingDocResponse
       */
      Models::ListBiddingDocResponse listBiddingDoc(const Models::ListBiddingDocRequest &request);

      /**
       * @summary Retrieves the system-defined presets for the Generate Content workflow. These presets include options such as writing style, article length, output language, and the number of articles to generate.
       *
       * @param request ListBuildConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBuildConfigsResponse
       */
      Models::ListBuildConfigsResponse listBuildConfigsWithOptions(const Models::ListBuildConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the system-defined presets for the Generate Content workflow. These presets include options such as writing style, article length, output language, and the number of articles to generate.
       *
       * @param request ListBuildConfigsRequest
       * @return ListBuildConfigsResponse
       */
      Models::ListBuildConfigsResponse listBuildConfigs(const Models::ListBuildConfigsRequest &request);

      /**
       * @summary Retrieve a list of custom texts.
       *
       * @param request ListCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomTextResponse
       */
      Models::ListCustomTextResponse listCustomTextWithOptions(const Models::ListCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of custom texts.
       *
       * @param request ListCustomTextRequest
       * @return ListCustomTextResponse
       */
      Models::ListCustomTextResponse listCustomText(const Models::ListCustomTextRequest &request);

      /**
       * @summary Lists custom viewpoints.
       *
       * @param tmpReq ListCustomViewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomViewPointsResponse
       */
      Models::ListCustomViewPointsResponse listCustomViewPointsWithOptions(const Models::ListCustomViewPointsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists custom viewpoints.
       *
       * @param request ListCustomViewPointsRequest
       * @return ListCustomViewPointsResponse
       */
      Models::ListCustomViewPointsResponse listCustomViewPoints(const Models::ListCustomViewPointsRequest &request);

      /**
       * @summary Permission to list datasets
       *
       * @param request ListDataPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataPermissionsResponse
       */
      Models::ListDataPermissionsResponse listDataPermissionsWithOptions(const Models::ListDataPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permission to list datasets
       *
       * @param request ListDataPermissionsRequest
       * @return ListDataPermissionsResponse
       */
      Models::ListDataPermissionsResponse listDataPermissions(const Models::ListDataPermissionsRequest &request);

      /**
       * @summary Lists data source documents.
       *
       * @param tmpReq ListDatasetDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetDocumentsResponse
       */
      Models::ListDatasetDocumentsResponse listDatasetDocumentsWithOptions(const Models::ListDatasetDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists data source documents.
       *
       * @param request ListDatasetDocumentsRequest
       * @return ListDatasetDocumentsResponse
       */
      Models::ListDatasetDocumentsResponse listDatasetDocuments(const Models::ListDatasetDocumentsRequest &request);

      /**
       * @summary Data source management - query
       *
       * @param request ListDatasetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const Models::ListDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Data source management - query
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const Models::ListDatasetsRequest &request);

      /**
       * @summary History of online inference scenarios.
       *
       * @param request ListDialoguesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialoguesResponse
       */
      Models::ListDialoguesResponse listDialoguesWithOptions(const Models::ListDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary History of online inference scenarios.
       *
       * @param request ListDialoguesRequest
       * @return ListDialoguesResponse
       */
      Models::ListDialoguesResponse listDialogues(const Models::ListDialoguesRequest &request);

      /**
       * @summary Miàodú retrieves the list of documents.
       *
       * @param tmpReq ListDocsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocsResponse
       */
      Models::ListDocsResponse listDocsWithOptions(const Models::ListDocsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miàodú retrieves the list of documents.
       *
       * @param request ListDocsRequest
       * @return ListDocsResponse
       */
      Models::ListDocsResponse listDocs(const Models::ListDocsRequest &request);

      /**
       * @summary Searches government document libraries based on complex conditions.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request ListDocumentRetrieveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentRetrieveResponse
       */
      Models::ListDocumentRetrieveResponse listDocumentRetrieveWithOptions(const Models::ListDocumentRetrieveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches government document libraries based on complex conditions.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request ListDocumentRetrieveRequest
       * @return ListDocumentRetrieveResponse
       */
      Models::ListDocumentRetrieveResponse listDocumentRetrieve(const Models::ListDocumentRetrieveRequest &request);

      /**
       * @summary Lists the enterprise-specific PPT templates.
       *
       * @description Quanmiao supports iframe integration. For details, see the [Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request ListEnterprisePptTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterprisePptTemplatesResponse
       */
      Models::ListEnterprisePptTemplatesResponse listEnterprisePptTemplatesWithOptions(const Models::ListEnterprisePptTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the enterprise-specific PPT templates.
       *
       * @description Quanmiao supports iframe integration. For details, see the [Quanmiao Public Cloud iframe Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request ListEnterprisePptTemplatesRequest
       * @return ListEnterprisePptTemplatesResponse
       */
      Models::ListEnterprisePptTemplatesResponse listEnterprisePptTemplates(const Models::ListEnterprisePptTemplatesRequest &request);

      /**
       * @summary List of novel perspectives.
       *
       * @param request ListFreshViewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFreshViewPointsResponse
       */
      Models::ListFreshViewPointsResponse listFreshViewPointsWithOptions(const Models::ListFreshViewPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of novel perspectives.
       *
       * @param request ListFreshViewPointsRequest
       * @return ListFreshViewPointsResponse
       */
      Models::ListFreshViewPointsResponse listFreshViewPoints(const Models::ListFreshViewPointsRequest &request);

      /**
       * @summary Lists the general configurations.
       *
       * @param request ListGeneralConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGeneralConfigsResponse
       */
      Models::ListGeneralConfigsResponse listGeneralConfigsWithOptions(const Models::ListGeneralConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the general configurations.
       *
       * @param request ListGeneralConfigsRequest
       * @return ListGeneralConfigsResponse
       */
      Models::ListGeneralConfigsResponse listGeneralConfigs(const Models::ListGeneralConfigsRequest &request);

      /**
       * @summary Retrieve a list of documents: Query the history of articles created in MiaoBi.
       *
       * @param request ListGeneratedContentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGeneratedContentsResponse
       */
      Models::ListGeneratedContentsResponse listGeneratedContentsWithOptions(const Models::ListGeneratedContentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of documents: Query the history of articles created in MiaoBi.
       *
       * @param request ListGeneratedContentsRequest
       * @return ListGeneratedContentsResponse
       */
      Models::ListGeneratedContentsResponse listGeneratedContents(const Models::ListGeneratedContentsRequest &request);

      /**
       * @summary Retrieves the list of trending topic hotspots.
       *
       * @param tmpReq ListHotNewsWithTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotNewsWithTypeResponse
       */
      Models::ListHotNewsWithTypeResponse listHotNewsWithTypeWithOptions(const Models::ListHotNewsWithTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of trending topic hotspots.
       *
       * @param request ListHotNewsWithTypeRequest
       * @return ListHotNewsWithTypeResponse
       */
      Models::ListHotNewsWithTypeResponse listHotNewsWithType(const Models::ListHotNewsWithTypeRequest &request);

      /**
       * @summary Retrieve the list of hot ranking sources for all platforms.
       *
       * @param request ListHotSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotSourcesResponse
       */
      Models::ListHotSourcesResponse listHotSourcesWithOptions(const Models::ListHotSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of hot ranking sources for all platforms.
       *
       * @param request ListHotSourcesRequest
       * @return ListHotSourcesResponse
       */
      Models::ListHotSourcesResponse listHotSources(const Models::ListHotSourcesRequest &request);

      /**
       * @summary Retrieves a list of trending topics.
       *
       * @param tmpReq ListHotTopicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotTopicsResponse
       */
      Models::ListHotTopicsResponse listHotTopicsWithOptions(const Models::ListHotTopicsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of trending topics.
       *
       * @param request ListHotTopicsRequest
       * @return ListHotTopicsResponse
       */
      Models::ListHotTopicsResponse listHotTopics(const Models::ListHotTopicsRequest &request);

      /**
       * @summary List of popular viewpoints.
       *
       * @param request ListHotViewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotViewPointsResponse
       */
      Models::ListHotViewPointsResponse listHotViewPointsWithOptions(const Models::ListHotViewPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of popular viewpoints.
       *
       * @param request ListHotViewPointsRequest
       * @return ListHotViewPointsResponse
       */
      Models::ListHotViewPointsResponse listHotViewPoints(const Models::ListHotViewPointsRequest &request);

      /**
       * @summary Lists the number of intervention projects.
       *
       * @param request ListInterveneCntRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterveneCntResponse
       */
      Models::ListInterveneCntResponse listInterveneCntWithOptions(const Models::ListInterveneCntRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the number of intervention projects.
       *
       * @param request ListInterveneCntRequest
       * @return ListInterveneCntResponse
       */
      Models::ListInterveneCntResponse listInterveneCnt(const Models::ListInterveneCntRequest &request);

      /**
       * @summary Retrieve a list of import tasks.
       *
       * @param request ListInterveneImportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterveneImportTasksResponse
       */
      Models::ListInterveneImportTasksResponse listInterveneImportTasksWithOptions(const Models::ListInterveneImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of import tasks.
       *
       * @param request ListInterveneImportTasksRequest
       * @return ListInterveneImportTasksResponse
       */
      Models::ListInterveneImportTasksResponse listInterveneImportTasks(const Models::ListInterveneImportTasksRequest &request);

      /**
       * @summary Retrieves a list of intervention rules.
       *
       * @param request ListInterveneRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterveneRulesResponse
       */
      Models::ListInterveneRulesResponse listInterveneRulesWithOptions(const Models::ListInterveneRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of intervention rules.
       *
       * @param request ListInterveneRulesRequest
       * @return ListInterveneRulesResponse
       */
      Models::ListInterveneRulesResponse listInterveneRules(const Models::ListInterveneRulesRequest &request);

      /**
       * @summary Retrieves the list of intervention items.
       *
       * @param request ListIntervenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervenesResponse
       */
      Models::ListIntervenesResponse listIntervenesWithOptions(const Models::ListIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of intervention items.
       *
       * @param request ListIntervenesRequest
       * @return ListIntervenesResponse
       */
      Models::ListIntervenesResponse listIntervenes(const Models::ListIntervenesRequest &request);

      /**
       * @summary Retrieve the list of materials from the Material Library.
       *
       * @param tmpReq ListMaterialDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMaterialDocumentsResponse
       */
      Models::ListMaterialDocumentsResponse listMaterialDocumentsWithOptions(const Models::ListMaterialDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of materials from the Material Library.
       *
       * @param request ListMaterialDocumentsRequest
       * @return ListMaterialDocumentsResponse
       */
      Models::ListMaterialDocumentsResponse listMaterialDocuments(const Models::ListMaterialDocumentsRequest &request);

      /**
       * @summary Retrieves a list of planning proposals.
       *
       * @param tmpReq ListPlanningProposalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlanningProposalResponse
       */
      Models::ListPlanningProposalResponse listPlanningProposalWithOptions(const Models::ListPlanningProposalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of planning proposals.
       *
       * @param request ListPlanningProposalRequest
       * @return ListPlanningProposalResponse
       */
      Models::ListPlanningProposalResponse listPlanningProposal(const Models::ListPlanningProposalRequest &request);

      /**
       * @summary Queries a list of PPT artifacts.
       *
       * @param request ListPptArtifactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPptArtifactsResponse
       */
      Models::ListPptArtifactsResponse listPptArtifactsWithOptions(const Models::ListPptArtifactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of PPT artifacts.
       *
       * @param request ListPptArtifactsRequest
       * @return ListPptArtifactsResponse
       */
      Models::ListPptArtifactsResponse listPptArtifacts(const Models::ListPptArtifactsRequest &request);

      /**
       * @summary Queries a list of PowerPoint templates.
       *
       * @param request ListPptTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPptTemplatesResponse
       */
      Models::ListPptTemplatesResponse listPptTemplatesWithOptions(const Models::ListPptTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of PowerPoint templates.
       *
       * @param request ListPptTemplatesRequest
       * @return ListPptTemplatesResponse
       */
      Models::ListPptTemplatesResponse listPptTemplates(const Models::ListPptTemplatesRequest &request);

      /**
       * @summary Lists the dialogue data for a search generation task.
       *
       * @param request ListSearchTaskDialogueDatasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchTaskDialogueDatasResponse
       */
      Models::ListSearchTaskDialogueDatasResponse listSearchTaskDialogueDatasWithOptions(const Models::ListSearchTaskDialogueDatasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the dialogue data for a search generation task.
       *
       * @param request ListSearchTaskDialogueDatasRequest
       * @return ListSearchTaskDialogueDatasResponse
       */
      Models::ListSearchTaskDialogueDatasResponse listSearchTaskDialogueDatas(const Models::ListSearchTaskDialogueDatasRequest &request);

      /**
       * @summary Retrieves the task details for MiaoSou search generation tasks.
       *
       * @param request ListSearchTaskDialoguesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchTaskDialoguesResponse
       */
      Models::ListSearchTaskDialoguesResponse listSearchTaskDialoguesWithOptions(const Models::ListSearchTaskDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the task details for MiaoSou search generation tasks.
       *
       * @param request ListSearchTaskDialoguesRequest
       * @return ListSearchTaskDialoguesResponse
       */
      Models::ListSearchTaskDialoguesResponse listSearchTaskDialogues(const Models::ListSearchTaskDialoguesRequest &request);

      /**
       * @summary Queries the list of historical tasks generated by Miaosou Search.
       *
       * @param tmpReq ListSearchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchTasksResponse
       */
      Models::ListSearchTasksResponse listSearchTasksWithOptions(const Models::ListSearchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of historical tasks generated by Miaosou Search.
       *
       * @param request ListSearchTasksRequest
       * @return ListSearchTasksResponse
       */
      Models::ListSearchTasksResponse listSearchTasks(const Models::ListSearchTasksRequest &request);

      /**
       * @summary Retrieves the list of style learning analysis results.
       *
       * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request ListStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStyleLearningResultResponse
       */
      Models::ListStyleLearningResultResponse listStyleLearningResultWithOptions(const Models::ListStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of style learning analysis results.
       *
       * @description The Quanmiao product supports iframe embedding. For details, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request ListStyleLearningResultRequest
       * @return ListStyleLearningResultResponse
       */
      Models::ListStyleLearningResultResponse listStyleLearningResult(const Models::ListStyleLearningResultRequest &request);

      /**
       * @summary List of timeliness perspectives.
       *
       * @param request ListTimedViewAttitudeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTimedViewAttitudeResponse
       */
      Models::ListTimedViewAttitudeResponse listTimedViewAttitudeWithOptions(const Models::ListTimedViewAttitudeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of timeliness perspectives.
       *
       * @param request ListTimedViewAttitudeRequest
       * @return ListTimedViewAttitudeResponse
       */
      Models::ListTimedViewAttitudeResponse listTimedViewAttitude(const Models::ListTimedViewAttitudeRequest &request);

      /**
       * @summary Retrieve hot spot recommendation events.
       *
       * @param request ListTopicRecommendEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicRecommendEventListResponse
       */
      Models::ListTopicRecommendEventListResponse listTopicRecommendEventListWithOptions(const Models::ListTopicRecommendEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve hot spot recommendation events.
       *
       * @param request ListTopicRecommendEventListRequest
       * @return ListTopicRecommendEventListResponse
       */
      Models::ListTopicRecommendEventListResponse listTopicRecommendEventList(const Models::ListTopicRecommendEventListRequest &request);

      /**
       * @summary Retrieves recommended viewpoints for hot spot events.
       *
       * @param request ListTopicViewPointRecommendEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicViewPointRecommendEventListResponse
       */
      Models::ListTopicViewPointRecommendEventListResponse listTopicViewPointRecommendEventListWithOptions(const Models::ListTopicViewPointRecommendEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves recommended viewpoints for hot spot events.
       *
       * @param request ListTopicViewPointRecommendEventListRequest
       * @return ListTopicViewPointRecommendEventListResponse
       */
      Models::ListTopicViewPointRecommendEventListResponse listTopicViewPointRecommendEventList(const Models::ListTopicViewPointRecommendEventListRequest &request);

      /**
       * @summary Retrieve version information for your purchased services.
       *
       * @param request ListVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVersionsResponse
       */
      Models::ListVersionsResponse listVersionsWithOptions(const Models::ListVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve version information for your purchased services.
       *
       * @param request ListVersionsRequest
       * @return ListVersionsResponse
       */
      Models::ListVersionsResponse listVersions(const Models::ListVersionsRequest &request);

      /**
       * @summary List of viewpoints from netizens.
       *
       * @param request ListWebReviewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebReviewPointsResponse
       */
      Models::ListWebReviewPointsResponse listWebReviewPointsWithOptions(const Models::ListWebReviewPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of viewpoints from netizens.
       *
       * @param request ListWebReviewPointsRequest
       * @return ListWebReviewPointsResponse
       */
      Models::ListWebReviewPointsResponse listWebReviewPoints(const Models::ListWebReviewPointsRequest &request);

      /**
       * @summary Retrieves the list of writing styles.
       *
       * @param request ListWritingStylesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWritingStylesResponse
       */
      Models::ListWritingStylesResponse listWritingStylesWithOptions(const Models::ListWritingStylesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of writing styles.
       *
       * @param request ListWritingStylesRequest
       * @return ListWritingStylesResponse
       */
      Models::ListWritingStylesResponse listWritingStyles(const Models::ListWritingStylesRequest &request);

      /**
       * @summary Queries the details of submitted asynchronous task executions.
       *
       * @param request QueryAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAsyncTaskResponse
       */
      Models::QueryAsyncTaskResponse queryAsyncTaskWithOptions(const Models::QueryAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of submitted asynchronous task executions.
       *
       * @param request QueryAsyncTaskRequest
       * @return QueryAsyncTaskResponse
       */
      Models::QueryAsyncTaskResponse queryAsyncTask(const Models::QueryAsyncTaskRequest &request);

      /**
       * @summary Queries the results of an audit task.
       *
       * @param request QueryAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuditTaskResponse
       */
      Models::QueryAuditTaskResponse queryAuditTaskWithOptions(const Models::QueryAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of an audit task.
       *
       * @param request QueryAuditTaskRequest
       * @return QueryAuditTaskResponse
       */
      Models::QueryAuditTaskResponse queryAuditTask(const Models::QueryAuditTaskRequest &request);

      /**
       * @summary Queries video audit results.
       *
       * @description Queries video audit results by task ID. The response includes video information, shot information, and audit results.
       *
       * @param request QueryVideoAuditResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVideoAuditResultResponse
       */
      Models::QueryVideoAuditResultResponse queryVideoAuditResultWithOptions(const Models::QueryVideoAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries video audit results.
       *
       * @description Queries video audit results by task ID. The response includes video information, shot information, and audit results.
       *
       * @param request QueryVideoAuditResultRequest
       * @return QueryVideoAuditResultResponse
       */
      Models::QueryVideoAuditResultResponse queryVideoAuditResult(const Models::QueryVideoAuditResultRequest &request);

      /**
       * @summary Abbreviates the specified content.
       *
       * @param request RunAbbreviationContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAbbreviationContentResponse
       */
      FutureGenerator<Models::RunAbbreviationContentResponse> runAbbreviationContentWithSSE(const Models::RunAbbreviationContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Abbreviates the specified content.
       *
       * @param request RunAbbreviationContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAbbreviationContentResponse
       */
      Models::RunAbbreviationContentResponse runAbbreviationContentWithOptions(const Models::RunAbbreviationContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Abbreviates the specified content.
       *
       * @param request RunAbbreviationContentRequest
       * @return RunAbbreviationContentResponse
       */
      Models::RunAbbreviationContentResponse runAbbreviationContent(const Models::RunAbbreviationContentRequest &request);

      /**
       * @summary MiaoBi: AI-assisted writing
       *
       * @description QuanMiao products support iframe embedding. For more information, see [QuanMiao Public Cloud iframe Customization for Customer Onboarding](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunAiHelperWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAiHelperWritingResponse
       */
      FutureGenerator<Models::RunAiHelperWritingResponse> runAiHelperWritingWithSSE(const Models::RunAiHelperWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary MiaoBi: AI-assisted writing
       *
       * @description QuanMiao products support iframe embedding. For more information, see [QuanMiao Public Cloud iframe Customization for Customer Onboarding](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunAiHelperWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAiHelperWritingResponse
       */
      Models::RunAiHelperWritingResponse runAiHelperWritingWithOptions(const Models::RunAiHelperWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary MiaoBi: AI-assisted writing
       *
       * @description QuanMiao products support iframe embedding. For more information, see [QuanMiao Public Cloud iframe Customization for Customer Onboarding](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request RunAiHelperWritingRequest
       * @return RunAiHelperWritingResponse
       */
      Models::RunAiHelperWritingResponse runAiHelperWriting(const Models::RunAiHelperWritingRequest &request);

      /**
       * @summary Miaodu generates mind maps of books.
       *
       * @param request RunBookBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookBrainmapResponse
       */
      FutureGenerator<Models::RunBookBrainmapResponse> runBookBrainmapWithSSE(const Models::RunBookBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miaodu generates mind maps of books.
       *
       * @param request RunBookBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookBrainmapResponse
       */
      Models::RunBookBrainmapResponse runBookBrainmapWithOptions(const Models::RunBookBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miaodu generates mind maps of books.
       *
       * @param request RunBookBrainmapRequest
       * @return RunBookBrainmapResponse
       */
      Models::RunBookBrainmapResponse runBookBrainmap(const Models::RunBookBrainmapRequest &request);

      /**
       * @summary Extracts a summary, structured selling points, and hotwords from a book.
       *
       * @param request RunBookIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookIntroductionResponse
       */
      FutureGenerator<Models::RunBookIntroductionResponse> runBookIntroductionWithSSE(const Models::RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts a summary, structured selling points, and hotwords from a book.
       *
       * @param request RunBookIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookIntroductionResponse
       */
      Models::RunBookIntroductionResponse runBookIntroductionWithOptions(const Models::RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts a summary, structured selling points, and hotwords from a book.
       *
       * @param request RunBookIntroductionRequest
       * @return RunBookIntroductionResponse
       */
      Models::RunBookIntroductionResponse runBookIntroduction(const Models::RunBookIntroductionRequest &request);

      /**
       * @summary A smart card interface for books.
       *
       * @param request RunBookSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookSmartCardResponse
       */
      FutureGenerator<Models::RunBookSmartCardResponse> runBookSmartCardWithSSE(const Models::RunBookSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A smart card interface for books.
       *
       * @param request RunBookSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookSmartCardResponse
       */
      Models::RunBookSmartCardResponse runBookSmartCardWithOptions(const Models::RunBookSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A smart card interface for books.
       *
       * @param request RunBookSmartCardRequest
       * @return RunBookSmartCardResponse
       */
      Models::RunBookSmartCardResponse runBookSmartCard(const Models::RunBookSmartCardRequest &request);

      /**
       * @summary Predicts user comments for a specified article.
       *
       * @param tmpReq RunCommentGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommentGenerationResponse
       */
      FutureGenerator<Models::RunCommentGenerationResponse> runCommentGenerationWithSSE(const Models::RunCommentGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Predicts user comments for a specified article.
       *
       * @param tmpReq RunCommentGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommentGenerationResponse
       */
      Models::RunCommentGenerationResponse runCommentGenerationWithOptions(const Models::RunCommentGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Predicts user comments for a specified article.
       *
       * @param request RunCommentGenerationRequest
       * @return RunCommentGenerationResponse
       */
      Models::RunCommentGenerationResponse runCommentGeneration(const Models::RunCommentGenerationRequest &request);

      /**
       * @summary Continues generating content.
       *
       * @param request RunContinueContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContinueContentResponse
       */
      FutureGenerator<Models::RunContinueContentResponse> runContinueContentWithSSE(const Models::RunContinueContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues generating content.
       *
       * @param request RunContinueContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContinueContentResponse
       */
      Models::RunContinueContentResponse runContinueContentWithOptions(const Models::RunContinueContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continues generating content.
       *
       * @param request RunContinueContentRequest
       * @return RunContinueContentResponse
       */
      Models::RunContinueContentResponse runContinueContent(const Models::RunContinueContentRequest &request);

      /**
       * @summary Analyzes custom hot topics.
       *
       * @param request RunCustomHotTopicAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicAnalysisResponse
       */
      FutureGenerator<Models::RunCustomHotTopicAnalysisResponse> runCustomHotTopicAnalysisWithSSE(const Models::RunCustomHotTopicAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes custom hot topics.
       *
       * @param request RunCustomHotTopicAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicAnalysisResponse
       */
      Models::RunCustomHotTopicAnalysisResponse runCustomHotTopicAnalysisWithOptions(const Models::RunCustomHotTopicAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes custom hot topics.
       *
       * @param request RunCustomHotTopicAnalysisRequest
       * @return RunCustomHotTopicAnalysisResponse
       */
      Models::RunCustomHotTopicAnalysisResponse runCustomHotTopicAnalysis(const Models::RunCustomHotTopicAnalysisRequest &request);

      /**
       * @summary Perspective analysis of custom topics.
       *
       * @param request RunCustomHotTopicViewPointAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicViewPointAnalysisResponse
       */
      FutureGenerator<Models::RunCustomHotTopicViewPointAnalysisResponse> runCustomHotTopicViewPointAnalysisWithSSE(const Models::RunCustomHotTopicViewPointAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perspective analysis of custom topics.
       *
       * @param request RunCustomHotTopicViewPointAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicViewPointAnalysisResponse
       */
      Models::RunCustomHotTopicViewPointAnalysisResponse runCustomHotTopicViewPointAnalysisWithOptions(const Models::RunCustomHotTopicViewPointAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perspective analysis of custom topics.
       *
       * @param request RunCustomHotTopicViewPointAnalysisRequest
       * @return RunCustomHotTopicViewPointAnalysisResponse
       */
      Models::RunCustomHotTopicViewPointAnalysisResponse runCustomHotTopicViewPointAnalysis(const Models::RunCustomHotTopicViewPointAnalysisRequest &request);

      /**
       * @summary Queries deep writing events. The system returns detailed information about the task execution as a stream of Server-Sent Events (SSE).
       *
       * @param request RunDeepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDeepWritingResponse
       */
      FutureGenerator<Models::RunDeepWritingResponse> runDeepWritingWithSSE(const Models::RunDeepWritingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deep writing events. The system returns detailed information about the task execution as a stream of Server-Sent Events (SSE).
       *
       * @param request RunDeepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDeepWritingResponse
       */
      Models::RunDeepWritingResponse runDeepWritingWithOptions(const Models::RunDeepWritingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deep writing events. The system returns detailed information about the task execution as a stream of Server-Sent Events (SSE).
       *
       * @param request RunDeepWritingRequest
       * @return RunDeepWritingResponse
       */
      Models::RunDeepWritingResponse runDeepWriting(const Models::RunDeepWritingRequest &request);

      /**
       * @summary Generate a three-level, multilingual mind map from an article or a book, with control over the number of second-level nodes and the word count of leaf nodes.
       *
       * @param request RunDocBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocBrainmapResponse
       */
      FutureGenerator<Models::RunDocBrainmapResponse> runDocBrainmapWithSSE(const Models::RunDocBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a three-level, multilingual mind map from an article or a book, with control over the number of second-level nodes and the word count of leaf nodes.
       *
       * @param request RunDocBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocBrainmapResponse
       */
      Models::RunDocBrainmapResponse runDocBrainmapWithOptions(const Models::RunDocBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a three-level, multilingual mind map from an article or a book, with control over the number of second-level nodes and the word count of leaf nodes.
       *
       * @param request RunDocBrainmapRequest
       * @return RunDocBrainmapResponse
       */
      Models::RunDocBrainmapResponse runDocBrainmap(const Models::RunDocBrainmapRequest &request);

      /**
       * @summary Generates a summary for an article, video, or URL, including a full-text summary, key points, and a chapter overview (i.e., segmented content with summaries and abstracts for each segment). It also supports multilingual input and output. If the user only requires a full-text summary of an article, they can use the RunDocSummary API. For details, see https://help.aliyun.com/zh/model-studio/api-aimiaobi-2023-08-01-rundocsummary.
       *
       * @param request RunDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocIntroductionResponse
       */
      FutureGenerator<Models::RunDocIntroductionResponse> runDocIntroductionWithSSE(const Models::RunDocIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a summary for an article, video, or URL, including a full-text summary, key points, and a chapter overview (i.e., segmented content with summaries and abstracts for each segment). It also supports multilingual input and output. If the user only requires a full-text summary of an article, they can use the RunDocSummary API. For details, see https://help.aliyun.com/zh/model-studio/api-aimiaobi-2023-08-01-rundocsummary.
       *
       * @param request RunDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocIntroductionResponse
       */
      Models::RunDocIntroductionResponse runDocIntroductionWithOptions(const Models::RunDocIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a summary for an article, video, or URL, including a full-text summary, key points, and a chapter overview (i.e., segmented content with summaries and abstracts for each segment). It also supports multilingual input and output. If the user only requires a full-text summary of an article, they can use the RunDocSummary API. For details, see https://help.aliyun.com/zh/model-studio/api-aimiaobi-2023-08-01-rundocsummary.
       *
       * @param request RunDocIntroductionRequest
       * @return RunDocIntroductionResponse
       */
      Models::RunDocIntroductionResponse runDocIntroduction(const Models::RunDocIntroductionRequest &request);

      /**
       * @summary Article Q&A: For a natural language query, provide a textual answer within the specified article scope (accompanied by images if available) and display source attribution information.  
       * Multimodal File Q&A: For a natural language query, provide a textual answer within the specified multimodal file scope, along with relevant images, video segments, or text, and display source attribution information.
       *
       * @param tmpReq RunDocQaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocQaResponse
       */
      FutureGenerator<Models::RunDocQaResponse> runDocQaWithSSE(const Models::RunDocQaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Article Q&A: For a natural language query, provide a textual answer within the specified article scope (accompanied by images if available) and display source attribution information.  
       * Multimodal File Q&A: For a natural language query, provide a textual answer within the specified multimodal file scope, along with relevant images, video segments, or text, and display source attribution information.
       *
       * @param tmpReq RunDocQaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocQaResponse
       */
      Models::RunDocQaResponse runDocQaWithOptions(const Models::RunDocQaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Article Q&A: For a natural language query, provide a textual answer within the specified article scope (accompanied by images if available) and display source attribution information.  
       * Multimodal File Q&A: For a natural language query, provide a textual answer within the specified multimodal file scope, along with relevant images, video segments, or text, and display source attribution information.
       *
       * @param request RunDocQaRequest
       * @return RunDocQaResponse
       */
      Models::RunDocQaResponse runDocQa(const Models::RunDocQaRequest &request);

      /**
       * @summary Automatically adds tags to selected text or a specified chat and generates a smart card note.
       *
       * @param request RunDocSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSmartCardResponse
       */
      FutureGenerator<Models::RunDocSmartCardResponse> runDocSmartCardWithSSE(const Models::RunDocSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Automatically adds tags to selected text or a specified chat and generates a smart card note.
       *
       * @param request RunDocSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSmartCardResponse
       */
      Models::RunDocSmartCardResponse runDocSmartCardWithOptions(const Models::RunDocSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Automatically adds tags to selected text or a specified chat and generates a smart card note.
       *
       * @param request RunDocSmartCardRequest
       * @return RunDocSmartCardResponse
       */
      Models::RunDocSmartCardResponse runDocSmartCard(const Models::RunDocSmartCardRequest &request);

      /**
       * @summary Generates a summary of an article, video, or URL—that is, a concise overview of the entire content. It also supports multilingual input and output.
       *
       * @param request RunDocSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSummaryResponse
       */
      FutureGenerator<Models::RunDocSummaryResponse> runDocSummaryWithSSE(const Models::RunDocSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a summary of an article, video, or URL—that is, a concise overview of the entire content. It also supports multilingual input and output.
       *
       * @param request RunDocSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSummaryResponse
       */
      Models::RunDocSummaryResponse runDocSummaryWithOptions(const Models::RunDocSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a summary of an article, video, or URL—that is, a concise overview of the entire content. It also supports multilingual input and output.
       *
       * @param request RunDocSummaryRequest
       * @return RunDocSummaryResponse
       */
      Models::RunDocSummaryResponse runDocSummary(const Models::RunDocSummaryRequest &request);

      /**
       * @summary An API for document translation between English and Chinese.
       *
       * @param request RunDocTranslationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocTranslationResponse
       */
      FutureGenerator<Models::RunDocTranslationResponse> runDocTranslationWithSSE(const Models::RunDocTranslationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An API for document translation between English and Chinese.
       *
       * @param request RunDocTranslationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocTranslationResponse
       */
      Models::RunDocTranslationResponse runDocTranslationWithOptions(const Models::RunDocTranslationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An API for document translation between English and Chinese.
       *
       * @param request RunDocTranslationRequest
       * @return RunDocTranslationResponse
       */
      Models::RunDocTranslationResponse runDocTranslation(const Models::RunDocTranslationRequest &request);

      /**
       * @summary Rewrites an article in a specified style.
       *
       * @param request RunDocWashingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocWashingResponse
       */
      FutureGenerator<Models::RunDocWashingResponse> runDocWashingWithSSE(const Models::RunDocWashingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rewrites an article in a specified style.
       *
       * @param request RunDocWashingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocWashingResponse
       */
      Models::RunDocWashingResponse runDocWashingWithOptions(const Models::RunDocWashingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rewrites an article in a specified style.
       *
       * @param request RunDocWashingRequest
       * @return RunDocWashingResponse
       */
      Models::RunDocWashingResponse runDocWashing(const Models::RunDocWashingRequest &request);

      /**
       * @summary Expands content.
       *
       * @param request RunExpandContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunExpandContentResponse
       */
      FutureGenerator<Models::RunExpandContentResponse> runExpandContentWithSSE(const Models::RunExpandContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands content.
       *
       * @param request RunExpandContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunExpandContentResponse
       */
      Models::RunExpandContentResponse runExpandContentWithOptions(const Models::RunExpandContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands content.
       *
       * @param request RunExpandContentRequest
       * @return RunExpandContentResponse
       */
      Models::RunExpandContentResponse runExpandContent(const Models::RunExpandContentRequest &request);

      /**
       * @summary Submits a query and returns several related queries.
       *
       * @param request RunGenerateQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunGenerateQuestionsResponse
       */
      FutureGenerator<Models::RunGenerateQuestionsResponse> runGenerateQuestionsWithSSE(const Models::RunGenerateQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a query and returns several related queries.
       *
       * @param request RunGenerateQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunGenerateQuestionsResponse
       */
      Models::RunGenerateQuestionsResponse runGenerateQuestionsWithOptions(const Models::RunGenerateQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a query and returns several related queries.
       *
       * @param request RunGenerateQuestionsRequest
       * @return RunGenerateQuestionsResponse
       */
      Models::RunGenerateQuestionsResponse runGenerateQuestions(const Models::RunGenerateQuestionsRequest &request);

      /**
       * @summary Extract keywords from a specified document. Keywords are domain-specific professional terms or concepts that represent and identify a particular industry or field. They accurately describe and summarize the core content, key people, major events, or technical terms in that domain.
       *
       * @param request RunHotwordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotwordResponse
       */
      FutureGenerator<Models::RunHotwordResponse> runHotwordWithSSE(const Models::RunHotwordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extract keywords from a specified document. Keywords are domain-specific professional terms or concepts that represent and identify a particular industry or field. They accurately describe and summarize the core content, key people, major events, or technical terms in that domain.
       *
       * @param request RunHotwordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotwordResponse
       */
      Models::RunHotwordResponse runHotwordWithOptions(const Models::RunHotwordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extract keywords from a specified document. Keywords are domain-specific professional terms or concepts that represent and identify a particular industry or field. They accurately describe and summarize the core content, key people, major events, or technical terms in that domain.
       *
       * @param request RunHotwordRequest
       * @return RunHotwordResponse
       */
      Models::RunHotwordResponse runHotword(const Models::RunHotwordRequest &request);

      /**
       * @summary Extracts and generates keywords using AMB.
       *
       * @param tmpReq RunKeywordsExtractionGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunKeywordsExtractionGenerationResponse
       */
      FutureGenerator<Models::RunKeywordsExtractionGenerationResponse> runKeywordsExtractionGenerationWithSSE(const Models::RunKeywordsExtractionGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts and generates keywords using AMB.
       *
       * @param tmpReq RunKeywordsExtractionGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunKeywordsExtractionGenerationResponse
       */
      Models::RunKeywordsExtractionGenerationResponse runKeywordsExtractionGenerationWithOptions(const Models::RunKeywordsExtractionGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts and generates keywords using AMB.
       *
       * @param request RunKeywordsExtractionGenerationRequest
       * @return RunKeywordsExtractionGenerationResponse
       */
      Models::RunKeywordsExtractionGenerationResponse runKeywordsExtractionGeneration(const Models::RunKeywordsExtractionGenerationRequest &request);

      /**
       * @summary Generate an outline-style summary for multiple documents, videos, or URLs. The summary includes a consolidated overview and key points. This operation supports multiple input and output languages.
       *
       * @param tmpReq RunMultiDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMultiDocIntroductionResponse
       */
      FutureGenerator<Models::RunMultiDocIntroductionResponse> runMultiDocIntroductionWithSSE(const Models::RunMultiDocIntroductionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate an outline-style summary for multiple documents, videos, or URLs. The summary includes a consolidated overview and key points. This operation supports multiple input and output languages.
       *
       * @param tmpReq RunMultiDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMultiDocIntroductionResponse
       */
      Models::RunMultiDocIntroductionResponse runMultiDocIntroductionWithOptions(const Models::RunMultiDocIntroductionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate an outline-style summary for multiple documents, videos, or URLs. The summary includes a consolidated overview and key points. This operation supports multiple input and output languages.
       *
       * @param request RunMultiDocIntroductionRequest
       * @return RunMultiDocIntroductionResponse
       */
      Models::RunMultiDocIntroductionResponse runMultiDocIntroduction(const Models::RunMultiDocIntroductionRequest &request);

      /**
       * @summary Generates a PowerPoint outline.
       *
       * @description Instructions:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - You cannot test this API directly in the OpenAPI Portal because the portal is not compatible with the SSE inference protocol. For examples of how to call the API using the SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/en/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, [click this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request RunPptOutlineGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPptOutlineGenerationResponse
       */
      FutureGenerator<Models::RunPptOutlineGenerationResponse> runPptOutlineGenerationWithSSE(const Models::RunPptOutlineGenerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a PowerPoint outline.
       *
       * @description Instructions:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - You cannot test this API directly in the OpenAPI Portal because the portal is not compatible with the SSE inference protocol. For examples of how to call the API using the SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/en/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, [click this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request RunPptOutlineGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPptOutlineGenerationResponse
       */
      Models::RunPptOutlineGenerationResponse runPptOutlineGenerationWithOptions(const Models::RunPptOutlineGenerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a PowerPoint outline.
       *
       * @description Instructions:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - You cannot test this API directly in the OpenAPI Portal because the portal is not compatible with the SSE inference protocol. For examples of how to call the API using the SDK for Java or Python, see [PPT Generation Best practices](https://help.aliyun.com/en/model-studio/ppt-generation-best-practices).
       * - To obtain the latest version of the asynchronous Java SDK, [click this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?spm=a2c4g.11186623.0.0.4cd3170d7rccDC\\&version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       *
       * @param request RunPptOutlineGenerationRequest
       * @return RunPptOutlineGenerationResponse
       */
      Models::RunPptOutlineGenerationResponse runPptOutlineGeneration(const Models::RunPptOutlineGenerationRequest &request);

      /**
       * @summary Enter writing instructions to quickly generate content.
       *
       * @description ### Access Instructions:
       * - The OpenAPI portal is incompatible with the Server-Sent Events (SSE) inference protocol. Therefore, you cannot directly debug this operation. For an example of how to call the API using an SDK, see [Miaobi Best Practices](https://help.aliyun.com/zh/model-studio/best-practices-for-miaobi-api?spm=a2c4g.11186623.help-menu-2400256.d_1_12_6_2_1_0.39892421FntuI2\\&scm=20140722.H_2844289._.OR_help-T_cn~zh-V_1).
       * - Click this [link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc) to download the latest version of the Java asynchronous SDK.
       *
       * @param tmpReq RunQuickWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunQuickWritingResponse
       */
      FutureGenerator<Models::RunQuickWritingResponse> runQuickWritingWithSSE(const Models::RunQuickWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enter writing instructions to quickly generate content.
       *
       * @description ### Access Instructions:
       * - The OpenAPI portal is incompatible with the Server-Sent Events (SSE) inference protocol. Therefore, you cannot directly debug this operation. For an example of how to call the API using an SDK, see [Miaobi Best Practices](https://help.aliyun.com/zh/model-studio/best-practices-for-miaobi-api?spm=a2c4g.11186623.help-menu-2400256.d_1_12_6_2_1_0.39892421FntuI2\\&scm=20140722.H_2844289._.OR_help-T_cn~zh-V_1).
       * - Click this [link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc) to download the latest version of the Java asynchronous SDK.
       *
       * @param tmpReq RunQuickWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunQuickWritingResponse
       */
      Models::RunQuickWritingResponse runQuickWritingWithOptions(const Models::RunQuickWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enter writing instructions to quickly generate content.
       *
       * @description ### Access Instructions:
       * - The OpenAPI portal is incompatible with the Server-Sent Events (SSE) inference protocol. Therefore, you cannot directly debug this operation. For an example of how to call the API using an SDK, see [Miaobi Best Practices](https://help.aliyun.com/zh/model-studio/best-practices-for-miaobi-api?spm=a2c4g.11186623.help-menu-2400256.d_1_12_6_2_1_0.39892421FntuI2\\&scm=20140722.H_2844289._.OR_help-T_cn~zh-V_1).
       * - Click this [link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc) to download the latest version of the Java asynchronous SDK.
       *
       * @param request RunQuickWritingRequest
       * @return RunQuickWritingResponse
       */
      Models::RunQuickWritingResponse runQuickWriting(const Models::RunQuickWritingRequest &request);

      /**
       * @summary AI Miaosou – Intelligent Search Generation: This API delivers the search and generation capabilities of the Miaosou homepage. It supports general search and media asset search, along with features such as user query clarification, multimodal knowledge search, and multi-agent generation.
       * – General Search: Performs semantic retrieval on centralized knowledge data and applies multi-agent post-processing to the results, such as summary generation, abstracting, and timeline summarization.
       * – Media Asset Search: Conducts an exhaustive full-text search to retrieve highly relevant knowledge and supports multi-agent post-processing, such as clustering and news extraction.
       *
       * @description ### Integration notes:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI console does not support SSE inference protocols and cannot be used for direct testing. For SDK-based integration examples (Java and Python), see the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation.
       * - To obtain the latest version of the Java asynchronous SDK, click [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       * ### Data sources for search:
       * Supports three dataset types. See the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation for details.
       * - Built-in “Internet search” dataset: Supports open-domain text, images, and video (video is not yet available) from the Internet.
       * - Semantic (RAG) dataset: Manages enterprise private knowledge bases and supports text, images, video, and voice (voice is not yet available).
       * - Third-party API dataset: Integrates directly with your own enterprise search APIs.
       *
       * @param tmpReq RunSearchGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchGenerationResponse
       */
      FutureGenerator<Models::RunSearchGenerationResponse> runSearchGenerationWithSSE(const Models::RunSearchGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI Miaosou – Intelligent Search Generation: This API delivers the search and generation capabilities of the Miaosou homepage. It supports general search and media asset search, along with features such as user query clarification, multimodal knowledge search, and multi-agent generation.
       * – General Search: Performs semantic retrieval on centralized knowledge data and applies multi-agent post-processing to the results, such as summary generation, abstracting, and timeline summarization.
       * – Media Asset Search: Conducts an exhaustive full-text search to retrieve highly relevant knowledge and supports multi-agent post-processing, such as clustering and news extraction.
       *
       * @description ### Integration notes:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI console does not support SSE inference protocols and cannot be used for direct testing. For SDK-based integration examples (Java and Python), see the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation.
       * - To obtain the latest version of the Java asynchronous SDK, click [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       * ### Data sources for search:
       * Supports three dataset types. See the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation for details.
       * - Built-in “Internet search” dataset: Supports open-domain text, images, and video (video is not yet available) from the Internet.
       * - Semantic (RAG) dataset: Manages enterprise private knowledge bases and supports text, images, video, and voice (voice is not yet available).
       * - Third-party API dataset: Integrates directly with your own enterprise search APIs.
       *
       * @param tmpReq RunSearchGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchGenerationResponse
       */
      Models::RunSearchGenerationResponse runSearchGenerationWithOptions(const Models::RunSearchGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI Miaosou – Intelligent Search Generation: This API delivers the search and generation capabilities of the Miaosou homepage. It supports general search and media asset search, along with features such as user query clarification, multimodal knowledge search, and multi-agent generation.
       * – General Search: Performs semantic retrieval on centralized knowledge data and applies multi-agent post-processing to the results, such as summary generation, abstracting, and timeline summarization.
       * – Media Asset Search: Conducts an exhaustive full-text search to retrieve highly relevant knowledge and supports multi-agent post-processing, such as clustering and news extraction.
       *
       * @description ### Integration notes:
       * - This API uses the HTTP Server-Sent Events (SSE) protocol.
       * - The OpenAPI console does not support SSE inference protocols and cannot be used for direct testing. For SDK-based integration examples (Java and Python), see the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation.
       * - To obtain the latest version of the Java asynchronous SDK, click [this link](https://api.aliyun.com/api-tools/sdk/AiMiaoBi?version=2023-08-01\\&language=java-async-tea\\&tab=primer-doc).
       * ### Data sources for search:
       * Supports three dataset types. See the [Miaosou Best Practices](https://help.aliyun.com/zh/model-studio/user-guide/best-practices-for-miaosou-api/?spm=a2c4g.11186623.help-menu-2400256.d_1_3_3_2_1_2.42a64a34eIyBhn) documentation for details.
       * - Built-in “Internet search” dataset: Supports open-domain text, images, and video (video is not yet available) from the Internet.
       * - Semantic (RAG) dataset: Manages enterprise private knowledge bases and supports text, images, video, and voice (voice is not yet available).
       * - Third-party API dataset: Integrates directly with your own enterprise search APIs.
       *
       * @param request RunSearchGenerationRequest
       * @return RunSearchGenerationResponse
       */
      Models::RunSearchGenerationResponse runSearchGeneration(const Models::RunSearchGenerationRequest &request);

      /**
       * @summary Miao Search enables text-to-text search.
       *
       * @param tmpReq RunSearchSimilarArticlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchSimilarArticlesResponse
       */
      FutureGenerator<Models::RunSearchSimilarArticlesResponse> runSearchSimilarArticlesWithSSE(const Models::RunSearchSimilarArticlesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miao Search enables text-to-text search.
       *
       * @param tmpReq RunSearchSimilarArticlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchSimilarArticlesResponse
       */
      Models::RunSearchSimilarArticlesResponse runSearchSimilarArticlesWithOptions(const Models::RunSearchSimilarArticlesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miao Search enables text-to-text search.
       *
       * @param request RunSearchSimilarArticlesRequest
       * @return RunSearchSimilarArticlesResponse
       */
      Models::RunSearchSimilarArticlesResponse runSearchSimilarArticles(const Models::RunSearchSimilarArticlesRequest &request);

      /**
       * @summary Writes content in a step-by-step pattern using an outline and summaries.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Onboarding: Quanmiao Public Cloud iframe Customization](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunStepByStepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStepByStepWritingResponse
       */
      FutureGenerator<Models::RunStepByStepWritingResponse> runStepByStepWritingWithSSE(const Models::RunStepByStepWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Writes content in a step-by-step pattern using an outline and summaries.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Onboarding: Quanmiao Public Cloud iframe Customization](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunStepByStepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStepByStepWritingResponse
       */
      Models::RunStepByStepWritingResponse runStepByStepWritingWithOptions(const Models::RunStepByStepWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Writes content in a step-by-step pattern using an outline and summaries.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Onboarding: Quanmiao Public Cloud iframe Customization](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request RunStepByStepWritingRequest
       * @return RunStepByStepWritingResponse
       */
      Models::RunStepByStepWritingResponse runStepByStepWriting(const Models::RunStepByStepWritingRequest &request);

      /**
       * @summary Analyzes the stylistic features of content.
       *
       * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Solution](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunStyleFeatureAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStyleFeatureAnalysisResponse
       */
      FutureGenerator<Models::RunStyleFeatureAnalysisResponse> runStyleFeatureAnalysisWithSSE(const Models::RunStyleFeatureAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes the stylistic features of content.
       *
       * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Solution](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunStyleFeatureAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStyleFeatureAnalysisResponse
       */
      Models::RunStyleFeatureAnalysisResponse runStyleFeatureAnalysisWithOptions(const Models::RunStyleFeatureAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes the stylistic features of content.
       *
       * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Solution](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request RunStyleFeatureAnalysisRequest
       * @return RunStyleFeatureAnalysisResponse
       */
      Models::RunStyleFeatureAnalysisResponse runStyleFeatureAnalysis(const Models::RunStyleFeatureAnalysisRequest &request);

      /**
       * @summary Generates a summary of content.
       *
       * @param request RunSummaryGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSummaryGenerateResponse
       */
      FutureGenerator<Models::RunSummaryGenerateResponse> runSummaryGenerateWithSSE(const Models::RunSummaryGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a summary of content.
       *
       * @param request RunSummaryGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSummaryGenerateResponse
       */
      Models::RunSummaryGenerateResponse runSummaryGenerateWithOptions(const Models::RunSummaryGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a summary of content.
       *
       * @param request RunSummaryGenerateRequest
       * @return RunSummaryGenerateResponse
       */
      Models::RunSummaryGenerateResponse runSummaryGenerate(const Models::RunSummaryGenerateRequest &request);

      /**
       * @summary Polishes the specified text.
       *
       * @param request RunTextPolishingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTextPolishingResponse
       */
      FutureGenerator<Models::RunTextPolishingResponse> runTextPolishingWithSSE(const Models::RunTextPolishingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Polishes the specified text.
       *
       * @param request RunTextPolishingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTextPolishingResponse
       */
      Models::RunTextPolishingResponse runTextPolishingWithOptions(const Models::RunTextPolishingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Polishes the specified text.
       *
       * @param request RunTextPolishingRequest
       * @return RunTextPolishingResponse
       */
      Models::RunTextPolishingResponse runTextPolishing(const Models::RunTextPolishingRequest &request);

      /**
       * @summary Miaobi generates titles.
       *
       * @param tmpReq RunTitleGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTitleGenerationResponse
       */
      FutureGenerator<Models::RunTitleGenerationResponse> runTitleGenerationWithSSE(const Models::RunTitleGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miaobi generates titles.
       *
       * @param tmpReq RunTitleGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTitleGenerationResponse
       */
      Models::RunTitleGenerationResponse runTitleGenerationWithOptions(const Models::RunTitleGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Miaobi generates titles.
       *
       * @param request RunTitleGenerationRequest
       * @return RunTitleGenerationResponse
       */
      Models::RunTitleGenerationResponse runTitleGeneration(const Models::RunTitleGenerationRequest &request);

      /**
       * @summary Selects and aggregates topics for MiaoCe.
       *
       * @description All Miao products support iframe embedding. For more information, see [Customer Integration: Miao Public Cloud iFrame Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunTopicSelectionMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTopicSelectionMergeResponse
       */
      FutureGenerator<Models::RunTopicSelectionMergeResponse> runTopicSelectionMergeWithSSE(const Models::RunTopicSelectionMergeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Selects and aggregates topics for MiaoCe.
       *
       * @description All Miao products support iframe embedding. For more information, see [Customer Integration: Miao Public Cloud iFrame Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunTopicSelectionMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTopicSelectionMergeResponse
       */
      Models::RunTopicSelectionMergeResponse runTopicSelectionMergeWithOptions(const Models::RunTopicSelectionMergeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Selects and aggregates topics for MiaoCe.
       *
       * @description All Miao products support iframe embedding. For more information, see [Customer Integration: Miao Public Cloud iFrame Customization Plan](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request RunTopicSelectionMergeRequest
       * @return RunTopicSelectionMergeResponse
       */
      Models::RunTopicSelectionMergeResponse runTopicSelectionMerge(const Models::RunTopicSelectionMergeRequest &request);

      /**
       * @summary Translates text for content creation using AMB.
       *
       * @param tmpReq RunTranslateGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTranslateGenerationResponse
       */
      FutureGenerator<Models::RunTranslateGenerationResponse> runTranslateGenerationWithSSE(const Models::RunTranslateGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Translates text for content creation using AMB.
       *
       * @param tmpReq RunTranslateGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTranslateGenerationResponse
       */
      Models::RunTranslateGenerationResponse runTranslateGenerationWithOptions(const Models::RunTranslateGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Translates text for content creation using AMB.
       *
       * @param request RunTranslateGenerationRequest
       * @return RunTranslateGenerationResponse
       */
      Models::RunTranslateGenerationResponse runTranslateGeneration(const Models::RunTranslateGenerationRequest &request);

      /**
       * @summary Generates video clip scripts using AI.
       *
       * @param request RunVideoScriptGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoScriptGenerateResponse
       */
      FutureGenerator<Models::RunVideoScriptGenerateResponse> runVideoScriptGenerateWithSSE(const Models::RunVideoScriptGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates video clip scripts using AI.
       *
       * @param request RunVideoScriptGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoScriptGenerateResponse
       */
      Models::RunVideoScriptGenerateResponse runVideoScriptGenerateWithOptions(const Models::RunVideoScriptGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates video clip scripts using AI.
       *
       * @param request RunVideoScriptGenerateRequest
       * @return RunVideoScriptGenerateResponse
       */
      Models::RunVideoScriptGenerateResponse runVideoScriptGenerate(const Models::RunVideoScriptGenerateRequest &request);

      /**
       * @summary Calls AMB to rewrite text in a new tone.
       *
       * @param tmpReq RunWriteToneGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWriteToneGenerationResponse
       */
      FutureGenerator<Models::RunWriteToneGenerationResponse> runWriteToneGenerationWithSSE(const Models::RunWriteToneGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls AMB to rewrite text in a new tone.
       *
       * @param tmpReq RunWriteToneGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWriteToneGenerationResponse
       */
      Models::RunWriteToneGenerationResponse runWriteToneGenerationWithOptions(const Models::RunWriteToneGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls AMB to rewrite text in a new tone.
       *
       * @param request RunWriteToneGenerationRequest
       * @return RunWriteToneGenerationResponse
       */
      Models::RunWriteToneGenerationResponse runWriteToneGeneration(const Models::RunWriteToneGenerationRequest &request);

      /**
       * @summary Direct writing.
       *
       * @description This API is deprecated. For more information, see [RunWritingV2](https://help.aliyun.com/document_detail/2922606.html).
       * The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao Public Cloud iframe customization](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingResponse
       */
      FutureGenerator<Models::RunWritingResponse> runWritingWithSSE(const Models::RunWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Direct writing.
       *
       * @description This API is deprecated. For more information, see [RunWritingV2](https://help.aliyun.com/document_detail/2922606.html).
       * The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao Public Cloud iframe customization](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingResponse
       */
      Models::RunWritingResponse runWritingWithOptions(const Models::RunWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Direct writing.
       *
       * @description This API is deprecated. For more information, see [RunWritingV2](https://help.aliyun.com/document_detail/2922606.html).
       * The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao Public Cloud iframe customization](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request RunWritingRequest
       * @return RunWritingResponse
       */
      Models::RunWritingResponse runWriting(const Models::RunWritingRequest &request);

      /**
       * @summary AI writing
       *
       * @description For instructions on embedding Quanmiao products using an iframe, see [Customer integration_Quanmiao public cloud iframe customized solution](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunWritingV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingV2Response
       */
      FutureGenerator<Models::RunWritingV2Response> runWritingV2WithSSE(const Models::RunWritingV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI writing
       *
       * @description For instructions on embedding Quanmiao products using an iframe, see [Customer integration_Quanmiao public cloud iframe customized solution](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param tmpReq RunWritingV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingV2Response
       */
      Models::RunWritingV2Response runWritingV2WithOptions(const Models::RunWritingV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI writing
       *
       * @description For instructions on embedding Quanmiao products using an iframe, see [Customer integration_Quanmiao public cloud iframe customized solution](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request RunWritingV2Request
       * @return RunWritingV2Response
       */
      Models::RunWritingV2Response runWritingV2(const Models::RunWritingV2Request &request);

      /**
       * @summary Saves custom text.
       *
       * @param request SaveCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCustomTextResponse
       */
      Models::SaveCustomTextResponse saveCustomTextWithOptions(const Models::SaveCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves custom text.
       *
       * @param request SaveCustomTextRequest
       * @return SaveCustomTextResponse
       */
      Models::SaveCustomTextResponse saveCustomText(const Models::SaveCustomTextRequest &request);

      /**
       * @summary Saves the data source configuration for content creation and general search.
       *
       * @param tmpReq SaveDataSourceOrderConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveDataSourceOrderConfigResponse
       */
      Models::SaveDataSourceOrderConfigResponse saveDataSourceOrderConfigWithOptions(const Models::SaveDataSourceOrderConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the data source configuration for content creation and general search.
       *
       * @param request SaveDataSourceOrderConfigRequest
       * @return SaveDataSourceOrderConfigResponse
       */
      Models::SaveDataSourceOrderConfigResponse saveDataSourceOrderConfig(const Models::SaveDataSourceOrderConfigRequest &request);

      /**
       * @summary Save material: Save material to the Material Library.
       *
       * @param tmpReq SaveMaterialDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveMaterialDocumentResponse
       */
      Models::SaveMaterialDocumentResponse saveMaterialDocumentWithOptions(const Models::SaveMaterialDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save material: Save material to the Material Library.
       *
       * @param request SaveMaterialDocumentRequest
       * @return SaveMaterialDocumentResponse
       */
      Models::SaveMaterialDocumentResponse saveMaterialDocument(const Models::SaveMaterialDocumentRequest &request);

      /**
       * @summary Configuration: Cloud storage parameter settings
       *
       * @param request SaveOrUpdateOssConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveOrUpdateOssConfigResponse
       */
      Models::SaveOrUpdateOssConfigResponse saveOrUpdateOssConfigWithOptions(const Models::SaveOrUpdateOssConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configuration: Cloud storage parameter settings
       *
       * @param request SaveOrUpdateOssConfigRequest
       * @return SaveOrUpdateOssConfigResponse
       */
      Models::SaveOrUpdateOssConfigResponse saveOrUpdateOssConfig(const Models::SaveOrUpdateOssConfigRequest &request);

      /**
       * @summary Saves a custom writing style.
       *
       * @param tmpReq SaveStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveStyleLearningResultResponse
       */
      Models::SaveStyleLearningResultResponse saveStyleLearningResultWithOptions(const Models::SaveStyleLearningResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves a custom writing style.
       *
       * @param request SaveStyleLearningResultRequest
       * @return SaveStyleLearningResultResponse
       */
      Models::SaveStyleLearningResultResponse saveStyleLearningResult(const Models::SaveStyleLearningResultRequest &request);

      /**
       * @summary Searches documents in a data source.
       *
       * @param tmpReq SearchDatasetDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDatasetDocumentsResponse
       */
      Models::SearchDatasetDocumentsResponse searchDatasetDocumentsWithOptions(const Models::SearchDatasetDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches documents in a data source.
       *
       * @param request SearchDatasetDocumentsRequest
       * @return SearchDatasetDocumentsResponse
       */
      Models::SearchDatasetDocumentsResponse searchDatasetDocuments(const Models::SearchDatasetDocumentsRequest &request);

      /**
       * @summary Searches for news based on your input. This feature is currently limited to web search.
       *
       * @param tmpReq SearchNewsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchNewsResponse
       */
      Models::SearchNewsResponse searchNewsWithOptions(const Models::SearchNewsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for news based on your input. This feature is currently limited to web search.
       *
       * @param request SearchNewsRequest
       * @return SearchNewsResponse
       */
      Models::SearchNewsResponse searchNews(const Models::SearchNewsRequest &request);

      /**
       * @summary Executes predefined asynchronous tasks.
       *
       * @param request SubmitAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAsyncTaskResponse
       */
      Models::SubmitAsyncTaskResponse submitAsyncTaskWithOptions(const Models::SubmitAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes predefined asynchronous tasks.
       *
       * @param request SubmitAsyncTaskRequest
       * @return SubmitAsyncTaskResponse
       */
      Models::SubmitAsyncTaskResponse submitAsyncTask(const Models::SubmitAsyncTaskRequest &request);

      /**
       * @summary Model Studio provides the same feature as the Intelligent Proofreading module in Alibaba Cloud public cloud: uploading a custom rule library. Due to authentication restrictions, you must pass the file key (FileKey) of your custom rule library file as an input parameter to successfully call this API. After you call this API, Model Studio processes your custom rule library and returns a structured result in XLSX format. You can call GetAuditNoteProcessingStatus to check the processing status or call DownloadAuditNote to download the processed rule library. This API is under active development and will eventually accept a publicly accessible file URL instead of a FileKey.
       *
       * @description All Model Studio products support iframe embedding. For details, see [Customer Integration: Model Studio Public Cloud iFrame Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request SubmitAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAuditNoteResponse
       */
      Models::SubmitAuditNoteResponse submitAuditNoteWithOptions(const Models::SubmitAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model Studio provides the same feature as the Intelligent Proofreading module in Alibaba Cloud public cloud: uploading a custom rule library. Due to authentication restrictions, you must pass the file key (FileKey) of your custom rule library file as an input parameter to successfully call this API. After you call this API, Model Studio processes your custom rule library and returns a structured result in XLSX format. You can call GetAuditNoteProcessingStatus to check the processing status or call DownloadAuditNote to download the processed rule library. This API is under active development and will eventually accept a publicly accessible file URL instead of a FileKey.
       *
       * @description All Model Studio products support iframe embedding. For details, see [Customer Integration: Model Studio Public Cloud iFrame Customization Guide](https://help.aliyun.com/document_detail/3000990.html).
       *
       * @param request SubmitAuditNoteRequest
       * @return SubmitAuditNoteResponse
       */
      Models::SubmitAuditNoteResponse submitAuditNote(const Models::SubmitAuditNoteRequest &request);

      /**
       * @summary Submits an audit task.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
       *
       * @param request SubmitAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAuditTaskResponse
       */
      Models::SubmitAuditTaskResponse submitAuditTaskWithOptions(const Models::SubmitAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an audit task.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer Integration: Quanmiao Public Cloud iframe Customization Plan](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
       *
       * @param request SubmitAuditTaskRequest
       * @return SubmitAuditTaskResponse
       */
      Models::SubmitAuditTaskResponse submitAuditTask(const Models::SubmitAuditTaskRequest &request);

      /**
       * @summary You can submit a custom broadcast list job.
       *
       * @param tmpReq SubmitCustomHotTopicBroadcastJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomHotTopicBroadcastJobResponse
       */
      Models::SubmitCustomHotTopicBroadcastJobResponse submitCustomHotTopicBroadcastJobWithOptions(const Models::SubmitCustomHotTopicBroadcastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can submit a custom broadcast list job.
       *
       * @param request SubmitCustomHotTopicBroadcastJobRequest
       * @return SubmitCustomHotTopicBroadcastJobResponse
       */
      Models::SubmitCustomHotTopicBroadcastJobResponse submitCustomHotTopicBroadcastJob(const Models::SubmitCustomHotTopicBroadcastJobRequest &request);

      /**
       * @summary Submit topic trend analysis using a custom data source
       *
       * @param tmpReq SubmitCustomSourceTopicAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomSourceTopicAnalysisResponse
       */
      Models::SubmitCustomSourceTopicAnalysisResponse submitCustomSourceTopicAnalysisWithOptions(const Models::SubmitCustomSourceTopicAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit topic trend analysis using a custom data source
       *
       * @param request SubmitCustomSourceTopicAnalysisRequest
       * @return SubmitCustomSourceTopicAnalysisResponse
       */
      Models::SubmitCustomSourceTopicAnalysisResponse submitCustomSourceTopicAnalysis(const Models::SubmitCustomSourceTopicAnalysisRequest &request);

      /**
       * @summary Submits a custom analysis task to analyze hot topic perspectives.
       *
       * @param tmpReq SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a custom analysis task to analyze hot topic perspectives.
       *
       * @param request SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse submitCustomTopicSelectionPerspectiveAnalysisTask(const Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary You can submit a deep writing task. You can provide information such as questions, instructions, and attachments, based on the topic you want to research or analyze. The system schedules and executes this task in the background.
       *
       * @param tmpReq SubmitDeepWriteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDeepWriteTaskResponse
       */
      Models::SubmitDeepWriteTaskResponse submitDeepWriteTaskWithOptions(const Models::SubmitDeepWriteTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can submit a deep writing task. You can provide information such as questions, instructions, and attachments, based on the topic you want to research or analyze. The system schedules and executes this task in the background.
       *
       * @param request SubmitDeepWriteTaskRequest
       * @return SubmitDeepWriteTaskResponse
       */
      Models::SubmitDeepWriteTaskResponse submitDeepWriteTask(const Models::SubmitDeepWriteTaskRequest &request);

      /**
       * @summary Submits a content clustering task.
       *
       * @param tmpReq SubmitDocClusterTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocClusterTaskResponse
       */
      Models::SubmitDocClusterTaskResponse submitDocClusterTaskWithOptions(const Models::SubmitDocClusterTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a content clustering task.
       *
       * @param request SubmitDocClusterTaskRequest
       * @return SubmitDocClusterTaskResponse
       */
      Models::SubmitDocClusterTaskResponse submitDocClusterTask(const Models::SubmitDocClusterTaskRequest &request);

      /**
       * @summary Submits a Voice of the Customer (VOC) asynchronous task.
       *
       * @param tmpReq SubmitEnterpriseVocAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEnterpriseVocAnalysisTaskResponse
       */
      Models::SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTaskWithOptions(const Models::SubmitEnterpriseVocAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a Voice of the Customer (VOC) asynchronous task.
       *
       * @param request SubmitEnterpriseVocAnalysisTaskRequest
       * @return SubmitEnterpriseVocAnalysisTaskResponse
       */
      Models::SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTask(const Models::SubmitEnterpriseVocAnalysisTaskRequest &request);

      /**
       * @summary Export task for a thesaurus
       *
       * @param request SubmitExportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitExportTermsTaskResponse
       */
      Models::SubmitExportTermsTaskResponse submitExportTermsTaskWithOptions(const Models::SubmitExportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export task for a thesaurus
       *
       * @param request SubmitExportTermsTaskRequest
       * @return SubmitExportTermsTaskResponse
       */
      Models::SubmitExportTermsTaskResponse submitExportTermsTask(const Models::SubmitExportTermsTaskRequest &request);

      /**
       * @summary MiaoBi provides a factuality audit capability that verifies facts using web search and supports custom configuration of search source URLs.
       *
       * @param request SubmitFactAuditUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFactAuditUrlResponse
       */
      Models::SubmitFactAuditUrlResponse submitFactAuditUrlWithOptions(const Models::SubmitFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary MiaoBi provides a factuality audit capability that verifies facts using web search and supports custom configuration of search source URLs.
       *
       * @param request SubmitFactAuditUrlRequest
       * @return SubmitFactAuditUrlResponse
       */
      Models::SubmitFactAuditUrlResponse submitFactAuditUrl(const Models::SubmitFactAuditUrlRequest &request);

      /**
       * @summary Submit a custom dictionary import task.
       *
       * @param request SubmitImportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImportTermsTaskResponse
       */
      Models::SubmitImportTermsTaskResponse submitImportTermsTaskWithOptions(const Models::SubmitImportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a custom dictionary import task.
       *
       * @param request SubmitImportTermsTaskRequest
       * @return SubmitImportTermsTaskResponse
       */
      Models::SubmitImportTermsTaskResponse submitImportTermsTask(const Models::SubmitImportTermsTaskRequest &request);

      /**
       * @summary 提交版本任务
       *
       * @param request SubmitParseDocumentLayoutTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitParseDocumentLayoutTaskResponse
       */
      Models::SubmitParseDocumentLayoutTaskResponse submitParseDocumentLayoutTaskWithOptions(const Models::SubmitParseDocumentLayoutTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交版本任务
       *
       * @param request SubmitParseDocumentLayoutTaskRequest
       * @return SubmitParseDocumentLayoutTaskResponse
       */
      Models::SubmitParseDocumentLayoutTaskResponse submitParseDocumentLayoutTask(const Models::SubmitParseDocumentLayoutTaskRequest &request);

      /**
       * @summary Submit a smart audit request.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao public cloud iframe customization guide](https://help.aliyun.com/document_detail/3000990.html).
       * # Supported audit types
       * ## Audit category overview
       * | Audit category                 | Description                                                                                                                                                                                                                                                               |
       * | ------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
       * | Content accuracy               | Errors due to phonetic or visual similarity; punctuation errors; misuse of Chinese structural particles (的/地/得); inappropriate word choice or syntax errors; incorrect personal names; incorrect place names; incorrect references; errors in proper nouns or terminology |
       * | Formatting issues              | Inconsistent capitalization; numeric errors; nonstandard units of measurement; use of traditional Chinese characters                                                                                                                                                      |
       * | Content structure issues       | Redundant text; repeated segments; logical contradictions; unfilled placeholders                                                                                                                                                                                          |
       * | Political sensitivity issues   | Sensitive content or directional risks; name or sorting errors; conventional phrasing errors; nonstandard institutional names; misquoting important speeches; references to disgraced officials; mismatched name-title pairings; incorrect title expressions              |
       * | Security and compliance issues | Violence or terrorism; pornography; prohibited content; insults; disgraced celebrities; personal privacy violations; reporting standard violations                                                                                                                        |
       * | Legal errors                   | Incorrect citation of laws and regulations; errors in legal provisions                                                                                                                                                                                                    |
       * | Other domain-specific errors   | Violations of advertising law; financial information errors; scientific or technical term errors                                                                                                                                                                          |
       * | Factuality check               | Factuality verification: correct or incorrect items                                                                                                                                                                                                                       |
       * | Image audit                    | Image content moderation                                                                                                                                                                                                                                                  |
       * | Custom word library            | Custom word library audit                                                                                                                                                                                                                                                 |
       * | Rule library audit             | Rule library audit                                                                                                                                                                                                                                                        |
       * | English proofreading           | Terminology standardization; verb tense accuracy; punctuation and quotation marks; spelling and language variants; sentence structure and clarity; numeric and percentage formatting; standardized phrasing                                                               |
       * ***
       * ## Sub-audit code values
       * ### 1. Content accuracy
       * | Description                                    | Code                 |
       * | ---------------------------------------------- | -------------------- |
       * | Phonetic or visual similarity errors           | PhoneticSimilarError |
       * | Punctuation errors                             | PunctuationError     |
       * | Misuse of Chinese structural particles (的/地/得) | ParticleUsageError   |
       * | Inappropriate word choice or syntax errors     | WordError            |
       * | Incorrect personal names                       | PersonNameError      |
       * | Incorrect place names                          | LocationError        |
       * | Incorrect references                           | ReferenceError       |
       * | Errors in proper nouns or terminology          | NounItemError        |
       * ### 2. Formatting issues
       * | Description                           | Code                    |
       * | ------------------------------------- | ----------------------- |
       * | Inconsistent capitalization           | CapitalizationError     |
       * | Numeric errors                        | NumberError             |
       * | Nonstandard units of measurement      | UnitError               |
       * | Use of traditional Chinese characters | TraditionalChineseError |
       * ### 3. Content structure issues
       * | Description            | Code                 |
       * | ---------------------- | -------------------- |
       * | Redundant text         | WordRedundancy       |
       * | Repeated segments      | DuplicateError       |
       * | Logical contradictions | LogicContradiction   |
       * | Unfilled placeholders  | PlaceholderNotFilled |
       * ### 4. Political sensitivity issues
       * | Description                            | Code                        |
       * | -------------------------------------- | --------------------------- |
       * | Sensitive content or directional risks | SensitiveContentRisk        |
       * | Name or sorting errors                 | NameOrderError              |
       * | Conventional phrasing errors           | ConventionalExpressionError |
       * | Nonstandard institutional names        | DepartmentNameError         |
       * | Misquoting important speeches          | ImportantSpeechError        |
       * | References to disgraced officials      | FallenOfficialError         |
       * | Mismatched name-title pairings         | LeaderTitleMatchError       |
       * | Incorrect title expressions            | TitleError                  |
       * ### 5. Security and compliance issues
       * | Description                   | Code                   |
       * | ----------------------------- | ---------------------- |
       * | Violence or terrorism         | ViolenceTerrorismError |
       * | Pornography                   | PornographyError       |
       * | Prohibited content            | ProhibitedContentError |
       * | Insults                       | InsultError            |
       * | Disgraced celebrities         | DisgracedArtistError   |
       * | Personal privacy violations   | PersonalPrivacyError   |
       * | Reporting standard violations | ReportingStandardError |
       * ### 6. Legal errors
       * | Description                                | Code                 |
       * | ------------------------------------------ | -------------------- |
       * | Incorrect citation of laws and regulations | LegalReferenceError  |
       * | Errors in legal provisions                 | LegalProvisionsError |
       * ### 7. Other domain-specific errors
       * | Description                         | Code                            |
       * | ----------------------------------- | ------------------------------- |
       * | Violations of advertising law       | AdvertisingProhibitedWordsError |
       * | Financial information errors        | FinancialInformationError       |
       * | Scientific or technical term errors | TechnicalTermError              |
       * ### 8. Factuality check
       * | Description                              | Code           |
       * | ---------------------------------------- | -------------- |
       * | Factuality verification – correct item   | CorrectFact    |
       * | Factuality verification – incorrect item | WrongFactError |
       * ### 9. Image audit
       * | Description | Code       |
       * | ----------- | ---------- |
       * | Image audit | ImageAudit |
       * ### 10. Custom word library
       * | Description         | Code        |
       * | ------------------- | ----------- |
       * | Custom word library | WordLibrary |
       * ### 11. Rule library audit
       * | Description        | Code              |
       * | ------------------ | ----------------- |
       * | Rule library audit | WrongQuestionBook |
       * ### 12. English proofreading
       * | Description                       | Code                         |
       * | --------------------------------- | ---------------------------- |
       * | Terminology standardization       | TerminologyNormalisation     |
       * | Verb tense accuracy               | VerbTenseAccuracy            |
       * | Punctuation and quotation marks   | PunctuationAndQuotationMarks |
       * | Spelling and language variants    | SpellingAndLanguageVariety   |
       * | Sentence structure and clarity    | SentenceStructureAndClarity  |
       * | Numeric and percentage formatting | NumericAndPercentageStyle    |
       * | Other standardized phrasing       | Others                       |
       *
       * @param tmpReq SubmitSmartAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmartAuditResponse
       */
      Models::SubmitSmartAuditResponse submitSmartAuditWithOptions(const Models::SubmitSmartAuditRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a smart audit request.
       *
       * @description The Quanmiao product supports iframe embedding. For more information, see [Customer integration: Quanmiao public cloud iframe customization guide](https://help.aliyun.com/document_detail/3000990.html).
       * # Supported audit types
       * ## Audit category overview
       * | Audit category                 | Description                                                                                                                                                                                                                                                               |
       * | ------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
       * | Content accuracy               | Errors due to phonetic or visual similarity; punctuation errors; misuse of Chinese structural particles (的/地/得); inappropriate word choice or syntax errors; incorrect personal names; incorrect place names; incorrect references; errors in proper nouns or terminology |
       * | Formatting issues              | Inconsistent capitalization; numeric errors; nonstandard units of measurement; use of traditional Chinese characters                                                                                                                                                      |
       * | Content structure issues       | Redundant text; repeated segments; logical contradictions; unfilled placeholders                                                                                                                                                                                          |
       * | Political sensitivity issues   | Sensitive content or directional risks; name or sorting errors; conventional phrasing errors; nonstandard institutional names; misquoting important speeches; references to disgraced officials; mismatched name-title pairings; incorrect title expressions              |
       * | Security and compliance issues | Violence or terrorism; pornography; prohibited content; insults; disgraced celebrities; personal privacy violations; reporting standard violations                                                                                                                        |
       * | Legal errors                   | Incorrect citation of laws and regulations; errors in legal provisions                                                                                                                                                                                                    |
       * | Other domain-specific errors   | Violations of advertising law; financial information errors; scientific or technical term errors                                                                                                                                                                          |
       * | Factuality check               | Factuality verification: correct or incorrect items                                                                                                                                                                                                                       |
       * | Image audit                    | Image content moderation                                                                                                                                                                                                                                                  |
       * | Custom word library            | Custom word library audit                                                                                                                                                                                                                                                 |
       * | Rule library audit             | Rule library audit                                                                                                                                                                                                                                                        |
       * | English proofreading           | Terminology standardization; verb tense accuracy; punctuation and quotation marks; spelling and language variants; sentence structure and clarity; numeric and percentage formatting; standardized phrasing                                                               |
       * ***
       * ## Sub-audit code values
       * ### 1. Content accuracy
       * | Description                                    | Code                 |
       * | ---------------------------------------------- | -------------------- |
       * | Phonetic or visual similarity errors           | PhoneticSimilarError |
       * | Punctuation errors                             | PunctuationError     |
       * | Misuse of Chinese structural particles (的/地/得) | ParticleUsageError   |
       * | Inappropriate word choice or syntax errors     | WordError            |
       * | Incorrect personal names                       | PersonNameError      |
       * | Incorrect place names                          | LocationError        |
       * | Incorrect references                           | ReferenceError       |
       * | Errors in proper nouns or terminology          | NounItemError        |
       * ### 2. Formatting issues
       * | Description                           | Code                    |
       * | ------------------------------------- | ----------------------- |
       * | Inconsistent capitalization           | CapitalizationError     |
       * | Numeric errors                        | NumberError             |
       * | Nonstandard units of measurement      | UnitError               |
       * | Use of traditional Chinese characters | TraditionalChineseError |
       * ### 3. Content structure issues
       * | Description            | Code                 |
       * | ---------------------- | -------------------- |
       * | Redundant text         | WordRedundancy       |
       * | Repeated segments      | DuplicateError       |
       * | Logical contradictions | LogicContradiction   |
       * | Unfilled placeholders  | PlaceholderNotFilled |
       * ### 4. Political sensitivity issues
       * | Description                            | Code                        |
       * | -------------------------------------- | --------------------------- |
       * | Sensitive content or directional risks | SensitiveContentRisk        |
       * | Name or sorting errors                 | NameOrderError              |
       * | Conventional phrasing errors           | ConventionalExpressionError |
       * | Nonstandard institutional names        | DepartmentNameError         |
       * | Misquoting important speeches          | ImportantSpeechError        |
       * | References to disgraced officials      | FallenOfficialError         |
       * | Mismatched name-title pairings         | LeaderTitleMatchError       |
       * | Incorrect title expressions            | TitleError                  |
       * ### 5. Security and compliance issues
       * | Description                   | Code                   |
       * | ----------------------------- | ---------------------- |
       * | Violence or terrorism         | ViolenceTerrorismError |
       * | Pornography                   | PornographyError       |
       * | Prohibited content            | ProhibitedContentError |
       * | Insults                       | InsultError            |
       * | Disgraced celebrities         | DisgracedArtistError   |
       * | Personal privacy violations   | PersonalPrivacyError   |
       * | Reporting standard violations | ReportingStandardError |
       * ### 6. Legal errors
       * | Description                                | Code                 |
       * | ------------------------------------------ | -------------------- |
       * | Incorrect citation of laws and regulations | LegalReferenceError  |
       * | Errors in legal provisions                 | LegalProvisionsError |
       * ### 7. Other domain-specific errors
       * | Description                         | Code                            |
       * | ----------------------------------- | ------------------------------- |
       * | Violations of advertising law       | AdvertisingProhibitedWordsError |
       * | Financial information errors        | FinancialInformationError       |
       * | Scientific or technical term errors | TechnicalTermError              |
       * ### 8. Factuality check
       * | Description                              | Code           |
       * | ---------------------------------------- | -------------- |
       * | Factuality verification – correct item   | CorrectFact    |
       * | Factuality verification – incorrect item | WrongFactError |
       * ### 9. Image audit
       * | Description | Code       |
       * | ----------- | ---------- |
       * | Image audit | ImageAudit |
       * ### 10. Custom word library
       * | Description         | Code        |
       * | ------------------- | ----------- |
       * | Custom word library | WordLibrary |
       * ### 11. Rule library audit
       * | Description        | Code              |
       * | ------------------ | ----------------- |
       * | Rule library audit | WrongQuestionBook |
       * ### 12. English proofreading
       * | Description                       | Code                         |
       * | --------------------------------- | ---------------------------- |
       * | Terminology standardization       | TerminologyNormalisation     |
       * | Verb tense accuracy               | VerbTenseAccuracy            |
       * | Punctuation and quotation marks   | PunctuationAndQuotationMarks |
       * | Spelling and language variants    | SpellingAndLanguageVariety   |
       * | Sentence structure and clarity    | SentenceStructureAndClarity  |
       * | Numeric and percentage formatting | NumericAndPercentageStyle    |
       * | Other standardized phrasing       | Others                       |
       *
       * @param request SubmitSmartAuditRequest
       * @return SubmitSmartAuditResponse
       */
      Models::SubmitSmartAuditResponse submitSmartAudit(const Models::SubmitSmartAuditRequest &request);

      /**
       * @summary Submits a one-click video editing task.
       *
       * @param tmpReq SubmitSmartClipTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmartClipTaskResponse
       */
      Models::SubmitSmartClipTaskResponse submitSmartClipTaskWithOptions(const Models::SubmitSmartClipTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a one-click video editing task.
       *
       * @param request SubmitSmartClipTaskRequest
       * @return SubmitSmartClipTaskResponse
       */
      Models::SubmitSmartClipTaskResponse submitSmartClipTask(const Models::SubmitSmartClipTaskRequest &request);

      /**
       * @summary Submits a hot spot analysis task for topic selection.
       *
       * @param tmpReq SubmitTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitTopicSelectionPerspectiveAnalysisTaskResponse submitTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::SubmitTopicSelectionPerspectiveAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a hot spot analysis task for topic selection.
       *
       * @param request SubmitTopicSelectionPerspectiveAnalysisTaskRequest
       * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitTopicSelectionPerspectiveAnalysisTaskResponse submitTopicSelectionPerspectiveAnalysisTask(const Models::SubmitTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary Submits a video for review.
       *
       * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration_Quanmiao Public Cloud iframe Customization Solution](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
       *
       * @param request SubmitVideoAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoAuditResponse
       */
      Models::SubmitVideoAuditResponse submitVideoAuditWithOptions(const Models::SubmitVideoAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video for review.
       *
       * @description Quanmiao products support iframe embedding. For more information, see [Customer Integration_Quanmiao Public Cloud iframe Customization Solution](https://alidocs.dingtalk.com/i/nodes/m9bN7RYPWdyrPBREcyM6jDQ2VZd1wyK0?cid=116617178%3A898142682\\&utm_source=im\\&utm_scene=team_space\\&iframeQuery=utm_medium%3Dim_card%26utm_source%3Dim\\&utm_medium=im_card\\&corpId=dingd8e1123006514592).
       *
       * @param request SubmitVideoAuditRequest
       * @return SubmitVideoAuditResponse
       */
      Models::SubmitVideoAuditResponse submitVideoAudit(const Models::SubmitVideoAuditRequest &request);

      /**
       * @summary Updates custom text.
       *
       * @param request UpdateCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomTextResponse
       */
      Models::UpdateCustomTextResponse updateCustomTextWithOptions(const Models::UpdateCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates custom text.
       *
       * @param request UpdateCustomTextRequest
       * @return UpdateCustomTextResponse
       */
      Models::UpdateCustomTextResponse updateCustomText(const Models::UpdateCustomTextRequest &request);

      /**
       * @summary This operation updates a data source.
       *
       * @param tmpReq UpdateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const Models::UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation updates a data source.
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const Models::UpdateDatasetRequest &request);

      /**
       * @summary Updates a document in a dataset.
       *
       * @param tmpReq UpdateDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetDocumentResponse
       */
      Models::UpdateDatasetDocumentResponse updateDatasetDocumentWithOptions(const Models::UpdateDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a document in a dataset.
       *
       * @param request UpdateDatasetDocumentRequest
       * @return UpdateDatasetDocumentResponse
       */
      Models::UpdateDatasetDocumentResponse updateDatasetDocument(const Models::UpdateDatasetDocumentRequest &request);

      /**
       * @summary Updates general configurations.
       *
       * @param request UpdateGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGeneralConfigResponse
       */
      Models::UpdateGeneralConfigResponse updateGeneralConfigWithOptions(const Models::UpdateGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates general configurations.
       *
       * @param request UpdateGeneralConfigRequest
       * @return UpdateGeneralConfigResponse
       */
      Models::UpdateGeneralConfigResponse updateGeneralConfig(const Models::UpdateGeneralConfigRequest &request);

      /**
       * @summary Updates the history of an article created in AiMiaoBi.
       *
       * @param tmpReq UpdateGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGeneratedContentResponse
       */
      Models::UpdateGeneratedContentResponse updateGeneratedContentWithOptions(const Models::UpdateGeneratedContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the history of an article created in AiMiaoBi.
       *
       * @param request UpdateGeneratedContentRequest
       * @return UpdateGeneratedContentResponse
       */
      Models::UpdateGeneratedContentResponse updateGeneratedContent(const Models::UpdateGeneratedContentRequest &request);

      /**
       * @summary Update a material in the Material Library.
       *
       * @param tmpReq UpdateMaterialDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMaterialDocumentResponse
       */
      Models::UpdateMaterialDocumentResponse updateMaterialDocumentWithOptions(const Models::UpdateMaterialDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a material in the Material Library.
       *
       * @param request UpdateMaterialDocumentRequest
       * @return UpdateMaterialDocumentResponse
       */
      Models::UpdateMaterialDocumentResponse updateMaterialDocument(const Models::UpdateMaterialDocumentRequest &request);

      /**
       * @summary Use MiaoDu to upload books.
       *
       * @param tmpReq UploadBookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadBookResponse
       */
      Models::UploadBookResponse uploadBookWithOptions(const Models::UploadBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use MiaoDu to upload books.
       *
       * @param request UploadBookRequest
       * @return UploadBookResponse
       */
      Models::UploadBookResponse uploadBook(const Models::UploadBookRequest &request);

      /**
       * @summary Upload document API for Miaodu.
       *
       * @description Document upload is implemented through asynchronous invocation. After the invocation, you must use the getDocInfo API to periodically check the document status. Only when the document status becomes 1 can you proceed with subsequent operations such as generating a document summary, creating a full-text mind map, summarizing Q&A content, extracting keywords, or rewriting.
       *
       * @param tmpReq UploadDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocResponse
       */
      Models::UploadDocResponse uploadDocWithOptions(const Models::UploadDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload document API for Miaodu.
       *
       * @description Document upload is implemented through asynchronous invocation. After the invocation, you must use the getDocInfo API to periodically check the document status. Only when the document status becomes 1 can you proceed with subsequent operations such as generating a document summary, creating a full-text mind map, summarizing Q&A content, extracting keywords, or rewriting.
       *
       * @param request UploadDocRequest
       * @return UploadDocResponse
       */
      Models::UploadDocResponse uploadDoc(const Models::UploadDocRequest &request);

      /**
       * @summary Validates an enterprise VOC upload template.
       *
       * @param request ValidateUploadTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateUploadTemplateResponse
       */
      Models::ValidateUploadTemplateResponse validateUploadTemplateWithOptions(const Models::ValidateUploadTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates an enterprise VOC upload template.
       *
       * @param request ValidateUploadTemplateRequest
       * @return ValidateUploadTemplateResponse
       */
      Models::ValidateUploadTemplateResponse validateUploadTemplate(const Models::ValidateUploadTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
