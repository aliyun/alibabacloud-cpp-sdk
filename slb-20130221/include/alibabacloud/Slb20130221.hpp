// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SLB20130221_HPP_
#define ALIBABACLOUD_SLB20130221_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Slb20130221Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Slb20130221.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20130221
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加后端服务器
       *
       * @param request AddBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServersWithOptions(const Models::AddBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加后端服务器
       *
       * @param request AddBackendServersRequest
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServers(const Models::AddBackendServersRequest &request);

      /**
       * @summary 创建实例
       *
       * @param request CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary 创建HTTP监听
       *
       * @param request CreateLoadBalancerHTTPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerHTTPListenerResponse
       */
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListenerWithOptions(const Models::CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建HTTP监听
       *
       * @param request CreateLoadBalancerHTTPListenerRequest
       * @return CreateLoadBalancerHTTPListenerResponse
       */
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListener(const Models::CreateLoadBalancerHTTPListenerRequest &request);

      /**
       * @summary 创建TCP监听
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListenerWithOptions(const Models::CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建TCP监听
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListener(const Models::CreateLoadBalancerTCPListenerRequest &request);

      /**
       * @summary 删除实例
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary 删除监听
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListenerWithOptions(const Models::DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除监听
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListener(const Models::DeleteLoadBalancerListenerRequest &request);

      /**
       * @summary 查询后端服务器
       *
       * @param request DescribeBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackendServersResponse
       */
      Models::DescribeBackendServersResponse describeBackendServersWithOptions(const Models::DescribeBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询后端服务器
       *
       * @param request DescribeBackendServersRequest
       * @return DescribeBackendServersResponse
       */
      Models::DescribeBackendServersResponse describeBackendServers(const Models::DescribeBackendServersRequest &request);

      /**
       * @summary 查询实例信息
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttributeWithOptions(const Models::DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例信息
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttribute(const Models::DescribeLoadBalancerAttributeRequest &request);

      /**
       * @summary 查询HTTP监听配置
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HTTP监听配置
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttribute(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request);

      /**
       * @summary 查询TCP监听配置
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttributeWithOptions(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询TCP监听配置
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttribute(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request);

      /**
       * @summary slb实例批量查询
       *
       * @param request DescribeLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancersWithOptions(const Models::DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary slb实例批量查询
       *
       * @param request DescribeLoadBalancersRequest
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancers(const Models::DescribeLoadBalancersRequest &request);

      /**
       * @summary 查询可用地域
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用地域
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 删除默认服务器组的后端服务器
       *
       * @param request RemoveBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServersWithOptions(const Models::RemoveBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除默认服务器组的后端服务器
       *
       * @param request RemoveBackendServersRequest
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServers(const Models::RemoveBackendServersRequest &request);

      /**
       * @summary 更新http监听
       *
       * @param request SetLoadBalancerHTTPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerHTTPListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新http监听
       *
       * @param request SetLoadBalancerHTTPListenerAttributeRequest
       * @return SetLoadBalancerHTTPListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttribute(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request);

      /**
       * @summary 修改监听状态
       *
       * @param request SetLoadBalancerListenerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerListenerStatusResponse
       */
      Models::SetLoadBalancerListenerStatusResponse setLoadBalancerListenerStatusWithOptions(const Models::SetLoadBalancerListenerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改监听状态
       *
       * @param request SetLoadBalancerListenerStatusRequest
       * @return SetLoadBalancerListenerStatusResponse
       */
      Models::SetLoadBalancerListenerStatusResponse setLoadBalancerListenerStatus(const Models::SetLoadBalancerListenerStatusRequest &request);

      /**
       * @summary 修改实例名称
       *
       * @param request SetLoadBalancerNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerNameResponse
       */
      Models::SetLoadBalancerNameResponse setLoadBalancerNameWithOptions(const Models::SetLoadBalancerNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例名称
       *
       * @param request SetLoadBalancerNameRequest
       * @return SetLoadBalancerNameResponse
       */
      Models::SetLoadBalancerNameResponse setLoadBalancerName(const Models::SetLoadBalancerNameRequest &request);

      /**
       * @summary 修改实例状态
       *
       * @param request SetLoadBalancerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatusWithOptions(const Models::SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例状态
       *
       * @param request SetLoadBalancerStatusRequest
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatus(const Models::SetLoadBalancerStatusRequest &request);

      /**
       * @summary 更新tcp监听
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttributeWithOptions(const Models::SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新tcp监听
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttribute(const Models::SetLoadBalancerTCPListenerAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Slb20130221
#endif
