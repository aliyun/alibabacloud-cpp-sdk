// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HTTPDNS20160201_HPP_
#define ALIBABACLOUD_HTTPDNS20160201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Httpdns20160201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Httpdns20160201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加域名
       *
       * @param request AddDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomainWithOptions(const Models::AddDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加域名
       *
       * @param request AddDomainRequest
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomain(const Models::AddDomainRequest &request);

      /**
       * @summary 删除域名
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除域名
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @summary 获取用户信息包含配置项
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户信息包含配置项
       *
       * @return GetAccountInfoResponse
       */
      Models::GetAccountInfoResponse getAccountInfo();

      /**
       * @summary 解析次数概览
       *
       * @param request GetResolveCountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResolveCountSummaryResponse
       */
      Models::GetResolveCountSummaryResponse getResolveCountSummaryWithOptions(const Models::GetResolveCountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解析次数概览
       *
       * @param request GetResolveCountSummaryRequest
       * @return GetResolveCountSummaryResponse
       */
      Models::GetResolveCountSummaryResponse getResolveCountSummary(const Models::GetResolveCountSummaryRequest &request);

      /**
       * @param request GetResolveStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResolveStatisticsResponse
       */
      Models::GetResolveStatisticsResponse getResolveStatisticsWithOptions(const Models::GetResolveStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetResolveStatisticsRequest
       * @return GetResolveStatisticsResponse
       */
      Models::GetResolveStatisticsResponse getResolveStatistics(const Models::GetResolveStatisticsRequest &request);

      /**
       * @summary 列举域名以及解析统计信息
       *
       * @param request ListDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomainsWithOptions(const Models::ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举域名以及解析统计信息
       *
       * @param request ListDomainsRequest
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomains(const Models::ListDomainsRequest &request);

      /**
       * @summary 刷新域名缓存
       *
       * @param tmpReq RefreshResolveCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshResolveCacheResponse
       */
      Models::RefreshResolveCacheResponse refreshResolveCacheWithOptions(const Models::RefreshResolveCacheRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 刷新域名缓存
       *
       * @param request RefreshResolveCacheRequest
       * @return RefreshResolveCacheResponse
       */
      Models::RefreshResolveCacheResponse refreshResolveCache(const Models::RefreshResolveCacheRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
