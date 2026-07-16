// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ICE20201109_HPP_
#define ALIBABACLOUD_ICE20201109_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ICE20201109Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ICE20201109.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates a specified license using the batch ID, authorization code, and device SN.
       *
       * @description ## [](#)Usage notes
       * Activate a specific license for Real-time Conversational AI by providing a batch ID (`LicenseItemId`), authorization code (`AuthCode`), and device ID (`DeviceId`). Upon successful activation, the API returns a response containing the request ID, an error code, the request status, the HTTP status code, and the activated license information.
       * **Note**: Ensure that the provided batch ID, authorization code, and device ID are correct. Incorrect information may cause the activation to fail.
       *
       * @param request ActiveAiRtcLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveAiRtcLicenseResponse
       */
      Models::ActiveAiRtcLicenseResponse activeAiRtcLicenseWithOptions(const Models::ActiveAiRtcLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a specified license using the batch ID, authorization code, and device SN.
       *
       * @description ## [](#)Usage notes
       * Activate a specific license for Real-time Conversational AI by providing a batch ID (`LicenseItemId`), authorization code (`AuthCode`), and device ID (`DeviceId`). Upon successful activation, the API returns a response containing the request ID, an error code, the request status, the HTTP status code, and the activated license information.
       * **Note**: Ensure that the provided batch ID, authorization code, and device ID are correct. Incorrect information may cause the activation to fail.
       *
       * @param request ActiveAiRtcLicenseRequest
       * @return ActiveAiRtcLicenseResponse
       */
      Models::ActiveAiRtcLicenseResponse activeAiRtcLicense(const Models::ActiveAiRtcLicenseRequest &request);

      /**
       * @summary Adds an ad insertion configuration.
       *
       * @param request AddAdInsertionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAdInsertionResponse
       */
      Models::AddAdInsertionResponse addAdInsertionWithOptions(const Models::AddAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an ad insertion configuration.
       *
       * @param request AddAdInsertionRequest
       * @return AddAdInsertionResponse
       */
      Models::AddAdInsertionResponse addAdInsertion(const Models::AddAdInsertionRequest &request);

      /**
       * @summary Creates a category.
       *
       * @description You can create at most three levels of categories. Each category level can contain a maximum of 100 subcategories.
       *
       * @param request AddCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategoryWithOptions(const Models::AddCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category.
       *
       * @description You can create at most three levels of categories. Each category level can contain a maximum of 100 subcategories.
       *
       * @param request AddCategoryRequest
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategory(const Models::AddCategoryRequest &request);

      /**
       * @summary Adds one or more materials to an online editing project.
       *
       * @param request AddEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEditingProjectMaterialsResponse
       */
      Models::AddEditingProjectMaterialsResponse addEditingProjectMaterialsWithOptions(const Models::AddEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more materials to an online editing project.
       *
       * @param request AddEditingProjectMaterialsRequest
       * @return AddEditingProjectMaterialsResponse
       */
      Models::AddEditingProjectMaterialsResponse addEditingProjectMaterials(const Models::AddEditingProjectMaterialsRequest &request);

      /**
       * @summary Adds one or more public Media Assets to your Favorites list by their media IDs.
       *
       * @param request AddFavoritePublicMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFavoritePublicMediaResponse
       */
      Models::AddFavoritePublicMediaResponse addFavoritePublicMediaWithOptions(const Models::AddFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more public Media Assets to your Favorites list by their media IDs.
       *
       * @param request AddFavoritePublicMediaRequest
       * @return AddFavoritePublicMediaResponse
       */
      Models::AddFavoritePublicMediaResponse addFavoritePublicMedia(const Models::AddFavoritePublicMediaRequest &request);

      /**
       * @summary Adds an input to a MediaConnect Flow instance.
       *
       * @description - If the specified flow instance ID does not exist, the API returns an error.
       * - By default, a flow instance supports only one input. After you enable dual-stream disaster recovery, you can add a second input.
       * ### Input type descriptions
       * - RTMP-PUSH: Creates an RTMP listener input. You can push your stream to the URL returned by the API using the RTMP protocol.
       * - RTMP-PULL: Creates an RTMP origin fetch input. The flow instance pulls an RTMP live stream from your specified origin server.
       * - SRT-Listener: Creates an SRT listener input. You can push your stream to the URL returned by the API using the SRT protocol.
       * - SRT-Caller: Creates an SRT origin fetch input. The flow instance pulls an SRT live stream from your specified origin server.
       * - Flow: Uses the output of another upstream flow instance as the input. You must specify both the upstream flow instance ID and the output name. The output of the upstream flow instance must be of the SRT-Listener or RTMP-PULL type. When flow instances cascade, they use a leased line by default. This supports cross-region distribution across multiple flow instances.
       *
       * @param request AddMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaConnectFlowInputResponse
       */
      Models::AddMediaConnectFlowInputResponse addMediaConnectFlowInputWithOptions(const Models::AddMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an input to a MediaConnect Flow instance.
       *
       * @description - If the specified flow instance ID does not exist, the API returns an error.
       * - By default, a flow instance supports only one input. After you enable dual-stream disaster recovery, you can add a second input.
       * ### Input type descriptions
       * - RTMP-PUSH: Creates an RTMP listener input. You can push your stream to the URL returned by the API using the RTMP protocol.
       * - RTMP-PULL: Creates an RTMP origin fetch input. The flow instance pulls an RTMP live stream from your specified origin server.
       * - SRT-Listener: Creates an SRT listener input. You can push your stream to the URL returned by the API using the SRT protocol.
       * - SRT-Caller: Creates an SRT origin fetch input. The flow instance pulls an SRT live stream from your specified origin server.
       * - Flow: Uses the output of another upstream flow instance as the input. You must specify both the upstream flow instance ID and the output name. The output of the upstream flow instance must be of the SRT-Listener or RTMP-PULL type. When flow instances cascade, they use a leased line by default. This supports cross-region distribution across multiple flow instances.
       *
       * @param request AddMediaConnectFlowInputRequest
       * @return AddMediaConnectFlowInputResponse
       */
      Models::AddMediaConnectFlowInputResponse addMediaConnectFlowInput(const Models::AddMediaConnectFlowInputRequest &request);

      /**
       * @summary Creates an output for a MediaConnect flow.
       *
       * @description - When the specified flow ID is not available, an error code is returned.
       * - A flow can have a maximum of four outputs.
       * - The output names in the same flow cannot be duplicated.
       * - You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
       * ### [](#)Output types
       * - RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
       * - RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
       * - SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
       * - SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
       * - Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
       *
       * @param request AddMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaConnectFlowOutputResponse
       */
      Models::AddMediaConnectFlowOutputResponse addMediaConnectFlowOutputWithOptions(const Models::AddMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an output for a MediaConnect flow.
       *
       * @description - When the specified flow ID is not available, an error code is returned.
       * - A flow can have a maximum of four outputs.
       * - The output names in the same flow cannot be duplicated.
       * - You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
       * ### [](#)Output types
       * - RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
       * - RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
       * - SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
       * - SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
       * - Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
       *
       * @param request AddMediaConnectFlowOutputRequest
       * @return AddMediaConnectFlowOutputResponse
       */
      Models::AddMediaConnectFlowOutputResponse addMediaConnectFlowOutput(const Models::AddMediaConnectFlowOutputRequest &request);

      /**
       * @summary Adds marks for a media asset.
       *
       * @param request AddMediaMarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaMarksResponse
       */
      Models::AddMediaMarksResponse addMediaMarksWithOptions(const Models::AddMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds marks for a media asset.
       *
       * @param request AddMediaMarksRequest
       * @return AddMediaMarksResponse
       */
      Models::AddMediaMarksResponse addMediaMarks(const Models::AddMediaMarksRequest &request);

      /**
       * @summary Adds tags for a specific live stream media asset.
       *
       * @description Tagging media assets created for live streams.
       *
       * @param request AddStreamTagToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddStreamTagToSearchLibResponse
       */
      Models::AddStreamTagToSearchLibResponse addStreamTagToSearchLibWithOptions(const Models::AddStreamTagToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags for a specific live stream media asset.
       *
       * @description Tagging media assets created for live streams.
       *
       * @param request AddStreamTagToSearchLibRequest
       * @return AddStreamTagToSearchLibResponse
       */
      Models::AddStreamTagToSearchLibResponse addStreamTagToSearchLib(const Models::AddStreamTagToSearchLibRequest &request);

      /**
       * @summary Creates a template.
       *
       * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       * - After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
       *
       * @param request AddTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTemplateResponse
       */
      Models::AddTemplateResponse addTemplateWithOptions(const Models::AddTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template.
       *
       * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       * - After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
       *
       * @param request AddTemplateRequest
       * @return AddTemplateResponse
       */
      Models::AddTemplateResponse addTemplate(const Models::AddTemplateRequest &request);

      /**
       * @summary Adds credits to a user account.
       *
       * @param request AddYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddYikeUserCreditResponse
       */
      Models::AddYikeUserCreditResponse addYikeUserCreditWithOptions(const Models::AddYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds credits to a user account.
       *
       * @param request AddYikeUserCreditRequest
       * @return AddYikeUserCreditResponse
       */
      Models::AddYikeUserCreditResponse addYikeUserCredit(const Models::AddYikeUserCreditRequest &request);

      /**
       * @summary Modifies search index information including index status and configurations.
       *
       * @param request AlterSearchIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterSearchIndexResponse
       */
      Models::AlterSearchIndexResponse alterSearchIndexWithOptions(const Models::AlterSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies search index information including index status and configurations.
       *
       * @param request AlterSearchIndexRequest
       * @return AlterSearchIndexResponse
       */
      Models::AlterSearchIndexResponse alterSearchIndex(const Models::AlterSearchIndexRequest &request);

      /**
       * @summary Modifies a search library.
       *
       * @param request AlterSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlterSearchLibResponse
       */
      Models::AlterSearchLibResponse alterSearchLibWithOptions(const Models::AlterSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a search library.
       *
       * @param request AlterSearchLibRequest
       * @return AlterSearchLibResponse
       */
      Models::AlterSearchLibResponse alterSearchLib(const Models::AlterSearchLibRequest &request);

      /**
       * @summary Ingests multiple assets for VOD packaging.
       *
       * @param tmpReq BatchCreateVodPackagingAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateVodPackagingAssetResponse
       */
      Models::BatchCreateVodPackagingAssetResponse batchCreateVodPackagingAssetWithOptions(const Models::BatchCreateVodPackagingAssetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ingests multiple assets for VOD packaging.
       *
       * @param request BatchCreateVodPackagingAssetRequest
       * @return BatchCreateVodPackagingAssetResponse
       */
      Models::BatchCreateVodPackagingAssetResponse batchCreateVodPackagingAsset(const Models::BatchCreateVodPackagingAssetRequest &request);

      /**
       * @summary Retrieves information for multiple media assets in a single request by providing their `mediaId` values.
       *
       * @param request BatchGetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfosWithOptions(const Models::BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information for multiple media assets in a single request by providing their `mediaId` values.
       *
       * @param request BatchGetMediaInfosRequest
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfos(const Models::BatchGetMediaInfosRequest &request);

      /**
       * @summary Retrieves a batch of Yike AI Application Generation Tasks.
       *
       * @param request BatchGetYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetYikeAIAppJobResponse
       */
      Models::BatchGetYikeAIAppJobResponse batchGetYikeAIAppJobWithOptions(const Models::BatchGetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a batch of Yike AI Application Generation Tasks.
       *
       * @param request BatchGetYikeAIAppJobRequest
       * @return BatchGetYikeAIAppJobResponse
       */
      Models::BatchGetYikeAIAppJobResponse batchGetYikeAIAppJob(const Models::BatchGetYikeAIAppJobRequest &request);

      /**
       * @summary Retrieves multiple media assets.
       *
       * @param request BatchGetYikeAssetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetYikeAssetMediaInfosResponse
       */
      Models::BatchGetYikeAssetMediaInfosResponse batchGetYikeAssetMediaInfosWithOptions(const Models::BatchGetYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves multiple media assets.
       *
       * @param request BatchGetYikeAssetMediaInfosRequest
       * @return BatchGetYikeAssetMediaInfosResponse
       */
      Models::BatchGetYikeAssetMediaInfosResponse batchGetYikeAssetMediaInfos(const Models::BatchGetYikeAssetMediaInfosRequest &request);

      /**
       * @summary Cancels a media fingerprint analysis job.
       *
       * @description - You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
       * - We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
       *
       * @param request CancelDNAJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDNAJobResponse
       */
      Models::CancelDNAJobResponse cancelDNAJobWithOptions(const Models::CancelDNAJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a media fingerprint analysis job.
       *
       * @description - You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
       * - We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
       *
       * @param request CancelDNAJobRequest
       * @return CancelDNAJobResponse
       */
      Models::CancelDNAJobResponse cancelDNAJob(const Models::CancelDNAJobRequest &request);

      /**
       * @summary Removes all specified media assets from favorites based on the input mediaId list.
       *
       * @param request CancelFavoritePublicMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFavoritePublicMediaResponse
       */
      Models::CancelFavoritePublicMediaResponse cancelFavoritePublicMediaWithOptions(const Models::CancelFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes all specified media assets from favorites based on the input mediaId list.
       *
       * @param request CancelFavoritePublicMediaRequest
       * @return CancelFavoritePublicMediaResponse
       */
      Models::CancelFavoritePublicMediaResponse cancelFavoritePublicMedia(const Models::CancelFavoritePublicMediaRequest &request);

      /**
       * @summary Invoke CancelIProductionJob to cancel an Intelligent Production job.
       *
       * @param request CancelIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelIProductionJobResponse
       */
      Models::CancelIProductionJobResponse cancelIProductionJobWithOptions(const Models::CancelIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke CancelIProductionJob to cancel an Intelligent Production job.
       *
       * @param request CancelIProductionJobRequest
       * @return CancelIProductionJobResponse
       */
      Models::CancelIProductionJobResponse cancelIProductionJob(const Models::CancelIProductionJobRequest &request);

      /**
       * @summary Clears the voiceprint associated with a voiceprint ID.
       *
       * @param request ClearAIAgentVoiceprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearAIAgentVoiceprintResponse
       */
      Models::ClearAIAgentVoiceprintResponse clearAIAgentVoiceprintWithOptions(const Models::ClearAIAgentVoiceprintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the voiceprint associated with a voiceprint ID.
       *
       * @param request ClearAIAgentVoiceprintRequest
       * @return ClearAIAgentVoiceprintResponse
       */
      Models::ClearAIAgentVoiceprintResponse clearAIAgentVoiceprint(const Models::ClearAIAgentVoiceprintRequest &request);

      /**
       * @summary Disables Source Failover for a MediaConnect flow.
       *
       * @description - If a flow has two sources, you cannot disable Source Failover. Delete one of them before this operation.
       *
       * @param request CloseMediaConnectFlowFailoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseMediaConnectFlowFailoverResponse
       */
      Models::CloseMediaConnectFlowFailoverResponse closeMediaConnectFlowFailoverWithOptions(const Models::CloseMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables Source Failover for a MediaConnect flow.
       *
       * @description - If a flow has two sources, you cannot disable Source Failover. Delete one of them before this operation.
       *
       * @param request CloseMediaConnectFlowFailoverRequest
       * @return CloseMediaConnectFlowFailoverResponse
       */
      Models::CloseMediaConnectFlowFailoverResponse closeMediaConnectFlowFailover(const Models::CloseMediaConnectFlowFailoverRequest &request);

      /**
       * @summary Stops the tagging and analysis process for a live stream media asset.
       *
       * @param request CloseStreamToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseStreamToSearchLibResponse
       */
      Models::CloseStreamToSearchLibResponse closeStreamToSearchLibWithOptions(const Models::CloseStreamToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the tagging and analysis process for a live stream media asset.
       *
       * @param request CloseStreamToSearchLibRequest
       * @return CloseStreamToSearchLibResponse
       */
      Models::CloseStreamToSearchLibResponse closeStreamToSearchLib(const Models::CloseStreamToSearchLibRequest &request);

      /**
       * @summary Submits manual review results for media assets.
       *
       * @param request CreateAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuditResponse
       */
      Models::CreateAuditResponse createAuditWithOptions(const Models::CreateAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits manual review results for media assets.
       *
       * @param request CreateAuditRequest
       * @return CreateAuditResponse
       */
      Models::CreateAuditResponse createAudit(const Models::CreateAuditRequest &request);

      /**
       * @summary Creates an avatar training job. You can configure the basic information of the avatar and the materials required for the training.
       *
       * @description This API is only used to initialize trainingTaskrelatedInformation,And will not submit training,To officially submit training, you need toCall [SubmitAvatarTrainingJob](https://help.aliyun.com/document_detail/2526196.html) API.
       *
       * @param request CreateAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAvatarTrainingJobResponse
       */
      Models::CreateAvatarTrainingJobResponse createAvatarTrainingJobWithOptions(const Models::CreateAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an avatar training job. You can configure the basic information of the avatar and the materials required for the training.
       *
       * @description This API is only used to initialize trainingTaskrelatedInformation,And will not submit training,To officially submit training, you need toCall [SubmitAvatarTrainingJob](https://help.aliyun.com/document_detail/2526196.html) API.
       *
       * @param request CreateAvatarTrainingJobRequest
       * @return CreateAvatarTrainingJobResponse
       */
      Models::CreateAvatarTrainingJobResponse createAvatarTrainingJob(const Models::CreateAvatarTrainingJobRequest &request);

      /**
       * @summary Creates a channel in MediaWeaver.
       *
       * @param request CreateChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChannelResponse
       */
      Models::CreateChannelResponse createChannelWithOptions(const Models::CreateChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a channel in MediaWeaver.
       *
       * @param request CreateChannelRequest
       * @return CreateChannelResponse
       */
      Models::CreateChannelResponse createChannel(const Models::CreateChannelRequest &request);

      /**
       * @summary Creates a custom media processing template.
       *
       * @param request CreateCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplateWithOptions(const Models::CreateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom media processing template.
       *
       * @param request CreateCustomTemplateRequest
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplate(const Models::CreateCustomTemplateRequest &request);

      /**
       * @summary Creates a voice cloning job and initializes its basic information.
       *
       * @description <props="china">
       * - Billing for voice cloning is based on customization and usage. For more information, see [Voice cloning billing](~~2399891#section-gy3-80e-clt~~).
       * - Call this operation to achieve entertainment-grade results. You need to record 20 predefined scripts. The system then extracts key voiceprint features to perform voice cloning quickly and cost-effectively.
       *
       * @param request CreateCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomizedVoiceJobResponse
       */
      Models::CreateCustomizedVoiceJobResponse createCustomizedVoiceJobWithOptions(const Models::CreateCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a voice cloning job and initializes its basic information.
       *
       * @description <props="china">
       * - Billing for voice cloning is based on customization and usage. For more information, see [Voice cloning billing](~~2399891#section-gy3-80e-clt~~).
       * - Call this operation to achieve entertainment-grade results. You need to record 20 predefined scripts. The system then extracts key voiceprint features to perform voice cloning quickly and cost-effectively.
       *
       * @param request CreateCustomizedVoiceJobRequest
       * @return CreateCustomizedVoiceJobResponse
       */
      Models::CreateCustomizedVoiceJobResponse createCustomizedVoiceJob(const Models::CreateCustomizedVoiceJobRequest &request);

      /**
       * @summary Use the CreateDNADB operation to create a DNA database.
       *
       * @description By default, each user can create up to five DNA databases. To increase this limit, please [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q). You can use the DeleteDNADB operation to delete DNA databases that you no longer need.
       *
       * @param request CreateDNADBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDNADBResponse
       */
      Models::CreateDNADBResponse createDNADBWithOptions(const Models::CreateDNADBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the CreateDNADB operation to create a DNA database.
       *
       * @description By default, each user can create up to five DNA databases. To increase this limit, please [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q). You can use the DeleteDNADB operation to delete DNA databases that you no longer need.
       *
       * @param request CreateDNADBRequest
       * @return CreateDNADBResponse
       */
      Models::CreateDNADBResponse createDNADB(const Models::CreateDNADBRequest &request);

      /**
       * @summary Creates an online editing project. You can specify configurations such as the title, description, timeline, and thumbnail for the project.
       *
       * @description - Billing is based on the duration of the edited video,For more informationPlease referSee[VideoEditing](https://help.aliyun.com/document_detail/2840899.html)<props="china"> and [LiveEditing](https://help.aliyun.com/document_detail/2840900.html) .If processing fails,No charge.
       * - After creating the editing project,You canCall[SubmitMediaProducingJob - SubmitEditingCompositing jobAPI](https://help.aliyun.com/document_detail/441147.html)Submit mediaEditingSynthesisTask.Call[SubmitLiveEditingJob - Submit liveEditingTask](https://help.aliyun.com/document_detail/441148.html)Submit liveEditingTask.
       *
       * @param request CreateEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEditingProjectResponse
       */
      Models::CreateEditingProjectResponse createEditingProjectWithOptions(const Models::CreateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an online editing project. You can specify configurations such as the title, description, timeline, and thumbnail for the project.
       *
       * @description - Billing is based on the duration of the edited video,For more informationPlease referSee[VideoEditing](https://help.aliyun.com/document_detail/2840899.html)<props="china"> and [LiveEditing](https://help.aliyun.com/document_detail/2840900.html) .If processing fails,No charge.
       * - After creating the editing project,You canCall[SubmitMediaProducingJob - SubmitEditingCompositing jobAPI](https://help.aliyun.com/document_detail/441147.html)Submit mediaEditingSynthesisTask.Call[SubmitLiveEditingJob - Submit liveEditingTask](https://help.aliyun.com/document_detail/441148.html)Submit liveEditingTask.
       *
       * @param request CreateEditingProjectRequest
       * @return CreateEditingProjectResponse
       */
      Models::CreateEditingProjectResponse createEditingProject(const Models::CreateEditingProjectRequest &request);

      /**
       * @summary Creates a hotword library.
       *
       * @description Call CreateHotwordLibrary API to create hotword library.
       *
       * @param tmpReq CreateHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHotwordLibraryResponse
       */
      Models::CreateHotwordLibraryResponse createHotwordLibraryWithOptions(const Models::CreateHotwordLibraryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hotword library.
       *
       * @description Call CreateHotwordLibrary API to create hotword library.
       *
       * @param request CreateHotwordLibraryRequest
       * @return CreateHotwordLibraryResponse
       */
      Models::CreateHotwordLibraryResponse createHotwordLibrary(const Models::CreateHotwordLibraryRequest &request);

      /**
       * @summary Creates an IPC order with shared capacity at the account level.
       *
       * @description Before you call this operation, make sure you understand the [billing and pricing for the IPC product](https://help.aliyun.com/document_detail/3004591.html).
       *
       * @param request CreateIpcOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpcOrderResponse
       */
      Models::CreateIpcOrderResponse createIpcOrderWithOptions(const Models::CreateIpcOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IPC order with shared capacity at the account level.
       *
       * @description Before you call this operation, make sure you understand the [billing and pricing for the IPC product](https://help.aliyun.com/document_detail/3004591.html).
       *
       * @param request CreateIpcOrderRequest
       * @return CreateIpcOrderResponse
       */
      Models::CreateIpcOrderResponse createIpcOrder(const Models::CreateIpcOrderRequest &request);

      /**
       * @summary Creates a live package channel.
       *
       * @description ## [](#)Usage notes
       * After you call this operation to create a live package channel, the system will automatically generate the ingest endpoint URL, and username and password required for authentication.
       * ### [](#)Precautions
       * - Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
       * - Only `HLS` is supported.
       * - The segment duration must be from 1 to 30 seconds.
       * - The number of M3U8 segments must be from 2 to 100.
       * If the request succeeds, the system will return the details of the newly created channel, including the channel name, creation time, modification time, and ingest endpoint details.
       *
       * @param request CreateLivePackageChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePackageChannelResponse
       */
      Models::CreateLivePackageChannelResponse createLivePackageChannelWithOptions(const Models::CreateLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live package channel.
       *
       * @description ## [](#)Usage notes
       * After you call this operation to create a live package channel, the system will automatically generate the ingest endpoint URL, and username and password required for authentication.
       * ### [](#)Precautions
       * - Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
       * - Only `HLS` is supported.
       * - The segment duration must be from 1 to 30 seconds.
       * - The number of M3U8 segments must be from 2 to 100.
       * If the request succeeds, the system will return the details of the newly created channel, including the channel name, creation time, modification time, and ingest endpoint details.
       *
       * @param request CreateLivePackageChannelRequest
       * @return CreateLivePackageChannelResponse
       */
      Models::CreateLivePackageChannelResponse createLivePackageChannel(const Models::CreateLivePackageChannelRequest &request);

      /**
       * @summary Creates a live package channel group with a custom name and description.
       *
       * @description After you create a channel group, the assigned origin domain is returned.
       *
       * @param request CreateLivePackageChannelGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePackageChannelGroupResponse
       */
      Models::CreateLivePackageChannelGroupResponse createLivePackageChannelGroupWithOptions(const Models::CreateLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live package channel group with a custom name and description.
       *
       * @description After you create a channel group, the assigned origin domain is returned.
       *
       * @param request CreateLivePackageChannelGroupRequest
       * @return CreateLivePackageChannelGroupResponse
       */
      Models::CreateLivePackageChannelGroupResponse createLivePackageChannelGroup(const Models::CreateLivePackageChannelGroupRequest &request);

      /**
       * @summary [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_description]Endpoint playback URL
       *
       * @description [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_title]Endpoint URL
       *
       * @param tmpReq CreateLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePackageOriginEndpointResponse
       */
      Models::CreateLivePackageOriginEndpointResponse createLivePackageOriginEndpointWithOptions(const Models::CreateLivePackageOriginEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_description]Endpoint playback URL
       *
       * @description [responses_200_schema_properties_LivePackageOriginEndpoint_properties_EndpointUrl_title]Endpoint URL
       *
       * @param request CreateLivePackageOriginEndpointRequest
       * @return CreateLivePackageOriginEndpointResponse
       */
      Models::CreateLivePackageOriginEndpointResponse createLivePackageOriginEndpoint(const Models::CreateLivePackageOriginEndpointRequest &request);

      /**
       * @summary Use this operation to create a Live Record Template. You can use the template to submit Live Recording Jobs.
       *
       * @description Live recording requires a Live Record Template. You can use a template to configure settings such as the recording format (for example, M3U8, MP4, or FLV) and the duration of Recording Files.
       *
       * @param tmpReq CreateLiveRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveRecordTemplateResponse
       */
      Models::CreateLiveRecordTemplateResponse createLiveRecordTemplateWithOptions(const Models::CreateLiveRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this operation to create a Live Record Template. You can use the template to submit Live Recording Jobs.
       *
       * @description Live recording requires a Live Record Template. You can use a template to configure settings such as the recording format (for example, M3U8, MP4, or FLV) and the duration of Recording Files.
       *
       * @param request CreateLiveRecordTemplateRequest
       * @return CreateLiveRecordTemplateResponse
       */
      Models::CreateLiveRecordTemplateResponse createLiveRecordTemplate(const Models::CreateLiveRecordTemplateRequest &request);

      /**
       * @summary Create a live stream snapshot template to facilitate the creation of snapshot jobs.
       *
       * @param request CreateLiveSnapshotTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveSnapshotTemplateResponse
       */
      Models::CreateLiveSnapshotTemplateResponse createLiveSnapshotTemplateWithOptions(const Models::CreateLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a live stream snapshot template to facilitate the creation of snapshot jobs.
       *
       * @param request CreateLiveSnapshotTemplateRequest
       * @return CreateLiveSnapshotTemplateResponse
       */
      Models::CreateLiveSnapshotTemplateResponse createLiveSnapshotTemplate(const Models::CreateLiveSnapshotTemplateRequest &request);

      /**
       * @summary Creates a live stream transcoding template, which can be referenced when submitting a transcoding job.
       *
       * @description Only Shanghai region supports real-time media transcoding.
       *
       * @param tmpReq CreateLiveTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveTranscodeTemplateResponse
       */
      Models::CreateLiveTranscodeTemplateResponse createLiveTranscodeTemplateWithOptions(const Models::CreateLiveTranscodeTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live stream transcoding template, which can be referenced when submitting a transcoding job.
       *
       * @description Only Shanghai region supports real-time media transcoding.
       *
       * @param request CreateLiveTranscodeTemplateRequest
       * @return CreateLiveTranscodeTemplateResponse
       */
      Models::CreateLiveTranscodeTemplateResponse createLiveTranscodeTemplate(const Models::CreateLiveTranscodeTemplateRequest &request);

      /**
       * @summary Creates a MediaConnect flow.
       *
       * @description - The flow names cannot be duplicated in the same region.
       * - Take note of the returned flow ID. You may reference it in other API operations.
       *
       * @param request CreateMediaConnectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaConnectFlowResponse
       */
      Models::CreateMediaConnectFlowResponse createMediaConnectFlowWithOptions(const Models::CreateMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MediaConnect flow.
       *
       * @description - The flow names cannot be duplicated in the same region.
       * - Take note of the returned flow ID. You may reference it in other API operations.
       *
       * @param request CreateMediaConnectFlowRequest
       * @return CreateMediaConnectFlowResponse
       */
      Models::CreateMediaConnectFlowResponse createMediaConnectFlow(const Models::CreateMediaConnectFlowRequest &request);

      /**
       * @summary Creates a MediaLive channel.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CreateMediaLiveChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaLiveChannelResponse
       */
      Models::CreateMediaLiveChannelResponse createMediaLiveChannelWithOptions(const Models::CreateMediaLiveChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MediaLive channel.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateMediaLiveChannelRequest
       * @return CreateMediaLiveChannelResponse
       */
      Models::CreateMediaLiveChannelResponse createMediaLiveChannel(const Models::CreateMediaLiveChannelRequest &request);

      /**
       * @summary Create a live media input.
       *
       * @description - Create a live media input.
       * ## Queries per second (QPS) limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param tmpReq CreateMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaLiveInputResponse
       */
      Models::CreateMediaLiveInputResponse createMediaLiveInputWithOptions(const Models::CreateMediaLiveInputRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a live media input.
       *
       * @description - Create a live media input.
       * ## Queries per second (QPS) limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request CreateMediaLiveInputRequest
       * @return CreateMediaLiveInputResponse
       */
      Models::CreateMediaLiveInputResponse createMediaLiveInput(const Models::CreateMediaLiveInputRequest &request);

      /**
       * @summary Creates a security group in MediaLive.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CreateMediaLiveInputSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaLiveInputSecurityGroupResponse
       */
      Models::CreateMediaLiveInputSecurityGroupResponse createMediaLiveInputSecurityGroupWithOptions(const Models::CreateMediaLiveInputSecurityGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group in MediaLive.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateMediaLiveInputSecurityGroupRequest
       * @return CreateMediaLiveInputSecurityGroupResponse
       */
      Models::CreateMediaLiveInputSecurityGroupResponse createMediaLiveInputSecurityGroup(const Models::CreateMediaLiveInputSecurityGroupRequest &request);

      /**
       * @summary Creates an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request CreatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const Models::CreatePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const Models::CreatePipelineRequest &request);

      /**
       * @summary Creates a program in a MediaWeaver channel.
       *
       * @param request CreateProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProgramResponse
       */
      Models::CreateProgramResponse createProgramWithOptions(const Models::CreateProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a program in a MediaWeaver channel.
       *
       * @param request CreateProgramRequest
       * @return CreateProgramResponse
       */
      Models::CreateProgramResponse createProgram(const Models::CreateProgramRequest &request);

      /**
       * @summary Creates an entity to be recognized in a custom recognition library. The entity can be a landmark, object, logo, or person.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request CreateRecognitionEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecognitionEntityResponse
       */
      Models::CreateRecognitionEntityResponse createRecognitionEntityWithOptions(const Models::CreateRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an entity to be recognized in a custom recognition library. The entity can be a landmark, object, logo, or person.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request CreateRecognitionEntityRequest
       * @return CreateRecognitionEntityResponse
       */
      Models::CreateRecognitionEntityResponse createRecognitionEntity(const Models::CreateRecognitionEntityRequest &request);

      /**
       * @summary Creates a custom library to store the entity information for recognition.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Workflow for using a custom recognition library: Create a library, create a custom object entity within the library, register sample images for the entity, create an analysis template that uses your custom library, and then submit an analysis task using the template.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request CreateRecognitionLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecognitionLibResponse
       */
      Models::CreateRecognitionLibResponse createRecognitionLibWithOptions(const Models::CreateRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom library to store the entity information for recognition.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Workflow for using a custom recognition library: Create a library, create a custom object entity within the library, register sample images for the entity, create an analysis template that uses your custom library, and then submit an analysis task using the template.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request CreateRecognitionLibRequest
       * @return CreateRecognitionLibResponse
       */
      Models::CreateRecognitionLibResponse createRecognitionLib(const Models::CreateRecognitionLibRequest &request);

      /**
       * @summary Adds a sample image or a text label to a specific entity within a recognition library.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request CreateRecognitionSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecognitionSampleResponse
       */
      Models::CreateRecognitionSampleResponse createRecognitionSampleWithOptions(const Models::CreateRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a sample image or a text label to a specific entity within a recognition library.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request CreateRecognitionSampleRequest
       * @return CreateRecognitionSampleResponse
       */
      Models::CreateRecognitionSampleResponse createRecognitionSample(const Models::CreateRecognitionSampleRequest &request);

      /**
       * @summary You can create a search index under a search library. A search library can contain multiple search indexes of different types.
       *
       * @description <props="china">
       * Before using this API, ensure that you fully understand the [Intelligent Search billing](https://help.aliyun.com/document_detail/2840897.html) method and pricing.
       *
       * @param request CreateSearchIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSearchIndexResponse
       */
      Models::CreateSearchIndexResponse createSearchIndexWithOptions(const Models::CreateSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create a search index under a search library. A search library can contain multiple search indexes of different types.
       *
       * @description <props="china">
       * Before using this API, ensure that you fully understand the [Intelligent Search billing](https://help.aliyun.com/document_detail/2840897.html) method and pricing.
       *
       * @param request CreateSearchIndexRequest
       * @return CreateSearchIndexResponse
       */
      Models::CreateSearchIndexResponse createSearchIndex(const Models::CreateSearchIndexRequest &request);

      /**
       * @summary Creates a search library to store media assets.
       *
       * @param request CreateSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSearchLibResponse
       */
      Models::CreateSearchLibResponse createSearchLibWithOptions(const Models::CreateSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a search library to store media assets.
       *
       * @param request CreateSearchLibRequest
       * @return CreateSearchLibResponse
       */
      Models::CreateSearchLibResponse createSearchLib(const Models::CreateSearchLibRequest &request);

      /**
       * @summary Creates a source in MediaWeaver.
       *
       * @param request CreateSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSourceResponse
       */
      Models::CreateSourceResponse createSourceWithOptions(const Models::CreateSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a source in MediaWeaver.
       *
       * @param request CreateSourceRequest
       * @return CreateSourceResponse
       */
      Models::CreateSourceResponse createSource(const Models::CreateSourceRequest &request);

      /**
       * @summary Creates a source location.
       *
       * @param request CreateSourceLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSourceLocationResponse
       */
      Models::CreateSourceLocationResponse createSourceLocationWithOptions(const Models::CreateSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a source location.
       *
       * @param request CreateSourceLocationRequest
       * @return CreateSourceLocationResponse
       */
      Models::CreateSourceLocationResponse createSourceLocation(const Models::CreateSourceLocationRequest &request);

      /**
       * @summary Registers a live stream as a media asset.
       *
       * @param request CreateStreamToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamToSearchLibResponse
       */
      Models::CreateStreamToSearchLibResponse createStreamToSearchLibWithOptions(const Models::CreateStreamToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a live stream as a media asset.
       *
       * @param request CreateStreamToSearchLibRequest
       * @return CreateStreamToSearchLibResponse
       */
      Models::CreateStreamToSearchLibResponse createStreamToSearchLib(const Models::CreateStreamToSearchLibRequest &request);

      /**
       * @summary This operation retrieves an upload address and upload credential for audio, video, image, and auxiliary media assets, and creates the corresponding media asset.
       *
       * @description ### Overview
       * - Obtaining an upload address and upload credential is a prerequisite for all uploads in Intelligent Media Service.
       * - If an upload credential expires (the default validity is 3,000 seconds), call the `RefreshUploadMedia` operation to get a new one.
       * - After an upload is complete, you can confirm its success by either configuring a callback for event notifications or calling the `GetMediaInfo` operation to check the media asset\\"s status.
       * - Use the returned `MediaId` for media asset lifecycle management or media processing.
       * ### Limitations
       * - This operation supports uploads only to VOD storage, not to your own Object Storage Service (OSS) buckets. If you use your own OSS buckets, first upload the files by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the OSS files in your media library.
       * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadMediaResponse
       */
      Models::CreateUploadMediaResponse createUploadMediaWithOptions(const Models::CreateUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves an upload address and upload credential for audio, video, image, and auxiliary media assets, and creates the corresponding media asset.
       *
       * @description ### Overview
       * - Obtaining an upload address and upload credential is a prerequisite for all uploads in Intelligent Media Service.
       * - If an upload credential expires (the default validity is 3,000 seconds), call the `RefreshUploadMedia` operation to get a new one.
       * - After an upload is complete, you can confirm its success by either configuring a callback for event notifications or calling the `GetMediaInfo` operation to check the media asset\\"s status.
       * - Use the returned `MediaId` for media asset lifecycle management or media processing.
       * ### Limitations
       * - This operation supports uploads only to VOD storage, not to your own Object Storage Service (OSS) buckets. If you use your own OSS buckets, first upload the files by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the OSS files in your media library.
       * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadMediaRequest
       * @return CreateUploadMediaResponse
       */
      Models::CreateUploadMediaResponse createUploadMedia(const Models::CreateUploadMediaRequest &request);

      /**
       * @summary Obtains the upload URL and credential of a media stream.
       *
       * @description - Upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
       * - Upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadStreamResponse
       */
      Models::CreateUploadStreamResponse createUploadStreamWithOptions(const Models::CreateUploadStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the upload URL and credential of a media stream.
       *
       * @description - Upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
       * - Upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadStreamRequest
       * @return CreateUploadStreamResponse
       */
      Models::CreateUploadStreamResponse createUploadStream(const Models::CreateUploadStreamRequest &request);

      /**
       * @summary Ingests an asset for VOD packaging.
       *
       * @param tmpReq CreateVodPackagingAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVodPackagingAssetResponse
       */
      Models::CreateVodPackagingAssetResponse createVodPackagingAssetWithOptions(const Models::CreateVodPackagingAssetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ingests an asset for VOD packaging.
       *
       * @param request CreateVodPackagingAssetRequest
       * @return CreateVodPackagingAssetResponse
       */
      Models::CreateVodPackagingAssetResponse createVodPackagingAsset(const Models::CreateVodPackagingAssetRequest &request);

      /**
       * @summary Creates a VOD packaging configuration.
       *
       * @param tmpReq CreateVodPackagingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVodPackagingConfigurationResponse
       */
      Models::CreateVodPackagingConfigurationResponse createVodPackagingConfigurationWithOptions(const Models::CreateVodPackagingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VOD packaging configuration.
       *
       * @param request CreateVodPackagingConfigurationRequest
       * @return CreateVodPackagingConfigurationResponse
       */
      Models::CreateVodPackagingConfigurationResponse createVodPackagingConfiguration(const Models::CreateVodPackagingConfigurationRequest &request);

      /**
       * @summary Creates a VOD packaging group.
       *
       * @param request CreateVodPackagingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVodPackagingGroupResponse
       */
      Models::CreateVodPackagingGroupResponse createVodPackagingGroupWithOptions(const Models::CreateVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VOD packaging group.
       *
       * @param request CreateVodPackagingGroupRequest
       * @return CreateVodPackagingGroupResponse
       */
      Models::CreateVodPackagingGroupResponse createVodPackagingGroup(const Models::CreateVodPackagingGroupRequest &request);

      /**
       * @summary Obtains an upload credential for a Yike media asset.
       *
       * @param request CreateYikeAssetUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeAssetUploadResponse
       */
      Models::CreateYikeAssetUploadResponse createYikeAssetUploadWithOptions(const Models::CreateYikeAssetUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an upload credential for a Yike media asset.
       *
       * @param request CreateYikeAssetUploadRequest
       * @return CreateYikeAssetUploadResponse
       */
      Models::CreateYikeAssetUploadResponse createYikeAssetUpload(const Models::CreateYikeAssetUploadRequest &request);

      /**
       * @summary Creates a Yike production.
       *
       * @param request CreateYikeProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeProductionResponse
       */
      Models::CreateYikeProductionResponse createYikeProductionWithOptions(const Models::CreateYikeProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Yike production.
       *
       * @param request CreateYikeProductionRequest
       * @return CreateYikeProductionResponse
       */
      Models::CreateYikeProductionResponse createYikeProduction(const Models::CreateYikeProductionRequest &request);

      /**
       * @summary Creates a Yike user.
       *
       * @param request CreateYikeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeUserResponse
       */
      Models::CreateYikeUserResponse createYikeUserWithOptions(const Models::CreateYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Yike user.
       *
       * @param request CreateYikeUserRequest
       * @return CreateYikeUserResponse
       */
      Models::CreateYikeUserResponse createYikeUser(const Models::CreateYikeUserRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateYikeWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYikeWorkspaceResponse
       */
      Models::CreateYikeWorkspaceResponse createYikeWorkspaceWithOptions(const Models::CreateYikeWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateYikeWorkspaceRequest
       * @return CreateYikeWorkspaceResponse
       */
      Models::CreateYikeWorkspaceResponse createYikeWorkspace(const Models::CreateYikeWorkspaceRequest &request);

      /**
       * @summary Decrypts the ciphertext specified by CiphertextBlob in the Key Management Service (KMS) data key.
       *
       * @param request DecryptKMSDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptKMSDataKeyResponse
       */
      Models::DecryptKMSDataKeyResponse decryptKMSDataKeyWithOptions(const Models::DecryptKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts the ciphertext specified by CiphertextBlob in the Key Management Service (KMS) data key.
       *
       * @param request DecryptKMSDataKeyRequest
       * @return DecryptKMSDataKeyResponse
       */
      Models::DecryptKMSDataKeyResponse decryptKMSDataKey(const Models::DecryptKMSDataKeyRequest &request);

      /**
       * @summary Deletes dialog records of an AI agent.
       *
       * @param request DeleteAIAgentDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIAgentDialogueResponse
       */
      Models::DeleteAIAgentDialogueResponse deleteAIAgentDialogueWithOptions(const Models::DeleteAIAgentDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes dialog records of an AI agent.
       *
       * @param request DeleteAIAgentDialogueRequest
       * @return DeleteAIAgentDialogueResponse
       */
      Models::DeleteAIAgentDialogueResponse deleteAIAgentDialogue(const Models::DeleteAIAgentDialogueRequest &request);

      /**
       * @summary Deletes an ad insertion configuration.
       *
       * @param request DeleteAdInsertionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdInsertionResponse
       */
      Models::DeleteAdInsertionResponse deleteAdInsertionWithOptions(const Models::DeleteAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ad insertion configuration.
       *
       * @param request DeleteAdInsertionRequest
       * @return DeleteAdInsertionResponse
       */
      Models::DeleteAdInsertionResponse deleteAdInsertion(const Models::DeleteAdInsertionRequest &request);

      /**
       * @summary Deletes a digital human training job that is in the Init or Fail state.
       *
       * @param request DeleteAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAvatarTrainingJobResponse
       */
      Models::DeleteAvatarTrainingJobResponse deleteAvatarTrainingJobWithOptions(const Models::DeleteAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a digital human training job that is in the Init or Fail state.
       *
       * @param request DeleteAvatarTrainingJobRequest
       * @return DeleteAvatarTrainingJobResponse
       */
      Models::DeleteAvatarTrainingJobResponse deleteAvatarTrainingJob(const Models::DeleteAvatarTrainingJobRequest &request);

      /**
       * @summary Deletes a media asset category.
       *
       * @description This operation also deletes the subcategories, including the level-2 and level-3 categories, of the category.
       *
       * @param request DeleteCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const Models::DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a media asset category.
       *
       * @description This operation also deletes the subcategories, including the level-2 and level-3 categories, of the category.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes a channel.
       *
       * @param request DeleteChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannelWithOptions(const Models::DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a channel.
       *
       * @param request DeleteChannelRequest
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannel(const Models::DeleteChannelRequest &request);

      /**
       * @summary Deletes a custom template.
       *
       * @param request DeleteCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTemplateResponse
       */
      Models::DeleteCustomTemplateResponse deleteCustomTemplateWithOptions(const Models::DeleteCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom template.
       *
       * @param request DeleteCustomTemplateRequest
       * @return DeleteCustomTemplateResponse
       */
      Models::DeleteCustomTemplateResponse deleteCustomTemplate(const Models::DeleteCustomTemplateRequest &request);

      /**
       * @summary Deletes a human voice cloning job that is not in the Training or Success state.
       *
       * @param request DeleteCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizedVoiceJobResponse
       */
      Models::DeleteCustomizedVoiceJobResponse deleteCustomizedVoiceJobWithOptions(const Models::DeleteCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a human voice cloning job that is not in the Training or Success state.
       *
       * @param request DeleteCustomizedVoiceJobRequest
       * @return DeleteCustomizedVoiceJobResponse
       */
      Models::DeleteCustomizedVoiceJobResponse deleteCustomizedVoiceJob(const Models::DeleteCustomizedVoiceJobRequest &request);

      /**
       * @summary Deletes a media fingerprint library.
       *
       * @param request DeleteDNADBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDNADBResponse
       */
      Models::DeleteDNADBResponse deleteDNADBWithOptions(const Models::DeleteDNADBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a media fingerprint library.
       *
       * @param request DeleteDNADBRequest
       * @return DeleteDNADBResponse
       */
      Models::DeleteDNADBResponse deleteDNADB(const Models::DeleteDNADBRequest &request);

      /**
       * @summary Deletes files from a media fingerprint library.
       *
       * @param request DeleteDNAFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDNAFilesResponse
       */
      Models::DeleteDNAFilesResponse deleteDNAFilesWithOptions(const Models::DeleteDNAFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes files from a media fingerprint library.
       *
       * @param request DeleteDNAFilesRequest
       * @return DeleteDNAFilesResponse
       */
      Models::DeleteDNAFilesResponse deleteDNAFiles(const Models::DeleteDNAFilesRequest &request);

      /**
       * @summary Deletes one or more materials from an online editing project.
       *
       * @param request DeleteEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEditingProjectMaterialsResponse
       */
      Models::DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterialsWithOptions(const Models::DeleteEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more materials from an online editing project.
       *
       * @param request DeleteEditingProjectMaterialsRequest
       * @return DeleteEditingProjectMaterialsResponse
       */
      Models::DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterials(const Models::DeleteEditingProjectMaterialsRequest &request);

      /**
       * @summary Deletes one or more online editing project.
       *
       * @param request DeleteEditingProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEditingProjectsResponse
       */
      Models::DeleteEditingProjectsResponse deleteEditingProjectsWithOptions(const Models::DeleteEditingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more online editing project.
       *
       * @param request DeleteEditingProjectsRequest
       * @return DeleteEditingProjectsResponse
       */
      Models::DeleteEditingProjectsResponse deleteEditingProjects(const Models::DeleteEditingProjectsRequest &request);

      /**
       * @summary Deletes a specified hotword library based on the ID.
       *
       * @description ## [](#)
       * - Delete a specified hotword library.
       * - The delete operation is irreversible.
       * - You can create up to 100 hotword libraries in an account.
       *
       * @param request DeleteHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotwordLibraryResponse
       */
      Models::DeleteHotwordLibraryResponse deleteHotwordLibraryWithOptions(const Models::DeleteHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified hotword library based on the ID.
       *
       * @description ## [](#)
       * - Delete a specified hotword library.
       * - The delete operation is irreversible.
       * - You can create up to 100 hotword libraries in an account.
       *
       * @param request DeleteHotwordLibraryRequest
       * @return DeleteHotwordLibraryResponse
       */
      Models::DeleteHotwordLibraryResponse deleteHotwordLibrary(const Models::DeleteHotwordLibraryRequest &request);

      /**
       * @summary Deletes a live package channel by GroupName and ChannelName.
       *
       * @description ## [](#)Usage notes
       * You need to provide GroupName and ChannelName as parameters to specify exactly which channel to delete. Before you delete a channel, you must delete the origin endpoints associated with the channel.
       *
       * @param request DeleteLivePackageChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePackageChannelResponse
       */
      Models::DeleteLivePackageChannelResponse deleteLivePackageChannelWithOptions(const Models::DeleteLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live package channel by GroupName and ChannelName.
       *
       * @description ## [](#)Usage notes
       * You need to provide GroupName and ChannelName as parameters to specify exactly which channel to delete. Before you delete a channel, you must delete the origin endpoints associated with the channel.
       *
       * @param request DeleteLivePackageChannelRequest
       * @return DeleteLivePackageChannelResponse
       */
      Models::DeleteLivePackageChannelResponse deleteLivePackageChannel(const Models::DeleteLivePackageChannelRequest &request);

      /**
       * @summary Deletes a live package channel group by name.
       *
       * @description ## [](#)Usage notes
       * Make sure that no channels are included in the channel group before you delete it.
       *
       * @param request DeleteLivePackageChannelGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePackageChannelGroupResponse
       */
      Models::DeleteLivePackageChannelGroupResponse deleteLivePackageChannelGroupWithOptions(const Models::DeleteLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live package channel group by name.
       *
       * @description ## [](#)Usage notes
       * Make sure that no channels are included in the channel group before you delete it.
       *
       * @param request DeleteLivePackageChannelGroupRequest
       * @return DeleteLivePackageChannelGroupResponse
       */
      Models::DeleteLivePackageChannelGroupResponse deleteLivePackageChannelGroup(const Models::DeleteLivePackageChannelGroupRequest &request);

      /**
       * @summary Deletes an origin endpoint associated with a live package channel.
       *
       * @description ## [](#)Usage notes
       * This API operation is used to delete an origin endpoint associated with a live package channel by specifying `GroupName`, `ChannelName`, and `EndpointName`. This operation will permanently delete the relevant configurations. Exercise caution when you perform this operation.
       *
       * @param request DeleteLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePackageOriginEndpointResponse
       */
      Models::DeleteLivePackageOriginEndpointResponse deleteLivePackageOriginEndpointWithOptions(const Models::DeleteLivePackageOriginEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an origin endpoint associated with a live package channel.
       *
       * @description ## [](#)Usage notes
       * This API operation is used to delete an origin endpoint associated with a live package channel by specifying `GroupName`, `ChannelName`, and `EndpointName`. This operation will permanently delete the relevant configurations. Exercise caution when you perform this operation.
       *
       * @param request DeleteLivePackageOriginEndpointRequest
       * @return DeleteLivePackageOriginEndpointResponse
       */
      Models::DeleteLivePackageOriginEndpointResponse deleteLivePackageOriginEndpoint(const Models::DeleteLivePackageOriginEndpointRequest &request);

      /**
       * @summary Deletes live stream recording files. You can choose to delete only the recording files or delete both the recording files and the original Object Storage Service (OSS) files.
       *
       * @param request DeleteLiveRecordFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRecordFilesResponse
       */
      Models::DeleteLiveRecordFilesResponse deleteLiveRecordFilesWithOptions(const Models::DeleteLiveRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes live stream recording files. You can choose to delete only the recording files or delete both the recording files and the original Object Storage Service (OSS) files.
       *
       * @param request DeleteLiveRecordFilesRequest
       * @return DeleteLiveRecordFilesResponse
       */
      Models::DeleteLiveRecordFilesResponse deleteLiveRecordFiles(const Models::DeleteLiveRecordFilesRequest &request);

      /**
       * @summary Deletes a live stream recording template without affecting existing jobs.
       *
       * @param request DeleteLiveRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRecordTemplateResponse
       */
      Models::DeleteLiveRecordTemplateResponse deleteLiveRecordTemplateWithOptions(const Models::DeleteLiveRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live stream recording template without affecting existing jobs.
       *
       * @param request DeleteLiveRecordTemplateRequest
       * @return DeleteLiveRecordTemplateResponse
       */
      Models::DeleteLiveRecordTemplateResponse deleteLiveRecordTemplate(const Models::DeleteLiveRecordTemplateRequest &request);

      /**
       * @summary Deletes live snapshot files. You can delete only the records, or both the records and the original Object Storage Service (OSS) files.
       *
       * @param tmpReq DeleteLiveSnapshotFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSnapshotFilesResponse
       */
      Models::DeleteLiveSnapshotFilesResponse deleteLiveSnapshotFilesWithOptions(const Models::DeleteLiveSnapshotFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes live snapshot files. You can delete only the records, or both the records and the original Object Storage Service (OSS) files.
       *
       * @param request DeleteLiveSnapshotFilesRequest
       * @return DeleteLiveSnapshotFilesResponse
       */
      Models::DeleteLiveSnapshotFilesResponse deleteLiveSnapshotFiles(const Models::DeleteLiveSnapshotFilesRequest &request);

      /**
       * @summary Deletes a live stream snapshot template.
       *
       * @param request DeleteLiveSnapshotTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSnapshotTemplateResponse
       */
      Models::DeleteLiveSnapshotTemplateResponse deleteLiveSnapshotTemplateWithOptions(const Models::DeleteLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live stream snapshot template.
       *
       * @param request DeleteLiveSnapshotTemplateRequest
       * @return DeleteLiveSnapshotTemplateResponse
       */
      Models::DeleteLiveSnapshotTemplateResponse deleteLiveSnapshotTemplate(const Models::DeleteLiveSnapshotTemplateRequest &request);

      /**
       * @summary Delete the specified real-time transcoding job.
       *
       * @param request DeleteLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveTranscodeJobResponse
       */
      Models::DeleteLiveTranscodeJobResponse deleteLiveTranscodeJobWithOptions(const Models::DeleteLiveTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified real-time transcoding job.
       *
       * @param request DeleteLiveTranscodeJobRequest
       * @return DeleteLiveTranscodeJobResponse
       */
      Models::DeleteLiveTranscodeJobResponse deleteLiveTranscodeJob(const Models::DeleteLiveTranscodeJobRequest &request);

      /**
       * @summary Deletes a live stream transcoding template.
       *
       * @param request DeleteLiveTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveTranscodeTemplateResponse
       */
      Models::DeleteLiveTranscodeTemplateResponse deleteLiveTranscodeTemplateWithOptions(const Models::DeleteLiveTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live stream transcoding template.
       *
       * @param request DeleteLiveTranscodeTemplateRequest
       * @return DeleteLiveTranscodeTemplateResponse
       */
      Models::DeleteLiveTranscodeTemplateResponse deleteLiveTranscodeTemplate(const Models::DeleteLiveTranscodeTemplateRequest &request);

      /**
       * @summary Deletes a MediaConnect flow.
       *
       * @description - When the specified flow ID is not available, an error code is returned.
       * - When a flow is deleted, its source and outputs are also deleted.
       * - When a flow is in the online state, it cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaConnectFlowResponse
       */
      Models::DeleteMediaConnectFlowResponse deleteMediaConnectFlowWithOptions(const Models::DeleteMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MediaConnect flow.
       *
       * @description - When the specified flow ID is not available, an error code is returned.
       * - When a flow is deleted, its source and outputs are also deleted.
       * - When a flow is in the online state, it cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowRequest
       * @return DeleteMediaConnectFlowResponse
       */
      Models::DeleteMediaConnectFlowResponse deleteMediaConnectFlow(const Models::DeleteMediaConnectFlowRequest &request);

      /**
       * @summary Delete the input of a specific MediaConnect instance
       *
       * @description - If the provided Flow instance ID does not exist, the interface will return an error.
       * - When the Flow instance status is online, the input cannot be deleted.
       * - Only after all outputs under the Flow instance have been deleted can the input be deleted.
       *
       * @param request DeleteMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaConnectFlowInputResponse
       */
      Models::DeleteMediaConnectFlowInputResponse deleteMediaConnectFlowInputWithOptions(const Models::DeleteMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the input of a specific MediaConnect instance
       *
       * @description - If the provided Flow instance ID does not exist, the interface will return an error.
       * - When the Flow instance status is online, the input cannot be deleted.
       * - Only after all outputs under the Flow instance have been deleted can the input be deleted.
       *
       * @param request DeleteMediaConnectFlowInputRequest
       * @return DeleteMediaConnectFlowInputResponse
       */
      Models::DeleteMediaConnectFlowInputResponse deleteMediaConnectFlowInput(const Models::DeleteMediaConnectFlowInputRequest &request);

      /**
       * @summary Deletes an output of a MediaConnect flow.
       *
       * @description - When the specified flow ID is not available, an error code is returned.
       * - When a flow is in the online state, its outputs cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaConnectFlowOutputResponse
       */
      Models::DeleteMediaConnectFlowOutputResponse deleteMediaConnectFlowOutputWithOptions(const Models::DeleteMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an output of a MediaConnect flow.
       *
       * @description - When the specified flow ID is not available, an error code is returned.
       * - When a flow is in the online state, its outputs cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowOutputRequest
       * @return DeleteMediaConnectFlowOutputResponse
       */
      Models::DeleteMediaConnectFlowOutputResponse deleteMediaConnectFlowOutput(const Models::DeleteMediaConnectFlowOutputRequest &request);

      /**
       * @summary Delete the specified media asset from the search library.
       *
       * @param request DeleteMediaFromSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaFromSearchLibResponse
       */
      Models::DeleteMediaFromSearchLibResponse deleteMediaFromSearchLibWithOptions(const Models::DeleteMediaFromSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified media asset from the search library.
       *
       * @param request DeleteMediaFromSearchLibRequest
       * @return DeleteMediaFromSearchLibResponse
       */
      Models::DeleteMediaFromSearchLibResponse deleteMediaFromSearchLib(const Models::DeleteMediaFromSearchLibRequest &request);

      /**
       * @summary Deletes multiple media assets at a time. You can delete at most 20 media assets at a time. If MediaIds is specified, it is preferentially used. If MediaIds is empty, InputURLs must be specified.
       *
       * @param request DeleteMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaInfosResponse
       */
      Models::DeleteMediaInfosResponse deleteMediaInfosWithOptions(const Models::DeleteMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple media assets at a time. You can delete at most 20 media assets at a time. If MediaIds is specified, it is preferentially used. If MediaIds is empty, InputURLs must be specified.
       *
       * @param request DeleteMediaInfosRequest
       * @return DeleteMediaInfosResponse
       */
      Models::DeleteMediaInfosResponse deleteMediaInfos(const Models::DeleteMediaInfosRequest &request);

      /**
       * @summary Deletes a MediaLive channel.
       *
       * @description - You can only delete a channel that is not running.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMediaLiveChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaLiveChannelResponse
       */
      Models::DeleteMediaLiveChannelResponse deleteMediaLiveChannelWithOptions(const Models::DeleteMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MediaLive channel.
       *
       * @description - You can only delete a channel that is not running.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMediaLiveChannelRequest
       * @return DeleteMediaLiveChannelResponse
       */
      Models::DeleteMediaLiveChannelResponse deleteMediaLiveChannel(const Models::DeleteMediaLiveChannelRequest &request);

      /**
       * @summary Deletes a MediaLive input.
       *
       * @description - You can delete an input only when it is not associated with a MediaLive channel.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaLiveInputResponse
       */
      Models::DeleteMediaLiveInputResponse deleteMediaLiveInputWithOptions(const Models::DeleteMediaLiveInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MediaLive input.
       *
       * @description - You can delete an input only when it is not associated with a MediaLive channel.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMediaLiveInputRequest
       * @return DeleteMediaLiveInputResponse
       */
      Models::DeleteMediaLiveInputResponse deleteMediaLiveInput(const Models::DeleteMediaLiveInputRequest &request);

      /**
       * @summary Deletes a security group in MediaLive.
       *
       * @description - You can only delete a security group not associated with an input.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMediaLiveInputSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaLiveInputSecurityGroupResponse
       */
      Models::DeleteMediaLiveInputSecurityGroupResponse deleteMediaLiveInputSecurityGroupWithOptions(const Models::DeleteMediaLiveInputSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group in MediaLive.
       *
       * @description - You can only delete a security group not associated with an input.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMediaLiveInputSecurityGroupRequest
       * @return DeleteMediaLiveInputSecurityGroupResponse
       */
      Models::DeleteMediaLiveInputSecurityGroupResponse deleteMediaLiveInputSecurityGroup(const Models::DeleteMediaLiveInputSecurityGroupRequest &request);

      /**
       * @summary Deletes the marks of a media asset.
       *
       * @param request DeleteMediaMarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaMarksResponse
       */
      Models::DeleteMediaMarksResponse deleteMediaMarksWithOptions(const Models::DeleteMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the marks of a media asset.
       *
       * @param request DeleteMediaMarksRequest
       * @return DeleteMediaMarksResponse
       */
      Models::DeleteMediaMarksResponse deleteMediaMarks(const Models::DeleteMediaMarksRequest &request);

      /**
       * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request DeletePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipelineWithOptions(const Models::DeletePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request DeletePipelineRequest
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipeline(const Models::DeletePipelineRequest &request);

      /**
       * @summary Deletes media streams such as video streams and audio streams.
       *
       * @description Delete multiple media streams at a time.
       *
       * @param request DeletePlayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlayInfoResponse
       */
      Models::DeletePlayInfoResponse deletePlayInfoWithOptions(const Models::DeletePlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media streams such as video streams and audio streams.
       *
       * @description Delete multiple media streams at a time.
       *
       * @param request DeletePlayInfoRequest
       * @return DeletePlayInfoResponse
       */
      Models::DeletePlayInfoResponse deletePlayInfo(const Models::DeletePlayInfoRequest &request);

      /**
       * @summary Deletes a program from a channel.
       *
       * @param request DeleteProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProgramResponse
       */
      Models::DeleteProgramResponse deleteProgramWithOptions(const Models::DeleteProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a program from a channel.
       *
       * @param request DeleteProgramRequest
       * @return DeleteProgramResponse
       */
      Models::DeleteProgramResponse deleteProgram(const Models::DeleteProgramRequest &request);

      /**
       * @summary Deletes an entity from the specified custom recognition library.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request DeleteRecognitionEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognitionEntityResponse
       */
      Models::DeleteRecognitionEntityResponse deleteRecognitionEntityWithOptions(const Models::DeleteRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an entity from the specified custom recognition library.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request DeleteRecognitionEntityRequest
       * @return DeleteRecognitionEntityResponse
       */
      Models::DeleteRecognitionEntityResponse deleteRecognitionEntity(const Models::DeleteRecognitionEntityRequest &request);

      /**
       * @summary Deletes a custom recognition library, including all entities and samples within it.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request DeleteRecognitionLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognitionLibResponse
       */
      Models::DeleteRecognitionLibResponse deleteRecognitionLibWithOptions(const Models::DeleteRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom recognition library, including all entities and samples within it.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request DeleteRecognitionLibRequest
       * @return DeleteRecognitionLibResponse
       */
      Models::DeleteRecognitionLibResponse deleteRecognitionLib(const Models::DeleteRecognitionLibRequest &request);

      /**
       * @summary Deletes a sample for a custom entity.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request DeleteRecognitionSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognitionSampleResponse
       */
      Models::DeleteRecognitionSampleResponse deleteRecognitionSampleWithOptions(const Models::DeleteRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a sample for a custom entity.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Callable up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request DeleteRecognitionSampleRequest
       * @return DeleteRecognitionSampleResponse
       */
      Models::DeleteRecognitionSampleResponse deleteRecognitionSample(const Models::DeleteRecognitionSampleRequest &request);

      /**
       * @summary Deletes intelligent jobs based on job IDs.
       *
       * @param request DeleteSmartJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmartJobResponse
       */
      Models::DeleteSmartJobResponse deleteSmartJobWithOptions(const Models::DeleteSmartJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes intelligent jobs based on job IDs.
       *
       * @param request DeleteSmartJobRequest
       * @return DeleteSmartJobResponse
       */
      Models::DeleteSmartJobResponse deleteSmartJob(const Models::DeleteSmartJobRequest &request);

      /**
       * @summary Deletes a source from MediaWeaver.
       *
       * @param request DeleteSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceResponse
       */
      Models::DeleteSourceResponse deleteSourceWithOptions(const Models::DeleteSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a source from MediaWeaver.
       *
       * @param request DeleteSourceRequest
       * @return DeleteSourceResponse
       */
      Models::DeleteSourceResponse deleteSource(const Models::DeleteSourceRequest &request);

      /**
       * @summary Deletes a source location.
       *
       * @param request DeleteSourceLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceLocationResponse
       */
      Models::DeleteSourceLocationResponse deleteSourceLocationWithOptions(const Models::DeleteSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a source location.
       *
       * @param request DeleteSourceLocationRequest
       * @return DeleteSourceLocationResponse
       */
      Models::DeleteSourceLocationResponse deleteSourceLocation(const Models::DeleteSourceLocationRequest &request);

      /**
       * @summary Deletes templates.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes templates.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @summary Deletes a VOD packaging asset.
       *
       * @param request DeleteVodPackagingAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodPackagingAssetResponse
       */
      Models::DeleteVodPackagingAssetResponse deleteVodPackagingAssetWithOptions(const Models::DeleteVodPackagingAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VOD packaging asset.
       *
       * @param request DeleteVodPackagingAssetRequest
       * @return DeleteVodPackagingAssetResponse
       */
      Models::DeleteVodPackagingAssetResponse deleteVodPackagingAsset(const Models::DeleteVodPackagingAssetRequest &request);

      /**
       * @summary Deletes a VOD packaging configuration.
       *
       * @param request DeleteVodPackagingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodPackagingConfigurationResponse
       */
      Models::DeleteVodPackagingConfigurationResponse deleteVodPackagingConfigurationWithOptions(const Models::DeleteVodPackagingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VOD packaging configuration.
       *
       * @param request DeleteVodPackagingConfigurationRequest
       * @return DeleteVodPackagingConfigurationResponse
       */
      Models::DeleteVodPackagingConfigurationResponse deleteVodPackagingConfiguration(const Models::DeleteVodPackagingConfigurationRequest &request);

      /**
       * @summary Deletes a VOD packaging group.
       *
       * @param request DeleteVodPackagingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodPackagingGroupResponse
       */
      Models::DeleteVodPackagingGroupResponse deleteVodPackagingGroupWithOptions(const Models::DeleteVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VOD packaging group.
       *
       * @param request DeleteVodPackagingGroupRequest
       * @return DeleteVodPackagingGroupResponse
       */
      Models::DeleteVodPackagingGroupResponse deleteVodPackagingGroup(const Models::DeleteVodPackagingGroupRequest &request);

      /**
       * @summary Deletes one or more media assets.
       *
       * @param request DeleteYikeAssetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteYikeAssetMediaInfosResponse
       */
      Models::DeleteYikeAssetMediaInfosResponse deleteYikeAssetMediaInfosWithOptions(const Models::DeleteYikeAssetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more media assets.
       *
       * @param request DeleteYikeAssetMediaInfosRequest
       * @return DeleteYikeAssetMediaInfosResponse
       */
      Models::DeleteYikeAssetMediaInfosResponse deleteYikeAssetMediaInfos(const Models::DeleteYikeAssetMediaInfosRequest &request);

      /**
       * @summary Retrieves information about a specified AI agent instance.
       *
       * @description - **Description**: Retrieves detailed information for a specific AI agent instance.
       * - **Use cases**: Use this operation to monitor or analyze the performance of an AI agent during a call, or to debug its configuration.
       *
       * @param request DescribeAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIAgentInstanceResponse
       */
      Models::DescribeAIAgentInstanceResponse describeAIAgentInstanceWithOptions(const Models::DescribeAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified AI agent instance.
       *
       * @description - **Description**: Retrieves detailed information for a specific AI agent instance.
       * - **Use cases**: Use this operation to monitor or analyze the performance of an AI agent during a call, or to debug its configuration.
       *
       * @param request DescribeAIAgentInstanceRequest
       * @return DescribeAIAgentInstanceResponse
       */
      Models::DescribeAIAgentInstanceResponse describeAIAgentInstance(const Models::DescribeAIAgentInstanceRequest &request);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) editing. The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsEditUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterImsEditUsageResponse
       */
      Models::DescribeMeterImsEditUsageResponse describeMeterImsEditUsageWithOptions(const Models::DescribeMeterImsEditUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) editing. The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsEditUsageRequest
       * @return DescribeMeterImsEditUsageResponse
       */
      Models::DescribeMeterImsEditUsageResponse describeMeterImsEditUsage(const Models::DescribeMeterImsEditUsageRequest &request);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on ultra high definition (UHD) transcoding of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsMediaConvertUHDUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterImsMediaConvertUHDUsageResponse
       */
      Models::DescribeMeterImsMediaConvertUHDUsageResponse describeMeterImsMediaConvertUHDUsageWithOptions(const Models::DescribeMeterImsMediaConvertUHDUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on ultra high definition (UHD) transcoding of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsMediaConvertUHDUsageRequest
       * @return DescribeMeterImsMediaConvertUHDUsageResponse
       */
      Models::DescribeMeterImsMediaConvertUHDUsageResponse describeMeterImsMediaConvertUHDUsage(const Models::DescribeMeterImsMediaConvertUHDUsageRequest &request);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) transcoding. The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsMediaConvertUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterImsMediaConvertUsageResponse
       */
      Models::DescribeMeterImsMediaConvertUsageResponse describeMeterImsMediaConvertUsageWithOptions(const Models::DescribeMeterImsMediaConvertUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) transcoding. The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsMediaConvertUsageRequest
       * @return DescribeMeterImsMediaConvertUsageResponse
       */
      Models::DescribeMeterImsMediaConvertUsageResponse describeMeterImsMediaConvertUsage(const Models::DescribeMeterImsMediaConvertUsageRequest &request);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on AI processing of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsMpsAiUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterImsMpsAiUsageResponse
       */
      Models::DescribeMeterImsMpsAiUsageResponse describeMeterImsMpsAiUsageWithOptions(const Models::DescribeMeterImsMpsAiUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS) on AI processing of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsMpsAiUsageRequest
       * @return DescribeMeterImsMpsAiUsageResponse
       */
      Models::DescribeMeterImsMpsAiUsageResponse describeMeterImsMpsAiUsage(const Models::DescribeMeterImsMpsAiUsageRequest &request);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS). The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterImsSummaryResponse
       */
      Models::DescribeMeterImsSummaryResponse describeMeterImsSummaryWithOptions(const Models::DescribeMeterImsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics of Intelligent Media Services (IMS). The maximum query range is 31 days. You can query data within the last 90 days.
       *
       * @param request DescribeMeterImsSummaryRequest
       * @return DescribeMeterImsSummaryResponse
       */
      Models::DescribeMeterImsSummaryResponse describeMeterImsSummary(const Models::DescribeMeterImsSummaryRequest &request);

      /**
       * @summary Retrieves the event callback configuration for a specified AIAgent.
       *
       * @description Retrieves the event callback configuration for a specified AIAgent.
       *
       * @param request DescribeNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNotifyConfigResponse
       */
      Models::DescribeNotifyConfigResponse describeNotifyConfigWithOptions(const Models::DescribeNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the event callback configuration for a specified AIAgent.
       *
       * @description Retrieves the event callback configuration for a specified AIAgent.
       *
       * @param request DescribeNotifyConfigRequest
       * @return DescribeNotifyConfigResponse
       */
      Models::DescribeNotifyConfigResponse describeNotifyConfig(const Models::DescribeNotifyConfigRequest &request);

      /**
       * @summary Retrieves playback records based on the player\\"s TraceId. This API supports pagination.
       *
       * @param request DescribePlayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayListResponse
       */
      Models::DescribePlayListResponse describePlayListWithOptions(const Models::DescribePlayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves playback records based on the player\\"s TraceId. This API supports pagination.
       *
       * @param request DescribePlayListRequest
       * @return DescribePlayListResponse
       */
      Models::DescribePlayListResponse describePlayList(const Models::DescribePlayListRequest &request);

      /**
       * @summary Retrieves information about an RTC Robot Instance.
       *
       * @param request DescribeRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcRobotInstanceResponse
       */
      Models::DescribeRtcRobotInstanceResponse describeRtcRobotInstanceWithOptions(const Models::DescribeRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about an RTC Robot Instance.
       *
       * @param request DescribeRtcRobotInstanceRequest
       * @return DescribeRtcRobotInstanceResponse
       */
      Models::DescribeRtcRobotInstanceResponse describeRtcRobotInstance(const Models::DescribeRtcRobotInstanceRequest &request);

      /**
       * @summary Checks whether the reading of users has issues, such as noticeable pronunciation errors or background noise. After the audio is checked on the cloud, the qualified audio is temporarily stored on the cloud for subsequent training. Do not skip this step.
       *
       * @param request DetectAudioForCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectAudioForCustomizedVoiceJobResponse
       */
      Models::DetectAudioForCustomizedVoiceJobResponse detectAudioForCustomizedVoiceJobWithOptions(const Models::DetectAudioForCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the reading of users has issues, such as noticeable pronunciation errors or background noise. After the audio is checked on the cloud, the qualified audio is temporarily stored on the cloud for subsequent training. Do not skip this step.
       *
       * @param request DetectAudioForCustomizedVoiceJobRequest
       * @return DetectAudioForCustomizedVoiceJobResponse
       */
      Models::DetectAudioForCustomizedVoiceJobResponse detectAudioForCustomizedVoiceJob(const Models::DetectAudioForCustomizedVoiceJobRequest &request);

      /**
       * @summary Deletes a search index. After you delete a search index, the existing index data is cleared and index-based analysis, storage, and query are not supported for subsequent media assets.
       *
       * @param request DropSearchIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropSearchIndexResponse
       */
      Models::DropSearchIndexResponse dropSearchIndexWithOptions(const Models::DropSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a search index. After you delete a search index, the existing index data is cleared and index-based analysis, storage, and query are not supported for subsequent media assets.
       *
       * @param request DropSearchIndexRequest
       * @return DropSearchIndexResponse
       */
      Models::DropSearchIndexResponse dropSearchIndex(const Models::DropSearchIndexRequest &request);

      /**
       * @summary Deletes a search library and all media assets in the library.
       *
       * @param request DropSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DropSearchLibResponse
       */
      Models::DropSearchLibResponse dropSearchLibWithOptions(const Models::DropSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a search library and all media assets in the library.
       *
       * @param request DropSearchLibRequest
       * @return DropSearchLibResponse
       */
      Models::DropSearchLibResponse dropSearchLib(const Models::DropSearchLibRequest &request);

      /**
       * @summary Disables an output of a MediaConnect flow. When disabled, the output retains its configuration, but no live stream is delivered to the destination.
       *
       * @param request ForbidMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbidMediaConnectFlowOutputResponse
       */
      Models::ForbidMediaConnectFlowOutputResponse forbidMediaConnectFlowOutputWithOptions(const Models::ForbidMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an output of a MediaConnect flow. When disabled, the output retains its configuration, but no live stream is delivered to the destination.
       *
       * @param request ForbidMediaConnectFlowOutputRequest
       * @return ForbidMediaConnectFlowOutputResponse
       */
      Models::ForbidMediaConnectFlowOutputResponse forbidMediaConnectFlowOutput(const Models::ForbidMediaConnectFlowOutputRequest &request);

      /**
       * @summary Transfer the call to the target phone number.
       *
       * @param request ForwardAIAgentCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForwardAIAgentCallResponse
       */
      Models::ForwardAIAgentCallResponse forwardAIAgentCallWithOptions(const Models::ForwardAIAgentCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfer the call to the target phone number.
       *
       * @param request ForwardAIAgentCallRequest
       * @return ForwardAIAgentCallResponse
       */
      Models::ForwardAIAgentCallResponse forwardAIAgentCall(const Models::ForwardAIAgentCallRequest &request);

      /**
       * @summary Creates an agent instance and returns the channel, username, and token to join the channel.
       *
       * @description This API creates an agent instance using the specified AI agent ID (AIAgentId). You can use the information in the response to join the corresponding channel and start a session with the agent.
       * >Notice: 
       * Ensure that the specified AI agent ID is valid and configure optional parameters as needed.
       *
       * @param tmpReq GenerateAIAgentCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAIAgentCallResponse
       */
      Models::GenerateAIAgentCallResponse generateAIAgentCallWithOptions(const Models::GenerateAIAgentCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agent instance and returns the channel, username, and token to join the channel.
       *
       * @description This API creates an agent instance using the specified AI agent ID (AIAgentId). You can use the information in the response to join the corresponding channel and start a session with the agent.
       * >Notice: 
       * Ensure that the specified AI agent ID is valid and configure optional parameters as needed.
       *
       * @param request GenerateAIAgentCallRequest
       * @return GenerateAIAgentCallResponse
       */
      Models::GenerateAIAgentCallResponse generateAIAgentCall(const Models::GenerateAIAgentCallRequest &request);

      /**
       * @summary Generates a random Key Management Service (KMS) data key used for HTTP Live Streaming (HLS) encryption and transcoding of videos.
       *
       * @description ## Prerequisites
       * You must [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c63.p38356.0.0.583760760aj80E) to create a custom KMS key before you can call this operation.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKeyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random Key Management Service (KMS) data key used for HTTP Live Streaming (HLS) encryption and transcoding of videos.
       *
       * @description ## Prerequisites
       * You must [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c63.p38356.0.0.583760760aj80E) to create a custom KMS key before you can call this operation.
       *
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKey();

      /**
       * @summary Generates the token required for interactive messaging.
       *
       * @param request GenerateMessageChatTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateMessageChatTokenResponse
       */
      Models::GenerateMessageChatTokenResponse generateMessageChatTokenWithOptions(const Models::GenerateMessageChatTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the token required for interactive messaging.
       *
       * @param request GenerateMessageChatTokenRequest
       * @return GenerateMessageChatTokenResponse
       */
      Models::GenerateMessageChatTokenResponse generateMessageChatToken(const Models::GenerateMessageChatTokenRequest &request);

      /**
       * @summary Retrieves the current number of active concurrent calls for a specified AI agent. This is a lightweight query operation that returns only the number of currently active instances. It does not return instance details or historical peak values.
       *
       * @param request GetAIAgentConcurrencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIAgentConcurrencyResponse
       */
      Models::GetAIAgentConcurrencyResponse getAIAgentConcurrencyWithOptions(const Models::GetAIAgentConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current number of active concurrent calls for a specified AI agent. This is a lightweight query operation that returns only the number of currently active instances. It does not return instance details or historical peak values.
       *
       * @param request GetAIAgentConcurrencyRequest
       * @return GetAIAgentConcurrencyResponse
       */
      Models::GetAIAgentConcurrencyResponse getAIAgentConcurrency(const Models::GetAIAgentConcurrencyRequest &request);

      /**
       * @summary Retrieves the details of a workflow task.
       *
       * @param request GetAIWorkflowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIWorkflowTaskResponse
       */
      Models::GetAIWorkflowTaskResponse getAIWorkflowTaskWithOptions(const Models::GetAIWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a workflow task.
       *
       * @param request GetAIWorkflowTaskRequest
       * @return GetAIWorkflowTaskResponse
       */
      Models::GetAIWorkflowTaskResponse getAIWorkflowTask(const Models::GetAIWorkflowTaskRequest &request);

      /**
       * @summary Obtains details of an ad insertion configuration.
       *
       * @param request GetAdInsertionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdInsertionResponse
       */
      Models::GetAdInsertionResponse getAdInsertionWithOptions(const Models::GetAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains details of an ad insertion configuration.
       *
       * @param request GetAdInsertionRequest
       * @return GetAdInsertionResponse
       */
      Models::GetAdInsertionResponse getAdInsertion(const Models::GetAdInsertionRequest &request);

      /**
       * @summary Retrieves a list of Real-time Conversational AI authentication codes and their status for a specified batch.
       *
       * @description ## [](#)Usage notes
       * - This API retrieves a list of authorization codes for a specific batch ID. You can filter the results by status and type.
       * - Pagination is supported via the `PageNo` and `PageSize` parameters.
       * - By default, the `NeedTotalCount` parameter is set to `true`, indicating that the response includes the total count of matching records.
       * - `LicenseItemId` is a required parameter that specifies the batch to query.
       *
       * @param request GetAiRtcAuthCodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiRtcAuthCodeListResponse
       */
      Models::GetAiRtcAuthCodeListResponse getAiRtcAuthCodeListWithOptions(const Models::GetAiRtcAuthCodeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Real-time Conversational AI authentication codes and their status for a specified batch.
       *
       * @description ## [](#)Usage notes
       * - This API retrieves a list of authorization codes for a specific batch ID. You can filter the results by status and type.
       * - Pagination is supported via the `PageNo` and `PageSize` parameters.
       * - By default, the `NeedTotalCount` parameter is set to `true`, indicating that the response includes the total count of matching records.
       * - `LicenseItemId` is a required parameter that specifies the batch to query.
       *
       * @param request GetAiRtcAuthCodeListRequest
       * @return GetAiRtcAuthCodeListResponse
       */
      Models::GetAiRtcAuthCodeListResponse getAiRtcAuthCodeList(const Models::GetAiRtcAuthCodeListRequest &request);

      /**
       * @summary Retrieves details for AI Real-Time Communication license batches that match specified filter criteria.
       *
       * @description ## Description
       * - Retrieve AI Real-Time Communication license batches based on filter criteria such as License Item ID, Status, and Type.
       * - The `NeedTotalCount` parameter defaults to `true`. When set to true, the response includes the total count of matching entries. To exclude the total count, set this parameter to `false`.
       * - If you do not specify any filter criteria, the operation returns the details for all license batches by default.
       *
       * @param request GetAiRtcLicenseInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiRtcLicenseInfoListResponse
       */
      Models::GetAiRtcLicenseInfoListResponse getAiRtcLicenseInfoListWithOptions(const Models::GetAiRtcLicenseInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for AI Real-Time Communication license batches that match specified filter criteria.
       *
       * @description ## Description
       * - Retrieve AI Real-Time Communication license batches based on filter criteria such as License Item ID, Status, and Type.
       * - The `NeedTotalCount` parameter defaults to `true`. When set to true, the response includes the total count of matching entries. To exclude the total count, set this parameter to `false`.
       * - If you do not specify any filter criteria, the operation returns the details for all license batches by default.
       *
       * @param request GetAiRtcLicenseInfoListRequest
       * @return GetAiRtcLicenseInfoListResponse
       */
      Models::GetAiRtcLicenseInfoListResponse getAiRtcLicenseInfoList(const Models::GetAiRtcLicenseInfoListRequest &request);

      /**
       * @summary Queries the information about a trained digital human.
       *
       * @param request GetAvatarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvatarResponse
       */
      Models::GetAvatarResponse getAvatarWithOptions(const Models::GetAvatarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a trained digital human.
       *
       * @param request GetAvatarRequest
       * @return GetAvatarResponse
       */
      Models::GetAvatarResponse getAvatar(const Models::GetAvatarRequest &request);

      /**
       * @summary Queries the information about a digital human training job.
       *
       * @param request GetAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvatarTrainingJobResponse
       */
      Models::GetAvatarTrainingJobResponse getAvatarTrainingJobWithOptions(const Models::GetAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a digital human training job.
       *
       * @param request GetAvatarTrainingJobRequest
       * @return GetAvatarTrainingJobResponse
       */
      Models::GetAvatarTrainingJobResponse getAvatarTrainingJob(const Models::GetAvatarTrainingJobRequest &request);

      /**
       * @summary Obtain detailed information about batch Intelligent One-Click Video Editing jobs, including the input parameters, job status, and the IDs and URLs of the generated media assets. This API supports querying job data from the past year only.
       *
       * @param request GetBatchMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchMediaProducingJobResponse
       */
      Models::GetBatchMediaProducingJobResponse getBatchMediaProducingJobWithOptions(const Models::GetBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain detailed information about batch Intelligent One-Click Video Editing jobs, including the input parameters, job status, and the IDs and URLs of the generated media assets. This API supports querying job data from the past year only.
       *
       * @param request GetBatchMediaProducingJobRequest
       * @return GetBatchMediaProducingJobResponse
       */
      Models::GetBatchMediaProducingJobResponse getBatchMediaProducingJob(const Models::GetBatchMediaProducingJobRequest &request);

      /**
       * @summary Queries the information about a category and its subcategories.
       *
       * @description Query the information about a category and its subcategories based on the category ID and category type.
       *
       * @param request GetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategoriesWithOptions(const Models::GetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a category and its subcategories.
       *
       * @description Query the information about a category and its subcategories based on the category ID and category type.
       *
       * @param request GetCategoriesRequest
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategories(const Models::GetCategoriesRequest &request);

      /**
       * @summary Gets information about a channel in MediaWeaver.
       *
       * @param request GetChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChannelResponse
       */
      Models::GetChannelResponse getChannelWithOptions(const Models::GetChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about a channel in MediaWeaver.
       *
       * @param request GetChannelRequest
       * @return GetChannelResponse
       */
      Models::GetChannelResponse getChannel(const Models::GetChannelRequest &request);

      /**
       * @summary Retrieves the configuration for Intelligent Content Analysis.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContentAnalyzeConfigResponse
       */
      Models::GetContentAnalyzeConfigResponse getContentAnalyzeConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration for Intelligent Content Analysis.
       *
       * @return GetContentAnalyzeConfigResponse
       */
      Models::GetContentAnalyzeConfigResponse getContentAnalyzeConfig();

      /**
       * @summary Gets details of a custom media processing template.
       *
       * @description This operation gets the details of a custom template by its ID or the details of a default template. If you provide a `TemplateId`, the operation ignores other parameters and returns the details for that template. If you omit `TemplateId`, you must specify the `Type` parameter to get the corresponding default template.
       * Template type (`Type`):
       * 1. 1: transcoding template
       * 2. 2: snapshot template
       * 3. 3: Animated GIF template
       * 4. 4: Image watermark template
       * 5. 5: Text watermark template
       * 6. 6: Subtitle template
       * 7. 7: AI content moderation template
       * 8. 8: AI smart cover template
       * 9. 9: AI smart erase template
       * Transcoding template subtype (`Subtype`):
       * 1. 1: Normal (Normal)
       * 2. 2: Audio transcoding (AudioTranscode)
       * 3. 3: remuxing (Remux)
       * 4. 4: Narrowband HD 1.0 (NarrowBandV1)
       * 5. 5: Narrowband HD 2.0 (NarrowBandV2)
       * Snapshot template subtype (`Subtype`):
       * 1. 1: Static screenshot (Normal)
       * 2. 2: sprite (Sprite)
       * 3. 3: WebVTT screenshot (WebVtt)
       * AI content moderation template subtype (`Subtype`):
       * 1. 1: Video moderation (Video)
       * 2. 2: Audio moderation (Audio)
       * 3. 3: Image moderation (Image)
       * AI smart erase template subtype (`Subtype`):
       * 1. 1: Logo removal (VideoDelogo)
       * 2. 2: Subtitle removal (VideoDetext)
       *
       * @param request GetCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplateWithOptions(const Models::GetCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets details of a custom media processing template.
       *
       * @description This operation gets the details of a custom template by its ID or the details of a default template. If you provide a `TemplateId`, the operation ignores other parameters and returns the details for that template. If you omit `TemplateId`, you must specify the `Type` parameter to get the corresponding default template.
       * Template type (`Type`):
       * 1. 1: transcoding template
       * 2. 2: snapshot template
       * 3. 3: Animated GIF template
       * 4. 4: Image watermark template
       * 5. 5: Text watermark template
       * 6. 6: Subtitle template
       * 7. 7: AI content moderation template
       * 8. 8: AI smart cover template
       * 9. 9: AI smart erase template
       * Transcoding template subtype (`Subtype`):
       * 1. 1: Normal (Normal)
       * 2. 2: Audio transcoding (AudioTranscode)
       * 3. 3: remuxing (Remux)
       * 4. 4: Narrowband HD 1.0 (NarrowBandV1)
       * 5. 5: Narrowband HD 2.0 (NarrowBandV2)
       * Snapshot template subtype (`Subtype`):
       * 1. 1: Static screenshot (Normal)
       * 2. 2: sprite (Sprite)
       * 3. 3: WebVTT screenshot (WebVtt)
       * AI content moderation template subtype (`Subtype`):
       * 1. 1: Video moderation (Video)
       * 2. 2: Audio moderation (Audio)
       * 3. 3: Image moderation (Image)
       * AI smart erase template subtype (`Subtype`):
       * 1. 1: Logo removal (VideoDelogo)
       * 2. 2: Subtitle removal (VideoDetext)
       *
       * @param request GetCustomTemplateRequest
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplate(const Models::GetCustomTemplateRequest &request);

      /**
       * @summary Queries the information about a personalized human voice.
       *
       * @param request GetCustomizedVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomizedVoiceResponse
       */
      Models::GetCustomizedVoiceResponse getCustomizedVoiceWithOptions(const Models::GetCustomizedVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a personalized human voice.
       *
       * @param request GetCustomizedVoiceRequest
       * @return GetCustomizedVoiceResponse
       */
      Models::GetCustomizedVoiceResponse getCustomizedVoice(const Models::GetCustomizedVoiceRequest &request);

      /**
       * @summary Queries the information about a human voice cloning job.
       *
       * @param request GetCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomizedVoiceJobResponse
       */
      Models::GetCustomizedVoiceJobResponse getCustomizedVoiceJobWithOptions(const Models::GetCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a human voice cloning job.
       *
       * @param request GetCustomizedVoiceJobRequest
       * @return GetCustomizedVoiceJobResponse
       */
      Models::GetCustomizedVoiceJobResponse getCustomizedVoiceJob(const Models::GetCustomizedVoiceJobRequest &request);

      /**
       * @summary This topic describes the API request parameters and sample for obtaining the default storage configuration.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultStorageLocationResponse
       */
      Models::GetDefaultStorageLocationResponse getDefaultStorageLocationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the API request parameters and sample for obtaining the default storage configuration.
       *
       * @return GetDefaultStorageLocationResponse
       */
      Models::GetDefaultStorageLocationResponse getDefaultStorageLocation();

      /**
       * @summary Queries the text to be read and sample audio for training a personalized human voice.
       *
       * @param request GetDemonstrationForCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDemonstrationForCustomizedVoiceJobResponse
       */
      Models::GetDemonstrationForCustomizedVoiceJobResponse getDemonstrationForCustomizedVoiceJobWithOptions(const Models::GetDemonstrationForCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the text to be read and sample audio for training a personalized human voice.
       *
       * @param request GetDemonstrationForCustomizedVoiceJobRequest
       * @return GetDemonstrationForCustomizedVoiceJobResponse
       */
      Models::GetDemonstrationForCustomizedVoiceJobResponse getDemonstrationForCustomizedVoiceJob(const Models::GetDemonstrationForCustomizedVoiceJobRequest &request);

      /**
       * @summary Queries the information about an image animation job.
       *
       * @param request GetDynamicImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDynamicImageJobResponse
       */
      Models::GetDynamicImageJobResponse getDynamicImageJobWithOptions(const Models::GetDynamicImageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an image animation job.
       *
       * @param request GetDynamicImageJobRequest
       * @return GetDynamicImageJobResponse
       */
      Models::GetDynamicImageJobResponse getDynamicImageJob(const Models::GetDynamicImageJobRequest &request);

      /**
       * @summary Queries the information about an online editing project.
       *
       * @param request GetEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectResponse
       */
      Models::GetEditingProjectResponse getEditingProjectWithOptions(const Models::GetEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an online editing project.
       *
       * @param request GetEditingProjectRequest
       * @return GetEditingProjectResponse
       */
      Models::GetEditingProjectResponse getEditingProject(const Models::GetEditingProjectRequest &request);

      /**
       * @summary Retrieve all media assets bound to the current editing project.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterialsWithOptions(const Models::GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve all media assets bound to the current editing project.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterials(const Models::GetEditingProjectMaterialsRequest &request);

      /**
       * @summary Queries event callback configurations.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventCallbackResponse
       */
      Models::GetEventCallbackResponse getEventCallbackWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event callback configurations.
       *
       * @return GetEventCallbackResponse
       */
      Models::GetEventCallbackResponse getEventCallback();

      /**
       * @summary Queries the information about a specified hotword library based on the ID.
       *
       * @description ##
       * Retrieve details of a specified hotword library based on the ID, including the library name, description, and content and attributes of all hotwords in it.
       *
       * @param request GetHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotwordLibraryResponse
       */
      Models::GetHotwordLibraryResponse getHotwordLibraryWithOptions(const Models::GetHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified hotword library based on the ID.
       *
       * @description ##
       * Retrieve details of a specified hotword library based on the ID, including the library name, description, and content and attributes of all hotwords in it.
       *
       * @param request GetHotwordLibraryRequest
       * @return GetHotwordLibraryResponse
       */
      Models::GetHotwordLibraryResponse getHotwordLibrary(const Models::GetHotwordLibraryRequest &request);

      /**
       * @summary Obtain IPC device information.
       *
       * @param request GetIpcDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpcDeviceInfoResponse
       */
      Models::GetIpcDeviceInfoResponse getIpcDeviceInfoWithOptions(const Models::GetIpcDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain IPC device information.
       *
       * @param request GetIpcDeviceInfoRequest
       * @return GetIpcDeviceInfoResponse
       */
      Models::GetIpcDeviceInfoResponse getIpcDeviceInfo(const Models::GetIpcDeviceInfoRequest &request);

      /**
       * @summary Queries the index file of a live stream. The index file is used to preview an editing project in the console.
       *
       * @param request GetLiveEditingIndexFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveEditingIndexFileResponse
       */
      Models::GetLiveEditingIndexFileResponse getLiveEditingIndexFileWithOptions(const Models::GetLiveEditingIndexFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the index file of a live stream. The index file is used to preview an editing project in the console.
       *
       * @param request GetLiveEditingIndexFileRequest
       * @return GetLiveEditingIndexFileResponse
       */
      Models::GetLiveEditingIndexFileResponse getLiveEditingIndexFile(const Models::GetLiveEditingIndexFileRequest &request);

      /**
       * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. Query only live editing jobs created within the past year.
       *
       * @param request GetLiveEditingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveEditingJobResponse
       */
      Models::GetLiveEditingJobResponse getLiveEditingJobWithOptions(const Models::GetLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. Query only live editing jobs created within the past year.
       *
       * @param request GetLiveEditingJobRequest
       * @return GetLiveEditingJobResponse
       */
      Models::GetLiveEditingJobResponse getLiveEditingJob(const Models::GetLiveEditingJobRequest &request);

      /**
       * @summary Gets details about a live package channel.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query the details of a live package channel, including the creation time, description, ingest endpoint, protocol, number of segments, and segment duration.
       *
       * @param request GetLivePackageChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivePackageChannelResponse
       */
      Models::GetLivePackageChannelResponse getLivePackageChannelWithOptions(const Models::GetLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets details about a live package channel.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query the details of a live package channel, including the creation time, description, ingest endpoint, protocol, number of segments, and segment duration.
       *
       * @param request GetLivePackageChannelRequest
       * @return GetLivePackageChannelResponse
       */
      Models::GetLivePackageChannelResponse getLivePackageChannel(const Models::GetLivePackageChannelRequest &request);

      /**
       * @summary Gets details about a live package channel group by name.
       *
       * @description ## [](#)Usage notes
       * Gets details about a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
       *
       * @param request GetLivePackageChannelGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivePackageChannelGroupResponse
       */
      Models::GetLivePackageChannelGroupResponse getLivePackageChannelGroupWithOptions(const Models::GetLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets details about a live package channel group by name.
       *
       * @description ## [](#)Usage notes
       * Gets details about a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
       *
       * @param request GetLivePackageChannelGroupRequest
       * @return GetLivePackageChannelGroupResponse
       */
      Models::GetLivePackageChannelGroupResponse getLivePackageChannelGroup(const Models::GetLivePackageChannelGroupRequest &request);

      /**
       * @summary Query the real-time stream packaging origin configuration details of a specified channel.
       *
       * @description ## Request Description
       *
       * @param request GetLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivePackageOriginEndpointResponse
       */
      Models::GetLivePackageOriginEndpointResponse getLivePackageOriginEndpointWithOptions(const Models::GetLivePackageOriginEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the real-time stream packaging origin configuration details of a specified channel.
       *
       * @description ## Request Description
       *
       * @param request GetLivePackageOriginEndpointRequest
       * @return GetLivePackageOriginEndpointResponse
       */
      Models::GetLivePackageOriginEndpointResponse getLivePackageOriginEndpoint(const Models::GetLivePackageOriginEndpointRequest &request);

      /**
       * @summary Queries the information about a live stream recording job.
       *
       * @param request GetLiveRecordJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveRecordJobResponse
       */
      Models::GetLiveRecordJobResponse getLiveRecordJobWithOptions(const Models::GetLiveRecordJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a live stream recording job.
       *
       * @param request GetLiveRecordJobRequest
       * @return GetLiveRecordJobResponse
       */
      Models::GetLiveRecordJobResponse getLiveRecordJob(const Models::GetLiveRecordJobRequest &request);

      /**
       * @summary Queries the information about a live stream recording template or a snapshot of the template.
       *
       * @param request GetLiveRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveRecordTemplateResponse
       */
      Models::GetLiveRecordTemplateResponse getLiveRecordTemplateWithOptions(const Models::GetLiveRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a live stream recording template or a snapshot of the template.
       *
       * @param request GetLiveRecordTemplateRequest
       * @return GetLiveRecordTemplateResponse
       */
      Models::GetLiveRecordTemplateResponse getLiveRecordTemplate(const Models::GetLiveRecordTemplateRequest &request);

      /**
       * @summary Queries the information a live stream snapshot job.
       *
       * @param request GetLiveSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveSnapshotJobResponse
       */
      Models::GetLiveSnapshotJobResponse getLiveSnapshotJobWithOptions(const Models::GetLiveSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information a live stream snapshot job.
       *
       * @param request GetLiveSnapshotJobRequest
       * @return GetLiveSnapshotJobResponse
       */
      Models::GetLiveSnapshotJobResponse getLiveSnapshotJob(const Models::GetLiveSnapshotJobRequest &request);

      /**
       * @summary Queries the information about a live stream snapshot template.
       *
       * @param request GetLiveSnapshotTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveSnapshotTemplateResponse
       */
      Models::GetLiveSnapshotTemplateResponse getLiveSnapshotTemplateWithOptions(const Models::GetLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a live stream snapshot template.
       *
       * @param request GetLiveSnapshotTemplateRequest
       * @return GetLiveSnapshotTemplateResponse
       */
      Models::GetLiveSnapshotTemplateResponse getLiveSnapshotTemplate(const Models::GetLiveSnapshotTemplateRequest &request);

      /**
       * @summary Queries the information about a live stream transcoding job.
       *
       * @param request GetLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveTranscodeJobResponse
       */
      Models::GetLiveTranscodeJobResponse getLiveTranscodeJobWithOptions(const Models::GetLiveTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a live stream transcoding job.
       *
       * @param request GetLiveTranscodeJobRequest
       * @return GetLiveTranscodeJobResponse
       */
      Models::GetLiveTranscodeJobResponse getLiveTranscodeJob(const Models::GetLiveTranscodeJobRequest &request);

      /**
       * @summary Queries the information a live stream transcoding template.
       *
       * @param request GetLiveTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveTranscodeTemplateResponse
       */
      Models::GetLiveTranscodeTemplateResponse getLiveTranscodeTemplateWithOptions(const Models::GetLiveTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information a live stream transcoding template.
       *
       * @param request GetLiveTranscodeTemplateRequest
       * @return GetLiveTranscodeTemplateResponse
       */
      Models::GetLiveTranscodeTemplateResponse getLiveTranscodeTemplate(const Models::GetLiveTranscodeTemplateRequest &request);

      /**
       * @summary Retrieves all regions where MediaConnect is available.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectAvailableRegionResponse
       */
      Models::GetMediaConnectAvailableRegionResponse getMediaConnectAvailableRegionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all regions where MediaConnect is available.
       *
       * @return GetMediaConnectAvailableRegionResponse
       */
      Models::GetMediaConnectAvailableRegionResponse getMediaConnectAvailableRegion();

      /**
       * @summary Retrieves the details of a MediaConnect Flow instance.
       *
       * @description - This operation returns an error if the specified `FlowId` does not exist.
       * - The `StartTime` in the response is valid only when the flow status is `online`.
       *
       * @param request GetMediaConnectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowResponse
       */
      Models::GetMediaConnectFlowResponse getMediaConnectFlowWithOptions(const Models::GetMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a MediaConnect Flow instance.
       *
       * @description - This operation returns an error if the specified `FlowId` does not exist.
       * - The `StartTime` in the response is valid only when the flow status is `online`.
       *
       * @param request GetMediaConnectFlowRequest
       * @return GetMediaConnectFlowResponse
       */
      Models::GetMediaConnectFlowResponse getMediaConnectFlow(const Models::GetMediaConnectFlowRequest &request);

      /**
       * @summary Retrieves the names of all outputs for a MediaConnect flow.
       *
       * @param request GetMediaConnectFlowAllOutputNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowAllOutputNameResponse
       */
      Models::GetMediaConnectFlowAllOutputNameResponse getMediaConnectFlowAllOutputNameWithOptions(const Models::GetMediaConnectFlowAllOutputNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the names of all outputs for a MediaConnect flow.
       *
       * @param request GetMediaConnectFlowAllOutputNameRequest
       * @return GetMediaConnectFlowAllOutputNameResponse
       */
      Models::GetMediaConnectFlowAllOutputNameResponse getMediaConnectFlowAllOutputName(const Models::GetMediaConnectFlowAllOutputNameRequest &request);

      /**
       * @summary Retrieves the input information of a MediaConnect instance.
       *
       * @description - If the specified Flow instance ID does not exist, the API returns an error.
       *
       * @param request GetMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowInputResponse
       */
      Models::GetMediaConnectFlowInputResponse getMediaConnectFlowInputWithOptions(const Models::GetMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the input information of a MediaConnect instance.
       *
       * @description - If the specified Flow instance ID does not exist, the API returns an error.
       *
       * @param request GetMediaConnectFlowInputRequest
       * @return GetMediaConnectFlowInputResponse
       */
      Models::GetMediaConnectFlowInputResponse getMediaConnectFlowInput(const Models::GetMediaConnectFlowInputRequest &request);

      /**
       * @summary Retrieve detailed information of a specific output based on outputName
       *
       * @description - When the provided Flow instance ID does not exist, the interface will return an error.
       *
       * @param request GetMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowOutputResponse
       */
      Models::GetMediaConnectFlowOutputResponse getMediaConnectFlowOutputWithOptions(const Models::GetMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve detailed information of a specific output based on outputName
       *
       * @description - When the provided Flow instance ID does not exist, the interface will return an error.
       *
       * @param request GetMediaConnectFlowOutputRequest
       * @return GetMediaConnectFlowOutputResponse
       */
      Models::GetMediaConnectFlowOutputResponse getMediaConnectFlowOutput(const Models::GetMediaConnectFlowOutputRequest &request);

      /**
       * @summary MediaConvert task details
       *
       * @param request GetMediaConvertJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConvertJobResponse
       */
      Models::GetMediaConvertJobResponse getMediaConvertJobWithOptions(const Models::GetMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary MediaConvert task details
       *
       * @param request GetMediaConvertJobRequest
       * @return GetMediaConvertJobResponse
       */
      Models::GetMediaConvertJobResponse getMediaConvertJob(const Models::GetMediaConvertJobRequest &request);

      /**
       * @summary Retrieves media asset information using an Intelligent Media Services (IMS) `mediaId` or an `InputURL`.
       *
       * @description `MediaId` takes precedence. If `MediaId` is empty, `InputURL` must not be null.
       *
       * @param request GetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaInfoResponse
       */
      Models::GetMediaInfoResponse getMediaInfoWithOptions(const Models::GetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves media asset information using an Intelligent Media Services (IMS) `mediaId` or an `InputURL`.
       *
       * @description `MediaId` takes precedence. If `MediaId` is empty, `InputURL` must not be null.
       *
       * @param request GetMediaInfoRequest
       * @return GetMediaInfoResponse
       */
      Models::GetMediaInfoResponse getMediaInfo(const Models::GetMediaInfoRequest &request);

      /**
       * @summary Queries the information about a media information analysis job.
       *
       * @param request GetMediaInfoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaInfoJobResponse
       */
      Models::GetMediaInfoJobResponse getMediaInfoJobWithOptions(const Models::GetMediaInfoJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a media information analysis job.
       *
       * @param request GetMediaInfoJobRequest
       * @return GetMediaInfoJobResponse
       */
      Models::GetMediaInfoJobResponse getMediaInfoJob(const Models::GetMediaInfoJobRequest &request);

      /**
       * @summary Queries a MediaLive channel.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetMediaLiveChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaLiveChannelResponse
       */
      Models::GetMediaLiveChannelResponse getMediaLiveChannelWithOptions(const Models::GetMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a MediaLive channel.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetMediaLiveChannelRequest
       * @return GetMediaLiveChannelResponse
       */
      Models::GetMediaLiveChannelResponse getMediaLiveChannel(const Models::GetMediaLiveChannelRequest &request);

      /**
       * @summary Query the details of a media live input.
       *
       * @description - Query the details of a media live input.
       * ## Queries per second (QPS) limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request GetMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaLiveInputResponse
       */
      Models::GetMediaLiveInputResponse getMediaLiveInputWithOptions(const Models::GetMediaLiveInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a media live input.
       *
       * @description - Query the details of a media live input.
       * ## Queries per second (QPS) limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request GetMediaLiveInputRequest
       * @return GetMediaLiveInputResponse
       */
      Models::GetMediaLiveInputResponse getMediaLiveInput(const Models::GetMediaLiveInputRequest &request);

      /**
       * @summary Gets details about a security group in MediaLive.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetMediaLiveInputSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaLiveInputSecurityGroupResponse
       */
      Models::GetMediaLiveInputSecurityGroupResponse getMediaLiveInputSecurityGroupWithOptions(const Models::GetMediaLiveInputSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets details about a security group in MediaLive.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetMediaLiveInputSecurityGroupRequest
       * @return GetMediaLiveInputSecurityGroupResponse
       */
      Models::GetMediaLiveInputSecurityGroupResponse getMediaLiveInputSecurityGroup(const Models::GetMediaLiveInputSecurityGroupRequest &request);

      /**
       * @summary Queries the information about marks based on mark IDs.
       *
       * @param request GetMediaMarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaMarksResponse
       */
      Models::GetMediaMarksResponse getMediaMarksWithOptions(const Models::GetMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about marks based on mark IDs.
       *
       * @param request GetMediaMarksRequest
       * @return GetMediaMarksResponse
       */
      Models::GetMediaMarksResponse getMediaMarks(const Models::GetMediaMarksRequest &request);

      /**
       * @summary Retrieves details for an editing and composition job, such as its task status, timeline, template, and data.
       *
       * @description ### Limitations
       * This API can only retrieve editing job data from the past year.
       *
       * @param request GetMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaProducingJobResponse
       */
      Models::GetMediaProducingJobResponse getMediaProducingJobWithOptions(const Models::GetMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for an editing and composition job, such as its task status, timeline, template, and data.
       *
       * @description ### Limitations
       * This API can only retrieve editing job data from the past year.
       *
       * @param request GetMediaProducingJobRequest
       * @return GetMediaProducingJobResponse
       */
      Models::GetMediaProducingJobResponse getMediaProducingJob(const Models::GetMediaProducingJobRequest &request);

      /**
       * @summary Queries the information about a packaging job.
       *
       * @param request GetPackageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPackageJobResponse
       */
      Models::GetPackageJobResponse getPackageJobWithOptions(const Models::GetPackageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a packaging job.
       *
       * @param request GetPackageJobRequest
       * @return GetPackageJobResponse
       */
      Models::GetPackageJobResponse getPackageJob(const Models::GetPackageJobRequest &request);

      /**
       * @summary Queries the information about an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request GetPipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipelineWithOptions(const Models::GetPipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request GetPipelineRequest
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipeline(const Models::GetPipelineRequest &request);

      /**
       * @summary This API retrieves the playback URL for a media file (video or audio) using a given audio/video ID. Use this URL for audio/video playback after integrating the Alibaba Cloud Player SDK (for URL-based playback) or a third-party player.
       *
       * @param request GetPlayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfoWithOptions(const Models::GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API retrieves the playback URL for a media file (video or audio) using a given audio/video ID. Use this URL for audio/video playback after integrating the Alibaba Cloud Player SDK (for URL-based playback) or a third-party player.
       *
       * @param request GetPlayInfoRequest
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfo(const Models::GetPlayInfoRequest &request);

      /**
       * @summary Queries a program.
       *
       * @param request GetProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProgramResponse
       */
      Models::GetProgramResponse getProgramWithOptions(const Models::GetProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a program.
       *
       * @param request GetProgramRequest
       * @return GetProgramResponse
       */
      Models::GetProgramResponse getProgram(const Models::GetProgramRequest &request);

      /**
       * @summary Queries the information about a project export task.
       *
       * @param request GetProjectExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectExportJobResponse
       */
      Models::GetProjectExportJobResponse getProjectExportJobWithOptions(const Models::GetProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a project export task.
       *
       * @param request GetProjectExportJobRequest
       * @return GetProjectExportJobResponse
       */
      Models::GetProjectExportJobResponse getProjectExportJob(const Models::GetProjectExportJobRequest &request);

      /**
       * @summary Obtain and return media asset information based on the mediaId of an ICE public copyright media asset. The URL returned by the API is a preview or audition address for the copyright media asset. The official material will be used during synthesis.
       *
       * @param request GetPublicMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicMediaInfoResponse
       */
      Models::GetPublicMediaInfoResponse getPublicMediaInfoWithOptions(const Models::GetPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain and return media asset information based on the mediaId of an ICE public copyright media asset. The URL returned by the API is a preview or audition address for the copyright media asset. The official material will be used during synthesis.
       *
       * @param request GetPublicMediaInfoRequest
       * @return GetPublicMediaInfoResponse
       */
      Models::GetPublicMediaInfoResponse getPublicMediaInfo(const Models::GetPublicMediaInfoRequest &request);

      /**
       * @summary Retrieves the information and execution result for a smart task by task ID. This API only supports querying editing tasks from the past year.
       *
       * @param request GetSmartHandleJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartHandleJobResponse
       */
      Models::GetSmartHandleJobResponse getSmartHandleJobWithOptions(const Models::GetSmartHandleJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information and execution result for a smart task by task ID. This API only supports querying editing tasks from the past year.
       *
       * @param request GetSmartHandleJobRequest
       * @return GetSmartHandleJobResponse
       */
      Models::GetSmartHandleJobResponse getSmartHandleJob(const Models::GetSmartHandleJobRequest &request);

      /**
       * @summary Queries the information about a snapshot job.
       *
       * @param request GetSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSnapshotJobResponse
       */
      Models::GetSnapshotJobResponse getSnapshotJobWithOptions(const Models::GetSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a snapshot job.
       *
       * @param request GetSnapshotJobRequest
       * @return GetSnapshotJobResponse
       */
      Models::GetSnapshotJobResponse getSnapshotJob(const Models::GetSnapshotJobRequest &request);

      /**
       * @summary Queries the accessible URLs of the output images of a snapshot job.
       *
       * @param request GetSnapshotUrlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSnapshotUrlsResponse
       */
      Models::GetSnapshotUrlsResponse getSnapshotUrlsWithOptions(const Models::GetSnapshotUrlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accessible URLs of the output images of a snapshot job.
       *
       * @param request GetSnapshotUrlsRequest
       * @return GetSnapshotUrlsResponse
       */
      Models::GetSnapshotUrlsResponse getSnapshotUrls(const Models::GetSnapshotUrlsRequest &request);

      /**
       * @summary Queries a source.
       *
       * @param request GetSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSourceWithOptions(const Models::GetSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a source.
       *
       * @param request GetSourceRequest
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSource(const Models::GetSourceRequest &request);

      /**
       * @summary Queries a source location.
       *
       * @param request GetSourceLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceLocationResponse
       */
      Models::GetSourceLocationResponse getSourceLocationWithOptions(const Models::GetSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a source location.
       *
       * @param request GetSourceLocationRequest
       * @return GetSourceLocationResponse
       */
      Models::GetSourceLocationResponse getSourceLocation(const Models::GetSourceLocationRequest &request);

      /**
       * @summary Obtains storage configurations.
       *
       * @param request GetStorageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageListResponse
       */
      Models::GetStorageListResponse getStorageListWithOptions(const Models::GetStorageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains storage configurations.
       *
       * @param request GetStorageListRequest
       * @return GetStorageListResponse
       */
      Models::GetStorageListResponse getStorageList(const Models::GetStorageListRequest &request);

      /**
       * @summary Retrieves tags of a live stream media asset.
       *
       * @param request GetStreamTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStreamTagListResponse
       */
      Models::GetStreamTagListResponse getStreamTagListWithOptions(const Models::GetStreamTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves tags of a live stream media asset.
       *
       * @param request GetStreamTagListRequest
       * @return GetStreamTagListResponse
       */
      Models::GetStreamTagListResponse getStreamTagList(const Models::GetStreamTagListRequest &request);

      /**
       * @summary Queries the information about a system template.
       *
       * @param request GetSystemTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSystemTemplateResponse
       */
      Models::GetSystemTemplateResponse getSystemTemplateWithOptions(const Models::GetSystemTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a system template.
       *
       * @param request GetSystemTemplateRequest
       * @return GetSystemTemplateResponse
       */
      Models::GetSystemTemplateResponse getSystemTemplate(const Models::GetSystemTemplateRequest &request);

      /**
       * @summary Queries the information about a template based on the template ID. Query the information about an advanced template if the template is in the Available state.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a template based on the template ID. Query the information about an advanced template if the template is in the Available state.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const Models::GetTemplateRequest &request);

      /**
       * @summary Queries the URLs of materials associated with an advanced template for use by the advanced template editor. The URLs expire in 30 minutes. FileList is an array of materials that you want to query. If you do not specify this parameter, the URLs of all materials are returned. A maximum of 400 URLs can be returned.
       *
       * @param request GetTemplateMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateMaterialsResponse
       */
      Models::GetTemplateMaterialsResponse getTemplateMaterialsWithOptions(const Models::GetTemplateMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URLs of materials associated with an advanced template for use by the advanced template editor. The URLs expire in 30 minutes. FileList is an array of materials that you want to query. If you do not specify this parameter, the URLs of all materials are returned. A maximum of 400 URLs can be returned.
       *
       * @param request GetTemplateMaterialsRequest
       * @return GetTemplateMaterialsResponse
       */
      Models::GetTemplateMaterialsResponse getTemplateMaterials(const Models::GetTemplateMaterialsRequest &request);

      /**
       * @summary Obtain the replaceable material parameter information of a template, including the parameter name, default material value, and material thumbnail. Currently, only advanced templates are supported.
       *
       * @param request GetTemplateParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateParamsResponse
       */
      Models::GetTemplateParamsResponse getTemplateParamsWithOptions(const Models::GetTemplateParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the replaceable material parameter information of a template, including the parameter name, default material value, and material thumbnail. Currently, only advanced templates are supported.
       *
       * @param request GetTemplateParamsRequest
       * @return GetTemplateParamsResponse
       */
      Models::GetTemplateParamsResponse getTemplateParams(const Models::GetTemplateParamsRequest &request);

      /**
       * @summary Queries the details of a single transcoding job.
       *
       * @description <props="intl">
       * This API is deprecated. Call [GetMediaConvertJob – Query media transcoding jobs](https://help.aliyun.com/document_detail/2867675.html) instead.
       *
       * @param request GetTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeJobResponse
       */
      Models::GetTranscodeJobResponse getTranscodeJobWithOptions(const Models::GetTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single transcoding job.
       *
       * @description <props="intl">
       * This API is deprecated. Call [GetMediaConvertJob – Query media transcoding jobs](https://help.aliyun.com/document_detail/2867675.html) instead.
       *
       * @param request GetTranscodeJobRequest
       * @return GetTranscodeJobResponse
       */
      Models::GetTranscodeJobResponse getTranscodeJob(const Models::GetTranscodeJobRequest &request);

      /**
       * @summary Queries the information about URL-based upload jobs.
       *
       * @description Query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
       * If an upload job fails, you can view the error code and error message. If an upload job is successful, you can obtain the video ID.
       *
       * @param request GetUrlUploadInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUrlUploadInfosResponse
       */
      Models::GetUrlUploadInfosResponse getUrlUploadInfosWithOptions(const Models::GetUrlUploadInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about URL-based upload jobs.
       *
       * @description Query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
       * If an upload job fails, you can view the error code and error message. If an upload job is successful, you can obtain the video ID.
       *
       * @param request GetUrlUploadInfosRequest
       * @return GetUrlUploadInfosResponse
       */
      Models::GetUrlUploadInfosResponse getUrlUploadInfos(const Models::GetUrlUploadInfosRequest &request);

      /**
       * @summary Gets information about video and audio files.
       *
       * @description Get information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
       *
       * @param request GetVideoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoListWithOptions(const Models::GetVideoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about video and audio files.
       *
       * @description Get information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
       *
       * @param request GetVideoListRequest
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoList(const Models::GetVideoListRequest &request);

      /**
       * @summary Queries a VOD packaging asset.
       *
       * @param request GetVodPackagingAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVodPackagingAssetResponse
       */
      Models::GetVodPackagingAssetResponse getVodPackagingAssetWithOptions(const Models::GetVodPackagingAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a VOD packaging asset.
       *
       * @param request GetVodPackagingAssetRequest
       * @return GetVodPackagingAssetResponse
       */
      Models::GetVodPackagingAssetResponse getVodPackagingAsset(const Models::GetVodPackagingAssetRequest &request);

      /**
       * @summary Queries a packaging configuration.
       *
       * @param request GetVodPackagingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVodPackagingConfigurationResponse
       */
      Models::GetVodPackagingConfigurationResponse getVodPackagingConfigurationWithOptions(const Models::GetVodPackagingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a packaging configuration.
       *
       * @param request GetVodPackagingConfigurationRequest
       * @return GetVodPackagingConfigurationResponse
       */
      Models::GetVodPackagingConfigurationResponse getVodPackagingConfiguration(const Models::GetVodPackagingConfigurationRequest &request);

      /**
       * @summary Queries a VOD packaging group.
       *
       * @param request GetVodPackagingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVodPackagingGroupResponse
       */
      Models::GetVodPackagingGroupResponse getVodPackagingGroupWithOptions(const Models::GetVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a VOD packaging group.
       *
       * @param request GetVodPackagingGroupRequest
       * @return GetVodPackagingGroupResponse
       */
      Models::GetVodPackagingGroupResponse getVodPackagingGroup(const Models::GetVodPackagingGroupRequest &request);

      /**
       * @summary Queries the information about a workflow task by task ID, including the workflow ID and the status and result of the task. You can query only the workflow task data of the last year.
       *
       * @param request GetWorkflowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowTaskResponse
       */
      Models::GetWorkflowTaskResponse getWorkflowTaskWithOptions(const Models::GetWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workflow task by task ID, including the workflow ID and the status and result of the task. You can query only the workflow task data of the last year.
       *
       * @param request GetWorkflowTaskRequest
       * @return GetWorkflowTaskResponse
       */
      Models::GetWorkflowTaskResponse getWorkflowTask(const Models::GetWorkflowTaskRequest &request);

      /**
       * @summary Retrieves the details of a Yike AI App job.
       *
       * @param request GetYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAIAppJobResponse
       */
      Models::GetYikeAIAppJobResponse getYikeAIAppJobWithOptions(const Models::GetYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Yike AI App job.
       *
       * @param request GetYikeAIAppJobRequest
       * @return GetYikeAIAppJobResponse
       */
      Models::GetYikeAIAppJobResponse getYikeAIAppJob(const Models::GetYikeAIAppJobRequest &request);

      /**
       * @summary Gets media asset information.
       *
       * @param request GetYikeAssetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAssetMediaInfoResponse
       */
      Models::GetYikeAssetMediaInfoResponse getYikeAssetMediaInfoWithOptions(const Models::GetYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets media asset information.
       *
       * @param request GetYikeAssetMediaInfoRequest
       * @return GetYikeAssetMediaInfoResponse
       */
      Models::GetYikeAssetMediaInfoResponse getYikeAssetMediaInfo(const Models::GetYikeAssetMediaInfoRequest &request);

      /**
       * @summary Retrieves the details of a Yike storyboard job.
       *
       * @param request GetYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeStoryboardJobResponse
       */
      Models::GetYikeStoryboardJobResponse getYikeStoryboardJobWithOptions(const Models::GetYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Yike storyboard job.
       *
       * @param request GetYikeStoryboardJobRequest
       * @return GetYikeStoryboardJobResponse
       */
      Models::GetYikeStoryboardJobResponse getYikeStoryboardJob(const Models::GetYikeStoryboardJobRequest &request);

      /**
       * @summary Gets information about a Yike sub-account.
       *
       * @param request GetYikeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeUserResponse
       */
      Models::GetYikeUserResponse getYikeUserWithOptions(const Models::GetYikeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about a Yike sub-account.
       *
       * @param request GetYikeUserRequest
       * @return GetYikeUserResponse
       */
      Models::GetYikeUserResponse getYikeUser(const Models::GetYikeUserRequest &request);

      /**
       * @summary Retrieves the credit balance for a Yike user.
       *
       * @param request GetYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeUserCreditResponse
       */
      Models::GetYikeUserCreditResponse getYikeUserCreditWithOptions(const Models::GetYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the credit balance for a Yike user.
       *
       * @param request GetYikeUserCreditRequest
       * @return GetYikeUserCreditResponse
       */
      Models::GetYikeUserCreditResponse getYikeUserCredit(const Models::GetYikeUserCreditRequest &request);

      /**
       * @summary Insert a media asset into the search library.
       *
       * @description ### Prerequisites
       * Before inserting a media asset into the search library, you must call the [CreateSearchLib](https://help.aliyun.com/document_detail/2584454.html) API to create the search library.
       *
       * @param request InsertMediaToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertMediaToSearchLibResponse
       */
      Models::InsertMediaToSearchLibResponse insertMediaToSearchLibWithOptions(const Models::InsertMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Insert a media asset into the search library.
       *
       * @description ### Prerequisites
       * Before inserting a media asset into the search library, you must call the [CreateSearchLib](https://help.aliyun.com/document_detail/2584454.html) API to create the search library.
       *
       * @param request InsertMediaToSearchLibRequest
       * @return InsertMediaToSearchLibResponse
       */
      Models::InsertMediaToSearchLibResponse insertMediaToSearchLib(const Models::InsertMediaToSearchLibRequest &request);

      /**
       * @summary Returns the session history.
       *
       * @param request ListAIAgentDialoguesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentDialoguesResponse
       */
      Models::ListAIAgentDialoguesResponse listAIAgentDialoguesWithOptions(const Models::ListAIAgentDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the session history.
       *
       * @param request ListAIAgentDialoguesRequest
       * @return ListAIAgentDialoguesResponse
       */
      Models::ListAIAgentDialoguesResponse listAIAgentDialogues(const Models::ListAIAgentDialoguesRequest &request);

      /**
       * @summary List AI agent instances. You can retrieve all instances or filter them by specified conditions.
       *
       * @description This operation lists AI agent instances. Filter results by agent ID (`AIAgentId`). Optionally, specify a time range (`StartTime` and `EndTime`), the number of results per page (`PageSize`), and the page number (`PageNumber`). The response includes each instance’s status, runtime configuration, template configuration, user-defined data, and a download link for the conversation call log.
       * >Notice: 
       * Default pagination values: PageSize is 10. PageNumber is 1.
       *
       * @param request ListAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentInstanceResponse
       */
      Models::ListAIAgentInstanceResponse listAIAgentInstanceWithOptions(const Models::ListAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List AI agent instances. You can retrieve all instances or filter them by specified conditions.
       *
       * @description This operation lists AI agent instances. Filter results by agent ID (`AIAgentId`). Optionally, specify a time range (`StartTime` and `EndTime`), the number of results per page (`PageSize`), and the page number (`PageNumber`). The response includes each instance’s status, runtime configuration, template configuration, user-defined data, and a download link for the conversation call log.
       * >Notice: 
       * Default pagination values: PageSize is 10. PageNumber is 1.
       *
       * @param request ListAIAgentInstanceRequest
       * @return ListAIAgentInstanceResponse
       */
      Models::ListAIAgentInstanceResponse listAIAgentInstance(const Models::ListAIAgentInstanceRequest &request);

      /**
       * @summary List user phone resources API.
       *
       * @description This API allows a User to query phone resources based on the number of records per page (`PageSize`) and the current page number (`PageNumber`). The Return Result includes phone numbers and their corresponding status.
       *
       * @param request ListAIAgentPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentPhoneNumberResponse
       */
      Models::ListAIAgentPhoneNumberResponse listAIAgentPhoneNumberWithOptions(const Models::ListAIAgentPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List user phone resources API.
       *
       * @description This API allows a User to query phone resources based on the number of records per page (`PageSize`) and the current page number (`PageNumber`). The Return Result includes phone numbers and their corresponding status.
       *
       * @param request ListAIAgentPhoneNumberRequest
       * @return ListAIAgentPhoneNumberResponse
       */
      Models::ListAIAgentPhoneNumberResponse listAIAgentPhoneNumber(const Models::ListAIAgentPhoneNumberRequest &request);

      /**
       * @summary Retrieves a list of AI agent voiceprints.
       *
       * @param request ListAIAgentVoiceprintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentVoiceprintsResponse
       */
      Models::ListAIAgentVoiceprintsResponse listAIAgentVoiceprintsWithOptions(const Models::ListAIAgentVoiceprintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of AI agent voiceprints.
       *
       * @param request ListAIAgentVoiceprintsRequest
       * @return ListAIAgentVoiceprintsResponse
       */
      Models::ListAIAgentVoiceprintsResponse listAIAgentVoiceprints(const Models::ListAIAgentVoiceprintsRequest &request);

      /**
       * @summary Obtains ad insertion configurations.
       *
       * @param request ListAdInsertionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAdInsertionsResponse
       */
      Models::ListAdInsertionsResponse listAdInsertionsWithOptions(const Models::ListAdInsertionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains ad insertion configurations.
       *
       * @param request ListAdInsertionsRequest
       * @return ListAdInsertionsResponse
       */
      Models::ListAdInsertionsResponse listAdInsertions(const Models::ListAdInsertionsRequest &request);

      /**
       * @summary Lists alerts received in MediaWeaver.
       *
       * @param request ListAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertsResponse
       */
      Models::ListAlertsResponse listAlertsWithOptions(const Models::ListAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists alerts received in MediaWeaver.
       *
       * @param request ListAlertsRequest
       * @return ListAlertsResponse
       */
      Models::ListAlertsResponse listAlerts(const Models::ListAlertsRequest &request);

      /**
       * @summary Queries a list of tags of media assets in the public media library.
       *
       * @param request ListAllPublicMediaTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllPublicMediaTagsResponse
       */
      Models::ListAllPublicMediaTagsResponse listAllPublicMediaTagsWithOptions(const Models::ListAllPublicMediaTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags of media assets in the public media library.
       *
       * @param request ListAllPublicMediaTagsRequest
       * @return ListAllPublicMediaTagsResponse
       */
      Models::ListAllPublicMediaTagsResponse listAllPublicMediaTags(const Models::ListAllPublicMediaTagsRequest &request);

      /**
       * @summary Queries a list of digital human training jobs.
       *
       * @param request ListAvatarTrainingJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvatarTrainingJobsResponse
       */
      Models::ListAvatarTrainingJobsResponse listAvatarTrainingJobsWithOptions(const Models::ListAvatarTrainingJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of digital human training jobs.
       *
       * @param request ListAvatarTrainingJobsRequest
       * @return ListAvatarTrainingJobsResponse
       */
      Models::ListAvatarTrainingJobsResponse listAvatarTrainingJobs(const Models::ListAvatarTrainingJobsRequest &request);

      /**
       * @summary Queries a list of trained digital humans.
       *
       * @param request ListAvatarsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvatarsResponse
       */
      Models::ListAvatarsResponse listAvatarsWithOptions(const Models::ListAvatarsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of trained digital humans.
       *
       * @param request ListAvatarsRequest
       * @return ListAvatarsResponse
       */
      Models::ListAvatarsResponse listAvatars(const Models::ListAvatarsRequest &request);

      /**
       * @summary Queries a list of quick video production jobs based on conditions such as the job type and state.
       *
       * @param request ListBatchMediaProducingJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBatchMediaProducingJobsResponse
       */
      Models::ListBatchMediaProducingJobsResponse listBatchMediaProducingJobsWithOptions(const Models::ListBatchMediaProducingJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of quick video production jobs based on conditions such as the job type and state.
       *
       * @param request ListBatchMediaProducingJobsRequest
       * @return ListBatchMediaProducingJobsResponse
       */
      Models::ListBatchMediaProducingJobsResponse listBatchMediaProducingJobs(const Models::ListBatchMediaProducingJobsRequest &request);

      /**
       * @summary Lists alerts for resources in a MediaWeaver channel.
       *
       * @param request ListChannelAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChannelAlertsResponse
       */
      Models::ListChannelAlertsResponse listChannelAlertsWithOptions(const Models::ListChannelAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists alerts for resources in a MediaWeaver channel.
       *
       * @param request ListChannelAlertsRequest
       * @return ListChannelAlertsResponse
       */
      Models::ListChannelAlertsResponse listChannelAlerts(const Models::ListChannelAlertsRequest &request);

      /**
       * @summary Lists MediaWeaver channels.
       *
       * @param request ListChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChannelsResponse
       */
      Models::ListChannelsResponse listChannelsWithOptions(const Models::ListChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists MediaWeaver channels.
       *
       * @param request ListChannelsRequest
       * @return ListChannelsResponse
       */
      Models::ListChannelsResponse listChannels(const Models::ListChannelsRequest &request);

      /**
       * @summary Retrieves a list of user-defined Video on Demand (VOD) media processing templates.
       *
       * @param request ListCustomTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomTemplatesResponse
       */
      Models::ListCustomTemplatesResponse listCustomTemplatesWithOptions(const Models::ListCustomTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of user-defined Video on Demand (VOD) media processing templates.
       *
       * @param request ListCustomTemplatesRequest
       * @return ListCustomTemplatesResponse
       */
      Models::ListCustomTemplatesResponse listCustomTemplates(const Models::ListCustomTemplatesRequest &request);

      /**
       * @summary Queries a list of human voice cloning jobs.
       *
       * @param request ListCustomizedVoiceJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomizedVoiceJobsResponse
       */
      Models::ListCustomizedVoiceJobsResponse listCustomizedVoiceJobsWithOptions(const Models::ListCustomizedVoiceJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of human voice cloning jobs.
       *
       * @param request ListCustomizedVoiceJobsRequest
       * @return ListCustomizedVoiceJobsResponse
       */
      Models::ListCustomizedVoiceJobsResponse listCustomizedVoiceJobs(const Models::ListCustomizedVoiceJobsRequest &request);

      /**
       * @summary Queries a list of personalized human voices.
       *
       * @param request ListCustomizedVoicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomizedVoicesResponse
       */
      Models::ListCustomizedVoicesResponse listCustomizedVoicesWithOptions(const Models::ListCustomizedVoicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of personalized human voices.
       *
       * @param request ListCustomizedVoicesRequest
       * @return ListCustomizedVoicesResponse
       */
      Models::ListCustomizedVoicesResponse listCustomizedVoices(const Models::ListCustomizedVoicesRequest &request);

      /**
       * @summary Queries a list of media fingerprint libraries.
       *
       * @param request ListDNADBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDNADBResponse
       */
      Models::ListDNADBResponse listDNADBWithOptions(const Models::ListDNADBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of media fingerprint libraries.
       *
       * @param request ListDNADBRequest
       * @return ListDNADBResponse
       */
      Models::ListDNADBResponse listDNADB(const Models::ListDNADBRequest &request);

      /**
       * @summary Lists files in a media fingerprint library.
       *
       * @description Queries files in a media fingerprint library based on the library ID. The queried results can be paginated.
       *
       * @param request ListDNAFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDNAFilesResponse
       */
      Models::ListDNAFilesResponse listDNAFilesWithOptions(const Models::ListDNAFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists files in a media fingerprint library.
       *
       * @description Queries files in a media fingerprint library based on the library ID. The queried results can be paginated.
       *
       * @param request ListDNAFilesRequest
       * @return ListDNAFilesResponse
       */
      Models::ListDNAFilesResponse listDNAFiles(const Models::ListDNAFilesRequest &request);

      /**
       * @summary Queries a list of image animation jobs.
       *
       * @param request ListDynamicImageJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicImageJobsResponse
       */
      Models::ListDynamicImageJobsResponse listDynamicImageJobsWithOptions(const Models::ListDynamicImageJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of image animation jobs.
       *
       * @param request ListDynamicImageJobsRequest
       * @return ListDynamicImageJobsResponse
       */
      Models::ListDynamicImageJobsResponse listDynamicImageJobs(const Models::ListDynamicImageJobsRequest &request);

      /**
       * @summary Queries a list of projects that meet the specified conditions. You can filter projects by project creation time.
       *
       * @param request ListEditingProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEditingProjectsResponse
       */
      Models::ListEditingProjectsResponse listEditingProjectsWithOptions(const Models::ListEditingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of projects that meet the specified conditions. You can filter projects by project creation time.
       *
       * @param request ListEditingProjectsRequest
       * @return ListEditingProjectsResponse
       */
      Models::ListEditingProjectsResponse listEditingProjects(const Models::ListEditingProjectsRequest &request);

      /**
       * @summary Queries hotword libraries that meet specific search conditions.
       *
       * @description ## [](#)
       * - Get information about all hotword libraries that you created.
       * - The API supports fuzzy search by `Name`, filtering by creation time range, and pagination.
       * - By default, the results are sorted by creation time in descending order. You can set `SortBy` to change the sorting order.
       * - The maximum number of entries returned for each request is 100. Default value: 10.
       * - Use `NextToken` for pagination.
       *
       * @param request ListHotwordLibrariesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotwordLibrariesResponse
       */
      Models::ListHotwordLibrariesResponse listHotwordLibrariesWithOptions(const Models::ListHotwordLibrariesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries hotword libraries that meet specific search conditions.
       *
       * @description ## [](#)
       * - Get information about all hotword libraries that you created.
       * - The API supports fuzzy search by `Name`, filtering by creation time range, and pagination.
       * - By default, the results are sorted by creation time in descending order. You can set `SortBy` to change the sorting order.
       * - The maximum number of entries returned for each request is 100. Default value: 10.
       * - Use `NextToken` for pagination.
       *
       * @param request ListHotwordLibrariesRequest
       * @return ListHotwordLibrariesResponse
       */
      Models::ListHotwordLibrariesResponse listHotwordLibraries(const Models::ListHotwordLibrariesRequest &request);

      /**
       * @summary Queries live package channel groups by page. Fuzzy search by name or description and sorting are supported.
       *
       * @description ## [](#)Usage notes
       *
       * @param request ListLivePackageChannelGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivePackageChannelGroupsResponse
       */
      Models::ListLivePackageChannelGroupsResponse listLivePackageChannelGroupsWithOptions(const Models::ListLivePackageChannelGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries live package channel groups by page. Fuzzy search by name or description and sorting are supported.
       *
       * @description ## [](#)Usage notes
       *
       * @param request ListLivePackageChannelGroupsRequest
       * @return ListLivePackageChannelGroupsResponse
       */
      Models::ListLivePackageChannelGroupsResponse listLivePackageChannelGroups(const Models::ListLivePackageChannelGroupsRequest &request);

      /**
       * @summary Queries live package channels by channel group and keyword. Paging and sorting are supported.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query live package channels by **GroupName** and **Keyword**. Keyword is optional. You can sort the channels by creation time in ascending or descending order and paginate the results. This facilitates the management of channels and retrieval of channel information.
       * - **GroupName** is required to specify the channel group to which the channel belongs.
       * - **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
       * - **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
       * - **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
       * **RequestId** in the response is used for subsequent troubleshooting. **TotalCount** indicates the total number of channels that meet the conditions.
       *
       * @param request ListLivePackageChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivePackageChannelsResponse
       */
      Models::ListLivePackageChannelsResponse listLivePackageChannelsWithOptions(const Models::ListLivePackageChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries live package channels by channel group and keyword. Paging and sorting are supported.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query live package channels by **GroupName** and **Keyword**. Keyword is optional. You can sort the channels by creation time in ascending or descending order and paginate the results. This facilitates the management of channels and retrieval of channel information.
       * - **GroupName** is required to specify the channel group to which the channel belongs.
       * - **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
       * - **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
       * - **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
       * **RequestId** in the response is used for subsequent troubleshooting. **TotalCount** indicates the total number of channels that meet the conditions.
       *
       * @param request ListLivePackageChannelsRequest
       * @return ListLivePackageChannelsResponse
       */
      Models::ListLivePackageChannelsResponse listLivePackageChannels(const Models::ListLivePackageChannelsRequest &request);

      /**
       * @summary Queries origin endpoints by channel group and channel name. Paging and sorting are supported.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query origin endpoints associated with a live package channel. The results include detailed configurations about the origin endpoints, such as access URL, protocol, and security policies. Paging and sorting by creation time are supported.
       *
       * @param request ListLivePackageOriginEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLivePackageOriginEndpointsResponse
       */
      Models::ListLivePackageOriginEndpointsResponse listLivePackageOriginEndpointsWithOptions(const Models::ListLivePackageOriginEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries origin endpoints by channel group and channel name. Paging and sorting are supported.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query origin endpoints associated with a live package channel. The results include detailed configurations about the origin endpoints, such as access URL, protocol, and security policies. Paging and sorting by creation time are supported.
       *
       * @param request ListLivePackageOriginEndpointsRequest
       * @return ListLivePackageOriginEndpointsResponse
       */
      Models::ListLivePackageOriginEndpointsResponse listLivePackageOriginEndpoints(const Models::ListLivePackageOriginEndpointsRequest &request);

      /**
       * @summary Queries all recording index files in the specified period of time.
       *
       * @param request ListLiveRecordFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRecordFilesResponse
       */
      Models::ListLiveRecordFilesResponse listLiveRecordFilesWithOptions(const Models::ListLiveRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all recording index files in the specified period of time.
       *
       * @param request ListLiveRecordFilesRequest
       * @return ListLiveRecordFilesResponse
       */
      Models::ListLiveRecordFilesResponse listLiveRecordFiles(const Models::ListLiveRecordFilesRequest &request);

      /**
       * @summary Queries a list of live stream recording jobs by page.
       *
       * @param request ListLiveRecordJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRecordJobsResponse
       */
      Models::ListLiveRecordJobsResponse listLiveRecordJobsWithOptions(const Models::ListLiveRecordJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream recording jobs by page.
       *
       * @param request ListLiveRecordJobsRequest
       * @return ListLiveRecordJobsResponse
       */
      Models::ListLiveRecordJobsResponse listLiveRecordJobs(const Models::ListLiveRecordJobsRequest &request);

      /**
       * @summary Call `ListLiveRecordTemplates` to retrieve a list of your real-time recording templates.
       *
       * @param request ListLiveRecordTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRecordTemplatesResponse
       */
      Models::ListLiveRecordTemplatesResponse listLiveRecordTemplatesWithOptions(const Models::ListLiveRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `ListLiveRecordTemplates` to retrieve a list of your real-time recording templates.
       *
       * @param request ListLiveRecordTemplatesRequest
       * @return ListLiveRecordTemplatesResponse
       */
      Models::ListLiveRecordTemplatesResponse listLiveRecordTemplates(const Models::ListLiveRecordTemplatesRequest &request);

      /**
       * @summary Queries a list of live stream snapshot files by page.
       *
       * @param request ListLiveSnapshotFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveSnapshotFilesResponse
       */
      Models::ListLiveSnapshotFilesResponse listLiveSnapshotFilesWithOptions(const Models::ListLiveSnapshotFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream snapshot files by page.
       *
       * @param request ListLiveSnapshotFilesRequest
       * @return ListLiveSnapshotFilesResponse
       */
      Models::ListLiveSnapshotFilesResponse listLiveSnapshotFiles(const Models::ListLiveSnapshotFilesRequest &request);

      /**
       * @summary Retrieves a paginated list of live snapshot jobs.
       *
       * @param request ListLiveSnapshotJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveSnapshotJobsResponse
       */
      Models::ListLiveSnapshotJobsResponse listLiveSnapshotJobsWithOptions(const Models::ListLiveSnapshotJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of live snapshot jobs.
       *
       * @param request ListLiveSnapshotJobsRequest
       * @return ListLiveSnapshotJobsResponse
       */
      Models::ListLiveSnapshotJobsResponse listLiveSnapshotJobs(const Models::ListLiveSnapshotJobsRequest &request);

      /**
       * @summary Returns a paginated list of Live Snapshot templates.
       *
       * @param request ListLiveSnapshotTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveSnapshotTemplatesResponse
       */
      Models::ListLiveSnapshotTemplatesResponse listLiveSnapshotTemplatesWithOptions(const Models::ListLiveSnapshotTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of Live Snapshot templates.
       *
       * @param request ListLiveSnapshotTemplatesRequest
       * @return ListLiveSnapshotTemplatesResponse
       */
      Models::ListLiveSnapshotTemplatesResponse listLiveSnapshotTemplates(const Models::ListLiveSnapshotTemplatesRequest &request);

      /**
       * @summary Queries a list of live stream transcoding jobs.
       *
       * @param request ListLiveTranscodeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveTranscodeJobsResponse
       */
      Models::ListLiveTranscodeJobsResponse listLiveTranscodeJobsWithOptions(const Models::ListLiveTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream transcoding jobs.
       *
       * @param request ListLiveTranscodeJobsRequest
       * @return ListLiveTranscodeJobsResponse
       */
      Models::ListLiveTranscodeJobsResponse listLiveTranscodeJobs(const Models::ListLiveTranscodeJobsRequest &request);

      /**
       * @summary Queries a list of live stream transcoding templates.
       *
       * @param request ListLiveTranscodeTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveTranscodeTemplatesResponse
       */
      Models::ListLiveTranscodeTemplatesResponse listLiveTranscodeTemplatesWithOptions(const Models::ListLiveTranscodeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream transcoding templates.
       *
       * @param request ListLiveTranscodeTemplatesRequest
       * @return ListLiveTranscodeTemplatesResponse
       */
      Models::ListLiveTranscodeTemplatesResponse listLiveTranscodeTemplates(const Models::ListLiveTranscodeTemplatesRequest &request);

      /**
       * @summary Returns basic information about media assets that match the specified parameters.
       *
       * @description - If the `includeFileBasicInfo` field is set to true, the response also includes basic source file information, such as its duration and file size.
       * - Returns a maximum of 100 matching media assets.
       * - The query returns only media assets that exactly match all specified non-empty fields. The fields that support exact matching are media type, source, business type, category, and resource status.
       * - If the result set is too large for a single response, use the returned `nextToken` to retrieve the next page of results.
       *
       * @param request ListMediaBasicInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaBasicInfosResponse
       */
      Models::ListMediaBasicInfosResponse listMediaBasicInfosWithOptions(const Models::ListMediaBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns basic information about media assets that match the specified parameters.
       *
       * @description - If the `includeFileBasicInfo` field is set to true, the response also includes basic source file information, such as its duration and file size.
       * - Returns a maximum of 100 matching media assets.
       * - The query returns only media assets that exactly match all specified non-empty fields. The fields that support exact matching are media type, source, business type, category, and resource status.
       * - If the result set is too large for a single response, use the returned `nextToken` to retrieve the next page of results.
       *
       * @param request ListMediaBasicInfosRequest
       * @return ListMediaBasicInfosResponse
       */
      Models::ListMediaBasicInfosResponse listMediaBasicInfos(const Models::ListMediaBasicInfosRequest &request);

      /**
       * @summary This operation lists media convert jobs.
       *
       * @param request ListMediaConvertJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaConvertJobsResponse
       */
      Models::ListMediaConvertJobsResponse listMediaConvertJobsWithOptions(const Models::ListMediaConvertJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation lists media convert jobs.
       *
       * @param request ListMediaConvertJobsRequest
       * @return ListMediaConvertJobsResponse
       */
      Models::ListMediaConvertJobsResponse listMediaConvertJobs(const Models::ListMediaConvertJobsRequest &request);

      /**
       * @summary Queries a list of media information analysis jobs.
       *
       * @param request ListMediaInfoJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaInfoJobsResponse
       */
      Models::ListMediaInfoJobsResponse listMediaInfoJobsWithOptions(const Models::ListMediaInfoJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of media information analysis jobs.
       *
       * @param request ListMediaInfoJobsRequest
       * @return ListMediaInfoJobsResponse
       */
      Models::ListMediaInfoJobsResponse listMediaInfoJobs(const Models::ListMediaInfoJobsRequest &request);

      /**
       * @summary Queries MediaLive channels.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListMediaLiveChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaLiveChannelsResponse
       */
      Models::ListMediaLiveChannelsResponse listMediaLiveChannelsWithOptions(const Models::ListMediaLiveChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries MediaLive channels.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListMediaLiveChannelsRequest
       * @return ListMediaLiveChannelsResponse
       */
      Models::ListMediaLiveChannelsResponse listMediaLiveChannels(const Models::ListMediaLiveChannelsRequest &request);

      /**
       * @summary Queries the security groups in MediaLive.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListMediaLiveInputSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaLiveInputSecurityGroupsResponse
       */
      Models::ListMediaLiveInputSecurityGroupsResponse listMediaLiveInputSecurityGroupsWithOptions(const Models::ListMediaLiveInputSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security groups in MediaLive.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListMediaLiveInputSecurityGroupsRequest
       * @return ListMediaLiveInputSecurityGroupsResponse
       */
      Models::ListMediaLiveInputSecurityGroupsResponse listMediaLiveInputSecurityGroups(const Models::ListMediaLiveInputSecurityGroupsRequest &request);

      /**
       * @summary Query the list of media live inputs.
       *
       * @description - You can invoke this API to query the list of media live inputs.
       * ## QPS Limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request ListMediaLiveInputsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaLiveInputsResponse
       */
      Models::ListMediaLiveInputsResponse listMediaLiveInputsWithOptions(const Models::ListMediaLiveInputsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of media live inputs.
       *
       * @description - You can invoke this API to query the list of media live inputs.
       * ## QPS Limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request ListMediaLiveInputsRequest
       * @return ListMediaLiveInputsResponse
       */
      Models::ListMediaLiveInputsResponse listMediaLiveInputs(const Models::ListMediaLiveInputsRequest &request);

      /**
       * @summary Queries a list of marks of a media asset.
       *
       * @param request ListMediaMarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaMarksResponse
       */
      Models::ListMediaMarksResponse listMediaMarksWithOptions(const Models::ListMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of marks of a media asset.
       *
       * @param request ListMediaMarksRequest
       * @return ListMediaMarksResponse
       */
      Models::ListMediaMarksResponse listMediaMarks(const Models::ListMediaMarksRequest &request);

      /**
       * @summary Queries a list of media editing and production jobs that meet the specified conditions. You can query the jobs based on the job state and type.
       *
       * @param request ListMediaProducingJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaProducingJobsResponse
       */
      Models::ListMediaProducingJobsResponse listMediaProducingJobsWithOptions(const Models::ListMediaProducingJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of media editing and production jobs that meet the specified conditions. You can query the jobs based on the job state and type.
       *
       * @param request ListMediaProducingJobsRequest
       * @return ListMediaProducingJobsResponse
       */
      Models::ListMediaProducingJobsResponse listMediaProducingJobs(const Models::ListMediaProducingJobsRequest &request);

      /**
       * @summary Queries packaging jobs.
       *
       * @param request ListPackageJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPackageJobsResponse
       */
      Models::ListPackageJobsResponse listPackageJobsWithOptions(const Models::ListPackageJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries packaging jobs.
       *
       * @param request ListPackageJobsRequest
       * @return ListPackageJobsResponse
       */
      Models::ListPackageJobsResponse listPackageJobs(const Models::ListPackageJobsRequest &request);

      /**
       * @summary Queries a list of ApsaraVideo Media Processing (MPS) queues.
       *
       * @param request ListPipelinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelinesWithOptions(const Models::ListPipelinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ApsaraVideo Media Processing (MPS) queues.
       *
       * @param request ListPipelinesRequest
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelines(const Models::ListPipelinesRequest &request);

      /**
       * @summary Lists programs.
       *
       * @param request ListProgramsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProgramsResponse
       */
      Models::ListProgramsResponse listProgramsWithOptions(const Models::ListProgramsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists programs.
       *
       * @param request ListProgramsRequest
       * @return ListProgramsResponse
       */
      Models::ListProgramsResponse listPrograms(const Models::ListProgramsRequest &request);

      /**
       * @summary Queries a list of media assets in the public media library that meet the specified conditions. A maximum of 100 media assets can be returned.
       *
       * @param request ListPublicMediaBasicInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicMediaBasicInfosResponse
       */
      Models::ListPublicMediaBasicInfosResponse listPublicMediaBasicInfosWithOptions(const Models::ListPublicMediaBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of media assets in the public media library that meet the specified conditions. A maximum of 100 media assets can be returned.
       *
       * @param request ListPublicMediaBasicInfosRequest
       * @return ListPublicMediaBasicInfosResponse
       */
      Models::ListPublicMediaBasicInfosResponse listPublicMediaBasicInfos(const Models::ListPublicMediaBasicInfosRequest &request);

      /**
       * @summary Lists entities in a specified recognition library. Pagination is supported.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Supports up to 50 calls per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request ListRecognitionEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecognitionEntitiesResponse
       */
      Models::ListRecognitionEntitiesResponse listRecognitionEntitiesWithOptions(const Models::ListRecognitionEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists entities in a specified recognition library. Pagination is supported.
       *
       * @description - This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - Supports up to 50 calls per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
       *
       * @param request ListRecognitionEntitiesRequest
       * @return ListRecognitionEntitiesResponse
       */
      Models::ListRecognitionEntitiesResponse listRecognitionEntities(const Models::ListRecognitionEntitiesRequest &request);

      /**
       * @summary Perform a paged query to retrieve information about all Custom detection libraries under the current User.
       *
       * @description - This API currently supports the following Regions: China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen). Other Regions are not supported at this time.
       * - The queries per second (QPS) limit for this API is 50 per User. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListRecognitionLibsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecognitionLibsResponse
       */
      Models::ListRecognitionLibsResponse listRecognitionLibsWithOptions(const Models::ListRecognitionLibsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perform a paged query to retrieve information about all Custom detection libraries under the current User.
       *
       * @description - This API currently supports the following Regions: China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen). Other Regions are not supported at this time.
       * - The queries per second (QPS) limit for this API is 50 per User. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListRecognitionLibsRequest
       * @return ListRecognitionLibsResponse
       */
      Models::ListRecognitionLibsResponse listRecognitionLibs(const Models::ListRecognitionLibsRequest &request);

      /**
       * @summary Retrieves all samples of a custom entity. Pagination is supported.
       *
       * @description - This API is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request ListRecognitionSamplesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecognitionSamplesResponse
       */
      Models::ListRecognitionSamplesResponse listRecognitionSamplesWithOptions(const Models::ListRecognitionSamplesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all samples of a custom entity. Pagination is supported.
       *
       * @description - This API is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
       * - You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request ListRecognitionSamplesRequest
       * @return ListRecognitionSamplesResponse
       */
      Models::ListRecognitionSamplesResponse listRecognitionSamples(const Models::ListRecognitionSamplesRequest &request);

      /**
       * @summary Lists the program schedule of a MediaWeaver channel.
       *
       * @param request ListSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchedulesResponse
       */
      Models::ListSchedulesResponse listSchedulesWithOptions(const Models::ListSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the program schedule of a MediaWeaver channel.
       *
       * @param request ListSchedulesRequest
       * @return ListSchedulesResponse
       */
      Models::ListSchedulesResponse listSchedules(const Models::ListSchedulesRequest &request);

      /**
       * @summary Retrieves a list of search libraries.
       *
       * @param request ListSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchLibResponse
       */
      Models::ListSearchLibResponse listSearchLibWithOptions(const Models::ListSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of search libraries.
       *
       * @param request ListSearchLibRequest
       * @return ListSearchLibResponse
       */
      Models::ListSearchLibResponse listSearchLib(const Models::ListSearchLibRequest &request);

      /**
       * @summary Queries a list of intelligent jobs based on specified parameters.
       *
       * @param request ListSmartJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartJobsResponse
       */
      Models::ListSmartJobsResponse listSmartJobsWithOptions(const Models::ListSmartJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of intelligent jobs based on specified parameters.
       *
       * @param request ListSmartJobsRequest
       * @return ListSmartJobsResponse
       */
      Models::ListSmartJobsResponse listSmartJobs(const Models::ListSmartJobsRequest &request);

      /**
       * @summary Retrieves a paginated list of system digital avatars.
       *
       * @param request ListSmartSysAvatarModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartSysAvatarModelsResponse
       */
      Models::ListSmartSysAvatarModelsResponse listSmartSysAvatarModelsWithOptions(const Models::ListSmartSysAvatarModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of system digital avatars.
       *
       * @param request ListSmartSysAvatarModelsRequest
       * @return ListSmartSysAvatarModelsResponse
       */
      Models::ListSmartSysAvatarModelsResponse listSmartSysAvatarModels(const Models::ListSmartSysAvatarModelsRequest &request);

      /**
       * @summary Retrieves a list of available smart voices, including their names, genders, and sample audio. The voices are grouped by scenario.
       *
       * @param request ListSmartVoiceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartVoiceGroupsResponse
       */
      Models::ListSmartVoiceGroupsResponse listSmartVoiceGroupsWithOptions(const Models::ListSmartVoiceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of available smart voices, including their names, genders, and sample audio. The voices are grouped by scenario.
       *
       * @param request ListSmartVoiceGroupsRequest
       * @return ListSmartVoiceGroupsResponse
       */
      Models::ListSmartVoiceGroupsResponse listSmartVoiceGroups(const Models::ListSmartVoiceGroupsRequest &request);

      /**
       * @summary Queries a list of snapshot jobs.
       *
       * @param request ListSnapshotJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotJobsResponse
       */
      Models::ListSnapshotJobsResponse listSnapshotJobsWithOptions(const Models::ListSnapshotJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of snapshot jobs.
       *
       * @param request ListSnapshotJobsRequest
       * @return ListSnapshotJobsResponse
       */
      Models::ListSnapshotJobsResponse listSnapshotJobs(const Models::ListSnapshotJobsRequest &request);

      /**
       * @summary Lists source locations.
       *
       * @param request ListSourceLocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSourceLocationsResponse
       */
      Models::ListSourceLocationsResponse listSourceLocationsWithOptions(const Models::ListSourceLocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists source locations.
       *
       * @param request ListSourceLocationsRequest
       * @return ListSourceLocationsResponse
       */
      Models::ListSourceLocationsResponse listSourceLocations(const Models::ListSourceLocationsRequest &request);

      /**
       * @summary Lists sources in MediaWeaver.
       *
       * @param request ListSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSourcesResponse
       */
      Models::ListSourcesResponse listSourcesWithOptions(const Models::ListSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists sources in MediaWeaver.
       *
       * @param request ListSourcesRequest
       * @return ListSourcesResponse
       */
      Models::ListSourcesResponse listSources(const Models::ListSourcesRequest &request);

      /**
       * @summary Queries a list of system templates.
       *
       * @description Template types:
       * 1. 1: transcoding template.
       * 2. 2: snapshot template.
       * 3. 3: animated image template.
       * 4. 4\\. image watermark template.
       * 5. 5: text watermark template.
       * 6. 6: subtitle template.
       * 7. 7: AI-assisted content moderation template.
       * 8. 8: AI-assisted intelligent thumbnail template.
       * 9. 9: AI-assisted intelligent erasure template.
       * Subtypes of transcoding templates:
       * 1. 1 (Normal): regular template.
       * 2. 2 (AudioTranscode): audio transcoding template.
       * 3. 3 (Remux): container format conversion template.
       * 4. 4 (NarrowBandV1): Narrowband HD 1.0 template.
       * 5. 5 (NarrowBandV2): Narrowband HD 2.0 template.
       * Subtypes of snapshot templates:
       * 1. 1 (Normal): regular template.
       * 2. 2 (Sprite): sprite template.
       * 3. 3 (WebVtt): WebVTT template.
       * Subtypes of AI-assisted content moderation templates:
       * 1. 1 (Video): video moderation template.
       * 2. 2 (Audio): audio moderation template.
       * 3. 3 (Image): image moderation template.
       * Subtypes of AI-assisted intelligent erasure templates:
       * 1. 1 (VideoDelogo): logo erasure template.
       * 2. 2 (VideoDetext): subtitle erasure template.
       *
       * @param request ListSystemTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemTemplatesResponse
       */
      Models::ListSystemTemplatesResponse listSystemTemplatesWithOptions(const Models::ListSystemTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of system templates.
       *
       * @description Template types:
       * 1. 1: transcoding template.
       * 2. 2: snapshot template.
       * 3. 3: animated image template.
       * 4. 4\\. image watermark template.
       * 5. 5: text watermark template.
       * 6. 6: subtitle template.
       * 7. 7: AI-assisted content moderation template.
       * 8. 8: AI-assisted intelligent thumbnail template.
       * 9. 9: AI-assisted intelligent erasure template.
       * Subtypes of transcoding templates:
       * 1. 1 (Normal): regular template.
       * 2. 2 (AudioTranscode): audio transcoding template.
       * 3. 3 (Remux): container format conversion template.
       * 4. 4 (NarrowBandV1): Narrowband HD 1.0 template.
       * 5. 5 (NarrowBandV2): Narrowband HD 2.0 template.
       * Subtypes of snapshot templates:
       * 1. 1 (Normal): regular template.
       * 2. 2 (Sprite): sprite template.
       * 3. 3 (WebVtt): WebVTT template.
       * Subtypes of AI-assisted content moderation templates:
       * 1. 1 (Video): video moderation template.
       * 2. 2 (Audio): audio moderation template.
       * 3. 3 (Image): image moderation template.
       * Subtypes of AI-assisted intelligent erasure templates:
       * 1. 1 (VideoDelogo): logo erasure template.
       * 2. 2 (VideoDetext): subtitle erasure template.
       *
       * @param request ListSystemTemplatesRequest
       * @return ListSystemTemplatesResponse
       */
      Models::ListSystemTemplatesResponse listSystemTemplates(const Models::ListSystemTemplatesRequest &request);

      /**
       * @summary Queries a list of templates that meet the specified conditions. You can query templates based on information such as the template status and creation source.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request ListTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of templates that meet the specified conditions. You can query templates based on information such as the template status and creation source.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary Lists the transcoding jobs for a media file.
       *
       * @param request ListTranscodeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscodeJobsResponse
       */
      Models::ListTranscodeJobsResponse listTranscodeJobsWithOptions(const Models::ListTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the transcoding jobs for a media file.
       *
       * @param request ListTranscodeJobsRequest
       * @return ListTranscodeJobsResponse
       */
      Models::ListTranscodeJobsResponse listTranscodeJobs(const Models::ListTranscodeJobsRequest &request);

      /**
       * @summary Lists VOD packaging assets.
       *
       * @param request ListVodPackagingAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodPackagingAssetsResponse
       */
      Models::ListVodPackagingAssetsResponse listVodPackagingAssetsWithOptions(const Models::ListVodPackagingAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists VOD packaging assets.
       *
       * @param request ListVodPackagingAssetsRequest
       * @return ListVodPackagingAssetsResponse
       */
      Models::ListVodPackagingAssetsResponse listVodPackagingAssets(const Models::ListVodPackagingAssetsRequest &request);

      /**
       * @summary Lists VOD packaging configurations.
       *
       * @param request ListVodPackagingConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodPackagingConfigurationsResponse
       */
      Models::ListVodPackagingConfigurationsResponse listVodPackagingConfigurationsWithOptions(const Models::ListVodPackagingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists VOD packaging configurations.
       *
       * @param request ListVodPackagingConfigurationsRequest
       * @return ListVodPackagingConfigurationsResponse
       */
      Models::ListVodPackagingConfigurationsResponse listVodPackagingConfigurations(const Models::ListVodPackagingConfigurationsRequest &request);

      /**
       * @summary Lists VOD packaging groups.
       *
       * @param request ListVodPackagingGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodPackagingGroupsResponse
       */
      Models::ListVodPackagingGroupsResponse listVodPackagingGroupsWithOptions(const Models::ListVodPackagingGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists VOD packaging groups.
       *
       * @param request ListVodPackagingGroupsRequest
       * @return ListVodPackagingGroupsResponse
       */
      Models::ListVodPackagingGroupsResponse listVodPackagingGroups(const Models::ListVodPackagingGroupsRequest &request);

      /**
       * @summary Retrieves workflow tasks.
       *
       * @description This API only returns data from the last 90 days.
       *
       * @param request ListWorkflowTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowTasksResponse
       */
      Models::ListWorkflowTasksResponse listWorkflowTasksWithOptions(const Models::ListWorkflowTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves workflow tasks.
       *
       * @description This API only returns data from the last 90 days.
       *
       * @param request ListWorkflowTasksRequest
       * @return ListWorkflowTasksResponse
       */
      Models::ListWorkflowTasksResponse listWorkflowTasks(const Models::ListWorkflowTasksRequest &request);

      /**
       * @summary Retrieves a list of Yike folders.
       *
       * @param request ListYikeAssetFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeAssetFoldersResponse
       */
      Models::ListYikeAssetFoldersResponse listYikeAssetFoldersWithOptions(const Models::ListYikeAssetFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Yike folders.
       *
       * @param request ListYikeAssetFoldersRequest
       * @return ListYikeAssetFoldersResponse
       */
      Models::ListYikeAssetFoldersResponse listYikeAssetFolders(const Models::ListYikeAssetFoldersRequest &request);

      /**
       * @summary Queries the list of Yike projects.
       *
       * @param request ListYikeProductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYikeProductionsResponse
       */
      Models::ListYikeProductionsResponse listYikeProductionsWithOptions(const Models::ListYikeProductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Yike projects.
       *
       * @param request ListYikeProductionsRequest
       * @return ListYikeProductionsResponse
       */
      Models::ListYikeProductionsResponse listYikeProductions(const Models::ListYikeProductionsRequest &request);

      /**
       * @summary Enables Source Failover for a MediaConnect flow.
       *
       * @description - Before this operation, you must add a source to the flow.
       * - After Source Failover is enabled, you can add an additional source. The input type of the two sources must be identical.
       *
       * @param request OpenMediaConnectFlowFailoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenMediaConnectFlowFailoverResponse
       */
      Models::OpenMediaConnectFlowFailoverResponse openMediaConnectFlowFailoverWithOptions(const Models::OpenMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Source Failover for a MediaConnect flow.
       *
       * @description - Before this operation, you must add a source to the flow.
       * - After Source Failover is enabled, you can add an additional source. The input type of the two sources must be identical.
       *
       * @param request OpenMediaConnectFlowFailoverRequest
       * @return OpenMediaConnectFlowFailoverResponse
       */
      Models::OpenMediaConnectFlowFailoverResponse openMediaConnectFlowFailover(const Models::OpenMediaConnectFlowFailoverRequest &request);

      /**
       * @summary Validates the parameters of an application.
       *
       * @param request PrecheckYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckYikeAIAppJobResponse
       */
      Models::PrecheckYikeAIAppJobResponse precheckYikeAIAppJobWithOptions(const Models::PrecheckYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the parameters of an application.
       *
       * @param request PrecheckYikeAIAppJobRequest
       * @return PrecheckYikeAIAppJobResponse
       */
      Models::PrecheckYikeAIAppJobResponse precheckYikeAIAppJob(const Models::PrecheckYikeAIAppJobRequest &request);

      /**
       * @summary Queries a job for extracting a copyright watermark.
       *
       * @param request QueryCopyrightExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCopyrightExtractJobResponse
       */
      Models::QueryCopyrightExtractJobResponse queryCopyrightExtractJobWithOptions(const Models::QueryCopyrightExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a job for extracting a copyright watermark.
       *
       * @param request QueryCopyrightExtractJobRequest
       * @return QueryCopyrightExtractJobResponse
       */
      Models::QueryCopyrightExtractJobResponse queryCopyrightExtractJob(const Models::QueryCopyrightExtractJobRequest &request);

      /**
       * @summary Queries copyright watermarking jobs.
       *
       * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       *
       * @param request QueryCopyrightJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCopyrightJobListResponse
       */
      Models::QueryCopyrightJobListResponse queryCopyrightJobListWithOptions(const Models::QueryCopyrightJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries copyright watermarking jobs.
       *
       * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       *
       * @param request QueryCopyrightJobListRequest
       * @return QueryCopyrightJobListResponse
       */
      Models::QueryCopyrightJobListResponse queryCopyrightJobList(const Models::QueryCopyrightJobListRequest &request);

      /**
       * @summary Queries a list of media fingerprint analysis jobs.
       *
       * @param request QueryDNAJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDNAJobListResponse
       */
      Models::QueryDNAJobListResponse queryDNAJobListWithOptions(const Models::QueryDNAJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of media fingerprint analysis jobs.
       *
       * @param request QueryDNAJobListRequest
       * @return QueryDNAJobListResponse
       */
      Models::QueryDNAJobListResponse queryDNAJobList(const Models::QueryDNAJobListRequest &request);

      /**
       * @summary Call `QueryIProductionJob` to get the status and result of an intelligent production job.
       *
       * @param request QueryIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIProductionJobResponse
       */
      Models::QueryIProductionJobResponse queryIProductionJobWithOptions(const Models::QueryIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `QueryIProductionJob` to get the status and result of an intelligent production job.
       *
       * @param request QueryIProductionJobRequest
       * @return QueryIProductionJobResponse
       */
      Models::QueryIProductionJobResponse queryIProductionJob(const Models::QueryIProductionJobRequest &request);

      /**
       * @summary Query IPC usage.
       *
       * @param request QueryIpcQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIpcQuotaResponse
       */
      Models::QueryIpcQuotaResponse queryIpcQuotaWithOptions(const Models::QueryIpcQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query IPC usage.
       *
       * @param request QueryIpcQuotaRequest
       * @return QueryIpcQuotaResponse
       */
      Models::QueryIpcQuotaResponse queryIpcQuota(const Models::QueryIpcQuotaRequest &request);

      /**
       * @summary Queries the information about a content moderation job.
       *
       * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. Call this operation again to query the remaining moderation results of the video.
       *
       * @param request QueryMediaCensorJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaCensorJobDetailResponse
       */
      Models::QueryMediaCensorJobDetailResponse queryMediaCensorJobDetailWithOptions(const Models::QueryMediaCensorJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a content moderation job.
       *
       * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. Call this operation again to query the remaining moderation results of the video.
       *
       * @param request QueryMediaCensorJobDetailRequest
       * @return QueryMediaCensorJobDetailResponse
       */
      Models::QueryMediaCensorJobDetailResponse queryMediaCensorJobDetail(const Models::QueryMediaCensorJobDetailRequest &request);

      /**
       * @summary Queries a list of content moderation jobs.
       *
       * @description Query only the content moderation jobs within the most recent three months.
       *
       * @param request QueryMediaCensorJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaCensorJobListResponse
       */
      Models::QueryMediaCensorJobListResponse queryMediaCensorJobListWithOptions(const Models::QueryMediaCensorJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of content moderation jobs.
       *
       * @description Query only the content moderation jobs within the most recent three months.
       *
       * @param request QueryMediaCensorJobListRequest
       * @return QueryMediaCensorJobListResponse
       */
      Models::QueryMediaCensorJobListResponse queryMediaCensorJobList(const Models::QueryMediaCensorJobListRequest &request);

      /**
       * @summary Queries the indexing jobs enabled for a media asset.
       *
       * @param request QueryMediaIndexJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaIndexJobResponse
       */
      Models::QueryMediaIndexJobResponse queryMediaIndexJobWithOptions(const Models::QueryMediaIndexJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the indexing jobs enabled for a media asset.
       *
       * @param request QueryMediaIndexJobRequest
       * @return QueryMediaIndexJobResponse
       */
      Models::QueryMediaIndexJobResponse queryMediaIndexJob(const Models::QueryMediaIndexJobRequest &request);

      /**
       * @summary Gets details about a search index.
       *
       * @param request QuerySearchIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySearchIndexResponse
       */
      Models::QuerySearchIndexResponse querySearchIndexWithOptions(const Models::QuerySearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets details about a search index.
       *
       * @param request QuerySearchIndexRequest
       * @return QuerySearchIndexResponse
       */
      Models::QuerySearchIndexResponse querySearchIndex(const Models::QuerySearchIndexRequest &request);

      /**
       * @summary Gets information about a search library.
       *
       * @param request QuerySearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySearchLibResponse
       */
      Models::QuerySearchLibResponse querySearchLibWithOptions(const Models::QuerySearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about a search library.
       *
       * @param request QuerySearchLibRequest
       * @return QuerySearchLibResponse
       */
      Models::QuerySearchLibResponse querySearchLib(const Models::QuerySearchLibRequest &request);

      /**
       * @summary Querying a smart tag task.
       *
       * @param request QuerySmarttagJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmarttagJobResponse
       */
      Models::QuerySmarttagJobResponse querySmarttagJobWithOptions(const Models::QuerySmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying a smart tag task.
       *
       * @param request QuerySmarttagJobRequest
       * @return QuerySmarttagJobResponse
       */
      Models::QuerySmarttagJobResponse querySmarttagJob(const Models::QuerySmarttagJobRequest &request);

      /**
       * @summary Queries A/B watermarking jobs.
       *
       * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       *
       * @param request QueryTraceAbJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceAbJobListResponse
       */
      Models::QueryTraceAbJobListResponse queryTraceAbJobListWithOptions(const Models::QueryTraceAbJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries A/B watermarking jobs.
       *
       * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       *
       * @param request QueryTraceAbJobListRequest
       * @return QueryTraceAbJobListResponse
       */
      Models::QueryTraceAbJobListResponse queryTraceAbJobList(const Models::QueryTraceAbJobListRequest &request);

      /**
       * @summary Queries a job for extracting a trace watermark.
       *
       * @description This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       *
       * @param request QueryTraceExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceExtractJobResponse
       */
      Models::QueryTraceExtractJobResponse queryTraceExtractJobWithOptions(const Models::QueryTraceExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a job for extracting a trace watermark.
       *
       * @description This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       *
       * @param request QueryTraceExtractJobRequest
       * @return QueryTraceExtractJobResponse
       */
      Models::QueryTraceExtractJobResponse queryTraceExtractJob(const Models::QueryTraceExtractJobRequest &request);

      /**
       * @summary Queries jobs for generating M3U8 files containing specific trace watermark information.
       *
       * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       * - The M3U8 file with absolute paths generated by the SubmitTraceM3u8Job API has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. After the signature expires, the M3U8 file will become inaccessible. You must submit a new M3U8 generation job.
       *
       * @param request QueryTraceM3u8JobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceM3u8JobListResponse
       */
      Models::QueryTraceM3u8JobListResponse queryTraceM3u8JobListWithOptions(const Models::QueryTraceM3u8JobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries jobs for generating M3U8 files containing specific trace watermark information.
       *
       * @description - This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       * - The M3U8 file with absolute paths generated by the SubmitTraceM3u8Job API has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. After the signature expires, the M3U8 file will become inaccessible. You must submit a new M3U8 generation job.
       *
       * @param request QueryTraceM3u8JobListRequest
       * @return QueryTraceM3u8JobListResponse
       */
      Models::QueryTraceM3u8JobListResponse queryTraceM3u8JobList(const Models::QueryTraceM3u8JobListRequest &request);

      /**
       * @summary Querying video understanding task results
       *
       * @param tmpReq QueryVideoCognitionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVideoCognitionJobResponse
       */
      Models::QueryVideoCognitionJobResponse queryVideoCognitionJobWithOptions(const Models::QueryVideoCognitionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying video understanding task results
       *
       * @param request QueryVideoCognitionJobRequest
       * @return QueryVideoCognitionJobResponse
       */
      Models::QueryVideoCognitionJobResponse queryVideoCognitionJob(const Models::QueryVideoCognitionJobRequest &request);

      /**
       * @summary Obtain a new upload credential for a media asset after its upload credential expires.
       *
       * @param request RefreshUploadMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshUploadMediaResponse
       */
      Models::RefreshUploadMediaResponse refreshUploadMediaWithOptions(const Models::RefreshUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a new upload credential for a media asset after its upload credential expires.
       *
       * @param request RefreshUploadMediaRequest
       * @return RefreshUploadMediaResponse
       */
      Models::RefreshUploadMediaResponse refreshUploadMedia(const Models::RefreshUploadMediaRequest &request);

      /**
       * @summary Registers a media asset with Intelligent Media Services (IMS). IMS assigns an ID to the media asset. This operation asynchronously accesses the media asset service in which the media asset is stored to obtain the file information of the media asset based on the input URL. You can also specify basic information, such as the title, tags, and description, for the media asset. This operation returns the ID of the media asset. You can call the GetMediaInfo operation based on the ID to query the details of the media asset. You can set InputURL only to the URL of an Object Storage Service (OSS) file or an ApsaraVideo VOD media asset.
       *
       * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the [GetMediaInfo](https://help.aliyun.com/document_detail/441155.html) operation at this time, you may fail to obtain the information about the media asset.
       *
       * @param request RegisterMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterMediaInfoResponse
       */
      Models::RegisterMediaInfoResponse registerMediaInfoWithOptions(const Models::RegisterMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a media asset with Intelligent Media Services (IMS). IMS assigns an ID to the media asset. This operation asynchronously accesses the media asset service in which the media asset is stored to obtain the file information of the media asset based on the input URL. You can also specify basic information, such as the title, tags, and description, for the media asset. This operation returns the ID of the media asset. You can call the GetMediaInfo operation based on the ID to query the details of the media asset. You can set InputURL only to the URL of an Object Storage Service (OSS) file or an ApsaraVideo VOD media asset.
       *
       * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the [GetMediaInfo](https://help.aliyun.com/document_detail/441155.html) operation at this time, you may fail to obtain the information about the media asset.
       *
       * @param request RegisterMediaInfoRequest
       * @return RegisterMediaInfoResponse
       */
      Models::RegisterMediaInfoResponse registerMediaInfo(const Models::RegisterMediaInfoRequest &request);

      /**
       * @summary Registers a media stream file stored in OSS with the media service and attaches the media stream to a specified MediaId.
       *
       * @param request RegisterMediaStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterMediaStreamResponse
       */
      Models::RegisterMediaStreamResponse registerMediaStreamWithOptions(const Models::RegisterMediaStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a media stream file stored in OSS with the media service and attaches the media stream to a specified MediaId.
       *
       * @param request RegisterMediaStreamRequest
       * @return RegisterMediaStreamResponse
       */
      Models::RegisterMediaStreamResponse registerMediaStream(const Models::RegisterMediaStreamRequest &request);

      /**
       * @summary Registers a media asset in the asset library.
       *
       * @param request RegisterYikeAssetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterYikeAssetMediaInfoResponse
       */
      Models::RegisterYikeAssetMediaInfoResponse registerYikeAssetMediaInfoWithOptions(const Models::RegisterYikeAssetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a media asset in the asset library.
       *
       * @param request RegisterYikeAssetMediaInfoRequest
       * @return RegisterYikeAssetMediaInfoResponse
       */
      Models::RegisterYikeAssetMediaInfoResponse registerYikeAssetMediaInfo(const Models::RegisterYikeAssetMediaInfoRequest &request);

      /**
       * @summary Resumes an output of a MediaConnect flow. When resumed, the output can deliver the live stream to the destination.
       *
       * @param request ResumeMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeMediaConnectFlowOutputResponse
       */
      Models::ResumeMediaConnectFlowOutputResponse resumeMediaConnectFlowOutputWithOptions(const Models::ResumeMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an output of a MediaConnect flow. When resumed, the output can deliver the live stream to the destination.
       *
       * @param request ResumeMediaConnectFlowOutputRequest
       * @return ResumeMediaConnectFlowOutputResponse
       */
      Models::ResumeMediaConnectFlowOutputResponse resumeMediaConnectFlowOutput(const Models::ResumeMediaConnectFlowOutputRequest &request);

      /**
       * @summary Resumes a storyboard job.
       *
       * @param request ResumeYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeYikeStoryboardJobResponse
       */
      Models::ResumeYikeStoryboardJobResponse resumeYikeStoryboardJobWithOptions(const Models::ResumeYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a storyboard job.
       *
       * @param request ResumeYikeStoryboardJobRequest
       * @return ResumeYikeStoryboardJobResponse
       */
      Models::ResumeYikeStoryboardJobResponse resumeYikeStoryboardJob(const Models::ResumeYikeStoryboardJobRequest &request);

      /**
       * @summary Queries online editing projects by creation time and status.
       *
       * @param request SearchEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchEditingProjectResponse
       */
      Models::SearchEditingProjectResponse searchEditingProjectWithOptions(const Models::SearchEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries online editing projects by creation time and status.
       *
       * @param request SearchEditingProjectRequest
       * @return SearchEditingProjectResponse
       */
      Models::SearchEditingProjectResponse searchEditingProject(const Models::SearchEditingProjectRequest &request);

      /**
       * @summary Rerun the search index jobs for the specified media assets in batch. You can rerun index jobs for up to 20 media assets per request.
       *
       * @param request SearchIndexJobRerunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchIndexJobRerunResponse
       */
      Models::SearchIndexJobRerunResponse searchIndexJobRerunWithOptions(const Models::SearchIndexJobRerunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rerun the search index jobs for the specified media assets in batch. You can rerun index jobs for up to 20 media assets per request.
       *
       * @param request SearchIndexJobRerunRequest
       * @return SearchIndexJobRerunResponse
       */
      Models::SearchIndexJobRerunResponse searchIndexJobRerun(const Models::SearchIndexJobRerunRequest &request);

      /**
       * @summary Returns media assets that match the specified conditions.
       *
       * @description If you have any questions about the multi-modal search feature, join our DingTalk group (ID: 30415005038) for assistance.
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns media assets that match the specified conditions.
       *
       * @description If you have any questions about the multi-modal search feature, join our DingTalk group (ID: 30415005038) for assistance.
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary You can perform multimodal search based on person names, captions, and AI categorization.
       *
       * @description You can perform multimodal search based on person names, captions, and AI categorization. Coarse search supports returning results at the media asset granularity, while fine search supports returning hit segment information within media assets.
       *
       * @param request SearchMediaByAILabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByAILabelResponse
       */
      Models::SearchMediaByAILabelResponse searchMediaByAILabelWithOptions(const Models::SearchMediaByAILabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can perform multimodal search based on person names, captions, and AI categorization.
       *
       * @description You can perform multimodal search based on person names, captions, and AI categorization. Coarse search supports returning results at the media asset granularity, while fine search supports returning hit segment information within media assets.
       *
       * @param request SearchMediaByAILabelRequest
       * @return SearchMediaByAILabelResponse
       */
      Models::SearchMediaByAILabelResponse searchMediaByAILabel(const Models::SearchMediaByAILabelRequest &request);

      /**
       * @summary Search media assets by face image (coarse search). Input a face image to retrieve information about media assets containing the person in the image.
       *
       * @description For questions about using or troubleshooting the Intelligent Media Asset Search feature of Alibaba Cloud Intelligent Media Services, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
       *
       * @param request SearchMediaByFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByFaceResponse
       */
      Models::SearchMediaByFaceResponse searchMediaByFaceWithOptions(const Models::SearchMediaByFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search media assets by face image (coarse search). Input a face image to retrieve information about media assets containing the person in the image.
       *
       * @description For questions about using or troubleshooting the Intelligent Media Asset Search feature of Alibaba Cloud Intelligent Media Services, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
       *
       * @param request SearchMediaByFaceRequest
       * @return SearchMediaByFaceResponse
       */
      Models::SearchMediaByFaceResponse searchMediaByFace(const Models::SearchMediaByFaceRequest &request);

      /**
       * @summary Hybrid media asset search. Combines the text search capability of DataQ - Smart Tag Service and the LLM-based search capability to perform multi-channel recall, allowing users to search using natural language descriptions.
       *
       * @description For questions about or assistance with the Intelligent Media Services intelligent media asset search feature on Alibaba Cloud, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
       *
       * @param request SearchMediaByHybridRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByHybridResponse
       */
      Models::SearchMediaByHybridResponse searchMediaByHybridWithOptions(const Models::SearchMediaByHybridRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hybrid media asset search. Combines the text search capability of DataQ - Smart Tag Service and the LLM-based search capability to perform multi-channel recall, allowing users to search using natural language descriptions.
       *
       * @description For questions about or assistance with the Intelligent Media Services intelligent media asset search feature on Alibaba Cloud, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
       *
       * @param request SearchMediaByHybridRequest
       * @return SearchMediaByHybridResponse
       */
      Models::SearchMediaByHybridResponse searchMediaByHybrid(const Models::SearchMediaByHybridRequest &request);

      /**
       * @summary LLM search. You can use natural language descriptions to perform searches.
       *
       * @description For questions about the Intelligent Media Services intelligent media asset search feature or related issues, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
       *
       * @param request SearchMediaByMultimodalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByMultimodalResponse
       */
      Models::SearchMediaByMultimodalResponse searchMediaByMultimodalWithOptions(const Models::SearchMediaByMultimodalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary LLM search. You can use natural language descriptions to perform searches.
       *
       * @description For questions about the Intelligent Media Services intelligent media asset search feature or related issues, search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer support DingTalk group to contact us.
       *
       * @param request SearchMediaByMultimodalRequest
       * @return SearchMediaByMultimodalResponse
       */
      Models::SearchMediaByMultimodalResponse searchMediaByMultimodal(const Models::SearchMediaByMultimodalRequest &request);

      /**
       * @summary The API for searching media asset segments by face image (fine search) returns information about relevant character segments in the media asset where the face appears, based on coarse search results.
       *
       * @description For questions about using or troubleshooting the Intelligent Media Search feature of Alibaba Cloud Intelligent Media Services, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
       *
       * @param request SearchMediaClipByFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaClipByFaceResponse
       */
      Models::SearchMediaClipByFaceResponse searchMediaClipByFaceWithOptions(const Models::SearchMediaClipByFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The API for searching media asset segments by face image (fine search) returns information about relevant character segments in the media asset where the face appears, based on coarse search results.
       *
       * @description For questions about using or troubleshooting the Intelligent Media Search feature of Alibaba Cloud Intelligent Media Services, please search for the DingTalk group (30415005038) and join the Intelligent Media Services multimodal search Customer Support DingTalk group to contact us.
       *
       * @param request SearchMediaClipByFaceRequest
       * @return SearchMediaClipByFaceResponse
       */
      Models::SearchMediaClipByFaceResponse searchMediaClipByFace(const Models::SearchMediaClipByFaceRequest &request);

      /**
       * @summary Search for media assets that meet the conditions based on the parameters provided by the User.
       *
       * @param request SearchPublicMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchPublicMediaInfoResponse
       */
      Models::SearchPublicMediaInfoResponse searchPublicMediaInfoWithOptions(const Models::SearchPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search for media assets that meet the conditions based on the parameters provided by the User.
       *
       * @param request SearchPublicMediaInfoRequest
       * @return SearchPublicMediaInfoResponse
       */
      Models::SearchPublicMediaInfoResponse searchPublicMediaInfo(const Models::SearchPublicMediaInfoRequest &request);

      /**
       * @summary Sends a DataChannel message to an AI agent.
       *
       * @param request SendAIAgentDataChannelMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAIAgentDataChannelMessageResponse
       */
      Models::SendAIAgentDataChannelMessageResponse sendAIAgentDataChannelMessageWithOptions(const Models::SendAIAgentDataChannelMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a DataChannel message to an AI agent.
       *
       * @param request SendAIAgentDataChannelMessageRequest
       * @return SendAIAgentDataChannelMessageResponse
       */
      Models::SendAIAgentDataChannelMessageResponse sendAIAgentDataChannelMessage(const Models::SendAIAgentDataChannelMessageRequest &request);

      /**
       * @summary Instructs a specified agent instance to immediately play back a text message, with support for interrupt settings.
       *
       * @description You can use this API to immediately instruct an AI agent instance to perform voice playback by passing in the specified text content. You can optionally allow this playback to interrupt any currently playing audio. By default, interruption is allowed.
       * **Note:**
       * - The `InstanceId` must be valid and correspond to an existing agent instance.
       * - The `Text` content must comply with specifications and must not contain sensitive or inappropriate information.
       * - If you do not want the new playback to interrupt the current audio, you must explicitly set `EnableInterrupt` to `false`.
       *
       * @param request SendAIAgentSpeechRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAIAgentSpeechResponse
       */
      Models::SendAIAgentSpeechResponse sendAIAgentSpeechWithOptions(const Models::SendAIAgentSpeechRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Instructs a specified agent instance to immediately play back a text message, with support for interrupt settings.
       *
       * @description You can use this API to immediately instruct an AI agent instance to perform voice playback by passing in the specified text content. You can optionally allow this playback to interrupt any currently playing audio. By default, interruption is allowed.
       * **Note:**
       * - The `InstanceId` must be valid and correspond to an existing agent instance.
       * - The `Text` content must comply with specifications and must not contain sensitive or inappropriate information.
       * - If you do not want the new playback to interrupt the current audio, you must explicitly set `EnableInterrupt` to `false`.
       *
       * @param request SendAIAgentSpeechRequest
       * @return SendAIAgentSpeechResponse
       */
      Models::SendAIAgentSpeechResponse sendAIAgentSpeech(const Models::SendAIAgentSpeechRequest &request);

      /**
       * @summary Sends a message as input to the large language model (LLM).
       *
       * @param request SendAIAgentTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAIAgentTextResponse
       */
      Models::SendAIAgentTextResponse sendAIAgentTextWithOptions(const Models::SendAIAgentTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message as input to the large language model (LLM).
       *
       * @param request SendAIAgentTextRequest
       * @return SendAIAgentTextResponse
       */
      Models::SendAIAgentTextResponse sendAIAgentText(const Models::SendAIAgentTextRequest &request);

      /**
       * @summary Sends a command to process a live stream snapshot job.
       *
       * @param request SendLiveSnapshotJobCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLiveSnapshotJobCommandResponse
       */
      Models::SendLiveSnapshotJobCommandResponse sendLiveSnapshotJobCommandWithOptions(const Models::SendLiveSnapshotJobCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a command to process a live stream snapshot job.
       *
       * @param request SendLiveSnapshotJobCommandRequest
       * @return SendLiveSnapshotJobCommandResponse
       */
      Models::SendLiveSnapshotJobCommandResponse sendLiveSnapshotJobCommand(const Models::SendLiveSnapshotJobCommandRequest &request);

      /**
       * @summary Sends a command to process a live stream transcoding job.
       *
       * @param request SendLiveTranscodeJobCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLiveTranscodeJobCommandResponse
       */
      Models::SendLiveTranscodeJobCommandResponse sendLiveTranscodeJobCommandWithOptions(const Models::SendLiveTranscodeJobCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a command to process a live stream transcoding job.
       *
       * @param request SendLiveTranscodeJobCommandRequest
       * @return SendLiveTranscodeJobCommandResponse
       */
      Models::SendLiveTranscodeJobCommandResponse sendLiveTranscodeJobCommand(const Models::SendLiveTranscodeJobCommandRequest &request);

      /**
       * @summary Sends a message to the client.
       *
       * @param request SendMessageChatTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageChatTextResponse
       */
      Models::SendMessageChatTextResponse sendMessageChatTextWithOptions(const Models::SendMessageChatTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to the client.
       *
       * @param request SendMessageChatTextRequest
       * @return SendMessageChatTextResponse
       */
      Models::SendMessageChatTextResponse sendMessageChatText(const Models::SendMessageChatTextRequest &request);

      /**
       * @summary Registers a voiceprint.
       *
       * @param tmpReq SetAIAgentVoiceprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAIAgentVoiceprintResponse
       */
      Models::SetAIAgentVoiceprintResponse setAIAgentVoiceprintWithOptions(const Models::SetAIAgentVoiceprintRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a voiceprint.
       *
       * @param request SetAIAgentVoiceprintRequest
       * @return SetAIAgentVoiceprintResponse
       */
      Models::SetAIAgentVoiceprintResponse setAIAgentVoiceprint(const Models::SetAIAgentVoiceprintRequest &request);

      /**
       * @summary Configures settings for Intelligent Content Analysis.
       *
       * @param request SetContentAnalyzeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetContentAnalyzeConfigResponse
       */
      Models::SetContentAnalyzeConfigResponse setContentAnalyzeConfigWithOptions(const Models::SetContentAnalyzeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures settings for Intelligent Content Analysis.
       *
       * @param request SetContentAnalyzeConfigRequest
       * @return SetContentAnalyzeConfigResponse
       */
      Models::SetContentAnalyzeConfigResponse setContentAnalyzeConfig(const Models::SetContentAnalyzeConfigRequest &request);

      /**
       * @summary Sets a custom template as the default template.
       *
       * @param request SetDefaultCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultCustomTemplateResponse
       */
      Models::SetDefaultCustomTemplateResponse setDefaultCustomTemplateWithOptions(const Models::SetDefaultCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a custom template as the default template.
       *
       * @param request SetDefaultCustomTemplateRequest
       * @return SetDefaultCustomTemplateResponse
       */
      Models::SetDefaultCustomTemplateResponse setDefaultCustomTemplate(const Models::SetDefaultCustomTemplateRequest &request);

      /**
       * @summary Set the default storage path for temporary files. The default storage address is used by the ICE online editor and the integrated web SDK to store temporary files generated during video editing, such as audio files generated by Intelligent configurations. Setting a default storage address avoids inconveniencing users who would otherwise need to specify storage paths for various temporary resources during editing. If you integrate ICE editing capabilities through an API, you can flexibly specify the path in the API request, and this default path will not take effect.
       *
       * @description - Intelligent Media Services supports storage in either Object Storage Service or ApsaraVideo VOD. Activate the corresponding service based on your required storage type. The differences between the two are as follows:
       * - **ApsaraVideo VOD storage**: ApsaraVideo VOD provides an all-in-one audio and video solution, including video storage, media asset management, and CDN-based playback. When storing media assets in ApsaraVideo VOD, Intelligent Media Services enhances VOD capabilities, enabling rapid development and publishing of video applications using VOD-provided APIs.
       * - **Object Storage**: Object Storage Service (OSS) is Alibaba Cloud’s secure, low-cost, highly durable, and scalable cloud storage service. You can leverage the combined capabilities of Intelligent Media Services and OSS to develop audio and video applications for diverse scenarios.
       * - You can also configure the storage address in the console. For details, see [Configure Storage Address](https://help.aliyun.com/document_detail/609918.html).
       * - Storage fees are billed through OSS or ApsaraVideo VOD based on your configured storage address. For details, see [Media Asset Storage Billing](https://help.aliyun.com/document_detail/440701.html).
       *
       * @param request SetDefaultStorageLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultStorageLocationResponse
       */
      Models::SetDefaultStorageLocationResponse setDefaultStorageLocationWithOptions(const Models::SetDefaultStorageLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the default storage path for temporary files. The default storage address is used by the ICE online editor and the integrated web SDK to store temporary files generated during video editing, such as audio files generated by Intelligent configurations. Setting a default storage address avoids inconveniencing users who would otherwise need to specify storage paths for various temporary resources during editing. If you integrate ICE editing capabilities through an API, you can flexibly specify the path in the API request, and this default path will not take effect.
       *
       * @description - Intelligent Media Services supports storage in either Object Storage Service or ApsaraVideo VOD. Activate the corresponding service based on your required storage type. The differences between the two are as follows:
       * - **ApsaraVideo VOD storage**: ApsaraVideo VOD provides an all-in-one audio and video solution, including video storage, media asset management, and CDN-based playback. When storing media assets in ApsaraVideo VOD, Intelligent Media Services enhances VOD capabilities, enabling rapid development and publishing of video applications using VOD-provided APIs.
       * - **Object Storage**: Object Storage Service (OSS) is Alibaba Cloud’s secure, low-cost, highly durable, and scalable cloud storage service. You can leverage the combined capabilities of Intelligent Media Services and OSS to develop audio and video applications for diverse scenarios.
       * - You can also configure the storage address in the console. For details, see [Configure Storage Address](https://help.aliyun.com/document_detail/609918.html).
       * - Storage fees are billed through OSS or ApsaraVideo VOD based on your configured storage address. For details, see [Media Asset Storage Billing](https://help.aliyun.com/document_detail/440701.html).
       *
       * @param request SetDefaultStorageLocationRequest
       * @return SetDefaultStorageLocationResponse
       */
      Models::SetDefaultStorageLocationResponse setDefaultStorageLocation(const Models::SetDefaultStorageLocationRequest &request);

      /**
       * @summary Configures a callback method for one or more events.
       *
       * @param request SetEventCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetEventCallbackResponse
       */
      Models::SetEventCallbackResponse setEventCallbackWithOptions(const Models::SetEventCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a callback method for one or more events.
       *
       * @param request SetEventCallbackRequest
       * @return SetEventCallbackResponse
       */
      Models::SetEventCallbackResponse setEventCallback(const Models::SetEventCallbackRequest &request);

      /**
       * @summary Enables or disables event notifications for an AI Agent and sets the Callback URL and the Event Types to subscribe to.
       *
       * @description ## Description
       * This operation configures event notification settings for an AI Agent instance. You can enable or disable event notifications, specify the Callback URL, and define the Event Types to subscribe to. You can also provide an Authentication Token for enhanced security. A successful request returns a unique Request ID for tracking and troubleshooting.
       *
       * @param request SetNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetNotifyConfigResponse
       */
      Models::SetNotifyConfigResponse setNotifyConfigWithOptions(const Models::SetNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables event notifications for an AI Agent and sets the Callback URL and the Event Types to subscribe to.
       *
       * @description ## Description
       * This operation configures event notification settings for an AI Agent instance. You can enable or disable event notifications, specify the Callback URL, and define the Event Types to subscribe to. You can also provide an Authentication Token for enhanced security. A successful request returns a unique Request ID for tracking and troubleshooting.
       *
       * @param request SetNotifyConfigRequest
       * @return SetNotifyConfigResponse
       */
      Models::SetNotifyConfigResponse setNotifyConfig(const Models::SetNotifyConfigRequest &request);

      /**
       * @summary Sets a user role.
       *
       * @param request SetYikeUserRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetYikeUserRoleResponse
       */
      Models::SetYikeUserRoleResponse setYikeUserRoleWithOptions(const Models::SetYikeUserRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a user role.
       *
       * @param request SetYikeUserRoleRequest
       * @return SetYikeUserRoleResponse
       */
      Models::SetYikeUserRoleResponse setYikeUserRole(const Models::SetYikeUserRoleRequest &request);

      /**
       * @summary Start an AI agent instance configured in IMS.
       *
       * @description You can use this API to start a configured AI agent instance and join it to a chat. Specify the agent ID (`AIAgentId`), runtime configuration (`RuntimeConfig`), and optionally a template configuration (`TemplateConfig`) and user-defined data (`UserData`). After the agent instance starts successfully, the API returns a unique `InstanceId` for tracking or further operations.
       *
       * @param tmpReq StartAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAgentInstanceResponse
       */
      Models::StartAIAgentInstanceResponse startAIAgentInstanceWithOptions(const Models::StartAIAgentInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start an AI agent instance configured in IMS.
       *
       * @description You can use this API to start a configured AI agent instance and join it to a chat. Specify the agent ID (`AIAgentId`), runtime configuration (`RuntimeConfig`), and optionally a template configuration (`TemplateConfig`) and user-defined data (`UserData`). After the agent instance starts successfully, the API returns a unique `InstanceId` for tracking or further operations.
       *
       * @param request StartAIAgentInstanceRequest
       * @return StartAIAgentInstanceResponse
       */
      Models::StartAIAgentInstanceResponse startAIAgentInstance(const Models::StartAIAgentInstanceRequest &request);

      /**
       * @summary Initiates an AI agent outbound call from a specific caller number to a called number and returns the call\\"s InstanceId.
       *
       * @description Use this API to start a configured AI agent instance and place an outbound call to a specified called number. Upon successful startup, the API returns a unique `InstanceId` for tracking or subsequent operations. Each caller number supports **up to 15 concurrent calls**.
       *
       * @param tmpReq StartAIAgentOutboundCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAgentOutboundCallResponse
       */
      Models::StartAIAgentOutboundCallResponse startAIAgentOutboundCallWithOptions(const Models::StartAIAgentOutboundCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an AI agent outbound call from a specific caller number to a called number and returns the call\\"s InstanceId.
       *
       * @description Use this API to start a configured AI agent instance and place an outbound call to a specified called number. Upon successful startup, the API returns a unique `InstanceId` for tracking or subsequent operations. Each caller number supports **up to 15 concurrent calls**.
       *
       * @param request StartAIAgentOutboundCallRequest
       * @return StartAIAgentOutboundCallResponse
       */
      Models::StartAIAgentOutboundCallResponse startAIAgentOutboundCall(const Models::StartAIAgentOutboundCallRequest &request);

      /**
       * @summary Initiates a workflow task for automated media processing based on a workflow template.
       *
       * @description - You must specify a workflow template. To create one, go to the [Intelligent Media Services (IMS)](https://ims.console.aliyun.com/ai-workflow/template) console.
       *
       * @param request StartAIWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIWorkflowResponse
       */
      Models::StartAIWorkflowResponse startAIWorkflowWithOptions(const Models::StartAIWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a workflow task for automated media processing based on a workflow template.
       *
       * @description - You must specify a workflow template. To create one, go to the [Intelligent Media Services (IMS)](https://ims.console.aliyun.com/ai-workflow/template) console.
       *
       * @param request StartAIWorkflowRequest
       * @return StartAIWorkflowResponse
       */
      Models::StartAIWorkflowResponse startAIWorkflow(const Models::StartAIWorkflowRequest &request);

      /**
       * @summary Starts a channel.
       *
       * @param request StartChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartChannelResponse
       */
      Models::StartChannelResponse startChannelWithOptions(const Models::StartChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a channel.
       *
       * @param request StartChannelRequest
       * @return StartChannelResponse
       */
      Models::StartChannelResponse startChannel(const Models::StartChannelRequest &request);

      /**
       * @summary Starts a MediaLive channel.
       *
       * @description - Starts a channel only when the channel is idle. You cannot start a channel repeatedly.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartMediaLiveChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMediaLiveChannelResponse
       */
      Models::StartMediaLiveChannelResponse startMediaLiveChannelWithOptions(const Models::StartMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a MediaLive channel.
       *
       * @description - Starts a channel only when the channel is idle. You cannot start a channel repeatedly.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartMediaLiveChannelRequest
       * @return StartMediaLiveChannelResponse
       */
      Models::StartMediaLiveChannelResponse startMediaLiveChannel(const Models::StartMediaLiveChannelRequest &request);

      /**
       * @summary Starts an RTC interactive AI agent instance and joins an RTC call.
       *
       * @param tmpReq StartRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRtcRobotInstanceResponse
       */
      Models::StartRtcRobotInstanceResponse startRtcRobotInstanceWithOptions(const Models::StartRtcRobotInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an RTC interactive AI agent instance and joins an RTC call.
       *
       * @param request StartRtcRobotInstanceRequest
       * @return StartRtcRobotInstanceResponse
       */
      Models::StartRtcRobotInstanceResponse startRtcRobotInstance(const Models::StartRtcRobotInstanceRequest &request);

      /**
       * @summary By invoking the StartWorkflow API, you can submit a media workflow template task to implement an automated media processing flow based on the workflow template.
       *
       * @description - Currently, only media assets from Intelligent Media Services or ApsaraVideo VOD are supported as workflow inputs.
       * - When submitting a flow task, you must specify a workflow template. You can create a workflow template in the [Intelligent Media Services console](https://ims.console.aliyun.com/settings/workflow/list) or use a system preset workflow template.
       *
       * @param request StartWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWorkflowResponse
       */
      Models::StartWorkflowResponse startWorkflowWithOptions(const Models::StartWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary By invoking the StartWorkflow API, you can submit a media workflow template task to implement an automated media processing flow based on the workflow template.
       *
       * @description - Currently, only media assets from Intelligent Media Services or ApsaraVideo VOD are supported as workflow inputs.
       * - When submitting a flow task, you must specify a workflow template. You can create a workflow template in the [Intelligent Media Services console](https://ims.console.aliyun.com/settings/workflow/list) or use a system preset workflow template.
       *
       * @param request StartWorkflowRequest
       * @return StartWorkflowResponse
       */
      Models::StartWorkflowResponse startWorkflow(const Models::StartWorkflowRequest &request);

      /**
       * @summary Stop an agent instance.
       *
       * @description - **Feature description**: Stops and terminates a running agent instance and release the associated resources.
       * - **Parameter notes**: You must provide the unique ID (InstanceId) of the instance to be stopped as a query parameter.
       * - **Common scenarios**: When an agent is no longer needed for a call or job, you can invoke this API to end its execution.
       *
       * @param request StopAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAIAgentInstanceResponse
       */
      Models::StopAIAgentInstanceResponse stopAIAgentInstanceWithOptions(const Models::StopAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop an agent instance.
       *
       * @description - **Feature description**: Stops and terminates a running agent instance and release the associated resources.
       * - **Parameter notes**: You must provide the unique ID (InstanceId) of the instance to be stopped as a query parameter.
       * - **Common scenarios**: When an agent is no longer needed for a call or job, you can invoke this API to end its execution.
       *
       * @param request StopAIAgentInstanceRequest
       * @return StopAIAgentInstanceResponse
       */
      Models::StopAIAgentInstanceResponse stopAIAgentInstance(const Models::StopAIAgentInstanceRequest &request);

      /**
       * @summary Manually stops a workflow task.
       *
       * @description This operation is only used to stop workflow tasks in real-time scenarios such as live streaming and RTC. It cannot be used to stop tasks in offline scenarios.
       *
       * @param request StopAIWorkflowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAIWorkflowTaskResponse
       */
      Models::StopAIWorkflowTaskResponse stopAIWorkflowTaskWithOptions(const Models::StopAIWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually stops a workflow task.
       *
       * @description This operation is only used to stop workflow tasks in real-time scenarios such as live streaming and RTC. It cannot be used to stop tasks in offline scenarios.
       *
       * @param request StopAIWorkflowTaskRequest
       * @return StopAIWorkflowTaskResponse
       */
      Models::StopAIWorkflowTaskResponse stopAIWorkflowTask(const Models::StopAIWorkflowTaskRequest &request);

      /**
       * @summary Stops a MediaWeaver channel.
       *
       * @param request StopChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopChannelResponse
       */
      Models::StopChannelResponse stopChannelWithOptions(const Models::StopChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a MediaWeaver channel.
       *
       * @param request StopChannelRequest
       * @return StopChannelResponse
       */
      Models::StopChannelResponse stopChannel(const Models::StopChannelRequest &request);

      /**
       * @summary Stops a MediaLive channel.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopMediaLiveChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMediaLiveChannelResponse
       */
      Models::StopMediaLiveChannelResponse stopMediaLiveChannelWithOptions(const Models::StopMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a MediaLive channel.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopMediaLiveChannelRequest
       * @return StopMediaLiveChannelResponse
       */
      Models::StopMediaLiveChannelResponse stopMediaLiveChannel(const Models::StopMediaLiveChannelRequest &request);

      /**
       * @summary Stop an RTC interactive AI agent instance.
       *
       * @param request StopRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcRobotInstanceResponse
       */
      Models::StopRtcRobotInstanceResponse stopRtcRobotInstanceWithOptions(const Models::StopRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop an RTC interactive AI agent instance.
       *
       * @param request StopRtcRobotInstanceRequest
       * @return StopRtcRobotInstanceResponse
       */
      Models::StopRtcRobotInstanceResponse stopRtcRobotInstance(const Models::StopRtcRobotInstanceRequest &request);

      /**
       * @summary Deducts credits from a sub-account.
       *
       * @param request SubYikeUserCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubYikeUserCreditResponse
       */
      Models::SubYikeUserCreditResponse subYikeUserCreditWithOptions(const Models::SubYikeUserCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deducts credits from a sub-account.
       *
       * @param request SubYikeUserCreditRequest
       * @return SubYikeUserCreditResponse
       */
      Models::SubYikeUserCreditResponse subYikeUserCredit(const Models::SubYikeUserCreditRequest &request);

      /**
       * @summary Submits a video to a specified AI agent for content moderation. This operation supports video input from OSS and delivers the results asynchronously via callbacks. You can define custom frame-capturing policies and moderation prompts.
       *
       * @description Call SubmitAIAgentVideoAuditTask to submit a video moderation task with configurations such as a video URL, frame-capturing policies, and review interval. The system returns a unique JobId for tracking. When the task is complete, the service will push the results, including the moderation status and AI-generated analysis, to the configured callback URL. Only OSS URLs are supported as input. The underlying multi-modal large language model (MLLM) only supports interaction via the non-streaming OpenAI protocol.
       *
       * @param tmpReq SubmitAIAgentVideoAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIAgentVideoAuditTaskResponse
       */
      Models::SubmitAIAgentVideoAuditTaskResponse submitAIAgentVideoAuditTaskWithOptions(const Models::SubmitAIAgentVideoAuditTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video to a specified AI agent for content moderation. This operation supports video input from OSS and delivers the results asynchronously via callbacks. You can define custom frame-capturing policies and moderation prompts.
       *
       * @description Call SubmitAIAgentVideoAuditTask to submit a video moderation task with configurations such as a video URL, frame-capturing policies, and review interval. The system returns a unique JobId for tracking. When the task is complete, the service will push the results, including the moderation status and AI-generated analysis, to the configured callback URL. Only OSS URLs are supported as input. The underlying multi-modal large language model (MLLM) only supports interaction via the non-streaming OpenAI protocol.
       *
       * @param request SubmitAIAgentVideoAuditTaskRequest
       * @return SubmitAIAgentVideoAuditTaskResponse
       */
      Models::SubmitAIAgentVideoAuditTaskResponse submitAIAgentVideoAuditTask(const Models::SubmitAIAgentVideoAuditTaskRequest &request);

      /**
       * @summary Transcribes speech from a media file and returns the text with corresponding start and end timestamps.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and processes the job in the background. The results are sent through a callback notification, or you can query the job status by calling the [GetSmartTaskResult](https://help.aliyun.com/document_detail/441172.html) operation.
       *
       * @param request SubmitASRJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitASRJobResponse
       */
      Models::SubmitASRJobResponse submitASRJobWithOptions(const Models::SubmitASRJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transcribes speech from a media file and returns the text with corresponding start and end timestamps.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and processes the job in the background. The results are sent through a callback notification, or you can query the job status by calling the [GetSmartTaskResult](https://help.aliyun.com/document_detail/441172.html) operation.
       *
       * @param request SubmitASRJobRequest
       * @return SubmitASRJobResponse
       */
      Models::SubmitASRJobResponse submitASRJob(const Models::SubmitASRJobRequest &request);

      /**
       * @summary This API converts text into a high-quality audio file of speech.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, you receive a job ID, and the job is processed in the background. You can get the result through a callback notification or by querying the job status with the [GetSmartJobResult API](https://help.aliyun.com/document_detail/441172.html).
       *
       * @param request SubmitAudioProduceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAudioProduceJobResponse
       */
      Models::SubmitAudioProduceJobResponse submitAudioProduceJobWithOptions(const Models::SubmitAudioProduceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API converts text into a high-quality audio file of speech.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, you receive a job ID, and the job is processed in the background. You can get the result through a callback notification or by querying the job status with the [GetSmartJobResult API](https://help.aliyun.com/document_detail/441172.html).
       *
       * @param request SubmitAudioProduceJobRequest
       * @return SubmitAudioProduceJobResponse
       */
      Models::SubmitAudioProduceJobResponse submitAudioProduceJob(const Models::SubmitAudioProduceJobRequest &request);

      /**
       * @summary Use this operation to submit a new avatar training job or to resubmit a failed job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you call this operation, it returns a JobId and queues the training job for background processing. The initial response confirms the job submission, not its completion. The final result is sent via a callback notification, or you can check the job\\"s status by [querying the details of an avatar training job](https://help.aliyun.com/document_detail/2526661.html).
       *
       * @param request SubmitAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAvatarTrainingJobResponse
       */
      Models::SubmitAvatarTrainingJobResponse submitAvatarTrainingJobWithOptions(const Models::SubmitAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this operation to submit a new avatar training job or to resubmit a failed job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you call this operation, it returns a JobId and queues the training job for background processing. The initial response confirms the job submission, not its completion. The final result is sent via a callback notification, or you can check the job\\"s status by [querying the details of an avatar training job](https://help.aliyun.com/document_detail/2526661.html).
       *
       * @param request SubmitAvatarTrainingJobRequest
       * @return SubmitAvatarTrainingJobResponse
       */
      Models::SubmitAvatarTrainingJobResponse submitAvatarTrainingJob(const Models::SubmitAvatarTrainingJobRequest &request);

      /**
       * @summary Renders an avatar video from text or an audio file.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and queues the job for background processing. The service delivers the final result through a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also query the job status by calling the [GetSmartJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
       * - The input can be text or an audio file in MP3 or WAV format.
       * - The output supports both MP4 and WebM formats. When the output format is MP4, the job produces a video of the avatar against a green screen and a separate [alpha mask video]() for post-production. We recommend this option. When the output format is WebM, the job produces a single video with a transparent [alpha channel](), which is suitable for front-end display. Rendering in WebM format is slower due to encoding complexity.
       * - The output includes [sentence-level timestamps]() for the generated speech, useful for subsequent video editing.
       *
       * @param request SubmitAvatarVideoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAvatarVideoJobResponse
       */
      Models::SubmitAvatarVideoJobResponse submitAvatarVideoJobWithOptions(const Models::SubmitAvatarVideoJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renders an avatar video from text or an audio file.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API returns a job ID and queues the job for background processing. The service delivers the final result through a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also query the job status by calling the [GetSmartJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
       * - The input can be text or an audio file in MP3 or WAV format.
       * - The output supports both MP4 and WebM formats. When the output format is MP4, the job produces a video of the avatar against a green screen and a separate [alpha mask video]() for post-production. We recommend this option. When the output format is WebM, the job produces a single video with a transparent [alpha channel](), which is suitable for front-end display. Rendering in WebM format is slower due to encoding complexity.
       * - The output includes [sentence-level timestamps]() for the generated speech, useful for subsequent video editing.
       *
       * @param request SubmitAvatarVideoJobRequest
       * @return SubmitAvatarVideoJobResponse
       */
      Models::SubmitAvatarVideoJobResponse submitAvatarVideoJob(const Models::SubmitAvatarVideoJobRequest &request);

      /**
       * @summary Intelligently edits and combines multiple video, audio, and image media assets to create videos in batches with a single API call.
       *
       * @description <props="china">
       * - To use the one-click smart video creation feature, you must first subscribe to the IMS Subscription Service. For more information, see [Subscription Billing](~~439260#3285adfad70dw~~).
       * <props="china">
       * - For more information about billing for one-click smart video creation, see [One-click Video Creation](https://help.aliyun.com/document_detail/2840901.html).
       * - The one-click smart video creation feature is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a job ID and queues the job for asynchronous processing. The system delivers the final result through a callback. You can also query the job status by calling the [Get Batch Media Production Job Information](https://help.aliyun.com/document_detail/2693269.html) operation.
       * - The one-click smart video creation feature offers multiple solutions, including Script-based Automated Video Creation, AI-powered Image-Text Matching Video Creation (General), AI-powered Image-Text Matching Video Creation (Highlights), Sports Highlight Video Creation, and High-Energy Montage Video Creation. For more information about these features, see [One-click Video Creation](https://help.aliyun.com/document_detail/2689046.html).
       * - Script-based Automated Video Creation and AI-powered Image-Text Matching Video Creation share the same API for submitting jobs. To learn how to differentiate between them using parameters, see [Parameter Differences for One-click Video Creation](https://help.aliyun.com/document_detail/2846101.html).
       * - After you submit a batch job for one-click smart video creation, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve a list of all matching jobs. Call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to get detailed information about a job, including its status, the generated media asset ID, and the media asset URL.
       *
       * @param request SubmitBatchMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitBatchMediaProducingJobResponse
       */
      Models::SubmitBatchMediaProducingJobResponse submitBatchMediaProducingJobWithOptions(const Models::SubmitBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Intelligently edits and combines multiple video, audio, and image media assets to create videos in batches with a single API call.
       *
       * @description <props="china">
       * - To use the one-click smart video creation feature, you must first subscribe to the IMS Subscription Service. For more information, see [Subscription Billing](~~439260#3285adfad70dw~~).
       * <props="china">
       * - For more information about billing for one-click smart video creation, see [One-click Video Creation](https://help.aliyun.com/document_detail/2840901.html).
       * - The one-click smart video creation feature is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a job ID and queues the job for asynchronous processing. The system delivers the final result through a callback. You can also query the job status by calling the [Get Batch Media Production Job Information](https://help.aliyun.com/document_detail/2693269.html) operation.
       * - The one-click smart video creation feature offers multiple solutions, including Script-based Automated Video Creation, AI-powered Image-Text Matching Video Creation (General), AI-powered Image-Text Matching Video Creation (Highlights), Sports Highlight Video Creation, and High-Energy Montage Video Creation. For more information about these features, see [One-click Video Creation](https://help.aliyun.com/document_detail/2689046.html).
       * - Script-based Automated Video Creation and AI-powered Image-Text Matching Video Creation share the same API for submitting jobs. To learn how to differentiate between them using parameters, see [Parameter Differences for One-click Video Creation](https://help.aliyun.com/document_detail/2846101.html).
       * - After you submit a batch job for one-click smart video creation, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve a list of all matching jobs. Call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to get detailed information about a job, including its status, the generated media asset ID, and the media asset URL.
       *
       * @param request SubmitBatchMediaProducingJobRequest
       * @return SubmitBatchMediaProducingJobResponse
       */
      Models::SubmitBatchMediaProducingJobResponse submitBatchMediaProducingJob(const Models::SubmitBatchMediaProducingJobRequest &request);

      /**
       * @summary Submits a copyright watermark extraction job.
       *
       * @description - The digital watermark APIs are available only in the China (Shanghai) and China (Beijing) regions.
       * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID. The service then queues the job for asynchronous processing. You can get the final results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or query the job status by calling the [QueryCopyrightExtractJob](https://help.aliyun.com/document_detail/2862132.html) operation.
       *
       * @param tmpReq SubmitCopyrightExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCopyrightExtractJobResponse
       */
      Models::SubmitCopyrightExtractJobResponse submitCopyrightExtractJobWithOptions(const Models::SubmitCopyrightExtractJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a copyright watermark extraction job.
       *
       * @description - The digital watermark APIs are available only in the China (Shanghai) and China (Beijing) regions.
       * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID. The service then queues the job for asynchronous processing. You can get the final results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or query the job status by calling the [QueryCopyrightExtractJob](https://help.aliyun.com/document_detail/2862132.html) operation.
       *
       * @param request SubmitCopyrightExtractJobRequest
       * @return SubmitCopyrightExtractJobResponse
       */
      Models::SubmitCopyrightExtractJobResponse submitCopyrightExtractJob(const Models::SubmitCopyrightExtractJobRequest &request);

      /**
       * @summary Submits a video copyright watermark job.
       *
       * @description - By default, this operation supports only videos 3 minutes or longer. Submitting a job for a shorter video may fail or produce no output. To watermark shorter videos, use the `Params` parameter.
       * - You can submit a watermark job for only one video per API call.
       * - Currently, digital watermark-related APIs are available only in the China (Shanghai) and China (Beijing) regions.
       * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for background processing. Results are delivered via callback notification. Alternatively, you can call the [Query Video Copyright Job List](https://help.aliyun.com/document_detail/2862135.html) operation to check the job status.
       *
       * @param tmpReq SubmitCopyrightJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCopyrightJobResponse
       */
      Models::SubmitCopyrightJobResponse submitCopyrightJobWithOptions(const Models::SubmitCopyrightJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video copyright watermark job.
       *
       * @description - By default, this operation supports only videos 3 minutes or longer. Submitting a job for a shorter video may fail or produce no output. To watermark shorter videos, use the `Params` parameter.
       * - You can submit a watermark job for only one video per API call.
       * - Currently, digital watermark-related APIs are available only in the China (Shanghai) and China (Beijing) regions.
       * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for background processing. Results are delivered via callback notification. Alternatively, you can call the [Query Video Copyright Job List](https://help.aliyun.com/document_detail/2862135.html) operation to check the job status.
       *
       * @param request SubmitCopyrightJobRequest
       * @return SubmitCopyrightJobResponse
       */
      Models::SubmitCopyrightJobResponse submitCopyrightJob(const Models::SubmitCopyrightJobRequest &request);

      /**
       * @summary Submits a CosyVoice voice cloning training task.
       *
       * @description - During training, you can call the [GetCustomizedVoiceJob](https://help.aliyun.com/document_detail/2384473.html) operation to check whether the current task is complete and to obtain the training status.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027141.html). After you submit the task, a task ID is returned. The task is not yet complete at this point and enters a background queue for asynchronous execution. The final result is sent through a callback notification. You can also call the [GetCustomizedVoiceJob](https://help.aliyun.com/document_detail/2384473.html) operation to query the task status.
       *
       * @param request SubmitCosyVoiceCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCosyVoiceCustomizedVoiceJobResponse
       */
      Models::SubmitCosyVoiceCustomizedVoiceJobResponse submitCosyVoiceCustomizedVoiceJobWithOptions(const Models::SubmitCosyVoiceCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a CosyVoice voice cloning training task.
       *
       * @description - During training, you can call the [GetCustomizedVoiceJob](https://help.aliyun.com/document_detail/2384473.html) operation to check whether the current task is complete and to obtain the training status.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027141.html). After you submit the task, a task ID is returned. The task is not yet complete at this point and enters a background queue for asynchronous execution. The final result is sent through a callback notification. You can also call the [GetCustomizedVoiceJob](https://help.aliyun.com/document_detail/2384473.html) operation to query the task status.
       *
       * @param request SubmitCosyVoiceCustomizedVoiceJobRequest
       * @return SubmitCosyVoiceCustomizedVoiceJobResponse
       */
      Models::SubmitCosyVoiceCustomizedVoiceJobResponse submitCosyVoiceCustomizedVoiceJob(const Models::SubmitCosyVoiceCustomizedVoiceJobRequest &request);

      /**
       * @summary Submits a basic voice cloning job.
       *
       * @description <props="china">
       * - Billing for voice cloning is based on customization and usage. For more information, see [voice cloning pricing](~~2399891#section-gy3-80e-clt~~).
       * - When you submit a voice cloning job, the `VoiceId` must match the one provided during audio detection. The service uses this parameter to locate the staged audio for training.
       * - While the job is training, you can call the [GetCustomizedVoiceJob - Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation to query the job status.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After a job is submitted, the API immediately returns a `JobId` and queues the job for background processing. The result is delivered via a callback. Alternatively, you can poll for the job status by using the [Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation.
       *
       * @param request SubmitCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomizedVoiceJobResponse
       */
      Models::SubmitCustomizedVoiceJobResponse submitCustomizedVoiceJobWithOptions(const Models::SubmitCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a basic voice cloning job.
       *
       * @description <props="china">
       * - Billing for voice cloning is based on customization and usage. For more information, see [voice cloning pricing](~~2399891#section-gy3-80e-clt~~).
       * - When you submit a voice cloning job, the `VoiceId` must match the one provided during audio detection. The service uses this parameter to locate the staged audio for training.
       * - While the job is training, you can call the [GetCustomizedVoiceJob - Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation to query the job status.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After a job is submitted, the API immediately returns a `JobId` and queues the job for background processing. The result is delivered via a callback. Alternatively, you can poll for the job status by using the [Query a voice clone job](https://help.aliyun.com/document_detail/2384473.html) operation.
       *
       * @param request SubmitCustomizedVoiceJobRequest
       * @return SubmitCustomizedVoiceJobResponse
       */
      Models::SubmitCustomizedVoiceJobResponse submitCustomizedVoiceJob(const Models::SubmitCustomizedVoiceJobRequest &request);

      /**
       * @summary Submits a DNA job.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous execution in the background. You receive the final result in a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also call the [ListDNAJobs](https://help.aliyun.com/document_detail/479279.html) operation to query the job status.
       * - This operation is available in the following regions: China (Beijing), China (Hangzhou), and China (Shanghai).
       * - Text-based DNA jobs are currently supported only in the China (Shanghai) region.
       *
       * @param tmpReq SubmitDNAJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDNAJobResponse
       */
      Models::SubmitDNAJobResponse submitDNAJobWithOptions(const Models::SubmitDNAJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a DNA job.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous execution in the background. You receive the final result in a [callback notification](https://help.aliyun.com/document_detail/3027141.html). You can also call the [ListDNAJobs](https://help.aliyun.com/document_detail/479279.html) operation to query the job status.
       * - This operation is available in the following regions: China (Beijing), China (Hangzhou), and China (Shanghai).
       * - Text-based DNA jobs are currently supported only in the China (Shanghai) region.
       *
       * @param request SubmitDNAJobRequest
       * @return SubmitDNAJobResponse
       */
      Models::SubmitDNAJobResponse submitDNAJob(const Models::SubmitDNAJobRequest &request);

      /**
       * @summary Submits a job to generate a dynamic chart video, such as a Line Chart, Pie Chart, or Bar Chart, from Excel data. You can customize chart elements like line colors and fonts.
       *
       * @description This operation generates a dynamic chart video from Excel data. This feature is available only in the Shanghai Region.
       * - Customize text elements including the Chart Title, Subtitle, Data Source, and Unit. You can also specify the Font and Font Size. For supported fonts, see the [Font List](https://help.aliyun.com/document_detail/449567.html).
       * - Supports five built-in styles: Normal, Mystery, Lively, Business, and Green.
       * - Set a custom Background Color or Background Image.
       * - Configure output video properties such as Video Duration, Dimensions, and Bitrate.
       * Examples:
       * - Line Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4).
       * - Bar Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4).
       * - Pie Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4).
       * - Normal style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4).
       * - Mystery style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4).
       * - Lively style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4).
       * - Business style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4).
       * - Green style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4).
       *
       * @param request SubmitDynamicChartJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDynamicChartJobResponse
       */
      Models::SubmitDynamicChartJobResponse submitDynamicChartJobWithOptions(const Models::SubmitDynamicChartJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job to generate a dynamic chart video, such as a Line Chart, Pie Chart, or Bar Chart, from Excel data. You can customize chart elements like line colors and fonts.
       *
       * @description This operation generates a dynamic chart video from Excel data. This feature is available only in the Shanghai Region.
       * - Customize text elements including the Chart Title, Subtitle, Data Source, and Unit. You can also specify the Font and Font Size. For supported fonts, see the [Font List](https://help.aliyun.com/document_detail/449567.html).
       * - Supports five built-in styles: Normal, Mystery, Lively, Business, and Green.
       * - Set a custom Background Color or Background Image.
       * - Configure output video properties such as Video Duration, Dimensions, and Bitrate.
       * Examples:
       * - Line Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4).
       * - Bar Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4).
       * - Pie Chart: [Excel Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4).
       * - Normal style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4).
       * - Mystery style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4).
       * - Lively style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4).
       * - Business style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4).
       * - Green style: [Result Sample](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4).
       *
       * @param request SubmitDynamicChartJobRequest
       * @return SubmitDynamicChartJobResponse
       */
      Models::SubmitDynamicChartJobResponse submitDynamicChartJob(const Models::SubmitDynamicChartJobRequest &request);

      /**
       * @summary Use this API to submit a task to generate a dynamic image.
       *
       * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, you will immediately receive a task ID while the task is queued for asynchronous execution in the background. The final result is sent via a callback notification, or you can poll the task status by [querying the dynamic image task details](https://help.aliyun.com/document_detail/441199.html).
       *
       * @param tmpReq SubmitDynamicImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJobWithOptions(const Models::SubmitDynamicImageJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this API to submit a task to generate a dynamic image.
       *
       * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, you will immediately receive a task ID while the task is queued for asynchronous execution in the background. The final result is sent via a callback notification, or you can poll the task status by [querying the dynamic image task details](https://help.aliyun.com/document_detail/441199.html).
       *
       * @param request SubmitDynamicImageJobRequest
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJob(const Models::SubmitDynamicImageJobRequest &request);

      /**
       * @summary Submits a highlight extraction job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the API returns a job ID. The system then queues the job for background processing and sends the final result via a callback notification. You can also query the job status by calling the [Get Smart Task Result](https://help.aliyun.com/document_detail/441172.html) operation.
       *
       * @param request SubmitHighlightExtractionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHighlightExtractionJobResponse
       */
      Models::SubmitHighlightExtractionJobResponse submitHighlightExtractionJobWithOptions(const Models::SubmitHighlightExtractionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a highlight extraction job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the API returns a job ID. The system then queues the job for background processing and sends the final result via a callback notification. You can also query the job status by calling the [Get Smart Task Result](https://help.aliyun.com/document_detail/441172.html) operation.
       *
       * @param request SubmitHighlightExtractionJobRequest
       * @return SubmitHighlightExtractionJobResponse
       */
      Models::SubmitHighlightExtractionJobResponse submitHighlightExtractionJob(const Models::SubmitHighlightExtractionJobRequest &request);

      /**
       * @summary Use the `SubmitIProductionJob` operation to submit an intelligent production job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for asynchronous processing. The final result is delivered via a callback. You can also query the task status by calling [QuerySmartProductionTask](https://help.aliyun.com/document_detail/441215.html).
       *
       * @param tmpReq SubmitIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIProductionJobResponse
       */
      Models::SubmitIProductionJobResponse submitIProductionJobWithOptions(const Models::SubmitIProductionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the `SubmitIProductionJob` operation to submit an intelligent production job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for asynchronous processing. The final result is delivered via a callback. You can also query the task status by calling [QuerySmartProductionTask](https://help.aliyun.com/document_detail/441215.html).
       *
       * @param request SubmitIProductionJobRequest
       * @return SubmitIProductionJobResponse
       */
      Models::SubmitIProductionJobResponse submitIProductionJob(const Models::SubmitIProductionJobRequest &request);

      /**
       * @summary Live editing creates an output file by combining one or more segments from live streams. After you submit a live editing job, it is processed asynchronously. You can then call the GetLiveEditingJob operation with the returned JobId to query the job status, or call the GetMediaInfo operation with the MediaId to get details of the generated media asset.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a JobId before the job is complete. The job is then queued for asynchronous processing. You will receive a [callback notification](https://help.aliyun.com/document_detail/441150.html) when the job completes. Alternatively, you can query the job status by calling the [GetLiveEditingJob](https://help.aliyun.com/document_detail/441150.html) operation.
       * - You can edit live streams that are recorded to either OSS or VOD. When editing multiple live streams together, all streams must be recorded to the same service, either all to OSS or all to VOD.
       *
       * @param request SubmitLiveEditingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLiveEditingJobResponse
       */
      Models::SubmitLiveEditingJobResponse submitLiveEditingJobWithOptions(const Models::SubmitLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Live editing creates an output file by combining one or more segments from live streams. After you submit a live editing job, it is processed asynchronously. You can then call the GetLiveEditingJob operation with the returned JobId to query the job status, or call the GetMediaInfo operation with the MediaId to get details of the generated media asset.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a JobId before the job is complete. The job is then queued for asynchronous processing. You will receive a [callback notification](https://help.aliyun.com/document_detail/441150.html) when the job completes. Alternatively, you can query the job status by calling the [GetLiveEditingJob](https://help.aliyun.com/document_detail/441150.html) operation.
       * - You can edit live streams that are recorded to either OSS or VOD. When editing multiple live streams together, all streams must be recorded to the same service, either all to OSS or all to VOD.
       *
       * @param request SubmitLiveEditingJobRequest
       * @return SubmitLiveEditingJobResponse
       */
      Models::SubmitLiveEditingJobResponse submitLiveEditingJob(const Models::SubmitLiveEditingJobRequest &request);

      /**
       * @summary Submits a live stream recording job.
       *
       * @description Record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
       * Before you submit a recording job, you must prepare an Object Storage Service (OSS) or ApsaraVideo VOD bucket. We recommend that you use a storage address configured in Intelligent Media Services (IMS) to facilitate the management and processing of generated recording files.
       * If the preset recording template does not meet your requirements, you can create a custom recording template.
       *
       * @param tmpReq SubmitLiveRecordJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLiveRecordJobResponse
       */
      Models::SubmitLiveRecordJobResponse submitLiveRecordJobWithOptions(const Models::SubmitLiveRecordJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a live stream recording job.
       *
       * @description Record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
       * Before you submit a recording job, you must prepare an Object Storage Service (OSS) or ApsaraVideo VOD bucket. We recommend that you use a storage address configured in Intelligent Media Services (IMS) to facilitate the management and processing of generated recording files.
       * If the preset recording template does not meet your requirements, you can create a custom recording template.
       *
       * @param request SubmitLiveRecordJobRequest
       * @return SubmitLiveRecordJobResponse
       */
      Models::SubmitLiveRecordJobResponse submitLiveRecordJob(const Models::SubmitLiveRecordJobRequest &request);

      /**
       * @summary Submits a live stream snapshot job. If the job is submitted during stream ingest, it automatically starts in asynchronous mode. Otherwise, it does not start.
       *
       * @param tmpReq SubmitLiveSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLiveSnapshotJobResponse
       */
      Models::SubmitLiveSnapshotJobResponse submitLiveSnapshotJobWithOptions(const Models::SubmitLiveSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a live stream snapshot job. If the job is submitted during stream ingest, it automatically starts in asynchronous mode. Otherwise, it does not start.
       *
       * @param request SubmitLiveSnapshotJobRequest
       * @return SubmitLiveSnapshotJobResponse
       */
      Models::SubmitLiveSnapshotJobResponse submitLiveSnapshotJob(const Models::SubmitLiveSnapshotJobRequest &request);

      /**
       * @summary Submits a live stream transcoding job.
       *
       * @description - When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
       * - When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
       *
       * @param tmpReq SubmitLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLiveTranscodeJobResponse
       */
      Models::SubmitLiveTranscodeJobResponse submitLiveTranscodeJobWithOptions(const Models::SubmitLiveTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a live stream transcoding job.
       *
       * @description - When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
       * - When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
       *
       * @param request SubmitLiveTranscodeJobRequest
       * @return SubmitLiveTranscodeJobResponse
       */
      Models::SubmitLiveTranscodeJobResponse submitLiveTranscodeJob(const Models::SubmitLiveTranscodeJobRequest &request);

      /**
       * @summary Perform structured analysis on media assets to enable speaker analysis, video translation, paragraph summarization, and other analyses on videos.
       *
       * @param request SubmitMediaAiAnalysisJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaAiAnalysisJobResponse
       */
      Models::SubmitMediaAiAnalysisJobResponse submitMediaAiAnalysisJobWithOptions(const Models::SubmitMediaAiAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perform structured analysis on media assets to enable speaker analysis, video translation, paragraph summarization, and other analyses on videos.
       *
       * @param request SubmitMediaAiAnalysisJobRequest
       * @return SubmitMediaAiAnalysisJobResponse
       */
      Models::SubmitMediaAiAnalysisJobResponse submitMediaAiAnalysisJob(const Models::SubmitMediaAiAnalysisJobRequest &request);

      /**
       * @summary Submits a media file to Intelligent Media Services for a censor job. This API automates the scanning of video, audio, or image content to detect potentially non-compliant, sensitive, or inappropriate material.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and processes the job in the background. You receive the final result through a callback notification. You can also check the job status by calling the [QueryMediaCensorJob](https://help.aliyun.com/document_detail/444847.html) API.
       *
       * @param tmpReq SubmitMediaCensorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaCensorJobResponse
       */
      Models::SubmitMediaCensorJobResponse submitMediaCensorJobWithOptions(const Models::SubmitMediaCensorJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media file to Intelligent Media Services for a censor job. This API automates the scanning of video, audio, or image content to detect potentially non-compliant, sensitive, or inappropriate material.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and processes the job in the background. You receive the final result through a callback notification. You can also check the job status by calling the [QueryMediaCensorJob](https://help.aliyun.com/document_detail/444847.html) API.
       *
       * @param request SubmitMediaCensorJobRequest
       * @return SubmitMediaCensorJobResponse
       */
      Models::SubmitMediaCensorJobResponse submitMediaCensorJob(const Models::SubmitMediaCensorJobRequest &request);

      /**
       * @summary Submit a media processing job
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a task, the API returns a task ID and queues the task for asynchronous processing. You will receive the final result via a callback notification, or you can poll for the task status by calling the [Query Media Transcoding Task](https://help.aliyun.com/document_detail/2867675.html) operation.
       *
       * @param request SubmitMediaConvertJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaConvertJobResponse
       */
      Models::SubmitMediaConvertJobResponse submitMediaConvertJobWithOptions(const Models::SubmitMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a media processing job
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a task, the API returns a task ID and queues the task for asynchronous processing. You will receive the final result via a callback notification, or you can poll for the task status by calling the [Query Media Transcoding Task](https://help.aliyun.com/document_detail/2867675.html) operation.
       *
       * @param request SubmitMediaConvertJobRequest
       * @return SubmitMediaConvertJobResponse
       */
      Models::SubmitMediaConvertJobResponse submitMediaConvertJob(const Models::SubmitMediaConvertJobRequest &request);

      /**
       * @summary Creates an asynchronous job to retrieve media information.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for background processing. You can retrieve the final result via a callback or by [querying media information tasks](https://help.aliyun.com/document_detail/441200.html).
       * - Use this API to perform media analysis on input files. It is ideal for use cases that are not time-sensitive or that require high concurrency.
       *
       * @param tmpReq SubmitMediaInfoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaInfoJobResponse
       */
      Models::SubmitMediaInfoJobResponse submitMediaInfoJobWithOptions(const Models::SubmitMediaInfoJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous job to retrieve media information.
       *
       * @description - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). When you submit a task, the API returns a task ID and queues the task for background processing. You can retrieve the final result via a callback or by [querying media information tasks](https://help.aliyun.com/document_detail/441200.html).
       * - Use this API to perform media analysis on input files. It is ideal for use cases that are not time-sensitive or that require high concurrency.
       *
       * @param request SubmitMediaInfoJobRequest
       * @return SubmitMediaInfoJobResponse
       */
      Models::SubmitMediaInfoJobResponse submitMediaInfoJob(const Models::SubmitMediaInfoJobRequest &request);

      /**
       * @summary The `SubmitMediaProducingJob` API submits a media production job. This job provides automated processing for post-production tasks, such as editing and composing video and audio assets.
       *
       * @description - **Billing: Video editing is charged based on the duration of the output video. For more information, see [video editing](https://help.aliyun.com/document_detail/2840899.html). Failed jobs incur no charges.**
       * - Flexible editing capabilities: Use this operation to arrange and design assets. It supports complex video editing through flexible [timeline](https://help.aliyun.com/document_detail/198823.html) configurations.
       * - Asset reference rules: Assets referenced in the timeline can be media assets from your asset library or OSS objects. External URLs and CDN URLs are not supported. If an asset is an OSS object, MediaUrl must be an OSS URL, for example: https\\://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
       * - Asynchronous job execution: This operation creates an [asynchronous task](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a task ID and queues the job for background processing. The job is not yet complete at this stage. The system delivers the final result via a callback notification. You can also query the job status by [querying the editing and compositing job](https://help.aliyun.com/document_detail/441149.html).
       * - Job status query:
       *   1. Call [Query an editing and compositing job](https://help.aliyun.com/document_detail/441149.html) and pass the JobId to query the job status and result.
       *   2. When you submit an editing and compositing job, you can include a callback URL in the **UserData** parameter of your request. When the job completes or fails, the system sends a notification to this callback URL. You can use the callback data to retrieve the job status.
       * - Media asset registration and analysis: After video compositing completes, the system automatically registers a new media asset, which is initially in an analyzing state. After the analysis is complete, you can use the MediaId to retrieve the duration and resolution of the output video.
       * ## Limitations
       * - The throttling limit for this operation is 30 QPS. Submitted jobs are queued and processed asynchronously.
       *   > If you exceed this limit, you may encounter a "Throttling.User" error. For more information, see ["Throttling.User" error when submitting editing jobs](https://help.aliyun.com/document_detail/453484.html).
       * - When you submit a large number of jobs (for example, 1,000 or 10,000), the system scales out automatically, but you may experience queueing delays.
       * - The maximum number of tracks is 100 for each type: video, image, and subtitle.
       * - While there is no limit on the number of assets, their total size must not exceed 1 TB.
       * - The region of the input or output OSS bucket must match the IMS region.
       * - When the output is a video, the following resolution limits apply:
       *   - Both the width and height must be at least 128 px.
       *   - Neither the width nor the height can exceed 4096 px.
       *   - The shorter side cannot exceed 2160 px.
       *
       * @param request SubmitMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaProducingJobResponse
       */
      Models::SubmitMediaProducingJobResponse submitMediaProducingJobWithOptions(const Models::SubmitMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The `SubmitMediaProducingJob` API submits a media production job. This job provides automated processing for post-production tasks, such as editing and composing video and audio assets.
       *
       * @description - **Billing: Video editing is charged based on the duration of the output video. For more information, see [video editing](https://help.aliyun.com/document_detail/2840899.html). Failed jobs incur no charges.**
       * - Flexible editing capabilities: Use this operation to arrange and design assets. It supports complex video editing through flexible [timeline](https://help.aliyun.com/document_detail/198823.html) configurations.
       * - Asset reference rules: Assets referenced in the timeline can be media assets from your asset library or OSS objects. External URLs and CDN URLs are not supported. If an asset is an OSS object, MediaUrl must be an OSS URL, for example: https\\://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
       * - Asynchronous job execution: This operation creates an [asynchronous task](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a task ID and queues the job for background processing. The job is not yet complete at this stage. The system delivers the final result via a callback notification. You can also query the job status by [querying the editing and compositing job](https://help.aliyun.com/document_detail/441149.html).
       * - Job status query:
       *   1. Call [Query an editing and compositing job](https://help.aliyun.com/document_detail/441149.html) and pass the JobId to query the job status and result.
       *   2. When you submit an editing and compositing job, you can include a callback URL in the **UserData** parameter of your request. When the job completes or fails, the system sends a notification to this callback URL. You can use the callback data to retrieve the job status.
       * - Media asset registration and analysis: After video compositing completes, the system automatically registers a new media asset, which is initially in an analyzing state. After the analysis is complete, you can use the MediaId to retrieve the duration and resolution of the output video.
       * ## Limitations
       * - The throttling limit for this operation is 30 QPS. Submitted jobs are queued and processed asynchronously.
       *   > If you exceed this limit, you may encounter a "Throttling.User" error. For more information, see ["Throttling.User" error when submitting editing jobs](https://help.aliyun.com/document_detail/453484.html).
       * - When you submit a large number of jobs (for example, 1,000 or 10,000), the system scales out automatically, but you may experience queueing delays.
       * - The maximum number of tracks is 100 for each type: video, image, and subtitle.
       * - While there is no limit on the number of assets, their total size must not exceed 1 TB.
       * - The region of the input or output OSS bucket must match the IMS region.
       * - When the output is a video, the following resolution limits apply:
       *   - Both the width and height must be at least 128 px.
       *   - Neither the width nor the height can exceed 4096 px.
       *   - The shorter side cannot exceed 2160 px.
       *
       * @param request SubmitMediaProducingJobRequest
       * @return SubmitMediaProducingJobResponse
       */
      Models::SubmitMediaProducingJobResponse submitMediaProducingJob(const Models::SubmitMediaProducingJobRequest &request);

      /**
       * @summary Submits a packaging job.
       *
       * @param tmpReq SubmitPackageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPackageJobResponse
       */
      Models::SubmitPackageJobResponse submitPackageJobWithOptions(const Models::SubmitPackageJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a packaging job.
       *
       * @param request SubmitPackageJobRequest
       * @return SubmitPackageJobResponse
       */
      Models::SubmitPackageJobResponse submitPackageJob(const Models::SubmitPackageJobRequest &request);

      /**
       * @summary Submits a project export task.
       *
       * @param request SubmitProjectExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitProjectExportJobResponse
       */
      Models::SubmitProjectExportJobResponse submitProjectExportJobWithOptions(const Models::SubmitProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a project export task.
       *
       * @param request SubmitProjectExportJobRequest
       * @return SubmitProjectExportJobResponse
       */
      Models::SubmitProjectExportJobResponse submitProjectExportJob(const Models::SubmitProjectExportJobRequest &request);

      /**
       * @summary Submits a batch job to render multiple videos by providing a list of editing project IDs.
       *
       * @description - After submitting a job, you can call ListBatchMediaProducingJob to retrieve all matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call GetBatchMediaProducingJob.
       *
       * @param request SubmitSceneBatchEditingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSceneBatchEditingJobResponse
       */
      Models::SubmitSceneBatchEditingJobResponse submitSceneBatchEditingJobWithOptions(const Models::SubmitSceneBatchEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch job to render multiple videos by providing a list of editing project IDs.
       *
       * @description - After submitting a job, you can call ListBatchMediaProducingJob to retrieve all matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call GetBatchMediaProducingJob.
       *
       * @param request SubmitSceneBatchEditingJobRequest
       * @return SubmitSceneBatchEditingJobResponse
       */
      Models::SubmitSceneBatchEditingJobResponse submitSceneBatchEditingJob(const Models::SubmitSceneBatchEditingJobRequest &request);

      /**
       * @summary Selects suitable clips based on the submitted videos, images, and voiceovers, and returns the selection results. Two scenarios are supported: image-text matching and highlight mashup.
       *
       * @description - After a job is submitted, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to query submitted jobs, or [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to query the job status and results.
       * * The feature is in public preview and charges no fees.
       *
       * @param request SubmitSceneMediaSelectionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSceneMediaSelectionJobResponse
       */
      Models::SubmitSceneMediaSelectionJobResponse submitSceneMediaSelectionJobWithOptions(const Models::SubmitSceneMediaSelectionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Selects suitable clips based on the submitted videos, images, and voiceovers, and returns the selection results. Two scenarios are supported: image-text matching and highlight mashup.
       *
       * @description - After a job is submitted, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to query submitted jobs, or [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to query the job status and results.
       * * The feature is in public preview and charges no fees.
       *
       * @param request SubmitSceneMediaSelectionJobRequest
       * @return SubmitSceneMediaSelectionJobResponse
       */
      Models::SubmitSceneMediaSelectionJobResponse submitSceneMediaSelectionJob(const Models::SubmitSceneMediaSelectionJobRequest &request);

      /**
       * @summary Arranges media assets, including videos, images, background music, and voiceovers, into a complete timeline based on media selection results, and creates an editing project for preview. Two scenarios are supported: image-text matching and highlight mashup.
       *
       * @description - After submitting a job, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html).
       * * The feature is in public preview and does not charge fees.
       *
       * @param request SubmitSceneTimelineOrganizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSceneTimelineOrganizationJobResponse
       */
      Models::SubmitSceneTimelineOrganizationJobResponse submitSceneTimelineOrganizationJobWithOptions(const Models::SubmitSceneTimelineOrganizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Arranges media assets, including videos, images, background music, and voiceovers, into a complete timeline based on media selection results, and creates an editing project for preview. Two scenarios are supported: image-text matching and highlight mashup.
       *
       * @description - After submitting a job, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to retrieve matching jobs. To get detailed information for a specific job, including its status, output media asset IDs, and URLs, call [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html).
       * * The feature is in public preview and does not charge fees.
       *
       * @param request SubmitSceneTimelineOrganizationJobRequest
       * @return SubmitSceneTimelineOrganizationJobResponse
       */
      Models::SubmitSceneTimelineOrganizationJobResponse submitSceneTimelineOrganizationJob(const Models::SubmitSceneTimelineOrganizationJobRequest &request);

      /**
       * @summary Analyzes media assets, such as short-form dramas, to automatically identify highlight clips and generate a highlight compilation.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous processing. Once the job is complete, the system sends the final result through a callback notification.
       *
       * @param request SubmitScreenMediaHighlightsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitScreenMediaHighlightsJobResponse
       */
      Models::SubmitScreenMediaHighlightsJobResponse submitScreenMediaHighlightsJobWithOptions(const Models::SubmitScreenMediaHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes media assets, such as short-form dramas, to automatically identify highlight clips and generate a highlight compilation.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and queues the job for asynchronous processing. Once the job is complete, the system sends the final result through a callback notification.
       *
       * @param request SubmitScreenMediaHighlightsJobRequest
       * @return SubmitScreenMediaHighlightsJobResponse
       */
      Models::SubmitScreenMediaHighlightsJobResponse submitScreenMediaHighlightsJob(const Models::SubmitScreenMediaHighlightsJobRequest &request);

      /**
       * @summary Submits a job to segment a long video into multiple video segments. The output can be multiple video files or a new media asset.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job in the background. You can get the results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or by calling the [Get smart task results](https://help.aliyun.com/document_detail/441172.html) operation.
       *
       * @param request SubmitSegmentationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSegmentationJobResponse
       */
      Models::SubmitSegmentationJobResponse submitSegmentationJobWithOptions(const Models::SubmitSegmentationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job to segment a long video into multiple video segments. The output can be multiple video files or a new media asset.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job in the background. You can get the results through a [callback notification](https://help.aliyun.com/document_detail/3027141.html) or by calling the [Get smart task results](https://help.aliyun.com/document_detail/441172.html) operation.
       *
       * @param request SubmitSegmentationJobRequest
       * @return SubmitSegmentationJobResponse
       */
      Models::SubmitSegmentationJobResponse submitSegmentationJob(const Models::SubmitSegmentationJobRequest &request);

      /**
       * @summary Submits a smart tagging job.
       *
       * @description ### Prerequisites
       * Before submitting a smart tagging job, you must configure the analysis types in a template. For more information, see [CreateCustomTemplate](https://help.aliyun.com/document_detail/441184.html).
       * ### Limitations
       * - The smart tagging feature is available only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
       * - The default concurrency for the smart tagging pipeline is 2. To request a higher concurrency limit, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q).
       * - Smart tagging jobs and their results are retained for 180 days, after which they are automatically deleted.
       *
       * @param tmpReq SubmitSmarttagJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmarttagJobResponse
       */
      Models::SubmitSmarttagJobResponse submitSmarttagJobWithOptions(const Models::SubmitSmarttagJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a smart tagging job.
       *
       * @description ### Prerequisites
       * Before submitting a smart tagging job, you must configure the analysis types in a template. For more information, see [CreateCustomTemplate](https://help.aliyun.com/document_detail/441184.html).
       * ### Limitations
       * - The smart tagging feature is available only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
       * - The default concurrency for the smart tagging pipeline is 2. To request a higher concurrency limit, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket?spm=a2c4g.11186623.0.0.645019b6Btnu4q).
       * - Smart tagging jobs and their results are retained for 180 days, after which they are automatically deleted.
       *
       * @param request SubmitSmarttagJobRequest
       * @return SubmitSmarttagJobResponse
       */
      Models::SubmitSmarttagJobResponse submitSmarttagJob(const Models::SubmitSmarttagJobRequest &request);

      /**
       * @summary This API submits a snapshot job. Specify a media file by its ID or URL, a time point, and the desired format. The API then generates the snapshot and saves it to the specified location.
       *
       * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). Submitting a task returns a task ID and queues it for asynchronous processing. A callback delivers the final result. Alternatively, you can check the task status by [querying screenshot task details](https://help.aliyun.com/document_detail/441203.html).
       *
       * @param tmpReq SubmitSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJobWithOptions(const Models::SubmitSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API submits a snapshot job. Specify a media file by its ID or URL, a time point, and the desired format. The API then generates the snapshot and saves it to the specified location.
       *
       * @description This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). Submitting a task returns a task ID and queues it for asynchronous processing. A callback delivers the final result. Alternatively, you can check the task status by [querying screenshot task details](https://help.aliyun.com/document_detail/441203.html).
       *
       * @param request SubmitSnapshotJobRequest
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJob(const Models::SubmitSnapshotJobRequest &request);

      /**
       * @summary Starts a job to generate a highlight video from sports footage with commentary.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API immediately returns a job ID. The job is then queued for asynchronous processing. A callback delivers the final result.
       *
       * @param request SubmitSportsHighlightsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSportsHighlightsJobResponse
       */
      Models::SubmitSportsHighlightsJobResponse submitSportsHighlightsJobWithOptions(const Models::SubmitSportsHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a job to generate a highlight video from sports footage with commentary.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the API immediately returns a job ID. The job is then queued for asynchronous processing. A callback delivers the final result.
       *
       * @param request SubmitSportsHighlightsJobRequest
       * @return SubmitSportsHighlightsJobResponse
       */
      Models::SubmitSportsHighlightsJobResponse submitSportsHighlightsJob(const Models::SubmitSportsHighlightsJobRequest &request);

      /**
       * @summary Submits a standard human voice cloning job. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
       *
       * @param request SubmitStandardCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitStandardCustomizedVoiceJobResponse
       */
      Models::SubmitStandardCustomizedVoiceJobResponse submitStandardCustomizedVoiceJobWithOptions(const Models::SubmitStandardCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a standard human voice cloning job. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
       *
       * @param request SubmitStandardCustomizedVoiceJobRequest
       * @return SubmitStandardCustomizedVoiceJobResponse
       */
      Models::SubmitStandardCustomizedVoiceJobResponse submitStandardCustomizedVoiceJob(const Models::SubmitStandardCustomizedVoiceJobRequest &request);

      /**
       * @summary Submits a media file in synchronous mode for media information analysis.
       *
       * @description Analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
       *
       * @param tmpReq SubmitSyncMediaInfoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSyncMediaInfoJobResponse
       */
      Models::SubmitSyncMediaInfoJobResponse submitSyncMediaInfoJobWithOptions(const Models::SubmitSyncMediaInfoJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media file in synchronous mode for media information analysis.
       *
       * @description Analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
       *
       * @param request SubmitSyncMediaInfoJobRequest
       * @return SubmitSyncMediaInfoJobResponse
       */
      Models::SubmitSyncMediaInfoJobResponse submitSyncMediaInfoJob(const Models::SubmitSyncMediaInfoJobRequest &request);

      /**
       * @summary Generates marketing copy based on the provided keywords, text length, and number of copy variations. Due to the complexities of the Chinese language, the length of the output text may differ from the requested length. After submitting the job, call the `GetSmartHandleJob` operation with the returned job ID to query the job status and retrieve the results.
       *
       * @description - Before you call this operation, you must purchase the enterprise subscription service to obtain the required permissions<props="china">. For more information, see [subscription billing](~~439260#3285adfad70dw~~).
       * - This operation is billed based on the number of tokens in the generated content. The number of tokens is positively correlated with the number of characters in the generated text. For more information, see [smart video creation](https://help.aliyun.com/document_detail/2840901.html). No charges are incurred for failed jobs.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID. The job is then queued for background processing. The service delivers results via a callback. You can also call [GetSmartHandleJob](https://help.aliyun.com/document_detail/441172.html) to actively poll for the job status.
       *
       * @param request SubmitTextGenerateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTextGenerateJobResponse
       */
      Models::SubmitTextGenerateJobResponse submitTextGenerateJobWithOptions(const Models::SubmitTextGenerateJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates marketing copy based on the provided keywords, text length, and number of copy variations. Due to the complexities of the Chinese language, the length of the output text may differ from the requested length. After submitting the job, call the `GetSmartHandleJob` operation with the returned job ID to query the job status and retrieve the results.
       *
       * @description - Before you call this operation, you must purchase the enterprise subscription service to obtain the required permissions<props="china">. For more information, see [subscription billing](~~439260#3285adfad70dw~~).
       * - This operation is billed based on the number of tokens in the generated content. The number of tokens is positively correlated with the number of characters in the generated text. For more information, see [smart video creation](https://help.aliyun.com/document_detail/2840901.html). No charges are incurred for failed jobs.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID. The job is then queued for background processing. The service delivers results via a callback. You can also call [GetSmartHandleJob](https://help.aliyun.com/document_detail/441172.html) to actively poll for the job status.
       *
       * @param request SubmitTextGenerateJobRequest
       * @return SubmitTextGenerateJobResponse
       */
      Models::SubmitTextGenerateJobResponse submitTextGenerateJob(const Models::SubmitTextGenerateJobRequest &request);

      /**
       * @summary Submits a job to generate A/B stream variants of a video for forensic watermarking.
       *
       * @description - This operation supports only videos that are three minutes or longer. Submitting a job for a shorter video may cause the API call to fail or produce no output.
       * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job asynchronously. You can obtain the processing result through a callback or by [querying the list of A/B stream forensic watermarking jobs](https://help.aliyun.com/document_detail/2862133.html).
       *
       * @param tmpReq SubmitTraceAbJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceAbJobResponse
       */
      Models::SubmitTraceAbJobResponse submitTraceAbJobWithOptions(const Models::SubmitTraceAbJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job to generate A/B stream variants of a video for forensic watermarking.
       *
       * @description - This operation supports only videos that are three minutes or longer. Submitting a job for a shorter video may cause the API call to fail or produce no output.
       * - This is an [asynchronous interface](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID and processes the job asynchronously. You can obtain the processing result through a callback or by [querying the list of A/B stream forensic watermarking jobs](https://help.aliyun.com/document_detail/2862133.html).
       *
       * @param request SubmitTraceAbJobRequest
       * @return SubmitTraceAbJobResponse
       */
      Models::SubmitTraceAbJobResponse submitTraceAbJob(const Models::SubmitTraceAbJobRequest &request);

      /**
       * @summary Submits a trace watermark extraction job.
       *
       * @description - The digital watermarking APIs are available only in the China (Shanghai) and China (Beijing) regions.
       * - Trace watermark extraction is supported only for videos that are 3 minutes or longer. Jobs for shorter videos will fail.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, a job ID is returned. The job is not immediately complete and is queued for asynchronous processing. You can get the final result through a callback notification or check the job status by calling the [GetTraceExtractJob](https://help.aliyun.com/document_detail/2862130.html) operation.
       *
       * @param tmpReq SubmitTraceExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceExtractJobResponse
       */
      Models::SubmitTraceExtractJobResponse submitTraceExtractJobWithOptions(const Models::SubmitTraceExtractJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a trace watermark extraction job.
       *
       * @description - The digital watermarking APIs are available only in the China (Shanghai) and China (Beijing) regions.
       * - Trace watermark extraction is supported only for videos that are 3 minutes or longer. Jobs for shorter videos will fail.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, a job ID is returned. The job is not immediately complete and is queued for asynchronous processing. You can get the final result through a callback notification or check the job status by calling the [GetTraceExtractJob](https://help.aliyun.com/document_detail/2862130.html) operation.
       *
       * @param request SubmitTraceExtractJobRequest
       * @return SubmitTraceExtractJobResponse
       */
      Models::SubmitTraceExtractJobResponse submitTraceExtractJob(const Models::SubmitTraceExtractJobRequest &request);

      /**
       * @summary Submits a job to process an M3U8 file for video watermarking for tracing.
       *
       * @description - You must first obtain a media ID by submitting a job for an A/B stream with video watermarking for tracing. This operation uses the returned media ID for processing.
       * - Currently, digital watermarking-related operations are supported only in the China (Shanghai) and China (Beijing) regions.
       * - This is an [asynchronous call](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a task ID and processes the job in the background. The initial response does not mean the job is complete. You can get the final result through a [callback notification](https://help.aliyun.com/document_detail/2862136.html) or by calling the [QueryTraceM3u8JobList](https://help.aliyun.com/document_detail/2862136.html) operation to check the job\\"s status.
       * - The signature for an M3U8 file generated by a video watermarking for tracing job is valid for 24 hours after job completion. You must query and use the watermarking information within this period. If the signature expires, you can no longer retrieve the watermarking information. To regain access, you must submit a new job.
       *
       * @param tmpReq SubmitTraceM3u8JobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceM3u8JobResponse
       */
      Models::SubmitTraceM3u8JobResponse submitTraceM3u8JobWithOptions(const Models::SubmitTraceM3u8JobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job to process an M3U8 file for video watermarking for tracing.
       *
       * @description - You must first obtain a media ID by submitting a job for an A/B stream with video watermarking for tracing. This operation uses the returned media ID for processing.
       * - Currently, digital watermarking-related operations are supported only in the China (Shanghai) and China (Beijing) regions.
       * - This is an [asynchronous call](https://help.aliyun.com/document_detail/3027141.html). When you submit a job, the system returns a task ID and processes the job in the background. The initial response does not mean the job is complete. You can get the final result through a [callback notification](https://help.aliyun.com/document_detail/2862136.html) or by calling the [QueryTraceM3u8JobList](https://help.aliyun.com/document_detail/2862136.html) operation to check the job\\"s status.
       * - The signature for an M3U8 file generated by a video watermarking for tracing job is valid for 24 hours after job completion. You must query and use the watermarking information within this period. If the signature expires, you can no longer retrieve the watermarking information. To regain access, you must submit a new job.
       *
       * @param request SubmitTraceM3u8JobRequest
       * @return SubmitTraceM3u8JobResponse
       */
      Models::SubmitTraceM3u8JobResponse submitTraceM3u8Job(const Models::SubmitTraceM3u8JobRequest &request);

      /**
       * @summary Call the SubmitTranscodeJob operation to submit a video or audio transcoding job to Intelligent Media Services. In the request, you must specify the source file to transcode, the output format, and related parameters.
       *
       * @description - This operation will be discontinued on December 31, 2025. Use [SubmitMediaConvertJob](https://help.aliyun.com/document_detail/2867673.html) instead.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID. The job is not completed immediately but is queued for asynchronous execution in the background. You will receive the final result through a callback notification. You can also call [QueryTranscodeJob](https://help.aliyun.com/document_detail/441206.html) to query the job status.
       *
       * @param tmpReq SubmitTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTranscodeJobResponse
       */
      Models::SubmitTranscodeJobResponse submitTranscodeJobWithOptions(const Models::SubmitTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the SubmitTranscodeJob operation to submit a video or audio transcoding job to Intelligent Media Services. In the request, you must specify the source file to transcode, the output format, and related parameters.
       *
       * @description - This operation will be discontinued on December 31, 2025. Use [SubmitMediaConvertJob](https://help.aliyun.com/document_detail/2867673.html) instead.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the system returns a job ID. The job is not completed immediately but is queued for asynchronous execution in the background. You will receive the final result through a callback notification. You can also call [QueryTranscodeJob](https://help.aliyun.com/document_detail/441206.html) to query the job status.
       *
       * @param request SubmitTranscodeJobRequest
       * @return SubmitTranscodeJobResponse
       */
      Models::SubmitTranscodeJobResponse submitTranscodeJob(const Models::SubmitTranscodeJobRequest &request);

      /**
       * @summary Submits a video cognition job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and queues it for processing. The final results are delivered via a callback notification. You can also check the job status by calling the [QueryIntelligentContentUnderstandingTask](https://help.aliyun.com/document_detail/2975154.html) operation.
       *
       * @param tmpReq SubmitVideoCognitionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoCognitionJobResponse
       */
      Models::SubmitVideoCognitionJobResponse submitVideoCognitionJobWithOptions(const Models::SubmitVideoCognitionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video cognition job.
       *
       * @description This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the service returns a job ID and queues it for processing. The final results are delivered via a callback notification. You can also check the job status by calling the [QueryIntelligentContentUnderstandingTask](https://help.aliyun.com/document_detail/2975154.html) operation.
       *
       * @param request SubmitVideoCognitionJobRequest
       * @return SubmitVideoCognitionJobResponse
       */
      Models::SubmitVideoCognitionJobResponse submitVideoCognitionJob(const Models::SubmitVideoCognitionJobRequest &request);

      /**
       * @summary Call this operation to submit a video translation job. This service can translate subtitles and spoken content, and generate lip-sync for the translated audio.
       *
       * @description - The region in each media asset\\"s OSS URL must match the region of the API endpoint you call.
       * - This operation supports up to 30 requests per second (QPS). If you submit a large number of jobs, they are automatically queued and processed with dynamic scaling. Job concurrency is unlimited.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID and queues the job for background processing. The final result is delivered through a callback. You can also poll for the job status by calling the [GetAIJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
       * >Notice: 
       * For detailed parameter descriptions and examples, see
       * <props="china">
       * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/zh/ims/use-cases/introduction-and-examples-of-video-translation-parameters)
       * <props="intl">
       * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/document_detail/2852702.html)
       *
       * @param request SubmitVideoTranslationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJobWithOptions(const Models::SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to submit a video translation job. This service can translate subtitles and spoken content, and generate lip-sync for the translated audio.
       *
       * @description - The region in each media asset\\"s OSS URL must match the region of the API endpoint you call.
       * - This operation supports up to 30 requests per second (QPS). If you submit a large number of jobs, they are automatically queued and processed with dynamic scaling. Job concurrency is unlimited.
       * - This is an [asynchronous API](https://help.aliyun.com/document_detail/3027141.html). After you submit a job, the operation returns a job ID and queues the job for background processing. The final result is delivered through a callback. You can also poll for the job status by calling the [GetAIJobResult](https://help.aliyun.com/document_detail/441172.html) operation.
       * >Notice: 
       * For detailed parameter descriptions and examples, see
       * <props="china">
       * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/zh/ims/use-cases/introduction-and-examples-of-video-translation-parameters)
       * <props="intl">
       * [Introduction and Examples of Video Translation Parameters](https://help.aliyun.com/document_detail/2852702.html)
       *
       * @param request SubmitVideoTranslationJobRequest
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJob(const Models::SubmitVideoTranslationJobRequest &request);

      /**
       * @summary Submits a Yike AI application job.
       *
       * @param request SubmitYikeAIAppJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeAIAppJobResponse
       */
      Models::SubmitYikeAIAppJobResponse submitYikeAIAppJobWithOptions(const Models::SubmitYikeAIAppJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a Yike AI application job.
       *
       * @param request SubmitYikeAIAppJobRequest
       * @return SubmitYikeAIAppJobResponse
       */
      Models::SubmitYikeAIAppJobResponse submitYikeAIAppJob(const Models::SubmitYikeAIAppJobRequest &request);

      /**
       * @summary Submits a Yike AI application job.
       *
       * @param request SubmitYikeStoryboardJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitYikeStoryboardJobResponse
       */
      Models::SubmitYikeStoryboardJobResponse submitYikeStoryboardJobWithOptions(const Models::SubmitYikeStoryboardJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a Yike AI application job.
       *
       * @param request SubmitYikeStoryboardJobRequest
       * @return SubmitYikeStoryboardJobResponse
       */
      Models::SubmitYikeStoryboardJobResponse submitYikeStoryboardJob(const Models::SubmitYikeStoryboardJobRequest &request);

      /**
       * @summary Hands off a conversation to a human agent.
       *
       * @param request TakeoverAIAgentCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TakeoverAIAgentCallResponse
       */
      Models::TakeoverAIAgentCallResponse takeoverAIAgentCallWithOptions(const Models::TakeoverAIAgentCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hands off a conversation to a human agent.
       *
       * @param request TakeoverAIAgentCallRequest
       * @return TakeoverAIAgentCallResponse
       */
      Models::TakeoverAIAgentCallResponse takeoverAIAgentCall(const Models::TakeoverAIAgentCallRequest &request);

      /**
       * @summary Modifies the configuration of a specified AI agent instance.
       *
       * @description This operation updates the configuration of an AI agent instance, such as its voice.
       *
       * @param tmpReq UpdateAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAIAgentInstanceResponse
       */
      Models::UpdateAIAgentInstanceResponse updateAIAgentInstanceWithOptions(const Models::UpdateAIAgentInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a specified AI agent instance.
       *
       * @description This operation updates the configuration of an AI agent instance, such as its voice.
       *
       * @param request UpdateAIAgentInstanceRequest
       * @return UpdateAIAgentInstanceResponse
       */
      Models::UpdateAIAgentInstanceResponse updateAIAgentInstance(const Models::UpdateAIAgentInstanceRequest &request);

      /**
       * @summary Modifies an ad insertion configuration.
       *
       * @param request UpdateAdInsertionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdInsertionResponse
       */
      Models::UpdateAdInsertionResponse updateAdInsertionWithOptions(const Models::UpdateAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an ad insertion configuration.
       *
       * @param request UpdateAdInsertionRequest
       * @return UpdateAdInsertionResponse
       */
      Models::UpdateAdInsertionResponse updateAdInsertion(const Models::UpdateAdInsertionRequest &request);

      /**
       * @summary Modifies a digital human training job. You can modify the basic information or update parameters such as Video and Transparent for retraining if the training failed.
       *
       * @param request UpdateAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAvatarTrainingJobResponse
       */
      Models::UpdateAvatarTrainingJobResponse updateAvatarTrainingJobWithOptions(const Models::UpdateAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a digital human training job. You can modify the basic information or update parameters such as Video and Transparent for retraining if the training failed.
       *
       * @param request UpdateAvatarTrainingJobRequest
       * @return UpdateAvatarTrainingJobResponse
       */
      Models::UpdateAvatarTrainingJobResponse updateAvatarTrainingJob(const Models::UpdateAvatarTrainingJobRequest &request);

      /**
       * @summary Updates a category.
       *
       * @description After you create a media asset category, you can call this operation to find the category based on the category ID and change the name of the category.
       *
       * @param request UpdateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategoryWithOptions(const Models::UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a category.
       *
       * @description After you create a media asset category, you can call this operation to find the category based on the category ID and change the name of the category.
       *
       * @param request UpdateCategoryRequest
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategory(const Models::UpdateCategoryRequest &request);

      /**
       * @summary Modifies a MediaWeaver channel.
       *
       * @param request UpdateChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChannelResponse
       */
      Models::UpdateChannelResponse updateChannelWithOptions(const Models::UpdateChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a MediaWeaver channel.
       *
       * @param request UpdateChannelRequest
       * @return UpdateChannelResponse
       */
      Models::UpdateChannelResponse updateChannel(const Models::UpdateChannelRequest &request);

      /**
       * @summary Updates a custom template.
       *
       * @param request UpdateCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomTemplateResponse
       */
      Models::UpdateCustomTemplateResponse updateCustomTemplateWithOptions(const Models::UpdateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom template.
       *
       * @param request UpdateCustomTemplateRequest
       * @return UpdateCustomTemplateResponse
       */
      Models::UpdateCustomTemplateResponse updateCustomTemplate(const Models::UpdateCustomTemplateRequest &request);

      /**
       * @summary Updates a personalized human voice. Only the media asset ID of the sample audio file can be modified.
       *
       * @param request UpdateCustomizedVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomizedVoiceResponse
       */
      Models::UpdateCustomizedVoiceResponse updateCustomizedVoiceWithOptions(const Models::UpdateCustomizedVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a personalized human voice. Only the media asset ID of the sample audio file can be modified.
       *
       * @param request UpdateCustomizedVoiceRequest
       * @return UpdateCustomizedVoiceResponse
       */
      Models::UpdateCustomizedVoiceResponse updateCustomizedVoice(const Models::UpdateCustomizedVoiceRequest &request);

      /**
       * @summary Updates the title, timeline, cover, and other properties of a cloud editing project.
       *
       * @param request UpdateEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProjectWithOptions(const Models::UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the title, timeline, cover, and other properties of a cloud editing project.
       *
       * @param request UpdateEditingProjectRequest
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProject(const Models::UpdateEditingProjectRequest &request);

      /**
       * @summary Modifies a specified hotword library, including its name, description, and hotword list.
       *
       * @description ## [](#)
       * - Modify a specified hotword library.
       * - The hotword library ID (`HotwordLibraryId`) is required to identify the library that requires modification.
       * - You can modify its name (`Name` ), description (`Description` ), and hotword list (`HotWords`).
       * - Each hotword in the list can also be modified, including its content (`Text`), weight (`Weight`), language (`Language`), and translation results (`TranspositionResultList`).
       * - A single account supports up to 100 hotword libraries, each containing a maximum of 300 hotword entries. In a library, the combination of `language` and `text` of an entry must be unique. The combination of `TranslatedText` and `TargetLanguage` in `TranspositionResultList` must also be unique.
       *
       * @param tmpReq UpdateHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotwordLibraryResponse
       */
      Models::UpdateHotwordLibraryResponse updateHotwordLibraryWithOptions(const Models::UpdateHotwordLibraryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a specified hotword library, including its name, description, and hotword list.
       *
       * @description ## [](#)
       * - Modify a specified hotword library.
       * - The hotword library ID (`HotwordLibraryId`) is required to identify the library that requires modification.
       * - You can modify its name (`Name` ), description (`Description` ), and hotword list (`HotWords`).
       * - Each hotword in the list can also be modified, including its content (`Text`), weight (`Weight`), language (`Language`), and translation results (`TranspositionResultList`).
       * - A single account supports up to 100 hotword libraries, each containing a maximum of 300 hotword entries. In a library, the combination of `language` and `text` of an entry must be unique. The combination of `TranslatedText` and `TargetLanguage` in `TranspositionResultList` must also be unique.
       *
       * @param request UpdateHotwordLibraryRequest
       * @return UpdateHotwordLibraryResponse
       */
      Models::UpdateHotwordLibraryResponse updateHotwordLibrary(const Models::UpdateHotwordLibraryRequest &request);

      /**
       * @summary Updates the configuration of a live package channel, including the protocol, segment duration, and number of segments.
       *
       * @description ## [](#)Usage notes
       * You need to provide the name of the channel group to which the channel belongs, channel name, protocol, segment duration, and number of segments to update. In addition, you can choose to add or modify the description of the channel. Make sure that the provided channel group name and channel name conform to the naming conventions.
       *
       * @param request UpdateLivePackageChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageChannelResponse
       */
      Models::UpdateLivePackageChannelResponse updateLivePackageChannelWithOptions(const Models::UpdateLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a live package channel, including the protocol, segment duration, and number of segments.
       *
       * @description ## [](#)Usage notes
       * You need to provide the name of the channel group to which the channel belongs, channel name, protocol, segment duration, and number of segments to update. In addition, you can choose to add or modify the description of the channel. Make sure that the provided channel group name and channel name conform to the naming conventions.
       *
       * @param request UpdateLivePackageChannelRequest
       * @return UpdateLivePackageChannelResponse
       */
      Models::UpdateLivePackageChannelResponse updateLivePackageChannel(const Models::UpdateLivePackageChannelRequest &request);

      /**
       * @summary Updates the credentials of ingest endpoints associated with a live package channel.
       *
       * @description ## [](#)Usage notes
       * You can choose to update the primary endpoint, secondary endpoint, or both. The response includes the updated ingest endpoint URL, username, and password for the ingest device to reconfigure.
       *
       * @param request UpdateLivePackageChannelCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageChannelCredentialsResponse
       */
      Models::UpdateLivePackageChannelCredentialsResponse updateLivePackageChannelCredentialsWithOptions(const Models::UpdateLivePackageChannelCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the credentials of ingest endpoints associated with a live package channel.
       *
       * @description ## [](#)Usage notes
       * You can choose to update the primary endpoint, secondary endpoint, or both. The response includes the updated ingest endpoint URL, username, and password for the ingest device to reconfigure.
       *
       * @param request UpdateLivePackageChannelCredentialsRequest
       * @return UpdateLivePackageChannelCredentialsResponse
       */
      Models::UpdateLivePackageChannelCredentialsResponse updateLivePackageChannelCredentials(const Models::UpdateLivePackageChannelCredentialsRequest &request);

      /**
       * @summary Updates the information about a live package channel group including its description.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to modify the name and description of a live package channel group. The channel group name must conform to the naming conventions and can be up to 1,000 characters. The API response includes the updated channel group details and unique identifier of the request.
       *
       * @param request UpdateLivePackageChannelGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageChannelGroupResponse
       */
      Models::UpdateLivePackageChannelGroupResponse updateLivePackageChannelGroupWithOptions(const Models::UpdateLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a live package channel group including its description.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to modify the name and description of a live package channel group. The channel group name must conform to the naming conventions and can be up to 1,000 characters. The API response includes the updated channel group details and unique identifier of the request.
       *
       * @param request UpdateLivePackageChannelGroupRequest
       * @return UpdateLivePackageChannelGroupResponse
       */
      Models::UpdateLivePackageChannelGroupResponse updateLivePackageChannelGroup(const Models::UpdateLivePackageChannelGroupRequest &request);

      /**
       * @summary Update the real-time packaging origin endpoint configuration of a channel group, supporting protocol, time-shift settings, and access control.
       *
       * @description ## Request Description
       * Modify the origin endpoint configuration for the real-time packaging service under a specified channel group. You can use this API to adjust the origin protocol policy, set the time-shift duration in days, define the playlist name, and configure IP blacklists and whitelists to achieve fine-grained management of real-time streaming media delivery. Note that some parameters are required, and you must provide either an IP whitelist or an origin request header (at least one of them).
       *
       * @param tmpReq UpdateLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageOriginEndpointResponse
       */
      Models::UpdateLivePackageOriginEndpointResponse updateLivePackageOriginEndpointWithOptions(const Models::UpdateLivePackageOriginEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the real-time packaging origin endpoint configuration of a channel group, supporting protocol, time-shift settings, and access control.
       *
       * @description ## Request Description
       * Modify the origin endpoint configuration for the real-time packaging service under a specified channel group. You can use this API to adjust the origin protocol policy, set the time-shift duration in days, define the playlist name, and configure IP blacklists and whitelists to achieve fine-grained management of real-time streaming media delivery. Note that some parameters are required, and you must provide either an IP whitelist or an origin request header (at least one of them).
       *
       * @param request UpdateLivePackageOriginEndpointRequest
       * @return UpdateLivePackageOriginEndpointResponse
       */
      Models::UpdateLivePackageOriginEndpointResponse updateLivePackageOriginEndpoint(const Models::UpdateLivePackageOriginEndpointRequest &request);

      /**
       * @summary Updates the information about a live stream recording template.
       *
       * @description Only user-created templates can be updated. The preset template cannot be updated.
       *
       * @param tmpReq UpdateLiveRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveRecordTemplateResponse
       */
      Models::UpdateLiveRecordTemplateResponse updateLiveRecordTemplateWithOptions(const Models::UpdateLiveRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a live stream recording template.
       *
       * @description Only user-created templates can be updated. The preset template cannot be updated.
       *
       * @param request UpdateLiveRecordTemplateRequest
       * @return UpdateLiveRecordTemplateResponse
       */
      Models::UpdateLiveRecordTemplateResponse updateLiveRecordTemplate(const Models::UpdateLiveRecordTemplateRequest &request);

      /**
       * @summary Updates the information about a live stream snapshot template.
       *
       * @param request UpdateLiveSnapshotTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveSnapshotTemplateResponse
       */
      Models::UpdateLiveSnapshotTemplateResponse updateLiveSnapshotTemplateWithOptions(const Models::UpdateLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a live stream snapshot template.
       *
       * @param request UpdateLiveSnapshotTemplateRequest
       * @return UpdateLiveSnapshotTemplateResponse
       */
      Models::UpdateLiveSnapshotTemplateResponse updateLiveSnapshotTemplate(const Models::UpdateLiveSnapshotTemplateRequest &request);

      /**
       * @summary Updates the information about a live stream transcoding job.
       *
       * @description - For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
       * - For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
       *
       * @param tmpReq UpdateLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveTranscodeJobResponse
       */
      Models::UpdateLiveTranscodeJobResponse updateLiveTranscodeJobWithOptions(const Models::UpdateLiveTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a live stream transcoding job.
       *
       * @description - For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
       * - For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
       *
       * @param request UpdateLiveTranscodeJobRequest
       * @return UpdateLiveTranscodeJobResponse
       */
      Models::UpdateLiveTranscodeJobResponse updateLiveTranscodeJob(const Models::UpdateLiveTranscodeJobRequest &request);

      /**
       * @summary Updates the information about a live stream transcoding template.
       *
       * @param tmpReq UpdateLiveTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveTranscodeTemplateResponse
       */
      Models::UpdateLiveTranscodeTemplateResponse updateLiveTranscodeTemplateWithOptions(const Models::UpdateLiveTranscodeTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a live stream transcoding template.
       *
       * @param request UpdateLiveTranscodeTemplateRequest
       * @return UpdateLiveTranscodeTemplateResponse
       */
      Models::UpdateLiveTranscodeTemplateResponse updateLiveTranscodeTemplate(const Models::UpdateLiveTranscodeTemplateRequest &request);

      /**
       * @summary Modify the input information of a specific MediaConnect flow
       *
       * @description - The input can only be modified when the Flow instance status is offline.
       * - The input type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaConnectFlowInputResponse
       */
      Models::UpdateMediaConnectFlowInputResponse updateMediaConnectFlowInputWithOptions(const Models::UpdateMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the input information of a specific MediaConnect flow
       *
       * @description - The input can only be modified when the Flow instance status is offline.
       * - The input type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowInputRequest
       * @return UpdateMediaConnectFlowInputResponse
       */
      Models::UpdateMediaConnectFlowInputResponse updateMediaConnectFlowInput(const Models::UpdateMediaConnectFlowInputRequest &request);

      /**
       * @summary Modifies an output of a MediaConnect flow.
       *
       * @description - You can modify an output only when the flow is in the offline state.
       * - The output type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaConnectFlowOutputResponse
       */
      Models::UpdateMediaConnectFlowOutputResponse updateMediaConnectFlowOutputWithOptions(const Models::UpdateMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an output of a MediaConnect flow.
       *
       * @description - You can modify an output only when the flow is in the offline state.
       * - The output type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowOutputRequest
       * @return UpdateMediaConnectFlowOutputResponse
       */
      Models::UpdateMediaConnectFlowOutputResponse updateMediaConnectFlowOutput(const Models::UpdateMediaConnectFlowOutputRequest &request);

      /**
       * @summary Modifies the state of a MediaConnect flow.
       *
       * @param request UpdateMediaConnectFlowStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaConnectFlowStatusResponse
       */
      Models::UpdateMediaConnectFlowStatusResponse updateMediaConnectFlowStatusWithOptions(const Models::UpdateMediaConnectFlowStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the state of a MediaConnect flow.
       *
       * @param request UpdateMediaConnectFlowStatusRequest
       * @return UpdateMediaConnectFlowStatusResponse
       */
      Models::UpdateMediaConnectFlowStatusResponse updateMediaConnectFlowStatus(const Models::UpdateMediaConnectFlowStatusRequest &request);

      /**
       * @summary Updates information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
       *
       * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified. The request ID and media asset ID are returned. You cannot modify the input URL of a media asset by specifying the ID of the media asset.
       *
       * @param request UpdateMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaInfoResponse
       */
      Models::UpdateMediaInfoResponse updateMediaInfoWithOptions(const Models::UpdateMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
       *
       * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified. The request ID and media asset ID are returned. You cannot modify the input URL of a media asset by specifying the ID of the media asset.
       *
       * @param request UpdateMediaInfoRequest
       * @return UpdateMediaInfoResponse
       */
      Models::UpdateMediaInfoResponse updateMediaInfo(const Models::UpdateMediaInfoRequest &request);

      /**
       * @summary Modifies a MediaLive channel.
       *
       * @description - You can modify a MediaLive channel only when it is not running.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq UpdateMediaLiveChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaLiveChannelResponse
       */
      Models::UpdateMediaLiveChannelResponse updateMediaLiveChannelWithOptions(const Models::UpdateMediaLiveChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a MediaLive channel.
       *
       * @description - You can modify a MediaLive channel only when it is not running.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateMediaLiveChannelRequest
       * @return UpdateMediaLiveChannelResponse
       */
      Models::UpdateMediaLiveChannelResponse updateMediaLiveChannel(const Models::UpdateMediaLiveChannelRequest &request);

      /**
       * @summary Update a media live input.
       *
       * @description - Invoke this API to update a media live input.
       * - You can update an input only when it is not attached to any media live channel. Inputs that are already attached to a channel cannot be updated.
       * ## Queries per second (QPS) limit
       * The QPS limit for this API is 50 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API calls, which may impact your business. Make sure to call this API appropriately.
       *
       * @param tmpReq UpdateMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaLiveInputResponse
       */
      Models::UpdateMediaLiveInputResponse updateMediaLiveInputWithOptions(const Models::UpdateMediaLiveInputRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a media live input.
       *
       * @description - Invoke this API to update a media live input.
       * - You can update an input only when it is not attached to any media live channel. Inputs that are already attached to a channel cannot be updated.
       * ## Queries per second (QPS) limit
       * The QPS limit for this API is 50 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API calls, which may impact your business. Make sure to call this API appropriately.
       *
       * @param request UpdateMediaLiveInputRequest
       * @return UpdateMediaLiveInputResponse
       */
      Models::UpdateMediaLiveInputResponse updateMediaLiveInput(const Models::UpdateMediaLiveInputRequest &request);

      /**
       * @summary Modifies a security group created in MediaLive.
       *
       * @description - You can modify a security group only when it is not associated with a MediaLive input.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq UpdateMediaLiveInputSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaLiveInputSecurityGroupResponse
       */
      Models::UpdateMediaLiveInputSecurityGroupResponse updateMediaLiveInputSecurityGroupWithOptions(const Models::UpdateMediaLiveInputSecurityGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a security group created in MediaLive.
       *
       * @description - You can modify a security group only when it is not associated with a MediaLive input.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateMediaLiveInputSecurityGroupRequest
       * @return UpdateMediaLiveInputSecurityGroupResponse
       */
      Models::UpdateMediaLiveInputSecurityGroupResponse updateMediaLiveInputSecurityGroup(const Models::UpdateMediaLiveInputSecurityGroupRequest &request);

      /**
       * @summary Modifies the marks of a media asset.
       *
       * @param request UpdateMediaMarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaMarksResponse
       */
      Models::UpdateMediaMarksResponse updateMediaMarksWithOptions(const Models::UpdateMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the marks of a media asset.
       *
       * @param request UpdateMediaMarksRequest
       * @return UpdateMediaMarksResponse
       */
      Models::UpdateMediaMarksResponse updateMediaMarks(const Models::UpdateMediaMarksRequest &request);

      /**
       * @summary Update media asset information in the search library.
       *
       * @param request UpdateMediaToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaToSearchLibResponse
       */
      Models::UpdateMediaToSearchLibResponse updateMediaToSearchLibWithOptions(const Models::UpdateMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update media asset information in the search library.
       *
       * @param request UpdateMediaToSearchLibRequest
       * @return UpdateMediaToSearchLibResponse
       */
      Models::UpdateMediaToSearchLibResponse updateMediaToSearchLib(const Models::UpdateMediaToSearchLibRequest &request);

      /**
       * @summary Updates the information about an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request UpdatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const Models::UpdatePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const Models::UpdatePipelineRequest &request);

      /**
       * @summary Modifies a program in a MediaWeaver channel.
       *
       * @param request UpdateProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProgramResponse
       */
      Models::UpdateProgramResponse updateProgramWithOptions(const Models::UpdateProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a program in a MediaWeaver channel.
       *
       * @param request UpdateProgramRequest
       * @return UpdateProgramResponse
       */
      Models::UpdateProgramResponse updateProgram(const Models::UpdateProgramRequest &request);

      /**
       * @summary Updates the configuration of an RTC AI Agent instance, such as its voice and greeting.
       *
       * @param tmpReq UpdateRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtcRobotInstanceResponse
       */
      Models::UpdateRtcRobotInstanceResponse updateRtcRobotInstanceWithOptions(const Models::UpdateRtcRobotInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an RTC AI Agent instance, such as its voice and greeting.
       *
       * @param request UpdateRtcRobotInstanceRequest
       * @return UpdateRtcRobotInstanceResponse
       */
      Models::UpdateRtcRobotInstanceResponse updateRtcRobotInstance(const Models::UpdateRtcRobotInstanceRequest &request);

      /**
       * @summary Modifies a source.
       *
       * @param request UpdateSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSourceResponse
       */
      Models::UpdateSourceResponse updateSourceWithOptions(const Models::UpdateSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a source.
       *
       * @param request UpdateSourceRequest
       * @return UpdateSourceResponse
       */
      Models::UpdateSourceResponse updateSource(const Models::UpdateSourceRequest &request);

      /**
       * @summary Modifies a source location.
       *
       * @param request UpdateSourceLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSourceLocationResponse
       */
      Models::UpdateSourceLocationResponse updateSourceLocationWithOptions(const Models::UpdateSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a source location.
       *
       * @param request UpdateSourceLocationRequest
       * @return UpdateSourceLocationResponse
       */
      Models::UpdateSourceLocationResponse updateSourceLocation(const Models::UpdateSourceLocationRequest &request);

      /**
       * @summary Modifies an online editing template. You can modify the template title and template configurations.
       *
       * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request UpdateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const Models::UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an online editing template. You can modify the template title and template configurations.
       *
       * @description - For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * - For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const Models::UpdateTemplateRequest &request);

      /**
       * @summary The UploadMediaByURL API uploads audio or video files from source URLs. It supports batch uploads and is ideal for uploading files from a public URL instead of a local server or device.
       *
       * @description ### Description
       * - If a callback is configured, the service sends an event notification when the URL upload is complete. You can query the upload status by calling the API to retrieve URL upload information.
       * - After you successfully submit an upload job, the system creates an asynchronous task in the cloud and queues it for execution. After the upload is complete, you can use the URL and media ID from the event notification (message callback) to update your records.
       * ### Limitations
       * - This API supports uploading files to VOD storage only and does not support uploading to your own Object Storage Service (OSS) buckets. To use your own OSS storage, you must first pull the files to a local device, upload them to OSS by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) API to register the OSS object with the media asset library.
       * - This API is currently available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       * - This API supports uploading audio and video files only.
       *
       * @param request UploadMediaByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURLWithOptions(const Models::UploadMediaByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UploadMediaByURL API uploads audio or video files from source URLs. It supports batch uploads and is ideal for uploading files from a public URL instead of a local server or device.
       *
       * @description ### Description
       * - If a callback is configured, the service sends an event notification when the URL upload is complete. You can query the upload status by calling the API to retrieve URL upload information.
       * - After you successfully submit an upload job, the system creates an asynchronous task in the cloud and queues it for execution. After the upload is complete, you can use the URL and media ID from the event notification (message callback) to update your records.
       * ### Limitations
       * - This API supports uploading files to VOD storage only and does not support uploading to your own Object Storage Service (OSS) buckets. To use your own OSS storage, you must first pull the files to a local device, upload them to OSS by using the [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) API to register the OSS object with the media asset library.
       * - This API is currently available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       * - This API supports uploading audio and video files only.
       *
       * @param request UploadMediaByURLRequest
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURL(const Models::UploadMediaByURLRequest &request);

      /**
       * @summary Uploads a media stream file based on the URL of the source file.
       *
       * @description - Pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
       * - Upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request UploadStreamByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURLWithOptions(const Models::UploadStreamByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a media stream file based on the URL of the source file.
       *
       * @description - Pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
       * - Upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * - This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request UploadStreamByURLRequest
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURL(const Models::UploadStreamByURLRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
