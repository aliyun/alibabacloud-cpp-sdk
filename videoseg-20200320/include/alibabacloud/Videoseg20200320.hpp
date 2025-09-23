// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VIDEOSEG20200320_HPP_
#define ALIBABACLOUD_VIDEOSEG20200320_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Videoseg20200320Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Videoseg20200320.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoseg20200320
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
       * @param request SegmentVideoBodyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SegmentVideoBodyResponse
       */
      Models::SegmentVideoBodyResponse segmentVideoBodyWithOptions(const Models::SegmentVideoBodyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SegmentVideoBodyRequest
       * @return SegmentVideoBodyResponse
       */
      Models::SegmentVideoBodyResponse segmentVideoBody(const Models::SegmentVideoBodyRequest &request);

      Models::SegmentVideoBodyResponse segmentVideoBodyAdvance(const Models::SegmentVideoBodyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Videoseg20200320
#endif
