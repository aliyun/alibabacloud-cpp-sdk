// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HOLOGRAM20220601_HPP_
#define ALIBABACLOUD_HOLOGRAM20220601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Hologram20220601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Hologram20220601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Updates a resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a virtual warehouse.
       *
       * @param request CreateHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHoloWarehouseResponse
       */
      Models::CreateHoloWarehouseResponse createHoloWarehouseWithOptions(const string &instanceId, const Models::CreateHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual warehouse.
       *
       * @param request CreateHoloWarehouseRequest
       * @return CreateHoloWarehouseResponse
       */
      Models::CreateHoloWarehouseResponse createHoloWarehouse(const string &instanceId, const Models::CreateHoloWarehouseRequest &request);

      /**
       * @summary Creates a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing details of Hologres, see [Pricing](https://www.alibabacloud.com/help/en/hologres/developer-reference/api-hologram-2022-06-01-createinstance).
       * *   When you purchase a Hologres instance, you must specify the region and zone in which the Hologres instance resides. A region may correspond to multiple zones. Example:
       * <!---->
       *     cn-hangzhou: cn-hangzhou-h, cn-hangzhou-j
       *        cn-shanghai: cn-shanghai-e, cn-shanghai-f
       *        cn-beijing: cn-beijing-i, cn-beijing-g
       *        cn-zhangjiakou: cn-zhangjiakou-b
       *        cn-shenzhen: cn-shenzhen-e
       *        cn-hongkong: cn-hongkong-b
       *        cn-shanghai-finance-1: cn-shanghai-finance-1z
       *        ap-northeast-1: ap-northeast-1a
       *        ap-southeast-1: ap-southeast-1c
       *        ap-southeast-3: ap-southeast-3b
       *        ap-southeast-5: ap-southeast-5b
       *        ap-south-1: ap-south-1b
       *        eu-central-1: eu-central-1a
       *        us-east-1: us-east-1a
       *        us-west-1: us-west-1b
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing details of Hologres, see [Pricing](https://www.alibabacloud.com/help/en/hologres/developer-reference/api-hologram-2022-06-01-createinstance).
       * *   When you purchase a Hologres instance, you must specify the region and zone in which the Hologres instance resides. A region may correspond to multiple zones. Example:
       * <!---->
       *     cn-hangzhou: cn-hangzhou-h, cn-hangzhou-j
       *        cn-shanghai: cn-shanghai-e, cn-shanghai-f
       *        cn-beijing: cn-beijing-i, cn-beijing-g
       *        cn-zhangjiakou: cn-zhangjiakou-b
       *        cn-shenzhen: cn-shenzhen-e
       *        cn-hongkong: cn-hongkong-b
       *        cn-shanghai-finance-1: cn-shanghai-finance-1z
       *        ap-northeast-1: ap-northeast-1a
       *        ap-southeast-1: ap-southeast-1c
       *        ap-southeast-3: ap-southeast-3b
       *        ap-southeast-5: ap-southeast-5b
       *        ap-south-1: ap-south-1b
       *        eu-central-1: eu-central-1a
       *        us-east-1: us-east-1a
       *        us-west-1: us-west-1b
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Deletes a virtual warehouse.
       *
       * @param request DeleteHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHoloWarehouseResponse
       */
      Models::DeleteHoloWarehouseResponse deleteHoloWarehouseWithOptions(const string &instanceId, const Models::DeleteHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual warehouse.
       *
       * @param request DeleteHoloWarehouseRequest
       * @return DeleteHoloWarehouseResponse
       */
      Models::DeleteHoloWarehouseResponse deleteHoloWarehouse(const string &instanceId, const Models::DeleteHoloWarehouseRequest &request);

      /**
       * @summary Deletes a Hologres instance.
       *
       * @description > Before you call this operation, read the documentation and make sure that you understand the prerequisites and impacts of this operation.
       * *   After you delete a Hologres instance, data and objects in the instance cannot be restored. Proceed with caution. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview?spm=a2c63.p38356.0.0.efc33b87i5pDl7).
       * *   You can delete only pay-as-you-go instances.
       *
       * @param request DeleteInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &instanceId, const Models::DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Hologres instance.
       *
       * @description > Before you call this operation, read the documentation and make sure that you understand the prerequisites and impacts of this operation.
       * *   After you delete a Hologres instance, data and objects in the instance cannot be restored. Proceed with caution. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview?spm=a2c63.p38356.0.0.efc33b87i5pDl7).
       * *   You can delete only pay-as-you-go instances.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &instanceId, const Models::DeleteInstanceRequest &request);

      /**
       * @summary Disables data lake acceleration.
       *
       * @param request DisableHiveAccessRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableHiveAccessResponse
       */
      Models::DisableHiveAccessResponse disableHiveAccessWithOptions(const string &instanceId, const Models::DisableHiveAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables data lake acceleration.
       *
       * @param request DisableHiveAccessRequest
       * @return DisableHiveAccessResponse
       */
      Models::DisableHiveAccessResponse disableHiveAccess(const string &instanceId, const Models::DisableHiveAccessRequest &request);

      /**
       * @summary 关闭SSL
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSSLResponse
       */
      Models::DisableSSLResponse disableSSLWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭SSL
       *
       * @return DisableSSLResponse
       */
      Models::DisableSSLResponse disableSSL(const string &instanceId);

      /**
       * @summary Enables data lake acceleration.
       *
       * @param request EnableHiveAccessRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHiveAccessResponse
       */
      Models::EnableHiveAccessResponse enableHiveAccessWithOptions(const string &instanceId, const Models::EnableHiveAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables data lake acceleration.
       *
       * @param request EnableHiveAccessRequest
       * @return EnableHiveAccessResponse
       */
      Models::EnableHiveAccessResponse enableHiveAccess(const string &instanceId, const Models::EnableHiveAccessRequest &request);

      /**
       * @summary 打开SSL
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSSLResponse
       */
      Models::EnableSSLResponse enableSSLWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 打开SSL
       *
       * @return EnableSSLResponse
       */
      Models::EnableSSLResponse enableSSL(const string &instanceId);

      /**
       * @summary 获得证书信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateAttributeResponse
       */
      Models::GetCertificateAttributeResponse getCertificateAttributeWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得证书信息
       *
       * @return GetCertificateAttributeResponse
       */
      Models::GetCertificateAttributeResponse getCertificateAttribute(const string &instanceId);

      /**
       * @summary Obtains the details of an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of an instance.
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &instanceId);

      /**
       * @summary 获得根证书
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRootCertificateResponse
       */
      Models::GetRootCertificateResponse getRootCertificateWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得根证书
       *
       * @return GetRootCertificateResponse
       */
      Models::GetRootCertificateResponse getRootCertificate(const string &instanceId);

      /**
       * @summary Queries details of a virtual warehouse instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWarehouseDetailResponse
       */
      Models::GetWarehouseDetailResponse getWarehouseDetailWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of a virtual warehouse instance.
       *
       * @return GetWarehouseDetailResponse
       */
      Models::GetWarehouseDetailResponse getWarehouseDetail(const string &instanceId);

      /**
       * @summary Queries a list of backups. A backup is a full data snapshot of an instance at the end of the snapshot time. You can purchase another instance to completely restore the original data.
       *
       * @param request ListBackupDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackupDataResponse
       */
      Models::ListBackupDataResponse listBackupDataWithOptions(const Models::ListBackupDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backups. A backup is a full data snapshot of an instance at the end of the snapshot time. You can purchase another instance to completely restore the original data.
       *
       * @param request ListBackupDataRequest
       * @return ListBackupDataResponse
       */
      Models::ListBackupDataResponse listBackupData(const Models::ListBackupDataRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the list of virtual warehouse instances.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarehousesResponse
       */
      Models::ListWarehousesResponse listWarehousesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of virtual warehouse instances.
       *
       * @return ListWarehousesResponse
       */
      Models::ListWarehousesResponse listWarehouses(const string &instanceId);

      /**
       * @summary Triggers shard rebalancing for a virtual warehouse.
       *
       * @param request RebalanceHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebalanceHoloWarehouseResponse
       */
      Models::RebalanceHoloWarehouseResponse rebalanceHoloWarehouseWithOptions(const string &instanceId, const Models::RebalanceHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers shard rebalancing for a virtual warehouse.
       *
       * @param request RebalanceHoloWarehouseRequest
       * @return RebalanceHoloWarehouseResponse
       */
      Models::RebalanceHoloWarehouseResponse rebalanceHoloWarehouse(const string &instanceId, const Models::RebalanceHoloWarehouseRequest &request);

      /**
       * @summary Renames a virtual warehouse.
       *
       * @param request RenameHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameHoloWarehouseResponse
       */
      Models::RenameHoloWarehouseResponse renameHoloWarehouseWithOptions(const string &instanceId, const Models::RenameHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a virtual warehouse.
       *
       * @param request RenameHoloWarehouseRequest
       * @return RenameHoloWarehouseResponse
       */
      Models::RenameHoloWarehouseResponse renameHoloWarehouse(const string &instanceId, const Models::RenameHoloWarehouseRequest &request);

      /**
       * @summary Manually renews a Hologres instance. You can enable monthly auto-renewal when you renew a Hologres instance.
       *
       * @description >  Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   For more information about how to renew a Hologres instance, see [Manage renewals](https://www.alibabacloud.com/help/zh/hologres/product-overview/manage-renewals?spm=a2c63.p38356.0.0.38e731c9VAwtDP).
       * *   You can renew only subscription instances.
       *
       * @param request RenewInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const string &instanceId, const Models::RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually renews a Hologres instance. You can enable monthly auto-renewal when you renew a Hologres instance.
       *
       * @description >  Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   For more information about how to renew a Hologres instance, see [Manage renewals](https://www.alibabacloud.com/help/zh/hologres/product-overview/manage-renewals?spm=a2c63.p38356.0.0.38e731c9VAwtDP).
       * *   You can renew only subscription instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const string &instanceId, const Models::RenewInstanceRequest &request);

      /**
       * @summary 更新证书
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewSSLCertificateResponse
       */
      Models::RenewSSLCertificateResponse renewSSLCertificateWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新证书
       *
       * @return RenewSSLCertificateResponse
       */
      Models::RenewSSLCertificateResponse renewSSLCertificate(const string &instanceId);

      /**
       * @summary Restarts a virtual warehouse.
       *
       * @param request RestartHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartHoloWarehouseResponse
       */
      Models::RestartHoloWarehouseResponse restartHoloWarehouseWithOptions(const string &instanceId, const Models::RestartHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a virtual warehouse.
       *
       * @param request RestartHoloWarehouseRequest
       * @return RestartHoloWarehouseResponse
       */
      Models::RestartHoloWarehouseResponse restartHoloWarehouse(const string &instanceId, const Models::RestartHoloWarehouseRequest &request);

      /**
       * @summary Restarts an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an instance.
       *
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const string &instanceId);

      /**
       * @summary Resumes a virtual warehouse.
       *
       * @param request ResumeHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeHoloWarehouseResponse
       */
      Models::ResumeHoloWarehouseResponse resumeHoloWarehouseWithOptions(const string &instanceId, const Models::ResumeHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a virtual warehouse.
       *
       * @param request ResumeHoloWarehouseRequest
       * @return ResumeHoloWarehouseResponse
       */
      Models::ResumeHoloWarehouseResponse resumeHoloWarehouse(const string &instanceId, const Models::ResumeHoloWarehouseRequest &request);

      /**
       * @summary Resumes an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an instance.
       *
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const string &instanceId);

      /**
       * @summary Scales in or out a virtual warehouse.
       *
       * @param request ScaleHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleHoloWarehouseResponse
       */
      Models::ScaleHoloWarehouseResponse scaleHoloWarehouseWithOptions(const string &instanceId, const Models::ScaleHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales in or out a virtual warehouse.
       *
       * @param request ScaleHoloWarehouseRequest
       * @return ScaleHoloWarehouseResponse
       */
      Models::ScaleHoloWarehouseResponse scaleHoloWarehouse(const string &instanceId, const Models::ScaleHoloWarehouseRequest &request);

      /**
       * @summary Changes the specifications and storage space of a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   During the change of computing resource specifications of a Hologres instance, the instance is unavailable. During the change of storage resource specifications of a Hologres instance, the instance can work normally. Do not frequently change instance specifications. For more information, see [Upgrade or downgrade instance specifications](https://www.alibabacloud.com/help/en/hologres/product-overview/upgrade-or-downgrade-instance-specifications).
       *
       * @param request ScaleInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleInstanceResponse
       */
      Models::ScaleInstanceResponse scaleInstanceWithOptions(const string &instanceId, const Models::ScaleInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications and storage space of a Hologres instance.
       *
       * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
       * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
       * *   During the change of computing resource specifications of a Hologres instance, the instance is unavailable. During the change of storage resource specifications of a Hologres instance, the instance can work normally. Do not frequently change instance specifications. For more information, see [Upgrade or downgrade instance specifications](https://www.alibabacloud.com/help/en/hologres/product-overview/upgrade-or-downgrade-instance-specifications).
       *
       * @param request ScaleInstanceRequest
       * @return ScaleInstanceResponse
       */
      Models::ScaleInstanceResponse scaleInstance(const string &instanceId, const Models::ScaleInstanceRequest &request);

      /**
       * @summary Stops an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an instance.
       *
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const string &instanceId);

      /**
       * @summary Suspends a virtual warehouse.
       *
       * @param request SuspendHoloWarehouseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendHoloWarehouseResponse
       */
      Models::SuspendHoloWarehouseResponse suspendHoloWarehouseWithOptions(const string &instanceId, const Models::SuspendHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a virtual warehouse.
       *
       * @param request SuspendHoloWarehouseRequest
       * @return SuspendHoloWarehouseResponse
       */
      Models::SuspendHoloWarehouseResponse suspendHoloWarehouse(const string &instanceId, const Models::SuspendHoloWarehouseRequest &request);

      /**
       * @summary Changes the name of an instance.
       *
       * @param request UpdateInstanceNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const string &instanceId, const Models::UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of an instance.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const string &instanceId, const Models::UpdateInstanceNameRequest &request);

      /**
       * @summary Modifies the network configuration of an instance.
       *
       * @param request UpdateInstanceNetworkTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNetworkTypeResponse
       */
      Models::UpdateInstanceNetworkTypeResponse updateInstanceNetworkTypeWithOptions(const string &instanceId, const Models::UpdateInstanceNetworkTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network configuration of an instance.
       *
       * @param request UpdateInstanceNetworkTypeRequest
       * @return UpdateInstanceNetworkTypeResponse
       */
      Models::UpdateInstanceNetworkTypeResponse updateInstanceNetworkType(const string &instanceId, const Models::UpdateInstanceNetworkTypeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
