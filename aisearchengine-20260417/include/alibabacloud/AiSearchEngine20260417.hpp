// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AISEARCHENGINE20260417_HPP_
#define ALIBABACLOUD_AISEARCHENGINE20260417_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AiSearchEngine20260417Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AiSearchEngine20260417.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Provides a search API operation for the CleverSee AI Search platform. After you create a search application on the platform, you can invoke this search API operation to retrieve images, documents, and audio/video content in datasets. The platform supports text (natural language), image, or combined text-and-image input, enabling fast adaptation to multi-modal large-scale data search scenarios and helping you efficiently locate target content.
       *
       * @description ## Operation description
       * This operation supports calling two types of search applications on the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search): **image search applications** (text-to-image, image-to-image, and combined text-and-image search) and **audio/video search applications** (text-to-audio/video, image-to-video, and combined text-and-image-to-video search).
       * ### Data sources
       * Audio and video data is supported. You can upload and update data through the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search) UI or through the [Dataset Data Add/Update API](https://www.alibabacloud.com/help/en/document_detail/3038471.html).
       * # Authentication
       * Call the CleverSee - Intelligent Search service by using the Alibaba Cloud SDK. For more information, see [AI search engine operation](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/EngineSearch).
       *
       * @param request EngineSearchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EngineSearchResponse
       */
      Models::EngineSearchResponse engineSearchWithOptions(const Models::EngineSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides a search API operation for the CleverSee AI Search platform. After you create a search application on the platform, you can invoke this search API operation to retrieve images, documents, and audio/video content in datasets. The platform supports text (natural language), image, or combined text-and-image input, enabling fast adaptation to multi-modal large-scale data search scenarios and helping you efficiently locate target content.
       *
       * @description ## Operation description
       * This operation supports calling two types of search applications on the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search): **image search applications** (text-to-image, image-to-image, and combined text-and-image search) and **audio/video search applications** (text-to-audio/video, image-to-video, and combined text-and-image-to-video search).
       * ### Data sources
       * Audio and video data is supported. You can upload and update data through the [CleverSee AI Search platform](https://aisearch.aliyun.com/web-search) UI or through the [Dataset Data Add/Update API](https://www.alibabacloud.com/help/en/document_detail/3038471.html).
       * # Authentication
       * Call the CleverSee - Intelligent Search service by using the Alibaba Cloud SDK. For more information, see [AI search engine operation](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/EngineSearch).
       *
       * @param request EngineSearchRequest
       * @return EngineSearchResponse
       */
      Models::EngineSearchResponse engineSearch(const Models::EngineSearchRequest &request);

      /**
       * @summary Retrieves a temporary public network access URL for an image, audio, or video resource in your dataset.
       *
       * @description Retrieves a temporary secure access URL for an underlying media resource (such as audio, video, or image) stored in AI Search Platform, based on the dataset ID and data primary key. The URL can be used directly for frontend display or download.
       * Key use case: When you make a Search API call for a search application created in AI Search Platform, the returned image, audio, and video result URLs are pre-signed links with a validity period of 24 hours. If your application persists these URLs in local storage, subsequent access may fail because the URLs have expired. In this case, invoke this operation with the corresponding dataset ID and data record primary key to retrieve the latest valid access URL for the resource.
       *
       * @param request GetDatasetResourceUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResourceUrlResponse
       */
      Models::GetDatasetResourceUrlResponse getDatasetResourceUrlWithOptions(const Models::GetDatasetResourceUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a temporary public network access URL for an image, audio, or video resource in your dataset.
       *
       * @description Retrieves a temporary secure access URL for an underlying media resource (such as audio, video, or image) stored in AI Search Platform, based on the dataset ID and data primary key. The URL can be used directly for frontend display or download.
       * Key use case: When you make a Search API call for a search application created in AI Search Platform, the returned image, audio, and video result URLs are pre-signed links with a validity period of 24 hours. If your application persists these URLs in local storage, subsequent access may fail because the URLs have expired. In this case, invoke this operation with the corresponding dataset ID and data record primary key to retrieve the latest valid access URL for the resource.
       *
       * @param request GetDatasetResourceUrlRequest
       * @return GetDatasetResourceUrlResponse
       */
      Models::GetDatasetResourceUrlResponse getDatasetResourceUrl(const Models::GetDatasetResourceUrlRequest &request);

      /**
       * @summary Adds or updates data in a specific dataset in real time. The system matches records based on the primary key value of the target dataset and the primary key value of the new data record (such as "pk_id" = "2026aa01"). If a matching primary key value is found, the corresponding data record is updated. If no match is found, a new data record is added.
       *
       * @description **Common scenarios**
       * | Scenario | Description |
       * | --- | --- |
       * | Real-time data addition | Pushes new data to the AI search platform in real time when the business system generates new data. |
       * | Status update | Promptly updates data when changes occur on the business side, such as title modifications or delisting. |
       * **Before you begin**
       * - **Primary key handling**: The system determines whether to add or update a record based on the primary key type (user-defined or system-generated) of the target dataset.
       * - **Batch limit**: A maximum of 100 records can be processed per request.
       * - **Schema matching**: The `records` field must strictly follow the schema configured for the target dataset in the console.
       * - **Permission requirements**: Make sure you have sufficient permissions to write to or update the target dataset.
       * - **Status check**: Before sending a request, confirm that the target dataset is in a writable state and not in read-only mode.
       *
       * @param request ImportDatasetDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportDatasetDataResponse
       */
      Models::ImportDatasetDataResponse importDatasetDataWithOptions(const Models::ImportDatasetDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or updates data in a specific dataset in real time. The system matches records based on the primary key value of the target dataset and the primary key value of the new data record (such as "pk_id" = "2026aa01"). If a matching primary key value is found, the corresponding data record is updated. If no match is found, a new data record is added.
       *
       * @description **Common scenarios**
       * | Scenario | Description |
       * | --- | --- |
       * | Real-time data addition | Pushes new data to the AI search platform in real time when the business system generates new data. |
       * | Status update | Promptly updates data when changes occur on the business side, such as title modifications or delisting. |
       * **Before you begin**
       * - **Primary key handling**: The system determines whether to add or update a record based on the primary key type (user-defined or system-generated) of the target dataset.
       * - **Batch limit**: A maximum of 100 records can be processed per request.
       * - **Schema matching**: The `records` field must strictly follow the schema configured for the target dataset in the console.
       * - **Permission requirements**: Make sure you have sufficient permissions to write to or update the target dataset.
       * - **Status check**: Before sending a request, confirm that the target dataset is in a writable state and not in read-only mode.
       *
       * @param request ImportDatasetDataRequest
       * @return ImportDatasetDataResponse
       */
      Models::ImportDatasetDataResponse importDatasetData(const Models::ImportDatasetDataRequest &request);

      /**
       * @summary Build Q&A applications leveraging powerful omni-modal search and comprehension capabilities on the CleverSee AI Search Platform, enabling deep understanding and precise Q&A over images, documents, and video content in datasets. The platform supports flexible customization of the Q&A assistant\\"s response style and interaction mode, allowing rapid adaptation to diverse large-scale data Q&A scenarios. Users can ask questions via text, images, or a combination of both, and the platform performs deep semantic understanding across the complete dataset, producing answers in multiple formats including text, images, and video. For video content, the platform also provides template-based output capabilities for generating customized content summaries, information extraction, and video scripts.
       *
       * @description Streaming API for [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) intelligent Q&A applications, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
       * ### Integration Guide:
       * Streaming API for intelligent Q&A, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
       * ### Data Sources:
       * Supports video Q&A. Data can be uploaded and updated through the [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) product interface or via the [Dataset Data Add/Update API](https://help.aliyun.com/zh/document_detail/3038471.html?spm=a2c4g.11186623.help-menu-3037946.d_0_2_1_0.54ed1e97NGXVV1&scm=20140722.H_3038471._.OR_help-T_cn~zh-V_1).
       * # Authentication
       * Call the CleverSee - Intelligent Q&A service through the Alibaba Cloud SDK. For the detailed calling guide, please refer to: [AI Q&A Engine API](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/QaChat)
       *
       * @param request QaChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QaChatResponse
       */
      FutureGenerator<Models::QaChatResponse> qaChatWithSSE(const Models::QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Build Q&A applications leveraging powerful omni-modal search and comprehension capabilities on the CleverSee AI Search Platform, enabling deep understanding and precise Q&A over images, documents, and video content in datasets. The platform supports flexible customization of the Q&A assistant\\"s response style and interaction mode, allowing rapid adaptation to diverse large-scale data Q&A scenarios. Users can ask questions via text, images, or a combination of both, and the platform performs deep semantic understanding across the complete dataset, producing answers in multiple formats including text, images, and video. For video content, the platform also provides template-based output capabilities for generating customized content summaries, information extraction, and video scripts.
       *
       * @description Streaming API for [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) intelligent Q&A applications, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
       * ### Integration Guide:
       * Streaming API for intelligent Q&A, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
       * ### Data Sources:
       * Supports video Q&A. Data can be uploaded and updated through the [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) product interface or via the [Dataset Data Add/Update API](https://help.aliyun.com/zh/document_detail/3038471.html?spm=a2c4g.11186623.help-menu-3037946.d_0_2_1_0.54ed1e97NGXVV1&scm=20140722.H_3038471._.OR_help-T_cn~zh-V_1).
       * # Authentication
       * Call the CleverSee - Intelligent Q&A service through the Alibaba Cloud SDK. For the detailed calling guide, please refer to: [AI Q&A Engine API](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/QaChat)
       *
       * @param request QaChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QaChatResponse
       */
      Models::QaChatResponse qaChatWithOptions(const Models::QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Build Q&A applications leveraging powerful omni-modal search and comprehension capabilities on the CleverSee AI Search Platform, enabling deep understanding and precise Q&A over images, documents, and video content in datasets. The platform supports flexible customization of the Q&A assistant\\"s response style and interaction mode, allowing rapid adaptation to diverse large-scale data Q&A scenarios. Users can ask questions via text, images, or a combination of both, and the platform performs deep semantic understanding across the complete dataset, producing answers in multiple formats including text, images, and video. For video content, the platform also provides template-based output capabilities for generating customized content summaries, information extraction, and video scripts.
       *
       * @description Streaming API for [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) intelligent Q&A applications, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
       * ### Integration Guide:
       * Streaming API for intelligent Q&A, supporting multimodal input (text, images, structured data) and streaming output (text, images, video, sources, etc.). The API uses the SSE (Server-Sent Events) protocol to push response data, where each data stream is a JSON object with different data types identified by the `type` field.
       * ### Data Sources:
       * Supports video Q&A. Data can be uploaded and updated through the [CleverSee AI Search Platform](https://aisearch.aliyun.com/web-search) product interface or via the [Dataset Data Add/Update API](https://help.aliyun.com/zh/document_detail/3038471.html?spm=a2c4g.11186623.help-menu-3037946.d_0_2_1_0.54ed1e97NGXVV1&scm=20140722.H_3038471._.OR_help-T_cn~zh-V_1).
       * # Authentication
       * Call the CleverSee - Intelligent Q&A service through the Alibaba Cloud SDK. For the detailed calling guide, please refer to: [AI Q&A Engine API](https://api.aliyun.com/document/AiSearchEngine/2026-04-17/QaChat)
       *
       * @param request QaChatRequest
       * @return QaChatResponse
       */
      Models::QaChatResponse qaChat(const Models::QaChatRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
