// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IMM20200930_HPP_
#define ALIBABACLOUD_IMM20200930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Imm20200930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Imm20200930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds mosaics, Gaussian blurs, or solid color shapes to blur one or more areas of an image for privacy protection and saves the output image to the specified path in Object Storage Service (OSS).
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       * *   The operation accepts JPG and PNG images with a maximum side length of 30,000 pixels and a total of up to 250 million pixels.
       *
       * @param tmpReq AddImageMosaicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageMosaicResponse
       */
      Models::AddImageMosaicResponse addImageMosaicWithOptions(const Models::AddImageMosaicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds mosaics, Gaussian blurs, or solid color shapes to blur one or more areas of an image for privacy protection and saves the output image to the specified path in Object Storage Service (OSS).
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       * *   The operation accepts JPG and PNG images with a maximum side length of 30,000 pixels and a total of up to 250 million pixels.
       *
       * @param request AddImageMosaicRequest
       * @return AddImageMosaicResponse
       */
      Models::AddImageMosaicResponse addImageMosaic(const Models::AddImageMosaicRequest &request);

      /**
       * @summary Adds objects to a story.
       *
       * @param tmpReq AddStoryFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddStoryFilesResponse
       */
      Models::AddStoryFilesResponse addStoryFilesWithOptions(const Models::AddStoryFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds objects to a story.
       *
       * @param request AddStoryFilesRequest
       * @return AddStoryFilesResponse
       */
      Models::AddStoryFilesResponse addStoryFiles(const Models::AddStoryFilesRequest &request);

      /**
       * @summary Binds an Object Storage Service (OSS) bucket to the specified project. The binding enables you to use IMM features by using the x-oss-process parameter.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   To use data processing capabilities of IMM based on the x-oss-process parameter, you must bind an OSS bucket to an IMM project. For more information, see [x-oss-process](https://help.aliyun.com/document_detail/2391270.html).
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       *
       * @param request AttachOSSBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachOSSBucketResponse
       */
      Models::AttachOSSBucketResponse attachOSSBucketWithOptions(const Models::AttachOSSBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an Object Storage Service (OSS) bucket to the specified project. The binding enables you to use IMM features by using the x-oss-process parameter.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   To use data processing capabilities of IMM based on the x-oss-process parameter, you must bind an OSS bucket to an IMM project. For more information, see [x-oss-process](https://help.aliyun.com/document_detail/2391270.html).
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       *
       * @param request AttachOSSBucketRequest
       * @return AttachOSSBucketResponse
       */
      Models::AttachOSSBucketResponse attachOSSBucket(const Models::AttachOSSBucketRequest &request);

      /**
       * @summary Deletes the metadata of multiple files from a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
       * > 
       * *   If you delete the metadata of a file from a dataset, the file stored in Object Storage Service (OSS) or Photo and Drive Service is **not** deleted. If you want to delete the file, use the operations provided by OSS or Photo and Drive Service.
       * *   Metadata deletion affects existing face groups and stories but does not affect existing spatiotemporal groups.
       *
       * @param tmpReq BatchDeleteFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteFileMetaResponse
       */
      Models::BatchDeleteFileMetaResponse batchDeleteFileMetaWithOptions(const Models::BatchDeleteFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the metadata of multiple files from a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
       * > 
       * *   If you delete the metadata of a file from a dataset, the file stored in Object Storage Service (OSS) or Photo and Drive Service is **not** deleted. If you want to delete the file, use the operations provided by OSS or Photo and Drive Service.
       * *   Metadata deletion affects existing face groups and stories but does not affect existing spatiotemporal groups.
       *
       * @param request BatchDeleteFileMetaRequest
       * @return BatchDeleteFileMetaResponse
       */
      Models::BatchDeleteFileMetaResponse batchDeleteFileMeta(const Models::BatchDeleteFileMetaRequest &request);

      /**
       * @summary Queries face clusters.
       *
       * @param tmpReq BatchGetFigureClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetFigureClusterResponse
       */
      Models::BatchGetFigureClusterResponse batchGetFigureClusterWithOptions(const Models::BatchGetFigureClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries face clusters.
       *
       * @param request BatchGetFigureClusterRequest
       * @return BatchGetFigureClusterResponse
       */
      Models::BatchGetFigureClusterResponse batchGetFigureCluster(const Models::BatchGetFigureClusterRequest &request);

      /**
       * @summary Queries metadata of multiple objects or files in the specified dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, feel free to join the DingTalk chat group (ID: 31690030817) and share your questions with us.
       *
       * @param tmpReq BatchGetFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetFileMetaResponse
       */
      Models::BatchGetFileMetaResponse batchGetFileMetaWithOptions(const Models::BatchGetFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metadata of multiple objects or files in the specified dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, feel free to join the DingTalk chat group (ID: 31690030817) and share your questions with us.
       *
       * @param request BatchGetFileMetaRequest
       * @return BatchGetFileMetaResponse
       */
      Models::BatchGetFileMetaResponse batchGetFileMeta(const Models::BatchGetFileMetaRequest &request);

      /**
       * @summary Indexes metadata of multiple objects into the specified dataset. The process involves data processing operations such as label detection, face detection, and location detection. Metadata indexing helps meet diverse data retrieval requirements.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Data processing operations supported for metadata processing vary with workflow templates. For more information, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
       * *   Metadata indexing poses limits on the total number and size of objects. For more information about these limits, see [Limits](https://help.aliyun.com/document_detail/475569.html). For more information about how to create
       * *   Metadata indexing is available in specific regions. For information about regions that support metadata indexing, see the "Data management and indexing" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
       *
       * @param tmpReq BatchIndexFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchIndexFileMetaResponse
       */
      Models::BatchIndexFileMetaResponse batchIndexFileMetaWithOptions(const Models::BatchIndexFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Indexes metadata of multiple objects into the specified dataset. The process involves data processing operations such as label detection, face detection, and location detection. Metadata indexing helps meet diverse data retrieval requirements.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Data processing operations supported for metadata processing vary with workflow templates. For more information, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
       * *   Metadata indexing poses limits on the total number and size of objects. For more information about these limits, see [Limits](https://help.aliyun.com/document_detail/475569.html). For more information about how to create
       * *   Metadata indexing is available in specific regions. For information about regions that support metadata indexing, see the "Data management and indexing" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
       *
       * @param request BatchIndexFileMetaRequest
       * @return BatchIndexFileMetaResponse
       */
      Models::BatchIndexFileMetaResponse batchIndexFileMeta(const Models::BatchIndexFileMetaRequest &request);

      /**
       * @summary Updates some metadata items of files indexed into a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   You cannot call this operation to update all metadata. You can update only metadata fields such as CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
       *
       * @param tmpReq BatchUpdateFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateFileMetaResponse
       */
      Models::BatchUpdateFileMetaResponse batchUpdateFileMetaWithOptions(const Models::BatchUpdateFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates some metadata items of files indexed into a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   You cannot call this operation to update all metadata. You can update only metadata fields such as CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
       *
       * @param request BatchUpdateFileMetaRequest
       * @return BatchUpdateFileMetaResponse
       */
      Models::BatchUpdateFileMetaResponse batchUpdateFileMeta(const Models::BatchUpdateFileMetaRequest &request);

      /**
       * @summary Compares the similarity of the largest faces in two images. The largest face refers to the largest face frame in an image after face detection.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   For the input image, only the face with the largest face frame in the image is used for face comparison. The face frame detection result is consistent with the responses of the [DetectImageFaces](https://help.aliyun.com/document_detail/478213.html) operation.
       *
       * @param tmpReq CompareImageFacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareImageFacesResponse
       */
      Models::CompareImageFacesResponse compareImageFacesWithOptions(const Models::CompareImageFacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares the similarity of the largest faces in two images. The largest face refers to the largest face frame in an image after face detection.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   For the input image, only the face with the largest face frame in the image is used for face comparison. The face frame detection result is consistent with the responses of the [DetectImageFaces](https://help.aliyun.com/document_detail/478213.html) operation.
       *
       * @param request CompareImageFacesRequest
       * @return CompareImageFacesResponse
       */
      Models::CompareImageFacesResponse compareImageFaces(const Models::CompareImageFacesRequest &request);

      /**
       * @summary AI 助手二期，问答API
       *
       * @param tmpReq ContextualAnswerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContextualAnswerResponse
       */
      FutrueGenerator<Models::ContextualAnswerResponse> contextualAnswerWithSSE(const Models::ContextualAnswerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI 助手二期，问答API
       *
       * @param tmpReq ContextualAnswerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContextualAnswerResponse
       */
      Models::ContextualAnswerResponse contextualAnswerWithOptions(const Models::ContextualAnswerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI 助手二期，问答API
       *
       * @param request ContextualAnswerRequest
       * @return ContextualAnswerResponse
       */
      Models::ContextualAnswerResponse contextualAnswer(const Models::ContextualAnswerRequest &request);

      /**
       * @summary AI助手二期，检索API
       *
       * @param tmpReq ContextualRetrievalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContextualRetrievalResponse
       */
      Models::ContextualRetrievalResponse contextualRetrievalWithOptions(const Models::ContextualRetrievalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI助手二期，检索API
       *
       * @param request ContextualRetrievalRequest
       * @return ContextualRetrievalResponse
       */
      Models::ContextualRetrievalResponse contextualRetrieval(const Models::ContextualRetrievalRequest &request);

      /**
       * @summary Creates an archive file inspection task to preview the files in a package without decompressing the package.
       *
       * @description >  The operation is in public preview. For any inquires, join our DingTalk chat group (ID: 31690030817) and share your questions with us.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation supports a package that contains up to 80,000 files.
       * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateArchiveFileInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateArchiveFileInspectionTaskResponse
       */
      Models::CreateArchiveFileInspectionTaskResponse createArchiveFileInspectionTaskWithOptions(const Models::CreateArchiveFileInspectionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an archive file inspection task to preview the files in a package without decompressing the package.
       *
       * @description >  The operation is in public preview. For any inquires, join our DingTalk chat group (ID: 31690030817) and share your questions with us.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation supports a package that contains up to 80,000 files.
       * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateArchiveFileInspectionTaskRequest
       * @return CreateArchiveFileInspectionTaskResponse
       */
      Models::CreateArchiveFileInspectionTaskResponse createArchiveFileInspectionTask(const Models::CreateArchiveFileInspectionTaskRequest &request);

      /**
       * @summary Creates a batch processing task to perform a data processing operation, such as transcoding or format conversion, on multiple existing files at a time.
       *
       * @description If you want to create a batch processing task to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param tmpReq CreateBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchResponse
       */
      Models::CreateBatchResponse createBatchWithOptions(const Models::CreateBatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a batch processing task to perform a data processing operation, such as transcoding or format conversion, on multiple existing files at a time.
       *
       * @description If you want to create a batch processing task to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param request CreateBatchRequest
       * @return CreateBatchResponse
       */
      Models::CreateBatchResponse createBatch(const Models::CreateBatchRequest &request);

      /**
       * @summary Creates a binding relationship between a dataset and an Object Storage Service (OSS) bucket. This allows for the automatic synchronization of incremental and full data and indexing.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * Before you create a binding relationship, make sure that the project and the dataset that you want to use exist.
       * *   For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
       * >  The CreateBinding operation works by using the [workflow template](https://help.aliyun.com/document_detail/466304.html) that is specified when you created the project or dataset.
       * After you create a binding relationship between a dataset and an OSS bucket, IMM scans the existing objects in the bucket and extracts metadata based on the scanning result. Then, IMM creates an index from the extracted metadata. If new objects are added to the OSS bucket, IMM constantly tracks and scans the objects and updates the index. For objects whose index is created in this way, you can call the [SimpleQuery](https://help.aliyun.com/document_detail/478175.html) operation to query, manage, and collect statistics from the objects.
       *
       * @param request CreateBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBindingResponse
       */
      Models::CreateBindingResponse createBindingWithOptions(const Models::CreateBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a binding relationship between a dataset and an Object Storage Service (OSS) bucket. This allows for the automatic synchronization of incremental and full data and indexing.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * Before you create a binding relationship, make sure that the project and the dataset that you want to use exist.
       * *   For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
       * >  The CreateBinding operation works by using the [workflow template](https://help.aliyun.com/document_detail/466304.html) that is specified when you created the project or dataset.
       * After you create a binding relationship between a dataset and an OSS bucket, IMM scans the existing objects in the bucket and extracts metadata based on the scanning result. Then, IMM creates an index from the extracted metadata. If new objects are added to the OSS bucket, IMM constantly tracks and scans the objects and updates the index. For objects whose index is created in this way, you can call the [SimpleQuery](https://help.aliyun.com/document_detail/478175.html) operation to query, manage, and collect statistics from the objects.
       *
       * @param request CreateBindingRequest
       * @return CreateBindingResponse
       */
      Models::CreateBindingResponse createBinding(const Models::CreateBindingRequest &request);

      /**
       * @summary Compresses point cloud data (PCD) in Object Storage Service (OSS) to reduce the amount of data transferred over networks.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   This operation supports only Point Cloud Data (PCD) files.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
       *
       * @param tmpReq CreateCompressPointCloudTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompressPointCloudTaskResponse
       */
      Models::CreateCompressPointCloudTaskResponse createCompressPointCloudTaskWithOptions(const Models::CreateCompressPointCloudTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compresses point cloud data (PCD) in Object Storage Service (OSS) to reduce the amount of data transferred over networks.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   This operation supports only Point Cloud Data (PCD) files.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
       *
       * @param request CreateCompressPointCloudTaskRequest
       * @return CreateCompressPointCloudTaskResponse
       */
      Models::CreateCompressPointCloudTaskResponse createCompressPointCloudTask(const Models::CreateCompressPointCloudTaskRequest &request);

      /**
       * @summary Creates a story based on the specified images and videos.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       *
       * @param tmpReq CreateCustomizedStoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomizedStoryResponse
       */
      Models::CreateCustomizedStoryResponse createCustomizedStoryWithOptions(const Models::CreateCustomizedStoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a story based on the specified images and videos.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       *
       * @param request CreateCustomizedStoryRequest
       * @return CreateCustomizedStoryResponse
       */
      Models::CreateCustomizedStoryResponse createCustomizedStory(const Models::CreateCustomizedStoryRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   A dataset name must be unique within the same project.
       * *   A project has an upper limit on the number of datasets that can be created in the project. You can call the [GetProjcet](https://help.aliyun.com/document_detail/478155.html) operation to query the dataset limit of the project.
       * *   After creating a dataset, you can call the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) operation to index metadata. Metadata indexing enhances [data retrieval efficiency and statistics collection](https://help.aliyun.com/document_detail/478175.html), and enables intelligent data management.
       *
       * @param tmpReq CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   A dataset name must be unique within the same project.
       * *   A project has an upper limit on the number of datasets that can be created in the project. You can call the [GetProjcet](https://help.aliyun.com/document_detail/478155.html) operation to query the dataset limit of the project.
       * *   After creating a dataset, you can call the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) operation to index metadata. Metadata indexing enhances [data retrieval efficiency and statistics collection](https://help.aliyun.com/document_detail/478175.html), and enables intelligent data management.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary Decodes the blind watermark in an image.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   The region and project specified in the request to decode a blind watermark must match those in the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) request to encode the blind watermark.
       * *   A blind watermark can still be extracted even if attacks, such as compression, scaling, cropping, rotation, and color transformation, are performed on the image.
       * *   This operation is compatible with its earlier version DecodeBlindWatermark.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateDecodeBlindWatermarkTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDecodeBlindWatermarkTaskResponse
       */
      Models::CreateDecodeBlindWatermarkTaskResponse createDecodeBlindWatermarkTaskWithOptions(const Models::CreateDecodeBlindWatermarkTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decodes the blind watermark in an image.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   The region and project specified in the request to decode a blind watermark must match those in the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) request to encode the blind watermark.
       * *   A blind watermark can still be extracted even if attacks, such as compression, scaling, cropping, rotation, and color transformation, are performed on the image.
       * *   This operation is compatible with its earlier version DecodeBlindWatermark.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateDecodeBlindWatermarkTaskRequest
       * @return CreateDecodeBlindWatermarkTaskResponse
       */
      Models::CreateDecodeBlindWatermarkTaskResponse createDecodeBlindWatermarkTask(const Models::CreateDecodeBlindWatermarkTaskRequest &request);

      /**
       * @summary Searches the dataset for the specified number of images most similar to the specified image or face and returns face IDs and boundaries in descending order of similarity.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation searches for faces that are similar to the face within the largest bounding box in each input image.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateFacesSearchingTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFacesSearchingTaskResponse
       */
      Models::CreateFacesSearchingTaskResponse createFacesSearchingTaskWithOptions(const Models::CreateFacesSearchingTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches the dataset for the specified number of images most similar to the specified image or face and returns face IDs and boundaries in descending order of similarity.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation searches for faces that are similar to the face within the largest bounding box in each input image.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateFacesSearchingTaskRequest
       * @return CreateFacesSearchingTaskResponse
       */
      Models::CreateFacesSearchingTaskResponse createFacesSearchingTask(const Models::CreateFacesSearchingTaskRequest &request);

      /**
       * @summary Creates a face clustering task to cluster faces of different persons in images by person based on the intelligent algorithms.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the CreateBinding operation or manually by calling the IndexFileMeta or BatchIndexFileMeta operation.
       * *   Each call to the operation incrementally processes metadata in the dataset. You can regularly call this operation to process incremental files.
       *     After the clustering task is completed, you can call the GetFigureCluster or BatchGetFigureCluster  operation to query information about a specific cluster. You can also call the QueryFigureClusters operation to query all face clusters of the specified dataset.
       * *   Removing image information from the dataset causes changes to face clusters. When images that contain all faces in a cluster are removed, the cluster is deleted.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateFigureClusteringTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFigureClusteringTaskResponse
       */
      Models::CreateFigureClusteringTaskResponse createFigureClusteringTaskWithOptions(const Models::CreateFigureClusteringTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a face clustering task to cluster faces of different persons in images by person based on the intelligent algorithms.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the CreateBinding operation or manually by calling the IndexFileMeta or BatchIndexFileMeta operation.
       * *   Each call to the operation incrementally processes metadata in the dataset. You can regularly call this operation to process incremental files.
       *     After the clustering task is completed, you can call the GetFigureCluster or BatchGetFigureCluster  operation to query information about a specific cluster. You can also call the QueryFigureClusters operation to query all face clusters of the specified dataset.
       * *   Removing image information from the dataset causes changes to face clusters. When images that contain all faces in a cluster are removed, the cluster is deleted.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateFigureClusteringTaskRequest
       * @return CreateFigureClusteringTaskResponse
       */
      Models::CreateFigureClusteringTaskResponse createFigureClusteringTask(const Models::CreateFigureClusteringTaskRequest &request);

      /**
       * @summary Merges two or more face clustering groups into one face clustering group.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
       * *   If you merge unrelated groups, the feature values of the target groups are affected. As a result, the incremental data may be inaccurately grouped when you create a face clustering task.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateFigureClustersMergingTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFigureClustersMergingTaskResponse
       */
      Models::CreateFigureClustersMergingTaskResponse createFigureClustersMergingTaskWithOptions(const Models::CreateFigureClustersMergingTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Merges two or more face clustering groups into one face clustering group.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
       * *   If you merge unrelated groups, the feature values of the target groups are affected. As a result, the incremental data may be inaccurately grouped when you create a face clustering task.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateFigureClustersMergingTaskRequest
       * @return CreateFigureClustersMergingTaskResponse
       */
      Models::CreateFigureClustersMergingTaskResponse createFigureClustersMergingTask(const Models::CreateFigureClustersMergingTaskRequest &request);

      /**
       * @summary Creates a file packing task.
       *
       * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
       * >  The operation supports file packing only. Compression support will be added later.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   A call to the operation can pack up to 80,000 objects into a package.
       * *   The total size of all objects to be packed into a package cannot exceed 200 GB.
       * *   The operation can pack only Standard objects in Object Storage Service (OSS). To pack an object in another storage class, you must first [convert the storage class of the object](https://help.aliyun.com/document_detail/90090.html).
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateFileCompressionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileCompressionTaskResponse
       */
      Models::CreateFileCompressionTaskResponse createFileCompressionTaskWithOptions(const Models::CreateFileCompressionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file packing task.
       *
       * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
       * >  The operation supports file packing only. Compression support will be added later.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   A call to the operation can pack up to 80,000 objects into a package.
       * *   The total size of all objects to be packed into a package cannot exceed 200 GB.
       * *   The operation can pack only Standard objects in Object Storage Service (OSS). To pack an object in another storage class, you must first [convert the storage class of the object](https://help.aliyun.com/document_detail/90090.html).
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateFileCompressionTaskRequest
       * @return CreateFileCompressionTaskResponse
       */
      Models::CreateFileCompressionTaskResponse createFileCompressionTask(const Models::CreateFileCompressionTaskRequest &request);

      /**
       * @summary Extracts the specified files from a ZIP, RAR, or 7z package to the specified directory or decompresses the entire package.
       *
       * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation supports a package that contains up to 80,000 files.
       * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
       * *   The operation extracts files in streams to the specified directory. If the file extraction task is interrupted by a corrupt file, files that have been extracted are not deleted.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateFileUncompressionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileUncompressionTaskResponse
       */
      Models::CreateFileUncompressionTaskResponse createFileUncompressionTaskWithOptions(const Models::CreateFileUncompressionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts the specified files from a ZIP, RAR, or 7z package to the specified directory or decompresses the entire package.
       *
       * @description >  The operation is in public preview. For any inquires, join our DingTalk group (ID: 88490020073) and share your questions with us.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation supports a package that contains up to 80,000 files.
       * *   The operation supports ZIP or RAR packages up to 200 GB in size, or 7z packages up to 50 GB in size.
       * *   The operation extracts files in streams to the specified directory. If the file extraction task is interrupted by a corrupt file, files that have been extracted are not deleted.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateFileUncompressionTaskRequest
       * @return CreateFileUncompressionTaskResponse
       */
      Models::CreateFileUncompressionTaskResponse createFileUncompressionTask(const Models::CreateFileUncompressionTaskRequest &request);

      /**
       * @summary Creates an image moderation task to ensure image content compliance. You can call this operation to identify inappropriate content, such as pornography, violence, terrorism, politically sensitive content, undesirable scenes, unauthorized logos, and non-compliant ads.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The image for which you want to create a content moderation task must meet the following requirements:
       *     *   The image URL supports the HTTP and HTTPS protocols.
       *     *   The image is in one of the following formats: PNG, JPG, JPEG, BMP, GIF, and WebP
       *     *   The image size is limited to 20 MB for synchronous and asynchronous calls, with a maximum height or width of 30,000 pixels. The total number of pixels cannot exceed 250 million. GIF images are limited to 4,194,304 pixels, with a maximum height or width of 30,000 pixels.
       *     *   The image download time is limited to 3 seconds. If the download takes longer, a timeout error occurs.
       *     *   To ensure effective moderation, we recommend that you submit an image with dimensions of at least 256 × 256 pixels.
       *     *   The response time of the CreateImageModerationTask operation varies based on the duration of the image download. Make sure that the image is stored in a stable and reliable service. We recommend that you store images on Alibaba Cloud Object Storage Service (OSS) or cache them on Alibaba Cloud CDN.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478241.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can also obtain information about the task based on notifications.
       * >  The detection result is sent as an asynchronous notification. The Suggestion field of the notification can have one of the following values:
       * *   pass: No non-compliant content is found.
       * *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance categories. For more information, see Content moderation results.
       * *   review: A manual review is needed. After the manual review is finished, another asynchronous notification is sent to inform you about the review result. >
       *
       * @param tmpReq CreateImageModerationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageModerationTaskResponse
       */
      Models::CreateImageModerationTaskResponse createImageModerationTaskWithOptions(const Models::CreateImageModerationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image moderation task to ensure image content compliance. You can call this operation to identify inappropriate content, such as pornography, violence, terrorism, politically sensitive content, undesirable scenes, unauthorized logos, and non-compliant ads.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The image for which you want to create a content moderation task must meet the following requirements:
       *     *   The image URL supports the HTTP and HTTPS protocols.
       *     *   The image is in one of the following formats: PNG, JPG, JPEG, BMP, GIF, and WebP
       *     *   The image size is limited to 20 MB for synchronous and asynchronous calls, with a maximum height or width of 30,000 pixels. The total number of pixels cannot exceed 250 million. GIF images are limited to 4,194,304 pixels, with a maximum height or width of 30,000 pixels.
       *     *   The image download time is limited to 3 seconds. If the download takes longer, a timeout error occurs.
       *     *   To ensure effective moderation, we recommend that you submit an image with dimensions of at least 256 × 256 pixels.
       *     *   The response time of the CreateImageModerationTask operation varies based on the duration of the image download. Make sure that the image is stored in a stable and reliable service. We recommend that you store images on Alibaba Cloud Object Storage Service (OSS) or cache them on Alibaba Cloud CDN.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478241.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can also obtain information about the task based on notifications.
       * >  The detection result is sent as an asynchronous notification. The Suggestion field of the notification can have one of the following values:
       * *   pass: No non-compliant content is found.
       * *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance categories. For more information, see Content moderation results.
       * *   review: A manual review is needed. After the manual review is finished, another asynchronous notification is sent to inform you about the review result. >
       *
       * @param request CreateImageModerationTaskRequest
       * @return CreateImageModerationTaskResponse
       */
      Models::CreateImageModerationTaskResponse createImageModerationTask(const Models::CreateImageModerationTaskRequest &request);

      /**
       * @summary Creates an image splicing task. You can call this operation to splice multiple images into one based on a given rule and save the final image into an Object Storage Service (OSS) bucket.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       * *   You can call this operation to merge up to 10 images. Each side of an image cannot exceed 32,876 pixels, and the total number of pixels of the image cannot exceed 1 billion.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateImageSplicingTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageSplicingTaskResponse
       */
      Models::CreateImageSplicingTaskResponse createImageSplicingTaskWithOptions(const Models::CreateImageSplicingTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image splicing task. You can call this operation to splice multiple images into one based on a given rule and save the final image into an Object Storage Service (OSS) bucket.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       * *   You can call this operation to merge up to 10 images. Each side of an image cannot exceed 32,876 pixels, and the total number of pixels of the image cannot exceed 1 billion.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateImageSplicingTaskRequest
       * @return CreateImageSplicingTaskResponse
       */
      Models::CreateImageSplicingTaskResponse createImageSplicingTask(const Models::CreateImageSplicingTaskRequest &request);

      /**
       * @summary Converts multiple images into one single PDF file and stores the PDF file to the specified path in Object Storage Service (OSS).
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       * *   You can specify up to 100 images in a call to the operation.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateImageToPDFTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageToPDFTaskResponse
       */
      Models::CreateImageToPDFTaskResponse createImageToPDFTaskWithOptions(const Models::CreateImageToPDFTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts multiple images into one single PDF file and stores the PDF file to the specified path in Object Storage Service (OSS).
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       * *   You can specify up to 100 images in a call to the operation.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateImageToPDFTaskRequest
       * @return CreateImageToPDFTaskResponse
       */
      Models::CreateImageToPDFTaskResponse createImageToPDFTask(const Models::CreateImageToPDFTaskRequest &request);

      /**
       * @summary Creates a spatiotemporal clustering task to cluster photos and videos based on geolocation and time information. Spatiotemporal clustering allows you to group photos and videos taken during a travel or at different places by their spatial and temporal similarity. Based on spatiotemporal clustering, you can develop media capabilities such as media file categorization, photo collections, and image and video-based stories.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
       * *   After a spatiotemporal clustering task is complete, you can call the [QueryLocationDateClusters](https://help.aliyun.com/document_detail/478189.html) operation to query the spatiotemporal clustering result.
       * *   Removing metadata from a dataset does not affect existing spatiotemporal clusters for the dataset. To delete a spatiotemporal cluster, call the [DeleteLocationDateCluster](https://help.aliyun.com/document_detail/478191.html) operation.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateLocationDateClusteringTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLocationDateClusteringTaskResponse
       */
      Models::CreateLocationDateClusteringTaskResponse createLocationDateClusteringTaskWithOptions(const Models::CreateLocationDateClusteringTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a spatiotemporal clustering task to cluster photos and videos based on geolocation and time information. Spatiotemporal clustering allows you to group photos and videos taken during a travel or at different places by their spatial and temporal similarity. Based on spatiotemporal clustering, you can develop media capabilities such as media file categorization, photo collections, and image and video-based stories.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
       * *   After a spatiotemporal clustering task is complete, you can call the [QueryLocationDateClusters](https://help.aliyun.com/document_detail/478189.html) operation to query the spatiotemporal clustering result.
       * *   Removing metadata from a dataset does not affect existing spatiotemporal clusters for the dataset. To delete a spatiotemporal cluster, call the [DeleteLocationDateCluster](https://help.aliyun.com/document_detail/478191.html) operation.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateLocationDateClusteringTaskRequest
       * @return CreateLocationDateClusteringTaskResponse
       */
      Models::CreateLocationDateClusteringTaskResponse createLocationDateClusteringTask(const Models::CreateLocationDateClusteringTaskRequest &request);

      /**
       * @summary Creates an asynchronous media transcoding task to provide audio and video file processing abilities, such as media transcoding, media splicing, video frame capturing, and video to GIF conversion.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   By default, only one type of video, audio, and subtitle streams is processed when you call this operation to process media transcoding. However, you can specify the number of video, audio, or subtitle streams that you want to process.
       * *   When you use this operation to execute a media merging task, up to 11 media files are supported. In this case, the parameters that involve media transcoding and frame capturing apply to the merged media data.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *     **
       *     ****
       *
       * @param tmpReq CreateMediaConvertTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMediaConvertTaskResponse
       */
      Models::CreateMediaConvertTaskResponse createMediaConvertTaskWithOptions(const Models::CreateMediaConvertTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous media transcoding task to provide audio and video file processing abilities, such as media transcoding, media splicing, video frame capturing, and video to GIF conversion.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   By default, only one type of video, audio, and subtitle streams is processed when you call this operation to process media transcoding. However, you can specify the number of video, audio, or subtitle streams that you want to process.
       * *   When you use this operation to execute a media merging task, up to 11 media files are supported. In this case, the parameters that involve media transcoding and frame capturing apply to the merged media data.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *     **
       *     ****
       *
       * @param request CreateMediaConvertTaskRequest
       * @return CreateMediaConvertTaskResponse
       */
      Models::CreateMediaConvertTaskResponse createMediaConvertTask(const Models::CreateMediaConvertTaskRequest &request);

      /**
       * @summary Creates a document format conversion task to convert the format of a document stored in an Object Storage Service (OSS) bucket.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation supports the following input formats:
       *     *   Text documents: doc, docx, wps, wpss, docm, dotm, dot, dotx, and html
       *     *   Presentation documents: pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss
       *     *   Spreadsheet documents: xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets
       *     *   PDF documents: pdf
       * *   The operation supports the following output formats:
       *     *   Image files: png and jpg
       *     *   Text files: txt
       *     *   PDF files: pdf
       * *   Each input document can be up to 200 MB in size.
       * *   The maximum conversion time is 120 seconds. If the document contains too much or complex content, the conversion may time out.
       * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can use one of the following methods to query task information:
       *     *   Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.``
       *     *   In the region in which the IMM project is located, configure a Simple Message Queue (SMQ) subscription to receive task information notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For information about SMQ SDKs, see [Use queues](https://help.aliyun.com/document_detail/32449.html).
       *     *   In the region in which the IMM project is located, create an ApsaraMQ for RocketMQ 4.0 instance, a topic, and a group to receive task notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For more information about how to use ApsaraMQ for RocketMQ, see [Call HTTP SDKs to send and subscribe to messages](https://help.aliyun.com/document_detail/169009.html).
       *     *   In the region in which the IMM project is located, use [EventBridge](https://www.alibabacloud.com/en/product/eventbridge) to receive task information notifications. For more information, see [IMM events](https://help.aliyun.com/document_detail/205730.html).
       *
       * @param tmpReq CreateOfficeConversionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOfficeConversionTaskResponse
       */
      Models::CreateOfficeConversionTaskResponse createOfficeConversionTaskWithOptions(const Models::CreateOfficeConversionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document format conversion task to convert the format of a document stored in an Object Storage Service (OSS) bucket.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The operation supports the following input formats:
       *     *   Text documents: doc, docx, wps, wpss, docm, dotm, dot, dotx, and html
       *     *   Presentation documents: pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss
       *     *   Spreadsheet documents: xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets
       *     *   PDF documents: pdf
       * *   The operation supports the following output formats:
       *     *   Image files: png and jpg
       *     *   Text files: txt
       *     *   PDF files: pdf
       * *   Each input document can be up to 200 MB in size.
       * *   The maximum conversion time is 120 seconds. If the document contains too much or complex content, the conversion may time out.
       * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can use one of the following methods to query task information:
       *     *   Call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.``
       *     *   In the region in which the IMM project is located, configure a Simple Message Queue (SMQ) subscription to receive task information notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For information about SMQ SDKs, see [Use queues](https://help.aliyun.com/document_detail/32449.html).
       *     *   In the region in which the IMM project is located, create an ApsaraMQ for RocketMQ 4.0 instance, a topic, and a group to receive task notifications. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html). For more information about how to use ApsaraMQ for RocketMQ, see [Call HTTP SDKs to send and subscribe to messages](https://help.aliyun.com/document_detail/169009.html).
       *     *   In the region in which the IMM project is located, use [EventBridge](https://www.alibabacloud.com/en/product/eventbridge) to receive task information notifications. For more information, see [IMM events](https://help.aliyun.com/document_detail/205730.html).
       *
       * @param request CreateOfficeConversionTaskRequest
       * @return CreateOfficeConversionTaskResponse
       */
      Models::CreateOfficeConversionTaskResponse createOfficeConversionTask(const Models::CreateOfficeConversionTaskRequest &request);

      /**
       * @summary Creates a project.
       *
       * @description *   The name of a project must be unique in a region.
       * *   By default, you can create up to 100 projects in a region. If you want to request a quota increase to create more projects, submit a ticket or join the DingTalk chat group (ID: 88490020073).
       * *   After you create a project, you can create other Intelligent Media Management (IMM) resources in the project. For more information, see the following links:
       *     *   [CreateDataset](https://help.aliyun.com/document_detail/478160.html)
       *     *   [CreateTrigger](https://help.aliyun.com/document_detail/479912.html)
       *     *   [CreateBatch](https://help.aliyun.com/document_detail/606694.html)
       *     *   [CreateBinding](https://help.aliyun.com/document_detail/478202.html)
       *
       * @param tmpReq CreateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a project.
       *
       * @description *   The name of a project must be unique in a region.
       * *   By default, you can create up to 100 projects in a region. If you want to request a quota increase to create more projects, submit a ticket or join the DingTalk chat group (ID: 88490020073).
       * *   After you create a project, you can create other Intelligent Media Management (IMM) resources in the project. For more information, see the following links:
       *     *   [CreateDataset](https://help.aliyun.com/document_detail/478160.html)
       *     *   [CreateTrigger](https://help.aliyun.com/document_detail/479912.html)
       *     *   [CreateBatch](https://help.aliyun.com/document_detail/606694.html)
       *     *   [CreateBinding](https://help.aliyun.com/document_detail/478202.html)
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Clusters images indexed into a dataset by similarity. Image clustering is suitable for image deduplication and selection. For example, you can use image clustering to filter photos in your album that are taken in continuous shooting mode.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note that** Asynchronous processing does not guarantee timely task completion.
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
       * *   After clustering is completed, you can call the [QuerySimilarImageClusters](https://help.aliyun.com/document_detail/611304.html) operation to query image clustering results.
       * *   An image cluster contains at lest two images. Removing similar images from the dataset affects existing image clusters. If image deletion reduces the number of images in a cluster to less than 2, the cluster is automatically deleted.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateSimilarImageClusteringTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimilarImageClusteringTaskResponse
       */
      Models::CreateSimilarImageClusteringTaskResponse createSimilarImageClusteringTaskWithOptions(const Models::CreateSimilarImageClusteringTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clusters images indexed into a dataset by similarity. Image clustering is suitable for image deduplication and selection. For example, you can use image clustering to filter photos in your album that are taken in continuous shooting mode.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note that** Asynchronous processing does not guarantee timely task completion.
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Each call to the operation incrementally processes metadata in the dataset.****`` You can regularly call this operation to process incremental files.
       * *   After clustering is completed, you can call the [QuerySimilarImageClusters](https://help.aliyun.com/document_detail/611304.html) operation to query image clustering results.
       * *   An image cluster contains at lest two images. Removing similar images from the dataset affects existing image clusters. If image deletion reduces the number of images in a cluster to less than 2, the cluster is automatically deleted.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateSimilarImageClusteringTaskRequest
       * @return CreateSimilarImageClusteringTaskResponse
       */
      Models::CreateSimilarImageClusteringTaskResponse createSimilarImageClusteringTask(const Models::CreateSimilarImageClusteringTaskRequest &request);

      /**
       * @summary Creates a story.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateStoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStoryResponse
       */
      Models::CreateStoryResponse createStoryWithOptions(const Models::CreateStoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a story.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The operation is an asynchronous operation. After a task is executed, the task information is saved only for seven days. When the retention period ends, the task information can no longer be retrieved. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) to query information about the task. If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateStoryRequest
       * @return CreateStoryResponse
       */
      Models::CreateStoryResponse createStory(const Models::CreateStoryRequest &request);

      /**
       * @summary Creates a trigger. A trigger can trigger Intelligent Media Management (IMM) based on events such as events in Object Storage Service (OSS) to process files, such as images, videos, and documents based on data processing templates.
       *
       * @description If you want to create a trigger to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param tmpReq CreateTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTriggerWithOptions(const Models::CreateTriggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trigger. A trigger can trigger Intelligent Media Management (IMM) based on events such as events in Object Storage Service (OSS) to process files, such as images, videos, and documents based on data processing templates.
       *
       * @description If you want to create a trigger to process data in [OSS](https://help.aliyun.com/document_detail/99372.html), make sure that you have bound the dataset to the OSS bucket where the data is stored. For more information about how to bind a dataset to a bucket, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param request CreateTriggerRequest
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTrigger(const Models::CreateTriggerRequest &request);

      /**
       * @summary Detects the scene, object, and event tag information of video content. Scene information includes categories such as natural landscapes, life scenes, and disaster scenes. Event information includes categories such as talent shows, office events, performances, and production events. Object information includes categories such as tableware, electronic products, furniture, and transportation. Video tag detection supports more than 30 tag categories and thousands of tags.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2747104.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   For more information about video label detection, see [Video label detection](https://help.aliyun.com/document_detail/477189.html).
       * *   This operation supports multiple video formats, such as MP4, MPEG-TS, MKV, MOV, AVI, FLV, and M3U8.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param tmpReq CreateVideoLabelClassificationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoLabelClassificationTaskResponse
       */
      Models::CreateVideoLabelClassificationTaskResponse createVideoLabelClassificationTaskWithOptions(const Models::CreateVideoLabelClassificationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects the scene, object, and event tag information of video content. Scene information includes categories such as natural landscapes, life scenes, and disaster scenes. Event information includes categories such as talent shows, office events, performances, and production events. Object information includes categories such as tableware, electronic products, furniture, and transportation. Video tag detection supports more than 30 tag categories and thousands of tags.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/2747104.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   For more information about video label detection, see [Video label detection](https://help.aliyun.com/document_detail/477189.html).
       * *   This operation supports multiple video formats, such as MP4, MPEG-TS, MKV, MOV, AVI, FLV, and M3U8.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications.
       *
       * @param request CreateVideoLabelClassificationTaskRequest
       * @return CreateVideoLabelClassificationTaskResponse
       */
      Models::CreateVideoLabelClassificationTaskResponse createVideoLabelClassificationTask(const Models::CreateVideoLabelClassificationTaskRequest &request);

      /**
       * @summary Detects risky or non-compliant content from videos. You can use this operation in scenarios such as intelligent pornography detection, terrorist content and political bias detection, ad violation detection, and logo detection.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The detection result is sent as an asynchronous notification. The Suggestion parameter in asynchronous notifications supports the following values:
       *     *   pass: No non-compliant content is found.
       *     *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance category. For more information, see [Content moderation results](https://help.aliyun.com/document_detail/2743995.html).
       *     *   review: A manual review is needed. After the manual review is completed, an asynchronous notification is sent to inform you about the result.
       * *   The following video frame requirements apply:
       *     *   The URLs for video frames must use HTTP or HTTPS.
       *     *   Video frames must be in PNG, JPG, JPEG, BMP, GIF, or WebP format.
       *     *   The size of a video frame cannot exceed 10 MB.
       *     *   The resolution for video frames is not lower than 256 × 256 pixels. A frame resolution lower than this recommended resolution may affect detection accuracy.
       *     *   The response time of the operation varies based on the amount of time required to download frames. Make sure that video frames to be detected are stored in a reliable and stable service. We recommend that you store video frames in OSS or cache video frames on Alibaba Cloud CDN.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
       *
       * @param tmpReq CreateVideoModerationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoModerationTaskResponse
       */
      Models::CreateVideoModerationTaskResponse createVideoModerationTaskWithOptions(const Models::CreateVideoModerationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects risky or non-compliant content from videos. You can use this operation in scenarios such as intelligent pornography detection, terrorist content and political bias detection, ad violation detection, and logo detection.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       *     **
       *     **Note** Asynchronous processing does not guarantee timely task completion.
       * *   The detection result is sent as an asynchronous notification. The Suggestion parameter in asynchronous notifications supports the following values:
       *     *   pass: No non-compliant content is found.
       *     *   block: Non-compliant content is detected. The Categories field value indicates the non-compliance category. For more information, see [Content moderation results](https://help.aliyun.com/document_detail/2743995.html).
       *     *   review: A manual review is needed. After the manual review is completed, an asynchronous notification is sent to inform you about the result.
       * *   The following video frame requirements apply:
       *     *   The URLs for video frames must use HTTP or HTTPS.
       *     *   Video frames must be in PNG, JPG, JPEG, BMP, GIF, or WebP format.
       *     *   The size of a video frame cannot exceed 10 MB.
       *     *   The resolution for video frames is not lower than 256 × 256 pixels. A frame resolution lower than this recommended resolution may affect detection accuracy.
       *     *   The response time of the operation varies based on the amount of time required to download frames. Make sure that video frames to be detected are stored in a reliable and stable service. We recommend that you store video frames in OSS or cache video frames on Alibaba Cloud CDN.
       * *   This operation is an asynchronous operation. After a task is executed, the task information is retained only for seven days and cannot be retrieved when the retention period elapses. You can call the [GetTask](https://help.aliyun.com/document_detail/478241.html) or [ListTasks](https://help.aliyun.com/document_detail/478242.html) operation to query information about the task.`` If you specify [Notification](https://help.aliyun.com/document_detail/2743997.html), you can obtain information about the task based on notifications. >
       *
       * @param request CreateVideoModerationTaskRequest
       * @return CreateVideoModerationTaskResponse
       */
      Models::CreateVideoModerationTaskResponse createVideoModerationTask(const Models::CreateVideoModerationTaskRequest &request);

      /**
       * @summary Deletes a batch processing task.
       *
       * @description *   You can delete only a batch processing task that is in one of the following states: Ready, Failed, Suspended, and Succeeded.
       * *   Before you delete a batch processing task, you can call the [GetBatch](https://help.aliyun.com/document_detail/479922.html) operation to query the task status. This ensures a successful deletion.
       *
       * @param request DeleteBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBatchResponse
       */
      Models::DeleteBatchResponse deleteBatchWithOptions(const Models::DeleteBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a batch processing task.
       *
       * @description *   You can delete only a batch processing task that is in one of the following states: Ready, Failed, Suspended, and Succeeded.
       * *   Before you delete a batch processing task, you can call the [GetBatch](https://help.aliyun.com/document_detail/479922.html) operation to query the task status. This ensures a successful deletion.
       *
       * @param request DeleteBatchRequest
       * @return DeleteBatchResponse
       */
      Models::DeleteBatchResponse deleteBatch(const Models::DeleteBatchRequest &request);

      /**
       * @summary Deletes the binding between a dataset and an Object Storage Service (OSS) bucket.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   If you delete a binding, new changes in the OSS bucket are not synchronized to the dataset. Exercise caution when you perform this operation.
       *
       * @param request DeleteBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBindingResponse
       */
      Models::DeleteBindingResponse deleteBindingWithOptions(const Models::DeleteBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the binding between a dataset and an Object Storage Service (OSS) bucket.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   If you delete a binding, new changes in the OSS bucket are not synchronized to the dataset. Exercise caution when you perform this operation.
       *
       * @param request DeleteBindingRequest
       * @return DeleteBindingResponse
       */
      Models::DeleteBindingResponse deleteBinding(const Models::DeleteBindingRequest &request);

      /**
       * @summary Deletes a dataset.
       *
       * @description *   Before you delete a dataset, make sure that you have deleted all indexes in the dataset. For more information about how to delete indexes, see [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) and [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html).
       * *   Before you [delete a dataset](https://help.aliyun.com/document_detail/478160.html), make sure that you have deleted all bindings between the dataset and Object Storage Service (OSS) buckets. For more information about how to delete a binding, see [DeleteBinding](https://help.aliyun.com/document_detail/478205.html). The [DeleteBinding](https://help.aliyun.com/document_detail/478205.html) operation does not delete an index that is manually created, even if you set the `Cleanup` parameter to `true`. To delete indexes that are manually created, you must call the [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) or [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html) operation. For more information about the differences between automatically and manually created indexes, see [Create a metadata index](https://help.aliyun.com/document_detail/478166.html).
       *
       * @param request DeleteDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const Models::DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset.
       *
       * @description *   Before you delete a dataset, make sure that you have deleted all indexes in the dataset. For more information about how to delete indexes, see [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) and [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html).
       * *   Before you [delete a dataset](https://help.aliyun.com/document_detail/478160.html), make sure that you have deleted all bindings between the dataset and Object Storage Service (OSS) buckets. For more information about how to delete a binding, see [DeleteBinding](https://help.aliyun.com/document_detail/478205.html). The [DeleteBinding](https://help.aliyun.com/document_detail/478205.html) operation does not delete an index that is manually created, even if you set the `Cleanup` parameter to `true`. To delete indexes that are manually created, you must call the [DeleteFileMeta](https://help.aliyun.com/document_detail/478172.html) or [BatchDeleteFileMeta](https://help.aliyun.com/document_detail/478173.html) operation. For more information about the differences between automatically and manually created indexes, see [Create a metadata index](https://help.aliyun.com/document_detail/478166.html).
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const Models::DeleteDatasetRequest &request);

      /**
       * @summary Removes the metadata of a file from a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
       * > 
       * *   The objects stored in Object Storage Service (OSS) or Photo and Drive Service are **not** deleted if you delete metadata from a dataset. If you want to delete the file, call the corresponding operations of OSS and Photo and Drive Service.
       * *   When you delete file metadata, the corresponding face clustering group information and story (if any) are changed, but the spatiotemporal clustering is not changed.
       *
       * @param request DeleteFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileMetaResponse
       */
      Models::DeleteFileMetaResponse deleteFileMetaWithOptions(const Models::DeleteFileMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the metadata of a file from a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   A successful deletion message is returned regardless of whether the metadata of the file exists in the dataset.
       * > 
       * *   The objects stored in Object Storage Service (OSS) or Photo and Drive Service are **not** deleted if you delete metadata from a dataset. If you want to delete the file, call the corresponding operations of OSS and Photo and Drive Service.
       * *   When you delete file metadata, the corresponding face clustering group information and story (if any) are changed, but the spatiotemporal clustering is not changed.
       *
       * @param request DeleteFileMetaRequest
       * @return DeleteFileMetaResponse
       */
      Models::DeleteFileMetaResponse deleteFileMeta(const Models::DeleteFileMetaRequest &request);

      /**
       * @summary Deletes a spatiotemporal cluster.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   Before you call this operation, you must call the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to perform spatiotemporal clustering.
       * *   A successful deletion is returned regardless of whether a spatiotemporal clustering group ID exists.
       *
       * @param request DeleteLocationDateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLocationDateClusterResponse
       */
      Models::DeleteLocationDateClusterResponse deleteLocationDateClusterWithOptions(const Models::DeleteLocationDateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a spatiotemporal cluster.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   Before you call this operation, you must call the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to perform spatiotemporal clustering.
       * *   A successful deletion is returned regardless of whether a spatiotemporal clustering group ID exists.
       *
       * @param request DeleteLocationDateClusterRequest
       * @return DeleteLocationDateClusterResponse
       */
      Models::DeleteLocationDateClusterResponse deleteLocationDateCluster(const Models::DeleteLocationDateClusterRequest &request);

      /**
       * @summary Deletes a project.
       *
       * @description *   Before you delete a project, make sure that all resources in the project, such as datasets, bindings, batch processing tasks, and triggers, are deleted. For more information, see [DeleteDataset](https://help.aliyun.com/document_detail/478164.html), [DeleteBatch](https://help.aliyun.com/document_detail/479918.html), and [DeleteTrigger](https://help.aliyun.com/document_detail/479915.html).
       * *   After a project is deleted, all resources used by the project are recycled, and all related data is lost and cannot be recovered.
       *
       * @param request DeleteProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const Models::DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a project.
       *
       * @description *   Before you delete a project, make sure that all resources in the project, such as datasets, bindings, batch processing tasks, and triggers, are deleted. For more information, see [DeleteDataset](https://help.aliyun.com/document_detail/478164.html), [DeleteBatch](https://help.aliyun.com/document_detail/479918.html), and [DeleteTrigger](https://help.aliyun.com/document_detail/479915.html).
       * *   After a project is deleted, all resources used by the project are recycled, and all related data is lost and cannot be recovered.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const Models::DeleteProjectRequest &request);

      /**
       * @summary Deletes a story.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
       *
       * @param request DeleteStoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStoryResponse
       */
      Models::DeleteStoryResponse deleteStoryWithOptions(const Models::DeleteStoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a story.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
       *
       * @param request DeleteStoryRequest
       * @return DeleteStoryResponse
       */
      Models::DeleteStoryResponse deleteStory(const Models::DeleteStoryRequest &request);

      /**
       * @summary Deletes a trigger.
       *
       * @description You can delete a trigger only if the trigger is in one of the following states: Ready, Failed, Suspended, and Succeeded. You cannot delete a trigger that is in the Running state.
       *
       * @param request DeleteTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTriggerWithOptions(const Models::DeleteTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a trigger.
       *
       * @description You can delete a trigger only if the trigger is in one of the following states: Ready, Failed, Suspended, and Succeeded. You cannot delete a trigger that is in the Running state.
       *
       * @param request DeleteTriggerRequest
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTrigger(const Models::DeleteTriggerRequest &request);

      /**
       * @summary Unbinds an Object Storage Service (OSS) bucket from the corresponding project.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that the project is bound to a bucket. For more information, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param request DetachOSSBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachOSSBucketResponse
       */
      Models::DetachOSSBucketResponse detachOSSBucketWithOptions(const Models::DetachOSSBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an Object Storage Service (OSS) bucket from the corresponding project.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that the project is bound to a bucket. For more information, see [AttachOSSBucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param request DetachOSSBucketRequest
       * @return DetachOSSBucketResponse
       */
      Models::DetachOSSBucketResponse detachOSSBucket(const Models::DetachOSSBucketRequest &request);

      /**
       * @summary Detects human body information, such as the confidence level and body bounding box, in an image.
       *
       * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param tmpReq DetectImageBodiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageBodiesResponse
       */
      Models::DetectImageBodiesResponse detectImageBodiesWithOptions(const Models::DetectImageBodiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects human body information, such as the confidence level and body bounding box, in an image.
       *
       * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param request DetectImageBodiesRequest
       * @return DetectImageBodiesResponse
       */
      Models::DetectImageBodiesResponse detectImageBodies(const Models::DetectImageBodiesRequest &request);

      /**
       * @summary Detects the outline data, attributes, and license plate information of vehicles in an image. The vehicle attributes include the vehicle color (CarColor) and vehicle type (CarType). The license plate information includes the recognition content (Content) and plate frame (Boundary).
       *
       * @description *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param tmpReq DetectImageCarsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageCarsResponse
       */
      Models::DetectImageCarsResponse detectImageCarsWithOptions(const Models::DetectImageCarsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects the outline data, attributes, and license plate information of vehicles in an image. The vehicle attributes include the vehicle color (CarColor) and vehicle type (CarType). The license plate information includes the recognition content (Content) and plate frame (Boundary).
       *
       * @description *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param request DetectImageCarsRequest
       * @return DetectImageCarsResponse
       */
      Models::DetectImageCarsResponse detectImageCars(const Models::DetectImageCarsRequest &request);

      /**
       * @summary Detects barcodes and QR codes in an image.
       *
       * @description *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param tmpReq DetectImageCodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageCodesResponse
       */
      Models::DetectImageCodesResponse detectImageCodesWithOptions(const Models::DetectImageCodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects barcodes and QR codes in an image.
       *
       * @description *   For information about the image encoding formats supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param request DetectImageCodesRequest
       * @return DetectImageCodesResponse
       */
      Models::DetectImageCodesResponse detectImageCodes(const Models::DetectImageCodesRequest &request);

      /**
       * @summary Detects the cropping area that produces the optimal visual effect based on a given image ratio by using AI model capabilities.
       *
       * @param tmpReq DetectImageCroppingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageCroppingResponse
       */
      Models::DetectImageCroppingResponse detectImageCroppingWithOptions(const Models::DetectImageCroppingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects the cropping area that produces the optimal visual effect based on a given image ratio by using AI model capabilities.
       *
       * @param request DetectImageCroppingRequest
       * @return DetectImageCroppingResponse
       */
      Models::DetectImageCroppingResponse detectImageCropping(const Models::DetectImageCroppingRequest &request);

      /**
       * @summary Detects faces from an image, including face boundary information, attributes, and quality. The boundary information includes the distance from the y-coordinate of the vertex to the top edge (Top), distance from the x-coordinate of the vertex to the left edge (Left), height (Height), and width (Width). Face attributes include the age (Age), age standard deviation (AgeSD), gender (Gender), emotion (Emotion), mouth opening (Mouth), beard (Beard), hat wearing (Hat), mask wearing (Mask), glasses wearing (Glasses), head orientation (HeadPose), attractiveness (Attractive), and confidence levels for preceding attributes. Quality information includes the face quality score (FaceQuality) and face resolution (Sharpness).
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param tmpReq DetectImageFacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageFacesResponse
       */
      Models::DetectImageFacesResponse detectImageFacesWithOptions(const Models::DetectImageFacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects faces from an image, including face boundary information, attributes, and quality. The boundary information includes the distance from the y-coordinate of the vertex to the top edge (Top), distance from the x-coordinate of the vertex to the left edge (Left), height (Height), and width (Width). Face attributes include the age (Age), age standard deviation (AgeSD), gender (Gender), emotion (Emotion), mouth opening (Mouth), beard (Beard), hat wearing (Hat), mask wearing (Mask), glasses wearing (Glasses), head orientation (HeadPose), attractiveness (Attractive), and confidence levels for preceding attributes. Quality information includes the face quality score (FaceQuality) and face resolution (Sharpness).
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param request DetectImageFacesRequest
       * @return DetectImageFacesResponse
       */
      Models::DetectImageFacesResponse detectImageFaces(const Models::DetectImageFacesRequest &request);

      /**
       * @summary Detects scene, object, and event information in an image. Scene information includes natural landscapes, daily life, and disasters. Event information includes talent shows, office events, performances, and production events. Object information includes tableware, electronics, furniture, and transportation. The DetectImageLabels operation supports more than 30 different categories and thousands of labels.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Make sure that an IMM [project](https://help.aliyun.com/document_detail/478273.html) is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   For more information about the features of this operation, see [Image label detection](https://help.aliyun.com/document_detail/477179.html).
       * *   For more information about the input images supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param tmpReq DetectImageLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageLabelsResponse
       */
      Models::DetectImageLabelsResponse detectImageLabelsWithOptions(const Models::DetectImageLabelsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects scene, object, and event information in an image. Scene information includes natural landscapes, daily life, and disasters. Event information includes talent shows, office events, performances, and production events. Object information includes tableware, electronics, furniture, and transportation. The DetectImageLabels operation supports more than 30 different categories and thousands of labels.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Make sure that an IMM [project](https://help.aliyun.com/document_detail/478273.html) is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   For more information about the features of this operation, see [Image label detection](https://help.aliyun.com/document_detail/477179.html).
       * *   For more information about the input images supported by this operation, see [Limits on images](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param request DetectImageLabelsRequest
       * @return DetectImageLabelsResponse
       */
      Models::DetectImageLabelsResponse detectImageLabels(const Models::DetectImageLabelsRequest &request);

      /**
       * @summary Calculates the aesthetics quality score of an image based on metrics such as the composition, brightness, contrast, color, and resolution. The operation returns a score within the range from 0 to 1. A higher score indicates better image quality.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478273.html).[](~~478152~~)
       * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param tmpReq DetectImageScoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageScoreResponse
       */
      Models::DetectImageScoreResponse detectImageScoreWithOptions(const Models::DetectImageScoreRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calculates the aesthetics quality score of an image based on metrics such as the composition, brightness, contrast, color, and resolution. The operation returns a score within the range from 0 to 1. A higher score indicates better image quality.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478273.html).[](~~478152~~)
       * *   For information about the image encoding formats supported by this operation, see [Limits](https://help.aliyun.com/document_detail/475569.html).
       *
       * @param request DetectImageScoreRequest
       * @return DetectImageScoreResponse
       */
      Models::DetectImageScoreResponse detectImageScore(const Models::DetectImageScoreRequest &request);

      /**
       * @summary Recognizes and extracts text content from an image.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   The size of the image cannot exceed 20 MB.
       * *   The shortest side of the image is not less than 20 px, and the longest side is not more than 30,000 px.
       * *   The aspect ratio of the image is less than 1:2.
       * *   We recommend that you do not use an image that is smaller than 15 px × 15 px in size. Otherwise, the recognition rate is low.
       *
       * @param tmpReq DetectImageTextsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectImageTextsResponse
       */
      Models::DetectImageTextsResponse detectImageTextsWithOptions(const Models::DetectImageTextsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recognizes and extracts text content from an image.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   The size of the image cannot exceed 20 MB.
       * *   The shortest side of the image is not less than 20 px, and the longest side is not more than 30,000 px.
       * *   The aspect ratio of the image is less than 1:2.
       * *   We recommend that you do not use an image that is smaller than 15 px × 15 px in size. Otherwise, the recognition rate is low.
       *
       * @param request DetectImageTextsRequest
       * @return DetectImageTextsResponse
       */
      Models::DetectImageTextsResponse detectImageTexts(const Models::DetectImageTextsRequest &request);

      /**
       * @summary Queries media metadata, including the media format and stream information.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       *
       * @param tmpReq DetectMediaMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectMediaMetaResponse
       */
      Models::DetectMediaMetaResponse detectMediaMetaWithOptions(const Models::DetectMediaMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries media metadata, including the media format and stream information.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478152.html).
       *
       * @param request DetectMediaMetaRequest
       * @return DetectMediaMetaResponse
       */
      Models::DetectMediaMetaResponse detectMediaMeta(const Models::DetectMediaMetaRequest &request);

      /**
       * @summary Detects whether specified text contains anomalies, such as pornography, advertisements, excessive junk content, politically sensitive content, and abuse.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * >  The text compliance detection feature only supports Chinese characters.
       *
       * @param request DetectTextAnomalyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectTextAnomalyResponse
       */
      Models::DetectTextAnomalyResponse detectTextAnomalyWithOptions(const Models::DetectTextAnomalyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects whether specified text contains anomalies, such as pornography, advertisements, excessive junk content, politically sensitive content, and abuse.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * >  The text compliance detection feature only supports Chinese characters.
       *
       * @param request DetectTextAnomalyRequest
       * @return DetectTextAnomalyResponse
       */
      Models::DetectTextAnomalyResponse detectTextAnomaly(const Models::DetectTextAnomalyRequest &request);

      /**
       * @summary Embeds specific textual information into an image as watermarks. These watermarks are visually imperceptible and do not affect the aesthetics of the image or the integrity of the original data. The watermarks can be extracted by using the CreateDecodeBlindWatermarkTask operation.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
       * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   You can embed only text as blind watermarks to an image.
       * *   The format of the output image is the same as that of the input image.
       * *   The watermarks can still be extracted even if attacks, such as compression, scaling, cropping, rotation, and color transformation, are performed on the image.
       * *   Pure black and white images and images with low resolution (roughly less than 200 px × 200 px,) are not supported.
       *
       * @param request EncodeBlindWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncodeBlindWatermarkResponse
       */
      Models::EncodeBlindWatermarkResponse encodeBlindWatermarkWithOptions(const Models::EncodeBlindWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Embeds specific textual information into an image as watermarks. These watermarks are visually imperceptible and do not affect the aesthetics of the image or the integrity of the original data. The watermarks can be extracted by using the CreateDecodeBlindWatermarkTask operation.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of Intelligent Media Management (IMM).
       * *   Make sure that an IMM project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   You can embed only text as blind watermarks to an image.
       * *   The format of the output image is the same as that of the input image.
       * *   The watermarks can still be extracted even if attacks, such as compression, scaling, cropping, rotation, and color transformation, are performed on the image.
       * *   Pure black and white images and images with low resolution (roughly less than 200 px × 200 px,) are not supported.
       *
       * @param request EncodeBlindWatermarkRequest
       * @return EncodeBlindWatermarkResponse
       */
      Models::EncodeBlindWatermarkResponse encodeBlindWatermark(const Models::EncodeBlindWatermarkRequest &request);

      /**
       * @summary Extracts the text from the document body.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).**
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478273.html).[](~~478152~~)
       * *   The following document formats are supported: Word, Excel, PPT, PDF, and TXT.
       * *   The document cannot exceed 200 MB in size. The size of the extracted text cannot exceed 2 MB in size (approximately 1.2 million letters).
       * >  If the format of the document is complex or the document body is too large, a timeout error may occur. In this case, we recommend that you call the CreateOfficeConversionTask operation to convert the document to the TXT format before you call the ExtractDocumentText operation.
       *
       * @param tmpReq ExtractDocumentTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExtractDocumentTextResponse
       */
      Models::ExtractDocumentTextResponse extractDocumentTextWithOptions(const Models::ExtractDocumentTextRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extracts the text from the document body.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).**
       * *   Make sure that the specified project exists in the current region. For more information, see [Project management](https://help.aliyun.com/document_detail/478273.html).[](~~478152~~)
       * *   The following document formats are supported: Word, Excel, PPT, PDF, and TXT.
       * *   The document cannot exceed 200 MB in size. The size of the extracted text cannot exceed 2 MB in size (approximately 1.2 million letters).
       * >  If the format of the document is complex or the document body is too large, a timeout error may occur. In this case, we recommend that you call the CreateOfficeConversionTask operation to convert the document to the TXT format before you call the ExtractDocumentText operation.
       *
       * @param request ExtractDocumentTextRequest
       * @return ExtractDocumentTextResponse
       */
      Models::ExtractDocumentTextResponse extractDocumentText(const Models::ExtractDocumentTextRequest &request);

      /**
       * @summary Queries the extracted file metadata, including the file name, labels, path, custom tags, text, and other fields. If the value of a metadata field of a file matches the specified string, the metadata of the file is returned.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 88490020073) and share your questions with us.
       * *   For information about the fields that you can use as query conditions, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
       *
       * @param tmpReq FuzzyQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FuzzyQueryResponse
       */
      Models::FuzzyQueryResponse fuzzyQueryWithOptions(const Models::FuzzyQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the extracted file metadata, including the file name, labels, path, custom tags, text, and other fields. If the value of a metadata field of a file matches the specified string, the metadata of the file is returned.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 88490020073) and share your questions with us.
       * *   For information about the fields that you can use as query conditions, see [Supported fields and operators](https://help.aliyun.com/document_detail/2743991.html).
       *
       * @param request FuzzyQueryRequest
       * @return FuzzyQueryResponse
       */
      Models::FuzzyQueryResponse fuzzyQuery(const Models::FuzzyQueryRequest &request);

      /**
       * @summary Generates a live transcoding playlist and converts video files into M3U8 files. After a playlist is generated, the videos in the playlist are immediately played and the video files are transcoded based on the playback progress. Compared with offline transcoding, online transcoding significantly reduces the time spent in waiting for the videos to be transcoded and reduces transcoding and storage costs.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).**
       * *   Make sure that the project that you want to use is available in the current region. For more information, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
       * *   By default, you can call this operation to process only one video, audio, or subtitle track. You can specify the number of the video, audio, or subtitle tracks that you want to process.
       * *   You can call this operation to generate a media playlist and a master playlist. For more information, see the parameter description.
       * *   This operation is a synchronous operation. Synchronous or asynchronous transcoding is triggered only during playback or pre-transcoding. You can configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to obtain the transcoding task result.
       * *   For information about the feature description of this operation, see [Live transcoding](https://help.aliyun.com/document_detail/477192.html).
       * *   The data processing capability of Object Storage Service (OSS) also provides the playlist generation feature. However, this feature can generate only a media playlist, and related parameters are simplified.
       *
       * @param tmpReq GenerateVideoPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateVideoPlaylistResponse
       */
      Models::GenerateVideoPlaylistResponse generateVideoPlaylistWithOptions(const Models::GenerateVideoPlaylistRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a live transcoding playlist and converts video files into M3U8 files. After a playlist is generated, the videos in the playlist are immediately played and the video files are transcoded based on the playback progress. Compared with offline transcoding, online transcoding significantly reduces the time spent in waiting for the videos to be transcoded and reduces transcoding and storage costs.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).**
       * *   Make sure that the project that you want to use is available in the current region. For more information, see [Project Management](https://help.aliyun.com/document_detail/478152.html).
       * *   By default, you can call this operation to process only one video, audio, or subtitle track. You can specify the number of the video, audio, or subtitle tracks that you want to process.
       * *   You can call this operation to generate a media playlist and a master playlist. For more information, see the parameter description.
       * *   This operation is a synchronous operation. Synchronous or asynchronous transcoding is triggered only during playback or pre-transcoding. You can configure the [Notification](https://help.aliyun.com/document_detail/2743997.html) parameter to obtain the transcoding task result.
       * *   For information about the feature description of this operation, see [Live transcoding](https://help.aliyun.com/document_detail/477192.html).
       * *   The data processing capability of Object Storage Service (OSS) also provides the playlist generation feature. However, this feature can generate only a media playlist, and related parameters are simplified.
       *
       * @param request GenerateVideoPlaylistRequest
       * @return GenerateVideoPlaylistResponse
       */
      Models::GenerateVideoPlaylistResponse generateVideoPlaylist(const Models::GenerateVideoPlaylistRequest &request);

      /**
       * @summary Generates an access token for document preview or editing.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   The operation generates an access token that is valid for 30 minutes and a refresh token that is valid for 1 day.
       * *   The returned expiration time is in UTC.
       * *   The operation supports the following document types:
       *     *   Word files: .doc, .docx, .txt, .dot, .wps, .wpt, .dotx, .docm, .dotm, and .rtf
       *     *   Presentation files: .ppt, .pptx, .pptm, .ppsx, .ppsm, .pps, .potx, .potm, .dpt, and .dps
       *     *   Spreadsheet documents: .et, .xls, .xlt, .xlsx, .xlsm, .xltx, .xltm, and .csv
       *     *   PDF files: .pdf
       * *   The operation supports an input document that is up to 200 MB in size.
       * *   The operation supports an input document that contains up to 5,000 pages.
       * *   For a project created before December 1, 2023, you are charged for previewing or editing a document in the project based on the number of times the document is opened. For a project created on or after December 1, 2023, you are charged based on the number of API operation calls made for previewing or editing a document. If you want to switch to API call-based billing for document previewing and editing, use a project created on or after December 1, 2023. In API call-based billing, one API call allows only one user to use the feature. If multiple users use the information returned by the API call, only the last user has access to the document and the access permissions of other users are revoked.
       * *   You can use the NotifyTopicName parameter to specify a Simple Message Queue (SMQ) topic in the same region as the IMM project for getting notified of file save operations. For more information about how to send and receive messages by using the SMQ SDK, see [Use queues](https://help.aliyun.com/document_detail/32449.html). For more information about the JSON example of the Message field, see [WebOffice message example](https://help.aliyun.com/document_detail/2743999.html).
       * >  To manage multiple versions of the document, you must enable versioning for the bucket that stores the document and set the History parameter to true.
       *
       * @param tmpReq GenerateWebofficeTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateWebofficeTokenResponse
       */
      Models::GenerateWebofficeTokenResponse generateWebofficeTokenWithOptions(const Models::GenerateWebofficeTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an access token for document preview or editing.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   The operation generates an access token that is valid for 30 minutes and a refresh token that is valid for 1 day.
       * *   The returned expiration time is in UTC.
       * *   The operation supports the following document types:
       *     *   Word files: .doc, .docx, .txt, .dot, .wps, .wpt, .dotx, .docm, .dotm, and .rtf
       *     *   Presentation files: .ppt, .pptx, .pptm, .ppsx, .ppsm, .pps, .potx, .potm, .dpt, and .dps
       *     *   Spreadsheet documents: .et, .xls, .xlt, .xlsx, .xlsm, .xltx, .xltm, and .csv
       *     *   PDF files: .pdf
       * *   The operation supports an input document that is up to 200 MB in size.
       * *   The operation supports an input document that contains up to 5,000 pages.
       * *   For a project created before December 1, 2023, you are charged for previewing or editing a document in the project based on the number of times the document is opened. For a project created on or after December 1, 2023, you are charged based on the number of API operation calls made for previewing or editing a document. If you want to switch to API call-based billing for document previewing and editing, use a project created on or after December 1, 2023. In API call-based billing, one API call allows only one user to use the feature. If multiple users use the information returned by the API call, only the last user has access to the document and the access permissions of other users are revoked.
       * *   You can use the NotifyTopicName parameter to specify a Simple Message Queue (SMQ) topic in the same region as the IMM project for getting notified of file save operations. For more information about how to send and receive messages by using the SMQ SDK, see [Use queues](https://help.aliyun.com/document_detail/32449.html). For more information about the JSON example of the Message field, see [WebOffice message example](https://help.aliyun.com/document_detail/2743999.html).
       * >  To manage multiple versions of the document, you must enable versioning for the bucket that stores the document and set the History parameter to true.
       *
       * @param request GenerateWebofficeTokenRequest
       * @return GenerateWebofficeTokenResponse
       */
      Models::GenerateWebofficeTokenResponse generateWebofficeToken(const Models::GenerateWebofficeTokenRequest &request);

      /**
       * @summary Queries the information about a batch processing task.
       *
       * @param request GetBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchResponse
       */
      Models::GetBatchResponse getBatchWithOptions(const Models::GetBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a batch processing task.
       *
       * @param request GetBatchRequest
       * @return GetBatchResponse
       */
      Models::GetBatchResponse getBatch(const Models::GetBatchRequest &request);

      /**
       * @summary Queries the binding relationship between a specific dataset and an Object Storage Service (OSS) bucket.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
       * *   Make sure that the binding relationship that you want to query exists. For information about how to create a binding relationship, see [CreateBinding](https://help.aliyun.com/document_detail/478202.html).
       *
       * @param request GetBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBindingResponse
       */
      Models::GetBindingResponse getBindingWithOptions(const Models::GetBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding relationship between a specific dataset and an Object Storage Service (OSS) bucket.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
       * *   Make sure that the binding relationship that you want to query exists. For information about how to create a binding relationship, see [CreateBinding](https://help.aliyun.com/document_detail/478202.html).
       *
       * @param request GetBindingRequest
       * @return GetBindingResponse
       */
      Models::GetBindingResponse getBinding(const Models::GetBindingRequest &request);

      /**
       * @deprecated OpenAPI GetDRMLicense is deprecated
       *
       * @summary drmlicense获取
       *
       * @param request GetDRMLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDRMLicenseResponse
       */
      Models::GetDRMLicenseResponse getDRMLicenseWithOptions(const Models::GetDRMLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetDRMLicense is deprecated
       *
       * @summary drmlicense获取
       *
       * @param request GetDRMLicenseRequest
       * @return GetDRMLicenseResponse
       */
      Models::GetDRMLicenseResponse getDRMLicense(const Models::GetDRMLicenseRequest &request);

      /**
       * @summary Queries a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   The GetDataset operation supports real-time retrieval of file statistics. You can specify WithStatistics to enable real-time retrieval of file statistics.
       *
       * @param request GetDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const Models::GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   The GetDataset operation supports real-time retrieval of file statistics. You can specify WithStatistics to enable real-time retrieval of file statistics.
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const Models::GetDatasetRequest &request);

      /**
       * @summary Queries the result of an invisible watermark parsing task.
       *
       * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   Before you call this operation, make sure that an invisible watermark task is created and the task ID is obtained.``
       *
       * @param request GetDecodeBlindWatermarkResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDecodeBlindWatermarkResultResponse
       */
      Models::GetDecodeBlindWatermarkResultResponse getDecodeBlindWatermarkResultWithOptions(const Models::GetDecodeBlindWatermarkResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of an invisible watermark parsing task.
       *
       * @description *   Before you call this operation, make sure that an Intelligent Media Management (IMM) project is created. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   Before you call this operation, make sure that an invisible watermark task is created and the task ID is obtained.``
       *
       * @param request GetDecodeBlindWatermarkResultRequest
       * @return GetDecodeBlindWatermarkResultResponse
       */
      Models::GetDecodeBlindWatermarkResultResponse getDecodeBlindWatermarkResult(const Models::GetDecodeBlindWatermarkResultRequest &request);

      /**
       * @summary Obtains basic information about face clustering, including the creation time, number of images, and cover.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
       * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
       *
       * @param request GetFigureClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFigureClusterResponse
       */
      Models::GetFigureClusterResponse getFigureClusterWithOptions(const Models::GetFigureClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains basic information about face clustering, including the creation time, number of images, and cover.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
       * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
       *
       * @param request GetFigureClusterRequest
       * @return GetFigureClusterResponse
       */
      Models::GetFigureClusterResponse getFigureCluster(const Models::GetFigureClusterRequest &request);

      /**
       * @summary Queries metadata of a file whose metadata is indexed into the dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
       *
       * @param tmpReq GetFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileMetaResponse
       */
      Models::GetFileMetaResponse getFileMetaWithOptions(const Models::GetFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metadata of a file whose metadata is indexed into the dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
       *
       * @param request GetFileMetaRequest
       * @return GetFileMetaResponse
       */
      Models::GetFileMetaResponse getFileMeta(const Models::GetFileMetaRequest &request);

      /**
       * @summary Queries an image compliance detection task.
       *
       * @param request GetImageModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageModerationResultResponse
       */
      Models::GetImageModerationResultResponse getImageModerationResultWithOptions(const Models::GetImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an image compliance detection task.
       *
       * @param request GetImageModerationResultRequest
       * @return GetImageModerationResultResponse
       */
      Models::GetImageModerationResultResponse getImageModerationResult(const Models::GetImageModerationResultRequest &request);

      /**
       * @summary Queries the name of the project bound to an Object Storage Service (OSS) bucket.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
       * *   Before you call this operation, make sure that [the project whose name you want to query is bound to the specified OSS bucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param request GetOSSBucketAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOSSBucketAttachmentResponse
       */
      Models::GetOSSBucketAttachmentResponse getOSSBucketAttachmentWithOptions(const Models::GetOSSBucketAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the name of the project bound to an Object Storage Service (OSS) bucket.
       *
       * @description *   **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**
       * *   Before you call this operation, make sure that [the project whose name you want to query is bound to the specified OSS bucket](https://help.aliyun.com/document_detail/478206.html).
       *
       * @param request GetOSSBucketAttachmentRequest
       * @return GetOSSBucketAttachmentResponse
       */
      Models::GetOSSBucketAttachmentResponse getOSSBucketAttachment(const Models::GetOSSBucketAttachmentRequest &request);

      /**
       * @summary Queries the basic information, datasets, and file statistics of a project.
       *
       * @description When you call this operation, you can enable the real-time retrieval of file statistics based on your business requirements. For more information, see the "Request parameters" section of this topic.
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information, datasets, and file statistics of a project.
       *
       * @description When you call this operation, you can enable the real-time retrieval of file statistics based on your business requirements. For more information, see the "Request parameters" section of this topic.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary Queries a story.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
       *
       * @param request GetStoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStoryResponse
       */
      Models::GetStoryResponse getStoryWithOptions(const Models::GetStoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a story.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
       *
       * @param request GetStoryRequest
       * @return GetStoryResponse
       */
      Models::GetStoryResponse getStory(const Models::GetStoryRequest &request);

      /**
       * @summary Queries information about an asynchronous task. Intelligent Media Management (IMM) has multiple asynchronous data processing capabilities, each of which has its own operation for creating tasks. For example, you can call the CreateFigureClusteringTask operation to create a face clustering task and the CreateFileCompressionTask operation to create a file compression task. The GetTask operation is a general operation. You can call this operation to query information about asynchronous tasks by task ID or type.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an asynchronous task. Intelligent Media Management (IMM) has multiple asynchronous data processing capabilities, each of which has its own operation for creating tasks. For example, you can call the CreateFigureClusteringTask operation to create a face clustering task and the CreateFileCompressionTask operation to create a file compression task. The GetTask operation is a general operation. You can call this operation to query information about asynchronous tasks by task ID or type.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Queries the information about a trigger.
       *
       * @param request GetTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTriggerResponse
       */
      Models::GetTriggerResponse getTriggerWithOptions(const Models::GetTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a trigger.
       *
       * @param request GetTriggerRequest
       * @return GetTriggerResponse
       */
      Models::GetTriggerResponse getTrigger(const Models::GetTriggerRequest &request);

      /**
       * @summary Queries the results of a video label detection task.
       *
       * @description *   Before you call this operation, make sure that a [project](https://help.aliyun.com/document_detail/478273.html) is created on Intelligent Media Management (IMM). For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   Before you call this operation, make sure that a video label detection task is created and the `TaskId` of the task is obtained. For more information, see [CreateVideoLabelClassificationTask](https://help.aliyun.com/document_detail/478223.html).
       *
       * @param request GetVideoLabelClassificationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoLabelClassificationResultResponse
       */
      Models::GetVideoLabelClassificationResultResponse getVideoLabelClassificationResultWithOptions(const Models::GetVideoLabelClassificationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a video label detection task.
       *
       * @description *   Before you call this operation, make sure that a [project](https://help.aliyun.com/document_detail/478273.html) is created on Intelligent Media Management (IMM). For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
       * *   Before you call this operation, make sure that a video label detection task is created and the `TaskId` of the task is obtained. For more information, see [CreateVideoLabelClassificationTask](https://help.aliyun.com/document_detail/478223.html).
       *
       * @param request GetVideoLabelClassificationResultRequest
       * @return GetVideoLabelClassificationResultResponse
       */
      Models::GetVideoLabelClassificationResultResponse getVideoLabelClassificationResult(const Models::GetVideoLabelClassificationResultRequest &request);

      /**
       * @summary 获取视频审核任务结果
       *
       * @param request GetVideoModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoModerationResultResponse
       */
      Models::GetVideoModerationResultResponse getVideoModerationResultWithOptions(const Models::GetVideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取视频审核任务结果
       *
       * @param request GetVideoModerationResultRequest
       * @return GetVideoModerationResultResponse
       */
      Models::GetVideoModerationResultResponse getVideoModerationResult(const Models::GetVideoModerationResultRequest &request);

      /**
       * @summary Creates an index from metadata extracted by using techniques such as label recognition, face detection, and location detection from input files. You can retrieve data from the same dataset by using multiple methods.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   For information about how to create indexes from metadata, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
       * *   For information about the limits on the maximum number and size of index files that you can create, see the "Limits on datasets" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic. For information about how to create a dataset, see the "CreateDataset" topic.
       * *   For information about the regions in which you can create index files from metadata, see the "Datasets and indexes" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
       * *   After you create an index from metadata, you can try [simple query](https://help.aliyun.com/document_detail/478175.html) to retrieve data. For information about other query capabilities, see [Query and statistics](https://help.aliyun.com/document_detail/2402363.html). You can also [create a face clustering task](https://help.aliyun.com/document_detail/478180.html) to group faces. For information about other clustering capabilities, see [Intelligent management](https://help.aliyun.com/document_detail/2402365.html).
       * **
       * **Usage notes**
       * *   The IndexFileMeta operation is asynchronous, indicating that it takes some time to process the data after a request is submitted. After the processing is complete, the metadata is stored in your dataset. The amount of time it takes for this process varies based on [the workflow template, the operator](https://help.aliyun.com/document_detail/466304.html), and the content of the file, ranging from several seconds to several minutes or even longer. You can subscribe to [Simple Message Service](https://help.aliyun.com/document_detail/2743997.html) for task completion notifications.
       *
       * @param tmpReq IndexFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IndexFileMetaResponse
       */
      Models::IndexFileMetaResponse indexFileMetaWithOptions(const Models::IndexFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an index from metadata extracted by using techniques such as label recognition, face detection, and location detection from input files. You can retrieve data from the same dataset by using multiple methods.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   For information about how to create indexes from metadata, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
       * *   For information about the limits on the maximum number and size of index files that you can create, see the "Limits on datasets" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic. For information about how to create a dataset, see the "CreateDataset" topic.
       * *   For information about the regions in which you can create index files from metadata, see the "Datasets and indexes" section of the [Limits](https://help.aliyun.com/document_detail/475569.html) topic.
       * *   After you create an index from metadata, you can try [simple query](https://help.aliyun.com/document_detail/478175.html) to retrieve data. For information about other query capabilities, see [Query and statistics](https://help.aliyun.com/document_detail/2402363.html). You can also [create a face clustering task](https://help.aliyun.com/document_detail/478180.html) to group faces. For information about other clustering capabilities, see [Intelligent management](https://help.aliyun.com/document_detail/2402365.html).
       * **
       * **Usage notes**
       * *   The IndexFileMeta operation is asynchronous, indicating that it takes some time to process the data after a request is submitted. After the processing is complete, the metadata is stored in your dataset. The amount of time it takes for this process varies based on [the workflow template, the operator](https://help.aliyun.com/document_detail/466304.html), and the content of the file, ranging from several seconds to several minutes or even longer. You can subscribe to [Simple Message Service](https://help.aliyun.com/document_detail/2743997.html) for task completion notifications.
       *
       * @param request IndexFileMetaRequest
       * @return IndexFileMetaResponse
       */
      Models::IndexFileMetaResponse indexFileMeta(const Models::IndexFileMetaRequest &request);

      /**
       * @summary Queries batch processing tasks. You can query batch processing tasks based on conditions such task tags and status. The results can be sorted.
       *
       * @param request ListBatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBatchesResponse
       */
      Models::ListBatchesResponse listBatchesWithOptions(const Models::ListBatchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries batch processing tasks. You can query batch processing tasks based on conditions such task tags and status. The results can be sorted.
       *
       * @param request ListBatchesRequest
       * @return ListBatchesResponse
       */
      Models::ListBatchesResponse listBatches(const Models::ListBatchesRequest &request);

      /**
       * @summary Queries bindings between a dataset and Object Storage Service (OSS) buckets.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
       *
       * @param request ListBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindingsResponse
       */
      Models::ListBindingsResponse listBindingsWithOptions(const Models::ListBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bindings between a dataset and Object Storage Service (OSS) buckets.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
       *
       * @param request ListBindingsRequest
       * @return ListBindingsResponse
       */
      Models::ListBindingsResponse listBindings(const Models::ListBindingsRequest &request);

      /**
       * @summary Queries a list of datasets. You can query the list by dataset prefix.
       *
       * @param request ListDatasetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const Models::ListDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of datasets. You can query the list by dataset prefix.
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const Models::ListDatasetsRequest &request);

      /**
       * @summary Queries projects. You can call this operation to query the basic information, datasets, and file statistics of multiple projects at the same time.
       *
       * @description The ListProjects operation supports pagination. When you call this operation, you must specify the token that is obtained from the previous query as the value of NextToken. You must also specify MaxResults to limit the number of entries to return.
       *
       * @param tmpReq ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries projects. You can call this operation to query the basic information, datasets, and file statistics of multiple projects at the same time.
       *
       * @description The ListProjects operation supports pagination. When you call this operation, you must specify the token that is obtained from the previous query as the value of NextToken. You must also specify MaxResults to limit the number of entries to return.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Queries the regions where Intelligent Media Management (IMM) is available and the supported languages.
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where Intelligent Media Management (IMM) is available and the supported languages.
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Lists tasks based on specific conditions, such as by time range and by tag.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
       *
       * @param tmpReq ListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists tasks based on specific conditions, such as by time range and by tag.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary Queries triggers by tag or status.
       *
       * @param request ListTriggersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTriggersResponse
       */
      Models::ListTriggersResponse listTriggersWithOptions(const Models::ListTriggersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries triggers by tag or status.
       *
       * @param request ListTriggersRequest
       * @return ListTriggersResponse
       */
      Models::ListTriggersResponse listTriggers(const Models::ListTriggersRequest &request);

      /**
       * @summary Queries face groups based on given conditions.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
       *
       * @param tmpReq QueryFigureClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFigureClustersResponse
       */
      Models::QueryFigureClustersResponse queryFigureClustersWithOptions(const Models::QueryFigureClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries face groups based on given conditions.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that a face clustering task is created to group all faces in a dataset. For information about how to create a face clustering task, see [CreateFigureClusteringTask](~~CreateFigureClusteringTask~~). For information about how to create a dataset, see [CreateDataset](~~CreateDataset~~).
       *
       * @param request QueryFigureClustersRequest
       * @return QueryFigureClustersResponse
       */
      Models::QueryFigureClustersResponse queryFigureClusters(const Models::QueryFigureClustersRequest &request);

      /**
       * @summary Queries a list of spatiotemporal clustering groups. Multiple conditions are supported. For more information, see the request parameters.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, you must call the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to perform spatiotemporal clustering.
       *
       * @param tmpReq QueryLocationDateClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLocationDateClustersResponse
       */
      Models::QueryLocationDateClustersResponse queryLocationDateClustersWithOptions(const Models::QueryLocationDateClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of spatiotemporal clustering groups. Multiple conditions are supported. For more information, see the request parameters.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, you must call the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to perform spatiotemporal clustering.
       *
       * @param request QueryLocationDateClustersRequest
       * @return QueryLocationDateClustersResponse
       */
      Models::QueryLocationDateClustersResponse queryLocationDateClusters(const Models::QueryLocationDateClustersRequest &request);

      /**
       * @summary You can call this operation to query the list of similar image clusters.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, you must call the [CreateSimilarImageClusteringTask](https://help.aliyun.com/document_detail/611302.html) operation to cluster similar images in the dataset.
       *
       * @param request QuerySimilarImageClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySimilarImageClustersResponse
       */
      Models::QuerySimilarImageClustersResponse querySimilarImageClustersWithOptions(const Models::QuerySimilarImageClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the list of similar image clusters.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, you must call the [CreateSimilarImageClusteringTask](https://help.aliyun.com/document_detail/611302.html) operation to cluster similar images in the dataset.
       *
       * @param request QuerySimilarImageClustersRequest
       * @return QuerySimilarImageClustersResponse
       */
      Models::QuerySimilarImageClustersResponse querySimilarImageClusters(const Models::QuerySimilarImageClustersRequest &request);

      /**
       * @summary Queries stories based on the specified conditions.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
       *
       * @param tmpReq QueryStoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStoriesResponse
       */
      Models::QueryStoriesResponse queryStoriesWithOptions(const Models::QueryStoriesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stories based on the specified conditions.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   Before you call this operation, make sure that you have called the [CreateStory](https://help.aliyun.com/document_detail/478193.html) or [CreateCustomizedStory](https://help.aliyun.com/document_detail/478196.html) operation to create a story.
       *
       * @param request QueryStoriesRequest
       * @return QueryStoriesResponse
       */
      Models::QueryStoriesResponse queryStories(const Models::QueryStoriesRequest &request);

      /**
       * @summary Refreshes the access credential of WebOffice. The access credential of WebOffice is valid for 30 minutes. After the credential expires, you cannot access Weboffice. To access Weboffice again, call this operation to obtain a new credential. The new credential is also valid for 30 minutes.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   For more information, see [WebOffice billing](https://help.aliyun.com/document_detail/2639703.html).
       * *   The access token returned by this operation is valid for 30 minutes. After the access token expires, you cannot use it to access the document.
       * *   The refresh token returned by this operation is valid for one day. You need to use the refresh token for the next call to the operation before the refresh token expires. After the validity period elapses, the refresh token is invalid.
       * *   The returned expiration time is displayed in UTC.
       * >  An access token is used to actually access a document, whereas a refresh token is used to avoid repeated access configurations.
       *
       * @param tmpReq RefreshWebofficeTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshWebofficeTokenResponse
       */
      Models::RefreshWebofficeTokenResponse refreshWebofficeTokenWithOptions(const Models::RefreshWebofficeTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the access credential of WebOffice. The access credential of WebOffice is valid for 30 minutes. After the credential expires, you cannot access Weboffice. To access Weboffice again, call this operation to obtain a new credential. The new credential is also valid for 30 minutes.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of IMM.****
       * *   For more information, see [WebOffice billing](https://help.aliyun.com/document_detail/2639703.html).
       * *   The access token returned by this operation is valid for 30 minutes. After the access token expires, you cannot use it to access the document.
       * *   The refresh token returned by this operation is valid for one day. You need to use the refresh token for the next call to the operation before the refresh token expires. After the validity period elapses, the refresh token is invalid.
       * *   The returned expiration time is displayed in UTC.
       * >  An access token is used to actually access a document, whereas a refresh token is used to avoid repeated access configurations.
       *
       * @param request RefreshWebofficeTokenRequest
       * @return RefreshWebofficeTokenResponse
       */
      Models::RefreshWebofficeTokenResponse refreshWebofficeToken(const Models::RefreshWebofficeTokenRequest &request);

      /**
       * @summary Deletes files from a story.
       *
       * @param tmpReq RemoveStoryFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveStoryFilesResponse
       */
      Models::RemoveStoryFilesResponse removeStoryFilesWithOptions(const Models::RemoveStoryFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes files from a story.
       *
       * @param request RemoveStoryFilesRequest
       * @return RemoveStoryFilesResponse
       */
      Models::RemoveStoryFilesResponse removeStoryFiles(const Models::RemoveStoryFilesRequest &request);

      /**
       * @summary Resumes a batch processing task that is in the Suspended or Failed state.
       *
       * @description You can resume a batch processing task only when the task is in the Suspended or Failed state. A batch processing task continues to provide services after you resume the task.
       *
       * @param request ResumeBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeBatchResponse
       */
      Models::ResumeBatchResponse resumeBatchWithOptions(const Models::ResumeBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a batch processing task that is in the Suspended or Failed state.
       *
       * @description You can resume a batch processing task only when the task is in the Suspended or Failed state. A batch processing task continues to provide services after you resume the task.
       *
       * @param request ResumeBatchRequest
       * @return ResumeBatchResponse
       */
      Models::ResumeBatchResponse resumeBatch(const Models::ResumeBatchRequest &request);

      /**
       * @summary Resumes a trigger that is in the Suspended or Failed state.
       *
       * @description You can resume only a trigger that is in the Suspended or Failed state. After you resume a trigger, the trigger continues to provide services as expected.
       *
       * @param request ResumeTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTriggerResponse
       */
      Models::ResumeTriggerResponse resumeTriggerWithOptions(const Models::ResumeTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a trigger that is in the Suspended or Failed state.
       *
       * @description You can resume only a trigger that is in the Suspended or Failed state. After you resume a trigger, the trigger continues to provide services as expected.
       *
       * @param request ResumeTriggerRequest
       * @return ResumeTriggerResponse
       */
      Models::ResumeTriggerResponse resumeTrigger(const Models::ResumeTriggerRequest &request);

      /**
       * @summary Queries face clusters that contain a specific face in an image. Each face cluster contains information such as bounding boxes and similarity.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have created a face clustering task by calling the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
       *
       * @param tmpReq SearchImageFigureClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageFigureClusterResponse
       */
      Models::SearchImageFigureClusterResponse searchImageFigureClusterWithOptions(const Models::SearchImageFigureClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries face clusters that contain a specific face in an image. Each face cluster contains information such as bounding boxes and similarity.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/88317.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have created a face clustering task by calling the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
       *
       * @param request SearchImageFigureClusterRequest
       * @return SearchImageFigureClusterResponse
       */
      Models::SearchImageFigureClusterResponse searchImageFigureCluster(const Models::SearchImageFigureClusterRequest &request);

      /**
       * @summary Queries metadata in a dataset by inputting natural language.
       *
       * @description ### [](#)Precautions
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**** Each time you call this operation, you are charged for semantic understanding and query fees.
       * *   Before you call this operation, make sure that the file that you want to use is indexed into the dataset that you use. To index a file into a dataset, you can call one of the following operations: [CreateBinding](https://help.aliyun.com/document_detail/478202.html), [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html), and [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
       * *   The response provided in this example is for reference only. The categories and content of metadata vary based on configurations of [workflow templates](https://help.aliyun.com/document_detail/466304.html). If you have questions, search for and join the DingTalk group numbered 21714099.
       * ### [](#)Usage limits
       * *   Each time you call this operation, up to 1,000 metadata files are returned.
       * *   Pagination is not supported.
       * *   The natural language processing capability may not always produce completely accurate results.
       * ### [](#)Usage methods
       * You can query files within a dataset by using natural language keywords. Key information supported for understanding includes labels (Labels.LabelName), time (ProduceTime), and location (Address.AddressLine). For example, if you use `2023 Hangzhou scenery` as the query criterion, the operation intelligently breaks the query criterion down into the following sub-criteria, and returns the files that meet all the sub-criteria:
       * *   ProduceTime: 00:00 on January 1, 2023 to 00:00 on December 31, 2023.
       * *   Address.AddressLine: `Hangzhou`
       * *   Labels.LabelName: `scenery`.
       * When you call this operation, you can configure a [workflow template](https://help.aliyun.com/document_detail/466304.html) that includes the `ImageEmbeddingExtraction` operator. This allows the operation to return image content when the query you input matches the image content, thereby achieving intelligent image retrieval.``
       *
       * @param tmpReq SemanticQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SemanticQueryResponse
       */
      Models::SemanticQueryResponse semanticQueryWithOptions(const Models::SemanticQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metadata in a dataset by inputting natural language.
       *
       * @description ### [](#)Precautions
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).**** Each time you call this operation, you are charged for semantic understanding and query fees.
       * *   Before you call this operation, make sure that the file that you want to use is indexed into the dataset that you use. To index a file into a dataset, you can call one of the following operations: [CreateBinding](https://help.aliyun.com/document_detail/478202.html), [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html), and [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html).
       * *   The response provided in this example is for reference only. The categories and content of metadata vary based on configurations of [workflow templates](https://help.aliyun.com/document_detail/466304.html). If you have questions, search for and join the DingTalk group numbered 21714099.
       * ### [](#)Usage limits
       * *   Each time you call this operation, up to 1,000 metadata files are returned.
       * *   Pagination is not supported.
       * *   The natural language processing capability may not always produce completely accurate results.
       * ### [](#)Usage methods
       * You can query files within a dataset by using natural language keywords. Key information supported for understanding includes labels (Labels.LabelName), time (ProduceTime), and location (Address.AddressLine). For example, if you use `2023 Hangzhou scenery` as the query criterion, the operation intelligently breaks the query criterion down into the following sub-criteria, and returns the files that meet all the sub-criteria:
       * *   ProduceTime: 00:00 on January 1, 2023 to 00:00 on December 31, 2023.
       * *   Address.AddressLine: `Hangzhou`
       * *   Labels.LabelName: `scenery`.
       * When you call this operation, you can configure a [workflow template](https://help.aliyun.com/document_detail/466304.html) that includes the `ImageEmbeddingExtraction` operator. This allows the operation to return image content when the query you input matches the image content, thereby achieving intelligent image retrieval.``
       *
       * @param request SemanticQueryRequest
       * @return SemanticQueryResponse
       */
      Models::SemanticQueryResponse semanticQuery(const Models::SemanticQueryRequest &request);

      /**
       * @summary Queries files in a dataset by performing a simple query operation. The operation supports logical expressions.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
       * **Limits**
       * *   Each query returns information about up to 100 files.
       * *   Each query returns up to 2,000 aggregations.
       * *   A subquery supports up to 100 conditions.
       * *   A subquery can have a maximum nesting depth of 5 levels.
       * **Example query conditions**
       * *   Retrieve JPEG images larger than 1,000 pixels:
       * <!---->
       *     {
       *       "SubQueries":[
       *         {
       *           "Field":"ContentType",
       *           "Value": "image/jpeg",
       *           "Operation":"eq"
       *         },         
       *         {
       *           "Field":"ImageWidth",
       *           "Value":"1000",
       *           "Operation":"gt"
       *         }
       *       ],
       *       "Operation":"and"
       *     }
       * *   Search `oss://examplebucket/path/` for objects that have the `TV` or `Stereo` label and are larger than 10 MB in size:
       * >  This query requires matching files to have the `TV` or `Stereo` label. The two labels are specified as separate objects in the `Labels` fields.
       * ```
       * {
       *   "SubQueries": [
       *     {
       *       "Field": "URI",
       *       "Value": "oss://examplebucket/path/",
       *       "Operation": "prefix"
       *     },
       *     {
       *       "Field": "Size",
       *       "Value": "1048576",
       *       "Operation": "gt"
       *     },
       *     {
       *       "SubQueries": [
       *         {
       *           "Field": "Labels.LabelName",
       *           "Value": "TV",
       *           "Operation": "eq"
       *         },
       *         {
       *           "Field": "Labels.LabelName",
       *           "Value": "Stereo",
       *           "Operation": "eq"
       *         }
       *       ],
       *       "Operation": "or"
       *     }
       *   ],
       *   "Operation": "and"
       * }
       *         
       * ```
       * *   Exclude images that contain a face of a male over the age of 36:
       * >  In this example query, an image will be excluded from the query results if it contains a face of a male over the age of 36. This query is different from excluding an image that contains a male face or a face of a person over the age of 36. In this query, you need to use the `nested` operator to specify that the conditions are met on the same element.
       *     {
       *     	"Operation": "not",
       *     	"SubQueries": [{
       *     		"Operation": "nested",
       *     		"SubQueries": [{
       *     			"Operation": "and",
       *     			"SubQueries": [{
       *     				"Field": "Figures.Age",
       *     				"Operation": "gt",
       *     				"Value": "36"
       *     			}, {
       *     				"Field": "Figures.Gender",
       *     				"Operation": "eq",
       *     				"Value": "male"
       *     			}]
       *     		}]
       *     	}]
       *     }
       * *   Query JPEG images that have both custom labels and system labels:
       * <!---->
       *     {
       *       "SubQueries":[
       *         {
       *           "Field":"ContentType",
       *           "Value": "image/jpeg",
       *           "Operation":"eq"
       *         },         
       *         {
       *           "Field":"CustomLabels.test",
       *           "Operation":"exist"
       *         },         
       *         {
       *           "Field":"Labels.LabelName",
       *           "Operation":"exist"
       *         }
       *       ],
       *       "Operation":"and"
       *     }
       * You can also perform aggregate operations to collect and analyze different data based on the specified conditions. For example, you can calculate the sum, count, average value, or maximum value of all files that meet the query conditions. You can also calculate the size distribution of images that meet the query conditions.
       *
       * @param tmpReq SimpleQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SimpleQueryResponse
       */
      Models::SimpleQueryResponse simpleQueryWithOptions(const Models::SimpleQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries files in a dataset by performing a simple query operation. The operation supports logical expressions.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have indexed file metadata into the dataset automatically by calling the [CreateBinding](https://help.aliyun.com/document_detail/478202.html) operation or manually by calling the [IndexFileMeta](https://help.aliyun.com/document_detail/478166.html) or [BatchIndexFileMeta](https://help.aliyun.com/document_detail/478167.html) operation.
       * *   The sample response is provided for reference only. The metadata type and content in your response may differ based on factors such as the [workflow template configurations](https://help.aliyun.com/document_detail/466304.html). For any inquiries, join the DingTalk chat group (ID: 31690030817) and share your questions with us.
       * **Limits**
       * *   Each query returns information about up to 100 files.
       * *   Each query returns up to 2,000 aggregations.
       * *   A subquery supports up to 100 conditions.
       * *   A subquery can have a maximum nesting depth of 5 levels.
       * **Example query conditions**
       * *   Retrieve JPEG images larger than 1,000 pixels:
       * <!---->
       *     {
       *       "SubQueries":[
       *         {
       *           "Field":"ContentType",
       *           "Value": "image/jpeg",
       *           "Operation":"eq"
       *         },         
       *         {
       *           "Field":"ImageWidth",
       *           "Value":"1000",
       *           "Operation":"gt"
       *         }
       *       ],
       *       "Operation":"and"
       *     }
       * *   Search `oss://examplebucket/path/` for objects that have the `TV` or `Stereo` label and are larger than 10 MB in size:
       * >  This query requires matching files to have the `TV` or `Stereo` label. The two labels are specified as separate objects in the `Labels` fields.
       * ```
       * {
       *   "SubQueries": [
       *     {
       *       "Field": "URI",
       *       "Value": "oss://examplebucket/path/",
       *       "Operation": "prefix"
       *     },
       *     {
       *       "Field": "Size",
       *       "Value": "1048576",
       *       "Operation": "gt"
       *     },
       *     {
       *       "SubQueries": [
       *         {
       *           "Field": "Labels.LabelName",
       *           "Value": "TV",
       *           "Operation": "eq"
       *         },
       *         {
       *           "Field": "Labels.LabelName",
       *           "Value": "Stereo",
       *           "Operation": "eq"
       *         }
       *       ],
       *       "Operation": "or"
       *     }
       *   ],
       *   "Operation": "and"
       * }
       *         
       * ```
       * *   Exclude images that contain a face of a male over the age of 36:
       * >  In this example query, an image will be excluded from the query results if it contains a face of a male over the age of 36. This query is different from excluding an image that contains a male face or a face of a person over the age of 36. In this query, you need to use the `nested` operator to specify that the conditions are met on the same element.
       *     {
       *     	"Operation": "not",
       *     	"SubQueries": [{
       *     		"Operation": "nested",
       *     		"SubQueries": [{
       *     			"Operation": "and",
       *     			"SubQueries": [{
       *     				"Field": "Figures.Age",
       *     				"Operation": "gt",
       *     				"Value": "36"
       *     			}, {
       *     				"Field": "Figures.Gender",
       *     				"Operation": "eq",
       *     				"Value": "male"
       *     			}]
       *     		}]
       *     	}]
       *     }
       * *   Query JPEG images that have both custom labels and system labels:
       * <!---->
       *     {
       *       "SubQueries":[
       *         {
       *           "Field":"ContentType",
       *           "Value": "image/jpeg",
       *           "Operation":"eq"
       *         },         
       *         {
       *           "Field":"CustomLabels.test",
       *           "Operation":"exist"
       *         },         
       *         {
       *           "Field":"Labels.LabelName",
       *           "Operation":"exist"
       *         }
       *       ],
       *       "Operation":"and"
       *     }
       * You can also perform aggregate operations to collect and analyze different data based on the specified conditions. For example, you can calculate the sum, count, average value, or maximum value of all files that meet the query conditions. You can also calculate the size distribution of images that meet the query conditions.
       *
       * @param request SimpleQueryRequest
       * @return SimpleQueryResponse
       */
      Models::SimpleQueryResponse simpleQuery(const Models::SimpleQueryRequest &request);

      /**
       * @summary Suspends a batch processing task.
       *
       * @description You can suspend a batch processing task that is in the Running state. You can call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume a batch processing task that is suspended.
       *
       * @param request SuspendBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendBatchResponse
       */
      Models::SuspendBatchResponse suspendBatchWithOptions(const Models::SuspendBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a batch processing task.
       *
       * @description You can suspend a batch processing task that is in the Running state. You can call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume a batch processing task that is suspended.
       *
       * @param request SuspendBatchRequest
       * @return SuspendBatchResponse
       */
      Models::SuspendBatchResponse suspendBatch(const Models::SuspendBatchRequest &request);

      /**
       * @summary Suspends a running trigger.
       *
       * @description The operation can be used to suspend a trigger only in the Running state. If you want to resume a suspended trigger, call the [ResumeTrigger](https://help.aliyun.com/document_detail/479919.html) operation.
       *
       * @param request SuspendTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendTriggerResponse
       */
      Models::SuspendTriggerResponse suspendTriggerWithOptions(const Models::SuspendTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a running trigger.
       *
       * @description The operation can be used to suspend a trigger only in the Running state. If you want to resume a suspended trigger, call the [ResumeTrigger](https://help.aliyun.com/document_detail/479919.html) operation.
       *
       * @param request SuspendTriggerRequest
       * @return SuspendTriggerResponse
       */
      Models::SuspendTriggerResponse suspendTrigger(const Models::SuspendTriggerRequest &request);

      /**
       * @summary Updates information about a batch processing task, including the input data source, data processing settings, and tags.
       *
       * @description *   You can update only a batch processing task that is in the Ready or Failed state. The update operation does not change the status of the batch processing task.
       * *   If you update a batch processing task that is in progress, the task is not automatically resumed after the update is complete. You must call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume the task.
       *
       * @param tmpReq UpdateBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBatchResponse
       */
      Models::UpdateBatchResponse updateBatchWithOptions(const Models::UpdateBatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a batch processing task, including the input data source, data processing settings, and tags.
       *
       * @description *   You can update only a batch processing task that is in the Ready or Failed state. The update operation does not change the status of the batch processing task.
       * *   If you update a batch processing task that is in progress, the task is not automatically resumed after the update is complete. You must call the [ResumeBatch](https://help.aliyun.com/document_detail/479914.html) operation to resume the task.
       *
       * @param request UpdateBatchRequest
       * @return UpdateBatchResponse
       */
      Models::UpdateBatchResponse updateBatch(const Models::UpdateBatchRequest &request);

      /**
       * @summary Updates a dataset.
       *
       * @param tmpReq UpdateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const Models::UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dataset.
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const Models::UpdateDatasetRequest &request);

      /**
       * @summary Updates information about a face cluster, such as the cluster name and labels.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
       * *   The operation updates only the cover image, cluster name, and tags.
       * *   After the operation is successful, you can call the [GetFigureCluster](https://help.aliyun.com/document_detail/478182.html) or [BatchGetFigureCluster](https://help.aliyun.com/document_detail/2248450.html) operation to query the updated cluster.
       *
       * @param tmpReq UpdateFigureClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFigureClusterResponse
       */
      Models::UpdateFigureClusterResponse updateFigureClusterWithOptions(const Models::UpdateFigureClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a face cluster, such as the cluster name and labels.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have called the [CreateFigureClusteringTask](https://help.aliyun.com/document_detail/478180.html) operation to cluster all faces in the dataset.
       * *   The operation updates only the cover image, cluster name, and tags.
       * *   After the operation is successful, you can call the [GetFigureCluster](https://help.aliyun.com/document_detail/478182.html) or [BatchGetFigureCluster](https://help.aliyun.com/document_detail/2248450.html) operation to query the updated cluster.
       *
       * @param request UpdateFigureClusterRequest
       * @return UpdateFigureClusterResponse
       */
      Models::UpdateFigureClusterResponse updateFigureCluster(const Models::UpdateFigureClusterRequest &request);

      /**
       * @summary Updates the partial metadata of the indexed files in a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   You cannot call this operation to update all metadata. You can update only metadata specified by CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
       *
       * @param tmpReq UpdateFileMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileMetaResponse
       */
      Models::UpdateFileMetaResponse updateFileMetaWithOptions(const Models::UpdateFileMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the partial metadata of the indexed files in a dataset.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   You cannot call this operation to update all metadata. You can update only metadata specified by CustomLabels, CustomId, and Figures. For more information, see the "Request parameters" section of this topic.
       *
       * @param request UpdateFileMetaRequest
       * @return UpdateFileMetaResponse
       */
      Models::UpdateFileMetaResponse updateFileMeta(const Models::UpdateFileMetaRequest &request);

      /**
       * @summary Updates a spatiotemporal cluster.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have called the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to create spatiotemporal clusters in the project.
       *
       * @param tmpReq UpdateLocationDateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLocationDateClusterResponse
       */
      Models::UpdateLocationDateClusterResponse updateLocationDateClusterWithOptions(const Models::UpdateLocationDateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a spatiotemporal cluster.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/477042.html) of Intelligent Media Management (IMM).****
       * *   Before you call this operation, make sure that you have called the [CreateLocationDateClusteringTask](https://help.aliyun.com/document_detail/478188.html) operation to create spatiotemporal clusters in the project.
       *
       * @param request UpdateLocationDateClusterRequest
       * @return UpdateLocationDateClusterResponse
       */
      Models::UpdateLocationDateClusterResponse updateLocationDateCluster(const Models::UpdateLocationDateClusterRequest &request);

      /**
       * @summary Updates information about a project.
       *
       * @description *   Before you call this operation, make sure that the project exists. For information about how to create a project, see "CreateProject".
       * *   When you call this operation, you need to specify only the parameters that you want to update. The parameters that you do not specify remain unchanged after you call this operation.
       * *   Wait for up to 5 minutes for the update to take effect.
       *
       * @param tmpReq UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a project.
       *
       * @description *   Before you call this operation, make sure that the project exists. For information about how to create a project, see "CreateProject".
       * *   When you call this operation, you need to specify only the parameters that you want to update. The parameters that you do not specify remain unchanged after you call this operation.
       * *   Wait for up to 5 minutes for the update to take effect.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);

      /**
       * @summary Updates the information about a story, such as the story name and cover image.
       *
       * @param tmpReq UpdateStoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStoryResponse
       */
      Models::UpdateStoryResponse updateStoryWithOptions(const Models::UpdateStoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a story, such as the story name and cover image.
       *
       * @param request UpdateStoryRequest
       * @return UpdateStoryResponse
       */
      Models::UpdateStoryResponse updateStory(const Models::UpdateStoryRequest &request);

      /**
       * @summary Updates information about a trigger, such as the input data source, data processing settings, and tags.
       *
       * @description *   You can update only a trigger that is in the Ready or Failed state. The update operation does not change the trigger status.
       * *   After you update a trigger, the uncompleted tasks under the original trigger are no longer executed. You can call the [ResumeTrigger](https://help.aliyun.com/document_detail/479916.html) operation to resume the execution of the trigger.
       *
       * @param tmpReq UpdateTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTriggerResponse
       */
      Models::UpdateTriggerResponse updateTriggerWithOptions(const Models::UpdateTriggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information about a trigger, such as the input data source, data processing settings, and tags.
       *
       * @description *   You can update only a trigger that is in the Ready or Failed state. The update operation does not change the trigger status.
       * *   After you update a trigger, the uncompleted tasks under the original trigger are no longer executed. You can call the [ResumeTrigger](https://help.aliyun.com/document_detail/479916.html) operation to resume the execution of the trigger.
       *
       * @param request UpdateTriggerRequest
       * @return UpdateTriggerResponse
       */
      Models::UpdateTriggerResponse updateTrigger(const Models::UpdateTriggerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
