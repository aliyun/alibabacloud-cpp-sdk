// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YIKE20260707_HPP_
#define ALIBABACLOUD_YIKE20260707_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260707Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Yike20260707.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 查询媒资内容理解作业
       *
       * @param request GetMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJobWithOptions(const Models::GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询媒资内容理解作业
       *
       * @param request GetMediaComprehensionJobRequest
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJob(const Models::GetMediaComprehensionJobRequest &request);

      /**
       * @summary 提交媒资内容理解作业
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJobWithOptions(const Models::SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交媒资内容理解作业
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJob(const Models::SubmitMediaComprehensionJobRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
