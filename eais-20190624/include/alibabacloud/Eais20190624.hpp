// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EAIS20190624_HPP_
#define ALIBABACLOUD_EAIS20190624_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eais20190624Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eais20190624.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 将弹性加速计算实例挂载到ECS实例上
       *
       * @param request AttachEaiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachEaiResponse
       */
      Models::AttachEaiResponse attachEaiWithOptions(const Models::AttachEaiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将弹性加速计算实例挂载到ECS实例上
       *
       * @param request AttachEaiRequest
       * @return AttachEaiResponse
       */
      Models::AttachEaiResponse attachEai(const Models::AttachEaiRequest &request);

      /**
       * @summary 将EI绑定到ECS或ECI实例上
       *
       * @param request AttachEaisEiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachEaisEiResponse
       */
      Models::AttachEaisEiResponse attachEaisEiWithOptions(const Models::AttachEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将EI绑定到ECS或ECI实例上
       *
       * @param request AttachEaisEiRequest
       * @return AttachEaisEiResponse
       */
      Models::AttachEaisEiResponse attachEaisEi(const Models::AttachEaisEiRequest &request);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 创建一个弹性加速计算实例
       *
       * @param request CreateEaiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEaiResponse
       */
      Models::CreateEaiResponse createEaiWithOptions(const Models::CreateEaiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个弹性加速计算实例
       *
       * @param request CreateEaiRequest
       * @return CreateEaiResponse
       */
      Models::CreateEaiResponse createEai(const Models::CreateEaiRequest &request);

      /**
       * @summary 创建一个EAIS实例和ECI实例并绑定
       *
       * @param tmpReq CreateEaiEciRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEaiEciResponse
       */
      Models::CreateEaiEciResponse createEaiEciWithOptions(const Models::CreateEaiEciRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个EAIS实例和ECI实例并绑定
       *
       * @param request CreateEaiEciRequest
       * @return CreateEaiEciResponse
       */
      Models::CreateEaiEciResponse createEaiEci(const Models::CreateEaiEciRequest &request);

      /**
       * @summary 创建一个EAIS实例和ECS实例并绑定
       *
       * @param tmpReq CreateEaiEcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEaiEcsResponse
       */
      Models::CreateEaiEcsResponse createEaiEcsWithOptions(const Models::CreateEaiEcsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个EAIS实例和ECS实例并绑定
       *
       * @param request CreateEaiEcsRequest
       * @return CreateEaiEcsResponse
       */
      Models::CreateEaiEcsResponse createEaiEcs(const Models::CreateEaiEcsRequest &request);

      /**
       * @summary 创建一个EAIS Jupyter环境
       *
       * @param tmpReq CreateEaiJupyterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEaiJupyterResponse
       */
      Models::CreateEaiJupyterResponse createEaiJupyterWithOptions(const Models::CreateEaiJupyterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个EAIS Jupyter环境
       *
       * @param request CreateEaiJupyterRequest
       * @return CreateEaiJupyterResponse
       */
      Models::CreateEaiJupyterResponse createEaiJupyter(const Models::CreateEaiJupyterRequest &request);

      /**
       * @summary 创建一个弹性加速计算实例
       *
       * @param request CreateEaisEiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEaisEiResponse
       */
      Models::CreateEaisEiResponse createEaisEiWithOptions(const Models::CreateEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个弹性加速计算实例
       *
       * @param request CreateEaisEiRequest
       * @return CreateEaisEiResponse
       */
      Models::CreateEaisEiResponse createEaisEi(const Models::CreateEaisEiRequest &request);

      /**
       * @summary 释放一个弹性加速计算实例
       *
       * @param request DeleteEaiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEaiResponse
       */
      Models::DeleteEaiResponse deleteEaiWithOptions(const Models::DeleteEaiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放一个弹性加速计算实例
       *
       * @param request DeleteEaiRequest
       * @return DeleteEaiResponse
       */
      Models::DeleteEaiResponse deleteEai(const Models::DeleteEaiRequest &request);

      /**
       * @summary 释放一个弹性加速计算实例以及与其绑定的ECS或ECI实例
       *
       * @param request DeleteEaiAllRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEaiAllResponse
       */
      Models::DeleteEaiAllResponse deleteEaiAllWithOptions(const Models::DeleteEaiAllRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放一个弹性加速计算实例以及与其绑定的ECS或ECI实例
       *
       * @param request DeleteEaiAllRequest
       * @return DeleteEaiAllResponse
       */
      Models::DeleteEaiAllResponse deleteEaiAll(const Models::DeleteEaiAllRequest &request);

      /**
       * @summary 释放弹性加速计算实例
       *
       * @param request DeleteEaisEiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEaisEiResponse
       */
      Models::DeleteEaisEiResponse deleteEaisEiWithOptions(const Models::DeleteEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放弹性加速计算实例
       *
       * @param request DeleteEaisEiRequest
       * @return DeleteEaisEiResponse
       */
      Models::DeleteEaisEiResponse deleteEaisEi(const Models::DeleteEaisEiRequest &request);

      /**
       * @summary 查询一个或多个弹性加速计算实例的详细信息
       *
       * @param request DescribeEaisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEaisResponse
       */
      Models::DescribeEaisResponse describeEaisWithOptions(const Models::DescribeEaisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个或多个弹性加速计算实例的详细信息
       *
       * @param request DescribeEaisRequest
       * @return DescribeEaisResponse
       */
      Models::DescribeEaisResponse describeEais(const Models::DescribeEaisRequest &request);

      /**
       * @summary 查询您可以使用的阿里云地域
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询您可以使用的阿里云地域
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary 从ECS实例上卸载弹性加速计算实例
       *
       * @param request DetachEaiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachEaiResponse
       */
      Models::DetachEaiResponse detachEaiWithOptions(const Models::DetachEaiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从ECS实例上卸载弹性加速计算实例
       *
       * @param request DetachEaiRequest
       * @return DetachEaiResponse
       */
      Models::DetachEaiResponse detachEai(const Models::DetachEaiRequest &request);

      /**
       * @summary 将EI实例与ECS或ECI实例解绑
       *
       * @param request DetachEaisEiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachEaisEiResponse
       */
      Models::DetachEaisEiResponse detachEaisEiWithOptions(const Models::DetachEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将EI实例与ECS或ECI实例解绑
       *
       * @param request DetachEaisEiRequest
       * @return DetachEaisEiResponse
       */
      Models::DetachEaisEiResponse detachEaisEi(const Models::DetachEaisEiRequest &request);

      /**
       * @summary 获取EAIS实例级别的监控数据
       *
       * @param request GetInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceMetricsResponse
       */
      Models::GetInstanceMetricsResponse getInstanceMetricsWithOptions(const Models::GetInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取EAIS实例级别的监控数据
       *
       * @param request GetInstanceMetricsRequest
       * @return GetInstanceMetricsResponse
       */
      Models::GetInstanceMetricsResponse getInstanceMetrics(const Models::GetInstanceMetricsRequest &request);

      /**
       * @summary 查询标签列表
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询标签列表
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 启动一个部署了notebook的弹性加速计算实例
       *
       * @param request StartEaiJupyterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEaiJupyterResponse
       */
      Models::StartEaiJupyterResponse startEaiJupyterWithOptions(const Models::StartEaiJupyterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动一个部署了notebook的弹性加速计算实例
       *
       * @param request StartEaiJupyterRequest
       * @return StartEaiJupyterResponse
       */
      Models::StartEaiJupyterResponse startEaiJupyter(const Models::StartEaiJupyterRequest &request);

      /**
       * @summary 启动一个弹性加速计算实例
       *
       * @param request StartEaisEiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEaisEiResponse
       */
      Models::StartEaisEiResponse startEaisEiWithOptions(const Models::StartEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动一个弹性加速计算实例
       *
       * @param request StartEaisEiRequest
       * @return StartEaisEiResponse
       */
      Models::StartEaisEiResponse startEaisEi(const Models::StartEaisEiRequest &request);

      /**
       * @summary 停止一个部署了notebook的弹性加速计算实例
       *
       * @param request StopEaiJupyterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopEaiJupyterResponse
       */
      Models::StopEaiJupyterResponse stopEaiJupyterWithOptions(const Models::StopEaiJupyterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止一个部署了notebook的弹性加速计算实例
       *
       * @param request StopEaiJupyterRequest
       * @return StopEaiJupyterResponse
       */
      Models::StopEaiJupyterResponse stopEaiJupyter(const Models::StopEaiJupyterRequest &request);

      /**
       * @summary 停止一个弹性加速计算实例
       *
       * @param request StopEaisEiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopEaisEiResponse
       */
      Models::StopEaisEiResponse stopEaisEiWithOptions(const Models::StopEaisEiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止一个弹性加速计算实例
       *
       * @param request StopEaisEiRequest
       * @return StopEaisEiResponse
       */
      Models::StopEaisEiResponse stopEaisEi(const Models::StopEaisEiRequest &request);

      /**
       * @summary 为弹性加速计算实例创建并绑定标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为弹性加速计算实例创建并绑定标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 解绑并删除标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑并删除标签
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
