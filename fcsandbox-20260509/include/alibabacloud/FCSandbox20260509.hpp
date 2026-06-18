// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FCSANDBOX20260509_HPP_
#define ALIBABACLOUD_FCSANDBOX20260509_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/FCSandbox20260509Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/FCSandbox20260509.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 删除 quota 配置
       *
       * @param request DeleteQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuotaWithOptions(const Models::DeleteQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 quota 配置
       *
       * @param request DeleteQuotaRequest
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuota(const Models::DeleteQuotaRequest &request);

      /**
       * @summary 获取 quota 配置
       *
       * @param request DescribeQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuotaResponse
       */
      Models::DescribeQuotaResponse describeQuotaWithOptions(const Models::DescribeQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 quota 配置
       *
       * @param request DescribeQuotaRequest
       * @return DescribeQuotaResponse
       */
      Models::DescribeQuotaResponse describeQuota(const Models::DescribeQuotaRequest &request);

      /**
       * @summary 查询 quota 配置
       *
       * @param request ListQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaResponse
       */
      Models::ListQuotaResponse listQuotaWithOptions(const Models::ListQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 quota 配置
       *
       * @param request ListQuotaRequest
       * @return ListQuotaResponse
       */
      Models::ListQuotaResponse listQuota(const Models::ListQuotaRequest &request);

      /**
       * @summary 更新 quota 配置
       *
       * @param request UpdateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuotaWithOptions(const Models::UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 quota 配置
       *
       * @param request UpdateQuotaRequest
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuota(const Models::UpdateQuotaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
