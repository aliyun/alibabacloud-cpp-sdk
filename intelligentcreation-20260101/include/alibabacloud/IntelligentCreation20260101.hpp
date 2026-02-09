// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_INTELLIGENTCREATION20260101_HPP_
#define ALIBABACLOUD_INTELLIGENTCREATION20260101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IntelligentCreation20260101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IntelligentCreation20260101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20260101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 检查Turing任务
       *
       * @param request CheckTuringTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTuringTaskResponse
       */
      Models::CheckTuringTaskResponse checkTuringTaskWithOptions(const Models::CheckTuringTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查Turing任务
       *
       * @param request CheckTuringTaskRequest
       * @return CheckTuringTaskResponse
       */
      Models::CheckTuringTaskResponse checkTuringTask(const Models::CheckTuringTaskRequest &request);

      /**
       * @summary 任务提交接口
       *
       * @param request SubmitTuringTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTuringTaskResponse
       */
      Models::SubmitTuringTaskResponse submitTuringTaskWithOptions(const Models::SubmitTuringTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务提交接口
       *
       * @param request SubmitTuringTaskRequest
       * @return SubmitTuringTaskResponse
       */
      Models::SubmitTuringTaskResponse submitTuringTask(const Models::SubmitTuringTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IntelligentCreation20260101
#endif
