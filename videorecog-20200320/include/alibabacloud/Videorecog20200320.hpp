// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VIDEORECOG20200320_HPP_
#define ALIBABACLOUD_VIDEORECOG20200320_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Videorecog20200320Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Videorecog20200320.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request DetectVideoShotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectVideoShotResponse
       */
      Models::DetectVideoShotResponse detectVideoShotWithOptions(const Models::DetectVideoShotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectVideoShotRequest
       * @return DetectVideoShotResponse
       */
      Models::DetectVideoShotResponse detectVideoShot(const Models::DetectVideoShotRequest &request);

      Models::DetectVideoShotResponse detectVideoShotAdvance(const Models::DetectVideoShotAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频质量评估
       *
       * @param request EvaluateVideoQualityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateVideoQualityResponse
       */
      Models::EvaluateVideoQualityResponse evaluateVideoQualityWithOptions(const Models::EvaluateVideoQualityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频质量评估
       *
       * @param request EvaluateVideoQualityRequest
       * @return EvaluateVideoQualityResponse
       */
      Models::EvaluateVideoQualityResponse evaluateVideoQuality(const Models::EvaluateVideoQualityRequest &request);

      Models::EvaluateVideoQualityResponse evaluateVideoQualityAdvance(const Models::EvaluateVideoQualityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateVideoCoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateVideoCoverResponse
       */
      Models::GenerateVideoCoverResponse generateVideoCoverWithOptions(const Models::GenerateVideoCoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateVideoCoverRequest
       * @return GenerateVideoCoverResponse
       */
      Models::GenerateVideoCoverResponse generateVideoCover(const Models::GenerateVideoCoverRequest &request);

      Models::GenerateVideoCoverResponse generateVideoCoverAdvance(const Models::GenerateVideoCoverAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @summary 视频OCR
       *
       * @param tmpReq RecognizeVideoCastCrewListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeVideoCastCrewListResponse
       */
      Models::RecognizeVideoCastCrewListResponse recognizeVideoCastCrewListWithOptions(const Models::RecognizeVideoCastCrewListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频OCR
       *
       * @param request RecognizeVideoCastCrewListRequest
       * @return RecognizeVideoCastCrewListResponse
       */
      Models::RecognizeVideoCastCrewListResponse recognizeVideoCastCrewList(const Models::RecognizeVideoCastCrewListRequest &request);

      Models::RecognizeVideoCastCrewListResponse recognizeVideoCastCrewListAdvance(const Models::RecognizeVideoCastCrewListAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频拆条
       *
       * @param request SplitVideoPartsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SplitVideoPartsResponse
       */
      Models::SplitVideoPartsResponse splitVideoPartsWithOptions(const Models::SplitVideoPartsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频拆条
       *
       * @param request SplitVideoPartsRequest
       * @return SplitVideoPartsResponse
       */
      Models::SplitVideoPartsResponse splitVideoParts(const Models::SplitVideoPartsRequest &request);

      Models::SplitVideoPartsResponse splitVideoPartsAdvance(const Models::SplitVideoPartsAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频内容理解
       *
       * @param request UnderstandVideoContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnderstandVideoContentResponse
       */
      Models::UnderstandVideoContentResponse understandVideoContentWithOptions(const Models::UnderstandVideoContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频内容理解
       *
       * @param request UnderstandVideoContentRequest
       * @return UnderstandVideoContentResponse
       */
      Models::UnderstandVideoContentResponse understandVideoContent(const Models::UnderstandVideoContentRequest &request);

      Models::UnderstandVideoContentResponse understandVideoContentAdvance(const Models::UnderstandVideoContentAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
