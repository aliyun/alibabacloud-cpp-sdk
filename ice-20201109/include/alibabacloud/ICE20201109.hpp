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
       * @summary 收藏公共媒资
       *
       * @param request AddFavoritePublicMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFavoritePublicMediaResponse
       */
      Models::AddFavoritePublicMediaResponse addFavoritePublicMediaWithOptions(const Models::AddFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 收藏公共媒资
       *
       * @param request AddFavoritePublicMediaRequest
       * @return AddFavoritePublicMediaResponse
       */
      Models::AddFavoritePublicMediaResponse addFavoritePublicMedia(const Models::AddFavoritePublicMediaRequest &request);

      /**
       * @summary Creates a source for a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   A flow can have only one source.
       * ### [](#)Source type
       * *   RTMP-PUSH: An input that you can push to the returned URL over the RTMP protocol.
       * *   RTMP-PULL: An input that the MediaConnect flow pulls from the specified server over the RTMP protocol.
       * *   SRT-Listener: An input that you can push to the returned URL over the SRT protocol.
       * *   SRT-Caller: An input that the MediaConnect flow pulls from the specified server over the SRT protocol.
       * *   Flow: An input that uses the output of another upstream flow. You must specify an upstream flow and its output. The output type of the upstream flow must be SRT-Listener or RTMP-PULL. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
       *
       * @param request AddMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaConnectFlowInputResponse
       */
      Models::AddMediaConnectFlowInputResponse addMediaConnectFlowInputWithOptions(const Models::AddMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a source for a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   A flow can have only one source.
       * ### [](#)Source type
       * *   RTMP-PUSH: An input that you can push to the returned URL over the RTMP protocol.
       * *   RTMP-PULL: An input that the MediaConnect flow pulls from the specified server over the RTMP protocol.
       * *   SRT-Listener: An input that you can push to the returned URL over the SRT protocol.
       * *   SRT-Caller: An input that the MediaConnect flow pulls from the specified server over the SRT protocol.
       * *   Flow: An input that uses the output of another upstream flow. You must specify an upstream flow and its output. The output type of the upstream flow must be SRT-Listener or RTMP-PULL. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
       *
       * @param request AddMediaConnectFlowInputRequest
       * @return AddMediaConnectFlowInputResponse
       */
      Models::AddMediaConnectFlowInputResponse addMediaConnectFlowInput(const Models::AddMediaConnectFlowInputRequest &request);

      /**
       * @summary Creates an output for a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   A flow can have a maximum of four outputs.
       * *   The output names in the same flow cannot be duplicated.
       * *   You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
       * ### [](#)Output types
       * *   RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
       * *   RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
       * *   SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
       * *   SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
       * *   Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
       *
       * @param request AddMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaConnectFlowOutputResponse
       */
      Models::AddMediaConnectFlowOutputResponse addMediaConnectFlowOutputWithOptions(const Models::AddMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an output for a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   A flow can have a maximum of four outputs.
       * *   The output names in the same flow cannot be duplicated.
       * *   You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
       * ### [](#)Output types
       * *   RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
       * *   RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
       * *   SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
       * *   SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
       * *   Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
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
       * @summary Creates a template.
       *
       * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       * *   After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
       *
       * @param request AddTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTemplateResponse
       */
      Models::AddTemplateResponse addTemplateWithOptions(const Models::AddTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template.
       *
       * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       * *   After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
       *
       * @param request AddTemplateRequest
       * @return AddTemplateResponse
       */
      Models::AddTemplateResponse addTemplate(const Models::AddTemplateRequest &request);

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
       * @summary Queries the information about multiple media assets at a time based on media asset IDs.
       *
       * @param request BatchGetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfosWithOptions(const Models::BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about multiple media assets at a time based on media asset IDs.
       *
       * @param request BatchGetMediaInfosRequest
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfos(const Models::BatchGetMediaInfosRequest &request);

      /**
       * @summary Cancels a media fingerprint analysis job.
       *
       * @description *   You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
       * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
       *
       * @param request CancelDNAJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDNAJobResponse
       */
      Models::CancelDNAJobResponse cancelDNAJobWithOptions(const Models::CancelDNAJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a media fingerprint analysis job.
       *
       * @description *   You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
       * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
       *
       * @param request CancelDNAJobRequest
       * @return CancelDNAJobResponse
       */
      Models::CancelDNAJobResponse cancelDNAJob(const Models::CancelDNAJobRequest &request);

      /**
       * @summary 取消收藏公共媒资
       *
       * @param request CancelFavoritePublicMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFavoritePublicMediaResponse
       */
      Models::CancelFavoritePublicMediaResponse cancelFavoritePublicMediaWithOptions(const Models::CancelFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消收藏公共媒资
       *
       * @param request CancelFavoritePublicMediaRequest
       * @return CancelFavoritePublicMediaResponse
       */
      Models::CancelFavoritePublicMediaResponse cancelFavoritePublicMedia(const Models::CancelFavoritePublicMediaRequest &request);

      /**
       * @summary 取消智能生产任务
       *
       * @param request CancelIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelIProductionJobResponse
       */
      Models::CancelIProductionJobResponse cancelIProductionJobWithOptions(const Models::CancelIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消智能生产任务
       *
       * @param request CancelIProductionJobRequest
       * @return CancelIProductionJobResponse
       */
      Models::CancelIProductionJobResponse cancelIProductionJob(const Models::CancelIProductionJobRequest &request);

      /**
       * @summary 清除声纹ID对应的声纹
       *
       * @param request ClearAIAgentVoiceprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearAIAgentVoiceprintResponse
       */
      Models::ClearAIAgentVoiceprintResponse clearAIAgentVoiceprintWithOptions(const Models::ClearAIAgentVoiceprintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清除声纹ID对应的声纹
       *
       * @param request ClearAIAgentVoiceprintRequest
       * @return ClearAIAgentVoiceprintResponse
       */
      Models::ClearAIAgentVoiceprintResponse clearAIAgentVoiceprint(const Models::ClearAIAgentVoiceprintRequest &request);

      /**
       * @summary 关闭MediaConnect实例的双流灾备功能
       *
       * @param request CloseMediaConnectFlowFailoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseMediaConnectFlowFailoverResponse
       */
      Models::CloseMediaConnectFlowFailoverResponse closeMediaConnectFlowFailoverWithOptions(const Models::CloseMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭MediaConnect实例的双流灾备功能
       *
       * @param request CloseMediaConnectFlowFailoverRequest
       * @return CloseMediaConnectFlowFailoverResponse
       */
      Models::CloseMediaConnectFlowFailoverResponse closeMediaConnectFlowFailover(const Models::CloseMediaConnectFlowFailoverRequest &request);

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
       * @summary Creates a digital human training job. You can configure the basic information of the digital human and the materials required for the training. Note: This operation is used to initialize the training job. It does not submit the training job. To submit the training job, call the SubmitAvatarTrainingJob operation.
       *
       * @param request CreateAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAvatarTrainingJobResponse
       */
      Models::CreateAvatarTrainingJobResponse createAvatarTrainingJobWithOptions(const Models::CreateAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a digital human training job. You can configure the basic information of the digital human and the materials required for the training. Note: This operation is used to initialize the training job. It does not submit the training job. To submit the training job, call the SubmitAvatarTrainingJob operation.
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
       * @summary Creates a custom template.
       *
       * @param request CreateCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplateWithOptions(const Models::CreateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom template.
       *
       * @param request CreateCustomTemplateRequest
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplate(const Models::CreateCustomTemplateRequest &request);

      /**
       * @summary Creates a human voice cloning job. You can configure the basic information of the human voice cloning job.
       *
       * @param request CreateCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomizedVoiceJobResponse
       */
      Models::CreateCustomizedVoiceJobResponse createCustomizedVoiceJobWithOptions(const Models::CreateCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a human voice cloning job. You can configure the basic information of the human voice cloning job.
       *
       * @param request CreateCustomizedVoiceJobRequest
       * @return CreateCustomizedVoiceJobResponse
       */
      Models::CreateCustomizedVoiceJobResponse createCustomizedVoiceJob(const Models::CreateCustomizedVoiceJobRequest &request);

      /**
       * @summary Creates media fingerprint libraries.
       *
       * @description *   You can create up to five media fingerprint libraries within an account. To increase the quota, submit a ticket. You can call the DeleteDNADB operation to delete the fingerprint libraries that you no longer need.
       *
       * @param request CreateDNADBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDNADBResponse
       */
      Models::CreateDNADBResponse createDNADBWithOptions(const Models::CreateDNADBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates media fingerprint libraries.
       *
       * @description *   You can create up to five media fingerprint libraries within an account. To increase the quota, submit a ticket. You can call the DeleteDNADB operation to delete the fingerprint libraries that you no longer need.
       *
       * @param request CreateDNADBRequest
       * @return CreateDNADBResponse
       */
      Models::CreateDNADBResponse createDNADB(const Models::CreateDNADBRequest &request);

      /**
       * @summary Creates an online editing project. You can specify configurations such as the title, description, timeline, and thumbnail for the project.
       *
       * @param request CreateEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEditingProjectResponse
       */
      Models::CreateEditingProjectResponse createEditingProjectWithOptions(const Models::CreateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an online editing project. You can specify configurations such as the title, description, timeline, and thumbnail for the project.
       *
       * @param request CreateEditingProjectRequest
       * @return CreateEditingProjectResponse
       */
      Models::CreateEditingProjectResponse createEditingProject(const Models::CreateEditingProjectRequest &request);

      /**
       * @summary 创建热词库
       *
       * @param tmpReq CreateHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHotwordLibraryResponse
       */
      Models::CreateHotwordLibraryResponse createHotwordLibraryWithOptions(const Models::CreateHotwordLibraryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建热词库
       *
       * @param request CreateHotwordLibraryRequest
       * @return CreateHotwordLibraryResponse
       */
      Models::CreateHotwordLibraryResponse createHotwordLibrary(const Models::CreateHotwordLibraryRequest &request);

      /**
       * @summary Creates a live package channel.
       *
       * @description ## [](#)Usage notes
       * After you call this operation to create a live package channel, the system will automatically generate the ingest endpoint URL, and username and password required for authentication.
       * ### [](#)Precautions
       * *   Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
       * *   Only `HLS` is supported.
       * *   The segment duration must be from 1 to 30 seconds.
       * *   The number of M3U8 segments must be from 2 to 100.
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
       * *   Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
       * *   Only `HLS` is supported.
       * *   The segment duration must be from 1 to 30 seconds.
       * *   The number of M3U8 segments must be from 2 to 100.
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
       * @summary Creates an origin endpoint for a live package channel to deliver live streams in HLS format.
       *
       * @description ## [](#)Usage notes
       * This API operation is mainly used to configure origin settings, security policies including the IP address blacklist and whitelist and authorization code, and time shifting settings for channels. Before you create an origin endpoint, you must create a live package channel group and channel. After you create the endpoint, the endpoint URL and other configuration details are returned.
       *
       * @param tmpReq CreateLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePackageOriginEndpointResponse
       */
      Models::CreateLivePackageOriginEndpointResponse createLivePackageOriginEndpointWithOptions(const Models::CreateLivePackageOriginEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an origin endpoint for a live package channel to deliver live streams in HLS format.
       *
       * @description ## [](#)Usage notes
       * This API operation is mainly used to configure origin settings, security policies including the IP address blacklist and whitelist and authorization code, and time shifting settings for channels. Before you create an origin endpoint, you must create a live package channel group and channel. After you create the endpoint, the endpoint URL and other configuration details are returned.
       *
       * @param request CreateLivePackageOriginEndpointRequest
       * @return CreateLivePackageOriginEndpointResponse
       */
      Models::CreateLivePackageOriginEndpointResponse createLivePackageOriginEndpoint(const Models::CreateLivePackageOriginEndpointRequest &request);

      /**
       * @summary Creates a live stream recording template to submit live stream recording jobs.
       *
       * @description You must specify a recording template for live stream recording. You can configure information such as the format and duration of a recording in a recording template. The recording format can be M3U8, MP4, or FLV.
       *
       * @param tmpReq CreateLiveRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveRecordTemplateResponse
       */
      Models::CreateLiveRecordTemplateResponse createLiveRecordTemplateWithOptions(const Models::CreateLiveRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live stream recording template to submit live stream recording jobs.
       *
       * @description You must specify a recording template for live stream recording. You can configure information such as the format and duration of a recording in a recording template. The recording format can be M3U8, MP4, or FLV.
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
       * @summary Creates a live stream transcoding template to submit live stream transcoding jobs.
       *
       * @param tmpReq CreateLiveTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveTranscodeTemplateResponse
       */
      Models::CreateLiveTranscodeTemplateResponse createLiveTranscodeTemplateWithOptions(const Models::CreateLiveTranscodeTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live stream transcoding template to submit live stream transcoding jobs.
       *
       * @param request CreateLiveTranscodeTemplateRequest
       * @return CreateLiveTranscodeTemplateResponse
       */
      Models::CreateLiveTranscodeTemplateResponse createLiveTranscodeTemplate(const Models::CreateLiveTranscodeTemplateRequest &request);

      /**
       * @summary Creates a MediaConnect flow.
       *
       * @description *   The flow names cannot be duplicated in the same region.
       * *   Take note of the returned flow ID. You may reference it in other API operations.
       *
       * @param request CreateMediaConnectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaConnectFlowResponse
       */
      Models::CreateMediaConnectFlowResponse createMediaConnectFlowWithOptions(const Models::CreateMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MediaConnect flow.
       *
       * @description *   The flow names cannot be duplicated in the same region.
       * *   Take note of the returned flow ID. You may reference it in other API operations.
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
       * @summary Creates a MediaLive input.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CreateMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaLiveInputResponse
       */
      Models::CreateMediaLiveInputResponse createMediaLiveInputWithOptions(const Models::CreateMediaLiveInputRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MediaLive input.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
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
       * @summary 创建自定义实体
       *
       * @param request CreateRecognitionEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecognitionEntityResponse
       */
      Models::CreateRecognitionEntityResponse createRecognitionEntityWithOptions(const Models::CreateRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义实体
       *
       * @param request CreateRecognitionEntityRequest
       * @return CreateRecognitionEntityResponse
       */
      Models::CreateRecognitionEntityResponse createRecognitionEntity(const Models::CreateRecognitionEntityRequest &request);

      /**
       * @summary 创建自定义库。
       *
       * @param request CreateRecognitionLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecognitionLibResponse
       */
      Models::CreateRecognitionLibResponse createRecognitionLibWithOptions(const Models::CreateRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义库。
       *
       * @param request CreateRecognitionLibRequest
       * @return CreateRecognitionLibResponse
       */
      Models::CreateRecognitionLibResponse createRecognitionLib(const Models::CreateRecognitionLibRequest &request);

      /**
       * @summary 注册自定义实体照片
       *
       * @param request CreateRecognitionSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecognitionSampleResponse
       */
      Models::CreateRecognitionSampleResponse createRecognitionSampleWithOptions(const Models::CreateRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册自定义实体照片
       *
       * @param request CreateRecognitionSampleRequest
       * @return CreateRecognitionSampleResponse
       */
      Models::CreateRecognitionSampleResponse createRecognitionSample(const Models::CreateRecognitionSampleRequest &request);

      /**
       * @summary 创建搜索索引
       *
       * @description The large visual model feature is still in the public preview phase. You can use this feature for free for 1,000 hours of videos.
       *
       * @param request CreateSearchIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSearchIndexResponse
       */
      Models::CreateSearchIndexResponse createSearchIndexWithOptions(const Models::CreateSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建搜索索引
       *
       * @description The large visual model feature is still in the public preview phase. You can use this feature for free for 1,000 hours of videos.
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
       * @summary Obtains the upload URL and credential of a media asset and creates information about the media asset.
       *
       * @description *   You can call this operation to obtain the upload URLs and credentials of audio and video files. You can also call this operation to obtain the upload URLs and credentials of images and auxiliary media assets.
       * *   Obtaining an upload URL and credential is essential for Intelligent Media Services (IMS) and is required in each upload operation.
       * *   If the video upload credential expires, you can call the RefreshUploadMedia operation to obtain a new upload credential. The default validity period of a video upload credential is 3,000 seconds.
       * *   After you upload a media asset, you can configure a callback to receive upload event notifications or call the GetMediaInfo operation to determine whether the media asset is uploaded based on the returned status.
       * *   The MediaId parameter returned by this operation can be used for media asset lifecycle management or media processing.
       * *   You can call this operation to upload media assets only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media asset to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadMediaResponse
       */
      Models::CreateUploadMediaResponse createUploadMediaWithOptions(const Models::CreateUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the upload URL and credential of a media asset and creates information about the media asset.
       *
       * @description *   You can call this operation to obtain the upload URLs and credentials of audio and video files. You can also call this operation to obtain the upload URLs and credentials of images and auxiliary media assets.
       * *   Obtaining an upload URL and credential is essential for Intelligent Media Services (IMS) and is required in each upload operation.
       * *   If the video upload credential expires, you can call the RefreshUploadMedia operation to obtain a new upload credential. The default validity period of a video upload credential is 3,000 seconds.
       * *   After you upload a media asset, you can configure a callback to receive upload event notifications or call the GetMediaInfo operation to determine whether the media asset is uploaded based on the returned status.
       * *   The MediaId parameter returned by this operation can be used for media asset lifecycle management or media processing.
       * *   You can call this operation to upload media assets only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media asset to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadMediaRequest
       * @return CreateUploadMediaResponse
       */
      Models::CreateUploadMediaResponse createUploadMedia(const Models::CreateUploadMediaRequest &request);

      /**
       * @summary Obtains the upload URL and credential of a media stream.
       *
       * @description *   You can call this operation to upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
       * *   You can call this operation to upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request CreateUploadStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadStreamResponse
       */
      Models::CreateUploadStreamResponse createUploadStreamWithOptions(const Models::CreateUploadStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the upload URL and credential of a media stream.
       *
       * @description *   You can call this operation to upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
       * *   You can call this operation to upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
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
       * @summary Creates a packaging configuration.
       *
       * @param tmpReq CreateVodPackagingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVodPackagingConfigurationResponse
       */
      Models::CreateVodPackagingConfigurationResponse createVodPackagingConfigurationWithOptions(const Models::CreateVodPackagingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a packaging configuration.
       *
       * @param request CreateVodPackagingConfigurationRequest
       * @return CreateVodPackagingConfigurationResponse
       */
      Models::CreateVodPackagingConfigurationResponse createVodPackagingConfiguration(const Models::CreateVodPackagingConfigurationRequest &request);

      /**
       * @summary Creates a packaging group.
       *
       * @param request CreateVodPackagingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVodPackagingGroupResponse
       */
      Models::CreateVodPackagingGroupResponse createVodPackagingGroupWithOptions(const Models::CreateVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a packaging group.
       *
       * @param request CreateVodPackagingGroupRequest
       * @return CreateVodPackagingGroupResponse
       */
      Models::CreateVodPackagingGroupResponse createVodPackagingGroup(const Models::CreateVodPackagingGroupRequest &request);

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
       * @summary 删除智能体的对话历史记录。
       *
       * @param request DeleteAIAgentDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIAgentDialogueResponse
       */
      Models::DeleteAIAgentDialogueResponse deleteAIAgentDialogueWithOptions(const Models::DeleteAIAgentDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除智能体的对话历史记录。
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
       * @summary Deletes a channel in MediaWeaver.
       *
       * @param request DeleteChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannelWithOptions(const Models::DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a channel in MediaWeaver.
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
       * @summary 删除热词词库
       *
       * @param request DeleteHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotwordLibraryResponse
       */
      Models::DeleteHotwordLibraryResponse deleteHotwordLibraryWithOptions(const Models::DeleteHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除热词词库
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
       * @summary Deletes live stream snapshot files. You can choose to delete only the snapshot files or delete both the snapshot files and the original Object Storage Service (OSS) files.
       *
       * @param tmpReq DeleteLiveSnapshotFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSnapshotFilesResponse
       */
      Models::DeleteLiveSnapshotFilesResponse deleteLiveSnapshotFilesWithOptions(const Models::DeleteLiveSnapshotFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes live stream snapshot files. You can choose to delete only the snapshot files or delete both the snapshot files and the original Object Storage Service (OSS) files.
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
       * @summary 删除指定转码任务
       *
       * @param request DeleteLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveTranscodeJobResponse
       */
      Models::DeleteLiveTranscodeJobResponse deleteLiveTranscodeJobWithOptions(const Models::DeleteLiveTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定转码任务
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
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   When a flow is deleted, its source and outputs are also deleted.
       * *   When a flow is in the online state, it cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaConnectFlowResponse
       */
      Models::DeleteMediaConnectFlowResponse deleteMediaConnectFlowWithOptions(const Models::DeleteMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   When a flow is deleted, its source and outputs are also deleted.
       * *   When a flow is in the online state, it cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowRequest
       * @return DeleteMediaConnectFlowResponse
       */
      Models::DeleteMediaConnectFlowResponse deleteMediaConnectFlow(const Models::DeleteMediaConnectFlowRequest &request);

      /**
       * @summary Deletes the source of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   When a flow is in the online state, its source cannot be deleted.
       * *   You can delete the source only after all outputs of the flow have been deleted.
       *
       * @param request DeleteMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaConnectFlowInputResponse
       */
      Models::DeleteMediaConnectFlowInputResponse deleteMediaConnectFlowInputWithOptions(const Models::DeleteMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the source of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   When a flow is in the online state, its source cannot be deleted.
       * *   You can delete the source only after all outputs of the flow have been deleted.
       *
       * @param request DeleteMediaConnectFlowInputRequest
       * @return DeleteMediaConnectFlowInputResponse
       */
      Models::DeleteMediaConnectFlowInputResponse deleteMediaConnectFlowInput(const Models::DeleteMediaConnectFlowInputRequest &request);

      /**
       * @summary Deletes an output of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   When a flow is in the online state, its outputs cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaConnectFlowOutputResponse
       */
      Models::DeleteMediaConnectFlowOutputResponse deleteMediaConnectFlowOutputWithOptions(const Models::DeleteMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an output of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   When a flow is in the online state, its outputs cannot be deleted.
       *
       * @param request DeleteMediaConnectFlowOutputRequest
       * @return DeleteMediaConnectFlowOutputResponse
       */
      Models::DeleteMediaConnectFlowOutputResponse deleteMediaConnectFlowOutput(const Models::DeleteMediaConnectFlowOutputRequest &request);

      /**
       * @summary Deletes a specific media asset from a search library.
       *
       * @param request DeleteMediaFromSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaFromSearchLibResponse
       */
      Models::DeleteMediaFromSearchLibResponse deleteMediaFromSearchLibWithOptions(const Models::DeleteMediaFromSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific media asset from a search library.
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
       * @description *  You can only delete a channel that is not running.
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
       * @description *  You can only delete a channel that is not running.
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
       * @description *   You can delete an input only when it is not associated with a MediaLive channel.
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
       * @description *   You can delete an input only when it is not associated with a MediaLive channel.
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
       * @description *   You can only delete a security group not associated with an input.
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
       * @description *   You can only delete a security group not associated with an input.
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
       * @description You can call this operation to delete multiple media streams at a time.
       *
       * @param request DeletePlayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlayInfoResponse
       */
      Models::DeletePlayInfoResponse deletePlayInfoWithOptions(const Models::DeletePlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media streams such as video streams and audio streams.
       *
       * @description You can call this operation to delete multiple media streams at a time.
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
       * @summary 删除自定义库实体
       *
       * @param request DeleteRecognitionEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognitionEntityResponse
       */
      Models::DeleteRecognitionEntityResponse deleteRecognitionEntityWithOptions(const Models::DeleteRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义库实体
       *
       * @param request DeleteRecognitionEntityRequest
       * @return DeleteRecognitionEntityResponse
       */
      Models::DeleteRecognitionEntityResponse deleteRecognitionEntity(const Models::DeleteRecognitionEntityRequest &request);

      /**
       * @summary 删除自定义库
       *
       * @param request DeleteRecognitionLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognitionLibResponse
       */
      Models::DeleteRecognitionLibResponse deleteRecognitionLibWithOptions(const Models::DeleteRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义库
       *
       * @param request DeleteRecognitionLibRequest
       * @return DeleteRecognitionLibResponse
       */
      Models::DeleteRecognitionLibResponse deleteRecognitionLib(const Models::DeleteRecognitionLibRequest &request);

      /**
       * @summary 删除自定义实体照片
       *
       * @param request DeleteRecognitionSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognitionSampleResponse
       */
      Models::DeleteRecognitionSampleResponse deleteRecognitionSampleWithOptions(const Models::DeleteRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义实体照片
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
       * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
       * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
       * @summary Deletes a packaging configuration.
       *
       * @param request DeleteVodPackagingConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodPackagingConfigurationResponse
       */
      Models::DeleteVodPackagingConfigurationResponse deleteVodPackagingConfigurationWithOptions(const Models::DeleteVodPackagingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a packaging configuration.
       *
       * @param request DeleteVodPackagingConfigurationRequest
       * @return DeleteVodPackagingConfigurationResponse
       */
      Models::DeleteVodPackagingConfigurationResponse deleteVodPackagingConfiguration(const Models::DeleteVodPackagingConfigurationRequest &request);

      /**
       * @summary Deletes a packaging group.
       *
       * @param request DeleteVodPackagingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodPackagingGroupResponse
       */
      Models::DeleteVodPackagingGroupResponse deleteVodPackagingGroupWithOptions(const Models::DeleteVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a packaging group.
       *
       * @param request DeleteVodPackagingGroupRequest
       * @return DeleteVodPackagingGroupResponse
       */
      Models::DeleteVodPackagingGroupResponse deleteVodPackagingGroup(const Models::DeleteVodPackagingGroupRequest &request);

      /**
       * @summary Queries the information about an AI agent.
       *
       * @description ## [](#)Request description
       * *   **Feature**: You can call this operation to query the information about an AI agent.
       * *   **Scenario**: If you need to monitor or analyze the performance of an AI agent in a call or debug the agent configurations, you can call this operation to obtain required data.
       *
       * @param request DescribeAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIAgentInstanceResponse
       */
      Models::DescribeAIAgentInstanceResponse describeAIAgentInstanceWithOptions(const Models::DescribeAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an AI agent.
       *
       * @description ## [](#)Request description
       * *   **Feature**: You can call this operation to query the information about an AI agent.
       * *   **Scenario**: If you need to monitor or analyze the performance of an AI agent in a call or debug the agent configurations, you can call this operation to obtain required data.
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
       * @summary Queries the event callback configurations of an AI agent.
       *
       * @description You can call this operation to query the detailed callback configurations of an AI agent.
       *
       * @param request DescribeNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNotifyConfigResponse
       */
      Models::DescribeNotifyConfigResponse describeNotifyConfigWithOptions(const Models::DescribeNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event callback configurations of an AI agent.
       *
       * @description You can call this operation to query the detailed callback configurations of an AI agent.
       *
       * @param request DescribeNotifyConfigRequest
       * @return DescribeNotifyConfigResponse
       */
      Models::DescribeNotifyConfigResponse describeNotifyConfig(const Models::DescribeNotifyConfigRequest &request);

      /**
       * @param request DescribePlayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayListResponse
       */
      Models::DescribePlayListResponse describePlayListWithOptions(const Models::DescribePlayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePlayListRequest
       * @return DescribePlayListResponse
       */
      Models::DescribePlayListResponse describePlayList(const Models::DescribePlayListRequest &request);

      /**
       * @summary 查询实例
       *
       * @param request DescribeRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcRobotInstanceResponse
       */
      Models::DescribeRtcRobotInstanceResponse describeRtcRobotInstanceWithOptions(const Models::DescribeRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例
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
       * @summary 禁用某个MediaConnect实例的某个输出
       *
       * @param request ForbidMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbidMediaConnectFlowOutputResponse
       */
      Models::ForbidMediaConnectFlowOutputResponse forbidMediaConnectFlowOutputWithOptions(const Models::ForbidMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用某个MediaConnect实例的某个输出
       *
       * @param request ForbidMediaConnectFlowOutputRequest
       * @return ForbidMediaConnectFlowOutputResponse
       */
      Models::ForbidMediaConnectFlowOutputResponse forbidMediaConnectFlowOutput(const Models::ForbidMediaConnectFlowOutputRequest &request);

      /**
       * @summary 转呼通话到目标电话
       *
       * @param request ForwardAIAgentCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForwardAIAgentCallResponse
       */
      Models::ForwardAIAgentCallResponse forwardAIAgentCallWithOptions(const Models::ForwardAIAgentCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 转呼通话到目标电话
       *
       * @param request ForwardAIAgentCallRequest
       * @return ForwardAIAgentCallResponse
       */
      Models::ForwardAIAgentCallResponse forwardAIAgentCall(const Models::ForwardAIAgentCallRequest &request);

      /**
       * @summary Creates an AI agent. This operation returns the channel in which the AI agent resides, the username of the AI agent in the channel, and the token that you can use to join the channel.
       *
       * @description ## [](#)Request description
       * You can call this operation to create an AI agent based on the provided ID. You can join the channel based on the returned information and talk to the agent.
       * **Note:** Make sure that the provided AI agent ID is valid and configure optional parameters based on your business requirements.
       *
       * @param tmpReq GenerateAIAgentCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAIAgentCallResponse
       */
      Models::GenerateAIAgentCallResponse generateAIAgentCallWithOptions(const Models::GenerateAIAgentCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI agent. This operation returns the channel in which the AI agent resides, the username of the AI agent in the channel, and the token that you can use to join the channel.
       *
       * @description ## [](#)Request description
       * You can call this operation to create an AI agent based on the provided ID. You can join the channel based on the returned information and talk to the agent.
       * **Note:** Make sure that the provided AI agent ID is valid and configure optional parameters based on your business requirements.
       *
       * @param request GenerateAIAgentCallRequest
       * @return GenerateAIAgentCallResponse
       */
      Models::GenerateAIAgentCallResponse generateAIAgentCall(const Models::GenerateAIAgentCallRequest &request);

      /**
       * @summary Generates a random Key Management Service (KMS) data key used for HTTP Live Streaming (HLS) encryption and transcoding of videos.
       *
       * @param request GenerateKMSDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKeyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random Key Management Service (KMS) data key used for HTTP Live Streaming (HLS) encryption and transcoding of videos.
       *
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKey();

      /**
       * @summary 生成直播互动消息所需的token
       *
       * @param request GenerateMessageChatTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateMessageChatTokenResponse
       */
      Models::GenerateMessageChatTokenResponse generateMessageChatTokenWithOptions(const Models::GenerateMessageChatTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成直播互动消息所需的token
       *
       * @param request GenerateMessageChatTokenRequest
       * @return GenerateMessageChatTokenResponse
       */
      Models::GenerateMessageChatTokenResponse generateMessageChatToken(const Models::GenerateMessageChatTokenRequest &request);

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
       * @summary Queries the information about a quick video production job, including the input parameters, job state, and the IDs and URLs of the output media assets. You can call this operation to query only quick video production jobs created within the past year.
       *
       * @param request GetBatchMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchMediaProducingJobResponse
       */
      Models::GetBatchMediaProducingJobResponse getBatchMediaProducingJobWithOptions(const Models::GetBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a quick video production job, including the input parameters, job state, and the IDs and URLs of the output media assets. You can call this operation to query only quick video production jobs created within the past year.
       *
       * @param request GetBatchMediaProducingJobRequest
       * @return GetBatchMediaProducingJobResponse
       */
      Models::GetBatchMediaProducingJobResponse getBatchMediaProducingJob(const Models::GetBatchMediaProducingJobRequest &request);

      /**
       * @summary Queries the information about a category and its subcategories.
       *
       * @description You can call this operation to query the information about a category and its subcategories based on the category ID and category type.
       *
       * @param request GetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategoriesWithOptions(const Models::GetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a category and its subcategories.
       *
       * @description You can call this operation to query the information about a category and its subcategories based on the category ID and category type.
       *
       * @param request GetCategoriesRequest
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategories(const Models::GetCategoriesRequest &request);

      /**
       * @summary Queries information about a channel in MediaWeaver.
       *
       * @param request GetChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChannelResponse
       */
      Models::GetChannelResponse getChannelWithOptions(const Models::GetChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a channel in MediaWeaver.
       *
       * @param request GetChannelRequest
       * @return GetChannelResponse
       */
      Models::GetChannelResponse getChannel(const Models::GetChannelRequest &request);

      /**
       * @summary 获取内容分析搜索配置
       *
       * @param request GetContentAnalyzeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContentAnalyzeConfigResponse
       */
      Models::GetContentAnalyzeConfigResponse getContentAnalyzeConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取内容分析搜索配置
       *
       * @return GetContentAnalyzeConfigResponse
       */
      Models::GetContentAnalyzeConfigResponse getContentAnalyzeConfig();

      /**
       * @summary Queries the information about a custom template.
       *
       * @description You can call this operation to query the information about a template with the ID specified by the TemplateId parameter. You can also query the information about the default template. If TemplateId is specified, other parameters are ignored and the template whose ID is specified is queried. If TemplateId is not specified, the default template is queried based on other parameters. In this case, Type is required.
       * Template types:
       * 1.  1: transcoding template.
       * 2.  2: snapshot template.
       * 3.  3: animated image template.
       * 4.  4\\. image watermark template.
       * 5.  5: text watermark template.
       * 6.  6: subtitle template.
       * 7.  7: AI-assisted content moderation template.
       * 8.  8: AI-assisted intelligent thumbnail template.
       * 9.  9: AI-assisted intelligent erasure template.
       * Subtypes of transcoding templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (AudioTranscode): audio transcoding template.
       * 3.  3 (Remux): container format conversion template.
       * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
       * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
       * Subtypes of snapshot templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (Sprite): sprite template.
       * 3.  3 (WebVtt): WebVTT template.
       * Subtypes of AI-assisted content moderation templates:
       * 1.  1 (Video): video moderation template.
       * 2.  2 (Audio): audio moderation template.
       * 3.  3 (Image): image moderation template.
       * Subtypes of AI-assisted intelligent erasure templates:
       * 1.  1 (VideoDelogo): logo erasure template.
       * 2.  2 (VideoDetext): subtitle erasure template.
       *
       * @param request GetCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplateWithOptions(const Models::GetCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a custom template.
       *
       * @description You can call this operation to query the information about a template with the ID specified by the TemplateId parameter. You can also query the information about the default template. If TemplateId is specified, other parameters are ignored and the template whose ID is specified is queried. If TemplateId is not specified, the default template is queried based on other parameters. In this case, Type is required.
       * Template types:
       * 1.  1: transcoding template.
       * 2.  2: snapshot template.
       * 3.  3: animated image template.
       * 4.  4\\. image watermark template.
       * 5.  5: text watermark template.
       * 6.  6: subtitle template.
       * 7.  7: AI-assisted content moderation template.
       * 8.  8: AI-assisted intelligent thumbnail template.
       * 9.  9: AI-assisted intelligent erasure template.
       * Subtypes of transcoding templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (AudioTranscode): audio transcoding template.
       * 3.  3 (Remux): container format conversion template.
       * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
       * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
       * Subtypes of snapshot templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (Sprite): sprite template.
       * 3.  3 (WebVtt): WebVTT template.
       * Subtypes of AI-assisted content moderation templates:
       * 1.  1 (Video): video moderation template.
       * 2.  2 (Audio): audio moderation template.
       * 3.  3 (Image): image moderation template.
       * Subtypes of AI-assisted intelligent erasure templates:
       * 1.  1 (VideoDelogo): logo erasure template.
       * 2.  2 (VideoDetext): subtitle erasure template.
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
       * @summary 获取用户默认存储地址
       *
       * @param request GetDefaultStorageLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultStorageLocationResponse
       */
      Models::GetDefaultStorageLocationResponse getDefaultStorageLocationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户默认存储地址
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
       * @summary Queries all materials associated with an online editing project.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterialsWithOptions(const Models::GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all materials associated with an online editing project.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterials(const Models::GetEditingProjectMaterialsRequest &request);

      /**
       * @summary Queries event callback configurations.
       *
       * @param request GetEventCallbackRequest
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
       * @summary 查询热词词库
       *
       * @param request GetHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotwordLibraryResponse
       */
      Models::GetHotwordLibraryResponse getHotwordLibraryWithOptions(const Models::GetHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询热词词库
       *
       * @param request GetHotwordLibraryRequest
       * @return GetHotwordLibraryResponse
       */
      Models::GetHotwordLibraryResponse getHotwordLibrary(const Models::GetHotwordLibraryRequest &request);

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
       * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. You can call this operation to query only live editing jobs created within the past year.
       *
       * @param request GetLiveEditingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLiveEditingJobResponse
       */
      Models::GetLiveEditingJobResponse getLiveEditingJobWithOptions(const Models::GetLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. You can call this operation to query only live editing jobs created within the past year.
       *
       * @param request GetLiveEditingJobRequest
       * @return GetLiveEditingJobResponse
       */
      Models::GetLiveEditingJobResponse getLiveEditingJob(const Models::GetLiveEditingJobRequest &request);

      /**
       * @summary Queries the details of a live package channel.
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
       * @summary Queries the details of a live package channel.
       *
       * @description ## [](#)Usage notes
       * This API operation allows you to query the details of a live package channel, including the creation time, description, ingest endpoint, protocol, number of segments, and segment duration.
       *
       * @param request GetLivePackageChannelRequest
       * @return GetLivePackageChannelResponse
       */
      Models::GetLivePackageChannelResponse getLivePackageChannel(const Models::GetLivePackageChannelRequest &request);

      /**
       * @summary Queries the details of a live package channel group by name.
       *
       * @description ## [](#)Usage notes
       * You can call this API operation to query the details of a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
       *
       * @param request GetLivePackageChannelGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivePackageChannelGroupResponse
       */
      Models::GetLivePackageChannelGroupResponse getLivePackageChannelGroupWithOptions(const Models::GetLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a live package channel group by name.
       *
       * @description ## [](#)Usage notes
       * You can call this API operation to query the details of a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
       *
       * @param request GetLivePackageChannelGroupRequest
       * @return GetLivePackageChannelGroupResponse
       */
      Models::GetLivePackageChannelGroupResponse getLivePackageChannelGroup(const Models::GetLivePackageChannelGroupRequest &request);

      /**
       * @summary Queries origin endpoints associated with a live package channel.
       *
       * @description ## [](#)Usage notes
       *
       * @param request GetLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLivePackageOriginEndpointResponse
       */
      Models::GetLivePackageOriginEndpointResponse getLivePackageOriginEndpointWithOptions(const Models::GetLivePackageOriginEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries origin endpoints associated with a live package channel.
       *
       * @description ## [](#)Usage notes
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
       * @summary 获取MediaConnect可用的区域
       *
       * @param request GetMediaConnectAvailableRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectAvailableRegionResponse
       */
      Models::GetMediaConnectAvailableRegionResponse getMediaConnectAvailableRegionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取MediaConnect可用的区域
       *
       * @return GetMediaConnectAvailableRegionResponse
       */
      Models::GetMediaConnectAvailableRegionResponse getMediaConnectAvailableRegion();

      /**
       * @summary Obtains information about a specific MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   The returned StartTime is valid only when the flow is in the online state.
       *
       * @param request GetMediaConnectFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowResponse
       */
      Models::GetMediaConnectFlowResponse getMediaConnectFlowWithOptions(const Models::GetMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains information about a specific MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       * *   The returned StartTime is valid only when the flow is in the online state.
       *
       * @param request GetMediaConnectFlowRequest
       * @return GetMediaConnectFlowResponse
       */
      Models::GetMediaConnectFlowResponse getMediaConnectFlow(const Models::GetMediaConnectFlowRequest &request);

      /**
       * @summary 获取某个MediaConnect实例下的所有output的名字
       *
       * @param request GetMediaConnectFlowAllOutputNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowAllOutputNameResponse
       */
      Models::GetMediaConnectFlowAllOutputNameResponse getMediaConnectFlowAllOutputNameWithOptions(const Models::GetMediaConnectFlowAllOutputNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某个MediaConnect实例下的所有output的名字
       *
       * @param request GetMediaConnectFlowAllOutputNameRequest
       * @return GetMediaConnectFlowAllOutputNameResponse
       */
      Models::GetMediaConnectFlowAllOutputNameResponse getMediaConnectFlowAllOutputName(const Models::GetMediaConnectFlowAllOutputNameRequest &request);

      /**
       * @summary Obtains information about the source of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       *
       * @param request GetMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowInputResponse
       */
      Models::GetMediaConnectFlowInputResponse getMediaConnectFlowInputWithOptions(const Models::GetMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains information about the source of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       *
       * @param request GetMediaConnectFlowInputRequest
       * @return GetMediaConnectFlowInputResponse
       */
      Models::GetMediaConnectFlowInputResponse getMediaConnectFlowInput(const Models::GetMediaConnectFlowInputRequest &request);

      /**
       * @summary Obtains information about an output of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       *
       * @param request GetMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConnectFlowOutputResponse
       */
      Models::GetMediaConnectFlowOutputResponse getMediaConnectFlowOutputWithOptions(const Models::GetMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains information about an output of a MediaConnect flow.
       *
       * @description *   When the specified flow ID is not available, an error code is returned.
       *
       * @param request GetMediaConnectFlowOutputRequest
       * @return GetMediaConnectFlowOutputResponse
       */
      Models::GetMediaConnectFlowOutputResponse getMediaConnectFlowOutput(const Models::GetMediaConnectFlowOutputRequest &request);

      /**
       * @summary Obtains the details of a transcoding task.
       *
       * @param request GetMediaConvertJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaConvertJobResponse
       */
      Models::GetMediaConvertJobResponse getMediaConvertJobWithOptions(const Models::GetMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a transcoding task.
       *
       * @param request GetMediaConvertJobRequest
       * @return GetMediaConvertJobResponse
       */
      Models::GetMediaConvertJobResponse getMediaConvertJob(const Models::GetMediaConvertJobRequest &request);

      /**
       * @summary Queries information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
       *
       * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified.
       *
       * @param request GetMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaInfoResponse
       */
      Models::GetMediaInfoResponse getMediaInfoWithOptions(const Models::GetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
       *
       * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified.
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
       * @summary Queries the details of a MediaLive input.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaLiveInputResponse
       */
      Models::GetMediaLiveInputResponse getMediaLiveInputWithOptions(const Models::GetMediaLiveInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a MediaLive input.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetMediaLiveInputRequest
       * @return GetMediaLiveInputResponse
       */
      Models::GetMediaLiveInputResponse getMediaLiveInput(const Models::GetMediaLiveInputRequest &request);

      /**
       * @summary Queries the details of a security group in MediaLive.
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
       * @summary Queries the details of a security group in MediaLive.
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
       * @summary Queries the information about a media editing and production job. The requested information includes the state, timeline, template, and data of the job. You can call this operation to query only media editing and production jobs created within the past year.
       *
       * @param request GetMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaProducingJobResponse
       */
      Models::GetMediaProducingJobResponse getMediaProducingJobWithOptions(const Models::GetMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a media editing and production job. The requested information includes the state, timeline, template, and data of the job. You can call this operation to query only media editing and production jobs created within the past year.
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
       * @summary Queries the playback URL of a video or audio file based on its ID.
       *
       * @description You use the ID of a video or audio file to query the playback URL of the file. Then, you can use the playback URL to play the audio or video in ApsaraVideo Player SDK (for URL-based playback) or a third-party player.
       *
       * @param request GetPlayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfoWithOptions(const Models::GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the playback URL of a video or audio file based on its ID.
       *
       * @description You use the ID of a video or audio file to query the playback URL of the file. Then, you can use the playback URL to play the audio or video in ApsaraVideo Player SDK (for URL-based playback) or a third-party player.
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
       * @summary 查询工程导出任务
       *
       * @param request GetProjectExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectExportJobResponse
       */
      Models::GetProjectExportJobResponse getProjectExportJobWithOptions(const Models::GetProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询工程导出任务
       *
       * @param request GetProjectExportJobRequest
       * @return GetProjectExportJobResponse
       */
      Models::GetProjectExportJobResponse getProjectExportJob(const Models::GetProjectExportJobRequest &request);

      /**
       * @summary 获取公共媒资内容信息
       *
       * @param request GetPublicMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicMediaInfoResponse
       */
      Models::GetPublicMediaInfoResponse getPublicMediaInfoWithOptions(const Models::GetPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公共媒资内容信息
       *
       * @param request GetPublicMediaInfoRequest
       * @return GetPublicMediaInfoResponse
       */
      Models::GetPublicMediaInfoResponse getPublicMediaInfo(const Models::GetPublicMediaInfoRequest &request);

      /**
       * @summary Queries the information about an intelligent job and the execution results of the job based the job ID. You can call this operation to query only intelligent jobs created within the past year.
       *
       * @param request GetSmartHandleJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartHandleJobResponse
       */
      Models::GetSmartHandleJobResponse getSmartHandleJobWithOptions(const Models::GetSmartHandleJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an intelligent job and the execution results of the job based the job ID. You can call this operation to query only intelligent jobs created within the past year.
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
       * @summary Queries a source in MediaWeaver.
       *
       * @param request GetSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSourceWithOptions(const Models::GetSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a source in MediaWeaver.
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
       * @summary 获取存储地址列表
       *
       * @param request GetStorageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageListResponse
       */
      Models::GetStorageListResponse getStorageListWithOptions(const Models::GetStorageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取存储地址列表
       *
       * @param request GetStorageListRequest
       * @return GetStorageListResponse
       */
      Models::GetStorageListResponse getStorageList(const Models::GetStorageListRequest &request);

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
       * @summary Queries the information about a template based on the template ID. You can call this operation to query the information about an advanced template if the template is in the Available state.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a template based on the template ID. You can call this operation to query the information about an advanced template if the template is in the Available state.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
       * @summary Queries the parameters for replaceable materials in a template, including the parameter names, default values, and material thumbnails. Only advanced templates are supported.
       *
       * @param request GetTemplateParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateParamsResponse
       */
      Models::GetTemplateParamsResponse getTemplateParamsWithOptions(const Models::GetTemplateParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters for replaceable materials in a template, including the parameter names, default values, and material thumbnails. Only advanced templates are supported.
       *
       * @param request GetTemplateParamsRequest
       * @return GetTemplateParamsResponse
       */
      Models::GetTemplateParamsResponse getTemplateParams(const Models::GetTemplateParamsRequest &request);

      /**
       * @summary Queries the information about a transcoding job.
       *
       * @param request GetTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeJobResponse
       */
      Models::GetTranscodeJobResponse getTranscodeJobWithOptions(const Models::GetTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a transcoding job.
       *
       * @param request GetTranscodeJobRequest
       * @return GetTranscodeJobResponse
       */
      Models::GetTranscodeJobResponse getTranscodeJob(const Models::GetTranscodeJobRequest &request);

      /**
       * @summary Queries the information about URL-based upload jobs.
       *
       * @description You can call this operation to query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
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
       * @description You can call this operation to query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
       * If an upload job fails, you can view the error code and error message. If an upload job is successful, you can obtain the video ID.
       *
       * @param request GetUrlUploadInfosRequest
       * @return GetUrlUploadInfosResponse
       */
      Models::GetUrlUploadInfosResponse getUrlUploadInfos(const Models::GetUrlUploadInfosRequest &request);

      /**
       * @summary Queries information about video and audio files.
       *
       * @description You can call this operation to query information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
       *
       * @param request GetVideoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoListWithOptions(const Models::GetVideoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about video and audio files.
       *
       * @description You can call this operation to query information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
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
       * @summary Queries a packaging group.
       *
       * @param request GetVodPackagingGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVodPackagingGroupResponse
       */
      Models::GetVodPackagingGroupResponse getVodPackagingGroupWithOptions(const Models::GetVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a packaging group.
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
       * @summary Adds a media asset in a search library. Before you call this operation, you must create a search library.
       *
       * @param request InsertMediaToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertMediaToSearchLibResponse
       */
      Models::InsertMediaToSearchLibResponse insertMediaToSearchLibWithOptions(const Models::InsertMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a media asset in a search library. Before you call this operation, you must create a search library.
       *
       * @param request InsertMediaToSearchLibRequest
       * @return InsertMediaToSearchLibResponse
       */
      Models::InsertMediaToSearchLibResponse insertMediaToSearchLib(const Models::InsertMediaToSearchLibRequest &request);

      /**
       * @summary 列出智能体的对话历史记录。
       *
       * @param request ListAIAgentDialoguesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentDialoguesResponse
       */
      Models::ListAIAgentDialoguesResponse listAIAgentDialoguesWithOptions(const Models::ListAIAgentDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出智能体的对话历史记录。
       *
       * @param request ListAIAgentDialoguesRequest
       * @return ListAIAgentDialoguesResponse
       */
      Models::ListAIAgentDialoguesResponse listAIAgentDialogues(const Models::ListAIAgentDialoguesRequest &request);

      /**
       * @summary Queries a list of AI agents.
       *
       * @description ## [](#)Request description
       * You can call this operation to query a list of AI agents based on the `AIAgentId`. The optional parameters include `StartTime`, `EndTime`, `PageSize`, and `PageNumber`. The returned result includes the status, runtime configurations, template configurations, custom information, and the URL of call log file for each AI agent.
       * **Note**:
       * *   The default value of `PageSize` is 10, and the default value of `PageNumber` is 1.
       *
       * @param request ListAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentInstanceResponse
       */
      Models::ListAIAgentInstanceResponse listAIAgentInstanceWithOptions(const Models::ListAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AI agents.
       *
       * @description ## [](#)Request description
       * You can call this operation to query a list of AI agents based on the `AIAgentId`. The optional parameters include `StartTime`, `EndTime`, `PageSize`, and `PageNumber`. The returned result includes the status, runtime configurations, template configurations, custom information, and the URL of call log file for each AI agent.
       * **Note**:
       * *   The default value of `PageSize` is 10, and the default value of `PageNumber` is 1.
       *
       * @param request ListAIAgentInstanceRequest
       * @return ListAIAgentInstanceResponse
       */
      Models::ListAIAgentInstanceResponse listAIAgentInstance(const Models::ListAIAgentInstanceRequest &request);

      /**
       * @summary 罗列用户电话资源接口
       *
       * @param request ListAIAgentPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentPhoneNumberResponse
       */
      Models::ListAIAgentPhoneNumberResponse listAIAgentPhoneNumberWithOptions(const Models::ListAIAgentPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 罗列用户电话资源接口
       *
       * @param request ListAIAgentPhoneNumberRequest
       * @return ListAIAgentPhoneNumberResponse
       */
      Models::ListAIAgentPhoneNumberResponse listAIAgentPhoneNumber(const Models::ListAIAgentPhoneNumberRequest &request);

      /**
       * @summary 更新回调配置
       *
       * @param request ListAIAgentVoiceprintsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIAgentVoiceprintsResponse
       */
      Models::ListAIAgentVoiceprintsResponse listAIAgentVoiceprintsWithOptions(const Models::ListAIAgentVoiceprintsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新回调配置
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
       * @summary Queries a list of custom templates.
       *
       * @param request ListCustomTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomTemplatesResponse
       */
      Models::ListCustomTemplatesResponse listCustomTemplatesWithOptions(const Models::ListCustomTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom templates.
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
       * @summary Queries a list of files in a media fingerprint library.
       *
       * @description You can call this operation to query files in a media fingerprint library based on the library ID. The queried results can be paginated.
       *
       * @param request ListDNAFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDNAFilesResponse
       */
      Models::ListDNAFilesResponse listDNAFilesWithOptions(const Models::ListDNAFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of files in a media fingerprint library.
       *
       * @description You can call this operation to query files in a media fingerprint library based on the library ID. The queried results can be paginated.
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
       * @summary 查询所有热词库的列表
       *
       * @param request ListHotwordLibrariesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotwordLibrariesResponse
       */
      Models::ListHotwordLibrariesResponse listHotwordLibrariesWithOptions(const Models::ListHotwordLibrariesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有热词库的列表
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
       * *   **GroupName** is required to specify the channel group to which the channel belongs.
       * *   **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
       * *   **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
       * *   **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
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
       * *   **GroupName** is required to specify the channel group to which the channel belongs.
       * *   **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
       * *   **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
       * *   **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
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
       * @summary Queries a list of live stream recording templates.
       *
       * @param request ListLiveRecordTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRecordTemplatesResponse
       */
      Models::ListLiveRecordTemplatesResponse listLiveRecordTemplatesWithOptions(const Models::ListLiveRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream recording templates.
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
       * @summary Queries a list of live stream snapshot jobs by page.
       *
       * @param request ListLiveSnapshotJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveSnapshotJobsResponse
       */
      Models::ListLiveSnapshotJobsResponse listLiveSnapshotJobsWithOptions(const Models::ListLiveSnapshotJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream snapshot jobs by page.
       *
       * @param request ListLiveSnapshotJobsRequest
       * @return ListLiveSnapshotJobsResponse
       */
      Models::ListLiveSnapshotJobsResponse listLiveSnapshotJobs(const Models::ListLiveSnapshotJobsRequest &request);

      /**
       * @summary Queries a list of live stream snapshot templates by page.
       *
       * @param request ListLiveSnapshotTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveSnapshotTemplatesResponse
       */
      Models::ListLiveSnapshotTemplatesResponse listLiveSnapshotTemplatesWithOptions(const Models::ListLiveSnapshotTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of live stream snapshot templates by page.
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
       * @summary Queries the basic information of all media assets that meet the specified conditions.
       *
       * @description If includeFileBasicInfo is set to true, the basic information, such as the duration and file size, of the source file is also returned. At most the first 100 entries that meet the specified conditions are returned. All media assets must exactly match all non-empty fields. The fields that support exact match include MediaType, Source, BusinessType, Category, and Status. If all information cannot be returned at a time, you can use NextToken to initiate a request to retrieve a new page of results.
       *
       * @param request ListMediaBasicInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaBasicInfosResponse
       */
      Models::ListMediaBasicInfosResponse listMediaBasicInfosWithOptions(const Models::ListMediaBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of all media assets that meet the specified conditions.
       *
       * @description If includeFileBasicInfo is set to true, the basic information, such as the duration and file size, of the source file is also returned. At most the first 100 entries that meet the specified conditions are returned. All media assets must exactly match all non-empty fields. The fields that support exact match include MediaType, Source, BusinessType, Category, and Status. If all information cannot be returned at a time, you can use NextToken to initiate a request to retrieve a new page of results.
       *
       * @param request ListMediaBasicInfosRequest
       * @return ListMediaBasicInfosResponse
       */
      Models::ListMediaBasicInfosResponse listMediaBasicInfos(const Models::ListMediaBasicInfosRequest &request);

      /**
       * @summary 查询 MediaConvertJob 列表
       *
       * @param request ListMediaConvertJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaConvertJobsResponse
       */
      Models::ListMediaConvertJobsResponse listMediaConvertJobsWithOptions(const Models::ListMediaConvertJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 MediaConvertJob 列表
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
       * @summary Queries MediaLive inputs.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListMediaLiveInputsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaLiveInputsResponse
       */
      Models::ListMediaLiveInputsResponse listMediaLiveInputsWithOptions(const Models::ListMediaLiveInputsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries MediaLive inputs.
       *
       * @description ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
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
       * @summary Queries a list of packaging jobs.
       *
       * @param request ListPackageJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPackageJobsResponse
       */
      Models::ListPackageJobsResponse listPackageJobsWithOptions(const Models::ListPackageJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of packaging jobs.
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
       * @summary 获取自定义库下实体列表
       *
       * @param request ListRecognitionEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecognitionEntitiesResponse
       */
      Models::ListRecognitionEntitiesResponse listRecognitionEntitiesWithOptions(const Models::ListRecognitionEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义库下实体列表
       *
       * @param request ListRecognitionEntitiesRequest
       * @return ListRecognitionEntitiesResponse
       */
      Models::ListRecognitionEntitiesResponse listRecognitionEntities(const Models::ListRecognitionEntitiesRequest &request);

      /**
       * @summary 获取自定义库列表
       *
       * @param request ListRecognitionLibsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecognitionLibsResponse
       */
      Models::ListRecognitionLibsResponse listRecognitionLibsWithOptions(const Models::ListRecognitionLibsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义库列表
       *
       * @param request ListRecognitionLibsRequest
       * @return ListRecognitionLibsResponse
       */
      Models::ListRecognitionLibsResponse listRecognitionLibs(const Models::ListRecognitionLibsRequest &request);

      /**
       * @summary 获取自定义库实体的图片列表
       *
       * @param request ListRecognitionSamplesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecognitionSamplesResponse
       */
      Models::ListRecognitionSamplesResponse listRecognitionSamplesWithOptions(const Models::ListRecognitionSamplesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义库实体的图片列表
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
       * @summary Queries the information about search libraries.
       *
       * @param request ListSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchLibResponse
       */
      Models::ListSearchLibResponse listSearchLibWithOptions(const Models::ListSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about search libraries.
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
       * @summary Queries a list of system digital humans. This operation supports paged queries.
       *
       * @param request ListSmartSysAvatarModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartSysAvatarModelsResponse
       */
      Models::ListSmartSysAvatarModelsResponse listSmartSysAvatarModelsWithOptions(const Models::ListSmartSysAvatarModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of system digital humans. This operation supports paged queries.
       *
       * @param request ListSmartSysAvatarModelsRequest
       * @return ListSmartSysAvatarModelsResponse
       */
      Models::ListSmartSysAvatarModelsResponse listSmartSysAvatarModels(const Models::ListSmartSysAvatarModelsRequest &request);

      /**
       * @summary Queries a list of speaker groups, including the name, gender, and sample audio of each speaker. The list is grouped by scenario.
       *
       * @param request ListSmartVoiceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmartVoiceGroupsResponse
       */
      Models::ListSmartVoiceGroupsResponse listSmartVoiceGroupsWithOptions(const Models::ListSmartVoiceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of speaker groups, including the name, gender, and sample audio of each speaker. The list is grouped by scenario.
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
       * 1.  1: transcoding template.
       * 2.  2: snapshot template.
       * 3.  3: animated image template.
       * 4.  4\\. image watermark template.
       * 5.  5: text watermark template.
       * 6.  6: subtitle template.
       * 7.  7: AI-assisted content moderation template.
       * 8.  8: AI-assisted intelligent thumbnail template.
       * 9.  9: AI-assisted intelligent erasure template.
       * Subtypes of transcoding templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (AudioTranscode): audio transcoding template.
       * 3.  3 (Remux): container format conversion template.
       * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
       * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
       * Subtypes of snapshot templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (Sprite): sprite template.
       * 3.  3 (WebVtt): WebVTT template.
       * Subtypes of AI-assisted content moderation templates:
       * 1.  1 (Video): video moderation template.
       * 2.  2 (Audio): audio moderation template.
       * 3.  3 (Image): image moderation template.
       * Subtypes of AI-assisted intelligent erasure templates:
       * 1.  1 (VideoDelogo): logo erasure template.
       * 2.  2 (VideoDetext): subtitle erasure template.
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
       * 1.  1: transcoding template.
       * 2.  2: snapshot template.
       * 3.  3: animated image template.
       * 4.  4\\. image watermark template.
       * 5.  5: text watermark template.
       * 6.  6: subtitle template.
       * 7.  7: AI-assisted content moderation template.
       * 8.  8: AI-assisted intelligent thumbnail template.
       * 9.  9: AI-assisted intelligent erasure template.
       * Subtypes of transcoding templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (AudioTranscode): audio transcoding template.
       * 3.  3 (Remux): container format conversion template.
       * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
       * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
       * Subtypes of snapshot templates:
       * 1.  1 (Normal): regular template.
       * 2.  2 (Sprite): sprite template.
       * 3.  3 (WebVtt): WebVTT template.
       * Subtypes of AI-assisted content moderation templates:
       * 1.  1 (Video): video moderation template.
       * 2.  2 (Audio): audio moderation template.
       * 3.  3 (Image): image moderation template.
       * Subtypes of AI-assisted intelligent erasure templates:
       * 1.  1 (VideoDelogo): logo erasure template.
       * 2.  2 (VideoDetext): subtitle erasure template.
       *
       * @param request ListSystemTemplatesRequest
       * @return ListSystemTemplatesResponse
       */
      Models::ListSystemTemplatesResponse listSystemTemplates(const Models::ListSystemTemplatesRequest &request);

      /**
       * @summary Queries a list of templates that meet the specified conditions. You can query templates based on information such as the template status and creation source.
       *
       * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
       * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
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
       * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary Queries a list of transcoding jobs.
       *
       * @param request ListTranscodeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscodeJobsResponse
       */
      Models::ListTranscodeJobsResponse listTranscodeJobsWithOptions(const Models::ListTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of transcoding jobs.
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
       * @summary Lists packaging configurations.
       *
       * @param request ListVodPackagingConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodPackagingConfigurationsResponse
       */
      Models::ListVodPackagingConfigurationsResponse listVodPackagingConfigurationsWithOptions(const Models::ListVodPackagingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists packaging configurations.
       *
       * @param request ListVodPackagingConfigurationsRequest
       * @return ListVodPackagingConfigurationsResponse
       */
      Models::ListVodPackagingConfigurationsResponse listVodPackagingConfigurations(const Models::ListVodPackagingConfigurationsRequest &request);

      /**
       * @summary Lists packaging groups.
       *
       * @param request ListVodPackagingGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodPackagingGroupsResponse
       */
      Models::ListVodPackagingGroupsResponse listVodPackagingGroupsWithOptions(const Models::ListVodPackagingGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists packaging groups.
       *
       * @param request ListVodPackagingGroupsRequest
       * @return ListVodPackagingGroupsResponse
       */
      Models::ListVodPackagingGroupsResponse listVodPackagingGroups(const Models::ListVodPackagingGroupsRequest &request);

      /**
       * @summary 工作流任务实例列表
       *
       * @param request ListWorkflowTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowTasksResponse
       */
      Models::ListWorkflowTasksResponse listWorkflowTasksWithOptions(const Models::ListWorkflowTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工作流任务实例列表
       *
       * @param request ListWorkflowTasksRequest
       * @return ListWorkflowTasksResponse
       */
      Models::ListWorkflowTasksResponse listWorkflowTasks(const Models::ListWorkflowTasksRequest &request);

      /**
       * @summary 开启MediaConnect双流灾备
       *
       * @param request OpenMediaConnectFlowFailoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenMediaConnectFlowFailoverResponse
       */
      Models::OpenMediaConnectFlowFailoverResponse openMediaConnectFlowFailoverWithOptions(const Models::OpenMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启MediaConnect双流灾备
       *
       * @param request OpenMediaConnectFlowFailoverRequest
       * @return OpenMediaConnectFlowFailoverResponse
       */
      Models::OpenMediaConnectFlowFailoverResponse openMediaConnectFlowFailover(const Models::OpenMediaConnectFlowFailoverRequest &request);

      /**
       * @summary 查询版权水印提取任务
       *
       * @param request QueryCopyrightExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCopyrightExtractJobResponse
       */
      Models::QueryCopyrightExtractJobResponse queryCopyrightExtractJobWithOptions(const Models::QueryCopyrightExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询版权水印提取任务
       *
       * @param request QueryCopyrightExtractJobRequest
       * @return QueryCopyrightExtractJobResponse
       */
      Models::QueryCopyrightExtractJobResponse queryCopyrightExtractJob(const Models::QueryCopyrightExtractJobRequest &request);

      /**
       * @summary 查询视频版权水印任务列表
       *
       * @param request QueryCopyrightJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCopyrightJobListResponse
       */
      Models::QueryCopyrightJobListResponse queryCopyrightJobListWithOptions(const Models::QueryCopyrightJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频版权水印任务列表
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
       * @summary Queries the status and result of an intelligent production job.
       *
       * @param request QueryIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIProductionJobResponse
       */
      Models::QueryIProductionJobResponse queryIProductionJobWithOptions(const Models::QueryIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status and result of an intelligent production job.
       *
       * @param request QueryIProductionJobRequest
       * @return QueryIProductionJobResponse
       */
      Models::QueryIProductionJobResponse queryIProductionJob(const Models::QueryIProductionJobRequest &request);

      /**
       * @summary Queries the information about a content moderation job.
       *
       * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. You can call this operation again to query the remaining moderation results of the video.
       *
       * @param request QueryMediaCensorJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaCensorJobDetailResponse
       */
      Models::QueryMediaCensorJobDetailResponse queryMediaCensorJobDetailWithOptions(const Models::QueryMediaCensorJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a content moderation job.
       *
       * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. You can call this operation again to query the remaining moderation results of the video.
       *
       * @param request QueryMediaCensorJobDetailRequest
       * @return QueryMediaCensorJobDetailResponse
       */
      Models::QueryMediaCensorJobDetailResponse queryMediaCensorJobDetail(const Models::QueryMediaCensorJobDetailRequest &request);

      /**
       * @summary Queries a list of content moderation jobs.
       *
       * @description You can call this operation to query only the content moderation jobs within the most recent three months.
       *
       * @param request QueryMediaCensorJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaCensorJobListResponse
       */
      Models::QueryMediaCensorJobListResponse queryMediaCensorJobListWithOptions(const Models::QueryMediaCensorJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of content moderation jobs.
       *
       * @description You can call this operation to query only the content moderation jobs within the most recent three months.
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
       * @summary Queries the details of a search index.
       *
       * @param request QuerySearchIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySearchIndexResponse
       */
      Models::QuerySearchIndexResponse querySearchIndexWithOptions(const Models::QuerySearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a search index.
       *
       * @param request QuerySearchIndexRequest
       * @return QuerySearchIndexResponse
       */
      Models::QuerySearchIndexResponse querySearchIndex(const Models::QuerySearchIndexRequest &request);

      /**
       * @summary Queries the information about a search library.
       *
       * @param request QuerySearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySearchLibResponse
       */
      Models::QuerySearchLibResponse querySearchLibWithOptions(const Models::QuerySearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a search library.
       *
       * @param request QuerySearchLibRequest
       * @return QuerySearchLibResponse
       */
      Models::QuerySearchLibResponse querySearchLib(const Models::QuerySearchLibRequest &request);

      /**
       * @summary Queries the information about a smart tagging job.
       *
       * @param request QuerySmarttagJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmarttagJobResponse
       */
      Models::QuerySmarttagJobResponse querySmarttagJobWithOptions(const Models::QuerySmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a smart tagging job.
       *
       * @param request QuerySmarttagJobRequest
       * @return QuerySmarttagJobResponse
       */
      Models::QuerySmarttagJobResponse querySmarttagJob(const Models::QuerySmarttagJobRequest &request);

      /**
       * @summary 查询视频溯源水印ab流任务
       *
       * @param request QueryTraceAbJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceAbJobListResponse
       */
      Models::QueryTraceAbJobListResponse queryTraceAbJobListWithOptions(const Models::QueryTraceAbJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频溯源水印ab流任务
       *
       * @param request QueryTraceAbJobListRequest
       * @return QueryTraceAbJobListResponse
       */
      Models::QueryTraceAbJobListResponse queryTraceAbJobList(const Models::QueryTraceAbJobListRequest &request);

      /**
       * @summary 查询溯源水印提取任务
       *
       * @param request QueryTraceExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceExtractJobResponse
       */
      Models::QueryTraceExtractJobResponse queryTraceExtractJobWithOptions(const Models::QueryTraceExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询溯源水印提取任务
       *
       * @param request QueryTraceExtractJobRequest
       * @return QueryTraceExtractJobResponse
       */
      Models::QueryTraceExtractJobResponse queryTraceExtractJob(const Models::QueryTraceExtractJobRequest &request);

      /**
       * @summary 查询视频溯源水印m3u8任务
       *
       * @param request QueryTraceM3u8JobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceM3u8JobListResponse
       */
      Models::QueryTraceM3u8JobListResponse queryTraceM3u8JobListWithOptions(const Models::QueryTraceM3u8JobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频溯源水印m3u8任务
       *
       * @param request QueryTraceM3u8JobListRequest
       * @return QueryTraceM3u8JobListResponse
       */
      Models::QueryTraceM3u8JobListResponse queryTraceM3u8JobList(const Models::QueryTraceM3u8JobListRequest &request);

      /**
       * @summary 查询视频理解任务结果
       *
       * @param tmpReq QueryVideoCognitionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVideoCognitionJobResponse
       */
      Models::QueryVideoCognitionJobResponse queryVideoCognitionJobWithOptions(const Models::QueryVideoCognitionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频理解任务结果
       *
       * @param request QueryVideoCognitionJobRequest
       * @return QueryVideoCognitionJobResponse
       */
      Models::QueryVideoCognitionJobResponse queryVideoCognitionJob(const Models::QueryVideoCognitionJobRequest &request);

      /**
       * @summary Obtain a new upload credential for a media asset after its upload credential expires.
       *
       * @description You can also call this operation to overwrite media files. After you obtain the upload URL of a media file, you can upload the media file again without changing the audio or video ID.
       *
       * @param request RefreshUploadMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshUploadMediaResponse
       */
      Models::RefreshUploadMediaResponse refreshUploadMediaWithOptions(const Models::RefreshUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a new upload credential for a media asset after its upload credential expires.
       *
       * @description You can also call this operation to overwrite media files. After you obtain the upload URL of a media file, you can upload the media file again without changing the audio or video ID.
       *
       * @param request RefreshUploadMediaRequest
       * @return RefreshUploadMediaResponse
       */
      Models::RefreshUploadMediaResponse refreshUploadMedia(const Models::RefreshUploadMediaRequest &request);

      /**
       * @summary Registers a media asset with Intelligent Media Services (IMS). IMS assigns an ID to the media asset. This operation asynchronously accesses the media asset service in which the media asset is stored to obtain the file information of the media asset based on the input URL. You can also specify basic information, such as the title, tags, and description, for the media asset. This operation returns the ID of the media asset. You can call the GetMediaInfo operation based on the ID to query the details of the media asset. You can set InputURL only to the URL of an Object Storage Service (OSS) file or an ApsaraVideo VOD media asset.
       *
       * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the GetMediaInfo operation at this time, you may fail to obtain the information about the media asset.
       *
       * @param request RegisterMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterMediaInfoResponse
       */
      Models::RegisterMediaInfoResponse registerMediaInfoWithOptions(const Models::RegisterMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a media asset with Intelligent Media Services (IMS). IMS assigns an ID to the media asset. This operation asynchronously accesses the media asset service in which the media asset is stored to obtain the file information of the media asset based on the input URL. You can also specify basic information, such as the title, tags, and description, for the media asset. This operation returns the ID of the media asset. You can call the GetMediaInfo operation based on the ID to query the details of the media asset. You can set InputURL only to the URL of an Object Storage Service (OSS) file or an ApsaraVideo VOD media asset.
       *
       * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the GetMediaInfo operation at this time, you may fail to obtain the information about the media asset.
       *
       * @param request RegisterMediaInfoRequest
       * @return RegisterMediaInfoResponse
       */
      Models::RegisterMediaInfoResponse registerMediaInfo(const Models::RegisterMediaInfoRequest &request);

      /**
       * @summary Registers a media stream.
       *
       * @description You can call this operation to register a media stream file in an Object Storage Service (OSS) bucket with Intelligent Media Services (IMS) and associate the media stream with the specified media asset ID.
       *
       * @param request RegisterMediaStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterMediaStreamResponse
       */
      Models::RegisterMediaStreamResponse registerMediaStreamWithOptions(const Models::RegisterMediaStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a media stream.
       *
       * @description You can call this operation to register a media stream file in an Object Storage Service (OSS) bucket with Intelligent Media Services (IMS) and associate the media stream with the specified media asset ID.
       *
       * @param request RegisterMediaStreamRequest
       * @return RegisterMediaStreamResponse
       */
      Models::RegisterMediaStreamResponse registerMediaStream(const Models::RegisterMediaStreamRequest &request);

      /**
       * @summary 恢复某个MediaConnect实例的某个输出
       *
       * @param request ResumeMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeMediaConnectFlowOutputResponse
       */
      Models::ResumeMediaConnectFlowOutputResponse resumeMediaConnectFlowOutputWithOptions(const Models::ResumeMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复某个MediaConnect实例的某个输出
       *
       * @param request ResumeMediaConnectFlowOutputRequest
       * @return ResumeMediaConnectFlowOutputResponse
       */
      Models::ResumeMediaConnectFlowOutputResponse resumeMediaConnectFlowOutput(const Models::ResumeMediaConnectFlowOutputRequest &request);

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
       * @summary Re-analyzes the search index jobs of media assets. You can re-run the search index jobs of up to 20 media assets in each request.
       *
       * @param request SearchIndexJobRerunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchIndexJobRerunResponse
       */
      Models::SearchIndexJobRerunResponse searchIndexJobRerunWithOptions(const Models::SearchIndexJobRerunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-analyzes the search index jobs of media assets. You can re-run the search index jobs of up to 20 media assets in each request.
       *
       * @param request SearchIndexJobRerunRequest
       * @return SearchIndexJobRerunResponse
       */
      Models::SearchIndexJobRerunResponse searchIndexJobRerun(const Models::SearchIndexJobRerunRequest &request);

      /**
       * @summary Queries information about media assets based on the request parameters.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about media assets based on the request parameters.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary Queries media assets based on character names, subtitles, or AI categories.
       *
       * @description You can call this operation to query media assets or media asset clips based on character names, subtitles, or AI categories.
       *
       * @param request SearchMediaByAILabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByAILabelResponse
       */
      Models::SearchMediaByAILabelResponse searchMediaByAILabelWithOptions(const Models::SearchMediaByAILabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media assets based on character names, subtitles, or AI categories.
       *
       * @description You can call this operation to query media assets or media asset clips based on character names, subtitles, or AI categories.
       *
       * @param request SearchMediaByAILabelRequest
       * @return SearchMediaByAILabelResponse
       */
      Models::SearchMediaByAILabelResponse searchMediaByAILabel(const Models::SearchMediaByAILabelRequest &request);

      /**
       * @summary Queries the information about media assets that are related to a specific face.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaByFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByFaceResponse
       */
      Models::SearchMediaByFaceResponse searchMediaByFaceWithOptions(const Models::SearchMediaByFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about media assets that are related to a specific face.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaByFaceRequest
       * @return SearchMediaByFaceResponse
       */
      Models::SearchMediaByFaceResponse searchMediaByFace(const Models::SearchMediaByFaceRequest &request);

      /**
       * @summary Queries media assets by using the hybrid search feature. This operation allows you to search for media assets by using natural language based on intelligent tag text search and the search capabilities of large language models (LLMs). This implements multimodal retrieval.
       *
       * @param request SearchMediaByHybridRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByHybridResponse
       */
      Models::SearchMediaByHybridResponse searchMediaByHybridWithOptions(const Models::SearchMediaByHybridRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media assets by using the hybrid search feature. This operation allows you to search for media assets by using natural language based on intelligent tag text search and the search capabilities of large language models (LLMs). This implements multimodal retrieval.
       *
       * @param request SearchMediaByHybridRequest
       * @return SearchMediaByHybridResponse
       */
      Models::SearchMediaByHybridResponse searchMediaByHybrid(const Models::SearchMediaByHybridRequest &request);

      /**
       * @summary Queries media assets by using the large visual model. You can use natural language for the query.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaByMultimodalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaByMultimodalResponse
       */
      Models::SearchMediaByMultimodalResponse searchMediaByMultimodalWithOptions(const Models::SearchMediaByMultimodalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media assets by using the large visual model. You can use natural language for the query.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaByMultimodalRequest
       * @return SearchMediaByMultimodalResponse
       */
      Models::SearchMediaByMultimodalResponse searchMediaByMultimodal(const Models::SearchMediaByMultimodalRequest &request);

      /**
       * @summary Queries the information about media asset clips that are related to a specific face based on the response to the SearchMediaByFace operation.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaClipByFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaClipByFaceResponse
       */
      Models::SearchMediaClipByFaceResponse searchMediaClipByFaceWithOptions(const Models::SearchMediaClipByFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about media asset clips that are related to a specific face based on the response to the SearchMediaByFace operation.
       *
       * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
       *
       * @param request SearchMediaClipByFaceRequest
       * @return SearchMediaClipByFaceResponse
       */
      Models::SearchMediaClipByFaceResponse searchMediaClipByFace(const Models::SearchMediaClipByFaceRequest &request);

      /**
       * @summary 搜索公共媒资信息
       *
       * @param request SearchPublicMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchPublicMediaInfoResponse
       */
      Models::SearchPublicMediaInfoResponse searchPublicMediaInfoWithOptions(const Models::SearchPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索公共媒资信息
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
       * @summary Instructs an AI agent to immediately broadcast a text message and supports interruption settings.
       *
       * @description You can call this operation to instruct an AI agent to broadcast the content that you specify. You can determine whether this broadcast can immediately interrupt the ongoing speech. The interruption is allowed by default.
       * **Note**
       * *   Make sure that the `InstanceId` is valid and corresponds to an existing AI agent.
       * *   The content of `Text` must comply with the specifications and does not contain sensitive or inappropriate information.
       * *   If you do not want the new broadcast to interrupt the ongoing speech, you must set `EnableInterrupt` to `false`.
       *
       * @param request SendAIAgentSpeechRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAIAgentSpeechResponse
       */
      Models::SendAIAgentSpeechResponse sendAIAgentSpeechWithOptions(const Models::SendAIAgentSpeechRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Instructs an AI agent to immediately broadcast a text message and supports interruption settings.
       *
       * @description You can call this operation to instruct an AI agent to broadcast the content that you specify. You can determine whether this broadcast can immediately interrupt the ongoing speech. The interruption is allowed by default.
       * **Note**
       * *   Make sure that the `InstanceId` is valid and corresponds to an existing AI agent.
       * *   The content of `Text` must comply with the specifications and does not contain sensitive or inappropriate information.
       * *   If you do not want the new broadcast to interrupt the ongoing speech, you must set `EnableInterrupt` to `false`.
       *
       * @param request SendAIAgentSpeechRequest
       * @return SendAIAgentSpeechResponse
       */
      Models::SendAIAgentSpeechResponse sendAIAgentSpeech(const Models::SendAIAgentSpeechRequest &request);

      /**
       * @summary 传入消息作为LLM输入。
       *
       * @param request SendAIAgentTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAIAgentTextResponse
       */
      Models::SendAIAgentTextResponse sendAIAgentTextWithOptions(const Models::SendAIAgentTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 传入消息作为LLM输入。
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
       * @summary 向IM客户端发送消息。
       *
       * @param request SendMessageChatTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageChatTextResponse
       */
      Models::SendMessageChatTextResponse sendMessageChatTextWithOptions(const Models::SendMessageChatTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 向IM客户端发送消息。
       *
       * @param request SendMessageChatTextRequest
       * @return SendMessageChatTextResponse
       */
      Models::SendMessageChatTextResponse sendMessageChatText(const Models::SendMessageChatTextRequest &request);

      /**
       * @summary 设置声纹
       *
       * @param tmpReq SetAIAgentVoiceprintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAIAgentVoiceprintResponse
       */
      Models::SetAIAgentVoiceprintResponse setAIAgentVoiceprintWithOptions(const Models::SetAIAgentVoiceprintRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置声纹
       *
       * @param request SetAIAgentVoiceprintRequest
       * @return SetAIAgentVoiceprintResponse
       */
      Models::SetAIAgentVoiceprintResponse setAIAgentVoiceprint(const Models::SetAIAgentVoiceprintRequest &request);

      /**
       * @summary 设置内容分析搜索配置
       *
       * @param request SetContentAnalyzeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetContentAnalyzeConfigResponse
       */
      Models::SetContentAnalyzeConfigResponse setContentAnalyzeConfigWithOptions(const Models::SetContentAnalyzeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置内容分析搜索配置
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
       * @summary 设置默认存储路径
       *
       * @param request SetDefaultStorageLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultStorageLocationResponse
       */
      Models::SetDefaultStorageLocationResponse setDefaultStorageLocationWithOptions(const Models::SetDefaultStorageLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置默认存储路径
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
       * @summary Enables or disables event notifications for an AI agent and configures the callback URL and event types.
       *
       * @description ## [](#)Request description
       * You can call this operation to configure event notifications for an AI agent. You can configure `EnableNotify` to enable or disable event notifications, configure `CallbackUrl` to specify a callback URL, and configure `EventTypes` to specify event types. You can also configure `Token` to specify an authentication token for enhanced security. The system returns a unique `RequestId` for subsequent tracing after a successful request.
       *
       * @param request SetNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetNotifyConfigResponse
       */
      Models::SetNotifyConfigResponse setNotifyConfigWithOptions(const Models::SetNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables event notifications for an AI agent and configures the callback URL and event types.
       *
       * @description ## [](#)Request description
       * You can call this operation to configure event notifications for an AI agent. You can configure `EnableNotify` to enable or disable event notifications, configure `CallbackUrl` to specify a callback URL, and configure `EventTypes` to specify event types. You can also configure `Token` to specify an authentication token for enhanced security. The system returns a unique `RequestId` for subsequent tracing after a successful request.
       *
       * @param request SetNotifyConfigRequest
       * @return SetNotifyConfigResponse
       */
      Models::SetNotifyConfigResponse setNotifyConfig(const Models::SetNotifyConfigRequest &request);

      /**
       * @summary Starts an AI agent that is configured in the Intelligent Media Services (IMS) console.
       *
       * @description You can call this operation to start an AI agent instance for a conversation. ````````When the AI agent is started, the system returns a unique `InstanceId` for subsequent tracking and operations.
       *
       * @param tmpReq StartAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAgentInstanceResponse
       */
      Models::StartAIAgentInstanceResponse startAIAgentInstanceWithOptions(const Models::StartAIAgentInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an AI agent that is configured in the Intelligent Media Services (IMS) console.
       *
       * @description You can call this operation to start an AI agent instance for a conversation. ````````When the AI agent is started, the system returns a unique `InstanceId` for subsequent tracking and operations.
       *
       * @param request StartAIAgentInstanceRequest
       * @return StartAIAgentInstanceResponse
       */
      Models::StartAIAgentInstanceResponse startAIAgentInstance(const Models::StartAIAgentInstanceRequest &request);

      /**
       * @summary 创建一个智能体实例，返回智能体所在的频道、频道内名称以及进入频道所需的token。
       *
       * @param tmpReq StartAIAgentOutboundCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAIAgentOutboundCallResponse
       */
      Models::StartAIAgentOutboundCallResponse startAIAgentOutboundCallWithOptions(const Models::StartAIAgentOutboundCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个智能体实例，返回智能体所在的频道、频道内名称以及进入频道所需的token。
       *
       * @param request StartAIAgentOutboundCallRequest
       * @return StartAIAgentOutboundCallResponse
       */
      Models::StartAIAgentOutboundCallResponse startAIAgentOutboundCall(const Models::StartAIAgentOutboundCallRequest &request);

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
       * @description *   You can call this operation only when the channel is idle. You cannot start a channel repeatedly.
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
       * @description *   You can call this operation only when the channel is idle. You cannot start a channel repeatedly.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartMediaLiveChannelRequest
       * @return StartMediaLiveChannelResponse
       */
      Models::StartMediaLiveChannelResponse startMediaLiveChannel(const Models::StartMediaLiveChannelRequest &request);

      /**
       * @summary 开启一个机器人实例
       *
       * @param tmpReq StartRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRtcRobotInstanceResponse
       */
      Models::StartRtcRobotInstanceResponse startRtcRobotInstanceWithOptions(const Models::StartRtcRobotInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启一个机器人实例
       *
       * @param request StartRtcRobotInstanceRequest
       * @return StartRtcRobotInstanceResponse
       */
      Models::StartRtcRobotInstanceResponse startRtcRobotInstance(const Models::StartRtcRobotInstanceRequest &request);

      /**
       * @summary Submits a workflow task. You can submit a workflow task to implement automated media processing based on a workflow template.
       *
       * @description *   Only media assets from Intelligent Media Services (IMS) or ApsaraVideo VOD can be used as the input of a workflow.
       * *   When you submit a workflow task, you must specify a workflow template. You can create a workflow template in the [IMS console](https://ims.console.aliyun.com/settings/workflow/list) or use a preset workflow template.
       *
       * @param request StartWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWorkflowResponse
       */
      Models::StartWorkflowResponse startWorkflowWithOptions(const Models::StartWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a workflow task. You can submit a workflow task to implement automated media processing based on a workflow template.
       *
       * @description *   Only media assets from Intelligent Media Services (IMS) or ApsaraVideo VOD can be used as the input of a workflow.
       * *   When you submit a workflow task, you must specify a workflow template. You can create a workflow template in the [IMS console](https://ims.console.aliyun.com/settings/workflow/list) or use a preset workflow template.
       *
       * @param request StartWorkflowRequest
       * @return StartWorkflowResponse
       */
      Models::StartWorkflowResponse startWorkflow(const Models::StartWorkflowRequest &request);

      /**
       * @summary Stops an AI agent instance.
       *
       * @description *   When you no longer need an AI agent to participate in a conversation or task, you can call this operation to stop the running agent and release relevant resources.****
       * *   You must specify the unique ID of the AI agent that you want to stop by using InstanceId.****
       * *   ****
       *
       * @param request StopAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAIAgentInstanceResponse
       */
      Models::StopAIAgentInstanceResponse stopAIAgentInstanceWithOptions(const Models::StopAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an AI agent instance.
       *
       * @description *   When you no longer need an AI agent to participate in a conversation or task, you can call this operation to stop the running agent and release relevant resources.****
       * *   You must specify the unique ID of the AI agent that you want to stop by using InstanceId.****
       * *   ****
       *
       * @param request StopAIAgentInstanceRequest
       * @return StopAIAgentInstanceResponse
       */
      Models::StopAIAgentInstanceResponse stopAIAgentInstance(const Models::StopAIAgentInstanceRequest &request);

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
       * @summary 停止一个机器人实例
       *
       * @param request StopRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcRobotInstanceResponse
       */
      Models::StopRtcRobotInstanceResponse stopRtcRobotInstanceWithOptions(const Models::StopRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止一个机器人实例
       *
       * @param request StopRtcRobotInstanceRequest
       * @return StopRtcRobotInstanceResponse
       */
      Models::StopRtcRobotInstanceResponse stopRtcRobotInstance(const Models::StopRtcRobotInstanceRequest &request);

      /**
       * @summary 提交视频送审任务
       *
       * @param tmpReq SubmitAIAgentVideoAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIAgentVideoAuditTaskResponse
       */
      Models::SubmitAIAgentVideoAuditTaskResponse submitAIAgentVideoAuditTaskWithOptions(const Models::SubmitAIAgentVideoAuditTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频送审任务
       *
       * @param request SubmitAIAgentVideoAuditTaskRequest
       * @return SubmitAIAgentVideoAuditTaskResponse
       */
      Models::SubmitAIAgentVideoAuditTaskResponse submitAIAgentVideoAuditTask(const Models::SubmitAIAgentVideoAuditTaskRequest &request);

      /**
       * @summary Submits an automatic speech recognition (ASR) job to extract the start and end time and the corresponding text information of a speech in a video.
       *
       * @param request SubmitASRJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitASRJobResponse
       */
      Models::SubmitASRJobResponse submitASRJobWithOptions(const Models::SubmitASRJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an automatic speech recognition (ASR) job to extract the start and end time and the corresponding text information of a speech in a video.
       *
       * @param request SubmitASRJobRequest
       * @return SubmitASRJobResponse
       */
      Models::SubmitASRJobResponse submitASRJob(const Models::SubmitASRJobRequest &request);

      /**
       * @summary Submits an audio production job that converts text into an audio file.
       *
       * @param request SubmitAudioProduceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAudioProduceJobResponse
       */
      Models::SubmitAudioProduceJobResponse submitAudioProduceJobWithOptions(const Models::SubmitAudioProduceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an audio production job that converts text into an audio file.
       *
       * @param request SubmitAudioProduceJobRequest
       * @return SubmitAudioProduceJobResponse
       */
      Models::SubmitAudioProduceJobResponse submitAudioProduceJob(const Models::SubmitAudioProduceJobRequest &request);

      /**
       * @summary Submits a digital human training job. You can call this operation to submit a job the first time or submit a job again with updated parameters if the training failed.
       *
       * @param request SubmitAvatarTrainingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAvatarTrainingJobResponse
       */
      Models::SubmitAvatarTrainingJobResponse submitAvatarTrainingJobWithOptions(const Models::SubmitAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a digital human training job. You can call this operation to submit a job the first time or submit a job again with updated parameters if the training failed.
       *
       * @param request SubmitAvatarTrainingJobRequest
       * @return SubmitAvatarTrainingJobResponse
       */
      Models::SubmitAvatarTrainingJobResponse submitAvatarTrainingJob(const Models::SubmitAvatarTrainingJobRequest &request);

      /**
       * @summary Submits a video rendering job for a digitized virtual human based on text or an audio file of a human voice.
       *
       * @param request SubmitAvatarVideoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAvatarVideoJobResponse
       */
      Models::SubmitAvatarVideoJobResponse submitAvatarVideoJobWithOptions(const Models::SubmitAvatarVideoJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video rendering job for a digitized virtual human based on text or an audio file of a human voice.
       *
       * @param request SubmitAvatarVideoJobRequest
       * @return SubmitAvatarVideoJobResponse
       */
      Models::SubmitAvatarVideoJobResponse submitAvatarVideoJob(const Models::SubmitAvatarVideoJobRequest &request);

      /**
       * @summary Submits a quick video production job that intelligently edits multiple video, audio, and image assets to generate multiple videos at a time.
       *
       * @param request SubmitBatchMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitBatchMediaProducingJobResponse
       */
      Models::SubmitBatchMediaProducingJobResponse submitBatchMediaProducingJobWithOptions(const Models::SubmitBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a quick video production job that intelligently edits multiple video, audio, and image assets to generate multiple videos at a time.
       *
       * @param request SubmitBatchMediaProducingJobRequest
       * @return SubmitBatchMediaProducingJobResponse
       */
      Models::SubmitBatchMediaProducingJobResponse submitBatchMediaProducingJob(const Models::SubmitBatchMediaProducingJobRequest &request);

      /**
       * @summary 提交版权水印提取作业
       *
       * @param tmpReq SubmitCopyrightExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCopyrightExtractJobResponse
       */
      Models::SubmitCopyrightExtractJobResponse submitCopyrightExtractJobWithOptions(const Models::SubmitCopyrightExtractJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交版权水印提取作业
       *
       * @param request SubmitCopyrightExtractJobRequest
       * @return SubmitCopyrightExtractJobResponse
       */
      Models::SubmitCopyrightExtractJobResponse submitCopyrightExtractJob(const Models::SubmitCopyrightExtractJobRequest &request);

      /**
       * @summary 提交版权水印任务
       *
       * @param tmpReq SubmitCopyrightJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCopyrightJobResponse
       */
      Models::SubmitCopyrightJobResponse submitCopyrightJobWithOptions(const Models::SubmitCopyrightJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交版权水印任务
       *
       * @param request SubmitCopyrightJobRequest
       * @return SubmitCopyrightJobResponse
       */
      Models::SubmitCopyrightJobResponse submitCopyrightJob(const Models::SubmitCopyrightJobRequest &request);

      /**
       * @summary Submits a human voice cloning job. The value of VoiceId must be the one used during audio check. The system uses this ID to find the cached audio file for training. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
       *
       * @param request SubmitCustomizedVoiceJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomizedVoiceJobResponse
       */
      Models::SubmitCustomizedVoiceJobResponse submitCustomizedVoiceJobWithOptions(const Models::SubmitCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a human voice cloning job. The value of VoiceId must be the one used during audio check. The system uses this ID to find the cached audio file for training. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
       *
       * @param request SubmitCustomizedVoiceJobRequest
       * @return SubmitCustomizedVoiceJobResponse
       */
      Models::SubmitCustomizedVoiceJobResponse submitCustomizedVoiceJob(const Models::SubmitCustomizedVoiceJobRequest &request);

      /**
       * @summary Submits a media fingerprint analysis job.
       *
       * @description *   SubmitDNAJob is an asynchronous operation. After a request is sent, the system returns a request ID and a job ID and runs the task in the background.
       * *   You can call this operation only in the China (Beijing), China (Hangzhou), and China (Shanghai) regions.
       * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
       *
       * @param tmpReq SubmitDNAJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDNAJobResponse
       */
      Models::SubmitDNAJobResponse submitDNAJobWithOptions(const Models::SubmitDNAJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media fingerprint analysis job.
       *
       * @description *   SubmitDNAJob is an asynchronous operation. After a request is sent, the system returns a request ID and a job ID and runs the task in the background.
       * *   You can call this operation only in the China (Beijing), China (Hangzhou), and China (Shanghai) regions.
       * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
       *
       * @param request SubmitDNAJobRequest
       * @return SubmitDNAJobResponse
       */
      Models::SubmitDNAJobResponse submitDNAJob(const Models::SubmitDNAJobRequest &request);

      /**
       * @summary Generates animated charts based on Excel datasheets, such as line, pie, and bar charts. You can modify the line color and font.
       *
       * @description This feature is available only in the China (Shanghai) region.
       * *   You can add a title, subtitle, data source, and unit to a chart and specify the font and font size. For supported fonts, see [Fonts](https://help.aliyun.com/document_detail/449567.html).
       * *   This feature provides five styles of animated charts: normal, mystery, lively, business, and green.
       * *   You can set the background color or image.
       * *   You can set the animation duration, size, and bitrate.
       * Examples
       * *   Line chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4)
       * *   Bar chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4)
       * *   Pie chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4)
       * *   Normal: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4)
       * *   Mystery: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4)
       * *   Lively: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4)
       * *   Business: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4)
       * *   Green: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4)
       *
       * @param request SubmitDynamicChartJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDynamicChartJobResponse
       */
      Models::SubmitDynamicChartJobResponse submitDynamicChartJobWithOptions(const Models::SubmitDynamicChartJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates animated charts based on Excel datasheets, such as line, pie, and bar charts. You can modify the line color and font.
       *
       * @description This feature is available only in the China (Shanghai) region.
       * *   You can add a title, subtitle, data source, and unit to a chart and specify the font and font size. For supported fonts, see [Fonts](https://help.aliyun.com/document_detail/449567.html).
       * *   This feature provides five styles of animated charts: normal, mystery, lively, business, and green.
       * *   You can set the background color or image.
       * *   You can set the animation duration, size, and bitrate.
       * Examples
       * *   Line chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4)
       * *   Bar chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4)
       * *   Pie chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4)
       * *   Normal: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4)
       * *   Mystery: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4)
       * *   Lively: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4)
       * *   Business: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4)
       * *   Green: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4)
       *
       * @param request SubmitDynamicChartJobRequest
       * @return SubmitDynamicChartJobResponse
       */
      Models::SubmitDynamicChartJobResponse submitDynamicChartJob(const Models::SubmitDynamicChartJobRequest &request);

      /**
       * @summary Submits an image animation job.
       *
       * @param tmpReq SubmitDynamicImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJobWithOptions(const Models::SubmitDynamicImageJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an image animation job.
       *
       * @param request SubmitDynamicImageJobRequest
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJob(const Models::SubmitDynamicImageJobRequest &request);

      /**
       * @summary Submits a highlight extraction task.
       *
       * @param request SubmitHighlightExtractionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHighlightExtractionJobResponse
       */
      Models::SubmitHighlightExtractionJobResponse submitHighlightExtractionJobWithOptions(const Models::SubmitHighlightExtractionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a highlight extraction task.
       *
       * @param request SubmitHighlightExtractionJobRequest
       * @return SubmitHighlightExtractionJobResponse
       */
      Models::SubmitHighlightExtractionJobResponse submitHighlightExtractionJob(const Models::SubmitHighlightExtractionJobRequest &request);

      /**
       * @summary Submits an intelligent production job.
       *
       * @param tmpReq SubmitIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIProductionJobResponse
       */
      Models::SubmitIProductionJobResponse submitIProductionJobWithOptions(const Models::SubmitIProductionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an intelligent production job.
       *
       * @param request SubmitIProductionJobRequest
       * @return SubmitIProductionJobResponse
       */
      Models::SubmitIProductionJobResponse submitIProductionJob(const Models::SubmitIProductionJobRequest &request);

      /**
       * @summary Submits a live editing job to merge one or more live stream clips into one video. After a live editing job is submitted, the job is queued in the background for asynchronous processing. You can call the GeLiveEditingJob operation to query the state of the job based on the job ID. You can also call the GetMediaInfo operation to query the information about the generated media asset based on the media asset ID.
       *
       * @description Live editing is supported for live streams that are recorded and stored in Object Storage Service (OSS) and ApsaraVideo VOD. If multiple live streams are involved in a single job, only those recorded within the same application are supported for mixed editing. The streams must all be recorded either in OSS or ApsaraVideo VOD.
       *
       * @param request SubmitLiveEditingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLiveEditingJobResponse
       */
      Models::SubmitLiveEditingJobResponse submitLiveEditingJobWithOptions(const Models::SubmitLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a live editing job to merge one or more live stream clips into one video. After a live editing job is submitted, the job is queued in the background for asynchronous processing. You can call the GeLiveEditingJob operation to query the state of the job based on the job ID. You can also call the GetMediaInfo operation to query the information about the generated media asset based on the media asset ID.
       *
       * @description Live editing is supported for live streams that are recorded and stored in Object Storage Service (OSS) and ApsaraVideo VOD. If multiple live streams are involved in a single job, only those recorded within the same application are supported for mixed editing. The streams must all be recorded either in OSS or ApsaraVideo VOD.
       *
       * @param request SubmitLiveEditingJobRequest
       * @return SubmitLiveEditingJobResponse
       */
      Models::SubmitLiveEditingJobResponse submitLiveEditingJob(const Models::SubmitLiveEditingJobRequest &request);

      /**
       * @summary Submits a live stream recording job.
       *
       * @description You can call this operation to record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
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
       * @description You can call this operation to record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
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
       * @description *   When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
       * *   When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
       *
       * @param tmpReq SubmitLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLiveTranscodeJobResponse
       */
      Models::SubmitLiveTranscodeJobResponse submitLiveTranscodeJobWithOptions(const Models::SubmitLiveTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a live stream transcoding job.
       *
       * @description *   When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
       * *   When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
       *
       * @param request SubmitLiveTranscodeJobRequest
       * @return SubmitLiveTranscodeJobResponse
       */
      Models::SubmitLiveTranscodeJobResponse submitLiveTranscodeJob(const Models::SubmitLiveTranscodeJobRequest &request);

      /**
       * @summary Submits a structural analysis job for a media asset. For example, you can submit a job to analyze the speaker, translate the video, and obtain the paragraph summary.
       *
       * @param request SubmitMediaAiAnalysisJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaAiAnalysisJobResponse
       */
      Models::SubmitMediaAiAnalysisJobResponse submitMediaAiAnalysisJobWithOptions(const Models::SubmitMediaAiAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a structural analysis job for a media asset. For example, you can submit a job to analyze the speaker, translate the video, and obtain the paragraph summary.
       *
       * @param request SubmitMediaAiAnalysisJobRequest
       * @return SubmitMediaAiAnalysisJobResponse
       */
      Models::SubmitMediaAiAnalysisJobResponse submitMediaAiAnalysisJob(const Models::SubmitMediaAiAnalysisJobRequest &request);

      /**
       * @summary Submits a content moderation job.
       *
       * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue to be scheduled and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/444847.html) operation or configure an asynchronous notification to obtain the job results.
       *
       * @param tmpReq SubmitMediaCensorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaCensorJobResponse
       */
      Models::SubmitMediaCensorJobResponse submitMediaCensorJobWithOptions(const Models::SubmitMediaCensorJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a content moderation job.
       *
       * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue to be scheduled and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/444847.html) operation or configure an asynchronous notification to obtain the job results.
       *
       * @param request SubmitMediaCensorJobRequest
       * @return SubmitMediaCensorJobResponse
       */
      Models::SubmitMediaCensorJobResponse submitMediaCensorJob(const Models::SubmitMediaCensorJobRequest &request);

      /**
       * @summary Submits a transcoding task.
       *
       * @param request SubmitMediaConvertJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaConvertJobResponse
       */
      Models::SubmitMediaConvertJobResponse submitMediaConvertJobWithOptions(const Models::SubmitMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a transcoding task.
       *
       * @param request SubmitMediaConvertJobRequest
       * @return SubmitMediaConvertJobResponse
       */
      Models::SubmitMediaConvertJobResponse submitMediaConvertJob(const Models::SubmitMediaConvertJobRequest &request);

      /**
       * @summary Submits a media information analysis job in asynchronous mode.
       *
       * @description You can call this operation to analyze an input media file by using a callback mechanism or initiating subsequent queries. This operation is suitable for scenarios in which real-time performance is less critical and high concurrency is expected.
       *
       * @param tmpReq SubmitMediaInfoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaInfoJobResponse
       */
      Models::SubmitMediaInfoJobResponse submitMediaInfoJobWithOptions(const Models::SubmitMediaInfoJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media information analysis job in asynchronous mode.
       *
       * @description You can call this operation to analyze an input media file by using a callback mechanism or initiating subsequent queries. This operation is suitable for scenarios in which real-time performance is less critical and high concurrency is expected.
       *
       * @param request SubmitMediaInfoJobRequest
       * @return SubmitMediaInfoJobResponse
       */
      Models::SubmitMediaInfoJobResponse submitMediaInfoJob(const Models::SubmitMediaInfoJobRequest &request);

      /**
       * @summary Submits a media editing and production job. If you need to perform any form of post-production such as editing and production on video or audio materials, you can call this operation to automate the process.
       *
       * @description *   This operation returns only the submission result of a media editing and production job. When the submission result is returned, the job may still be in progress. After a media editing and production job is submitted, the job is queued in the background for asynchronous processing.
       * *   The materials referenced in the timeline of an online editing project can be media assets in the media asset library or Object Storage Service (OSS) objects. External URLs or Alibaba Cloud Content Delivery Network (CDN) URLs are not supported. To use an OSS object as a material, you must set MediaUrl to an OSS URL, such as https://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
       * *   After the production is complete, the output file is automatically registered as a media asset. The media asset first needs to be analyzed. After the media asset is analyzed, you can query the duration and resolution information based on the media asset ID.
       * ## [](#)Limits
       * *   The throttling threshold of this operation is 30 queries per second (QPS).
       *     **
       *     **Note** If the threshold is exceeded, a "Throttling.User" error is returned when you submit an editing job. For more information about how to resolve this issue, see the [FAQ](https://help.aliyun.com/document_detail/453484.html).
       * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
       * *   The total size of material files cannot exceed 1 TB.
       * *   The OSS buckets in which the materials reside and where the output media assets are stored must be in the same region as the region in which Intelligent Media Services (IMS) is activated.
       * *   An output video must meet the following requirements:
       *     *   Both the width and height must be at least 128 pixels.
       *     *   Both the width and height cannot exceed 4,096 pixels.
       *     *   The shorter side of the video cannot exceed 2,160 pixels.
       *
       * @param request SubmitMediaProducingJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaProducingJobResponse
       */
      Models::SubmitMediaProducingJobResponse submitMediaProducingJobWithOptions(const Models::SubmitMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media editing and production job. If you need to perform any form of post-production such as editing and production on video or audio materials, you can call this operation to automate the process.
       *
       * @description *   This operation returns only the submission result of a media editing and production job. When the submission result is returned, the job may still be in progress. After a media editing and production job is submitted, the job is queued in the background for asynchronous processing.
       * *   The materials referenced in the timeline of an online editing project can be media assets in the media asset library or Object Storage Service (OSS) objects. External URLs or Alibaba Cloud Content Delivery Network (CDN) URLs are not supported. To use an OSS object as a material, you must set MediaUrl to an OSS URL, such as https://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
       * *   After the production is complete, the output file is automatically registered as a media asset. The media asset first needs to be analyzed. After the media asset is analyzed, you can query the duration and resolution information based on the media asset ID.
       * ## [](#)Limits
       * *   The throttling threshold of this operation is 30 queries per second (QPS).
       *     **
       *     **Note** If the threshold is exceeded, a "Throttling.User" error is returned when you submit an editing job. For more information about how to resolve this issue, see the [FAQ](https://help.aliyun.com/document_detail/453484.html).
       * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
       * *   The total size of material files cannot exceed 1 TB.
       * *   The OSS buckets in which the materials reside and where the output media assets are stored must be in the same region as the region in which Intelligent Media Services (IMS) is activated.
       * *   An output video must meet the following requirements:
       *     *   Both the width and height must be at least 128 pixels.
       *     *   Both the width and height cannot exceed 4,096 pixels.
       *     *   The shorter side of the video cannot exceed 2,160 pixels.
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
       * @summary 提交工程导出任务
       *
       * @param request SubmitProjectExportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitProjectExportJobResponse
       */
      Models::SubmitProjectExportJobResponse submitProjectExportJobWithOptions(const Models::SubmitProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交工程导出任务
       *
       * @param request SubmitProjectExportJobRequest
       * @return SubmitProjectExportJobResponse
       */
      Models::SubmitProjectExportJobResponse submitProjectExportJob(const Models::SubmitProjectExportJobRequest &request);

      /**
       * @summary Submits a task to automatically recognize the highlight segments in the video input and compile them into a dramatic and engaging clip.
       *
       * @param request SubmitScreenMediaHighlightsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitScreenMediaHighlightsJobResponse
       */
      Models::SubmitScreenMediaHighlightsJobResponse submitScreenMediaHighlightsJobWithOptions(const Models::SubmitScreenMediaHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a task to automatically recognize the highlight segments in the video input and compile them into a dramatic and engaging clip.
       *
       * @param request SubmitScreenMediaHighlightsJobRequest
       * @return SubmitScreenMediaHighlightsJobResponse
       */
      Models::SubmitScreenMediaHighlightsJobResponse submitScreenMediaHighlightsJob(const Models::SubmitScreenMediaHighlightsJobRequest &request);

      /**
       * @summary 提交拆条任务
       *
       * @param request SubmitSegmentationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSegmentationJobResponse
       */
      Models::SubmitSegmentationJobResponse submitSegmentationJobWithOptions(const Models::SubmitSegmentationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交拆条任务
       *
       * @param request SubmitSegmentationJobRequest
       * @return SubmitSegmentationJobResponse
       */
      Models::SubmitSegmentationJobResponse submitSegmentationJob(const Models::SubmitSegmentationJobRequest &request);

      /**
       * @summary Submits a smart tagging job.
       *
       * @description Before you call this operation to submit a smart tagging job, you must add a smart tagging template and specify the analysis types that you want to use in the template. For more information, see CreateCustomTemplate. You can use the smart tagging feature only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions. By default, an ApsaraVideo Media Processing (MPS) queue can process a maximum of two concurrent smart tagging jobs. If you need to process more concurrent smart tagging jobs, submit a ticket to contact Alibaba Cloud Technical Support for evaluation and configuration.
       *
       * @param tmpReq SubmitSmarttagJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmarttagJobResponse
       */
      Models::SubmitSmarttagJobResponse submitSmarttagJobWithOptions(const Models::SubmitSmarttagJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a smart tagging job.
       *
       * @description Before you call this operation to submit a smart tagging job, you must add a smart tagging template and specify the analysis types that you want to use in the template. For more information, see CreateCustomTemplate. You can use the smart tagging feature only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions. By default, an ApsaraVideo Media Processing (MPS) queue can process a maximum of two concurrent smart tagging jobs. If you need to process more concurrent smart tagging jobs, submit a ticket to contact Alibaba Cloud Technical Support for evaluation and configuration.
       *
       * @param request SubmitSmarttagJobRequest
       * @return SubmitSmarttagJobResponse
       */
      Models::SubmitSmarttagJobResponse submitSmarttagJob(const Models::SubmitSmarttagJobRequest &request);

      /**
       * @summary Submits a snapshot job.
       *
       * @param tmpReq SubmitSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJobWithOptions(const Models::SubmitSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a snapshot job.
       *
       * @param request SubmitSnapshotJobRequest
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJob(const Models::SubmitSnapshotJobRequest &request);

      /**
       * @summary Submits a sports highlights job to generate a highlights video of an event based on event materials that contain commentary.
       *
       * @param request SubmitSportsHighlightsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSportsHighlightsJobResponse
       */
      Models::SubmitSportsHighlightsJobResponse submitSportsHighlightsJobWithOptions(const Models::SubmitSportsHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a sports highlights job to generate a highlights video of an event based on event materials that contain commentary.
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
       * @description You can call this operation to analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
       *
       * @param tmpReq SubmitSyncMediaInfoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSyncMediaInfoJobResponse
       */
      Models::SubmitSyncMediaInfoJobResponse submitSyncMediaInfoJobWithOptions(const Models::SubmitSyncMediaInfoJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media file in synchronous mode for media information analysis.
       *
       * @description You can call this operation to analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
       *
       * @param request SubmitSyncMediaInfoJobRequest
       * @return SubmitSyncMediaInfoJobResponse
       */
      Models::SubmitSyncMediaInfoJobResponse submitSyncMediaInfoJob(const Models::SubmitSyncMediaInfoJobRequest &request);

      /**
       * @summary Submits a text generation job to generate marketing copies based on keywords and the requirements for the word count and number of output copies. The word count of the output copies may differ from the specified word count. After the job is submitted, you can call the GetSmartHandleJob operation to obtain the job state and result based on the job ID.
       *
       * @param request SubmitTextGenerateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTextGenerateJobResponse
       */
      Models::SubmitTextGenerateJobResponse submitTextGenerateJobWithOptions(const Models::SubmitTextGenerateJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a text generation job to generate marketing copies based on keywords and the requirements for the word count and number of output copies. The word count of the output copies may differ from the specified word count. After the job is submitted, you can call the GetSmartHandleJob operation to obtain the job state and result based on the job ID.
       *
       * @param request SubmitTextGenerateJobRequest
       * @return SubmitTextGenerateJobResponse
       */
      Models::SubmitTextGenerateJobResponse submitTextGenerateJob(const Models::SubmitTextGenerateJobRequest &request);

      /**
       * @summary 提交视频溯源水印ab流任务
       *
       * @param tmpReq SubmitTraceAbJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceAbJobResponse
       */
      Models::SubmitTraceAbJobResponse submitTraceAbJobWithOptions(const Models::SubmitTraceAbJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频溯源水印ab流任务
       *
       * @param request SubmitTraceAbJobRequest
       * @return SubmitTraceAbJobResponse
       */
      Models::SubmitTraceAbJobResponse submitTraceAbJob(const Models::SubmitTraceAbJobRequest &request);

      /**
       * @summary 提交溯源水印提取任务
       *
       * @param tmpReq SubmitTraceExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceExtractJobResponse
       */
      Models::SubmitTraceExtractJobResponse submitTraceExtractJobWithOptions(const Models::SubmitTraceExtractJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交溯源水印提取任务
       *
       * @param request SubmitTraceExtractJobRequest
       * @return SubmitTraceExtractJobResponse
       */
      Models::SubmitTraceExtractJobResponse submitTraceExtractJob(const Models::SubmitTraceExtractJobRequest &request);

      /**
       * @summary 提交视频溯源水印m3u8文件任务
       *
       * @param tmpReq SubmitTraceM3u8JobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceM3u8JobResponse
       */
      Models::SubmitTraceM3u8JobResponse submitTraceM3u8JobWithOptions(const Models::SubmitTraceM3u8JobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频溯源水印m3u8文件任务
       *
       * @param request SubmitTraceM3u8JobRequest
       * @return SubmitTraceM3u8JobResponse
       */
      Models::SubmitTraceM3u8JobResponse submitTraceM3u8Job(const Models::SubmitTraceM3u8JobRequest &request);

      /**
       * @summary Submits a transcoding job.
       *
       * @param tmpReq SubmitTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTranscodeJobResponse
       */
      Models::SubmitTranscodeJobResponse submitTranscodeJobWithOptions(const Models::SubmitTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a transcoding job.
       *
       * @param request SubmitTranscodeJobRequest
       * @return SubmitTranscodeJobResponse
       */
      Models::SubmitTranscodeJobResponse submitTranscodeJob(const Models::SubmitTranscodeJobRequest &request);

      /**
       * @summary 提交视频理解任务
       *
       * @param tmpReq SubmitVideoCognitionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoCognitionJobResponse
       */
      Models::SubmitVideoCognitionJobResponse submitVideoCognitionJobWithOptions(const Models::SubmitVideoCognitionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频理解任务
       *
       * @param request SubmitVideoCognitionJobRequest
       * @return SubmitVideoCognitionJobResponse
       */
      Models::SubmitVideoCognitionJobResponse submitVideoCognitionJob(const Models::SubmitVideoCognitionJobRequest &request);

      /**
       * @summary Submits a video translation job. You can call this operation to translate subtitles in a video and audio to a specific language. Lip-sync adaptation will be supported in the future.
       *
       * @description After you call this operation to submit a video translation job, the system returns a job ID. You can call the GetSmartHandleJob operation based on the job ID to obtain the status and result information of the job.
       *
       * @param request SubmitVideoTranslationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJobWithOptions(const Models::SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video translation job. You can call this operation to translate subtitles in a video and audio to a specific language. Lip-sync adaptation will be supported in the future.
       *
       * @description After you call this operation to submit a video translation job, the system returns a job ID. You can call the GetSmartHandleJob operation based on the job ID to obtain the status and result information of the job.
       *
       * @param request SubmitVideoTranslationJobRequest
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJob(const Models::SubmitVideoTranslationJobRequest &request);

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
       * @summary Updates the configurations of an AI agent.
       *
       * @description ## [](#)Request description
       * You can call this operation to update the configurations of an AI agent, such as the tone, by specifying the agent ID and configurations.
       *
       * @param tmpReq UpdateAIAgentInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAIAgentInstanceResponse
       */
      Models::UpdateAIAgentInstanceResponse updateAIAgentInstanceWithOptions(const Models::UpdateAIAgentInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of an AI agent.
       *
       * @description ## [](#)Request description
       * You can call this operation to update the configurations of an AI agent, such as the tone, by specifying the agent ID and configurations.
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
       * @summary Modifies an online editing project. You can call this operation to modify the configurations such as the title, timeline, and thumbnail of an online editing project.
       *
       * @param request UpdateEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProjectWithOptions(const Models::UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an online editing project. You can call this operation to modify the configurations such as the title, timeline, and thumbnail of an online editing project.
       *
       * @param request UpdateEditingProjectRequest
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProject(const Models::UpdateEditingProjectRequest &request);

      /**
       * @summary 更新热词库
       *
       * @param tmpReq UpdateHotwordLibraryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHotwordLibraryResponse
       */
      Models::UpdateHotwordLibraryResponse updateHotwordLibraryWithOptions(const Models::UpdateHotwordLibraryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新热词库
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
       * @summary Updates the origin endpoint settings including the protocol, time shifting, and access control settings.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to modify the origin protocol, set the number of days that time-shifted content is available, define playlist names, and configure the IP address blacklist and whitelist, allowing for fine-grained control over streaming media distribution. Some parameters are required. You must configure IpWhitelist, AuthorizationCode, or both.
       *
       * @param tmpReq UpdateLivePackageOriginEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageOriginEndpointResponse
       */
      Models::UpdateLivePackageOriginEndpointResponse updateLivePackageOriginEndpointWithOptions(const Models::UpdateLivePackageOriginEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the origin endpoint settings including the protocol, time shifting, and access control settings.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to modify the origin protocol, set the number of days that time-shifted content is available, define playlist names, and configure the IP address blacklist and whitelist, allowing for fine-grained control over streaming media distribution. Some parameters are required. You must configure IpWhitelist, AuthorizationCode, or both.
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
       * @description *   For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
       * *   For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
       *
       * @param tmpReq UpdateLiveTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveTranscodeJobResponse
       */
      Models::UpdateLiveTranscodeJobResponse updateLiveTranscodeJobWithOptions(const Models::UpdateLiveTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a live stream transcoding job.
       *
       * @description *   For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
       * *   For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
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
       * @summary Modifies the source of a MediaConnect flow.
       *
       * @description *   You can modify the source only when the flow is in the offline state.
       * *   The source type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaConnectFlowInputResponse
       */
      Models::UpdateMediaConnectFlowInputResponse updateMediaConnectFlowInputWithOptions(const Models::UpdateMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the source of a MediaConnect flow.
       *
       * @description *   You can modify the source only when the flow is in the offline state.
       * *   The source type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowInputRequest
       * @return UpdateMediaConnectFlowInputResponse
       */
      Models::UpdateMediaConnectFlowInputResponse updateMediaConnectFlowInput(const Models::UpdateMediaConnectFlowInputRequest &request);

      /**
       * @summary Modifies an output of a MediaConnect flow.
       *
       * @description *   You can modify an output only when the flow is in the offline state.
       * *   The output type cannot be modified.
       *
       * @param request UpdateMediaConnectFlowOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaConnectFlowOutputResponse
       */
      Models::UpdateMediaConnectFlowOutputResponse updateMediaConnectFlowOutputWithOptions(const Models::UpdateMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an output of a MediaConnect flow.
       *
       * @description *   You can modify an output only when the flow is in the offline state.
       * *   The output type cannot be modified.
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
       * @description *   You can modify a MediaLive channel only when it is not running.
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
       * @description *   You can modify a MediaLive channel only when it is not running.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateMediaLiveChannelRequest
       * @return UpdateMediaLiveChannelResponse
       */
      Models::UpdateMediaLiveChannelResponse updateMediaLiveChannel(const Models::UpdateMediaLiveChannelRequest &request);

      /**
       * @summary Modifies an input of MediaLive.
       *
       * @description *   You can modify an input only when it is not associated with a MediaLive channel.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq UpdateMediaLiveInputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaLiveInputResponse
       */
      Models::UpdateMediaLiveInputResponse updateMediaLiveInputWithOptions(const Models::UpdateMediaLiveInputRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an input of MediaLive.
       *
       * @description *   You can modify an input only when it is not associated with a MediaLive channel.
       * ## QPS limit
       * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateMediaLiveInputRequest
       * @return UpdateMediaLiveInputResponse
       */
      Models::UpdateMediaLiveInputResponse updateMediaLiveInput(const Models::UpdateMediaLiveInputRequest &request);

      /**
       * @summary Modifies a security group created in MediaLive.
       *
       * @description *   You can modify a security group only when it is not associated with a MediaLive input.
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
       * @description *   You can modify a security group only when it is not associated with a MediaLive input.
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
       * @summary Updates the media asset information in a search library.
       *
       * @param request UpdateMediaToSearchLibRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaToSearchLibResponse
       */
      Models::UpdateMediaToSearchLibResponse updateMediaToSearchLibWithOptions(const Models::UpdateMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the media asset information in a search library.
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
       * @summary 修改实例的配置
       *
       * @param tmpReq UpdateRtcRobotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtcRobotInstanceResponse
       */
      Models::UpdateRtcRobotInstanceResponse updateRtcRobotInstanceWithOptions(const Models::UpdateRtcRobotInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的配置
       *
       * @param request UpdateRtcRobotInstanceRequest
       * @return UpdateRtcRobotInstanceResponse
       */
      Models::UpdateRtcRobotInstanceResponse updateRtcRobotInstance(const Models::UpdateRtcRobotInstanceRequest &request);

      /**
       * @summary Modifies a source in MediaWeaver.
       *
       * @param request UpdateSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSourceResponse
       */
      Models::UpdateSourceResponse updateSourceWithOptions(const Models::UpdateSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a source in MediaWeaver.
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
       * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request UpdateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const Models::UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an online editing template. You can modify the template title and template configurations.
       *
       * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
       * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const Models::UpdateTemplateRequest &request);

      /**
       * @summary Uploads an audio or video file based on the URL of the source file. You can upload multiple media files at a time.
       *
       * @description *   If a callback is configured, you will receive an UploadByURLComplete event notification after the file is uploaded. You can query the upload status by calling the GetURLUploadInfos operation.
       * *   After a request is submitted, the upload job is queued as an asynchronous job in the cloud. You can query the status of the upload job based on information such as the URL and media asset ID that are returned in the event notification.
       * *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded by using URLs that are accessible over the Internet.
       * *   You can call this operation to upload media files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       * *   You can call this operation to upload only audio and video files.
       *
       * @param request UploadMediaByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURLWithOptions(const Models::UploadMediaByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an audio or video file based on the URL of the source file. You can upload multiple media files at a time.
       *
       * @description *   If a callback is configured, you will receive an UploadByURLComplete event notification after the file is uploaded. You can query the upload status by calling the GetURLUploadInfos operation.
       * *   After a request is submitted, the upload job is queued as an asynchronous job in the cloud. You can query the status of the upload job based on information such as the URL and media asset ID that are returned in the event notification.
       * *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded by using URLs that are accessible over the Internet.
       * *   You can call this operation to upload media files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       * *   You can call this operation to upload only audio and video files.
       *
       * @param request UploadMediaByURLRequest
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURL(const Models::UploadMediaByURLRequest &request);

      /**
       * @summary Uploads a media stream file based on the URL of the source file.
       *
       * @description *   You can call this operation to pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
       * *   You can call this operation to upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request UploadStreamByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURLWithOptions(const Models::UploadStreamByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a media stream file based on the URL of the source file.
       *
       * @description *   You can call this operation to pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
       * *   You can call this operation to upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
       * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
       *
       * @param request UploadStreamByURLRequest
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURL(const Models::UploadStreamByURLRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
