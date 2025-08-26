// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIPODCAST20250228_HPP_
#define ALIBABACLOUD_AIPODCAST20250228_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AIPodcast20250228Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AIPodcast20250228.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIPodcast20250228
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary ai播客生成任务结果查询
       *
       * @param request PodcastTaskResultQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PodcastTaskResultQueryResponse
       */
      Models::PodcastTaskResultQueryResponse podcastTaskResultQueryWithOptions(const Models::PodcastTaskResultQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ai播客生成任务结果查询
       *
       * @param request PodcastTaskResultQueryRequest
       * @return PodcastTaskResultQueryResponse
       */
      Models::PodcastTaskResultQueryResponse podcastTaskResultQuery(const Models::PodcastTaskResultQueryRequest &request);

      /**
       * @summary ai播客生成任务提交
       *
       * @param tmpReq PodcastTaskSubmitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PodcastTaskSubmitResponse
       */
      Models::PodcastTaskSubmitResponse podcastTaskSubmitWithOptions(const Models::PodcastTaskSubmitRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ai播客生成任务提交
       *
       * @param request PodcastTaskSubmitRequest
       * @return PodcastTaskSubmitResponse
       */
      Models::PodcastTaskSubmitResponse podcastTaskSubmit(const Models::PodcastTaskSubmitRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AIPodcast20250228
#endif
