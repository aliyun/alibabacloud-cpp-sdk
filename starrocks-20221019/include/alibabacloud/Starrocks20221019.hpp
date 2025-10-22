// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STARROCKS20221019_HPP_
#define ALIBABACLOUD_STARROCKS20221019_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Starrocks20221019Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Starrocks20221019.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 创建StarRocks集群
       *
       * @param request CreateInstanceV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceV1Response
       */
      Models::CreateInstanceV1Response createInstanceV1WithOptions(const Models::CreateInstanceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建StarRocks集群
       *
       * @param request CreateInstanceV1Request
       * @return CreateInstanceV1Response
       */
      Models::CreateInstanceV1Response createInstanceV1(const Models::CreateInstanceV1Request &request);

      /**
       * @summary 为用户创建AliyunServiceRoleForEMRStarRocks
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为用户创建AliyunServiceRoleForEMRStarRocks
       *
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole();

      /**
       * @summary 根据集群ID或者名称等信息过滤集群
       *
       * @param tmpReq DescribeInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据集群ID或者名称等信息过滤集群
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary 获取节点组信息
       *
       * @param request DescribeNodeGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeGroupsResponse
       */
      Models::DescribeNodeGroupsResponse describeNodeGroupsWithOptions(const Models::DescribeNodeGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节点组信息
       *
       * @param request DescribeNodeGroupsRequest
       * @return DescribeNodeGroupsResponse
       */
      Models::DescribeNodeGroupsResponse describeNodeGroups(const Models::DescribeNodeGroupsRequest &request);

      /**
       * @summary Modifies the number of CUs for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the number of CUs for a warehouse of only StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you modify the number of CUs for a warehouse, the billing of CUs has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of CUs.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of CUs before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyCuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCuResponse
       */
      Models::ModifyCuResponse modifyCuWithOptions(const Models::ModifyCuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the number of CUs for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the number of CUs for a warehouse of only StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you modify the number of CUs for a warehouse, the billing of CUs has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of CUs.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of CUs before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyCuRequest
       * @return ModifyCuResponse
       */
      Models::ModifyCuResponse modifyCu(const Models::ModifyCuRequest &request);

      /**
       * @summary Performs a precheck before you modify the number of CUs for a warehouse.
       *
       * @param request ModifyCuPreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCuPreCheckResponse
       */
      Models::ModifyCuPreCheckResponse modifyCuPreCheckWithOptions(const Models::ModifyCuPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck before you modify the number of CUs for a warehouse.
       *
       * @param request ModifyCuPreCheckRequest
       * @return ModifyCuPreCheckResponse
       */
      Models::ModifyCuPreCheckResponse modifyCuPreCheck(const Models::ModifyCuPreCheckRequest &request);

      /**
       * @summary Increases the number of disks for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can increase the number of disks only for StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you increase the number of disks for a warehouse, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of disks before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskNumberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskNumberResponse
       */
      Models::ModifyDiskNumberResponse modifyDiskNumberWithOptions(const Models::ModifyDiskNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Increases the number of disks for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can increase the number of disks only for StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you increase the number of disks for a warehouse, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of disks before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskNumberRequest
       * @return ModifyDiskNumberResponse
       */
      Models::ModifyDiskNumberResponse modifyDiskNumber(const Models::ModifyDiskNumberRequest &request);

      /**
       * @summary Modifies the disk performance level for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/en/product/ecs?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.47c9281fkIZGiB#pricing) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the disk performance level only for StarRocks instances of Standard Edition.
       * *   You can modify the disk performance level only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * *   You cannot downgrade the performance level to PL0.
       * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, expand the ESSD and try again. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
       * After the disk performance level is changed, the billing of the disk has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk performance level before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskPerformanceLevelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskPerformanceLevelResponse
       */
      Models::ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevelWithOptions(const Models::ModifyDiskPerformanceLevelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the disk performance level for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/en/product/ecs?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.47c9281fkIZGiB#pricing) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the disk performance level only for StarRocks instances of Standard Edition.
       * *   You can modify the disk performance level only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * *   You cannot downgrade the performance level to PL0.
       * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, expand the ESSD and try again. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
       * After the disk performance level is changed, the billing of the disk has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk performance level before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskPerformanceLevelRequest
       * @return ModifyDiskPerformanceLevelResponse
       */
      Models::ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevel(const Models::ModifyDiskPerformanceLevelRequest &request);

      /**
       * @summary Expands the disk size for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can expand the disk size only for StarRocks instances of Standard Edition.
       * *   You can expand the disk size only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you expand the disk size, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk size.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk size before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskSizeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskSizeResponse
       */
      Models::ModifyDiskSizeResponse modifyDiskSizeWithOptions(const Models::ModifyDiskSizeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the disk size for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can expand the disk size only for StarRocks instances of Standard Edition.
       * *   You can expand the disk size only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you expand the disk size, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk size.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk size before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskSizeRequest
       * @return ModifyDiskSizeResponse
       */
      Models::ModifyDiskSizeResponse modifyDiskSize(const Models::ModifyDiskSizeRequest &request);

      /**
       * @summary Modifies the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can modify the number of nodes in a warehouse of only StarRocks instances of Standard Edition.
       * *   The instance must be in the Running state.
       * *   The number of frontend nodes (FEs) cannot be an even number, and you cannot reduce the number of FE nodes.
       * After you modify the number of nodes in a warehouse, the billing of nodes has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of nodes.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of nodes before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyNodeNumberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeNumberResponse
       */
      Models::ModifyNodeNumberResponse modifyNodeNumberWithOptions(const Models::ModifyNodeNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can modify the number of nodes in a warehouse of only StarRocks instances of Standard Edition.
       * *   The instance must be in the Running state.
       * *   The number of frontend nodes (FEs) cannot be an even number, and you cannot reduce the number of FE nodes.
       * After you modify the number of nodes in a warehouse, the billing of nodes has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of nodes.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of nodes before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyNodeNumberRequest
       * @return ModifyNodeNumberResponse
       */
      Models::ModifyNodeNumberResponse modifyNodeNumber(const Models::ModifyNodeNumberRequest &request);

      /**
       * @summary Performs a precheck before you modify the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request ModifyNodeNumberPreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeNumberPreCheckResponse
       */
      Models::ModifyNodeNumberPreCheckResponse modifyNodeNumberPreCheckWithOptions(const Models::ModifyNodeNumberPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck before you modify the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request ModifyNodeNumberPreCheckRequest
       * @return ModifyNodeNumberPreCheckResponse
       */
      Models::ModifyNodeNumberPreCheckResponse modifyNodeNumberPreCheck(const Models::ModifyNodeNumberPreCheckRequest &request);

      /**
       * @summary Queries the versions of an E-MapReduce (EMR) Serverless StarRocks instance that the versions that you can upgrade to. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. You can call this operation to query the minor versions or major versions that the versions that you can upgrade to.
       *
       * @param request QueryUpgradableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUpgradableVersionsResponse
       */
      Models::QueryUpgradableVersionsResponse queryUpgradableVersionsWithOptions(const Models::QueryUpgradableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of an E-MapReduce (EMR) Serverless StarRocks instance that the versions that you can upgrade to. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. You can call this operation to query the minor versions or major versions that the versions that you can upgrade to.
       *
       * @param request QueryUpgradableVersionsRequest
       * @return QueryUpgradableVersionsResponse
       */
      Models::QueryUpgradableVersionsResponse queryUpgradableVersions(const Models::QueryUpgradableVersionsRequest &request);

      /**
       * @summary Releases a pay-as-you-go E-MapReduce (EMR) Serverless StarRocks instance. To unsubscribe from a subscription instance, go to the Unsubscribe page of the Expenses and Costs console.
       *
       * @description **
       * **Warning:** After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       *
       * @param request ReleaseInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go E-MapReduce (EMR) Serverless StarRocks instance. To unsubscribe from a subscription instance, go to the Unsubscribe page of the Expenses and Costs console.
       *
       * @description **
       * **Warning:** After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart a StarRocks instance, the operation sets the status of the instance to Restarting and begins the restart process. When the status of the instance changes to Running, the instance is restarted.
       *
       * @param request RestartInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart a StarRocks instance, the operation sets the status of the instance to Restarting and begins the restart process. When the status of the instance changes to Running, the instance is restarted.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary 打标
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打标
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 删除标签
       *
       * @param tmpReq UnTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标签
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Modifies the name of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request UpdateInstanceNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const Models::UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const Models::UpdateInstanceNameRequest &request);

      /**
       * @summary Upgrades the version of an E-MapReduce (EMR) Serverless StarRocks instance. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. This operation can be used to upgrade the minor version or major version of a StarRocks instance. You can call the QueryUpgradableVersions operation to query the versions that you can upgrade to.
       *
       * @description The instance must be in the Running state when you call this operation.
       *
       * @param request UpgradeVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeVersionResponse
       */
      Models::UpgradeVersionResponse upgradeVersionWithOptions(const Models::UpgradeVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of an E-MapReduce (EMR) Serverless StarRocks instance. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. This operation can be used to upgrade the minor version or major version of a StarRocks instance. You can call the QueryUpgradableVersions operation to query the versions that you can upgrade to.
       *
       * @description The instance must be in the Running state when you call this operation.
       *
       * @param request UpgradeVersionRequest
       * @return UpgradeVersionResponse
       */
      Models::UpgradeVersionResponse upgradeVersion(const Models::UpgradeVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
