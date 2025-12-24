// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IMAGESEG20191230_HPP_
#define ALIBABACLOUD_IMAGESEG20191230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Imageseg20191230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Imageseg20191230.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request ChangeSkyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeSkyResponse
       */
      Models::ChangeSkyResponse changeSkyWithOptions(const Models::ChangeSkyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeSkyRequest
       * @return ChangeSkyResponse
       */
      Models::ChangeSkyResponse changeSky(const Models::ChangeSkyRequest &request);

      Models::ChangeSkyResponse changeSkyAdvance(const Models::ChangeSkyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsyncJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResultWithOptions(const Models::GetAsyncJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsyncJobResultRequest
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResult(const Models::GetAsyncJobResultRequest &request);

      /**
       * @param request ParseFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ParseFaceResponse
       */
      Models::ParseFaceResponse parseFaceWithOptions(const Models::ParseFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ParseFaceRequest
       * @return ParseFaceResponse
       */
      Models::ParseFaceResponse parseFace(const Models::ParseFaceRequest &request);

      Models::ParseFaceResponse parseFaceAdvance(const Models::ParseFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RefineMaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefineMaskResponse
       */
      Models::RefineMaskResponse refineMaskWithOptions(const Models::RefineMaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RefineMaskRequest
       * @return RefineMaskResponse
       */
      Models::RefineMaskResponse refineMask(const Models::RefineMaskRequest &request);

      Models::RefineMaskResponse refineMaskAdvance(const Models::RefineMaskAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentBodyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentBodyResponse
       */
      Models::SegmentBodyResponse segmentBodyWithOptions(const Models::SegmentBodyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentBodyRequest
       * @return SegmentBodyResponse
       */
      Models::SegmentBodyResponse segmentBody(const Models::SegmentBodyRequest &request);

      Models::SegmentBodyResponse segmentBodyAdvance(const Models::SegmentBodyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentClothRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentClothResponse
       */
      Models::SegmentClothResponse segmentClothWithOptions(const Models::SegmentClothRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentClothRequest
       * @return SegmentClothResponse
       */
      Models::SegmentClothResponse segmentCloth(const Models::SegmentClothRequest &request);

      Models::SegmentClothResponse segmentClothAdvance(const Models::SegmentClothAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentCommodityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentCommodityResponse
       */
      Models::SegmentCommodityResponse segmentCommodityWithOptions(const Models::SegmentCommodityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentCommodityRequest
       * @return SegmentCommodityResponse
       */
      Models::SegmentCommodityResponse segmentCommodity(const Models::SegmentCommodityRequest &request);

      Models::SegmentCommodityResponse segmentCommodityAdvance(const Models::SegmentCommodityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentCommonImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentCommonImageResponse
       */
      Models::SegmentCommonImageResponse segmentCommonImageWithOptions(const Models::SegmentCommonImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentCommonImageRequest
       * @return SegmentCommonImageResponse
       */
      Models::SegmentCommonImageResponse segmentCommonImage(const Models::SegmentCommonImageRequest &request);

      Models::SegmentCommonImageResponse segmentCommonImageAdvance(const Models::SegmentCommonImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentFoodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentFoodResponse
       */
      Models::SegmentFoodResponse segmentFoodWithOptions(const Models::SegmentFoodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentFoodRequest
       * @return SegmentFoodResponse
       */
      Models::SegmentFoodResponse segmentFood(const Models::SegmentFoodRequest &request);

      Models::SegmentFoodResponse segmentFoodAdvance(const Models::SegmentFoodAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHDBodyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentHDBodyResponse
       */
      Models::SegmentHDBodyResponse segmentHDBodyWithOptions(const Models::SegmentHDBodyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHDBodyRequest
       * @return SegmentHDBodyResponse
       */
      Models::SegmentHDBodyResponse segmentHDBody(const Models::SegmentHDBodyRequest &request);

      Models::SegmentHDBodyResponse segmentHDBodyAdvance(const Models::SegmentHDBodyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHDCommonImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentHDCommonImageResponse
       */
      Models::SegmentHDCommonImageResponse segmentHDCommonImageWithOptions(const Models::SegmentHDCommonImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHDCommonImageRequest
       * @return SegmentHDCommonImageResponse
       */
      Models::SegmentHDCommonImageResponse segmentHDCommonImage(const Models::SegmentHDCommonImageRequest &request);

      Models::SegmentHDCommonImageResponse segmentHDCommonImageAdvance(const Models::SegmentHDCommonImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHDSkyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentHDSkyResponse
       */
      Models::SegmentHDSkyResponse segmentHDSkyWithOptions(const Models::SegmentHDSkyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHDSkyRequest
       * @return SegmentHDSkyResponse
       */
      Models::SegmentHDSkyResponse segmentHDSky(const Models::SegmentHDSkyRequest &request);

      Models::SegmentHDSkyResponse segmentHDSkyAdvance(const Models::SegmentHDSkyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentHairResponse
       */
      Models::SegmentHairResponse segmentHairWithOptions(const Models::SegmentHairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHairRequest
       * @return SegmentHairResponse
       */
      Models::SegmentHairResponse segmentHair(const Models::SegmentHairRequest &request);

      Models::SegmentHairResponse segmentHairAdvance(const Models::SegmentHairAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHeadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentHeadResponse
       */
      Models::SegmentHeadResponse segmentHeadWithOptions(const Models::SegmentHeadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentHeadRequest
       * @return SegmentHeadResponse
       */
      Models::SegmentHeadResponse segmentHead(const Models::SegmentHeadRequest &request);

      Models::SegmentHeadResponse segmentHeadAdvance(const Models::SegmentHeadAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 皮肤分割
       *
       * @param request SegmentSkinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentSkinResponse
       */
      Models::SegmentSkinResponse segmentSkinWithOptions(const Models::SegmentSkinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 皮肤分割
       *
       * @param request SegmentSkinRequest
       * @return SegmentSkinResponse
       */
      Models::SegmentSkinResponse segmentSkin(const Models::SegmentSkinRequest &request);

      Models::SegmentSkinResponse segmentSkinAdvance(const Models::SegmentSkinAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentSkyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentSkyResponse
       */
      Models::SegmentSkyResponse segmentSkyWithOptions(const Models::SegmentSkyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentSkyRequest
       * @return SegmentSkyResponse
       */
      Models::SegmentSkyResponse segmentSky(const Models::SegmentSkyRequest &request);

      Models::SegmentSkyResponse segmentSkyAdvance(const Models::SegmentSkyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
