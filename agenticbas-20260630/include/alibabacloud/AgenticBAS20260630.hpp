// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTICBAS20260630_HPP_
#define ALIBABACLOUD_AGENTICBAS20260630_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgenticBAS20260630Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgenticBAS20260630.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgenticBAS20260630
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建渗透测试任务
       *
       * @param tmpReq CreatePentestTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePentestTaskResponse
       */
      Models::CreatePentestTaskResponse createPentestTaskWithOptions(const Models::CreatePentestTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建渗透测试任务
       *
       * @param request CreatePentestTaskRequest
       * @return CreatePentestTaskResponse
       */
      Models::CreatePentestTaskResponse createPentestTask(const Models::CreatePentestTaskRequest &request);

      /**
       * @summary 查询渗透测试报告内容
       *
       * @param tmpReq DescribePentestReportContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestReportContentResponse
       */
      Models::DescribePentestReportContentResponse describePentestReportContentWithOptions(const Models::DescribePentestReportContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询渗透测试报告内容
       *
       * @param request DescribePentestReportContentRequest
       * @return DescribePentestReportContentResponse
       */
      Models::DescribePentestReportContentResponse describePentestReportContent(const Models::DescribePentestReportContentRequest &request);

      /**
       * @summary 查询渗透测试任务列表
       *
       * @param tmpReq DescribePentestTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestTaskListResponse
       */
      Models::DescribePentestTaskListResponse describePentestTaskListWithOptions(const Models::DescribePentestTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询渗透测试任务列表
       *
       * @param request DescribePentestTaskListRequest
       * @return DescribePentestTaskListResponse
       */
      Models::DescribePentestTaskListResponse describePentestTaskList(const Models::DescribePentestTaskListRequest &request);

      /**
       * @summary 查询渗透测试漏洞列表
       *
       * @param tmpReq DescribePentestVulnListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePentestVulnListResponse
       */
      Models::DescribePentestVulnListResponse describePentestVulnListWithOptions(const Models::DescribePentestVulnListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询渗透测试漏洞列表
       *
       * @param request DescribePentestVulnListRequest
       * @return DescribePentestVulnListResponse
       */
      Models::DescribePentestVulnListResponse describePentestVulnList(const Models::DescribePentestVulnListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgenticBAS20260630
#endif
