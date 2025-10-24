// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MTS20140618_HPP_
#define ALIBABACLOUD_MTS20140618_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Mts20140618Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Mts20140618.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates a media workflow.
       *
       * @description You can call this operation to activate a media workflow that has been deactivated. After you activate a media workflow, you cannot modify the workflow information, such as the name, topology, or trigger mode. A media workflow is activated by default after it is created.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ActivateMediaWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateMediaWorkflowResponse
       */
      Models::ActivateMediaWorkflowResponse activateMediaWorkflowWithOptions(const Models::ActivateMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a media workflow.
       *
       * @description You can call this operation to activate a media workflow that has been deactivated. After you activate a media workflow, you cannot modify the workflow information, such as the name, topology, or trigger mode. A media workflow is activated by default after it is created.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ActivateMediaWorkflowRequest
       * @return ActivateMediaWorkflowResponse
       */
      Models::ActivateMediaWorkflowResponse activateMediaWorkflow(const Models::ActivateMediaWorkflowRequest &request);

      /**
       * @summary Adds a media file.
       *
       * @description *   You can call this operation to process videos that are uploaded to Object Storage Service (OSS) but not processed. This way, you do not need to upload the videos to OSS again. If you have configured media workflows, OSS automatically notifies ApsaraVideo Media Processing (MPS) when a media file is uploaded to OSS. MPS automatically finds the corresponding workflow in the Active state based on the specified OSS bucket and object. Therefore, in most cases, you do not need to manually call the AddMedia operation to process the media file.
       * *   Media information is automatically obtained only when the specified media workflow is in the Active state. If no media workflow is specified or the specified media workflow is not in the Active state, media information is not obtained.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaResponse
       */
      Models::AddMediaResponse addMediaWithOptions(const Models::AddMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a media file.
       *
       * @description *   You can call this operation to process videos that are uploaded to Object Storage Service (OSS) but not processed. This way, you do not need to upload the videos to OSS again. If you have configured media workflows, OSS automatically notifies ApsaraVideo Media Processing (MPS) when a media file is uploaded to OSS. MPS automatically finds the corresponding workflow in the Active state based on the specified OSS bucket and object. Therefore, in most cases, you do not need to manually call the AddMedia operation to process the media file.
       * *   Media information is automatically obtained only when the specified media workflow is in the Active state. If no media workflow is specified or the specified media workflow is not in the Active state, media information is not obtained.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddMediaRequest
       * @return AddMediaResponse
       */
      Models::AddMediaResponse addMedia(const Models::AddMediaRequest &request);

      /**
       * @summary Adds a tag to a media file.
       *
       * @description You can call this operation to add only one tag. To add multiple tags at a time, you can call the [UpdateMedia](https://help.aliyun.com/document_detail/44464.html) operation.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddMediaTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaTagResponse
       */
      Models::AddMediaTagResponse addMediaTagWithOptions(const Models::AddMediaTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a tag to a media file.
       *
       * @description You can call this operation to add only one tag. To add multiple tags at a time, you can call the [UpdateMedia](https://help.aliyun.com/document_detail/44464.html) operation.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddMediaTagRequest
       * @return AddMediaTagResponse
       */
      Models::AddMediaTagResponse addMediaTag(const Models::AddMediaTagRequest &request);

      /**
       * @summary Creates a media workflow.
       *
       * @description *   You can call this operation to define the topology, activities, and dependencies of a media workflow. The topology is represented by a directed acyclic graph (DAG) in the console. For more information, see [Workflow activities](https://help.aliyun.com/document_detail/68494.html). You can view and run the workflows that are created by calling this operation in the ApsaraVideo Media Processing (MPS) console.
       * *   MPS media workflows can be automatically triggered only by using the prefix of the file path. Automatic triggering by using the suffix is not supported. For more information about the trigger rules, see [Workflow triggering rules for files](https://help.aliyun.com/document_detail/68574.html).
       * ### [](#qps)QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddMediaWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMediaWorkflowResponse
       */
      Models::AddMediaWorkflowResponse addMediaWorkflowWithOptions(const Models::AddMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a media workflow.
       *
       * @description *   You can call this operation to define the topology, activities, and dependencies of a media workflow. The topology is represented by a directed acyclic graph (DAG) in the console. For more information, see [Workflow activities](https://help.aliyun.com/document_detail/68494.html). You can view and run the workflows that are created by calling this operation in the ApsaraVideo Media Processing (MPS) console.
       * *   MPS media workflows can be automatically triggered only by using the prefix of the file path. Automatic triggering by using the suffix is not supported. For more information about the trigger rules, see [Workflow triggering rules for files](https://help.aliyun.com/document_detail/68574.html).
       * ### [](#qps)QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddMediaWorkflowRequest
       * @return AddMediaWorkflowResponse
       */
      Models::AddMediaWorkflowResponse addMediaWorkflow(const Models::AddMediaWorkflowRequest &request);

      /**
       * @summary Adds an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request AddPipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPipelineResponse
       */
      Models::AddPipelineResponse addPipelineWithOptions(const Models::AddPipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an ApsaraVideo Media Processing (MPS) queue.
       *
       * @param request AddPipelineRequest
       * @return AddPipelineResponse
       */
      Models::AddPipelineResponse addPipeline(const Models::AddPipelineRequest &request);

      /**
       * @summary 添加labelVersion、knowledgeConfig配置
       *
       * @param request AddSmarttagTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSmarttagTemplateResponse
       */
      Models::AddSmarttagTemplateResponse addSmarttagTemplateWithOptions(const Models::AddSmarttagTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加labelVersion、knowledgeConfig配置
       *
       * @param request AddSmarttagTemplateRequest
       * @return AddSmarttagTemplateResponse
       */
      Models::AddSmarttagTemplateResponse addSmarttagTemplate(const Models::AddSmarttagTemplateRequest &request);

      /**
       * @summary Creates a custom transcoding template. You need to configure the information such as the container format, video stream settings, and audio stream settings.
       *
       * @description When you call this operation, you need to set transcoding parameters such as those related to the container format, video stream, and audio stream. If you do not specify some parameters, streams that are generated by using the template do not contain the information specified by those parameters.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTemplateResponse
       */
      Models::AddTemplateResponse addTemplateWithOptions(const Models::AddTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom transcoding template. You need to configure the information such as the container format, video stream settings, and audio stream settings.
       *
       * @description When you call this operation, you need to set transcoding parameters such as those related to the container format, video stream, and audio stream. If you do not specify some parameters, streams that are generated by using the template do not contain the information specified by those parameters.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddTemplateRequest
       * @return AddTemplateResponse
       */
      Models::AddTemplateResponse addTemplate(const Models::AddTemplateRequest &request);

      /**
       * @summary Creates a watermark template.
       *
       * @description After you create a watermark template by calling this operation, you can specify the watermark template and watermark asset when you [submit a transcoding job](https://help.aliyun.com/document_detail/29226.html). This allows you to add watermark information to the output video.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddWaterMarkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWaterMarkTemplateResponse
       */
      Models::AddWaterMarkTemplateResponse addWaterMarkTemplateWithOptions(const Models::AddWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a watermark template.
       *
       * @description After you create a watermark template by calling this operation, you can specify the watermark template and watermark asset when you [submit a transcoding job](https://help.aliyun.com/document_detail/29226.html). This allows you to add watermark information to the output video.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request AddWaterMarkTemplateRequest
       * @return AddWaterMarkTemplateResponse
       */
      Models::AddWaterMarkTemplateResponse addWaterMarkTemplate(const Models::AddWaterMarkTemplateRequest &request);

      /**
       * @summary Binds an input media bucket.
       *
       * @description Before you call this operation to bind an input media bucket, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request BindInputBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindInputBucketResponse
       */
      Models::BindInputBucketResponse bindInputBucketWithOptions(const Models::BindInputBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an input media bucket.
       *
       * @description Before you call this operation to bind an input media bucket, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request BindInputBucketRequest
       * @return BindInputBucketResponse
       */
      Models::BindInputBucketResponse bindInputBucket(const Models::BindInputBucketRequest &request);

      /**
       * @summary Binds an output media bucket to the media library.
       *
       * @description Before you call this operation to bind an output media bucket to the media library, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request BindOutputBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindOutputBucketResponse
       */
      Models::BindOutputBucketResponse bindOutputBucketWithOptions(const Models::BindOutputBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an output media bucket to the media library.
       *
       * @description Before you call this operation to bind an output media bucket to the media library, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request BindOutputBucketRequest
       * @return BindOutputBucketResponse
       */
      Models::BindOutputBucketResponse bindOutputBucket(const Models::BindOutputBucketRequest &request);

      /**
       * @summary Cancels a transcoding job.
       *
       * @description *   You can cancel a transcoding job only if the job is in the Submitted state.
       * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request CancelJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelJobResponse
       */
      Models::CancelJobResponse cancelJobWithOptions(const Models::CancelJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a transcoding job.
       *
       * @description *   You can cancel a transcoding job only if the job is in the Submitted state.
       * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request CancelJobRequest
       * @return CancelJobResponse
       */
      Models::CancelJobResponse cancelJob(const Models::CancelJobRequest &request);

      /**
       * @param request CreateCustomEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomEntityResponse
       */
      Models::CreateCustomEntityResponse createCustomEntityWithOptions(const Models::CreateCustomEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateCustomEntityRequest
       * @return CreateCustomEntityResponse
       */
      Models::CreateCustomEntityResponse createCustomEntity(const Models::CreateCustomEntityRequest &request);

      /**
       * @param request CreateCustomGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomGroupResponse
       */
      Models::CreateCustomGroupResponse createCustomGroupWithOptions(const Models::CreateCustomGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateCustomGroupRequest
       * @return CreateCustomGroupResponse
       */
      Models::CreateCustomGroupResponse createCustomGroup(const Models::CreateCustomGroupRequest &request);

      /**
       * @summary Submits a job of creating a media fingerprint library.
       *
       * @description *   You can call this operation to submit a job to create a video or text fingerprint library. You can use a text fingerprint library to store fingerprints for text.
       * *   You can submit a job of creating a text fingerprint library only in the China (Shanghai) region.
       * *   By default, you can submit up to 10 jobs of creating a video fingerprint library to an ApsaraVideo Media Processing (MPS) queue at a time. If you submit more than 10 jobs at a time, the call may fail.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request CreateFpShotDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFpShotDBResponse
       */
      Models::CreateFpShotDBResponse createFpShotDBWithOptions(const Models::CreateFpShotDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job of creating a media fingerprint library.
       *
       * @description *   You can call this operation to submit a job to create a video or text fingerprint library. You can use a text fingerprint library to store fingerprints for text.
       * *   You can submit a job of creating a text fingerprint library only in the China (Shanghai) region.
       * *   By default, you can submit up to 10 jobs of creating a video fingerprint library to an ApsaraVideo Media Processing (MPS) queue at a time. If you submit more than 10 jobs at a time, the call may fail.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request CreateFpShotDBRequest
       * @return CreateFpShotDBResponse
       */
      Models::CreateFpShotDBResponse createFpShotDB(const Models::CreateFpShotDBRequest &request);

      /**
       * @summary Disables a media workflow.
       *
       * @description The time when the media workflow was created.
       *
       * @param request DeactivateMediaWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeactivateMediaWorkflowResponse
       */
      Models::DeactivateMediaWorkflowResponse deactivateMediaWorkflowWithOptions(const Models::DeactivateMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a media workflow.
       *
       * @description The time when the media workflow was created.
       *
       * @param request DeactivateMediaWorkflowRequest
       * @return DeactivateMediaWorkflowResponse
       */
      Models::DeactivateMediaWorkflowResponse deactivateMediaWorkflow(const Models::DeactivateMediaWorkflowRequest &request);

      /**
       * @summary Deletes a custom entity from a custom library.
       *
       * @param request DeleteCustomEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomEntityResponse
       */
      Models::DeleteCustomEntityResponse deleteCustomEntityWithOptions(const Models::DeleteCustomEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom entity from a custom library.
       *
       * @param request DeleteCustomEntityRequest
       * @return DeleteCustomEntityResponse
       */
      Models::DeleteCustomEntityResponse deleteCustomEntity(const Models::DeleteCustomEntityRequest &request);

      /**
       * @summary Delete a custom image library.
       *
       * @description You can call this operation only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
       * ### QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteCustomGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomGroupResponse
       */
      Models::DeleteCustomGroupResponse deleteCustomGroupWithOptions(const Models::DeleteCustomGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a custom image library.
       *
       * @description You can call this operation only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
       * ### QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteCustomGroupRequest
       * @return DeleteCustomGroupResponse
       */
      Models::DeleteCustomGroupResponse deleteCustomGroup(const Models::DeleteCustomGroupRequest &request);

      /**
       * @param request DeleteCustomViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomViewResponse
       */
      Models::DeleteCustomViewResponse deleteCustomViewWithOptions(const Models::DeleteCustomViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCustomViewRequest
       * @return DeleteCustomViewResponse
       */
      Models::DeleteCustomViewResponse deleteCustomView(const Models::DeleteCustomViewRequest &request);

      /**
       * @summary Deletes media files from ApsaraVideo Media Processing (MPS).
       *
       * @description This operation allows you to logically delete a media file. The media file can no longer be processed, but the corresponding objects in the input and output Object Storage Service (OSS) buckets are retained.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaResponse
       */
      Models::DeleteMediaResponse deleteMediaWithOptions(const Models::DeleteMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media files from ApsaraVideo Media Processing (MPS).
       *
       * @description This operation allows you to logically delete a media file. The media file can no longer be processed, but the corresponding objects in the input and output Object Storage Service (OSS) buckets are retained.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteMediaRequest
       * @return DeleteMediaResponse
       */
      Models::DeleteMediaResponse deleteMedia(const Models::DeleteMediaRequest &request);

      /**
       * @summary Removes a tag for a media file.
       *
       * @description You can call this operation to remove only one tag at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteMediaTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaTagResponse
       */
      Models::DeleteMediaTagResponse deleteMediaTagWithOptions(const Models::DeleteMediaTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a tag for a media file.
       *
       * @description You can call this operation to remove only one tag at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteMediaTagRequest
       * @return DeleteMediaTagResponse
       */
      Models::DeleteMediaTagResponse deleteMediaTag(const Models::DeleteMediaTagRequest &request);

      /**
       * @summary Deletes a media workflow. This does not affect workflow instances that are running.
       *
       * @description After you delete or disable a workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteMediaWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediaWorkflowResponse
       */
      Models::DeleteMediaWorkflowResponse deleteMediaWorkflowWithOptions(const Models::DeleteMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a media workflow. This does not affect workflow instances that are running.
       *
       * @description After you delete or disable a workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteMediaWorkflowRequest
       * @return DeleteMediaWorkflowResponse
       */
      Models::DeleteMediaWorkflowResponse deleteMediaWorkflow(const Models::DeleteMediaWorkflowRequest &request);

      /**
       * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
       *
       * @description You can call this operation to delete only one MPS queue at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeletePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipelineWithOptions(const Models::DeletePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
       *
       * @description You can call this operation to delete only one MPS queue at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeletePipelineRequest
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipeline(const Models::DeletePipelineRequest &request);

      /**
       * @summary Deletes a template.
       *
       * @description You can call this operation to delete only one template at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteSmarttagTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmarttagTemplateResponse
       */
      Models::DeleteSmarttagTemplateResponse deleteSmarttagTemplateWithOptions(const Models::DeleteSmarttagTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a template.
       *
       * @description You can call this operation to delete only one template at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteSmarttagTemplateRequest
       * @return DeleteSmarttagTemplateResponse
       */
      Models::DeleteSmarttagTemplateResponse deleteSmarttagTemplate(const Models::DeleteSmarttagTemplateRequest &request);

      /**
       * @summary Deletes a custom transcoding template.
       *
       * @description A custom transcoding template cannot be deleted if it is being used by a job that has been submitted.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom transcoding template.
       *
       * @description A custom transcoding template cannot be deleted if it is being used by a job that has been submitted.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @summary Deletes a watermark template.
       *
       * @description A watermark template cannot be deleted if it is being used by a submitted job.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteWaterMarkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWaterMarkTemplateResponse
       */
      Models::DeleteWaterMarkTemplateResponse deleteWaterMarkTemplateWithOptions(const Models::DeleteWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a watermark template.
       *
       * @description A watermark template cannot be deleted if it is being used by a submitted job.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request DeleteWaterMarkTemplateRequest
       * @return DeleteWaterMarkTemplateResponse
       */
      Models::DeleteWaterMarkTemplateResponse deleteWaterMarkTemplate(const Models::DeleteWaterMarkTemplateRequest &request);

      /**
       * @summary Reviews images and text and returns the review results.
       *
       * @description *   The moderation results are synchronously returned after the moderation is complete.
       * *   You can use the image and text moderation feature only in the China (Beijing), China (Shanghai), and Singapore regions.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ImAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImAuditResponse
       */
      Models::ImAuditResponse imAuditWithOptions(const Models::ImAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reviews images and text and returns the review results.
       *
       * @description *   The moderation results are synchronously returned after the moderation is complete.
       * *   You can use the image and text moderation feature only in the China (Beijing), China (Shanghai), and Singapore regions.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ImAuditRequest
       * @return ImAuditResponse
       */
      Models::ImAuditResponse imAudit(const Models::ImAuditRequest &request);

      /**
       * @summary Submits a job of importing text files to a text fingerprint library.
       *
       * @description *   You can call this operation to import multiple text files to a text fingerprint library at a time. The system extracts fingerprints from the text files and saves the fingerprints to the text fingerprint library.
       * *   You can call this operation only in the China (Shanghai) region.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ImportFpShotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportFpShotJobResponse
       */
      Models::ImportFpShotJobResponse importFpShotJobWithOptions(const Models::ImportFpShotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job of importing text files to a text fingerprint library.
       *
       * @description *   You can call this operation to import multiple text files to a text fingerprint library at a time. The system extracts fingerprints from the text files and saves the fingerprints to the text fingerprint library.
       * *   You can call this operation only in the China (Shanghai) region.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ImportFpShotJobRequest
       * @return ImportFpShotJobResponse
       */
      Models::ImportFpShotJobResponse importFpShotJob(const Models::ImportFpShotJobRequest &request);

      /**
       * @summary Queries all media buckets bound to the media library.
       *
       * @description A maximum of 100 media buckets can be returned.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListAllMediaBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllMediaBucketResponse
       */
      Models::ListAllMediaBucketResponse listAllMediaBucketWithOptions(const Models::ListAllMediaBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all media buckets bound to the media library.
       *
       * @description A maximum of 100 media buckets can be returned.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListAllMediaBucketRequest
       * @return ListAllMediaBucketResponse
       */
      Models::ListAllMediaBucketResponse listAllMediaBucket(const Models::ListAllMediaBucketRequest &request);

      /**
       * @summary Queries a list of entities in a custom library.
       *
       * @param request ListCustomEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomEntitiesResponse
       */
      Models::ListCustomEntitiesResponse listCustomEntitiesWithOptions(const Models::ListCustomEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of entities in a custom library.
       *
       * @param request ListCustomEntitiesRequest
       * @return ListCustomEntitiesResponse
       */
      Models::ListCustomEntitiesResponse listCustomEntities(const Models::ListCustomEntitiesRequest &request);

      /**
       * @param request ListCustomGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomGroupsResponse
       */
      Models::ListCustomGroupsResponse listCustomGroupsWithOptions(const Models::ListCustomGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCustomGroupsRequest
       * @return ListCustomGroupsResponse
       */
      Models::ListCustomGroupsResponse listCustomGroups(const Models::ListCustomGroupsRequest &request);

      /**
       * @summary Queries the information about all figures and faces in a specific figure library.
       *
       * @description You can specify the ID of a figure or a figure library to query the corresponding information. If neither the figure ID nor figure library ID is specified, the operation returns the information about all figures and faces in all figure libraries within the current RAM user.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListCustomPersonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomPersonsResponse
       */
      Models::ListCustomPersonsResponse listCustomPersonsWithOptions(const Models::ListCustomPersonsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all figures and faces in a specific figure library.
       *
       * @description You can specify the ID of a figure or a figure library to query the corresponding information. If neither the figure ID nor figure library ID is specified, the operation returns the information about all figures and faces in all figure libraries within the current RAM user.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListCustomPersonsRequest
       * @return ListCustomPersonsResponse
       */
      Models::ListCustomPersonsResponse listCustomPersons(const Models::ListCustomPersonsRequest &request);

      /**
       * @param request ListCustomViewsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomViewsResponse
       */
      Models::ListCustomViewsResponse listCustomViewsWithOptions(const Models::ListCustomViewsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCustomViewsRequest
       * @return ListCustomViewsResponse
       */
      Models::ListCustomViewsResponse listCustomViews(const Models::ListCustomViewsRequest &request);

      /**
       * @summary Queries media fingerprint libraries.
       *
       * @description *   You can call this operation to query the status and information about the media fingerprint libraries based on the specified IDs.
       * *   You can query text fingerprint libraries only in the China (Shanghai) region.
       * *   You can call this operation to query up to 10 media fingerprint libraries.
       * ### QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListFpShotDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFpShotDBResponse
       */
      Models::ListFpShotDBResponse listFpShotDBWithOptions(const Models::ListFpShotDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media fingerprint libraries.
       *
       * @description *   You can call this operation to query the status and information about the media fingerprint libraries based on the specified IDs.
       * *   You can query text fingerprint libraries only in the China (Shanghai) region.
       * *   You can call this operation to query up to 10 media fingerprint libraries.
       * ### QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListFpShotDBRequest
       * @return ListFpShotDBResponse
       */
      Models::ListFpShotDBResponse listFpShotDB(const Models::ListFpShotDBRequest &request);

      /**
       * @summary Queries media files in a media fingerprint library.
       *
       * @description *   You can call this operation to query media files in a specific media fingerprint library based on the library ID. This operation supports paged queries.
       * *   You can call this operation only in the China (Beijing), China (Hangzhou), China (Shanghai), and Singapore regions.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListFpShotFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFpShotFilesResponse
       */
      Models::ListFpShotFilesResponse listFpShotFilesWithOptions(const Models::ListFpShotFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media files in a media fingerprint library.
       *
       * @description *   You can call this operation to query media files in a specific media fingerprint library based on the library ID. This operation supports paged queries.
       * *   You can call this operation only in the China (Beijing), China (Hangzhou), China (Shanghai), and Singapore regions.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListFpShotFilesRequest
       * @return ListFpShotFilesResponse
       */
      Models::ListFpShotFilesResponse listFpShotFiles(const Models::ListFpShotFilesRequest &request);

      /**
       * @summary Queries jobs of importing text files to a text fingerprint library.
       *
       * @description You can call this operation only in the China (Shanghai) region.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListFpShotImportJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFpShotImportJobResponse
       */
      Models::ListFpShotImportJobResponse listFpShotImportJobWithOptions(const Models::ListFpShotImportJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries jobs of importing text files to a text fingerprint library.
       *
       * @description You can call this operation only in the China (Shanghai) region.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListFpShotImportJobRequest
       * @return ListFpShotImportJobResponse
       */
      Models::ListFpShotImportJobResponse listFpShotImportJob(const Models::ListFpShotImportJobRequest &request);

      /**
       * @summary Traverses transcoding jobs
       *
       * @description *   By default, the returned transcoding jobs are sorted by CreationTime in descending order.
       * *   You can call this operation to return transcoding jobs of the last 90 days. The jobs are returned based on the specified time range.
       * *   You can filter query results by configuring request parameters such as job status, creation time interval, and ApsaraVideo Media Processing (MPS) queue for transcoding.
       * *   By default, MPS does not allow you to access data across regions within the same account. Before you call this operation, make sure that the region that you specify is the same as the region of the transcoding jobs to be queried. Otherwise, this operation may fail to be called, or invalid information may be returned.
       * ### [](#qps)QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobResponse
       */
      Models::ListJobResponse listJobWithOptions(const Models::ListJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Traverses transcoding jobs
       *
       * @description *   By default, the returned transcoding jobs are sorted by CreationTime in descending order.
       * *   You can call this operation to return transcoding jobs of the last 90 days. The jobs are returned based on the specified time range.
       * *   You can filter query results by configuring request parameters such as job status, creation time interval, and ApsaraVideo Media Processing (MPS) queue for transcoding.
       * *   By default, MPS does not allow you to access data across regions within the same account. Before you call this operation, make sure that the region that you specify is the same as the region of the transcoding jobs to be queried. Otherwise, this operation may fail to be called, or invalid information may be returned.
       * ### [](#qps)QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListJobRequest
       * @return ListJobResponse
       */
      Models::ListJobResponse listJob(const Models::ListJobRequest &request);

      /**
       * @summary Queries the execution instances of a media workflow.
       *
       * @description This operation returns execution instances only in the recent 90 days.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListMediaWorkflowExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMediaWorkflowExecutionsResponse
       */
      Models::ListMediaWorkflowExecutionsResponse listMediaWorkflowExecutionsWithOptions(const Models::ListMediaWorkflowExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution instances of a media workflow.
       *
       * @description This operation returns execution instances only in the recent 90 days.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request ListMediaWorkflowExecutionsRequest
       * @return ListMediaWorkflowExecutionsResponse
       */
      Models::ListMediaWorkflowExecutionsResponse listMediaWorkflowExecutions(const Models::ListMediaWorkflowExecutionsRequest &request);

      /**
       * @summary Queries the template analysis job and returns a list of available preset templates when the template analysis job is complete.
       *
       * @description The time when the job was created.
       *
       * @param request QueryAnalysisJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAnalysisJobListResponse
       */
      Models::QueryAnalysisJobListResponse queryAnalysisJobListWithOptions(const Models::QueryAnalysisJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the template analysis job and returns a list of available preset templates when the template analysis job is complete.
       *
       * @description The time when the job was created.
       *
       * @param request QueryAnalysisJobListRequest
       * @return QueryAnalysisJobListResponse
       */
      Models::QueryAnalysisJobListResponse queryAnalysisJobList(const Models::QueryAnalysisJobListRequest &request);

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
       * @summary 查询视频版权水印任务
       *
       * @param request QueryCopyrightJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCopyrightJobResponse
       */
      Models::QueryCopyrightJobResponse queryCopyrightJobWithOptions(const Models::QueryCopyrightJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频版权水印任务
       *
       * @param request QueryCopyrightJobRequest
       * @return QueryCopyrightJobResponse
       */
      Models::QueryCopyrightJobResponse queryCopyrightJob(const Models::QueryCopyrightJobRequest &request);

      /**
       * @summary Queries the jobs of clearing or deleting a media fingerprint library.
       *
       * @description You can call this operation to query the specified jobs of clearing or deleting a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryFpDBDeleteJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFpDBDeleteJobListResponse
       */
      Models::QueryFpDBDeleteJobListResponse queryFpDBDeleteJobListWithOptions(const Models::QueryFpDBDeleteJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the jobs of clearing or deleting a media fingerprint library.
       *
       * @description You can call this operation to query the specified jobs of clearing or deleting a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryFpDBDeleteJobListRequest
       * @return QueryFpDBDeleteJobListResponse
       */
      Models::QueryFpDBDeleteJobListResponse queryFpDBDeleteJobList(const Models::QueryFpDBDeleteJobListRequest &request);

      /**
       * @summary Queries the jobs of deleting media files from a media fingerprint library.
       *
       * @description You can call this operation to query the specified jobs of deleting media files from a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
       * ### QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryFpFileDeleteJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFpFileDeleteJobListResponse
       */
      Models::QueryFpFileDeleteJobListResponse queryFpFileDeleteJobListWithOptions(const Models::QueryFpFileDeleteJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the jobs of deleting media files from a media fingerprint library.
       *
       * @description You can call this operation to query the specified jobs of deleting media files from a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
       * ### QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryFpFileDeleteJobListRequest
       * @return QueryFpFileDeleteJobListResponse
       */
      Models::QueryFpFileDeleteJobListResponse queryFpFileDeleteJobList(const Models::QueryFpFileDeleteJobListRequest &request);

      /**
       * @summary Queries media fingerprint analysis jobs. You can call this operation to query video fingerprint analysis jobs and text fingerprint analysis jobs.
       *
       * @description *   After a media fingerprint analysis job is submitted, the media fingerprinting service compares the fingerprints of the job input with those of the media files in the media fingerprint library. You can call this operation to query the job results.
       * *   You can query the results of a text fingerprint analysis job only in the China (Shanghai) region.
       * ### [](#qps)QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryFpShotJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFpShotJobListResponse
       */
      Models::QueryFpShotJobListResponse queryFpShotJobListWithOptions(const Models::QueryFpShotJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media fingerprint analysis jobs. You can call this operation to query video fingerprint analysis jobs and text fingerprint analysis jobs.
       *
       * @description *   After a media fingerprint analysis job is submitted, the media fingerprinting service compares the fingerprints of the job input with those of the media files in the media fingerprint library. You can call this operation to query the job results.
       * *   You can query the results of a text fingerprint analysis job only in the China (Shanghai) region.
       * ### [](#qps)QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryFpShotJobListRequest
       * @return QueryFpShotJobListResponse
       */
      Models::QueryFpShotJobListResponse queryFpShotJobList(const Models::QueryFpShotJobListRequest &request);

      /**
       * @param request QueryIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIProductionJobResponse
       */
      Models::QueryIProductionJobResponse queryIProductionJobWithOptions(const Models::QueryIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryIProductionJobRequest
       * @return QueryIProductionJobResponse
       */
      Models::QueryIProductionJobResponse queryIProductionJob(const Models::QueryIProductionJobRequest &request);

      /**
       * @summary Queries transcoding jobs at a time by job ID.
       *
       * @description *   By default, returned jobs are sorted in descending order by CreationTime.
       * *   You can call this operation to query up to 10 transcoding jobs at a time.
       * *   If you do not set the JobIds parameter, the `InvalidParameter` error code is returned.
       * ## QPS limit
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request QueryJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJobListResponse
       */
      Models::QueryJobListResponse queryJobListWithOptions(const Models::QueryJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding jobs at a time by job ID.
       *
       * @description *   By default, returned jobs are sorted in descending order by CreationTime.
       * *   You can call this operation to query up to 10 transcoding jobs at a time.
       * *   If you do not set the JobIds parameter, the `InvalidParameter` error code is returned.
       * ## QPS limit
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request QueryJobListRequest
       * @return QueryJobListResponse
       */
      Models::QueryJobListResponse queryJobList(const Models::QueryJobListRequest &request);

      /**
       * @summary Queries the information about a content moderation job.
       *
       * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. You can call this operation again to query the remaining moderation results of the video.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
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
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaCensorJobDetailRequest
       * @return QueryMediaCensorJobDetailResponse
       */
      Models::QueryMediaCensorJobDetailResponse queryMediaCensorJobDetail(const Models::QueryMediaCensorJobDetailRequest &request);

      /**
       * @summary Queries content moderation jobs.
       *
       * @description You can call this operation to query only the content moderation jobs within three months.
       * ### QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaCensorJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaCensorJobListResponse
       */
      Models::QueryMediaCensorJobListResponse queryMediaCensorJobListWithOptions(const Models::QueryMediaCensorJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries content moderation jobs.
       *
       * @description You can call this operation to query only the content moderation jobs within three months.
       * ### QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaCensorJobListRequest
       * @return QueryMediaCensorJobListResponse
       */
      Models::QueryMediaCensorJobListResponse queryMediaCensorJobList(const Models::QueryMediaCensorJobListRequest &request);

      /**
       * @summary Queries the results of media information analysis jobs.
       *
       * @description *   In asynchronous mode, the media information can be retrieved only after the Message Service (MNS) callback of **submitting a media information job** is returned. If you have not retrieved the media information for a long period, the job may have failed.
       * *   You can call this operation to query up to 10 media information analysis jobs at a time.
       * *   By default, returned jobs are sorted in descending order by CreationTime.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaInfoJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaInfoJobListResponse
       */
      Models::QueryMediaInfoJobListResponse queryMediaInfoJobListWithOptions(const Models::QueryMediaInfoJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of media information analysis jobs.
       *
       * @description *   In asynchronous mode, the media information can be retrieved only after the Message Service (MNS) callback of **submitting a media information job** is returned. If you have not retrieved the media information for a long period, the job may have failed.
       * *   You can call this operation to query up to 10 media information analysis jobs at a time.
       * *   By default, returned jobs are sorted in descending order by CreationTime.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaInfoJobListRequest
       * @return QueryMediaInfoJobListResponse
       */
      Models::QueryMediaInfoJobListResponse queryMediaInfoJobList(const Models::QueryMediaInfoJobListRequest &request);

      /**
       * @summary Queries media files based on media file IDs.
       *
       * @description You can call this operation to query up to 10 media files at a time.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request QueryMediaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaListResponse
       */
      Models::QueryMediaListResponse queryMediaListWithOptions(const Models::QueryMediaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media files based on media file IDs.
       *
       * @description You can call this operation to query up to 10 media files at a time.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request QueryMediaListRequest
       * @return QueryMediaListResponse
       */
      Models::QueryMediaListResponse queryMediaList(const Models::QueryMediaListRequest &request);

      /**
       * @summary Queries media files based on their Object Storage Service (OSS) URLs.
       *
       * @description *   You can call this operation to query up to 10 media files at a time.
       * *   Before you call this operation, you must call the [AddMedia](https://help.aliyun.com/document_detail/44458.html) operation to add media files.
       * *   You can call this operation to query only media files that are processed in a workflow. To obtain comprehensive information about a media file that is newly uploaded to OSS, you can call this operation after the corresponding workflow is complete. To query media files that are not processed in a workflow, you must call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/29220.html) operation to submit a media information analysis job. After the job is complete, you can query the information about the media files.
       * ## QPS limit
       * You can call this API operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request QueryMediaListByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaListByURLResponse
       */
      Models::QueryMediaListByURLResponse queryMediaListByURLWithOptions(const Models::QueryMediaListByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media files based on their Object Storage Service (OSS) URLs.
       *
       * @description *   You can call this operation to query up to 10 media files at a time.
       * *   Before you call this operation, you must call the [AddMedia](https://help.aliyun.com/document_detail/44458.html) operation to add media files.
       * *   You can call this operation to query only media files that are processed in a workflow. To obtain comprehensive information about a media file that is newly uploaded to OSS, you can call this operation after the corresponding workflow is complete. To query media files that are not processed in a workflow, you must call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/29220.html) operation to submit a media information analysis job. After the job is complete, you can query the information about the media files.
       * ## QPS limit
       * You can call this API operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request QueryMediaListByURLRequest
       * @return QueryMediaListByURLResponse
       */
      Models::QueryMediaListByURLResponse queryMediaListByURL(const Models::QueryMediaListByURLRequest &request);

      /**
       * @summary Queries media workflow execution instances.
       *
       * @description *   You can call this operation to query a maximum of 10 media workflow execution instances at a time.
       * *   Before you call this operation, make sure that the workflow pipeline is enabled. Otherwise, the workflow may not run as expected. For example, the following exceptions may occur: the workflow node is invalid and jobs created in the workflow cannot be executed.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaWorkflowExecutionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaWorkflowExecutionListResponse
       */
      Models::QueryMediaWorkflowExecutionListResponse queryMediaWorkflowExecutionListWithOptions(const Models::QueryMediaWorkflowExecutionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media workflow execution instances.
       *
       * @description *   You can call this operation to query a maximum of 10 media workflow execution instances at a time.
       * *   Before you call this operation, make sure that the workflow pipeline is enabled. Otherwise, the workflow may not run as expected. For example, the following exceptions may occur: the workflow node is invalid and jobs created in the workflow cannot be executed.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaWorkflowExecutionListRequest
       * @return QueryMediaWorkflowExecutionListResponse
       */
      Models::QueryMediaWorkflowExecutionListResponse queryMediaWorkflowExecutionList(const Models::QueryMediaWorkflowExecutionListRequest &request);

      /**
       * @summary Queries registered media workflows.
       *
       * @description You can call this operation to query up to 10 media workflows at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaWorkflowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMediaWorkflowListResponse
       */
      Models::QueryMediaWorkflowListResponse queryMediaWorkflowListWithOptions(const Models::QueryMediaWorkflowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries registered media workflows.
       *
       * @description You can call this operation to query up to 10 media workflows at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryMediaWorkflowListRequest
       * @return QueryMediaWorkflowListResponse
       */
      Models::QueryMediaWorkflowListResponse queryMediaWorkflowList(const Models::QueryMediaWorkflowListRequest &request);

      /**
       * @summary Queries an ApsaraVideo Media Processing (MPS) queue by using the ID of the queue.
       *
       * @description *   You can call this operation to query up to 10 MPS queues at a time.
       * *   If `"Code": "InvalidIdentity.ServiceDisabled","Message": "The request identity was not allowed operated.","Recommend"` is returned after you call this operation, check whether the RAM user that you use is assigned the AliyunMTSDefaultRole role to obtain the permissions on MPS and whether your Alibaba Cloud account has overdue payments.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryPipelineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPipelineListResponse
       */
      Models::QueryPipelineListResponse queryPipelineListWithOptions(const Models::QueryPipelineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an ApsaraVideo Media Processing (MPS) queue by using the ID of the queue.
       *
       * @description *   You can call this operation to query up to 10 MPS queues at a time.
       * *   If `"Code": "InvalidIdentity.ServiceDisabled","Message": "The request identity was not allowed operated.","Recommend"` is returned after you call this operation, check whether the RAM user that you use is assigned the AliyunMTSDefaultRole role to obtain the permissions on MPS and whether your Alibaba Cloud account has overdue payments.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryPipelineListRequest
       * @return QueryPipelineListResponse
       */
      Models::QueryPipelineListResponse queryPipelineList(const Models::QueryPipelineListRequest &request);

      /**
       * @summary 查询智能标签任务
       *
       * @param request QuerySmarttagJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmarttagJobResponse
       */
      Models::QuerySmarttagJobResponse querySmarttagJobWithOptions(const Models::QuerySmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询智能标签任务
       *
       * @param request QuerySmarttagJobRequest
       * @return QuerySmarttagJobResponse
       */
      Models::QuerySmarttagJobResponse querySmarttagJob(const Models::QuerySmarttagJobRequest &request);

      /**
       * @summary Queries the analysis template of a smart tagging job.
       *
       * @description If you call this operation to query the information about a smart tagging template, you must specify the template ID. Otherwise, the operation returns the information about all the templates that are created by the current RAM user.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QuerySmarttagTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmarttagTemplateListResponse
       */
      Models::QuerySmarttagTemplateListResponse querySmarttagTemplateListWithOptions(const Models::QuerySmarttagTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the analysis template of a smart tagging job.
       *
       * @description If you call this operation to query the information about a smart tagging template, you must specify the template ID. Otherwise, the operation returns the information about all the templates that are created by the current RAM user.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QuerySmarttagTemplateListRequest
       * @return QuerySmarttagTemplateListResponse
       */
      Models::QuerySmarttagTemplateListResponse querySmarttagTemplateList(const Models::QuerySmarttagTemplateListRequest &request);

      /**
       * @summary Queries snapshot jobs.
       *
       * @description The status of the snapshot jobs that you want to query.
       * *   **Submitted**: The job was submitted.
       * *   **Snapshoting**: The job is being processed.
       * *   **Success**: The job was successfully processed.
       * *   **Fail**: The job failed.
       *
       * @param request QuerySnapshotJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySnapshotJobListResponse
       */
      Models::QuerySnapshotJobListResponse querySnapshotJobListWithOptions(const Models::QuerySnapshotJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries snapshot jobs.
       *
       * @description The status of the snapshot jobs that you want to query.
       * *   **Submitted**: The job was submitted.
       * *   **Snapshoting**: The job is being processed.
       * *   **Success**: The job was successfully processed.
       * *   **Fail**: The job failed.
       *
       * @param request QuerySnapshotJobListRequest
       * @return QuerySnapshotJobListResponse
       */
      Models::QuerySnapshotJobListResponse querySnapshotJobList(const Models::QuerySnapshotJobListRequest &request);

      /**
       * @summary You can call this operation to query up to 10 transcoding templates at a time.
       *
       * @description The IDs of the transcoding templates that you want to query. You can query up to 10 transcoding templates at a time. Separate multiple IDs of custom transcoding templates with commas (,).
       *
       * @param request QueryTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTemplateListResponse
       */
      Models::QueryTemplateListResponse queryTemplateListWithOptions(const Models::QueryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query up to 10 transcoding templates at a time.
       *
       * @description The IDs of the transcoding templates that you want to query. You can query up to 10 transcoding templates at a time. Separate multiple IDs of custom transcoding templates with commas (,).
       *
       * @param request QueryTemplateListRequest
       * @return QueryTemplateListResponse
       */
      Models::QueryTemplateListResponse queryTemplateList(const Models::QueryTemplateListRequest &request);

      /**
       * @summary 查询视频溯源水印ab流任务
       *
       * @param request QueryTraceAbJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceAbJobResponse
       */
      Models::QueryTraceAbJobResponse queryTraceAbJobWithOptions(const Models::QueryTraceAbJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频溯源水印ab流任务
       *
       * @param request QueryTraceAbJobRequest
       * @return QueryTraceAbJobResponse
       */
      Models::QueryTraceAbJobResponse queryTraceAbJob(const Models::QueryTraceAbJobRequest &request);

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
       * @param request QueryTraceM3u8JobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTraceM3u8JobResponse
       */
      Models::QueryTraceM3u8JobResponse queryTraceM3u8JobWithOptions(const Models::QueryTraceM3u8JobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频溯源水印m3u8任务
       *
       * @param request QueryTraceM3u8JobRequest
       * @return QueryTraceM3u8JobResponse
       */
      Models::QueryTraceM3u8JobResponse queryTraceM3u8Job(const Models::QueryTraceM3u8JobRequest &request);

      /**
       * @summary Queries watermark templates.
       *
       * @description You can call this operation to query up to 10 watermark templates at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryWaterMarkTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWaterMarkTemplateListResponse
       */
      Models::QueryWaterMarkTemplateListResponse queryWaterMarkTemplateListWithOptions(const Models::QueryWaterMarkTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries watermark templates.
       *
       * @description You can call this operation to query up to 10 watermark templates at a time.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request QueryWaterMarkTemplateListRequest
       * @return QueryWaterMarkTemplateListResponse
       */
      Models::QueryWaterMarkTemplateListResponse queryWaterMarkTemplateList(const Models::QueryWaterMarkTemplateListRequest &request);

      /**
       * @summary Registers a custom face.
       *
       * @description *   You can call this operation to register only one custom face at a time.
       * *   A maximum of 10 images can be registered for a custom face.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request RegisterCustomFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterCustomFaceResponse
       */
      Models::RegisterCustomFaceResponse registerCustomFaceWithOptions(const Models::RegisterCustomFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a custom face.
       *
       * @description *   You can call this operation to register only one custom face at a time.
       * *   A maximum of 10 images can be registered for a custom face.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request RegisterCustomFaceRequest
       * @return RegisterCustomFaceResponse
       */
      Models::RegisterCustomFaceResponse registerCustomFace(const Models::RegisterCustomFaceRequest &request);

      /**
       * @summary 注册自定义实体项
       *
       * @param request RegisterCustomViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterCustomViewResponse
       */
      Models::RegisterCustomViewResponse registerCustomViewWithOptions(const Models::RegisterCustomViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注册自定义实体项
       *
       * @param request RegisterCustomViewRequest
       * @return RegisterCustomViewResponse
       */
      Models::RegisterCustomViewResponse registerCustomView(const Models::RegisterCustomViewRequest &request);

      /**
       * @summary Queries media workflows in the specified state.
       *
       * @description You can call this operation to query media workflows in the specified state. If you do not specify the state, all media workflows are queried by default.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SearchMediaWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaWorkflowResponse
       */
      Models::SearchMediaWorkflowResponse searchMediaWorkflowWithOptions(const Models::SearchMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media workflows in the specified state.
       *
       * @description You can call this operation to query media workflows in the specified state. If you do not specify the state, all media workflows are queried by default.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SearchMediaWorkflowRequest
       * @return SearchMediaWorkflowResponse
       */
      Models::SearchMediaWorkflowResponse searchMediaWorkflow(const Models::SearchMediaWorkflowRequest &request);

      /**
       * @summary Searches for ApsaraVideo Media Processing (MPS) queues in the specified state.
       *
       * @description You can call this operation to query MPS queues in the specified state. If you do not specify the state, all MPS queues are queried by default.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SearchPipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchPipelineResponse
       */
      Models::SearchPipelineResponse searchPipelineWithOptions(const Models::SearchPipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for ApsaraVideo Media Processing (MPS) queues in the specified state.
       *
       * @description You can call this operation to query MPS queues in the specified state. If you do not specify the state, all MPS queues are queried by default.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SearchPipelineRequest
       * @return SearchPipelineResponse
       */
      Models::SearchPipelineResponse searchPipeline(const Models::SearchPipelineRequest &request);

      /**
       * @summary You can call this operation to query custom transcoding templates in the specified state.
       *
       * @description You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SearchTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTemplateResponse
       */
      Models::SearchTemplateResponse searchTemplateWithOptions(const Models::SearchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query custom transcoding templates in the specified state.
       *
       * @description You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SearchTemplateRequest
       * @return SearchTemplateResponse
       */
      Models::SearchTemplateResponse searchTemplate(const Models::SearchTemplateRequest &request);

      /**
       * @summary Searches for watermark templates.
       *
       * @description The total number of returned entries.
       *
       * @param request SearchWaterMarkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchWaterMarkTemplateResponse
       */
      Models::SearchWaterMarkTemplateResponse searchWaterMarkTemplateWithOptions(const Models::SearchWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for watermark templates.
       *
       * @description The total number of returned entries.
       *
       * @param request SearchWaterMarkTemplateRequest
       * @return SearchWaterMarkTemplateResponse
       */
      Models::SearchWaterMarkTemplateResponse searchWaterMarkTemplate(const Models::SearchWaterMarkTemplateRequest &request);

      /**
       * @summary Submits a preset template analysis job.
       *
       * @description *   After you call the SubmitAnalysisJob operation to submit a preset template analysis job, ApsaraVideo Media Processing (MPS) intelligently analyzes the input file of the job and recommends a suitable preset template. You can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html) operation to query the analysis result or enable asynchronous notifications to receive the analysis result.
       * *   The analysis result is retained only for two weeks after it is generated. The analysis result is deleted after two weeks. If you use the recommended preset template in a transcoding job after two weeks, the job fails, and the `AnalysisResultNotFound` error code is returned.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitAnalysisJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAnalysisJobResponse
       */
      Models::SubmitAnalysisJobResponse submitAnalysisJobWithOptions(const Models::SubmitAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a preset template analysis job.
       *
       * @description *   After you call the SubmitAnalysisJob operation to submit a preset template analysis job, ApsaraVideo Media Processing (MPS) intelligently analyzes the input file of the job and recommends a suitable preset template. You can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html) operation to query the analysis result or enable asynchronous notifications to receive the analysis result.
       * *   The analysis result is retained only for two weeks after it is generated. The analysis result is deleted after two weeks. If you use the recommended preset template in a transcoding job after two weeks, the job fails, and the `AnalysisResultNotFound` error code is returned.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitAnalysisJobRequest
       * @return SubmitAnalysisJobResponse
       */
      Models::SubmitAnalysisJobResponse submitAnalysisJob(const Models::SubmitAnalysisJobRequest &request);

      /**
       * @summary 提交版权水印提取任务
       *
       * @param request SubmitCopyrightExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCopyrightExtractJobResponse
       */
      Models::SubmitCopyrightExtractJobResponse submitCopyrightExtractJobWithOptions(const Models::SubmitCopyrightExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交版权水印提取任务
       *
       * @param request SubmitCopyrightExtractJobRequest
       * @return SubmitCopyrightExtractJobResponse
       */
      Models::SubmitCopyrightExtractJobResponse submitCopyrightExtractJob(const Models::SubmitCopyrightExtractJobRequest &request);

      /**
       * @summary 提交视频版权水印
       *
       * @param request SubmitCopyrightJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCopyrightJobResponse
       */
      Models::SubmitCopyrightJobResponse submitCopyrightJobWithOptions(const Models::SubmitCopyrightJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频版权水印
       *
       * @param request SubmitCopyrightJobRequest
       * @return SubmitCopyrightJobResponse
       */
      Models::SubmitCopyrightJobResponse submitCopyrightJob(const Models::SubmitCopyrightJobRequest &request);

      /**
       * @summary Submits a job of clearing or deleting a media fingerprint library.
       *
       * @description You can call this operation to clear or delete the specified media fingerprint library based on the library ID. If you clear a media fingerprint library, the content in the library is deleted, but the library is not deleted. If you delete a media fingerprint library, both the library and the content in the library are deleted. If you do not specify the operation type, the system clears the media fingerprint library by default.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitFpDBDeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFpDBDeleteJobResponse
       */
      Models::SubmitFpDBDeleteJobResponse submitFpDBDeleteJobWithOptions(const Models::SubmitFpDBDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job of clearing or deleting a media fingerprint library.
       *
       * @description You can call this operation to clear or delete the specified media fingerprint library based on the library ID. If you clear a media fingerprint library, the content in the library is deleted, but the library is not deleted. If you delete a media fingerprint library, both the library and the content in the library are deleted. If you do not specify the operation type, the system clears the media fingerprint library by default.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitFpDBDeleteJobRequest
       * @return SubmitFpDBDeleteJobResponse
       */
      Models::SubmitFpDBDeleteJobResponse submitFpDBDeleteJob(const Models::SubmitFpDBDeleteJobRequest &request);

      /**
       * @summary Submits a job of deleting media files from a media fingerprint library.
       *
       * @description ## [](#)Limits
       * *   You can call this operation to delete up to 200 media files from a media fingerprint library at a time.
       * *   This operation is available in the following regions: China (Beijing), China (Hangzhou), China (Shanghai), and Singapore.
       * ## [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitFpFileDeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFpFileDeleteJobResponse
       */
      Models::SubmitFpFileDeleteJobResponse submitFpFileDeleteJobWithOptions(const Models::SubmitFpFileDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a job of deleting media files from a media fingerprint library.
       *
       * @description ## [](#)Limits
       * *   You can call this operation to delete up to 200 media files from a media fingerprint library at a time.
       * *   This operation is available in the following regions: China (Beijing), China (Hangzhou), China (Shanghai), and Singapore.
       * ## [](#qps-)QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitFpFileDeleteJobRequest
       * @return SubmitFpFileDeleteJobResponse
       */
      Models::SubmitFpFileDeleteJobResponse submitFpFileDeleteJob(const Models::SubmitFpFileDeleteJobRequest &request);

      /**
       * @summary Submits a media fingerprint analysis job to query the media fingerprint repository for a media file with the identical or similar fingerprint as the input file.
       *
       * @description *   You can call this operation to submit a video, audio, image, or text fingerprint analysis job.
       * *   This operation asynchronously submits a job. The query results may not have been generated when the response is returned. After the results are generated, an asynchronous message is returned.
       * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
       * *   The input file of the job must be in one of the following formats:
       *     *   Image formats: JPEG, PNG, and BMP.
       *     *   Video formats: MP4, AVI, MKV, MPG, TS, MOV, FLV, MXF.
       *     *   Video encoding formats: MPEG2, MPEG4, H264, HEVC, and WMV.
       * ### QPS limit
       * You can call this operation up to 150 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitFpShotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFpShotJobResponse
       */
      Models::SubmitFpShotJobResponse submitFpShotJobWithOptions(const Models::SubmitFpShotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media fingerprint analysis job to query the media fingerprint repository for a media file with the identical or similar fingerprint as the input file.
       *
       * @description *   You can call this operation to submit a video, audio, image, or text fingerprint analysis job.
       * *   This operation asynchronously submits a job. The query results may not have been generated when the response is returned. After the results are generated, an asynchronous message is returned.
       * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
       * *   The input file of the job must be in one of the following formats:
       *     *   Image formats: JPEG, PNG, and BMP.
       *     *   Video formats: MP4, AVI, MKV, MPG, TS, MOV, FLV, MXF.
       *     *   Video encoding formats: MPEG2, MPEG4, H264, HEVC, and WMV.
       * ### QPS limit
       * You can call this operation up to 150 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitFpShotJobRequest
       * @return SubmitFpShotJobResponse
       */
      Models::SubmitFpShotJobResponse submitFpShotJob(const Models::SubmitFpShotJobRequest &request);

      /**
       * @description *   Jobs that are submitted by calling this operation run in an asynchronous manner. After a job is added to the ApsaraVideo Media Processing (MPS) queue, the job is scheduled to run. You can call the [QueryIProductionJob](https://help.aliyun.com/document_detail/170217.html) operation or configure a callback to query the job result.
       * *   Capabilities provided by the intelligent production feature vary based on the region. Before you call this operation to submit an intelligent production job, check whether the job is supported in the region in which your service is activated. For more information, see [Regions and endpoints](https://help.aliyun.com/document_detail/43248.html).
       * ### [](#qps)QPS limit
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitIProductionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIProductionJobResponse
       */
      Models::SubmitIProductionJobResponse submitIProductionJobWithOptions(const Models::SubmitIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description *   Jobs that are submitted by calling this operation run in an asynchronous manner. After a job is added to the ApsaraVideo Media Processing (MPS) queue, the job is scheduled to run. You can call the [QueryIProductionJob](https://help.aliyun.com/document_detail/170217.html) operation or configure a callback to query the job result.
       * *   Capabilities provided by the intelligent production feature vary based on the region. Before you call this operation to submit an intelligent production job, check whether the job is supported in the region in which your service is activated. For more information, see [Regions and endpoints](https://help.aliyun.com/document_detail/43248.html).
       * ### [](#qps)QPS limit
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitIProductionJobRequest
       * @return SubmitIProductionJobResponse
       */
      Models::SubmitIProductionJobResponse submitIProductionJob(const Models::SubmitIProductionJobRequest &request);

      /**
       * @summary 提交图片版权水印任务
       *
       * @param request SubmitImageCopyrightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageCopyrightResponse
       */
      Models::SubmitImageCopyrightResponse submitImageCopyrightWithOptions(const Models::SubmitImageCopyrightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交图片版权水印任务
       *
       * @param request SubmitImageCopyrightRequest
       * @return SubmitImageCopyrightResponse
       */
      Models::SubmitImageCopyrightResponse submitImageCopyright(const Models::SubmitImageCopyrightRequest &request);

      /**
       * @summary Submits transcoding jobs. If the transcoding jobs and workflows created in the ApsaraVideo Media Processing (MPS) console cannot meet your business requirements, you can call the SubmitJobs operation to submit transcoding jobs. Specify transcoding parameters as required when you call the SubmitJobs operation.
       *
       * @description *   SubmitJobs is an asynchronous operation. After you submit transcoding jobs, the jobs are added to an MPS queue to be scheduled and run. The transcoding jobs may not have been complete when the response is returned. After you call this operation, you can call the [QueryJobList](https://help.aliyun.com/document_detail/602836.html) operation to query the job results. You can also associate a Message Service (MNS) queue or topic with the MPS queue to receive notifications on the jobs. For more information, see [Receive notifications](https://help.aliyun.com/document_detail/42618.html).
       * *   An input file can be up to 100 GB in size. If the size of the input file exceeds this limit, the job may fail.
       * *   If you use an **intelligent preset template** to transcode an input file, you must first call the [SubmitAnalysisJob](https://help.aliyun.com/document_detail/29223.html) operation to submit a preset template analysis job. After the analysis job is complete, you can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html)operation to obtain the available preset templates for the input file. When you submit a transcoding job, set TemplateId to the ID of an available preset template. If you specify a preset template that is not in the available preset templates, the transcoding job fails.
       * *   If you use a **static preset template** to transcode an input file, you do not need to submit a preset template analysis job.
       * *   If you want to use multiple accounts in MPS, you can create Resource Access Management (RAM) users by using your Alibaba Cloud account. For more information, see [Create a RAM user and grant permissions to the RAM user](https://help.aliyun.com/document_detail/42841.html). If the Alibaba Cloud account that is used to query transcoding jobs is not the one that is used to submit the transcoding jobs, no data is returned.
       * *   For information about transcoding FAQ, see [FAQ about MPS](https://help.aliyun.com/document_detail/38986.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitJobsResponse
       */
      Models::SubmitJobsResponse submitJobsWithOptions(const Models::SubmitJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits transcoding jobs. If the transcoding jobs and workflows created in the ApsaraVideo Media Processing (MPS) console cannot meet your business requirements, you can call the SubmitJobs operation to submit transcoding jobs. Specify transcoding parameters as required when you call the SubmitJobs operation.
       *
       * @description *   SubmitJobs is an asynchronous operation. After you submit transcoding jobs, the jobs are added to an MPS queue to be scheduled and run. The transcoding jobs may not have been complete when the response is returned. After you call this operation, you can call the [QueryJobList](https://help.aliyun.com/document_detail/602836.html) operation to query the job results. You can also associate a Message Service (MNS) queue or topic with the MPS queue to receive notifications on the jobs. For more information, see [Receive notifications](https://help.aliyun.com/document_detail/42618.html).
       * *   An input file can be up to 100 GB in size. If the size of the input file exceeds this limit, the job may fail.
       * *   If you use an **intelligent preset template** to transcode an input file, you must first call the [SubmitAnalysisJob](https://help.aliyun.com/document_detail/29223.html) operation to submit a preset template analysis job. After the analysis job is complete, you can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html)operation to obtain the available preset templates for the input file. When you submit a transcoding job, set TemplateId to the ID of an available preset template. If you specify a preset template that is not in the available preset templates, the transcoding job fails.
       * *   If you use a **static preset template** to transcode an input file, you do not need to submit a preset template analysis job.
       * *   If you want to use multiple accounts in MPS, you can create Resource Access Management (RAM) users by using your Alibaba Cloud account. For more information, see [Create a RAM user and grant permissions to the RAM user](https://help.aliyun.com/document_detail/42841.html). If the Alibaba Cloud account that is used to query transcoding jobs is not the one that is used to submit the transcoding jobs, no data is returned.
       * *   For information about transcoding FAQ, see [FAQ about MPS](https://help.aliyun.com/document_detail/38986.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitJobsRequest
       * @return SubmitJobsResponse
       */
      Models::SubmitJobsResponse submitJobs(const Models::SubmitJobsRequest &request);

      /**
       * @summary Submits a content moderation job.
       *
       * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue and then scheduled, queued, and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/91779.html) operation or configure an asynchronous notification to obtain the job result.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitMediaCensorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaCensorJobResponse
       */
      Models::SubmitMediaCensorJobResponse submitMediaCensorJobWithOptions(const Models::SubmitMediaCensorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a content moderation job.
       *
       * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue and then scheduled, queued, and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/91779.html) operation or configure an asynchronous notification to obtain the job result.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitMediaCensorJobRequest
       * @return SubmitMediaCensorJobResponse
       */
      Models::SubmitMediaCensorJobResponse submitMediaCensorJob(const Models::SubmitMediaCensorJobRequest &request);

      /**
       * @summary Submits a media information analysis job.
       *
       * @description *   Before you submit a media information analysis job, make sure that the input file is uploaded to an Object Storage Service (OSS) bucket. Otherwise, the job fails. You can configure upload callbacks to be notified of the upload status of files.****
       * *   A media information analysis job can be run in synchronous or asynchronous mode.
       * *   In asynchronous mode, the media information analysis job is submitted to and scheduled in an ApsaraVideo Media Processing (MPS) queue. In this case, the media information analysis job may be queued. The media information analysis job may not be generated when the response to the SubmitMediaInfoJob operation is returned. After the execution is complete, you can call the [QueryMediaInfoJobList](https://help.aliyun.com/document_detail/602828.html) operation to poll the execution results, or associate a Message Service (MNS) queue or topic with the MPS queue to receive the execution results. For more information, see [Receive message notifications](https://www.alibabacloud.com/help/en/mps/receive-message-notifications/?spm=a2c63.p38356.0.0.b48576d2jxNSca).
       * ### QPS limits
       * You can call this operation up to 50 times per second per account. If the number of requests that you send to call this operation within one second reaches the request limit of this operation, new requests fail and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitMediaInfoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaInfoJobResponse
       */
      Models::SubmitMediaInfoJobResponse submitMediaInfoJobWithOptions(const Models::SubmitMediaInfoJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media information analysis job.
       *
       * @description *   Before you submit a media information analysis job, make sure that the input file is uploaded to an Object Storage Service (OSS) bucket. Otherwise, the job fails. You can configure upload callbacks to be notified of the upload status of files.****
       * *   A media information analysis job can be run in synchronous or asynchronous mode.
       * *   In asynchronous mode, the media information analysis job is submitted to and scheduled in an ApsaraVideo Media Processing (MPS) queue. In this case, the media information analysis job may be queued. The media information analysis job may not be generated when the response to the SubmitMediaInfoJob operation is returned. After the execution is complete, you can call the [QueryMediaInfoJobList](https://help.aliyun.com/document_detail/602828.html) operation to poll the execution results, or associate a Message Service (MNS) queue or topic with the MPS queue to receive the execution results. For more information, see [Receive message notifications](https://www.alibabacloud.com/help/en/mps/receive-message-notifications/?spm=a2c63.p38356.0.0.b48576d2jxNSca).
       * ### QPS limits
       * You can call this operation up to 50 times per second per account. If the number of requests that you send to call this operation within one second reaches the request limit of this operation, new requests fail and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitMediaInfoJobRequest
       * @return SubmitMediaInfoJobResponse
       */
      Models::SubmitMediaInfoJobResponse submitMediaInfoJob(const Models::SubmitMediaInfoJobRequest &request);

      /**
       * @param request SubmitSmarttagJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmarttagJobResponse
       */
      Models::SubmitSmarttagJobResponse submitSmarttagJobWithOptions(const Models::SubmitSmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitSmarttagJobRequest
       * @return SubmitSmarttagJobResponse
       */
      Models::SubmitSmarttagJobResponse submitSmarttagJob(const Models::SubmitSmarttagJobRequest &request);

      /**
       * @summary Submits a snapshot job.
       *
       * @description *   Only JPG images can be generated by calling this operation.
       * *   Asynchronous mode: This operation may return a response before snapshots are captured. Snapshot jobs are queued in the background and asynchronously processed by ApsaraVideo Media Processing (MPS). If the **Interval** or **Num** parameter is set, the snapshot job is processed in asynchronous mode. For more information about FAQ about capturing snapshots, see [FAQ about taking snapshots](https://help.aliyun.com/document_detail/60805.html).
       * *   Notifications: When you submit a snapshot job, the **PipelineId** parameter is required. An asynchronous message is sent only after the notification feature is enabled for the MPS queue.
       * ### QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJobWithOptions(const Models::SubmitSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a snapshot job.
       *
       * @description *   Only JPG images can be generated by calling this operation.
       * *   Asynchronous mode: This operation may return a response before snapshots are captured. Snapshot jobs are queued in the background and asynchronously processed by ApsaraVideo Media Processing (MPS). If the **Interval** or **Num** parameter is set, the snapshot job is processed in asynchronous mode. For more information about FAQ about capturing snapshots, see [FAQ about taking snapshots](https://help.aliyun.com/document_detail/60805.html).
       * *   Notifications: When you submit a snapshot job, the **PipelineId** parameter is required. An asynchronous message is sent only after the notification feature is enabled for the MPS queue.
       * ### QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request SubmitSnapshotJobRequest
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJob(const Models::SubmitSnapshotJobRequest &request);

      /**
       * @summary 提交视频溯源水印ab流任务
       *
       * @param request SubmitTraceAbJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceAbJobResponse
       */
      Models::SubmitTraceAbJobResponse submitTraceAbJobWithOptions(const Models::SubmitTraceAbJobRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @param request SubmitTraceExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceExtractJobResponse
       */
      Models::SubmitTraceExtractJobResponse submitTraceExtractJobWithOptions(const Models::SubmitTraceExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @param request SubmitTraceM3u8JobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTraceM3u8JobResponse
       */
      Models::SubmitTraceM3u8JobResponse submitTraceM3u8JobWithOptions(const Models::SubmitTraceM3u8JobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频溯源水印m3u8文件任务
       *
       * @param request SubmitTraceM3u8JobRequest
       * @return SubmitTraceM3u8JobResponse
       */
      Models::SubmitTraceM3u8JobResponse submitTraceM3u8Job(const Models::SubmitTraceM3u8JobRequest &request);

      /**
       * @summary The description of the figure. The description can be up to 512 characters in length.
       *
       * @description The response parameters.
       *
       * @param request TagCustomPersonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagCustomPersonResponse
       */
      Models::TagCustomPersonResponse tagCustomPersonWithOptions(const Models::TagCustomPersonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The description of the figure. The description can be up to 512 characters in length.
       *
       * @description The response parameters.
       *
       * @param request TagCustomPersonRequest
       * @return TagCustomPersonResponse
       */
      Models::TagCustomPersonResponse tagCustomPerson(const Models::TagCustomPersonRequest &request);

      /**
       * @summary Unbinds an input media bucket from the media library.
       *
       * @description # Usage notes
       * You can call this operation to unbind an input media bucket from the media library based on the name of the output media bucket.
       * # QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UnbindInputBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindInputBucketResponse
       */
      Models::UnbindInputBucketResponse unbindInputBucketWithOptions(const Models::UnbindInputBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an input media bucket from the media library.
       *
       * @description # Usage notes
       * You can call this operation to unbind an input media bucket from the media library based on the name of the output media bucket.
       * # QPS limits
       * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UnbindInputBucketRequest
       * @return UnbindInputBucketResponse
       */
      Models::UnbindInputBucketResponse unbindInputBucket(const Models::UnbindInputBucketRequest &request);

      /**
       * @summary You can call this operation to unbind an output media bucket from the media library based on the name of the output media bucket.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @description The name of the output media bucket to be unbound. To obtain the media bucket name, you can log on to the **ApsaraVideo Media Processing (MPS)** console and choose **Workflows** > **Media Buckets** in the left-side navigation pane. Alternatively, you can log on to the **Object Storage Service (OSS) console** and click **My OSS Paths**.
       *
       * @param request UnbindOutputBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindOutputBucketResponse
       */
      Models::UnbindOutputBucketResponse unbindOutputBucketWithOptions(const Models::UnbindOutputBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to unbind an output media bucket from the media library based on the name of the output media bucket.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @description The name of the output media bucket to be unbound. To obtain the media bucket name, you can log on to the **ApsaraVideo Media Processing (MPS)** console and choose **Workflows** > **Media Buckets** in the left-side navigation pane. Alternatively, you can log on to the **Object Storage Service (OSS) console** and click **My OSS Paths**.
       *
       * @param request UnbindOutputBucketRequest
       * @return UnbindOutputBucketResponse
       */
      Models::UnbindOutputBucketResponse unbindOutputBucket(const Models::UnbindOutputBucketRequest &request);

      /**
       * @summary Deletes a custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
       *
       * @description You can call this operation to delete a specific custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UnregisterCustomFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnregisterCustomFaceResponse
       */
      Models::UnregisterCustomFaceResponse unregisterCustomFaceWithOptions(const Models::UnregisterCustomFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
       *
       * @description You can call this operation to delete a specific custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UnregisterCustomFaceRequest
       * @return UnregisterCustomFaceResponse
       */
      Models::UnregisterCustomFaceResponse unregisterCustomFace(const Models::UnregisterCustomFaceRequest &request);

      /**
       * @summary Updates the basic information about a media file.
       *
       * @description The basic information that you can update by calling this operation includes the title, description, and category of a media file. This operation applies to a full update. You must set all the parameters unless you want to replace the value of a specific parameter with a NULL value.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMediaWithOptions(const Models::UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a media file.
       *
       * @description The basic information that you can update by calling this operation includes the title, description, and category of a media file. This operation applies to a full update. You must set all the parameters unless you want to replace the value of a specific parameter with a NULL value.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaRequest
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMedia(const Models::UpdateMediaRequest &request);

      /**
       * @summary Updates the category to which a media file belongs.
       *
       * @description You can call this operation to update only the category of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaCategoryResponse
       */
      Models::UpdateMediaCategoryResponse updateMediaCategoryWithOptions(const Models::UpdateMediaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the category to which a media file belongs.
       *
       * @description You can call this operation to update only the category of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaCategoryRequest
       * @return UpdateMediaCategoryResponse
       */
      Models::UpdateMediaCategoryResponse updateMediaCategory(const Models::UpdateMediaCategoryRequest &request);

      /**
       * @summary Updates the thumbnail of a media file.
       *
       * @description You can call this operation to update only the thumbnail of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
       * ## Limits on QPS
       * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request UpdateMediaCoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaCoverResponse
       */
      Models::UpdateMediaCoverResponse updateMediaCoverWithOptions(const Models::UpdateMediaCoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the thumbnail of a media file.
       *
       * @description You can call this operation to update only the thumbnail of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
       * ## Limits on QPS
       * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
       *
       * @param request UpdateMediaCoverRequest
       * @return UpdateMediaCoverResponse
       */
      Models::UpdateMediaCoverResponse updateMediaCover(const Models::UpdateMediaCoverRequest &request);

      /**
       * @summary Updates the publishing status of a media file.
       *
       * @description The published state indicates that the access control list (ACL) of media playback resources and snapshot files is set to inherit the ACL of the bucket to which they belong. The unpublished state indicates that the ACL of media playback resources and snapshot files is set to private.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaPublishStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaPublishStateResponse
       */
      Models::UpdateMediaPublishStateResponse updateMediaPublishStateWithOptions(const Models::UpdateMediaPublishStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the publishing status of a media file.
       *
       * @description The published state indicates that the access control list (ACL) of media playback resources and snapshot files is set to inherit the ACL of the bucket to which they belong. The unpublished state indicates that the ACL of media playback resources and snapshot files is set to private.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaPublishStateRequest
       * @return UpdateMediaPublishStateResponse
       */
      Models::UpdateMediaPublishStateResponse updateMediaPublishState(const Models::UpdateMediaPublishStateRequest &request);

      /**
       * @summary Updates the topology of a media workflow.
       *
       * @description *   You can call this operation to update the topology of a media workflow. To update the trigger mode of a media workflow, call the [UpdateMediaWorkflowTriggerMode](https://help.aliyun.com/document_detail/70372.html) operation.
       * *   After you delete or deactivate a media workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
       * <warning>Deleting or deactivating a workflow will not affect tasks that have already been submitted. If a workflow is deleted or deactivated after a task has been submitted, tasks that are already in the processing queue will not be canceled and will be executed normally and charged the corresponding fees.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).>
       *
       * @param request UpdateMediaWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaWorkflowResponse
       */
      Models::UpdateMediaWorkflowResponse updateMediaWorkflowWithOptions(const Models::UpdateMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the topology of a media workflow.
       *
       * @description *   You can call this operation to update the topology of a media workflow. To update the trigger mode of a media workflow, call the [UpdateMediaWorkflowTriggerMode](https://help.aliyun.com/document_detail/70372.html) operation.
       * *   After you delete or deactivate a media workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
       * <warning>Deleting or deactivating a workflow will not affect tasks that have already been submitted. If a workflow is deleted or deactivated after a task has been submitted, tasks that are already in the processing queue will not be canceled and will be executed normally and charged the corresponding fees.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).>
       *
       * @param request UpdateMediaWorkflowRequest
       * @return UpdateMediaWorkflowResponse
       */
      Models::UpdateMediaWorkflowResponse updateMediaWorkflow(const Models::UpdateMediaWorkflowRequest &request);

      /**
       * @summary Updates the trigger mode of a media workflow.
       *
       * @description You can call this operation only to modify the trigger mode of a media workflow. To modify other information about the workflow, call the [UpdateMediaWorkflow](https://help.aliyun.com/document_detail/44438.html) operation.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaWorkflowTriggerModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaWorkflowTriggerModeResponse
       */
      Models::UpdateMediaWorkflowTriggerModeResponse updateMediaWorkflowTriggerModeWithOptions(const Models::UpdateMediaWorkflowTriggerModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the trigger mode of a media workflow.
       *
       * @description You can call this operation only to modify the trigger mode of a media workflow. To modify other information about the workflow, call the [UpdateMediaWorkflow](https://help.aliyun.com/document_detail/44438.html) operation.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateMediaWorkflowTriggerModeRequest
       * @return UpdateMediaWorkflowTriggerModeResponse
       */
      Models::UpdateMediaWorkflowTriggerModeResponse updateMediaWorkflowTriggerMode(const Models::UpdateMediaWorkflowTriggerModeRequest &request);

      /**
       * @summary Updates an ApsaraVideo Media Processing (MPS) queue.
       *
       * @description *   You can call this operation to modify the name, status, and notification settings of the specified MPS queue.
       * *   If a paused MPS queue is selected in a workflow or a job, such as a video review or media fingerprint job, the workflow or job fails.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdatePipelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const Models::UpdatePipelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an ApsaraVideo Media Processing (MPS) queue.
       *
       * @description *   You can call this operation to modify the name, status, and notification settings of the specified MPS queue.
       * *   If a paused MPS queue is selected in a workflow or a job, such as a video review or media fingerprint job, the workflow or job fails.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const Models::UpdatePipelineRequest &request);

      /**
       * @summary 更新智能标签模板接口支持cpv
       *
       * @param request UpdateSmarttagTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmarttagTemplateResponse
       */
      Models::UpdateSmarttagTemplateResponse updateSmarttagTemplateWithOptions(const Models::UpdateSmarttagTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新智能标签模板接口支持cpv
       *
       * @param request UpdateSmarttagTemplateRequest
       * @return UpdateSmarttagTemplateResponse
       */
      Models::UpdateSmarttagTemplateResponse updateSmarttagTemplate(const Models::UpdateSmarttagTemplateRequest &request);

      /**
       * @description A custom transcoding template cannot be updated if it is being used by a job that has been submitted.The ID of the template. You can obtain the template ID from the response of the [AddTemplate](https://help.aliyun.com/document_detail/213306.html) operation.
       * ### QPS limits
       * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const Models::UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description A custom transcoding template cannot be updated if it is being used by a job that has been submitted.The ID of the template. You can obtain the template ID from the response of the [AddTemplate](https://help.aliyun.com/document_detail/213306.html) operation.
       * ### QPS limits
       * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const Models::UpdateTemplateRequest &request);

      /**
       * @summary Updates the name and configurations of the specified watermark template.
       *
       * @description *   You can call this operation to update the information about a watermark template based on the ID of the watermark template. For example, you can update the name and configurations of a watermark template.
       * *   A watermark template cannot be updated if it is being used by a job that has been submitted.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateWaterMarkTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWaterMarkTemplateResponse
       */
      Models::UpdateWaterMarkTemplateResponse updateWaterMarkTemplateWithOptions(const Models::UpdateWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and configurations of the specified watermark template.
       *
       * @description *   You can call this operation to update the information about a watermark template based on the ID of the watermark template. For example, you can update the name and configurations of a watermark template.
       * *   A watermark template cannot be updated if it is being used by a job that has been submitted.
       * ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
       *
       * @param request UpdateWaterMarkTemplateRequest
       * @return UpdateWaterMarkTemplateResponse
       */
      Models::UpdateWaterMarkTemplateResponse updateWaterMarkTemplate(const Models::UpdateWaterMarkTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
