// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IMAGESEARCH20201214_HPP_
#define ALIBABACLOUD_IMAGESEARCH20201214_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ImageSearch20201214Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/ImageSearch20201214.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Describes the syntax and provides examples of the AddImage operation, which adds image information to an Image Search instance.
       *
       * @description ## Description
       * This operation adds image information to an Image Search instance.
       * ## QPS limit
       * An instance with a maximum image capacity of 100,000 has a default concurrency of 1, which means that a maximum of 1 image addition request can be processed per second.
       * Instances with other image capacities have a default concurrency of 5, which means that a maximum of 5 image addition requests can be processed per second.
       *
       * @param request AddImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageResponse
       */
      Models::AddImageResponse addImageWithOptions(const Models::AddImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the syntax and provides examples of the AddImage operation, which adds image information to an Image Search instance.
       *
       * @description ## Description
       * This operation adds image information to an Image Search instance.
       * ## QPS limit
       * An instance with a maximum image capacity of 100,000 has a default concurrency of 1, which means that a maximum of 1 image addition request can be processed per second.
       * Instances with other image capacities have a default concurrency of 5, which means that a maximum of 5 image addition requests can be processed per second.
       *
       * @param request AddImageRequest
       * @return AddImageResponse
       */
      Models::AddImageResponse addImage(const Models::AddImageRequest &request);

      Models::AddImageResponse addImageAdvance(const Models::AddImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CheckImageExists
       *
       * @description ## How-To  
       * This API is used to query image information in an Image Search instance based on an image.
       * ## QPS Limit  
       * The default maximum queries per second (QPS) for query operations can be viewed in the console. It corresponds to the Visit Frequency (QPS) you selected when purchasing the instance. Supported QPS values are 1, 5, and 10.
       * ### SDK Version Guide  
       * Upgrade the Image SDK to version V3.1.1 to use the "subject identification" and "similarity score" features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
       *
       * @param request CheckImageExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckImageExistsResponse
       */
      Models::CheckImageExistsResponse checkImageExistsWithOptions(const Models::CheckImageExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CheckImageExists
       *
       * @description ## How-To  
       * This API is used to query image information in an Image Search instance based on an image.
       * ## QPS Limit  
       * The default maximum queries per second (QPS) for query operations can be viewed in the console. It corresponds to the Visit Frequency (QPS) you selected when purchasing the instance. Supported QPS values are 1, 5, and 10.
       * ### SDK Version Guide  
       * Upgrade the Image SDK to version V3.1.1 to use the "subject identification" and "similarity score" features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
       *
       * @param request CheckImageExistsRequest
       * @return CheckImageExistsResponse
       */
      Models::CheckImageExistsResponse checkImageExists(const Models::CheckImageExistsRequest &request);

      /**
       * @summary Compares two images and returns a similarity score.
       *
       * @param request CompareSimilarByImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareSimilarByImageResponse
       */
      Models::CompareSimilarByImageResponse compareSimilarByImageWithOptions(const Models::CompareSimilarByImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compares two images and returns a similarity score.
       *
       * @param request CompareSimilarByImageRequest
       * @return CompareSimilarByImageResponse
       */
      Models::CompareSimilarByImageResponse compareSimilarByImage(const Models::CompareSimilarByImageRequest &request);

      Models::CompareSimilarByImageResponse compareSimilarByImageAdvance(const Models::CompareSimilarByImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of the DeleteImage operation, which is used to delete image information from an Image Search instance.
       *
       * @description ## Operation description
       * This operation is used to delete image information from an Image Search instance.
       * >- If the specified image does not exist in the Image Search instance, this operation still returns a success response. Do not use the response to determine whether the image exists.
       * ## QPS limit
       * The default concurrency for delete operations is 20, which means a maximum of 20 delete requests can be processed per second.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of the DeleteImage operation, which is used to delete image information from an Image Search instance.
       *
       * @description ## Operation description
       * This operation is used to delete image information from an Image Search instance.
       * >- If the specified image does not exist in the Image Search instance, this operation still returns a success response. Do not use the response to determine whether the image exists.
       * ## QPS limit
       * The default concurrency for delete operations is 20, which means a maximum of 20 delete requests can be processed per second.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary This topic describes the syntax and examples of the Detail operation, which queries information about an Image Search instance by name.
       *
       * @description ## Operation description
       * This operation queries instance information from an Image Search instance.
       * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
       *
       * @param request DetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetailResponse
       */
      Models::DetailResponse detailWithOptions(const Models::DetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of the Detail operation, which queries information about an Image Search instance by name.
       *
       * @description ## Operation description
       * This operation queries instance information from an Image Search instance.
       * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
       *
       * @param request DetailRequest
       * @return DetailResponse
       */
      Models::DetailResponse detail(const Models::DetailRequest &request);

      /**
       * @summary This topic describes the syntax and examples of the DumpMeta operation, which creates a metadata export task for Image Search by name.
       *
       * @description ## Operation description
       * This operation submits a metadata export task to an Image Search instance.
       * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for submit operations is 1, which means a maximum of 1 request is processed per second.
       * > You cannot submit a new metadata export task while the previous metadata export task is still in progress.
       *
       * @param request DumpMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DumpMetaResponse
       */
      Models::DumpMetaResponse dumpMetaWithOptions(const Models::DumpMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of the DumpMeta operation, which creates a metadata export task for Image Search by name.
       *
       * @description ## Operation description
       * This operation submits a metadata export task to an Image Search instance.
       * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for submit operations is 1, which means a maximum of 1 request is processed per second.
       * > You cannot submit a new metadata export task while the previous metadata export task is still in progress.
       *
       * @param request DumpMetaRequest
       * @return DumpMetaResponse
       */
      Models::DumpMetaResponse dumpMeta(const Models::DumpMetaRequest &request);

      /**
       * @summary Describes the syntax and provides examples of the DumpMetaList operation, which queries the list of metadata export tasks in an Image Search instance.
       *
       * @description ## Operation description
       * This operation queries metadata export tasks in an Image Search instance.
       * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
       *
       * @param request DumpMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DumpMetaListResponse
       */
      Models::DumpMetaListResponse dumpMetaListWithOptions(const Models::DumpMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the syntax and provides examples of the DumpMetaList operation, which queries the list of metadata export tasks in an Image Search instance.
       *
       * @description ## Operation description
       * This operation queries metadata export tasks in an Image Search instance.
       * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
       *
       * @param request DumpMetaListRequest
       * @return DumpMetaListResponse
       */
      Models::DumpMetaListResponse dumpMetaList(const Models::DumpMetaListRequest &request);

      /**
       * @summary Describes the syntax and provides examples of the IncreaseInstance operation, which is used to create a batch task for an Image Search instance by name.
       *
       * @description ## Operation description
       * This operation is used to submit a batch task to an Image Search instance.
       * > <props="china">For more information about the product or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us by using DingTalk group 35035130.
       * ## QPS limit
       * Only one batch task can run at a time.
       * > You cannot submit a new batch task until the previous batch task is complete.
       *
       * @param request IncreaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IncreaseInstanceResponse
       */
      Models::IncreaseInstanceResponse increaseInstanceWithOptions(const Models::IncreaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the syntax and provides examples of the IncreaseInstance operation, which is used to create a batch task for an Image Search instance by name.
       *
       * @description ## Operation description
       * This operation is used to submit a batch task to an Image Search instance.
       * > <props="china">For more information about the product or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us by using DingTalk group 35035130.
       * ## QPS limit
       * Only one batch task can run at a time.
       * > You cannot submit a new batch task until the previous batch task is complete.
       *
       * @param request IncreaseInstanceRequest
       * @return IncreaseInstanceResponse
       */
      Models::IncreaseInstanceResponse increaseInstance(const Models::IncreaseInstanceRequest &request);

      /**
       * @summary Queries the list of batch tasks in an Image Search instance by calling the IncreaseList operation. This topic describes the syntax and provides examples.
       *
       * @description ## Operation description
       * This operation is used to query batch tasks in an Image Search instance.
       * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
       *
       * @param request IncreaseListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IncreaseListResponse
       */
      Models::IncreaseListResponse increaseListWithOptions(const Models::IncreaseListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of batch tasks in an Image Search instance by calling the IncreaseList operation. This topic describes the syntax and provides examples.
       *
       * @description ## Operation description
       * This operation is used to query batch tasks in an Image Search instance.
       * > For more product details or technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for query operations is 1, which means a maximum of 1 request is processed per second.
       *
       * @param request IncreaseListRequest
       * @return IncreaseListResponse
       */
      Models::IncreaseListResponse increaseList(const Models::IncreaseListRequest &request);

      /**
       * @summary This topic describes the syntax and examples of SearchImageByFilter, which is used to query image information in an Image Search instance based on filter conditions.
       *
       * @param request SearchImageByFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByFilterResponse
       */
      Models::SearchImageByFilterResponse searchImageByFilterWithOptions(const Models::SearchImageByFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of SearchImageByFilter, which is used to query image information in an Image Search instance based on filter conditions.
       *
       * @param request SearchImageByFilterRequest
       * @return SearchImageByFilterResponse
       */
      Models::SearchImageByFilterResponse searchImageByFilter(const Models::SearchImageByFilterRequest &request);

      /**
       * @summary This topic describes the syntax and examples of the SearchByName operation, which is used to query image information in an Image Search instance by name.
       *
       * @description ### Operation description
       * This operation queries image information in an Image Search instance by name (ProductId and PicName).
       * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ### QPS limit
       * The default maximum query rate can be viewed in the console. It is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
       *
       * @param request SearchImageByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByNameResponse
       */
      Models::SearchImageByNameResponse searchImageByNameWithOptions(const Models::SearchImageByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of the SearchByName operation, which is used to query image information in an Image Search instance by name.
       *
       * @description ### Operation description
       * This operation queries image information in an Image Search instance by name (ProductId and PicName).
       * > For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ### QPS limit
       * The default maximum query rate can be viewed in the console. It is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
       *
       * @param request SearchImageByNameRequest
       * @return SearchImageByNameResponse
       */
      Models::SearchImageByNameResponse searchImageByName(const Models::SearchImageByNameRequest &request);

      /**
       * @summary This topic describes the syntax and examples of SearchByPic, which is used to search for image information in an Image Search instance by image.
       *
       * @description ## Operation description
       * This operation is used to search for image information in an Image Search instance by image.
       * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value that you selected when you made the purchase. The supported values are 1 QPS, 5 QPS, and 10 QPS.
       * ### SDK version description
       * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
       *
       * @param request SearchImageByPicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByPicResponse
       */
      Models::SearchImageByPicResponse searchImageByPicWithOptions(const Models::SearchImageByPicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of SearchByPic, which is used to search for image information in an Image Search instance by image.
       *
       * @description ## Operation description
       * This operation is used to search for image information in an Image Search instance by image.
       * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through DingTalk group (35035130).
       * ## QPS limit
       * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value that you selected when you made the purchase. The supported values are 1 QPS, 5 QPS, and 10 QPS.
       * ### SDK version description
       * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
       *
       * @param request SearchImageByPicRequest
       * @return SearchImageByPicResponse
       */
      Models::SearchImageByPicResponse searchImageByPic(const Models::SearchImageByPicRequest &request);

      Models::SearchImageByPicResponse searchImageByPicAdvance(const Models::SearchImageByPicAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of SearchImageByText, which is used to search for image information in an Image Search instance based on text.
       *
       * @description ## Operation description
       * This operation is used to search for image information in an Image Search instance based on text. This operation is available only for instances whose service type is product multimodal search.
       * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
       * ## QPS limit
       * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
       * ### SDK version description
       * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
       *
       * @param request SearchImageByTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByTextResponse
       */
      Models::SearchImageByTextResponse searchImageByTextWithOptions(const Models::SearchImageByTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax and examples of SearchImageByText, which is used to search for image information in an Image Search instance based on text.
       *
       * @description ## Operation description
       * This operation is used to search for image information in an Image Search instance based on text. This operation is available only for instances whose service type is product multimodal search.
       * > <props="china">For more product details and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
       * ## QPS limit
       * You can view the default maximum access frequency for query operations in the console. The frequency is the QPS value you selected at the time of purchase. Currently supported values are 1 QPS, 5 QPS, and 10 QPS.
       * ### SDK version description
       * Upgrade the Image Search SDK to V3.1.1 to use the multi-subject identification and similarity score features. For more information, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
       *
       * @param request SearchImageByTextRequest
       * @return SearchImageByTextResponse
       */
      Models::SearchImageByTextResponse searchImageByText(const Models::SearchImageByTextRequest &request);

      /**
       * @summary Updates the image information in an Image Search instance.
       *
       * @description ## Usage notes
       * This operation updates the image information in an Image Search instance based on the product ID and image name.
       * > - The instance must meet the creation date requirements.
       * <props="china">
       * - Instances created after June 2021 in the Shanghai and Hangzhou regions are supported. Instances in other regions can be used normally.
       * <props="intl">
       * - Instances created after December 2021 in the Singapore region are supported. Instances in other regions are currently unavailable.
       * - For more information about the product and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for update operations is 20, which means that a maximum of 20 requests can be processed per second.
       *
       * @param request UpdateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImageWithOptions(const Models::UpdateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the image information in an Image Search instance.
       *
       * @description ## Usage notes
       * This operation updates the image information in an Image Search instance based on the product ID and image name.
       * > - The instance must meet the creation date requirements.
       * <props="china">
       * - Instances created after June 2021 in the Shanghai and Hangzhou regions are supported. Instances in other regions can be used normally.
       * <props="intl">
       * - Instances created after December 2021 in the Singapore region are supported. Instances in other regions are currently unavailable.
       * - For more information about the product and technical support, click [Online Consultation](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or contact us through the DingTalk group (35035130).
       * ## QPS limit
       * The default concurrency for update operations is 20, which means that a maximum of 20 requests can be processed per second.
       *
       * @param request UpdateImageRequest
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImage(const Models::UpdateImageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
