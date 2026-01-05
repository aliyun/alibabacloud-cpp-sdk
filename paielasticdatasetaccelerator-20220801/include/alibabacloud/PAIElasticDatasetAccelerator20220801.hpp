// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIELASTICDATASETACCELERATOR20220801_HPP_
#define ALIBABACLOUD_PAIELASTICDATASETACCELERATOR20220801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PAIElasticDatasetAccelerator20220801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PAIElasticDatasetAccelerator20220801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 将一个挂载点关联到一个数据集加速槽上。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindEndpointResponse
       */
      Models::BindEndpointResponse bindEndpointWithOptions(const string &EndpointId, const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将一个挂载点关联到一个数据集加速槽上。
       *
       * @return BindEndpointResponse
       */
      Models::BindEndpointResponse bindEndpoint(const string &EndpointId, const string &SlotId);

      /**
       * @summary 创建并注册一个数据集加速槽挂载点。
       *
       * @param request CreateEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpointWithOptions(const Models::CreateEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建并注册一个数据集加速槽挂载点。
       *
       * @param request CreateEndpointRequest
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpoint(const Models::CreateEndpointRequest &request);

      /**
       * @summary 创建数据集加速实例
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据集加速实例
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建并注册一个 数据集加速槽。
       *
       * @param request CreateSlotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlotResponse
       */
      Models::CreateSlotResponse createSlotWithOptions(const Models::CreateSlotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建并注册一个 数据集加速槽。
       *
       * @param request CreateSlotRequest
       * @return CreateSlotResponse
       */
      Models::CreateSlotResponse createSlot(const Models::CreateSlotRequest &request);

      /**
       * @summary 同时创建并注册多个数据集加速槽，并使用相同的一组数据加速槽挂载点。
       *
       * @param request CreateSlotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlotsResponse
       */
      Models::CreateSlotsResponse createSlotsWithOptions(const Models::CreateSlotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同时创建并注册多个数据集加速槽，并使用相同的一组数据加速槽挂载点。
       *
       * @param request CreateSlotsRequest
       * @return CreateSlotsResponse
       */
      Models::CreateSlotsResponse createSlots(const Models::CreateSlotsRequest &request);

      /**
       * @summary 针对一个资源，创建一个标签。
       *
       * @param request CreateTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const Models::CreateTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 针对一个资源，创建一个标签。
       *
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const Models::CreateTagRequest &request);

      /**
       * @summary 删除一个数据集加速槽挂载点。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpointWithOptions(const string &EndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个数据集加速槽挂载点。
       *
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpoint(const string &EndpointId);

      /**
       * @summary 删除一个数据集加速实例。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个数据集加速实例。
       *
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &InstanceId);

      /**
       * @summary 删除一个数据集加速槽。
       *
       * @param request DeleteSlotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlotWithOptions(const string &SlotId, const Models::DeleteSlotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个数据集加速槽。
       *
       * @param request DeleteSlotRequest
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlot(const string &SlotId, const Models::DeleteSlotRequest &request);

      /**
       * @summary 删除一个资源上的一个标签。
       *
       * @param request DeleteTagRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTagWithOptions(const Models::DeleteTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个资源上的一个标签。
       *
       * @param request DeleteTagRequest
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTag(const Models::DeleteTagRequest &request);

      /**
       * @summary 获取指定数据集加速组件的信息。
       *
       * @param tmpReq DescribeComponentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentResponse
       */
      Models::DescribeComponentResponse describeComponentWithOptions(const string &ComponentId, const Models::DescribeComponentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定数据集加速组件的信息。
       *
       * @param request DescribeComponentRequest
       * @return DescribeComponentResponse
       */
      Models::DescribeComponentResponse describeComponent(const string &ComponentId, const Models::DescribeComponentRequest &request);

      /**
       * @summary 获取指定数据集加速槽挂载点的信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointResponse
       */
      Models::DescribeEndpointResponse describeEndpointWithOptions(const string &EndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定数据集加速槽挂载点的信息。
       *
       * @return DescribeEndpointResponse
       */
      Models::DescribeEndpointResponse describeEndpoint(const string &EndpointId);

      /**
       * @summary 获取指定数据集加速实例信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定数据集加速实例信息。
       *
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const string &InstanceId);

      /**
       * @summary 获取指定数据集加速槽的信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlotResponse
       */
      Models::DescribeSlotResponse describeSlotWithOptions(const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定数据集加速槽的信息。
       *
       * @return DescribeSlotResponse
       */
      Models::DescribeSlotResponse describeSlot(const string &SlotId);

      /**
       * @summary 获取数据集加速组件的信息列表。
       *
       * @param request ListComponentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const Models::ListComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集加速组件的信息列表。
       *
       * @param request ListComponentsRequest
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents(const Models::ListComponentsRequest &request);

      /**
       * @summary 获取数据集加速槽挂载点的信息列表。
       *
       * @param request ListEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEndpointsResponse
       */
      Models::ListEndpointsResponse listEndpointsWithOptions(const Models::ListEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集加速槽挂载点的信息列表。
       *
       * @param request ListEndpointsRequest
       * @return ListEndpointsResponse
       */
      Models::ListEndpointsResponse listEndpoints(const Models::ListEndpointsRequest &request);

      /**
       * @summary 获取数据集加速实例信息列表。
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集加速实例信息列表。
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 获取数据集加速槽的信息列表。
       *
       * @param request ListSlotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSlotsResponse
       */
      Models::ListSlotsResponse listSlotsWithOptions(const Models::ListSlotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集加速槽的信息列表。
       *
       * @param request ListSlotsRequest
       * @return ListSlotsResponse
       */
      Models::ListSlotsResponse listSlots(const Models::ListSlotsRequest &request);

      /**
       * @summary 获取标签列表信息。
       *
       * @param request ListTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标签列表信息。
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary 查询并获取监控指标信息。
       *
       * @param tmpReq QueryInstanceMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceMetricsResponse
       */
      Models::QueryInstanceMetricsResponse queryInstanceMetricsWithOptions(const string &InstanceId, const Models::QueryInstanceMetricsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询并获取监控指标信息。
       *
       * @param request QueryInstanceMetricsRequest
       * @return QueryInstanceMetricsResponse
       */
      Models::QueryInstanceMetricsResponse queryInstanceMetrics(const string &InstanceId, const Models::QueryInstanceMetricsRequest &request);

      /**
       * @summary 查询并获取监控指标信息
       *
       * @param tmpReq QuerySlotMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySlotMetricsResponse
       */
      Models::QuerySlotMetricsResponse querySlotMetricsWithOptions(const string &SlotId, const Models::QuerySlotMetricsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询并获取监控指标信息
       *
       * @param request QuerySlotMetricsRequest
       * @return QuerySlotMetricsResponse
       */
      Models::QuerySlotMetricsResponse querySlotMetrics(const string &SlotId, const Models::QuerySlotMetricsRequest &request);

      /**
       * @summary 查询当前账号下数据集加速相关的统计信息。
       *
       * @param request QueryStatisticRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStatisticResponse
       */
      Models::QueryStatisticResponse queryStatisticWithOptions(const Models::QueryStatisticRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前账号下数据集加速相关的统计信息。
       *
       * @param request QueryStatisticRequest
       * @return QueryStatisticResponse
       */
      Models::QueryStatisticResponse queryStatistic(const Models::QueryStatisticRequest &request);

      /**
       * @summary 重载数据加速槽的数据
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReloadSlotResponse
       */
      Models::ReloadSlotResponse reloadSlotWithOptions(const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重载数据加速槽的数据
       *
       * @return ReloadSlotResponse
       */
      Models::ReloadSlotResponse reloadSlot(const string &SlotId);

      /**
       * @summary 停止一个数据集加速槽。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSlotResponse
       */
      Models::StopSlotResponse stopSlotWithOptions(const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止一个数据集加速槽。
       *
       * @return StopSlotResponse
       */
      Models::StopSlotResponse stopSlot(const string &SlotId);

      /**
       * @summary 取消挂载点关联和指定数据集加速槽的关联关系。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindEndpointResponse
       */
      Models::UnbindEndpointResponse unbindEndpointWithOptions(const string &EndpointId, const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消挂载点关联和指定数据集加速槽的关联关系。
       *
       * @return UnbindEndpointResponse
       */
      Models::UnbindEndpointResponse unbindEndpoint(const string &EndpointId, const string &SlotId);

      /**
       * @summary 更新一个数据集加速实例的信息。
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &InstanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个数据集加速实例的信息。
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &InstanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @summary 更新一个数据集加速槽的信息。
       *
       * @param request UpdateSlotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSlotResponse
       */
      Models::UpdateSlotResponse updateSlotWithOptions(const string &SlotId, const Models::UpdateSlotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个数据集加速槽的信息。
       *
       * @param request UpdateSlotRequest
       * @return UpdateSlotResponse
       */
      Models::UpdateSlotResponse updateSlot(const string &SlotId, const Models::UpdateSlotRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
