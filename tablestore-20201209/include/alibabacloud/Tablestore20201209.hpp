// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_TABLESTORE20201209_HPP_
#define ALIBABACLOUD_TABLESTORE20201209_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Tablestore20201209Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Tablestore20201209.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 绑定vpc
       *
       * @param request BindInstance2VpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindInstance2VpcResponse
       */
      Models::BindInstance2VpcResponse bindInstance2VpcWithOptions(const Models::BindInstance2VpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定vpc
       *
       * @param request BindInstance2VpcRequest
       * @return BindInstance2VpcResponse
       */
      Models::BindInstance2VpcResponse bindInstance2Vpc(const Models::BindInstance2VpcRequest &request);

      /**
       * @summary Changes the resource group to which an instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which an instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks the validity of a Resource Access Management (RAM) policy for an instance.
       *
       * @param request CheckInstancePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstancePolicyResponse
       */
      Models::CheckInstancePolicyResponse checkInstancePolicyWithOptions(const Models::CheckInstancePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the validity of a Resource Access Management (RAM) policy for an instance.
       *
       * @param request CheckInstancePolicyRequest
       * @return CheckInstancePolicyResponse
       */
      Models::CheckInstancePolicyResponse checkInstancePolicy(const Models::CheckInstancePolicyRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
       * *   Each Alibaba Cloud account can create up to 10 instances. The name of an instance must be unique within the region in which the instance resides.
       * *   After you create an instance, you cannot change the type of the instance. Proceed with caution.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
       * *   Each Alibaba Cloud account can create up to 10 instances. The name of an instance must be unique within the region in which the instance resides.
       * *   After you create an instance, you cannot change the type of the instance. Proceed with caution.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建VCU实例
       *
       * @param request CreateVCUInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVCUInstanceResponse
       */
      Models::CreateVCUInstanceResponse createVCUInstanceWithOptions(const Models::CreateVCUInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建VCU实例
       *
       * @param request CreateVCUInstanceRequest
       * @return CreateVCUInstanceResponse
       */
      Models::CreateVCUInstanceResponse createVCUInstance(const Models::CreateVCUInstanceRequest &request);

      /**
       * @summary Deletes an instance.
       *
       * @description *   Before you delete an instance, make sure that all data tables and time series tables in the instance are deleted and virtual private clouds (VPCs) are unbound from the instance.
       * *   To prevent conflicts, do not create an instance that has the same name as the instance that is being deleted.
       * *   After an instance is deleted, the instance becomes unavailable and the tables, table data, and related indexes in the instance cannot be recovered. Proceed with caution.
       *
       * @param request DeleteInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an instance.
       *
       * @description *   Before you delete an instance, make sure that all data tables and time series tables in the instance are deleted and virtual private clouds (VPCs) are unbound from the instance.
       * *   To prevent conflicts, do not create an instance that has the same name as the instance that is being deleted.
       * *   After an instance is deleted, the instance becomes unavailable and the tables, table data, and related indexes in the instance cannot be recovered. Proceed with caution.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) policy of an instance.
       *
       * @description *   You cannot recover a deleted instance policy. Proceed with caution.
       * *   After you delete an instance policy, the access control that is specified by the instance policy becomes invalid. Make sure that your instance is in a secure environment.
       *
       * @param request DeleteInstancePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstancePolicyResponse
       */
      Models::DeleteInstancePolicyResponse deleteInstancePolicyWithOptions(const Models::DeleteInstancePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) policy of an instance.
       *
       * @description *   You cannot recover a deleted instance policy. Proceed with caution.
       * *   After you delete an instance policy, the access control that is specified by the instance policy becomes invalid. Make sure that your instance is in a secure environment.
       *
       * @param request DeleteInstancePolicyRequest
       * @return DeleteInstancePolicyResponse
       */
      Models::DeleteInstancePolicyResponse deleteInstancePolicy(const Models::DeleteInstancePolicyRequest &request);

      /**
       * @summary 删除VCU实例
       *
       * @param request DeleteVCUInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVCUInstanceResponse
       */
      Models::DeleteVCUInstanceResponse deleteVCUInstanceWithOptions(const Models::DeleteVCUInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除VCU实例
       *
       * @param request DeleteVCUInstanceRequest
       * @return DeleteVCUInstanceResponse
       */
      Models::DeleteVCUInstanceResponse deleteVCUInstance(const Models::DeleteVCUInstanceRequest &request);

      /**
       * @summary Queries supported regions.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries supported regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries instance information.
       *
       * @param request GetInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance information.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary 列举集群类型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterTypeResponse
       */
      Models::ListClusterTypeResponse listClusterTypeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举集群类型
       *
       * @return ListClusterTypeResponse
       */
      Models::ListClusterTypeResponse listClusterType();

      /**
       * @summary Queries instances.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries tagged resources.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tagged resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 获取实例的vpcInfo列表
       *
       * @param request ListVpcInfoByInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcInfoByInstanceResponse
       */
      Models::ListVpcInfoByInstanceResponse listVpcInfoByInstanceWithOptions(const Models::ListVpcInfoByInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例的vpcInfo列表
       *
       * @param request ListVpcInfoByInstanceRequest
       * @return ListVpcInfoByInstanceResponse
       */
      Models::ListVpcInfoByInstanceResponse listVpcInfoByInstance(const Models::ListVpcInfoByInstanceRequest &request);

      /**
       * @summary 获取实例的vpcInfo列表
       *
       * @param request ListVpcInfoByVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcInfoByVpcResponse
       */
      Models::ListVpcInfoByVpcResponse listVpcInfoByVpcWithOptions(const Models::ListVpcInfoByVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例的vpcInfo列表
       *
       * @param request ListVpcInfoByVpcRequest
       * @return ListVpcInfoByVpcResponse
       */
      Models::ListVpcInfoByVpcResponse listVpcInfoByVpc(const Models::ListVpcInfoByVpcRequest &request);

      /**
       * @summary Adds tags to instances.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to instances.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 解绑vpc
       *
       * @param request UnbindInstance2VpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindInstance2VpcResponse
       */
      Models::UnbindInstance2VpcResponse unbindInstance2VpcWithOptions(const Models::UnbindInstance2VpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑vpc
       *
       * @param request UnbindInstance2VpcRequest
       * @return UnbindInstance2VpcResponse
       */
      Models::UnbindInstance2VpcResponse unbindInstance2Vpc(const Models::UnbindInstance2VpcRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @description Removing tags from resources helps simplify resource management, optimize system performance, and mitigate potential security vulnerabilities. After a tag is removed from a resource, the system automatically deletes the tag if the tag is not added to other resources.
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @description Removing tags from resources helps simplify resource management, optimize system performance, and mitigate potential security vulnerabilities. After a tag is removed from a resource, the system automatically deletes the tag if the tag is not added to other resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates instance information.
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates instance information.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Modifies the upper limit for the VCUs of an instance in VCU mode (formerly reserved mode).
       *
       * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
       * *   After you enable scalability for an instance, the default upper limit for the VCUs of the instance is the sum of the scalability and the reserved VCUs.
       * *   To use more computing resources when your business grows, you can modify the upper limit for the VCUs of your instance. The new upper limit for the VCUs of your instance immediately takes effect.
       *
       * @param request UpdateInstanceElasticVCUUpperLimitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceElasticVCUUpperLimitResponse
       */
      Models::UpdateInstanceElasticVCUUpperLimitResponse updateInstanceElasticVCUUpperLimitWithOptions(const Models::UpdateInstanceElasticVCUUpperLimitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the upper limit for the VCUs of an instance in VCU mode (formerly reserved mode).
       *
       * @description *   **Before you call this operation, you must understand the billing and pricing of Tablestore. For more information, see [Billing overview](https://help.aliyun.com/document_detail/27291.html).**
       * *   After you enable scalability for an instance, the default upper limit for the VCUs of the instance is the sum of the scalability and the reserved VCUs.
       * *   To use more computing resources when your business grows, you can modify the upper limit for the VCUs of your instance. The new upper limit for the VCUs of your instance immediately takes effect.
       *
       * @param request UpdateInstanceElasticVCUUpperLimitRequest
       * @return UpdateInstanceElasticVCUUpperLimitResponse
       */
      Models::UpdateInstanceElasticVCUUpperLimitResponse updateInstanceElasticVCUUpperLimit(const Models::UpdateInstanceElasticVCUUpperLimitRequest &request);

      /**
       * @summary Modifies a Resource Access Management (RAM) policy for an instance.
       *
       * @param request UpdateInstancePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstancePolicyResponse
       */
      Models::UpdateInstancePolicyResponse updateInstancePolicyWithOptions(const Models::UpdateInstancePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Resource Access Management (RAM) policy for an instance.
       *
       * @param request UpdateInstancePolicyRequest
       * @return UpdateInstancePolicyResponse
       */
      Models::UpdateInstancePolicyResponse updateInstancePolicy(const Models::UpdateInstancePolicyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
