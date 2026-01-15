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
       * @summary Adds an image to an Image Search instance.
       *
       * @description You can call this operation to add an image to an Image Search instance.
       * > If you want to obtain more information about the service and technical support, click [Online Consulting](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or join the DingTalk group (ID 35035130).
       * ## QPS limits
       * By default, the concurrency limit for adding an image to instances whose image capacity specifications are 0.1 million images is 1. This means that the system can process up to one request of adding an image every second. By default, the concurrency limit for adding an image to instances of other image capacity specifications is 5. This means that the system can process up to five requests of adding an image every second.
       *
       * @param request AddImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageResponse
       */
      Models::AddImageResponse addImageWithOptions(const Models::AddImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an image to an Image Search instance.
       *
       * @description You can call this operation to add an image to an Image Search instance.
       * > If you want to obtain more information about the service and technical support, click [Online Consulting](https://www.aliyun.com/core/online-consult?from=aZgW6LJHr2) or join the DingTalk group (ID 35035130).
       * ## QPS limits
       * By default, the concurrency limit for adding an image to instances whose image capacity specifications are 0.1 million images is 1. This means that the system can process up to one request of adding an image every second. By default, the concurrency limit for adding an image to instances of other image capacity specifications is 5. This means that the system can process up to five requests of adding an image every second.
       *
       * @param request AddImageRequest
       * @return AddImageResponse
       */
      Models::AddImageResponse addImage(const Models::AddImageRequest &request);

      Models::AddImageResponse addImageAdvance(const Models::AddImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对比图片相似值
       *
       * @param request CompareSimilarByImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareSimilarByImageResponse
       */
      Models::CompareSimilarByImageResponse compareSimilarByImageWithOptions(const Models::CompareSimilarByImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对比图片相似值
       *
       * @param request CompareSimilarByImageRequest
       * @return CompareSimilarByImageResponse
       */
      Models::CompareSimilarByImageResponse compareSimilarByImage(const Models::CompareSimilarByImageRequest &request);

      Models::CompareSimilarByImageResponse compareSimilarByImageAdvance(const Models::CompareSimilarByImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the DeleteImage operation and provides examples of this operation. You can call this operation to delete images from an Image Search instance.
       *
       * @description This operation deletes images from an Image Search instance.
       * >  A success response is returned even if the specified image does not exist on the instance. Therefore, you cannot determine whether the image exists on the instance based on the response.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 20. In this case, the system can process at most 20 requests every second.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the DeleteImage operation and provides examples of this operation. You can call this operation to delete images from an Image Search instance.
       *
       * @description This operation deletes images from an Image Search instance.
       * >  A success response is returned even if the specified image does not exist on the instance. Therefore, you cannot determine whether the image exists on the instance based on the response.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 20. In this case, the system can process at most 20 requests every second.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary This topic describes the syntax of the Detail operation and provides examples of this operation. You can call this operation to query instance details.
       *
       * @description This operation queries instance details.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process only 1 request every second.
       *
       * @param request DetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetailResponse
       */
      Models::DetailResponse detailWithOptions(const Models::DetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the Detail operation and provides examples of this operation. You can call this operation to query instance details.
       *
       * @description This operation queries instance details.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process only 1 request every second.
       *
       * @param request DetailRequest
       * @return DetailResponse
       */
      Models::DetailResponse detail(const Models::DetailRequest &request);

      /**
       * @summary This topic describes the syntax of the DumpMeta operation and provides examples of this operation. You can call this operation to create a task for exporting metadata from an Image Search instance.
       *
       * @description This operation creates a task for exporting metadata from an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request DumpMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DumpMetaResponse
       */
      Models::DumpMetaResponse dumpMetaWithOptions(const Models::DumpMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the DumpMeta operation and provides examples of this operation. You can call this operation to create a task for exporting metadata from an Image Search instance.
       *
       * @description This operation creates a task for exporting metadata from an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request DumpMetaRequest
       * @return DumpMetaResponse
       */
      Models::DumpMetaResponse dumpMeta(const Models::DumpMetaRequest &request);

      /**
       * @summary This topic describes the syntax of the DumpMetaList operation and provides examples of this operation. You can call this operation to query tasks that are used for exporting metadata from an Image Search instance.
       *
       * @description This operation queries tasks that are used for exporting metadata from an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request DumpMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DumpMetaListResponse
       */
      Models::DumpMetaListResponse dumpMetaListWithOptions(const Models::DumpMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the DumpMetaList operation and provides examples of this operation. You can call this operation to query tasks that are used for exporting metadata from an Image Search instance.
       *
       * @description This operation queries tasks that are used for exporting metadata from an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request DumpMetaListRequest
       * @return DumpMetaListResponse
       */
      Models::DumpMetaListResponse dumpMetaList(const Models::DumpMetaListRequest &request);

      /**
       * @summary This topic describes the syntax of the IncreaseInstance operation and provides examples of this operation. You can call this operation to create a batch task on an Image Search instance.
       *
       * @description This operation creates a batch task on an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request IncreaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IncreaseInstanceResponse
       */
      Models::IncreaseInstanceResponse increaseInstanceWithOptions(const Models::IncreaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the IncreaseInstance operation and provides examples of this operation. You can call this operation to create a batch task on an Image Search instance.
       *
       * @description This operation creates a batch task on an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request IncreaseInstanceRequest
       * @return IncreaseInstanceResponse
       */
      Models::IncreaseInstanceResponse increaseInstance(const Models::IncreaseInstanceRequest &request);

      /**
       * @summary This topic describes the syntax of the IncreaseList operation and provides examples of this operation. You can call this operation to query batch tasks on an Image Search instance.
       *
       * @description This operation queries batch tasks on an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request IncreaseListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IncreaseListResponse
       */
      Models::IncreaseListResponse increaseListWithOptions(const Models::IncreaseListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the IncreaseList operation and provides examples of this operation. You can call this operation to query batch tasks on an Image Search instance.
       *
       * @description This operation queries batch tasks on an Image Search instance.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 1. In this case, the system can process at most 1 request every second.
       *
       * @param request IncreaseListRequest
       * @return IncreaseListResponse
       */
      Models::IncreaseListResponse increaseList(const Models::IncreaseListRequest &request);

      /**
       * @summary This topic describes the syntax of the SearchByName operation and provides examples of this operation. You can call this operation to search for images by image name on an Image Search instance.
       *
       * @description This operation searches for images by image name on an Image Search instance.
       * ## QPS limits
       * The maximum number of queries per second is displayed in the Image Search console. The upper limit is specified when you purchase the instance. You can set the upper limit to 5 QPS or 10 QPS.
       *
       * @param request SearchImageByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByNameResponse
       */
      Models::SearchImageByNameResponse searchImageByNameWithOptions(const Models::SearchImageByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the SearchByName operation and provides examples of this operation. You can call this operation to search for images by image name on an Image Search instance.
       *
       * @description This operation searches for images by image name on an Image Search instance.
       * ## QPS limits
       * The maximum number of queries per second is displayed in the Image Search console. The upper limit is specified when you purchase the instance. You can set the upper limit to 5 QPS or 10 QPS.
       *
       * @param request SearchImageByNameRequest
       * @return SearchImageByNameResponse
       */
      Models::SearchImageByNameResponse searchImageByName(const Models::SearchImageByNameRequest &request);

      /**
       * @summary This topic describes the syntax of the SearchByPic operation and provides examples of this operation. You can call this operation to search for images by image on an Image Search Instance.
       *
       * @description This operation searches for images by image name on an Image Search instance.
       * ## QPS limits
       * The maximum number of queries per second is displayed in the Image Search console. The upper limit is specified when you purchase the instance. You can set the upper limit to 5 QPS or 10 QPS.  
       * ## SDK release notes
       * The Image Search SDK has been upgraded to version 3.1.1, which supports multi-subject recognition and similarity scores. For more information, see [Image Search SDK for Java](/help/en/image-search/latest/version-v3-java-sdk).
       *
       * @param request SearchImageByPicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByPicResponse
       */
      Models::SearchImageByPicResponse searchImageByPicWithOptions(const Models::SearchImageByPicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the SearchByPic operation and provides examples of this operation. You can call this operation to search for images by image on an Image Search Instance.
       *
       * @description This operation searches for images by image name on an Image Search instance.
       * ## QPS limits
       * The maximum number of queries per second is displayed in the Image Search console. The upper limit is specified when you purchase the instance. You can set the upper limit to 5 QPS or 10 QPS.  
       * ## SDK release notes
       * The Image Search SDK has been upgraded to version 3.1.1, which supports multi-subject recognition and similarity scores. For more information, see [Image Search SDK for Java](/help/en/image-search/latest/version-v3-java-sdk).
       *
       * @param request SearchImageByPicRequest
       * @return SearchImageByPicResponse
       */
      Models::SearchImageByPicResponse searchImageByPic(const Models::SearchImageByPicRequest &request);

      Models::SearchImageByPicResponse searchImageByPicAdvance(const Models::SearchImageByPicAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SearchImageByText
       *
       * @param request SearchImageByTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchImageByTextResponse
       */
      Models::SearchImageByTextResponse searchImageByTextWithOptions(const Models::SearchImageByTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SearchImageByText
       *
       * @param request SearchImageByTextRequest
       * @return SearchImageByTextResponse
       */
      Models::SearchImageByTextResponse searchImageByText(const Models::SearchImageByTextRequest &request);

      /**
       * @summary This topic describes the syntax of the UpdateImage operation and provides examples of this operation. You can call this operation to update image information on an Image Search instance.
       *
       * @description This operation updates image information on an Image Search instance.
       * > *   Limits are imposed on the instance creation time.
       * >*   This operation is supported by instances that are created in the Singapore (Singapore) region after December 2021. This operation is not supported in other regions.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 20. In this case, the system can process at most 20 requests every second.
       *
       * @param request UpdateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImageWithOptions(const Models::UpdateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the syntax of the UpdateImage operation and provides examples of this operation. You can call this operation to update image information on an Image Search instance.
       *
       * @description This operation updates image information on an Image Search instance.
       * > *   Limits are imposed on the instance creation time.
       * >*   This operation is supported by instances that are created in the Singapore (Singapore) region after December 2021. This operation is not supported in other regions.
       * ## QPS limits
       * By default, the maximum number of queries supported by this operation is 20. In this case, the system can process at most 20 requests every second.
       *
       * @param request UpdateImageRequest
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImage(const Models::UpdateImageRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
