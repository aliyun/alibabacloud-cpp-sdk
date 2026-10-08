// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RDS20140815_HPP_
#define ALIBABACLOUD_RDS20140815_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Rds20140815Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Rds20140815.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 接受并授权执行系统事件操作
       *
       * @param request AcceptRCInquiredSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptRCInquiredSystemEventResponse
       */
      Models::AcceptRCInquiredSystemEventResponse acceptRCInquiredSystemEventWithOptions(const Models::AcceptRCInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 接受并授权执行系统事件操作
       *
       * @param request AcceptRCInquiredSystemEventRequest
       * @return AcceptRCInquiredSystemEventResponse
       */
      Models::AcceptRCInquiredSystemEventResponse acceptRCInquiredSystemEvent(const Models::AcceptRCInquiredSystemEventRequest &request);

      /**
       * @summary Performs a cloud migration switchover for an ApsaraDB RDS for PostgreSQL instance to promote it to the primary instance and start providing services.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the documentation to fully understand the prerequisites and impacts of this operation.
       * [One-click cloud migration](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request ActivateMigrationTargetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateMigrationTargetInstanceResponse
       */
      Models::ActivateMigrationTargetInstanceResponse activateMigrationTargetInstanceWithOptions(const Models::ActivateMigrationTargetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a cloud migration switchover for an ApsaraDB RDS for PostgreSQL instance to promote it to the primary instance and start providing services.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the documentation to fully understand the prerequisites and impacts of this operation.
       * [One-click cloud migration](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request ActivateMigrationTargetInstanceRequest
       * @return ActivateMigrationTargetInstanceResponse
       */
      Models::ActivateMigrationTargetInstanceResponse activateMigrationTargetInstance(const Models::ActivateMigrationTargetInstanceRequest &request);

      /**
       * @summary Adds instances to a deployment set.
       *
       * @description Instances with local disks are not allowed to join a deployment set by default, and the error UNSUPPORTED_DBINSTANCE_OPERATEION is returned. To add such instances, contact technical support. Ask the administrator to add the UID to the whitelist. Cloud disk instances do not have this restriction.
       * Forcibly adding instances to a deployment set may cause instance restarts. Use this feature with caution.
       *
       * @param request AddRCInstancesToDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRCInstancesToDeploymentSetResponse
       */
      Models::AddRCInstancesToDeploymentSetResponse addRCInstancesToDeploymentSetWithOptions(const Models::AddRCInstancesToDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds instances to a deployment set.
       *
       * @description Instances with local disks are not allowed to join a deployment set by default, and the error UNSUPPORTED_DBINSTANCE_OPERATEION is returned. To add such instances, contact technical support. Ask the administrator to add the UID to the whitelist. Cloud disk instances do not have this restriction.
       * Forcibly adding instances to a deployment set may cause instance restarts. Use this feature with caution.
       *
       * @param request AddRCInstancesToDeploymentSetRequest
       * @return AddRCInstancesToDeploymentSetResponse
       */
      Models::AddRCInstancesToDeploymentSetResponse addRCInstancesToDeploymentSet(const Models::AddRCInstancesToDeploymentSetRequest &request);

      /**
       * @summary Binds tags to an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * Each tag consists of a tag key (TagKey) and a tag value (TagValue). TagKey cannot be empty, but TagValue can be empty.
       * * The values of TagKey and TagValue cannot start with aliyun.
       * * TagKey and TagValue are case-insensitive.
       * * TagKey can be up to 64 characters in length. TagValue can be up to 128 characters in length.
       * * Each instance can have up to 10 tags. The TagKey of each tag bound to an instance must be unique. If you bind a tag that has the same TagKey as an existing tag, the new tag overwrites the existing tag.
       *
       * @param request AddTagsToResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsToResourceResponse
       */
      Models::AddTagsToResourceResponse addTagsToResourceWithOptions(const Models::AddTagsToResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds tags to an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * Each tag consists of a tag key (TagKey) and a tag value (TagValue). TagKey cannot be empty, but TagValue can be empty.
       * * The values of TagKey and TagValue cannot start with aliyun.
       * * TagKey and TagValue are case-insensitive.
       * * TagKey can be up to 64 characters in length. TagValue can be up to 128 characters in length.
       * * Each instance can have up to 10 tags. The TagKey of each tag bound to an instance must be unique. If you bind a tag that has the same TagKey as an existing tag, the new tag overwrites the existing tag.
       *
       * @param request AddTagsToResourceRequest
       * @return AddTagsToResourceResponse
       */
      Models::AddTagsToResourceResponse addTagsToResource(const Models::AddTagsToResourceRequest &request);

      /**
       * @summary Applies for a public endpoint for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Apply for a public endpoint for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * - [Apply for a public endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * - [Apply for a public endpoint for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * - [Apply for a public endpoint for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Apply for a public endpoint for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * - [Apply for a public endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * - [Apply for a public endpoint for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * - [Apply for a public endpoint for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary Applies for a read-only endpoint.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Feature description
       * For an ApsaraDB RDS for SQL Server primary instance that has read-only instances, you can create a unified read-only endpoint. After the endpoint is created, the existing endpoints of the primary instance and read-only instances are not affected, and you can still apply for public and internal endpoints as expected.
       * ### Before you begin
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation is failed:
       * - The ApsaraDB RDS for MySQL instance uses a shared database proxy.
       * - The instance status is Normal.
       * - The instance has read-only instances.
       * - The instance does not have an ongoing Data Transmission Service (DTS) migration node that is being executed.
       * - The instance runs one of the following editions:
       *     - ApsaraDB RDS for SQL Server Cluster Edition.
       *     - ApsaraDB RDS for MySQL 5.7 High-availability Edition (local SSDs)
       *     - ApsaraDB RDS for MySQL 5.6
       * > To access this feature, the instance must be active and in high availability mode.
       *
       * @param request AllocateReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateReadWriteSplittingConnectionResponse
       */
      Models::AllocateReadWriteSplittingConnectionResponse allocateReadWriteSplittingConnectionWithOptions(const Models::AllocateReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a read-only endpoint.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Feature description
       * For an ApsaraDB RDS for SQL Server primary instance that has read-only instances, you can create a unified read-only endpoint. After the endpoint is created, the existing endpoints of the primary instance and read-only instances are not affected, and you can still apply for public and internal endpoints as expected.
       * ### Before you begin
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation is failed:
       * - The ApsaraDB RDS for MySQL instance uses a shared database proxy.
       * - The instance status is Normal.
       * - The instance has read-only instances.
       * - The instance does not have an ongoing Data Transmission Service (DTS) migration node that is being executed.
       * - The instance runs one of the following editions:
       *     - ApsaraDB RDS for SQL Server Cluster Edition.
       *     - ApsaraDB RDS for MySQL 5.7 High-availability Edition (local SSDs)
       *     - ApsaraDB RDS for MySQL 5.6
       * > To access this feature, the instance must be active and in high availability mode.
       *
       * @param request AllocateReadWriteSplittingConnectionRequest
       * @return AllocateReadWriteSplittingConnectionResponse
       */
      Models::AllocateReadWriteSplittingConnectionResponse allocateReadWriteSplittingConnection(const Models::AllocateReadWriteSplittingConnectionRequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with an RDS Custom instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * - [Introduction to RDS Custom for MySQL](https://help.aliyun.com/document_detail/2844223.html)
       * - [Introduction to RDS Custom for SQL Server](https://help.aliyun.com/document_detail/2864363.html)
       * ### Precautions
       * If the RDS Custom instance has a public IP address enabled, the existing public IP address undergoes automatic release after you associate an EIP with the instance.
       *
       * @param request AssociateEipAddressWithRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressWithRCInstanceResponse
       */
      Models::AssociateEipAddressWithRCInstanceResponse associateEipAddressWithRCInstanceWithOptions(const Models::AssociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with an RDS Custom instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * - [Introduction to RDS Custom for MySQL](https://help.aliyun.com/document_detail/2844223.html)
       * - [Introduction to RDS Custom for SQL Server](https://help.aliyun.com/document_detail/2864363.html)
       * ### Precautions
       * If the RDS Custom instance has a public IP address enabled, the existing public IP address undergoes automatic release after you associate an EIP with the instance.
       *
       * @param request AssociateEipAddressWithRCInstanceRequest
       * @return AssociateEipAddressWithRCInstanceResponse
       */
      Models::AssociateEipAddressWithRCInstanceResponse associateEipAddressWithRCInstance(const Models::AssociateEipAddressWithRCInstanceRequest &request);

      /**
       * @summary Attaches a pay-as-you-go data cloud disk or a system cloud disk to an RDS Custom instance. The instance and the cloud disk must be in the same zone.
       *
       * @description When you invoke this operation, take note of the following items:
       * - The cloud disk must be in the Available state.
       * - When you mount a data cloud disk:
       *   - The destination RDS Custom instance must be in the Running or Stopped state.
       *   - If the cloud disk is purchased separately, the billable methods must be pay-as-you-go.
       *   - If a system cloud disk detached from an RDS Custom instance is mounted as a data cloud disk, no billing method restriction applies.
       *   - An elastic ephemeral disk can be remounted only to its original instance after it is uninstalled.
       * - When you mount a system cloud disk:
       *   - The destination RDS Custom instance must be the source instance from which the system cloud disk was detached.
       *   - The destination RDS Custom instance must be in the Stopped state.
       *   - You must configure the logon credentials for the instance under Settings.
       *   - Elastic ephemeral disks cannot be mounted as system cloud disks.
       *
       * @param request AttachRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachRCDiskResponse
       */
      Models::AttachRCDiskResponse attachRCDiskWithOptions(const Models::AttachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a pay-as-you-go data cloud disk or a system cloud disk to an RDS Custom instance. The instance and the cloud disk must be in the same zone.
       *
       * @description When you invoke this operation, take note of the following items:
       * - The cloud disk must be in the Available state.
       * - When you mount a data cloud disk:
       *   - The destination RDS Custom instance must be in the Running or Stopped state.
       *   - If the cloud disk is purchased separately, the billable methods must be pay-as-you-go.
       *   - If a system cloud disk detached from an RDS Custom instance is mounted as a data cloud disk, no billing method restriction applies.
       *   - An elastic ephemeral disk can be remounted only to its original instance after it is uninstalled.
       * - When you mount a system cloud disk:
       *   - The destination RDS Custom instance must be the source instance from which the system cloud disk was detached.
       *   - The destination RDS Custom instance must be in the Stopped state.
       *   - You must configure the logon credentials for the instance under Settings.
       *   - Elastic ephemeral disks cannot be mounted as system cloud disks.
       *
       * @param request AttachRCDiskRequest
       * @return AttachRCDiskResponse
       */
      Models::AttachRCDiskResponse attachRCDisk(const Models::AttachRCDiskRequest &request);

      /**
       * @summary Adds RDS Custom instances to an ACK cluster.
       *
       * @param tmpReq AttachRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachRCInstancesResponse
       */
      Models::AttachRCInstancesResponse attachRCInstancesWithOptions(const Models::AttachRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds RDS Custom instances to an ACK cluster.
       *
       * @param request AttachRCInstancesRequest
       * @return AttachRCInstancesResponse
       */
      Models::AttachRCInstancesResponse attachRCInstances(const Models::AttachRCInstancesRequest &request);

      /**
       * @summary Associates a whitelist template with an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstanceWithOptions(const Models::AttachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a whitelist template with an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstance(const Models::AttachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary Creates the service-linked role AliyunServiceRoleForRdsBackupEncryption for backup encryption.
       *
       * @param request AuthorizeBackupEncryptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeBackupEncryptionResponse
       */
      Models::AuthorizeBackupEncryptionResponse authorizeBackupEncryptionWithOptions(const Models::AuthorizeBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the service-linked role AliyunServiceRoleForRdsBackupEncryption for backup encryption.
       *
       * @param request AuthorizeBackupEncryptionRequest
       * @return AuthorizeBackupEncryptionResponse
       */
      Models::AuthorizeBackupEncryptionResponse authorizeBackupEncryption(const Models::AuthorizeBackupEncryptionRequest &request);

      /**
       * @summary Adds rules to a specified security group.
       *
       * @param tmpReq AuthorizeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeRCSecurityGroupPermissionResponse
       */
      Models::AuthorizeRCSecurityGroupPermissionResponse authorizeRCSecurityGroupPermissionWithOptions(const Models::AuthorizeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds rules to a specified security group.
       *
       * @param request AuthorizeRCSecurityGroupPermissionRequest
       * @return AuthorizeRCSecurityGroupPermissionResponse
       */
      Models::AuthorizeRCSecurityGroupPermissionResponse authorizeRCSecurityGroupPermission(const Models::AuthorizeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary Queries the system-assigned weight values.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Feature description
       * When [read/write splitting](https://help.aliyun.com/document_detail/51073.html) is enabled, this operation calculates the system-assigned weights. To query custom read weights, see [DescribeDBInstanceNetInfo](https://help.aliyun.com/document_detail/610423.html).
       * ### Before you begin
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation fails:
       * * The MySQL instance uses a shared database proxy.
       * * The instance runs one of the following editions:
       *     * MySQL 5.7 High-availability Edition (local SSDs)
       *     * MySQL 5.6
       *     * SQL Server Cluster Edition
       *
       * @param request CalculateDBInstanceWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CalculateDBInstanceWeightResponse
       */
      Models::CalculateDBInstanceWeightResponse calculateDBInstanceWeightWithOptions(const Models::CalculateDBInstanceWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system-assigned weight values.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Feature description
       * When [read/write splitting](https://help.aliyun.com/document_detail/51073.html) is enabled, this operation calculates the system-assigned weights. To query custom read weights, see [DescribeDBInstanceNetInfo](https://help.aliyun.com/document_detail/610423.html).
       * ### Before you begin
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation fails:
       * * The MySQL instance uses a shared database proxy.
       * * The instance runs one of the following editions:
       *     * MySQL 5.7 High-availability Edition (local SSDs)
       *     * MySQL 5.6
       *     * SQL Server Cluster Edition
       *
       * @param request CalculateDBInstanceWeightRequest
       * @return CalculateDBInstanceWeightResponse
       */
      Models::CalculateDBInstanceWeightResponse calculateDBInstanceWeight(const Models::CalculateDBInstanceWeightRequest &request);

      /**
       * @summary Cancels O&M tasks that have not yet started.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Scheduled events of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/104183.html)
       * - [Scheduled events of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/104452.html)
       * - [Scheduled events of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/104451.html)
       * - [Scheduled events of ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/104454.html)
       * ### Limits
       * A task cannot be canceled in the following cases:
       * - The value of allowCancel is 0.
       * - The current time is later than the task start time.
       * - The task status is not 3 (waiting for execution).
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O&M tasks that have not yet started.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Scheduled events of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/104183.html)
       * - [Scheduled events of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/104452.html)
       * - [Scheduled events of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/104451.html)
       * - [Scheduled events of ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/104454.html)
       * ### Limits
       * A task cannot be canceled in the following cases:
       * - The value of allowCancel is 0.
       * - The current time is later than the task start time.
       * - The task status is not 3 (waiting for execution).
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Checks whether a database account name is available for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckAccountNameAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountNameAvailableResponse
       */
      Models::CheckAccountNameAvailableResponse checkAccountNameAvailableWithOptions(const Models::CheckAccountNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a database account name is available for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckAccountNameAvailableRequest
       * @return CheckAccountNameAvailableResponse
       */
      Models::CheckAccountNameAvailableResponse checkAccountNameAvailable(const Models::CheckAccountNameAvailableRequest &request);

      /**
       * @summary Checks whether the service-linked role AliyunServiceRoleForRdsBackupEncryption is associated with Cloud Hardware Security Module (CloudHSM) for backup encryption under the current account.
       *
       * @param request CheckBackupEncryptionAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckBackupEncryptionAuthorizedResponse
       */
      Models::CheckBackupEncryptionAuthorizedResponse checkBackupEncryptionAuthorizedWithOptions(const Models::CheckBackupEncryptionAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the service-linked role AliyunServiceRoleForRdsBackupEncryption is associated with Cloud Hardware Security Module (CloudHSM) for backup encryption under the current account.
       *
       * @param request CheckBackupEncryptionAuthorizedRequest
       * @return CheckBackupEncryptionAuthorizedResponse
       */
      Models::CheckBackupEncryptionAuthorizedResponse checkBackupEncryptionAuthorized(const Models::CheckBackupEncryptionAuthorizedRequest &request);

      /**
       * @summary Queries the authorization status of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization status of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary Prechecks whether an ApsaraDB RDS instance can be restored across regions by using a cross-region backup set.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [MySQL cross-region backup](https://help.aliyun.com/document_detail/120824.html) and [MySQL cross-region restoration](https://help.aliyun.com/document_detail/120875.html)
       * - [PostgreSQL cross-region backup](https://help.aliyun.com/document_detail/206671.html) and [PostgreSQL cross-region restoration](https://help.aliyun.com/document_detail/206662.html)
       * - [SQL Server cross-region backup](https://help.aliyun.com/document_detail/187923.html) and [SQL Server cross-region restoration](https://help.aliyun.com/document_detail/187924.html)
       *
       * @param request CheckCreateDdrDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCreateDdrDBInstanceResponse
       */
      Models::CheckCreateDdrDBInstanceResponse checkCreateDdrDBInstanceWithOptions(const Models::CheckCreateDdrDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prechecks whether an ApsaraDB RDS instance can be restored across regions by using a cross-region backup set.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [MySQL cross-region backup](https://help.aliyun.com/document_detail/120824.html) and [MySQL cross-region restoration](https://help.aliyun.com/document_detail/120875.html)
       * - [PostgreSQL cross-region backup](https://help.aliyun.com/document_detail/206671.html) and [PostgreSQL cross-region restoration](https://help.aliyun.com/document_detail/206662.html)
       * - [SQL Server cross-region backup](https://help.aliyun.com/document_detail/187923.html) and [SQL Server cross-region restoration](https://help.aliyun.com/document_detail/187924.html)
       *
       * @param request CheckCreateDdrDBInstanceRequest
       * @return CheckCreateDdrDBInstanceResponse
       */
      Models::CheckCreateDdrDBInstanceResponse checkCreateDdrDBInstance(const Models::CheckCreateDdrDBInstanceRequest &request);

      /**
       * @summary Checks whether a database name is duplicate or does not comply with naming conventions.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckDBNameAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDBNameAvailableResponse
       */
      Models::CheckDBNameAvailableResponse checkDBNameAvailableWithOptions(const Models::CheckDBNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a database name is duplicate or does not comply with naming conventions.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckDBNameAvailableRequest
       * @return CheckDBNameAvailableResponse
       */
      Models::CheckDBNameAvailableResponse checkDBNameAvailable(const Models::CheckDBNameAvailableRequest &request);

      /**
       * @summary Queries whether a specified ApsaraDB RDS instance exists.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckInstanceExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceExistResponse
       */
      Models::CheckInstanceExistResponse checkInstanceExistWithOptions(const Models::CheckInstanceExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a specified ApsaraDB RDS instance exists.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request CheckInstanceExistRequest
       * @return CheckInstanceExistResponse
       */
      Models::CheckInstanceExistResponse checkInstanceExist(const Models::CheckInstanceExistRequest &request);

      /**
       * @summary 查看是否已创建服务关联角色（SLR）和是否开租
       *
       * @param request CheckRdsCustomInitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRdsCustomInitResponse
       */
      Models::CheckRdsCustomInitResponse checkRdsCustomInitWithOptions(const Models::CheckRdsCustomInitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看是否已创建服务关联角色（SLR）和是否开租
       *
       * @param request CheckRdsCustomInitRequest
       * @return CheckRdsCustomInitResponse
       */
      Models::CheckRdsCustomInitResponse checkRdsCustomInit(const Models::CheckRdsCustomInitRequest &request);

      /**
       * @summary Checks whether backup encryption is supported in the current region.
       *
       * @param request CheckRegionSupportBackupEncryptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRegionSupportBackupEncryptionResponse
       */
      Models::CheckRegionSupportBackupEncryptionResponse checkRegionSupportBackupEncryptionWithOptions(const Models::CheckRegionSupportBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether backup encryption is supported in the current region.
       *
       * @param request CheckRegionSupportBackupEncryptionRequest
       * @return CheckRegionSupportBackupEncryptionResponse
       */
      Models::CheckRegionSupportBackupEncryptionResponse checkRegionSupportBackupEncryption(const Models::CheckRegionSupportBackupEncryptionRequest &request);

      /**
       * @summary Queries whether a service-linked role (SLR) has been created.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for PostgreSQL
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a service-linked role (SLR) has been created.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for PostgreSQL
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Restores historical data to a new instance (clone instance).
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Restore data of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96147.html)
       * - [Restore data of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96776.html)
       * - [Restore data of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95722.html)
       * - [Restore data of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97151.html)
       *
       * @param tmpReq CloneDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstanceWithOptions(const Models::CloneDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores historical data to a new instance (clone instance).
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Restore data of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96147.html)
       * - [Restore data of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96776.html)
       * - [Restore data of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95722.html)
       * - [Restore data of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97151.html)
       *
       * @param request CloneDBInstanceRequest
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstance(const Models::CloneDBInstanceRequest &request);

      /**
       * @summary Copies an ApsaraDB RDS parameter template to the current region or another region.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CloneParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneParameterGroupResponse
       */
      Models::CloneParameterGroupResponse cloneParameterGroupWithOptions(const Models::CloneParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies an ApsaraDB RDS parameter template to the current region or another region.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CloneParameterGroupRequest
       * @return CloneParameterGroupResponse
       */
      Models::CloneParameterGroupResponse cloneParameterGroup(const Models::CloneParameterGroupRequest &request);

      /**
       * @summary Confirms a carousel notification in the ApsaraDB RDS console for the China site (aliyun.com) under the China site account.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Description
       * Call [QueryNotify](https://help.aliyun.com/document_detail/610443.html) to query notifications, and then call this operation to mark a notification as confirmed, which indicates that you have acknowledged the notification content.
       *
       * @param tmpReq ConfirmNotifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNotifyResponse
       */
      Models::ConfirmNotifyResponse confirmNotifyWithOptions(const Models::ConfirmNotifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms a carousel notification in the ApsaraDB RDS console for the China site (aliyun.com) under the China site account.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Description
       * Call [QueryNotify](https://help.aliyun.com/document_detail/610443.html) to query notifications, and then call this operation to mark a notification as confirmed, which indicates that you have acknowledged the notification content.
       *
       * @param request ConfirmNotifyRequest
       * @return ConfirmNotifyResponse
       */
      Models::ConfirmNotifyResponse confirmNotify(const Models::ConfirmNotifyRequest &request);

      /**
       * @summary Copies a database for an ApsaraDB RDS for SQL Server 2008 R2 instance.
       *
       * @param request CopyDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDatabaseResponse
       */
      Models::CopyDatabaseResponse copyDatabaseWithOptions(const Models::CopyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a database for an ApsaraDB RDS for SQL Server 2008 R2 instance.
       *
       * @param request CopyDatabaseRequest
       * @return CopyDatabaseResponse
       */
      Models::CopyDatabaseResponse copyDatabase(const Models::CopyDatabaseRequest &request);

      /**
       * @summary Copies a database between ApsaraDB RDS for SQL Server instances.
       *
       * @description ### Applicable engine
       * RDS SQL Server.
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Copy a database between ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95702.html)
       * ### Limits
       * - The source and target instances must belong to the same Alibaba Cloud account.
       * - The target instance **must not contain** a database that has the same name as the database to be copied from the source instance.
       * - The available storage of the target instance **must be greater than** the storage used by the database to be copied from the source instance. If the storage is insufficient, [expand the storage](https://help.aliyun.com/document_detail/95665.html) in a timely manner.
       * - The source and target instances must be in the same region (zones can be different) and must use the same network type.
       * - The source and target instances do not support [serverless instances](https://help.aliyun.com/document_detail/603466.html). To migrate a serverless instance, [use DTS](https://help.aliyun.com/document_detail/210947.html).
       * - You **must specify** either BackupId or RestoreTime. An error is returned if neither parameter is specified.
       *
       * @param request CopyDatabaseBetweenInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDatabaseBetweenInstancesResponse
       */
      Models::CopyDatabaseBetweenInstancesResponse copyDatabaseBetweenInstancesWithOptions(const Models::CopyDatabaseBetweenInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a database between ApsaraDB RDS for SQL Server instances.
       *
       * @description ### Applicable engine
       * RDS SQL Server.
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Copy a database between ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95702.html)
       * ### Limits
       * - The source and target instances must belong to the same Alibaba Cloud account.
       * - The target instance **must not contain** a database that has the same name as the database to be copied from the source instance.
       * - The available storage of the target instance **must be greater than** the storage used by the database to be copied from the source instance. If the storage is insufficient, [expand the storage](https://help.aliyun.com/document_detail/95665.html) in a timely manner.
       * - The source and target instances must be in the same region (zones can be different) and must use the same network type.
       * - The source and target instances do not support [serverless instances](https://help.aliyun.com/document_detail/603466.html). To migrate a serverless instance, [use DTS](https://help.aliyun.com/document_detail/210947.html).
       * - You **must specify** either BackupId or RestoreTime. An error is returned if neither parameter is specified.
       *
       * @param request CopyDatabaseBetweenInstancesRequest
       * @return CopyDatabaseBetweenInstancesResponse
       */
      Models::CopyDatabaseBetweenInstancesResponse copyDatabaseBetweenInstances(const Models::CopyDatabaseBetweenInstancesRequest &request);

      /**
       * @summary Creates a database account.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Create an account for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96089.html)
       * - [Create an account for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96753.html)
       * - [Create an account for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95810.html)
       * - [Create an account for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97132.html)
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Create an account for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96089.html)
       * - [Create an account for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96753.html)
       * - [Create an account for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95810.html)
       * - [Create an account for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97132.html)
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a backup set for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Description
       * This operation calls the built-in backup feature of ApsaraDB RDS. You can also use Database Backup Service (DBS). For more information, <props="china">refer to [DBS API overview](https://help.aliyun.com/document_detail/2841997.html)<props="intl">refer to [DBS API overview](https://help.aliyun.com/document_detail/2402073.html).
       * ### Precautions
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation is failed:
       * - The instance status is Running.
       * - No backup node is being executed.
       * - A maximum of 20 backup sets can be created for a single instance per day.
       * ### Related documentation
       * - [Back up an RDS MySQL instance](https://help.aliyun.com/document_detail/378074.html)
       * - [Back up an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * - [Back up an RDS SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * - [Back up an RDS MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup set for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Description
       * This operation calls the built-in backup feature of ApsaraDB RDS. You can also use Database Backup Service (DBS). For more information, <props="china">refer to [DBS API overview](https://help.aliyun.com/document_detail/2841997.html)<props="intl">refer to [DBS API overview](https://help.aliyun.com/document_detail/2402073.html).
       * ### Precautions
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation is failed:
       * - The instance status is Running.
       * - No backup node is being executed.
       * - A maximum of 20 backup sets can be created for a single instance per day.
       * ### Related documentation
       * - [Back up an RDS MySQL instance](https://help.aliyun.com/document_detail/378074.html)
       * - [Back up an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * - [Back up an RDS SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * - [Back up an RDS MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a pre-check task for one-click migration to ApsaraDB RDS for PostgreSQL.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [One-click migration to RDS](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationPrecheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMigrationPrecheckTaskResponse
       */
      Models::CreateCloudMigrationPrecheckTaskResponse createCloudMigrationPrecheckTaskWithOptions(const Models::CreateCloudMigrationPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pre-check task for one-click migration to ApsaraDB RDS for PostgreSQL.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [One-click migration to RDS](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationPrecheckTaskRequest
       * @return CreateCloudMigrationPrecheckTaskResponse
       */
      Models::CreateCloudMigrationPrecheckTaskResponse createCloudMigrationPrecheckTask(const Models::CreateCloudMigrationPrecheckTaskRequest &request);

      /**
       * @summary Creates a migration-to-cloud task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * [Migrate to the cloud](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMigrationTaskResponse
       */
      Models::CreateCloudMigrationTaskResponse createCloudMigrationTaskWithOptions(const Models::CreateCloudMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a migration-to-cloud task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * [Migrate to the cloud](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationTaskRequest
       * @return CreateCloudMigrationTaskResponse
       */
      Models::CreateCloudMigrationTaskResponse createCloudMigrationTask(const Models::CreateCloudMigrationTaskRequest &request);

      /**
       * @summary Creates an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related feature documentation
       * >Warning: This API operation involves fees. Read the related feature documentation carefully before you call this operation.
       * If an error is returned when you call this operation, search for the error message to find the cause.
       * - [Create an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/148036.html)
       * - [Create a serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html)
       * - [Create an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
       * - [Create a serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
       * - [Create a Babelfish for ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/428615.html)
       * - [Create an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
       * - [Create a serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
       * - [Create an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related feature documentation
       * >Warning: This API operation involves fees. Read the related feature documentation carefully before you call this operation.
       * If an error is returned when you call this operation, search for the error message to find the cause.
       * - [Create an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/148036.html)
       * - [Create a serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html)
       * - [Create an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
       * - [Create a serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
       * - [Create a Babelfish for ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/428615.html)
       * - [Create an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
       * - [Create a serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
       * - [Create an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates an endpoint for an ApsaraDB RDS instance that runs the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - RDS MySQL: [Add a cluster read-only endpoint](https://help.aliyun.com/document_detail/464132.html)
       * - RDS PostgreSQL: [Add a cluster read-only endpoint](https://help.aliyun.com/document_detail/96788.html)
       * <props="intl">
       * [Add a cluster read-only endpoint](https://help.aliyun.com/document_detail/464132.html)
       *
       * @param tmpReq CreateDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceEndpointResponse
       */
      Models::CreateDBInstanceEndpointResponse createDBInstanceEndpointWithOptions(const Models::CreateDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint for an ApsaraDB RDS instance that runs the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - RDS MySQL: [Add a cluster read-only endpoint](https://help.aliyun.com/document_detail/464132.html)
       * - RDS PostgreSQL: [Add a cluster read-only endpoint](https://help.aliyun.com/document_detail/96788.html)
       * <props="intl">
       * [Add a cluster read-only endpoint](https://help.aliyun.com/document_detail/464132.html)
       *
       * @param request CreateDBInstanceEndpointRequest
       * @return CreateDBInstanceEndpointResponse
       */
      Models::CreateDBInstanceEndpointResponse createDBInstanceEndpoint(const Models::CreateDBInstanceEndpointRequest &request);

      /**
       * @summary Creates a public endpoint for an endpoint of an ApsaraDB RDS instance that uses the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Before you begin
       * - You can create a public endpoint for an endpoint only when the endpoint does not have a public endpoint.
       * - The configurations such as traffic distribution weights are the same as those of the internal endpoint of the endpoint. Each endpoint can have only one public endpoint and one internal endpoint.
       *
       * @param request CreateDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceEndpointAddressResponse
       */
      Models::CreateDBInstanceEndpointAddressResponse createDBInstanceEndpointAddressWithOptions(const Models::CreateDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint for an endpoint of an ApsaraDB RDS instance that uses the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Before you begin
       * - You can create a public endpoint for an endpoint only when the endpoint does not have a public endpoint.
       * - The configurations such as traffic distribution weights are the same as those of the internal endpoint of the endpoint. Each endpoint can have only one public endpoint and one internal endpoint.
       *
       * @param request CreateDBInstanceEndpointAddressRequest
       * @return CreateDBInstanceEndpointAddressResponse
       */
      Models::CreateDBInstanceEndpointAddressResponse createDBInstanceEndpointAddress(const Models::CreateDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Rebuilds an instance that has been moved to the recycle bin.
       *
       * @description ### Supported database engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related feature documentation
       * >Warning: This API operation involves fees. Read the related feature documentation carefully before you perform this operation.
       * - [Rebuild an RDS MySQL instance from the recycle bin](https://help.aliyun.com/document_detail/96065.html)
       * - [Rebuild an RDS PostgreSQL instance from the recycle bin](https://help.aliyun.com/document_detail/96752.html)
       * - [Rebuild an RDS SQL Server instance from the recycle bin](https://help.aliyun.com/document_detail/95669.html)
       * - [Rebuild an RDS MariaDB instance from the recycle bin](https://help.aliyun.com/document_detail/97131.html)
       *
       * @param request CreateDBInstanceForRebuildRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceForRebuildResponse
       */
      Models::CreateDBInstanceForRebuildResponse createDBInstanceForRebuildWithOptions(const Models::CreateDBInstanceForRebuildRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds an instance that has been moved to the recycle bin.
       *
       * @description ### Supported database engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related feature documentation
       * >Warning: This API operation involves fees. Read the related feature documentation carefully before you perform this operation.
       * - [Rebuild an RDS MySQL instance from the recycle bin](https://help.aliyun.com/document_detail/96065.html)
       * - [Rebuild an RDS PostgreSQL instance from the recycle bin](https://help.aliyun.com/document_detail/96752.html)
       * - [Rebuild an RDS SQL Server instance from the recycle bin](https://help.aliyun.com/document_detail/95669.html)
       * - [Rebuild an RDS MariaDB instance from the recycle bin](https://help.aliyun.com/document_detail/97131.html)
       *
       * @param request CreateDBInstanceForRebuildRequest
       * @return CreateDBInstanceForRebuildResponse
       */
      Models::CreateDBInstanceForRebuildResponse createDBInstanceForRebuild(const Models::CreateDBInstanceForRebuildRequest &request);

      /**
       * @summary Creates a replication task for a native replication instance.
       *
       * @param request CreateDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceReplicationResponse
       */
      Models::CreateDBInstanceReplicationResponse createDBInstanceReplicationWithOptions(const Models::CreateDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a replication task for a native replication instance.
       *
       * @param request CreateDBInstanceReplicationRequest
       * @return CreateDBInstanceReplicationResponse
       */
      Models::CreateDBInstanceReplicationResponse createDBInstanceReplication(const Models::CreateDBInstanceReplicationRequest &request);

      /**
       * @summary Adds security group rules to an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for SQL Server
       * ### Related documentation
       * [Configure security group rules for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request CreateDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceSecurityGroupRuleResponse
       */
      Models::CreateDBInstanceSecurityGroupRuleResponse createDBInstanceSecurityGroupRuleWithOptions(const Models::CreateDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds security group rules to an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for SQL Server
       * ### Related documentation
       * [Configure security group rules for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request CreateDBInstanceSecurityGroupRuleRequest
       * @return CreateDBInstanceSecurityGroupRuleResponse
       */
      Models::CreateDBInstanceSecurityGroupRuleResponse createDBInstanceSecurityGroupRule(const Models::CreateDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Adds nodes to an ApsaraDB RDS instance that runs the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation carefully to fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - RDS MySQL: [Add nodes to an ApsaraDB RDS for MySQL instance that runs the Cluster Edition](https://help.aliyun.com/document_detail/464129.html)
       * - RDS PostgreSQL: [Add nodes to an ApsaraDB RDS for PostgreSQL instance that runs the Cluster Edition](https://help.aliyun.com/document_detail/2778876.html)
       * <props="intl">
       * [Add nodes to an ApsaraDB RDS for MySQL instance that runs the Cluster Edition](https://help.aliyun.com/document_detail/464129.html)
       *
       * @param tmpReq CreateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodesWithOptions(const Models::CreateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds nodes to an ApsaraDB RDS instance that runs the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation carefully to fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - RDS MySQL: [Add nodes to an ApsaraDB RDS for MySQL instance that runs the Cluster Edition](https://help.aliyun.com/document_detail/464129.html)
       * - RDS PostgreSQL: [Add nodes to an ApsaraDB RDS for PostgreSQL instance that runs the Cluster Edition](https://help.aliyun.com/document_detail/2778876.html)
       * <props="intl">
       * [Add nodes to an ApsaraDB RDS for MySQL instance that runs the Cluster Edition](https://help.aliyun.com/document_detail/464129.html)
       *
       * @param request CreateDBNodesRequest
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodes(const Models::CreateDBNodesRequest &request);

      /**
       * @summary Creates a database proxy endpoint for an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you invoke this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Create an internal or public database proxy endpoint for an RDS MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * - [Create an internal or public database proxy endpoint for an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request CreateDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBProxyEndpointAddressResponse
       */
      Models::CreateDBProxyEndpointAddressResponse createDBProxyEndpointAddressWithOptions(const Models::CreateDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database proxy endpoint for an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you invoke this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Create an internal or public database proxy endpoint for an RDS MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * - [Create an internal or public database proxy endpoint for an RDS PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request CreateDBProxyEndpointAddressRequest
       * @return CreateDBProxyEndpointAddressResponse
       */
      Models::CreateDBProxyEndpointAddressResponse createDBProxyEndpointAddress(const Models::CreateDBProxyEndpointAddressRequest &request);

      /**
       * @summary Creates a database in an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Create a database on an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96105.html)
       * - [Create a database on an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96758.html)
       * - [Create a database on an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95698.html)
       * - [Create a database on an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97136.html)
       *
       * @param request CreateDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database in an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Create a database on an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96105.html)
       * - [Create a database on an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96758.html)
       * - [Create a database on an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95698.html)
       * - [Create a database on an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97136.html)
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary Restores data to a new instance across regions.
       *
       * @description ### Suggestions
       * Before you perform a restoration, call the CheckCreateDdrDBInstance operation to check whether the cross-region backup set of the destination ApsaraDB RDS instance can be used for cross-region restoration.
       * ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request CreateDdrInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDdrInstanceResponse
       */
      Models::CreateDdrInstanceResponse createDdrInstanceWithOptions(const Models::CreateDdrInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores data to a new instance across regions.
       *
       * @description ### Suggestions
       * Before you perform a restoration, call the CheckCreateDdrDBInstance operation to check whether the cross-region backup set of the destination ApsaraDB RDS instance can be used for cross-region restoration.
       * ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request CreateDdrInstanceRequest
       * @return CreateDdrInstanceResponse
       */
      Models::CreateDdrInstanceResponse createDdrInstance(const Models::CreateDdrInstanceRequest &request);

      /**
       * @summary Creates a Global Active Database (GAD) cluster for ApsaraDB RDS.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * <props="china">
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Create and release a GAD cluster](https://help.aliyun.com/document_detail/328592.html)
       *
       * @param request CreateGADInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGADInstanceResponse
       */
      Models::CreateGADInstanceResponse createGADInstanceWithOptions(const Models::CreateGADInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Global Active Database (GAD) cluster for ApsaraDB RDS.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * <props="china">
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Create and release a GAD cluster](https://help.aliyun.com/document_detail/328592.html)
       *
       * @param request CreateGADInstanceRequest
       * @return CreateGADInstanceResponse
       */
      Models::CreateGADInstanceResponse createGADInstance(const Models::CreateGADInstanceRequest &request);

      /**
       * @summary Adds a node to an ApsaraDB RDS global active database cluster.
       *
       * @description ### Supported engine
       * - RDS MySQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the documentation to fully understand the prerequisites and potential impacts, and then proceed.
       * <props="china">[Add or remove unit nodes](https://help.aliyun.com/document_detail/331851.html)
       *
       * @param request CreateGadInstanceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGadInstanceMemberResponse
       */
      Models::CreateGadInstanceMemberResponse createGadInstanceMemberWithOptions(const Models::CreateGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a node to an ApsaraDB RDS global active database cluster.
       *
       * @description ### Supported engine
       * - RDS MySQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the documentation to fully understand the prerequisites and potential impacts, and then proceed.
       * <props="china">[Add or remove unit nodes](https://help.aliyun.com/document_detail/331851.html)
       *
       * @param request CreateGadInstanceMemberRequest
       * @return CreateGadInstanceMemberResponse
       */
      Models::CreateGadInstanceMemberResponse createGadInstanceMember(const Models::CreateGadInstanceMemberRequest &request);

      /**
       * @summary Creates a data import task.
       *
       * @description Creates a data import task for importing data to an ApsaraDB RDS for MySQL instance with native replication.
       *
       * @param request CreateImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImportTaskResponse
       */
      Models::CreateImportTaskResponse createImportTaskWithOptions(const Models::CreateImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data import task.
       *
       * @description Creates a data import task for importing data to an ApsaraDB RDS for MySQL instance with native replication.
       *
       * @param request CreateImportTaskRequest
       * @return CreateImportTaskResponse
       */
      Models::CreateImportTaskResponse createImportTask(const Models::CreateImportTaskRequest &request);

      /**
       * @summary Creates an encryption or masking rule for a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that the column encryption service is activated in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption service through Cloud Hardware Security Module (CloudHSM) before trying again.
       *
       * @param tmpReq CreateMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaskingRulesResponse
       */
      Models::CreateMaskingRulesResponse createMaskingRulesWithOptions(const Models::CreateMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an encryption or masking rule for a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that the column encryption service is activated in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption service through Cloud Hardware Security Module (CloudHSM) before trying again.
       *
       * @param request CreateMaskingRulesRequest
       * @return CreateMaskingRulesResponse
       */
      Models::CreateMaskingRulesResponse createMaskingRules(const Models::CreateMaskingRulesRequest &request);

      /**
       * @summary Restores a self-managed SQL Server backup file from Object Storage Service (OSS) to an ApsaraDB RDS for SQL Server instance to migrate data to the cloud.
       *
       * @description ### Applicable DPI engine
       * ApsaraDB RDS for SQL Server
       * ### Before you begin
       * [Upload self-managed SQL Server backup data to OSS](https://help.aliyun.com/document_detail/100019.html).
       * ### Limits
       * - Cross-account data replication is not supported. For example, you cannot migrate a backup file from OSS under Alibaba Cloud account A to an ApsaraDB RDS for SQL Server instance under Alibaba Cloud account B.
       * - To migrate data across accounts, first [copy the OSS data from source account A to an OSS bucket under target account B](https://help.aliyun.com/document_detail/2401486.html). Make sure that the OSS data and the ApsaraDB RDS for SQL Server instance belong to the same Alibaba Cloud account before you call the operation described in this topic to create a migration node.
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation carefully. Make sure that you fully understand the **prerequisites**, **preparations**, and potential impacts of this operation.
       * [Migrate data to an ApsaraDB RDS for SQL Server instance at the instance level](https://help.aliyun.com/document_detail/100019.html)
       *
       * @param request CreateMigrateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMigrateTaskResponse
       */
      Models::CreateMigrateTaskResponse createMigrateTaskWithOptions(const Models::CreateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a self-managed SQL Server backup file from Object Storage Service (OSS) to an ApsaraDB RDS for SQL Server instance to migrate data to the cloud.
       *
       * @description ### Applicable DPI engine
       * ApsaraDB RDS for SQL Server
       * ### Before you begin
       * [Upload self-managed SQL Server backup data to OSS](https://help.aliyun.com/document_detail/100019.html).
       * ### Limits
       * - Cross-account data replication is not supported. For example, you cannot migrate a backup file from OSS under Alibaba Cloud account A to an ApsaraDB RDS for SQL Server instance under Alibaba Cloud account B.
       * - To migrate data across accounts, first [copy the OSS data from source account A to an OSS bucket under target account B](https://help.aliyun.com/document_detail/2401486.html). Make sure that the OSS data and the ApsaraDB RDS for SQL Server instance belong to the same Alibaba Cloud account before you call the operation described in this topic to create a migration node.
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation carefully. Make sure that you fully understand the **prerequisites**, **preparations**, and potential impacts of this operation.
       * [Migrate data to an ApsaraDB RDS for SQL Server instance at the instance level](https://help.aliyun.com/document_detail/100019.html)
       *
       * @param request CreateMigrateTaskRequest
       * @return CreateMigrateTaskResponse
       */
      Models::CreateMigrateTaskResponse createMigrateTask(const Models::CreateMigrateTaskRequest &request);

      /**
       * @summary Opens a database for a backup data migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * This operation is used for backup data migration to the cloud. Read the following documentation before you call this operation:
       * - [Migrate full backup data to ApsaraDB RDS for SQL Server 2008 R2](https://help.aliyun.com/document_detail/95737.html)
       * - [Migrate full backup data to ApsaraDB RDS for SQL Server 2012, 2014, 2016, 2017, and 2019](https://help.aliyun.com/document_detail/95738.html)
       * - [Migrate incremental backup data to ApsaraDB RDS for SQL Server 2012, 2014, 2016, 2017, and 2019](https://help.aliyun.com/document_detail/95736.html)
       *
       * @param request CreateOnlineDatabaseTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOnlineDatabaseTaskResponse
       */
      Models::CreateOnlineDatabaseTaskResponse createOnlineDatabaseTaskWithOptions(const Models::CreateOnlineDatabaseTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Opens a database for a backup data migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * This operation is used for backup data migration to the cloud. Read the following documentation before you call this operation:
       * - [Migrate full backup data to ApsaraDB RDS for SQL Server 2008 R2](https://help.aliyun.com/document_detail/95737.html)
       * - [Migrate full backup data to ApsaraDB RDS for SQL Server 2012, 2014, 2016, 2017, and 2019](https://help.aliyun.com/document_detail/95738.html)
       * - [Migrate incremental backup data to ApsaraDB RDS for SQL Server 2012, 2014, 2016, 2017, and 2019](https://help.aliyun.com/document_detail/95736.html)
       *
       * @param request CreateOnlineDatabaseTaskRequest
       * @return CreateOnlineDatabaseTaskResponse
       */
      Models::CreateOnlineDatabaseTaskResponse createOnlineDatabaseTask(const Models::CreateOnlineDatabaseTaskRequest &request);

      /**
       * @summary Deletes nodes from an ApsaraDB RDS for MySQL Cluster Edition instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delete nodes from an ApsaraDB RDS for MySQL Cluster Edition instance](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param tmpReq CreateOrderForDeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderForDeleteDBNodesResponse
       */
      Models::CreateOrderForDeleteDBNodesResponse createOrderForDeleteDBNodesWithOptions(const Models::CreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes nodes from an ApsaraDB RDS for MySQL Cluster Edition instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delete nodes from an ApsaraDB RDS for MySQL Cluster Edition instance](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param request CreateOrderForDeleteDBNodesRequest
       * @return CreateOrderForDeleteDBNodesResponse
       */
      Models::CreateOrderForDeleteDBNodesResponse createOrderForDeleteDBNodes(const Models::CreateOrderForDeleteDBNodesRequest &request);

      /**
       * @summary Creates a parameter template for ApsaraDB RDS.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a parameter template for ApsaraDB RDS.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CreateParameterGroupRequest
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroup(const Models::CreateParameterGroupRequest &request);

      /**
       * @summary Installs a specified extension in a target database.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts. Proceed only after you understand the information.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       * ### Precautions
       * You can install only extensions that are supported by the major engine version of the instance. Otherwise, the installation fails.
       * - For information about supported extensions, see [Supported extensions](https://help.aliyun.com/document_detail/142340.html).
       * - You can call [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html) to query the major engine version of the instance.
       *
       * @param request CreatePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostgresExtensionsResponse
       */
      Models::CreatePostgresExtensionsResponse createPostgresExtensionsWithOptions(const Models::CreatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a specified extension in a target database.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts. Proceed only after you understand the information.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       * ### Precautions
       * You can install only extensions that are supported by the major engine version of the instance. Otherwise, the installation fails.
       * - For information about supported extensions, see [Supported extensions](https://help.aliyun.com/document_detail/142340.html).
       * - You can call [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html) to query the major engine version of the instance.
       *
       * @param request CreatePostgresExtensionsRequest
       * @return CreatePostgresExtensionsResponse
       */
      Models::CreatePostgresExtensionsResponse createPostgresExtensions(const Models::CreatePostgresExtensionsRequest &request);

      /**
       * @summary 创建RDS CUSTOM部署集
       *
       * @param request CreateRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCDeploymentSetResponse
       */
      Models::CreateRCDeploymentSetResponse createRCDeploymentSetWithOptions(const Models::CreateRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RDS CUSTOM部署集
       *
       * @param request CreateRCDeploymentSetRequest
       * @return CreateRCDeploymentSetResponse
       */
      Models::CreateRCDeploymentSetResponse createRCDeploymentSet(const Models::CreateRCDeploymentSetRequest &request);

      /**
       * @summary Calls the CreateDisk operation to create an RDS Custom data cloud disk.
       *
       * @description -  Supported cloud disk types: ultra cloud disk, standard SSD, ESSD, and premium performance disk (default).
       * -  If the billing method of the cloud disk is subscription (**Prepaid**), you must specify the instance ID of a subscription instance (**InstanceId**) to which the cloud disk is mounted. The expiration time of the cloud disk is the same as that of the instance.
       * - You can create a pay-as-you-go (**Postpaid**) cloud disk separately without mounting it to an instance. You can also mount it to an instance of any billing method during creation as needed.
       * - The cloud disk types and the number of cloud disks that can be mounted vary based on instance specifications.
       *
       * @param request CreateRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCDiskResponse
       */
      Models::CreateRCDiskResponse createRCDiskWithOptions(const Models::CreateRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateDisk operation to create an RDS Custom data cloud disk.
       *
       * @description -  Supported cloud disk types: ultra cloud disk, standard SSD, ESSD, and premium performance disk (default).
       * -  If the billing method of the cloud disk is subscription (**Prepaid**), you must specify the instance ID of a subscription instance (**InstanceId**) to which the cloud disk is mounted. The expiration time of the cloud disk is the same as that of the instance.
       * - You can create a pay-as-you-go (**Postpaid**) cloud disk separately without mounting it to an instance. You can also mount it to an instance of any billing method during creation as needed.
       * - The cloud disk types and the number of cloud disks that can be mounted vary based on instance specifications.
       *
       * @param request CreateRCDiskRequest
       * @return CreateRCDiskResponse
       */
      Models::CreateRCDiskResponse createRCDisk(const Models::CreateRCDiskRequest &request);

      /**
       * @summary Creates a custom image for an RDS Custom instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * - [Introduction to RDS Custom for MySQL](https://help.aliyun.com/document_detail/2844223.html)
       * - [Introduction to RDS Custom for SQL Server](https://help.aliyun.com/document_detail/2864363.html)
       * ### Usage notes
       * - Method 1: Create a custom image from a snapshot of the **system cloud disk**. Specify SnapshotId and ImageName together.
       * - Method 2: Create a custom image from an RDS Custom instance. Specify InstanceId and ImageName together.
       *
       * @param request CreateRCImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCImageResponse
       */
      Models::CreateRCImageResponse createRCImageWithOptions(const Models::CreateRCImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image for an RDS Custom instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * - [Introduction to RDS Custom for MySQL](https://help.aliyun.com/document_detail/2844223.html)
       * - [Introduction to RDS Custom for SQL Server](https://help.aliyun.com/document_detail/2864363.html)
       * ### Usage notes
       * - Method 1: Create a custom image from a snapshot of the **system cloud disk**. Specify SnapshotId and ImageName together.
       * - Method 2: Create a custom image from an RDS Custom instance. Specify InstanceId and ImageName together.
       *
       * @param request CreateRCImageRequest
       * @return CreateRCImageResponse
       */
      Models::CreateRCImageResponse createRCImage(const Models::CreateRCImageRequest &request);

      /**
       * @summary Creates an edge node pool in the ACK Edge cluster of an RDS Custom instance.
       *
       * @param tmpReq CreateRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCNodePoolResponse
       */
      Models::CreateRCNodePoolResponse createRCNodePoolWithOptions(const Models::CreateRCNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge node pool in the ACK Edge cluster of an RDS Custom instance.
       *
       * @param request CreateRCNodePoolRequest
       * @return CreateRCNodePoolResponse
       */
      Models::CreateRCNodePoolResponse createRCNodePool(const Models::CreateRCNodePoolRequest &request);

      /**
       * @summary Creates a snapshot for a cloud disk.
       *
       * @description You cannot create a snapshot for a cloud disk in the following scenarios:
       * - The number of manual snapshots retained for the cloud disk has reached 256.
       * - The previous snapshot has not been created yet.
       * - The instance to which the cloud disk is mounted has never been started.
       * - The instance to which the cloud disk is mounted is not in the **Stopped** or **Running** instance status.
       * When you create a snapshot, take note of the following items:
       * - If the snapshot has not been created, the snapshot cannot be used to create a custom image (CreateImage).
       * - If the cloud disk is mounted to an RDS Custom instance, do not change the instance status while the snapshot is being created.
       * - You can create snapshots for cloud disks in the **Expired** state. If the cloud disk reaches its expiration release time while the snapshot is being created, the cloud disk is released and the snapshot in the Creating state is also deleted.
       *
       * @param request CreateRCSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCSnapshotResponse
       */
      Models::CreateRCSnapshotResponse createRCSnapshotWithOptions(const Models::CreateRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot for a cloud disk.
       *
       * @description You cannot create a snapshot for a cloud disk in the following scenarios:
       * - The number of manual snapshots retained for the cloud disk has reached 256.
       * - The previous snapshot has not been created yet.
       * - The instance to which the cloud disk is mounted has never been started.
       * - The instance to which the cloud disk is mounted is not in the **Stopped** or **Running** instance status.
       * When you create a snapshot, take note of the following items:
       * - If the snapshot has not been created, the snapshot cannot be used to create a custom image (CreateImage).
       * - If the cloud disk is mounted to an RDS Custom instance, do not change the instance status while the snapshot is being created.
       * - You can create snapshots for cloud disks in the **Expired** state. If the cloud disk reaches its expiration release time while the snapshot is being created, the cloud disk is released and the snapshot in the Creating state is also deleted.
       *
       * @param request CreateRCSnapshotRequest
       * @return CreateRCSnapshotResponse
       */
      Models::CreateRCSnapshotResponse createRCSnapshot(const Models::CreateRCSnapshotRequest &request);

      /**
       * @summary Creates a read-only instance for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * - [Create a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/56991.html)
       * - [Create a DuckDB-based analytical instance for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/2950002.html)
       * - [Create a read-only ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/108959.html)
       * - [Create a DuckDB-based analytical instance for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/2977241.html)
       * - [Create a read-only ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/99005.html)
       *
       * @param request CreateReadOnlyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReadOnlyDBInstanceResponse
       */
      Models::CreateReadOnlyDBInstanceResponse createReadOnlyDBInstanceWithOptions(const Models::CreateReadOnlyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a read-only instance for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * - [Create a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/56991.html)
       * - [Create a DuckDB-based analytical instance for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/2950002.html)
       * - [Create a read-only ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/108959.html)
       * - [Create a DuckDB-based analytical instance for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/2977241.html)
       * - [Create a read-only ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/99005.html)
       *
       * @param request CreateReadOnlyDBInstanceRequest
       * @return CreateReadOnlyDBInstanceResponse
       */
      Models::CreateReadOnlyDBInstanceResponse createReadOnlyDBInstance(const Models::CreateReadOnlyDBInstanceRequest &request);

      /**
       * @summary Creates a data synchronization link for an RDS disaster recovery instance.
       *
       * @description ### Supported engines
       * - RDS PostgreSQL
       * - RDS SQL Server
       * > The parameter requirements vary by engine. Specify parameters based on the engine type.
       *
       * @param request CreateReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReplicationLinkResponse
       */
      Models::CreateReplicationLinkResponse createReplicationLinkWithOptions(const Models::CreateReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data synchronization link for an RDS disaster recovery instance.
       *
       * @description ### Supported engines
       * - RDS PostgreSQL
       * - RDS SQL Server
       * > The parameter requirements vary by engine. Specify parameters based on the engine type.
       *
       * @param request CreateReplicationLinkRequest
       * @return CreateReplicationLinkResponse
       */
      Models::CreateReplicationLinkResponse createReplicationLink(const Models::CreateReplicationLinkRequest &request);

      /**
       * @summary Creates a Data API user credential.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       *
       * @param request CreateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Data API user credential.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Creates a service-linked role (SLR).
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Service-linked role](https://help.aliyun.com/document_detail/342840.html)
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role (SLR).
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Service-linked role](https://help.aliyun.com/document_detail/342840.html)
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a temporary instance for an ApsaraDB RDS for SQL Server 2008 R2 instance with Premium Local SSDs.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server 2008 R2 (with Premium Local SSDs)
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Restore SQL Server data by using a temporary instance](https://help.aliyun.com/document_detail/95724.html)
       *
       * @param request CreateTempDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTempDBInstanceResponse
       */
      Models::CreateTempDBInstanceResponse createTempDBInstanceWithOptions(const Models::CreateTempDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a temporary instance for an ApsaraDB RDS for SQL Server 2008 R2 instance with Premium Local SSDs.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server 2008 R2 (with Premium Local SSDs)
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Restore SQL Server data by using a temporary instance](https://help.aliyun.com/document_detail/95724.html)
       *
       * @param request CreateTempDBInstanceRequest
       * @return CreateTempDBInstanceResponse
       */
      Models::CreateTempDBInstanceResponse createTempDBInstance(const Models::CreateTempDBInstanceRequest &request);

      /**
       * @summary Claims a coupon.
       *
       * @param request CreateYouhuiForOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYouhuiForOrderResponse
       */
      Models::CreateYouhuiForOrderResponse createYouhuiForOrderWithOptions(const Models::CreateYouhuiForOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Claims a coupon.
       *
       * @param request CreateYouhuiForOrderRequest
       * @return CreateYouhuiForOrderResponse
       */
      Models::CreateYouhuiForOrderResponse createYouhuiForOrder(const Models::CreateYouhuiForOrderRequest &request);

      /**
       * @summary Removes the current ApsaraDB RDS for SQL Server instance from its Active Directory (AD) domain.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       *
       * @param request DeleteADSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteADSettingResponse
       */
      Models::DeleteADSettingResponse deleteADSettingWithOptions(const Models::DeleteADSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the current ApsaraDB RDS for SQL Server instance from its Active Directory (AD) domain.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       *
       * @param request DeleteADSettingRequest
       * @return DeleteADSettingResponse
       */
      Models::DeleteADSettingResponse deleteADSetting(const Models::DeleteADSettingRequest &request);

      /**
       * @summary Deletes a database account.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Delete a database account from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96104.html)
       * - [Delete a database account from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       * - [Delete a database account from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95694.html)
       * - [Delete a database account from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97135.html)
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Delete a database account from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96104.html)
       * - [Delete a database account from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       * - [Delete a database account from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95694.html)
       * - [Delete a database account from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97135.html)
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes data backup files of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * > Only High-availability Edition instances are supported.
       * ### Description
       * When you invoke this operation to delete data backup files, only the backup sets of the instance itself are deleted. The backup sets of associated instances, such as read-only instances, disaster recovery instances, and clone instances, are not deleted.
       * ### Precautions
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation is failed:
       * - The instance status is active (Running).
       * - If log backup is shutdown, the ApsaraDB RDS instance does not support the point-in-time restoration feature. In this case, you can delete any data backup files that were generated more than seven days ago.
       * - If log backup is enabled and the log backup retention period is shorter than the data backup retention period, data backup files that have exceeded the log backup retention period can be deleted.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes data backup files of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * > Only High-availability Edition instances are supported.
       * ### Description
       * When you invoke this operation to delete data backup files, only the backup sets of the instance itself are deleted. The backup sets of associated instances, such as read-only instances, disaster recovery instances, and clone instances, are not deleted.
       * ### Precautions
       * When you invoke this operation, the instance must meet the following conditions. Otherwise, the operation is failed:
       * - The instance status is active (Running).
       * - If log backup is shutdown, the ApsaraDB RDS instance does not support the point-in-time restoration feature. In this case, you can delete any data backup files that were generated more than seven days ago.
       * - If log backup is enabled and the log backup retention period is shorter than the data backup retention period, data backup files that have exceeded the log backup retention period can be deleted.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes backup files of an ApsaraDB RDS for SQL Server instance. This operation is not available to new users. Users who were previously added to the whitelist can still use this operation.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for SQL Server
       * > **This operation is not available to new users.** You can use other methods to [reduce or save backup storage costs](https://help.aliyun.com/document_detail/95718.html). Users who were previously added to the whitelist can still use this operation normally. Before you delete backup sets, confirm the availability of the backup sets. Deleted backup sets cannot be recovered.
       *
       * @param request DeleteBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFileWithOptions(const Models::DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes backup files of an ApsaraDB RDS for SQL Server instance. This operation is not available to new users. Users who were previously added to the whitelist can still use this operation.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for SQL Server
       * > **This operation is not available to new users.** You can use other methods to [reduce or save backup storage costs](https://help.aliyun.com/document_detail/95718.html). Users who were previously added to the whitelist can still use this operation normally. Before you delete backup sets, confirm the availability of the backup sets. Deleted backup sets cannot be recovered.
       *
       * @param request DeleteBackupFileRequest
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFile(const Models::DeleteBackupFileRequest &request);

      /**
       * @summary Releases an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Release an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96057.html)
       * - [Release an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96749.html)
       * - [Release an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95662.html)
       * - [Release an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97128.html)
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Release an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96057.html)
       * - [Release an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96749.html)
       * - [Release an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95662.html)
       * - [Release an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97128.html)
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes an endpoint of an ApsaraDB RDS instance that runs the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * <props="intl">ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - ApsaraDB RDS for MySQL: [Delete a cluster read-only endpoint](https://help.aliyun.com/document_detail/464133.html)
       * - ApsaraDB RDS for PostgreSQL: [Delete a cluster read-only endpoint](https://help.aliyun.com/document_detail/96788.html)
       * <props="intl">
       * ApsaraDB RDS for MySQL: [Delete a cluster read-only endpoint](https://help.aliyun.com/document_detail/464133.html)
       *
       * @param request DeleteDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceEndpointResponse
       */
      Models::DeleteDBInstanceEndpointResponse deleteDBInstanceEndpointWithOptions(const Models::DeleteDBInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint of an ApsaraDB RDS instance that runs the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * <props="intl">ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - ApsaraDB RDS for MySQL: [Delete a cluster read-only endpoint](https://help.aliyun.com/document_detail/464133.html)
       * - ApsaraDB RDS for PostgreSQL: [Delete a cluster read-only endpoint](https://help.aliyun.com/document_detail/96788.html)
       * <props="intl">
       * ApsaraDB RDS for MySQL: [Delete a cluster read-only endpoint](https://help.aliyun.com/document_detail/464133.html)
       *
       * @param request DeleteDBInstanceEndpointRequest
       * @return DeleteDBInstanceEndpointResponse
       */
      Models::DeleteDBInstanceEndpointResponse deleteDBInstanceEndpoint(const Models::DeleteDBInstanceEndpointRequest &request);

      /**
       * @summary Releases the public endpoint of an endpoint for an ApsaraDB RDS instance in the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Precautions
       * You can delete only the public endpoint from an endpoint. To delete the internal endpoint, delete the endpoint directly.
       *
       * @param request DeleteDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceEndpointAddressResponse
       */
      Models::DeleteDBInstanceEndpointAddressResponse deleteDBInstanceEndpointAddressWithOptions(const Models::DeleteDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an endpoint for an ApsaraDB RDS instance in the Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Precautions
       * You can delete only the public endpoint from an endpoint. To delete the internal endpoint, delete the endpoint directly.
       *
       * @param request DeleteDBInstanceEndpointAddressRequest
       * @return DeleteDBInstanceEndpointAddressResponse
       */
      Models::DeleteDBInstanceEndpointAddressResponse deleteDBInstanceEndpointAddress(const Models::DeleteDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Deletes a replication task from a native replication instance.
       *
       * @param request DeleteDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceReplicationResponse
       */
      Models::DeleteDBInstanceReplicationResponse deleteDBInstanceReplicationWithOptions(const Models::DeleteDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a replication task from a native replication instance.
       *
       * @param request DeleteDBInstanceReplicationRequest
       * @return DeleteDBInstanceReplicationResponse
       */
      Models::DeleteDBInstanceReplicationResponse deleteDBInstanceReplication(const Models::DeleteDBInstanceReplicationRequest &request);

      /**
       * @summary Deletes security group rules that are configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * [Configure security group rules for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DeleteDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceSecurityGroupRuleResponse
       */
      Models::DeleteDBInstanceSecurityGroupRuleResponse deleteDBInstanceSecurityGroupRuleWithOptions(const Models::DeleteDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes security group rules that are configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * [Configure security group rules for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DeleteDBInstanceSecurityGroupRuleRequest
       * @return DeleteDBInstanceSecurityGroupRuleResponse
       */
      Models::DeleteDBInstanceSecurityGroupRuleResponse deleteDBInstanceSecurityGroupRule(const Models::DeleteDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Deletes nodes from an ApsaraDB RDS instance that runs Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - RDS MySQL: [Delete nodes from an ApsaraDB RDS for MySQL instance that runs Cluster Edition](https://help.aliyun.com/document_detail/464130.html)
       * - RDS PostgreSQL: [Delete nodes from an ApsaraDB RDS for PostgreSQL instance that runs Cluster Edition](https://help.aliyun.com/document_detail/2778876.html)
       * <props="intl">
       * [Delete nodes from an ApsaraDB RDS for MySQL instance that runs Cluster Edition](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param tmpReq DeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodesWithOptions(const Models::DeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes nodes from an ApsaraDB RDS instance that runs Cluster Edition.
       *
       * @description ### Supported engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - RDS MySQL: [Delete nodes from an ApsaraDB RDS for MySQL instance that runs Cluster Edition](https://help.aliyun.com/document_detail/464130.html)
       * - RDS PostgreSQL: [Delete nodes from an ApsaraDB RDS for PostgreSQL instance that runs Cluster Edition](https://help.aliyun.com/document_detail/2778876.html)
       * <props="intl">
       * [Delete nodes from an ApsaraDB RDS for MySQL instance that runs Cluster Edition](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param request DeleteDBNodesRequest
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodes(const Models::DeleteDBNodesRequest &request);

      /**
       * @summary Deletes a database proxy endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Settings for database proxy endpoints for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/184921.html)
       * - [Settings for database proxy endpoints for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request DeleteDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBProxyEndpointAddressResponse
       */
      Models::DeleteDBProxyEndpointAddressResponse deleteDBProxyEndpointAddressWithOptions(const Models::DeleteDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database proxy endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Settings for database proxy endpoints for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/184921.html)
       * - [Settings for database proxy endpoints for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request DeleteDBProxyEndpointAddressRequest
       * @return DeleteDBProxyEndpointAddressResponse
       */
      Models::DeleteDBProxyEndpointAddressResponse deleteDBProxyEndpointAddress(const Models::DeleteDBProxyEndpointAddressRequest &request);

      /**
       * @summary Deletes a specified database from an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Delete a database from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96106.html)
       * - [Delete a database from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96759.html)
       * - [Delete a database from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95699.html)
       * - [Delete a database from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97137.html)
       *
       * @param request DeleteDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified database from an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Delete a database from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96106.html)
       * - [Delete a database from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96759.html)
       * - [Delete a database from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95699.html)
       * - [Delete a database from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97137.html)
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary Deletes an ApsaraDB RDS global active database cluster.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Precautions
       * * A deleted ApsaraDB RDS global active database cluster cannot be recovered. Proceed with caution.
       * * Deleting an ApsaraDB RDS global active database cluster removes all nodes and DTS synchronization tasks in the cluster but does not release the corresponding ApsaraDB RDS for MySQL instances. If you no longer need these instances, invoke [DeleteDBInstance](https://help.aliyun.com/document_detail/26229.html) to manually release them.
       *
       * @param request DeleteGadInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstanceWithOptions(const Models::DeleteGadInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApsaraDB RDS global active database cluster.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Precautions
       * * A deleted ApsaraDB RDS global active database cluster cannot be recovered. Proceed with caution.
       * * Deleting an ApsaraDB RDS global active database cluster removes all nodes and DTS synchronization tasks in the cluster but does not release the corresponding ApsaraDB RDS for MySQL instances. If you no longer need these instances, invoke [DeleteDBInstance](https://help.aliyun.com/document_detail/26229.html) to manually release them.
       *
       * @param request DeleteGadInstanceRequest
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstance(const Models::DeleteGadInstanceRequest &request);

      /**
       * @summary Deletes an encryption or masking rule for a specified instance.
       *
       * @description ## Description
       * - Before invoking this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature in Cloud Hardware Security Module (CloudHSM).
       *
       * @param request DeleteMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRulesWithOptions(const Models::DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an encryption or masking rule for a specified instance.
       *
       * @description ## Description
       * - Before invoking this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature in Cloud Hardware Security Module (CloudHSM).
       *
       * @param request DeleteMaskingRulesRequest
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRules(const Models::DeleteMaskingRulesRequest &request);

      /**
       * @summary Deletes an ApsaraDB RDS parameter template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DeleteParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroupWithOptions(const Models::DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApsaraDB RDS parameter template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DeleteParameterGroupRequest
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroup(const Models::DeleteParameterGroupRequest &request);

      /**
       * @summary Deletes a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Set instance parameters for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set instance parameters for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DeleteParameterTimedScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterTimedScheduleTaskResponse
       */
      Models::DeleteParameterTimedScheduleTaskResponse deleteParameterTimedScheduleTaskWithOptions(const Models::DeleteParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Set instance parameters for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set instance parameters for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DeleteParameterTimedScheduleTaskRequest
       * @return DeleteParameterTimedScheduleTaskResponse
       */
      Models::DeleteParameterTimedScheduleTaskResponse deleteParameterTimedScheduleTask(const Models::DeleteParameterTimedScheduleTaskRequest &request);

      /**
       * @summary Deletes a specified extension from a target database of an instance.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DeletePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePostgresExtensionsResponse
       */
      Models::DeletePostgresExtensionsResponse deletePostgresExtensionsWithOptions(const Models::DeletePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified extension from a target database of an instance.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DeletePostgresExtensionsRequest
       * @return DeletePostgresExtensionsResponse
       */
      Models::DeletePostgresExtensionsResponse deletePostgresExtensions(const Models::DeletePostgresExtensionsRequest &request);

      /**
       * @summary Deletes RDS Custom nodes from an ACK cluster.
       *
       * @param tmpReq DeleteRCClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCClusterNodesResponse
       */
      Models::DeleteRCClusterNodesResponse deleteRCClusterNodesWithOptions(const Models::DeleteRCClusterNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes RDS Custom nodes from an ACK cluster.
       *
       * @param request DeleteRCClusterNodesRequest
       * @return DeleteRCClusterNodesResponse
       */
      Models::DeleteRCClusterNodesResponse deleteRCClusterNodes(const Models::DeleteRCClusterNodesRequest &request);

      /**
       * @summary Deletes an RDS Custom deployment set by specifying parameters such as RegionId and DeploymentSetId.
       *
       * @param request DeleteRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCDeploymentSetResponse
       */
      Models::DeleteRCDeploymentSetResponse deleteRCDeploymentSetWithOptions(const Models::DeleteRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an RDS Custom deployment set by specifying parameters such as RegionId and DeploymentSetId.
       *
       * @param request DeleteRCDeploymentSetRequest
       * @return DeleteRCDeploymentSetResponse
       */
      Models::DeleteRCDeploymentSetResponse deleteRCDeploymentSet(const Models::DeleteRCDeploymentSetRequest &request);

      /**
       * @summary Releases a pay-as-you-go data cloud disk. Cloud disk types include basic cloud disks, ultra cloud disks, standard SSDs, and ESSDs.
       *
       * @description When you call this operation, take note of the following items:
       * - Manual snapshots of the cloud disk are retained.
       * - When you release a cloud disk, the cloud disk must be in the **Unattached** (Available) state.
       * - If the cloud disk with the specified ID does not exist, the request is ignored.
       *
       * @param request DeleteRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCDiskResponse
       */
      Models::DeleteRCDiskResponse deleteRCDiskWithOptions(const Models::DeleteRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go data cloud disk. Cloud disk types include basic cloud disks, ultra cloud disks, standard SSDs, and ESSDs.
       *
       * @description When you call this operation, take note of the following items:
       * - Manual snapshots of the cloud disk are retained.
       * - When you release a cloud disk, the cloud disk must be in the **Unattached** (Available) state.
       * - If the cloud disk with the specified ID does not exist, the request is ignored.
       *
       * @param request DeleteRCDiskRequest
       * @return DeleteRCDiskResponse
       */
      Models::DeleteRCDiskResponse deleteRCDisk(const Models::DeleteRCDiskRequest &request);

      /**
       * @summary 删除RDS用户专属主机实例
       *
       * @param request DeleteRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCInstanceResponse
       */
      Models::DeleteRCInstanceResponse deleteRCInstanceWithOptions(const Models::DeleteRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RDS用户专属主机实例
       *
       * @param request DeleteRCInstanceRequest
       * @return DeleteRCInstanceResponse
       */
      Models::DeleteRCInstanceResponse deleteRCInstance(const Models::DeleteRCInstanceRequest &request);

      /**
       * @summary Releases one or more subscription RDS Custom instances by calling the DeleteRCInstance operation.
       *
       * @description After an instance is released, all physical resources used by the instance are reclaimed, and all related data is permanently lost and cannot be recovered.
       *
       * @param tmpReq DeleteRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCInstancesResponse
       */
      Models::DeleteRCInstancesResponse deleteRCInstancesWithOptions(const Models::DeleteRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases one or more subscription RDS Custom instances by calling the DeleteRCInstance operation.
       *
       * @description After an instance is released, all physical resources used by the instance are reclaimed, and all related data is permanently lost and cannot be recovered.
       *
       * @param request DeleteRCInstancesRequest
       * @return DeleteRCInstancesResponse
       */
      Models::DeleteRCInstancesResponse deleteRCInstances(const Models::DeleteRCInstancesRequest &request);

      /**
       * @summary 删除RC模版
       *
       * @param request DeleteRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCNodePoolResponse
       */
      Models::DeleteRCNodePoolResponse deleteRCNodePoolWithOptions(const Models::DeleteRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RC模版
       *
       * @param request DeleteRCNodePoolRequest
       * @return DeleteRCNodePoolResponse
       */
      Models::DeleteRCNodePoolResponse deleteRCNodePool(const Models::DeleteRCNodePoolRequest &request);

      /**
       * @summary Deletes a specified cloud disk snapshot.
       *
       * @description When you invoke this operation, take note of the following items:
       * - If the specified snapshot ID does not exist, the request is ignored.
       * - If the snapshot has been used to create a custom image, the snapshot cannot be deleted. You must delete the custom image before you can delete the snapshot.
       * - If the snapshot has been used to create a cloud disk and the Force parameter is not specified or is set to false, the snapshot cannot be directly deleted. If you want to delete the snapshot, set Force to true to force delete it. After the snapshot is force deleted, the corresponding cloud disk cannot perform initialization again.
       *
       * @param request DeleteRCSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCSnapshotResponse
       */
      Models::DeleteRCSnapshotResponse deleteRCSnapshotWithOptions(const Models::DeleteRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified cloud disk snapshot.
       *
       * @description When you invoke this operation, take note of the following items:
       * - If the specified snapshot ID does not exist, the request is ignored.
       * - If the snapshot has been used to create a custom image, the snapshot cannot be deleted. You must delete the custom image before you can delete the snapshot.
       * - If the snapshot has been used to create a cloud disk and the Force parameter is not specified or is set to false, the snapshot cannot be directly deleted. If you want to delete the snapshot, set Force to true to force delete it. After the snapshot is force deleted, the corresponding cloud disk cannot perform initialization again.
       *
       * @param request DeleteRCSnapshotRequest
       * @return DeleteRCSnapshotResponse
       */
      Models::DeleteRCSnapshotResponse deleteRCSnapshot(const Models::DeleteRCSnapshotRequest &request);

      /**
       * @summary RCVCluster删除接口
       *
       * @param request DeleteRCVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCVClusterResponse
       */
      Models::DeleteRCVClusterResponse deleteRCVClusterWithOptions(const Models::DeleteRCVClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RCVCluster删除接口
       *
       * @param request DeleteRCVClusterRequest
       * @return DeleteRCVClusterResponse
       */
      Models::DeleteRCVClusterResponse deleteRCVCluster(const Models::DeleteRCVClusterRequest &request);

      /**
       * @summary Deletes the data synchronization link of a disaster recovery RDS instance and promotes the disaster recovery instance to a primary instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DeleteReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReplicationLinkResponse
       */
      Models::DeleteReplicationLinkResponse deleteReplicationLinkWithOptions(const Models::DeleteReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the data synchronization link of a disaster recovery RDS instance and promotes the disaster recovery instance to a primary instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DeleteReplicationLinkRequest
       * @return DeleteReplicationLinkResponse
       */
      Models::DeleteReplicationLinkResponse deleteReplicationLink(const Models::DeleteReplicationLinkRequest &request);

      /**
       * @summary Deletes a Data API user credential by calling the DeleteSecret operation.
       *
       * @param request DeleteSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Data API user credential by calling the DeleteSecret operation.
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @summary Deletes a specified replication slot from an instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Precautions
       * A replication slot can be deleted only when its status (SlotStatus) is **INACTIVE**. You can call the DescribeSlots operation to query the replication slot status.
       *
       * @param request DeleteSlotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlotWithOptions(const Models::DeleteSlotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified replication slot from an instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Precautions
       * A replication slot can be deleted only when its status (SlotStatus) is **INACTIVE**. You can call the DescribeSlots operation to query the replication slot status.
       *
       * @param request DeleteSlotRequest
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlot(const Models::DeleteSlotRequest &request);

      /**
       * @summary Deletes a user backup of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Description
       * * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud. For more information, see [Migrate the full data of a self-managed MySQL 5.7 database to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * * This operation only deletes the specified user backup from the ApsaraDB RDS console and does not affect the original backup file in Object Storage Service (OSS). After the deletion, you can call the ImportUserBackupFile operation to re-import the user backup.
       *
       * @param request DeleteUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserBackupFileResponse
       */
      Models::DeleteUserBackupFileResponse deleteUserBackupFileWithOptions(const Models::DeleteUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user backup of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Description
       * * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud. For more information, see [Migrate the full data of a self-managed MySQL 5.7 database to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * * This operation only deletes the specified user backup from the ApsaraDB RDS console and does not affect the original backup file in Object Storage Service (OSS). After the deletion, you can call the ImportUserBackupFile operation to re-import the user backup.
       *
       * @param request DeleteUserBackupFileRequest
       * @return DeleteUserBackupFileResponse
       */
      Models::DeleteUserBackupFileResponse deleteUserBackupFile(const Models::DeleteUserBackupFileRequest &request);

      /**
       * @summary Queries the instance migration status list.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       *
       * @param request DescibeImportsFromDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescibeImportsFromDatabaseResponse
       */
      Models::DescibeImportsFromDatabaseResponse descibeImportsFromDatabaseWithOptions(const Models::DescibeImportsFromDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance migration status list.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       *
       * @param request DescibeImportsFromDatabaseRequest
       * @return DescibeImportsFromDatabaseResponse
       */
      Models::DescibeImportsFromDatabaseResponse descibeImportsFromDatabase(const Models::DescibeImportsFromDatabaseRequest &request);

      /**
       * @summary Queries the Active Directory (AD) domain information of the current instance, including whether the instance has joined a domain, the domain name, and the account used.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       *
       * @param request DescribeADInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeADInfoResponse
       */
      Models::DescribeADInfoResponse describeADInfoWithOptions(const Models::DescribeADInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Active Directory (AD) domain information of the current instance, including whether the instance has joined a domain, the domain name, and the account used.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       *
       * @param request DescribeADInfoRequest
       * @return DescribeADInfoResponse
       */
      Models::DescribeADInfoResponse describeADInfo(const Models::DescribeADInfoRequest &request);

      /**
       * @summary Queries the encryption or data masking permission configurations of accounts in a specified instance.
       *
       * @description ## Request description
       * - Before you invoke this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature before using it.
       *
       * @param request DescribeAccountMaskingPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountMaskingPrivilegeResponse
       */
      Models::DescribeAccountMaskingPrivilegeResponse describeAccountMaskingPrivilegeWithOptions(const Models::DescribeAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the encryption or data masking permission configurations of accounts in a specified instance.
       *
       * @description ## Request description
       * - Before you invoke this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the error message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature before using it.
       *
       * @param request DescribeAccountMaskingPrivilegeRequest
       * @return DescribeAccountMaskingPrivilegeResponse
       */
      Models::DescribeAccountMaskingPrivilegeResponse describeAccountMaskingPrivilege(const Models::DescribeAccountMaskingPrivilegeRequest &request);

      /**
       * @summary Queries the account information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries whether the historical events feature is enabled for ApsaraDB RDS.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeActionEventPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActionEventPolicyResponse
       */
      Models::DescribeActionEventPolicyResponse describeActionEventPolicyWithOptions(const Models::DescribeActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the historical events feature is enabled for ApsaraDB RDS.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeActionEventPolicyRequest
       * @return DescribeActionEventPolicyResponse
       */
      Models::DescribeActionEventPolicyResponse describeActionEventPolicy(const Models::DescribeActionEventPolicyRequest &request);

      /**
       * @summary Retrieves the proactive O&M configuration of a user, which currently includes the scheduled event cycle window information.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the proactive O&M configuration of a user, which currently includes the scheduled event cycle window information.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary Queries the details of scheduled O&M tasks for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Scheduled events for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/104183.html)
       * - [Scheduled events for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/104452.html)
       * - [Scheduled events for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/104451.html)
       * - [Scheduled events for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/104454.html)
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of scheduled O&M tasks for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Scheduled events for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/104183.html)
       * - [Scheduled events for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/104452.html)
       * - [Scheduled events for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/104451.html)
       * - [Scheduled events for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/104454.html)
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Retrieves whitelist templates in batches with support for fuzzy search.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeAllWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllWhitelistTemplateResponse
       */
      Models::DescribeAllWhitelistTemplateResponse describeAllWhitelistTemplateWithOptions(const Models::DescribeAllWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves whitelist templates in batches with support for fuzzy search.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeAllWhitelistTemplateRequest
       * @return DescribeAllWhitelistTemplateResponse
       */
      Models::DescribeAllWhitelistTemplateResponse describeAllWhitelistTemplate(const Models::DescribeAllWhitelistTemplateRequest &request);

      /**
       * @summary Queries the number of analytical instances associated with an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Supported engine
       * RDS MySQL
       * ### Related documentation
       * <props="china">[Create and view MySQL analytical instances](https://help.aliyun.com/document_detail/155180.html)
       *
       * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
       */
      Models::DescribeAnalyticdbByPrimaryDBInstanceResponse describeAnalyticdbByPrimaryDBInstanceWithOptions(const Models::DescribeAnalyticdbByPrimaryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of analytical instances associated with an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Supported engine
       * RDS MySQL
       * ### Related documentation
       * <props="china">[Create and view MySQL analytical instances](https://help.aliyun.com/document_detail/155180.html)
       *
       * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
       * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
       */
      Models::DescribeAnalyticdbByPrimaryDBInstanceResponse describeAnalyticdbByPrimaryDBInstance(const Models::DescribeAnalyticdbByPrimaryDBInstanceRequest &request);

      /**
       * @summary Queries the instance types and storage capacity to which an ApsaraDB RDS instance can be changed.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeAvailableClassesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableClassesResponse
       */
      Models::DescribeAvailableClassesResponse describeAvailableClassesWithOptions(const Models::DescribeAvailableClassesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance types and storage capacity to which an ApsaraDB RDS instance can be changed.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeAvailableClassesRequest
       * @return DescribeAvailableClassesResponse
       */
      Models::DescribeAvailableClassesResponse describeAvailableClasses(const Models::DescribeAvailableClassesRequest &request);

      /**
       * @summary Queries the destination regions to which cross-region backups can be performed for a specified region.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeAvailableCrossRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableCrossRegionResponse
       */
      Models::DescribeAvailableCrossRegionResponse describeAvailableCrossRegionWithOptions(const Models::DescribeAvailableCrossRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the destination regions to which cross-region backups can be performed for a specified region.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeAvailableCrossRegionRequest
       * @return DescribeAvailableCrossRegionResponse
       */
      Models::DescribeAvailableCrossRegionResponse describeAvailableCrossRegion(const Models::DescribeAvailableCrossRegionRequest &request);

      /**
       * @summary Retrieves all enhanced monitoring metrics supported by an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts.
       * [View enhanced monitoring](https://help.aliyun.com/document_detail/299200.html).
       *
       * @param request DescribeAvailableMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableMetricsResponse
       */
      Models::DescribeAvailableMetricsResponse describeAvailableMetricsWithOptions(const Models::DescribeAvailableMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all enhanced monitoring metrics supported by an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts.
       * [View enhanced monitoring](https://help.aliyun.com/document_detail/299200.html).
       *
       * @param request DescribeAvailableMetricsRequest
       * @return DescribeAvailableMetricsResponse
       */
      Models::DescribeAvailableMetricsResponse describeAvailableMetrics(const Models::DescribeAvailableMetricsRequest &request);

      /**
       * @summary Queries the restorable time range of a cross-region backup file.
       *
       * @description > To query the restorable time range of a regular backup file, see DescribeBackups.
       * ### Applicable engine
       * ApsaraDB RDS for MySQL (with Premium Local SSDs)
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       *
       * @param request DescribeAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableRecoveryTimeResponse
       */
      Models::DescribeAvailableRecoveryTimeResponse describeAvailableRecoveryTimeWithOptions(const Models::DescribeAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the restorable time range of a cross-region backup file.
       *
       * @description > To query the restorable time range of a regular backup file, see DescribeBackups.
       * ### Applicable engine
       * ApsaraDB RDS for MySQL (with Premium Local SSDs)
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       *
       * @param request DescribeAvailableRecoveryTimeRequest
       * @return DescribeAvailableRecoveryTimeResponse
       */
      Models::DescribeAvailableRecoveryTimeResponse describeAvailableRecoveryTime(const Models::DescribeAvailableRecoveryTimeRequest &request);

      /**
       * @summary Queries the available zone resources for ApsaraDB RDS.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       *   > This operation is used only to query available zone resources and is not used for the sales of ApsaraDB RDS for PostgreSQL on the console. Due to differences in actual sales policies, some parameter values on the buy page may slightly differ. When making a purchase, refer to the [buy page](https://rdsbuy.console.aliyun.com/create/rds/PostgreSQL).
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZonesWithOptions(const Models::DescribeAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available zone resources for ApsaraDB RDS.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       *   > This operation is used only to query available zone resources and is not used for the sales of ApsaraDB RDS for PostgreSQL on the console. Due to differences in actual sales policies, some parameter values on the buy page may slightly differ. When making a purchase, refer to the [buy page](https://rdsbuy.console.aliyun.com/create/rds/PostgreSQL).
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeAvailableZonesRequest
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZones(const Models::DescribeAvailableZonesRequest &request);

      /**
       * @summary Queries the list of databases in a backup set.
       *
       * @param request DescribeBackupDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupDatabaseResponse
       */
      Models::DescribeBackupDatabaseResponse describeBackupDatabaseWithOptions(const Models::DescribeBackupDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of databases in a backup set.
       *
       * @param request DescribeBackupDatabaseRequest
       * @return DescribeBackupDatabaseResponse
       */
      Models::DescribeBackupDatabaseResponse describeBackupDatabase(const Models::DescribeBackupDatabaseRequest &request);

      /**
       * @summary Queries the backup settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup task list of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup task list of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries the backup sets of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the binary logs of an ApsaraDB RDS for MySQL or ApsaraDB RDS for MariaDB instance, or the WAL logs of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS MariaDB
       * ### Precautions
       * - If **DownloadLink** is NULL, ApsaraDB RDS does not provide a download URL.
       * - If **DownloadLink** is not NULL, you can use this URL to download the backup file. The URL has an expiration time specified by **LinkExpiredTime**. Download the file before the expiration time.
       * - To download backup files by using Resource Access Management (RAM) users, grant authorization to the RAM users. For details, see [Grant a read-only RAM user the permissions to download backup files](https://help.aliyun.com/document_detail/100043.html).
       * - The returned log list contains all log records whose log record end time is later than the query start time and whose log record start time is earlier than the query end time.
       *
       * @param request DescribeBinlogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFilesWithOptions(const Models::DescribeBinlogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binary logs of an ApsaraDB RDS for MySQL or ApsaraDB RDS for MariaDB instance, or the WAL logs of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS MariaDB
       * ### Precautions
       * - If **DownloadLink** is NULL, ApsaraDB RDS does not provide a download URL.
       * - If **DownloadLink** is not NULL, you can use this URL to download the backup file. The URL has an expiration time specified by **LinkExpiredTime**. Download the file before the expiration time.
       * - To download backup files by using Resource Access Management (RAM) users, grant authorization to the RAM users. For details, see [Grant a read-only RAM user the permissions to download backup files](https://help.aliyun.com/document_detail/100043.html).
       * - The returned log list contains all log records whose log record end time is later than the query start time and whose log record start time is earlier than the query end time.
       *
       * @param request DescribeBinlogFilesRequest
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFiles(const Models::DescribeBinlogFilesRequest &request);

      /**
       * @summary Queries the character sets supported by an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeCharacterSetNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetNameWithOptions(const Models::DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the character sets supported by an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeCharacterSetNameRequest
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetName(const Models::DescribeCharacterSetNameRequest &request);

      /**
       * @summary Queries the details of an instance type by instance type code.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeClassDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassDetailsResponse
       */
      Models::DescribeClassDetailsResponse describeClassDetailsWithOptions(const Models::DescribeClassDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance type by instance type code.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeClassDetailsRequest
       * @return DescribeClassDetailsResponse
       */
      Models::DescribeClassDetailsResponse describeClassDetails(const Models::DescribeClassDetailsRequest &request);

      /**
       * @summary Query the details about the assessment report for cloud migration to an instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request DescribeCloudMigrationPrecheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudMigrationPrecheckResultResponse
       */
      Models::DescribeCloudMigrationPrecheckResultResponse describeCloudMigrationPrecheckResultWithOptions(const Models::DescribeCloudMigrationPrecheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details about the assessment report for cloud migration to an instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request DescribeCloudMigrationPrecheckResultRequest
       * @return DescribeCloudMigrationPrecheckResultResponse
       */
      Models::DescribeCloudMigrationPrecheckResultResponse describeCloudMigrationPrecheckResult(const Models::DescribeCloudMigrationPrecheckResultRequest &request);

      /**
       * @summary Queries the details of a cloud migration task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request DescribeCloudMigrationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudMigrationResultResponse
       */
      Models::DescribeCloudMigrationResultResponse describeCloudMigrationResultWithOptions(const Models::DescribeCloudMigrationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cloud migration task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request DescribeCloudMigrationResultRequest
       * @return DescribeCloudMigrationResultResponse
       */
      Models::DescribeCloudMigrationResultResponse describeCloudMigrationResult(const Models::DescribeCloudMigrationResultRequest &request);

      /**
       * @summary Queries the character set collations and time zones supported by ApsaraDB RDS for SQL Server.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server.
       *
       * @param request DescribeCollationTimeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCollationTimeZonesResponse
       */
      Models::DescribeCollationTimeZonesResponse describeCollationTimeZonesWithOptions(const Models::DescribeCollationTimeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the character set collations and time zones supported by ApsaraDB RDS for SQL Server.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server.
       *
       * @param request DescribeCollationTimeZonesRequest
       * @return DescribeCollationTimeZonesResponse
       */
      Models::DescribeCollationTimeZonesResponse describeCollationTimeZones(const Models::DescribeCollationTimeZonesRequest &request);

      /**
       * @summary Queries the configuration of the committed serverless feature.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [Committed serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request DescribeComputeBurstConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComputeBurstConfigResponse
       */
      Models::DescribeComputeBurstConfigResponse describeComputeBurstConfigWithOptions(const Models::DescribeComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of the committed serverless feature.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [Committed serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request DescribeComputeBurstConfigRequest
       * @return DescribeComputeBurstConfigResponse
       */
      Models::DescribeComputeBurstConfigResponse describeComputeBurstConfig(const Models::DescribeComputeBurstConfigRequest &request);

      /**
       * @summary Queries the database and table information of a cross-region backup for an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeCrossBackupMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossBackupMetaListResponse
       */
      Models::DescribeCrossBackupMetaListResponse describeCrossBackupMetaListWithOptions(const Models::DescribeCrossBackupMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database and table information of a cross-region backup for an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeCrossBackupMetaListRequest
       * @return DescribeCrossBackupMetaListResponse
       */
      Models::DescribeCrossBackupMetaListResponse describeCrossBackupMetaList(const Models::DescribeCrossBackupMetaListRequest &request);

      /**
       * @summary Queries the instances that have cross-region backup enabled in a specified region and the cross-region backup settings of these instances.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeCrossRegionBackupDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionBackupDBInstanceResponse
       */
      Models::DescribeCrossRegionBackupDBInstanceResponse describeCrossRegionBackupDBInstanceWithOptions(const Models::DescribeCrossRegionBackupDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances that have cross-region backup enabled in a specified region and the cross-region backup settings of these instances.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeCrossRegionBackupDBInstanceRequest
       * @return DescribeCrossRegionBackupDBInstanceResponse
       */
      Models::DescribeCrossRegionBackupDBInstanceResponse describeCrossRegionBackupDBInstance(const Models::DescribeCrossRegionBackupDBInstanceRequest &request);

      /**
       * @summary Queries the cross-region data backup files of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL ([storage type](https://help.aliyun.com/document_detail/69795.html) must be **Premium Local SSDs**. Cloud disks are not supported.)
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * > To query cross-region log backup files, refer to DescribeCrossRegionLogBackupFiles.
       *
       * @param request DescribeCrossRegionBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionBackupsResponse
       */
      Models::DescribeCrossRegionBackupsResponse describeCrossRegionBackupsWithOptions(const Models::DescribeCrossRegionBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-region data backup files of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL ([storage type](https://help.aliyun.com/document_detail/69795.html) must be **Premium Local SSDs**. Cloud disks are not supported.)
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * > To query cross-region log backup files, refer to DescribeCrossRegionLogBackupFiles.
       *
       * @param request DescribeCrossRegionBackupsRequest
       * @return DescribeCrossRegionBackupsResponse
       */
      Models::DescribeCrossRegionBackupsResponse describeCrossRegionBackups(const Models::DescribeCrossRegionBackupsRequest &request);

      /**
       * @summary Queries the list of cross-region log backup files.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL (the [storage type](https://help.aliyun.com/document_detail/69795.html) must be **Premium Local SSDs**. Cloud disks are not supported.)
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * > To query cross-region data backup files, refer to DescribeCrossRegionBackups.
       *
       * @param request DescribeCrossRegionLogBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionLogBackupFilesResponse
       */
      Models::DescribeCrossRegionLogBackupFilesResponse describeCrossRegionLogBackupFilesWithOptions(const Models::DescribeCrossRegionLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cross-region log backup files.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL (the [storage type](https://help.aliyun.com/document_detail/69795.html) must be **Premium Local SSDs**. Cloud disks are not supported.)
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * > To query cross-region data backup files, refer to DescribeCrossRegionBackups.
       *
       * @param request DescribeCrossRegionLogBackupFilesRequest
       * @return DescribeCrossRegionLogBackupFilesResponse
       */
      Models::DescribeCrossRegionLogBackupFilesResponse describeCrossRegionLogBackupFiles(const Models::DescribeCrossRegionLogBackupFilesRequest &request);

      /**
       * @summary Queries the latest specification change order of an instance.
       *
       * @param request DescribeCurrentModifyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCurrentModifyOrderResponse
       */
      Models::DescribeCurrentModifyOrderResponse describeCurrentModifyOrderWithOptions(const Models::DescribeCurrentModifyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest specification change order of an instance.
       *
       * @param request DescribeCurrentModifyOrderRequest
       * @return DescribeCurrentModifyOrderResponse
       */
      Models::DescribeCurrentModifyOrderResponse describeCurrentModifyOrder(const Models::DescribeCurrentModifyOrderRequest &request);

      /**
       * @summary Queries the resource usage of an instance.
       *
       * @param request DescribeCustinsResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustinsResourceInfoResponse
       */
      Models::DescribeCustinsResourceInfoResponse describeCustinsResourceInfoWithOptions(const Models::DescribeCustinsResourceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage of an instance.
       *
       * @param request DescribeCustinsResourceInfoRequest
       * @return DescribeCustinsResourceInfoResponse
       */
      Models::DescribeCustinsResourceInfoResponse describeCustinsResourceInfo(const Models::DescribeCustinsResourceInfoRequest &request);

      /**
       * @summary Queries the details of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries the tags that are bound to an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceByTagsResponse
       */
      Models::DescribeDBInstanceByTagsResponse describeDBInstanceByTagsWithOptions(const Models::DescribeDBInstanceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceByTagsRequest
       * @return DescribeDBInstanceByTagsResponse
       */
      Models::DescribeDBInstanceByTagsResponse describeDBInstanceByTags(const Models::DescribeDBInstanceByTagsRequest &request);

      /**
       * @summary Queries the column encryption algorithm configuration of a specified instance.
       *
       * @description ## Request description
       * - Before you invoke this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature.
       *
       * @param request DescribeDBInstanceCLSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceCLSResponse
       */
      Models::DescribeDBInstanceCLSResponse describeDBInstanceCLSWithOptions(const Models::DescribeDBInstanceCLSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column encryption algorithm configuration of a specified instance.
       *
       * @description ## Request description
       * - Before you invoke this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when invoking this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature.
       *
       * @param request DescribeDBInstanceCLSRequest
       * @return DescribeDBInstanceCLSResponse
       */
      Models::DescribeDBInstanceCLSResponse describeDBInstanceCLS(const Models::DescribeDBInstanceCLSRequest &request);

      /**
       * @summary Retrieves link diagnostics information for an instance.
       *
       * @param request DescribeDBInstanceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConnectivityResponse
       */
      Models::DescribeDBInstanceConnectivityResponse describeDBInstanceConnectivityWithOptions(const Models::DescribeDBInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves link diagnostics information for an instance.
       *
       * @param request DescribeDBInstanceConnectivityRequest
       * @return DescribeDBInstanceConnectivityResponse
       */
      Models::DescribeDBInstanceConnectivityResponse describeDBInstanceConnectivity(const Models::DescribeDBInstanceConnectivityRequest &request);

      /**
       * @summary Queries the details of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * RDS SQL Server.
       *
       * @param request DescribeDBInstanceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDetailResponse
       */
      Models::DescribeDBInstanceDetailResponse describeDBInstanceDetailWithOptions(const Models::DescribeDBInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * RDS SQL Server.
       *
       * @param request DescribeDBInstanceDetailRequest
       * @return DescribeDBInstanceDetailResponse
       */
      Models::DescribeDBInstanceDetailResponse describeDBInstanceDetail(const Models::DescribeDBInstanceDetailRequest &request);

      /**
       * @summary Queries whether cloud disk encryption is enabled for an ApsaraDB RDS instance and the encryption key details.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKeyWithOptions(const Models::DescribeDBInstanceEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether cloud disk encryption is enabled for an ApsaraDB RDS instance and the encryption key details.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKey(const Models::DescribeDBInstanceEncryptionKeyRequest &request);

      /**
       * @summary Queries the endpoint information of an ApsaraDB RDS instance in the Cluster Edition.
       *
       * @description ### Applicable engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       *
       * @param request DescribeDBInstanceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEndpointsResponse
       */
      Models::DescribeDBInstanceEndpointsResponse describeDBInstanceEndpointsWithOptions(const Models::DescribeDBInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint information of an ApsaraDB RDS instance in the Cluster Edition.
       *
       * @description ### Applicable engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       *
       * @param request DescribeDBInstanceEndpointsRequest
       * @return DescribeDBInstanceEndpointsResponse
       */
      Models::DescribeDBInstanceEndpointsResponse describeDBInstanceEndpoints(const Models::DescribeDBInstanceEndpointsRequest &request);

      /**
       * @summary Queries the high-availability mode and data replication mode of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Query the data replication mode of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96055.html)
       * - [Query the data replication mode of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/151265.html)
       * - [Query the data replication mode of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/415433.html)
       *
       * @param request DescribeDBInstanceHAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceHAConfigResponse
       */
      Models::DescribeDBInstanceHAConfigResponse describeDBInstanceHAConfigWithOptions(const Models::DescribeDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the high-availability mode and data replication mode of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Query the data replication mode of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96055.html)
       * - [Query the data replication mode of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/151265.html)
       * - [Query the data replication mode of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/415433.html)
       *
       * @param request DescribeDBInstanceHAConfigRequest
       * @return DescribeDBInstanceHAConfigResponse
       */
      Models::DescribeDBInstanceHAConfigResponse describeDBInstanceHAConfig(const Models::DescribeDBInstanceHAConfigRequest &request);

      /**
       * @summary Queries the IP whitelist of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayListWithOptions(const Models::DescribeDBInstanceIPArrayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP whitelist of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayList(const Models::DescribeDBInstanceIPArrayListRequest &request);

      /**
       * @summary Queries the internal IP addresses and hostnames of the underlying ECS instances for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Before you begin
       * - Instance edition: Basic Edition, High-availability Edition (SQL Server 2012 or later), or Cluster Edition
       * - Instance type: general-purpose or dedicated (shared instance types are not supported)
       * - Instance creation time: Basic Edition instances must be created on or after September 2, 2022. You can view the instance creation time in the Running Status section on the Basic Information page.
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * - [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       * - [Migrate Kingdee K/3 WISE to Alibaba Cloud: Best practices for distributed transactions between ECS and RDS SQL Server](https://help.aliyun.com/document_detail/124188.html)
       *
       * @param request DescribeDBInstanceIpHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIpHostnameResponse
       */
      Models::DescribeDBInstanceIpHostnameResponse describeDBInstanceIpHostnameWithOptions(const Models::DescribeDBInstanceIpHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the internal IP addresses and hostnames of the underlying ECS instances for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Before you begin
       * - Instance edition: Basic Edition, High-availability Edition (SQL Server 2012 or later), or Cluster Edition
       * - Instance type: general-purpose or dedicated (shared instance types are not supported)
       * - Instance creation time: Basic Edition instances must be created on or after September 2, 2022. You can view the instance creation time in the Running Status section on the Basic Information page.
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * - [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       * - [Migrate Kingdee K/3 WISE to Alibaba Cloud: Best practices for distributed transactions between ECS and RDS SQL Server](https://help.aliyun.com/document_detail/124188.html)
       *
       * @param request DescribeDBInstanceIpHostnameRequest
       * @return DescribeDBInstanceIpHostnameResponse
       */
      Models::DescribeDBInstanceIpHostnameResponse describeDBInstanceIpHostname(const Models::DescribeDBInstanceIpHostnameRequest &request);

      /**
       * @summary Queries the enhanced monitoring metrics that are enabled for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts.
       * [View enhanced monitoring](https://help.aliyun.com/document_detail/299200.html).
       *
       * @param request DescribeDBInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMetricsResponse
       */
      Models::DescribeDBInstanceMetricsResponse describeDBInstanceMetricsWithOptions(const Models::DescribeDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enhanced monitoring metrics that are enabled for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts.
       * [View enhanced monitoring](https://help.aliyun.com/document_detail/299200.html).
       *
       * @param request DescribeDBInstanceMetricsRequest
       * @return DescribeDBInstanceMetricsResponse
       */
      Models::DescribeDBInstanceMetricsResponse describeDBInstanceMetrics(const Models::DescribeDBInstanceMetricsRequest &request);

      /**
       * @summary Queries the monitoring frequency of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(const Models::DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring frequency of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(const Models::DescribeDBInstanceMonitorRequest &request);

      /**
       * @summary Queries all endpoint information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all endpoint information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries all endpoint information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceNetInfoForChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoForChannelResponse
       */
      Models::DescribeDBInstanceNetInfoForChannelResponse describeDBInstanceNetInfoForChannelWithOptions(const Models::DescribeDBInstanceNetInfoForChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all endpoint information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstanceNetInfoForChannelRequest
       * @return DescribeDBInstanceNetInfoForChannelResponse
       */
      Models::DescribeDBInstanceNetInfoForChannelResponse describeDBInstanceNetInfoForChannel(const Models::DescribeDBInstanceNetInfoForChannelRequest &request);

      /**
       * @summary Queries the performance data of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(const Models::DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformance(const Models::DescribeDBInstancePerformanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
       *
       * @summary This operation is no longer maintained. You can still call this operation, but it is no longer maintained.
       *
       * @description This operation is no longer maintained. **You can still call this operation, but Alibaba Cloud no longer maintains it**.
       *
       * @param request DescribeDBInstancePromoteActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePromoteActivityResponse
       */
      Models::DescribeDBInstancePromoteActivityResponse describeDBInstancePromoteActivityWithOptions(const Models::DescribeDBInstancePromoteActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
       *
       * @summary This operation is no longer maintained. You can still call this operation, but it is no longer maintained.
       *
       * @description This operation is no longer maintained. **You can still call this operation, but Alibaba Cloud no longer maintains it**.
       *
       * @param request DescribeDBInstancePromoteActivityRequest
       * @return DescribeDBInstancePromoteActivityResponse
       */
      Models::DescribeDBInstancePromoteActivityResponse describeDBInstancePromoteActivity(const Models::DescribeDBInstancePromoteActivityRequest &request);

      /**
       * @summary Queries the database proxy settings of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * RDS MySQL
       * ### Description
       * This operation queries the MySQL shared database proxy. To query the dedicated dedicated proxy of an ApsaraDB RDS for MySQL instance, see [DescribeDBProxy](https://help.aliyun.com/document_detail/610506.html).
       * ### Before you begin
       * Before you call this operation, make sure that the ApsaraDB RDS for MySQL instance uses a **shared database proxy**. Otherwise, the operation fails.
       *
       * @param request DescribeDBInstanceProxyConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceProxyConfigurationResponse
       */
      Models::DescribeDBInstanceProxyConfigurationResponse describeDBInstanceProxyConfigurationWithOptions(const Models::DescribeDBInstanceProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database proxy settings of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * RDS MySQL
       * ### Description
       * This operation queries the MySQL shared database proxy. To query the dedicated dedicated proxy of an ApsaraDB RDS for MySQL instance, see [DescribeDBProxy](https://help.aliyun.com/document_detail/610506.html).
       * ### Before you begin
       * Before you call this operation, make sure that the ApsaraDB RDS for MySQL instance uses a **shared database proxy**. Otherwise, the operation fails.
       *
       * @param request DescribeDBInstanceProxyConfigurationRequest
       * @return DescribeDBInstanceProxyConfigurationResponse
       */
      Models::DescribeDBInstanceProxyConfigurationResponse describeDBInstanceProxyConfiguration(const Models::DescribeDBInstanceProxyConfigurationRequest &request);

      /**
       * @summary Queries the instance status and configuration of a native replication instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * [RDS MySQL native replication instance](https://help.aliyun.com/document_detail/2856487.html)
       *
       * @param request DescribeDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceReplicationResponse
       */
      Models::DescribeDBInstanceReplicationResponse describeDBInstanceReplicationWithOptions(const Models::DescribeDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance status and configuration of a native replication instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * [RDS MySQL native replication instance](https://help.aliyun.com/document_detail/2856487.html)
       *
       * @param request DescribeDBInstanceReplicationRequest
       * @return DescribeDBInstanceReplicationResponse
       */
      Models::DescribeDBInstanceReplicationResponse describeDBInstanceReplication(const Models::DescribeDBInstanceReplicationRequest &request);

      /**
       * @summary Queries the SSL configuration of an ApsaraDB RDS instance.
       *
       * @description ### Supported DPI engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229518.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL configuration of an ApsaraDB RDS instance.
       *
       * @description ### Supported DPI engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229518.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @summary Queries the security group rules of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * [Configure security group rules for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSecurityGroupRuleResponse
       */
      Models::DescribeDBInstanceSecurityGroupRuleResponse describeDBInstanceSecurityGroupRuleWithOptions(const Models::DescribeDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security group rules of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * [Configure security group rules for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeDBInstanceSecurityGroupRuleRequest
       * @return DescribeDBInstanceSecurityGroupRuleResponse
       */
      Models::DescribeDBInstanceSecurityGroupRuleResponse describeDBInstanceSecurityGroupRule(const Models::DescribeDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Queries the primary/secondary switchover logs of an instance.
       *
       * @description This operation is used to query the primary/secondary switchover logs of an instance. This operation is applicable to ApsaraDB RDS for MySQL High-availability Edition instances, ApsaraDB RDS for MySQL RDS Enterprise Edition Enterprise instances, ApsaraDB RDS for SQL Server instances, ApsaraDB RDS for PostgreSQL instances, and PPAS instances.
       *
       * @param request DescribeDBInstanceSwitchLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSwitchLogResponse
       */
      Models::DescribeDBInstanceSwitchLogResponse describeDBInstanceSwitchLogWithOptions(const Models::DescribeDBInstanceSwitchLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the primary/secondary switchover logs of an instance.
       *
       * @description This operation is used to query the primary/secondary switchover logs of an instance. This operation is applicable to ApsaraDB RDS for MySQL High-availability Edition instances, ApsaraDB RDS for MySQL RDS Enterprise Edition Enterprise instances, ApsaraDB RDS for SQL Server instances, ApsaraDB RDS for PostgreSQL instances, and PPAS instances.
       *
       * @param request DescribeDBInstanceSwitchLogRequest
       * @return DescribeDBInstanceSwitchLogResponse
       */
      Models::DescribeDBInstanceSwitchLogResponse describeDBInstanceSwitchLog(const Models::DescribeDBInstanceSwitchLogRequest &request);

      /**
       * @summary Queries the Transparent Data Encryption (TDE) status of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(const Models::DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Transparent Data Encryption (TDE) status of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeDBInstanceTDERequest
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDE(const Models::DescribeDBInstanceTDERequest &request);

      /**
       * @summary Queries a list of ApsaraDB RDS instances.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ApsaraDB RDS instances.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries a list of instances. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained: **the operation can still be called, but Alibaba Cloud no longer maintains it**. Use the **DescribeDBInstances** operation instead.
       *
       * @param request DescribeDBInstancesAsCsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesAsCsvResponse
       */
      Models::DescribeDBInstancesAsCsvResponse describeDBInstancesAsCsvWithOptions(const Models::DescribeDBInstancesAsCsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries a list of instances. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained: **the operation can still be called, but Alibaba Cloud no longer maintains it**. Use the **DescribeDBInstances** operation instead.
       *
       * @param request DescribeDBInstancesAsCsvRequest
       * @return DescribeDBInstancesAsCsvResponse
       */
      Models::DescribeDBInstancesAsCsvResponse describeDBInstancesAsCsv(const Models::DescribeDBInstancesAsCsvRequest &request);

      /**
       * @summary Queries information about ApsaraDB RDS instances based on the remaining available time of subscription instances.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstancesByExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesByExpireTimeResponse
       */
      Models::DescribeDBInstancesByExpireTimeResponse describeDBInstancesByExpireTimeWithOptions(const Models::DescribeDBInstancesByExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about ApsaraDB RDS instances based on the remaining available time of subscription instances.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDBInstancesByExpireTimeRequest
       * @return DescribeDBInstancesByExpireTimeResponse
       */
      Models::DescribeDBInstancesByExpireTimeResponse describeDBInstancesByExpireTime(const Models::DescribeDBInstancesByExpireTimeRequest &request);

      /**
       * @summary Queries database instances by performance.
       *
       * @param request DescribeDBInstancesByPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesByPerformanceResponse
       */
      Models::DescribeDBInstancesByPerformanceResponse describeDBInstancesByPerformanceWithOptions(const Models::DescribeDBInstancesByPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database instances by performance.
       *
       * @param request DescribeDBInstancesByPerformanceRequest
       * @return DescribeDBInstancesByPerformanceResponse
       */
      Models::DescribeDBInstancesByPerformanceResponse describeDBInstancesByPerformance(const Models::DescribeDBInstancesByPerformanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries clone database instances. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained: **the operation can still be called, but Alibaba Cloud no longer maintains it**. Use the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to query the details of new instances.
       *
       * @param request DescribeDBInstancesForCloneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesForCloneResponse
       */
      Models::DescribeDBInstancesForCloneResponse describeDBInstancesForCloneWithOptions(const Models::DescribeDBInstancesForCloneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries clone database instances. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained: **the operation can still be called, but Alibaba Cloud no longer maintains it**. Use the [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) operation to query the details of new instances.
       *
       * @param request DescribeDBInstancesForCloneRequest
       * @return DescribeDBInstancesForCloneResponse
       */
      Models::DescribeDBInstancesForCloneResponse describeDBInstancesForClone(const Models::DescribeDBInstancesForCloneRequest &request);

      /**
       * @summary Queries the list of available minor engine versions for MySQL or PostgreSQL.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Description
       * This operation is used to query the details of minor engine versions before you purchase or upgrade an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance, so that you can select a version as needed.
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersionsWithOptions(const Models::DescribeDBMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available minor engine versions for MySQL or PostgreSQL.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Description
       * This operation is used to query the details of minor engine versions before you purchase or upgrade an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance, so that you can select a version as needed.
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersions(const Models::DescribeDBMiniEngineVersionsRequest &request);

      /**
       * @summary Queries the details of the database proxy settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       *
       * @param request DescribeDBProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyResponse
       */
      Models::DescribeDBProxyResponse describeDBProxyWithOptions(const Models::DescribeDBProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the database proxy settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       *
       * @param request DescribeDBProxyRequest
       * @return DescribeDBProxyResponse
       */
      Models::DescribeDBProxyResponse describeDBProxy(const Models::DescribeDBProxyRequest &request);

      /**
       * @summary Queries the endpoint information of the database proxy for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       *
       * @param request DescribeDBProxyEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyEndpointResponse
       */
      Models::DescribeDBProxyEndpointResponse describeDBProxyEndpointWithOptions(const Models::DescribeDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint information of the database proxy for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       *
       * @param request DescribeDBProxyEndpointRequest
       * @return DescribeDBProxyEndpointResponse
       */
      Models::DescribeDBProxyEndpointResponse describeDBProxyEndpoint(const Models::DescribeDBProxyEndpointRequest &request);

      /**
       * @summary Queries the performance data of the database proxy for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS for MySQL Cluster Edition instances are progressively provided with a complimentary dedicated proxy service with one proxy node across regions. For more information, see [ApsaraDB RDS for MySQL Cluster Edition complimentary dedicated proxy service with one proxy node](https://help.aliyun.com/document_detail/2555466.html).
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation to fully understand the prerequisites and impacts of this operation.
       * - [View monitoring data for RDS MySQL](https://help.aliyun.com/document_detail/194241.html)
       * - [View monitoring data for RDS PostgreSQL](https://help.aliyun.com/document_detail/418275.html)
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformanceWithOptions(const Models::DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of the database proxy for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS for MySQL Cluster Edition instances are progressively provided with a complimentary dedicated proxy service with one proxy node across regions. For more information, see [ApsaraDB RDS for MySQL Cluster Edition complimentary dedicated proxy service with one proxy node](https://help.aliyun.com/document_detail/2555466.html).
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation to fully understand the prerequisites and impacts of this operation.
       * - [View monitoring data for RDS MySQL](https://help.aliyun.com/document_detail/194241.html)
       * - [View monitoring data for RDS PostgreSQL](https://help.aliyun.com/document_detail/418275.html)
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformance(const Models::DescribeDBProxyPerformanceRequest &request);

      /**
       * @summary Queries the distributed transaction whitelist of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Configure a distributed transaction whitelist for SQL Server](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDTCSecurityIpHostsForSQLServerResponse
       */
      Models::DescribeDTCSecurityIpHostsForSQLServerResponse describeDTCSecurityIpHostsForSQLServerWithOptions(const Models::DescribeDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distributed transaction whitelist of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Configure a distributed transaction whitelist for SQL Server](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
       * @return DescribeDTCSecurityIpHostsForSQLServerResponse
       */
      Models::DescribeDTCSecurityIpHostsForSQLServerResponse describeDTCSecurityIpHostsForSQLServer(const Models::DescribeDTCSecurityIpHostsForSQLServerRequest &request);

      /**
       * @summary Queries the database information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabasesWithOptions(const Models::DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeDatabasesRequest
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabases(const Models::DescribeDatabasesRequest &request);

      /**
       * @summary Queries information about an ApsaraDB RDS dedicated cluster.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches by cluster. You can create multiple dedicated clusters in a region. A dedicated cluster contains multiple hosts, and a host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request DescribeDedicatedHostGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostGroupsResponse
       */
      Models::DescribeDedicatedHostGroupsResponse describeDedicatedHostGroupsWithOptions(const Models::DescribeDedicatedHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an ApsaraDB RDS dedicated cluster.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches by cluster. You can create multiple dedicated clusters in a region. A dedicated cluster contains multiple hosts, and a host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request DescribeDedicatedHostGroupsRequest
       * @return DescribeDedicatedHostGroupsResponse
       */
      Models::DescribeDedicatedHostGroupsResponse describeDedicatedHostGroups(const Models::DescribeDedicatedHostGroupsRequest &request);

      /**
       * @summary Queries the host information in a dedicated cluster.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches by cluster. You can create multiple dedicated clusters in a region. A dedicated cluster contains multiple hosts, and a host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request DescribeDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(const Models::DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the host information in a dedicated cluster.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches by cluster. You can create multiple dedicated clusters in a region. A dedicated cluster contains multiple hosts, and a host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request DescribeDedicatedHostsRequest
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHosts(const Models::DescribeDedicatedHostsRequest &request);

      /**
       * @summary Queries the backup sets of released ApsaraDB RDS for MySQL instances.
       *
       * @description ### Applicable engine
       * RDS MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Set the backup retention policy after an instance is released](https://help.aliyun.com/document_detail/2836955.html)
       *
       * @param request DescribeDetachedBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackupsWithOptions(const Models::DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets of released ApsaraDB RDS for MySQL instances.
       *
       * @description ### Applicable engine
       * RDS MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Set the backup retention policy after an instance is released](https://help.aliyun.com/document_detail/2836955.html)
       *
       * @param request DescribeDetachedBackupsRequest
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackups(const Models::DescribeDetachedBackupsRequest &request);

      /**
       * @summary Queries the error logs of an instance within a specified time range.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeErrorLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeErrorLogsResponse
       */
      Models::DescribeErrorLogsResponse describeErrorLogsWithOptions(const Models::DescribeErrorLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error logs of an instance within a specified time range.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeErrorLogsRequest
       * @return DescribeErrorLogsResponse
       */
      Models::DescribeErrorLogsResponse describeErrorLogs(const Models::DescribeErrorLogsRequest &request);

      /**
       * @summary Queries the list of historical event records for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before proceeding.
       * - [RDS MySQL historical events](https://help.aliyun.com/document_detail/468953.html)
       * - [RDS PostgreSQL historical events](https://help.aliyun.com/document_detail/2569306.html)
       * - [RDS SQL Server historical events](https://help.aliyun.com/document_detail/2571444.html)
       * - [RDS MariaDB historical events](https://help.aliyun.com/document_detail/2571339.html)
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of historical event records for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before proceeding.
       * - [RDS MySQL historical events](https://help.aliyun.com/document_detail/468953.html)
       * - [RDS PostgreSQL historical events](https://help.aliyun.com/document_detail/2569306.html)
       * - [RDS SQL Server historical events](https://help.aliyun.com/document_detail/2571444.html)
       * - [RDS MariaDB historical events](https://help.aliyun.com/document_detail/2571339.html)
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Queries the list of active geo-redundancy database clusters for ApsaraDB RDS for MySQL or the details of a specified cluster.
       *
       * @description ### Supported engine
       * - RDS MySQL
       *
       * @param request DescribeGadInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstancesWithOptions(const Models::DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of active geo-redundancy database clusters for ApsaraDB RDS for MySQL or the details of a specified cluster.
       *
       * @description ### Supported engine
       * - RDS MySQL
       *
       * @param request DescribeGadInstancesRequest
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstances(const Models::DescribeGadInstancesRequest &request);

      /**
       * @summary Queries the availability check method of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * [What is an availability check method](https://help.aliyun.com/document_detail/207467.html)
       *
       * @param request DescribeHADiagnoseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHADiagnoseConfigResponse
       */
      Models::DescribeHADiagnoseConfigResponse describeHADiagnoseConfigWithOptions(const Models::DescribeHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the availability check method of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * [What is an availability check method](https://help.aliyun.com/document_detail/207467.html)
       *
       * @param request DescribeHADiagnoseConfigRequest
       * @return DescribeHADiagnoseConfigResponse
       */
      Models::DescribeHADiagnoseConfigResponse describeHADiagnoseConfig(const Models::DescribeHADiagnoseConfigRequest &request);

      /**
       * @summary Queries the automatic switchover settings of the primary and secondary instances of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeHASwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHASwitchConfigResponse
       */
      Models::DescribeHASwitchConfigResponse describeHASwitchConfigWithOptions(const Models::DescribeHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic switchover settings of the primary and secondary instances of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeHASwitchConfigRequest
       * @return DescribeHASwitchConfigResponse
       */
      Models::DescribeHASwitchConfigResponse describeHASwitchConfig(const Models::DescribeHASwitchConfigRequest &request);

      /**
       * @summary Queries the event list in Event Center.
       *
       * @param request DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event list in Event Center.
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Queries historical event statistics from the Event Center.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStatWithOptions(const Models::DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical event statistics from the Event Center.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStat(const Models::DescribeHistoryEventsStatRequest &request);

      /**
       * @summary Retrieves historical task records, supporting tasks created within the last 30 days.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts.
       * - [Task list of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/474275.html)
       * - [Task list of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/474537.html)
       * - [Task list of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/614826.html)
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves historical task records, supporting tasks created within the last 30 days.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts.
       * - [Task list of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/474275.html)
       * - [Task list of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/474537.html)
       * - [Task list of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/614826.html)
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Queries the statistics of tasks in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of tasks in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Queries the elastic policy parameters of a host group.
       *
       * @param request DescribeHostGroupElasticStrategyParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostGroupElasticStrategyParametersResponse
       */
      Models::DescribeHostGroupElasticStrategyParametersResponse describeHostGroupElasticStrategyParametersWithOptions(const Models::DescribeHostGroupElasticStrategyParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the elastic policy parameters of a host group.
       *
       * @param request DescribeHostGroupElasticStrategyParametersRequest
       * @return DescribeHostGroupElasticStrategyParametersResponse
       */
      Models::DescribeHostGroupElasticStrategyParametersResponse describeHostGroupElasticStrategyParameters(const Models::DescribeHostGroupElasticStrategyParametersRequest &request);

      /**
       * @summary Queries the WebShell logon information for the host of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       * ### Before you begin
       * - The RDS instance must meet the following conditions:
       *   - Region: All regions except China (Zhangjiakou) support this feature.
       *   - Instance edition: Basic Edition, high-availability series (SQL Server 2012 or later), or Cluster Edition.
       *   - Instance type: general-purpose or dedicated. Shared instance types are not supported.
       *   - Network type: VPC. To change the network type, see [Change the network type](https://help.aliyun.com/document_detail/95707.html).
       *   - Instance creation time: High-availability series and Cluster Edition instances must be created on or after January 1, 2021. Basic Edition instances must be created on or after September 2, 2022. You can view the **creation time** in the **Running Status** section on the **Basic Information** page.
       * - You must log on with an **Alibaba Cloud account**.
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Create a host account and log on](https://help.aliyun.com/document_detail/354862.html)
       *
       * @param request DescribeHostWebShellRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostWebShellResponse
       */
      Models::DescribeHostWebShellResponse describeHostWebShellWithOptions(const Models::DescribeHostWebShellRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the WebShell logon information for the host of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       * ### Before you begin
       * - The RDS instance must meet the following conditions:
       *   - Region: All regions except China (Zhangjiakou) support this feature.
       *   - Instance edition: Basic Edition, high-availability series (SQL Server 2012 or later), or Cluster Edition.
       *   - Instance type: general-purpose or dedicated. Shared instance types are not supported.
       *   - Network type: VPC. To change the network type, see [Change the network type](https://help.aliyun.com/document_detail/95707.html).
       *   - Instance creation time: High-availability series and Cluster Edition instances must be created on or after January 1, 2021. Basic Edition instances must be created on or after September 2, 2022. You can view the **creation time** in the **Running Status** section on the **Basic Information** page.
       * - You must log on with an **Alibaba Cloud account**.
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Create a host account and log on](https://help.aliyun.com/document_detail/354862.html)
       *
       * @param request DescribeHostWebShellRequest
       * @return DescribeHostWebShellResponse
       */
      Models::DescribeHostWebShellResponse describeHostWebShell(const Models::DescribeHostWebShellRequest &request);

      /**
       * @summary Queries the details of a data import task for a native replication ApsaraDB RDS instance.
       *
       * @description Queries the details of a data import task.
       *
       * @param request DescribeImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportTaskResponse
       */
      Models::DescribeImportTaskResponse describeImportTaskWithOptions(const Models::DescribeImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data import task for a native replication ApsaraDB RDS instance.
       *
       * @description Queries the details of a data import task.
       *
       * @param request DescribeImportTaskRequest
       * @return DescribeImportTaskResponse
       */
      Models::DescribeImportTaskResponse describeImportTask(const Models::DescribeImportTaskRequest &request);

      /**
       * @summary Queries the details of an import task dry run, including the specific check items and check results.
       *
       * @description Queries the details of an import task dry run.
       *
       * @param request DescribeImportTaskValidationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportTaskValidationResponse
       */
      Models::DescribeImportTaskValidationResponse describeImportTaskValidationWithOptions(const Models::DescribeImportTaskValidationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an import task dry run, including the specific check items and check results.
       *
       * @description Queries the details of an import task dry run.
       *
       * @param request DescribeImportTaskValidationRequest
       * @return DescribeImportTaskValidationResponse
       */
      Models::DescribeImportTaskValidationResponse describeImportTaskValidation(const Models::DescribeImportTaskValidationRequest &request);

      /**
       * @summary Queries the auto-renewal status of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Queries the cross-region backup settings of an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeInstanceCrossBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceCrossBackupPolicyResponse
       */
      Models::DescribeInstanceCrossBackupPolicyResponse describeInstanceCrossBackupPolicyWithOptions(const Models::DescribeInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-region backup settings of an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeInstanceCrossBackupPolicyRequest
       * @return DescribeInstanceCrossBackupPolicyResponse
       */
      Models::DescribeInstanceCrossBackupPolicyResponse describeInstanceCrossBackupPolicy(const Models::DescribeInstanceCrossBackupPolicyRequest &request);

      /**
       * @summary Queries the reserved keywords of an ApsaraDB RDS instance, which are keywords that cannot be used when you create databases or accounts.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeInstanceKeywordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceKeywordsResponse
       */
      Models::DescribeInstanceKeywordsResponse describeInstanceKeywordsWithOptions(const Models::DescribeInstanceKeywordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reserved keywords of an ApsaraDB RDS instance, which are keywords that cannot be used when you create databases or accounts.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeInstanceKeywordsRequest
       * @return DescribeInstanceKeywordsResponse
       */
      Models::DescribeInstanceKeywordsResponse describeInstanceKeywords(const Models::DescribeInstanceKeywordsRequest &request);

      /**
       * @summary Queries the whitelist templates associated with an instance by instance name.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeInstanceLinkedWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceLinkedWhitelistTemplateResponse
       */
      Models::DescribeInstanceLinkedWhitelistTemplateResponse describeInstanceLinkedWhitelistTemplateWithOptions(const Models::DescribeInstanceLinkedWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist templates associated with an instance by instance name.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeInstanceLinkedWhitelistTemplateRequest
       * @return DescribeInstanceLinkedWhitelistTemplateResponse
       */
      Models::DescribeInstanceLinkedWhitelistTemplateResponse describeInstanceLinkedWhitelistTemplate(const Models::DescribeInstanceLinkedWhitelistTemplateRequest &request);

      /**
       * @summary Queries whether a specified Key Management Service (KMS) resource is associated with ApsaraDB RDS instances.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeKmsAssociateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKmsAssociateResourcesResponse
       */
      Models::DescribeKmsAssociateResourcesResponse describeKmsAssociateResourcesWithOptions(const Models::DescribeKmsAssociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a specified Key Management Service (KMS) resource is associated with ApsaraDB RDS instances.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeKmsAssociateResourcesRequest
       * @return DescribeKmsAssociateResourcesResponse
       */
      Models::DescribeKmsAssociateResourcesResponse describeKmsAssociateResources(const Models::DescribeKmsAssociateResourcesRequest &request);

      /**
       * @summary Queries the restorable time range of backups for an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTimeWithOptions(const Models::DescribeLocalAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the restorable time range of backups for an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTime(const Models::DescribeLocalAvailableRecoveryTimeRequest &request);

      /**
       * @summary Queries the log backup files of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server
       * > To view log files of other engines, call DescribeBinlogFiles.
       *
       * @param request DescribeLogBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogBackupFilesResponse
       */
      Models::DescribeLogBackupFilesResponse describeLogBackupFilesWithOptions(const Models::DescribeLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log backup files of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server
       * > To view log files of other engines, call DescribeBinlogFiles.
       *
       * @param request DescribeLogBackupFilesRequest
       * @return DescribeLogBackupFilesResponse
       */
      Models::DescribeLogBackupFilesResponse describeLogBackupFiles(const Models::DescribeLogBackupFilesRequest &request);

      /**
       * @summary Retrieves information about instances that are pending upgrade in an RDS marketing campaign.
       *
       * @param request DescribeMarketingActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMarketingActivityResponse
       */
      Models::DescribeMarketingActivityResponse describeMarketingActivityWithOptions(const Models::DescribeMarketingActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about instances that are pending upgrade in an RDS marketing campaign.
       *
       * @param request DescribeMarketingActivityRequest
       * @return DescribeMarketingActivityResponse
       */
      Models::DescribeMarketingActivityResponse describeMarketingActivity(const Models::DescribeMarketingActivityRequest &request);

      /**
       * @summary Queries the encryption or masking rules of a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column Cloud Hardware Security Module (CloudHSM) feature.
       *
       * @param request DescribeMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRulesWithOptions(const Models::DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the encryption or masking rules of a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column Cloud Hardware Security Module (CloudHSM) feature.
       *
       * @param request DescribeMaskingRulesRequest
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRules(const Models::DescribeMaskingRulesRequest &request);

      /**
       * @summary Queries the databases and tables that can be restored from a specified backup set.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * > Only MySQL 8.0, 5.7, and 5.6 High-availability Edition (local SSD) are supported.
       * ### Description
       * Before you call the [RestoreTable](https://help.aliyun.com/document_detail/131510.html) operation to perform [individual database and table restoration for MySQL](https://help.aliyun.com/document_detail/103175.html), you can call this operation to query the databases and tables that can be restored.
       *
       * @param request DescribeMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaListWithOptions(const Models::DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases and tables that can be restored from a specified backup set.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * > Only MySQL 8.0, 5.7, and 5.6 High-availability Edition (local SSD) are supported.
       * ### Description
       * Before you call the [RestoreTable](https://help.aliyun.com/document_detail/131510.html) operation to perform [individual database and table restoration for MySQL](https://help.aliyun.com/document_detail/103175.html), you can call this operation to query the databases and tables that can be restored.
       *
       * @param request DescribeMetaListRequest
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaList(const Models::DescribeMetaListRequest &request);

      /**
       * @summary Queries information about an Object Storage Service (OSS) backup migration task for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       *
       * @param request DescribeMigrateTaskByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrateTaskByIdResponse
       */
      Models::DescribeMigrateTaskByIdResponse describeMigrateTaskByIdWithOptions(const Models::DescribeMigrateTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an Object Storage Service (OSS) backup migration task for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       *
       * @param request DescribeMigrateTaskByIdRequest
       * @return DescribeMigrateTaskByIdResponse
       */
      Models::DescribeMigrateTaskByIdResponse describeMigrateTaskById(const Models::DescribeMigrateTaskByIdRequest &request);

      /**
       * @summary Queries the list of backup data migration tasks for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Description
       * This operation queries backup data migration task records for an instance within the last week.
       * ### Precautions
       * * The source backup file for backup data migration must be a full backup (FULL) file.
       * * ApsaraDB RDS for SQL Server 2017 Cluster Edition instances are not supported.
       *
       * @param request DescribeMigrateTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrateTasksResponse
       */
      Models::DescribeMigrateTasksResponse describeMigrateTasksWithOptions(const Models::DescribeMigrateTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of backup data migration tasks for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Description
       * This operation queries backup data migration task records for an instance within the last week.
       * ### Precautions
       * * The source backup file for backup data migration must be a full backup (FULL) file.
       * * ApsaraDB RDS for SQL Server 2017 Cluster Edition instances are not supported.
       *
       * @param request DescribeMigrateTasksRequest
       * @return DescribeMigrateTasksResponse
       */
      Models::DescribeMigrateTasksResponse describeMigrateTasks(const Models::DescribeMigrateTasksRequest &request);

      /**
       * @summary 查询PostgreSQL实例Hba配置变更日志
       *
       * @param request DescribeModifyPGHbaConfigLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyPGHbaConfigLogResponse
       */
      Models::DescribeModifyPGHbaConfigLogResponse describeModifyPGHbaConfigLogWithOptions(const Models::DescribeModifyPGHbaConfigLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PostgreSQL实例Hba配置变更日志
       *
       * @param request DescribeModifyPGHbaConfigLogRequest
       * @return DescribeModifyPGHbaConfigLogResponse
       */
      Models::DescribeModifyPGHbaConfigLogResponse describeModifyPGHbaConfigLog(const Models::DescribeModifyPGHbaConfigLogRequest &request);

      /**
       * @summary Queries the parameter modification logs of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeModifyParameterLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(const Models::DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter modification logs of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeModifyParameterLogRequest
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLog(const Models::DescribeModifyParameterLogRequest &request);

      /**
       * @summary Queries the file details of a backup data upload task for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Before you begin
       * This operation does not support SQL Server 2017 Enterprise Edition or SQL Server 2019 Enterprise Edition Enterprise instances.
       *
       * @param request DescribeOssDownloadsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssDownloadsResponse
       */
      Models::DescribeOssDownloadsResponse describeOssDownloadsWithOptions(const Models::DescribeOssDownloadsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the file details of a backup data upload task for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Before you begin
       * This operation does not support SQL Server 2017 Enterprise Edition or SQL Server 2019 Enterprise Edition Enterprise instances.
       *
       * @param request DescribeOssDownloadsRequest
       * @return DescribeOssDownloadsResponse
       */
      Models::DescribeOssDownloadsResponse describeOssDownloads(const Models::DescribeOssDownloadsRequest &request);

      /**
       * @summary 查询PostgreSQL实例HBA配置
       *
       * @param request DescribePGHbaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePGHbaConfigResponse
       */
      Models::DescribePGHbaConfigResponse describePGHbaConfigWithOptions(const Models::DescribePGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询PostgreSQL实例HBA配置
       *
       * @param request DescribePGHbaConfigRequest
       * @return DescribePGHbaConfigResponse
       */
      Models::DescribePGHbaConfigResponse describePGHbaConfig(const Models::DescribePGHbaConfigRequest &request);

      /**
       * @summary Queries the information about a specified ApsaraDB RDS parameter template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified ApsaraDB RDS parameter template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary Queries the list of parameter templates in a specified region.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of parameter templates in a specified region.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Queries database parameter templates.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries database parameter templates.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the details of a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Set instance parameters for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html)
       * - [Set instance parameters for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DescribeParameterTimedScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTimedScheduleTaskResponse
       */
      Models::DescribeParameterTimedScheduleTaskResponse describeParameterTimedScheduleTaskWithOptions(const Models::DescribeParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a scheduled task for modifying instance parameters.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Set instance parameters for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html)
       * - [Set instance parameters for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request DescribeParameterTimedScheduleTaskRequest
       * @return DescribeParameterTimedScheduleTaskResponse
       */
      Models::DescribeParameterTimedScheduleTaskResponse describeParameterTimedScheduleTask(const Models::DescribeParameterTimedScheduleTaskRequest &request);

      /**
       * @summary Queries the current parameter settings of an instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current parameter settings of an instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Retrieves information about all extensions in a specified database of an instance.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DescribePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostgresExtensionsResponse
       */
      Models::DescribePostgresExtensionsResponse describePostgresExtensionsWithOptions(const Models::DescribePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all extensions in a specified database of an instance.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DescribePostgresExtensionsRequest
       * @return DescribePostgresExtensionsResponse
       */
      Models::DescribePostgresExtensionsResponse describePostgresExtensions(const Models::DescribePostgresExtensionsRequest &request);

      /**
       * @summary Queries the price information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param tmpReq DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries the quick purchase configurations for ApsaraDB RDS.
       *
       * @param request DescribeQuickSaleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuickSaleConfigResponse
       */
      Models::DescribeQuickSaleConfigResponse describeQuickSaleConfigWithOptions(const Models::DescribeQuickSaleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quick purchase configurations for ApsaraDB RDS.
       *
       * @param request DescribeQuickSaleConfigRequest
       * @return DescribeQuickSaleConfigResponse
       */
      Models::DescribeQuickSaleConfigResponse describeQuickSaleConfig(const Models::DescribeQuickSaleConfigRequest &request);

      /**
       * @summary 查询可用区的资源库存
       *
       * @param request DescribeRCAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCAvailableResourceResponse
       */
      Models::DescribeRCAvailableResourceResponse describeRCAvailableResourceWithOptions(const Models::DescribeRCAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用区的资源库存
       *
       * @param request DescribeRCAvailableResourceRequest
       * @return DescribeRCAvailableResourceResponse
       */
      Models::DescribeRCAvailableResourceResponse describeRCAvailableResource(const Models::DescribeRCAvailableResourceRequest &request);

      /**
       * @summary 查询云助手安装状态
       *
       * @param tmpReq DescribeRCCloudAssistantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCCloudAssistantStatusResponse
       */
      Models::DescribeRCCloudAssistantStatusResponse describeRCCloudAssistantStatusWithOptions(const Models::DescribeRCCloudAssistantStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云助手安装状态
       *
       * @param request DescribeRCCloudAssistantStatusRequest
       * @return DescribeRCCloudAssistantStatusResponse
       */
      Models::DescribeRCCloudAssistantStatusResponse describeRCCloudAssistantStatus(const Models::DescribeRCCloudAssistantStatusRequest &request);

      /**
       * @summary Queries the KubeConfig of an RDS Custom ACK cluster.
       *
       * @description KubeConfig is used to configure access credentials for an ACK cluster on the client. It contains identity and authentication data for accessing the target cluster. When you use kubectl for cluster management, you need to connect through KubeConfig. Properly manage the KubeConfig credentials of the cluster and revoke them promptly when they are no longer needed to avoid security risks such as data leaks caused by KubeConfig exposure.
       *
       * @param request DescribeRCClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClusterConfigResponse
       */
      Models::DescribeRCClusterConfigResponse describeRCClusterConfigWithOptions(const Models::DescribeRCClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the KubeConfig of an RDS Custom ACK cluster.
       *
       * @description KubeConfig is used to configure access credentials for an ACK cluster on the client. It contains identity and authentication data for accessing the target cluster. When you use kubectl for cluster management, you need to connect through KubeConfig. Properly manage the KubeConfig credentials of the cluster and revoke them promptly when they are no longer needed to avoid security risks such as data leaks caused by KubeConfig exposure.
       *
       * @param request DescribeRCClusterConfigRequest
       * @return DescribeRCClusterConfigResponse
       */
      Models::DescribeRCClusterConfigResponse describeRCClusterConfig(const Models::DescribeRCClusterConfigRequest &request);

      /**
       * @summary 查询RDS用户专属集群节点
       *
       * @param request DescribeRCClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClusterNodesResponse
       */
      Models::DescribeRCClusterNodesResponse describeRCClusterNodesWithOptions(const Models::DescribeRCClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS用户专属集群节点
       *
       * @param request DescribeRCClusterNodesRequest
       * @return DescribeRCClusterNodesResponse
       */
      Models::DescribeRCClusterNodesResponse describeRCClusterNodes(const Models::DescribeRCClusterNodesRequest &request);

      /**
       * @summary 查询RDS Custom集群列表
       *
       * @param request DescribeRCClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClustersResponse
       */
      Models::DescribeRCClustersResponse describeRCClustersWithOptions(const Models::DescribeRCClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS Custom集群列表
       *
       * @param request DescribeRCClustersRequest
       * @return DescribeRCClustersResponse
       */
      Models::DescribeRCClustersResponse describeRCClusters(const Models::DescribeRCClustersRequest &request);

      /**
       * @summary 描述RDS CUSTOM部署集
       *
       * @param request DescribeRCDeploymentSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCDeploymentSetsResponse
       */
      Models::DescribeRCDeploymentSetsResponse describeRCDeploymentSetsWithOptions(const Models::DescribeRCDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述RDS CUSTOM部署集
       *
       * @param request DescribeRCDeploymentSetsRequest
       * @return DescribeRCDeploymentSetsResponse
       */
      Models::DescribeRCDeploymentSetsResponse describeRCDeploymentSets(const Models::DescribeRCDeploymentSetsRequest &request);

      /**
       * @summary Queries the disk information of an RDS Custom instance by calling the DescribeRCDisks operation.
       *
       * @param request DescribeRCDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCDisksResponse
       */
      Models::DescribeRCDisksResponse describeRCDisksWithOptions(const Models::DescribeRCDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disk information of an RDS Custom instance by calling the DescribeRCDisks operation.
       *
       * @param request DescribeRCDisksRequest
       * @return DescribeRCDisksResponse
       */
      Models::DescribeRCDisksResponse describeRCDisks(const Models::DescribeRCDisksRequest &request);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request DescribeRCElasticScalingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCElasticScalingResponse
       */
      Models::DescribeRCElasticScalingResponse describeRCElasticScalingWithOptions(const Models::DescribeRCElasticScalingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request DescribeRCElasticScalingRequest
       * @return DescribeRCElasticScalingResponse
       */
      Models::DescribeRCElasticScalingResponse describeRCElasticScaling(const Models::DescribeRCElasticScalingRequest &request);

      /**
       * @summary Queries the list of custom images available for creating RDS Custom instances by calling the DescribeRCImageList operation. You can specify parameters such as RegionId.
       *
       * @param request DescribeRCImageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCImageListResponse
       */
      Models::DescribeRCImageListResponse describeRCImageListWithOptions(const Models::DescribeRCImageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of custom images available for creating RDS Custom instances by calling the DescribeRCImageList operation. You can specify parameters such as RegionId.
       *
       * @param request DescribeRCImageListRequest
       * @return DescribeRCImageListResponse
       */
      Models::DescribeRCImageListResponse describeRCImageList(const Models::DescribeRCImageListRequest &request);

      /**
       * @summary Queries the details of a single RDS Custom instance by calling the DescribeRCInstanceAttribute operation.
       *
       * @param request DescribeRCInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceAttributeResponse
       */
      Models::DescribeRCInstanceAttributeResponse describeRCInstanceAttributeWithOptions(const Models::DescribeRCInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single RDS Custom instance by calling the DescribeRCInstanceAttribute operation.
       *
       * @param request DescribeRCInstanceAttributeRequest
       * @return DescribeRCInstanceAttributeResponse
       */
      Models::DescribeRCInstanceAttributeResponse describeRCInstanceAttribute(const Models::DescribeRCInstanceAttributeRequest &request);

      /**
       * @summary Queries the number of DDoS attacks on an RDS Custom for SQL Server instance to monitor the security status of database instances in real time and assess potential security risks.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related feature documentation
       * [Introduction to RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * <props="china">
       * > A DDoS attack, short for Distributed Denial of Service attack, is a common Network Security attack method. This type of attack primarily consumes the resources of networks or network devices through malicious traffic, causing websites to malfunction or online services to become unavailable. For information about the causes of DDoS attacks, common Attack Type, and methods to identify and mitigate DDoS attacks, see [DDoS attacks](https://www.aliyun.com/getting-started/what-is/what-is-ddos).
       *
       * @param request DescribeRCInstanceDdosCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceDdosCountResponse
       */
      Models::DescribeRCInstanceDdosCountResponse describeRCInstanceDdosCountWithOptions(const Models::DescribeRCInstanceDdosCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of DDoS attacks on an RDS Custom for SQL Server instance to monitor the security status of database instances in real time and assess potential security risks.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related feature documentation
       * [Introduction to RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * <props="china">
       * > A DDoS attack, short for Distributed Denial of Service attack, is a common Network Security attack method. This type of attack primarily consumes the resources of networks or network devices through malicious traffic, causing websites to malfunction or online services to become unavailable. For information about the causes of DDoS attacks, common Attack Type, and methods to identify and mitigate DDoS attacks, see [DDoS attacks](https://www.aliyun.com/getting-started/what-is/what-is-ddos).
       *
       * @param request DescribeRCInstanceDdosCountRequest
       * @return DescribeRCInstanceDdosCountResponse
       */
      Models::DescribeRCInstanceDdosCountResponse describeRCInstanceDdosCount(const Models::DescribeRCInstanceDdosCountRequest &request);

      /**
       * @summary 查询指定实例系统事件信息
       *
       * @param request DescribeRCInstanceHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceHistoryEventsResponse
       */
      Models::DescribeRCInstanceHistoryEventsResponse describeRCInstanceHistoryEventsWithOptions(const Models::DescribeRCInstanceHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定实例系统事件信息
       *
       * @param request DescribeRCInstanceHistoryEventsRequest
       * @return DescribeRCInstanceHistoryEventsResponse
       */
      Models::DescribeRCInstanceHistoryEventsResponse describeRCInstanceHistoryEvents(const Models::DescribeRCInstanceHistoryEventsRequest &request);

      /**
       * @summary Queries the DDoS mitigation information of an RDS Custom for SQL Server instance and the details of the associated Anti-DDoS Origin instance.
       *
       * @description ### Applicable DPI engine
       * RDS SQL Server
       * ### Related feature documentation
       * [Introduction to RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * > When an [Anti-DDoS Origin](https://help.aliyun.com/document_detail/63643.html) instance contains one or more assets that are assigned public IP addresses, you can invoke this operation to query the DDoS mitigation information of RDS Custom for SQL Server instances under the current Alibaba Cloud account and the details of the associated Anti-DDoS Origin instance, such as the basic DDoS Mitigation Threshold, traffic scrubbing threshold, DDoS mitigation status of assets that are assigned public IP addresses, instance ID, and instance mitigation status.
       *
       * @param request DescribeRCInstanceIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceIpAddressResponse
       */
      Models::DescribeRCInstanceIpAddressResponse describeRCInstanceIpAddressWithOptions(const Models::DescribeRCInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DDoS mitigation information of an RDS Custom for SQL Server instance and the details of the associated Anti-DDoS Origin instance.
       *
       * @description ### Applicable DPI engine
       * RDS SQL Server
       * ### Related feature documentation
       * [Introduction to RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * > When an [Anti-DDoS Origin](https://help.aliyun.com/document_detail/63643.html) instance contains one or more assets that are assigned public IP addresses, you can invoke this operation to query the DDoS mitigation information of RDS Custom for SQL Server instances under the current Alibaba Cloud account and the details of the associated Anti-DDoS Origin instance, such as the basic DDoS Mitigation Threshold, traffic scrubbing threshold, DDoS mitigation status of assets that are assigned public IP addresses, instance ID, and instance mitigation status.
       *
       * @param request DescribeRCInstanceIpAddressRequest
       * @return DescribeRCInstanceIpAddressResponse
       */
      Models::DescribeRCInstanceIpAddressResponse describeRCInstanceIpAddress(const Models::DescribeRCInstanceIpAddressRequest &request);

      /**
       * @summary 查询rds_custom实例规格族列表
       *
       * @param request DescribeRCInstanceTypeFamiliesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceTypeFamiliesResponse
       */
      Models::DescribeRCInstanceTypeFamiliesResponse describeRCInstanceTypeFamiliesWithOptions(const Models::DescribeRCInstanceTypeFamiliesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询rds_custom实例规格族列表
       *
       * @param request DescribeRCInstanceTypeFamiliesRequest
       * @return DescribeRCInstanceTypeFamiliesResponse
       */
      Models::DescribeRCInstanceTypeFamiliesResponse describeRCInstanceTypeFamilies(const Models::DescribeRCInstanceTypeFamiliesRequest &request);

      /**
       * @summary 查询RDS Custom规格信息
       *
       * @param tmpReq DescribeRCInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceTypesResponse
       */
      Models::DescribeRCInstanceTypesResponse describeRCInstanceTypesWithOptions(const Models::DescribeRCInstanceTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS Custom规格信息
       *
       * @param request DescribeRCInstanceTypesRequest
       * @return DescribeRCInstanceTypesResponse
       */
      Models::DescribeRCInstanceTypesResponse describeRCInstanceTypes(const Models::DescribeRCInstanceTypesRequest &request);

      /**
       * @summary Queries the VNC logon URL of an RDS Custom instance.
       *
       * @description The VNC logon URL is time-sensitive and valid for 15 seconds. If you do not use the URL within 15 seconds after the call succeeds, the URL automatically expires. In this case, call the operation again to obtain a new URL.
       *
       * @param request DescribeRCInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceVncUrlResponse
       */
      Models::DescribeRCInstanceVncUrlResponse describeRCInstanceVncUrlWithOptions(const Models::DescribeRCInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the VNC logon URL of an RDS Custom instance.
       *
       * @description The VNC logon URL is time-sensitive and valid for 15 seconds. If you do not use the URL within 15 seconds after the call succeeds, the URL automatically expires. In this case, call the operation again to obtain a new URL.
       *
       * @param request DescribeRCInstanceVncUrlRequest
       * @return DescribeRCInstanceVncUrlResponse
       */
      Models::DescribeRCInstanceVncUrlResponse describeRCInstanceVncUrl(const Models::DescribeRCInstanceVncUrlRequest &request);

      /**
       * @summary Calls the DescribeRCInstances operation to query the list of specified RDS Custom instances. If no instance ID (InstanceId) is specified, the operation returns information about all RDS Custom instances in the specified region.
       *
       * @param request DescribeRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstancesResponse
       */
      Models::DescribeRCInstancesResponse describeRCInstancesWithOptions(const Models::DescribeRCInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeRCInstances operation to query the list of specified RDS Custom instances. If no instance ID (InstanceId) is specified, the operation returns information about all RDS Custom instances in the specified region.
       *
       * @param request DescribeRCInstancesRequest
       * @return DescribeRCInstancesResponse
       */
      Models::DescribeRCInstancesResponse describeRCInstances(const Models::DescribeRCInstancesRequest &request);

      /**
       * @summary 查询云助手命令执行结果
       *
       * @param tmpReq DescribeRCInvocationResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInvocationResultsResponse
       */
      Models::DescribeRCInvocationResultsResponse describeRCInvocationResultsWithOptions(const Models::DescribeRCInvocationResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云助手命令执行结果
       *
       * @param request DescribeRCInvocationResultsRequest
       * @return DescribeRCInvocationResultsResponse
       */
      Models::DescribeRCInvocationResultsResponse describeRCInvocationResults(const Models::DescribeRCInvocationResultsRequest &request);

      /**
       * @summary Queries the monitoring data of a specified monitoring metrics for a target RDS Custom instance.
       *
       * @param request DescribeRCMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCMetricListResponse
       */
      Models::DescribeRCMetricListResponse describeRCMetricListWithOptions(const Models::DescribeRCMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of a specified monitoring metrics for a target RDS Custom instance.
       *
       * @param request DescribeRCMetricListRequest
       * @return DescribeRCMetricListResponse
       */
      Models::DescribeRCMetricListResponse describeRCMetricList(const Models::DescribeRCMetricListRequest &request);

      /**
       * @summary DescribeRCNetworkInterfaces
       *
       * @param request DescribeRCNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCNetworkInterfacesResponse
       */
      Models::DescribeRCNetworkInterfacesResponse describeRCNetworkInterfacesWithOptions(const Models::DescribeRCNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeRCNetworkInterfaces
       *
       * @param request DescribeRCNetworkInterfacesRequest
       * @return DescribeRCNetworkInterfacesResponse
       */
      Models::DescribeRCNetworkInterfacesResponse describeRCNetworkInterfaces(const Models::DescribeRCNetworkInterfacesRequest &request);

      /**
       * @summary Queries the configuration of an RDS Custom edge node pool.
       *
       * @param request DescribeRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCNodePoolResponse
       */
      Models::DescribeRCNodePoolResponse describeRCNodePoolWithOptions(const Models::DescribeRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an RDS Custom edge node pool.
       *
       * @param request DescribeRCNodePoolRequest
       * @return DescribeRCNodePoolResponse
       */
      Models::DescribeRCNodePoolResponse describeRCNodePool(const Models::DescribeRCNodePoolRequest &request);

      /**
       * @summary 变更实例规格或系统盘类型之前，查询某一可用区下实例规格或系统盘的库存情况
       *
       * @param tmpReq DescribeRCResourcesModificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCResourcesModificationResponse
       */
      Models::DescribeRCResourcesModificationResponse describeRCResourcesModificationWithOptions(const Models::DescribeRCResourcesModificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更实例规格或系统盘类型之前，查询某一可用区下实例规格或系统盘的库存情况
       *
       * @param request DescribeRCResourcesModificationRequest
       * @return DescribeRCResourcesModificationResponse
       */
      Models::DescribeRCResourcesModificationResponse describeRCResourcesModification(const Models::DescribeRCResourcesModificationRequest &request);

      /**
       * @summary 查询RC安全组
       *
       * @param request DescribeRCSecurityGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSecurityGroupListResponse
       */
      Models::DescribeRCSecurityGroupListResponse describeRCSecurityGroupListWithOptions(const Models::DescribeRCSecurityGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RC安全组
       *
       * @param request DescribeRCSecurityGroupListRequest
       * @return DescribeRCSecurityGroupListResponse
       */
      Models::DescribeRCSecurityGroupListResponse describeRCSecurityGroupList(const Models::DescribeRCSecurityGroupListRequest &request);

      /**
       * @summary 描述RC安全组规则
       *
       * @param request DescribeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSecurityGroupPermissionResponse
       */
      Models::DescribeRCSecurityGroupPermissionResponse describeRCSecurityGroupPermissionWithOptions(const Models::DescribeRCSecurityGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述RC安全组规则
       *
       * @param request DescribeRCSecurityGroupPermissionRequest
       * @return DescribeRCSecurityGroupPermissionResponse
       */
      Models::DescribeRCSecurityGroupPermissionResponse describeRCSecurityGroupPermission(const Models::DescribeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary Queries information about snapshots, such as snapshot status, remaining time for a snapshot that is being created, and the retention period of automatic snapshots.
       *
       * @param request DescribeRCSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSnapshotsResponse
       */
      Models::DescribeRCSnapshotsResponse describeRCSnapshotsWithOptions(const Models::DescribeRCSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about snapshots, such as snapshot status, remaining time for a snapshot that is being created, and the retention period of automatic snapshots.
       *
       * @param request DescribeRCSnapshotsRequest
       * @return DescribeRCSnapshotsResponse
       */
      Models::DescribeRCSnapshotsResponse describeRCSnapshots(const Models::DescribeRCSnapshotsRequest &request);

      /**
       * @summary 描述vCluster
       *
       * @param request DescribeRCVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCVClusterResponse
       */
      Models::DescribeRCVClusterResponse describeRCVClusterWithOptions(const Models::DescribeRCVClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述vCluster
       *
       * @param request DescribeRCVClusterRequest
       * @return DescribeRCVClusterResponse
       */
      Models::DescribeRCVClusterResponse describeRCVCluster(const Models::DescribeRCVClusterRequest &request);

      /**
       * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
       *
       * @summary Retrieves the notification settings of instance resources. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it.
       *
       * @param request DescribeRdsResourceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsResourceSettingsResponse
       */
      Models::DescribeRdsResourceSettingsResponse describeRdsResourceSettingsWithOptions(const Models::DescribeRdsResourceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
       *
       * @summary Retrieves the notification settings of instance resources. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it.
       *
       * @param request DescribeRdsResourceSettingsRequest
       * @return DescribeRdsResourceSettingsResponse
       */
      Models::DescribeRdsResourceSettingsResponse describeRdsResourceSettings(const Models::DescribeRdsResourceSettingsRequest &request);

      /**
       * @summary Queries the latency information of an ApsaraDB RDS read-only instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       *
       * @param request DescribeReadDBInstanceDelayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReadDBInstanceDelayResponse
       */
      Models::DescribeReadDBInstanceDelayResponse describeReadDBInstanceDelayWithOptions(const Models::DescribeReadDBInstanceDelayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latency information of an ApsaraDB RDS read-only instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       *
       * @param request DescribeReadDBInstanceDelayRequest
       * @return DescribeReadDBInstanceDelayResponse
       */
      Models::DescribeReadDBInstanceDelayResponse describeReadDBInstanceDelay(const Models::DescribeReadDBInstanceDelayRequest &request);

      /**
       * @summary Retrieves the list of available regions.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeRegionInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionInfosResponse
       */
      Models::DescribeRegionInfosResponse describeRegionInfosWithOptions(const Models::DescribeRegionInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of available regions.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeRegionInfosRequest
       * @return DescribeRegionInfosResponse
       */
      Models::DescribeRegionInfosResponse describeRegionInfos(const Models::DescribeRegionInfosRequest &request);

      /**
       * @summary Queries the details of all ApsaraDB RDS regions and zones, including decommissioned regions. Use with caution.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all ApsaraDB RDS regions and zones, including decommissioned regions. Use with caution.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the renewal fees for a subscription ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal fees for a subscription ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeRenewalPriceRequest
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPrice(const Models::DescribeRenewalPriceRequest &request);

      /**
       * @summary Queries the operation logs of a data synchronization link for a specified ApsaraDB RDS instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request DescribeReplicationLinkLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReplicationLinkLogsResponse
       */
      Models::DescribeReplicationLinkLogsResponse describeReplicationLinkLogsWithOptions(const Models::DescribeReplicationLinkLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of a data synchronization link for a specified ApsaraDB RDS instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request DescribeReplicationLinkLogsRequest
       * @return DescribeReplicationLinkLogsResponse
       */
      Models::DescribeReplicationLinkLogsResponse describeReplicationLinkLogs(const Models::DescribeReplicationLinkLogsRequest &request);

      /**
       * @summary Resource details on the overview page.
       *
       * @param request DescribeResourceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceDetailsResponse
       */
      Models::DescribeResourceDetailsResponse describeResourceDetailsWithOptions(const Models::DescribeResourceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resource details on the overview page.
       *
       * @param request DescribeResourceDetailsRequest
       * @return DescribeResourceDetailsResponse
       */
      Models::DescribeResourceDetailsResponse describeResourceDetails(const Models::DescribeResourceDetailsRequest &request);

      /**
       * @summary Queries the storage usage of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageResponse
       */
      Models::DescribeResourceUsageResponse describeResourceUsageWithOptions(const Models::DescribeResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage usage of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeResourceUsageRequest
       * @return DescribeResourceUsageResponse
       */
      Models::DescribeResourceUsageResponse describeResourceUsage(const Models::DescribeResourceUsageRequest &request);

      /**
       * @summary End of maintenance: This operation can be called as expected but is no longer maintained. Queries whether the SQL Explorer (SQL Audit) feature is enabled for an ApsaraDB RDS instance.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it. Use the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation instead.
       *
       * @param request DescribeSQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLCollectorPolicyResponse
       */
      Models::DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicyWithOptions(const Models::DescribeSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary End of maintenance: This operation can be called as expected but is no longer maintained. Queries whether the SQL Explorer (SQL Audit) feature is enabled for an ApsaraDB RDS instance.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it. Use the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation instead.
       *
       * @param request DescribeSQLCollectorPolicyRequest
       * @return DescribeSQLCollectorPolicyResponse
       */
      Models::DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicy(const Models::DescribeSQLCollectorPolicyRequest &request);

      /**
       * @summary End of maintenance: This operation can be invoked as Normal but is no longer maintained. Queries the log retention period of SQL Explorer logs for an ApsaraDB RDS instance.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it. Use the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation instead.
       *
       * @param request DescribeSQLCollectorRetentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLCollectorRetentionResponse
       */
      Models::DescribeSQLCollectorRetentionResponse describeSQLCollectorRetentionWithOptions(const Models::DescribeSQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary End of maintenance: This operation can be invoked as Normal but is no longer maintained. Queries the log retention period of SQL Explorer logs for an ApsaraDB RDS instance.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it. Use the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation instead.
       *
       * @param request DescribeSQLCollectorRetentionRequest
       * @return DescribeSQLCollectorRetentionResponse
       */
      Models::DescribeSQLCollectorRetentionResponse describeSQLCollectorRetention(const Models::DescribeSQLCollectorRetentionRequest &request);

      /**
       * @summary Queries the list of exported SQL Explorer (SQL Audit) files. This operation does not support querying SQL Explorer log files that are manually exported from the console. This operation supports querying only the list of SQL Explorer files that are generated by calling the DescribeSQLLogRecords operation with the Form request parameter set to File.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *   > Only SQL Server 2008 R2 is supported.
       * ### Precautions
       * - This operation does not support querying the SQL Explorer list for the trial edition of SQL Explorer on ApsaraDB RDS for MySQL instances.
       * - This operation does not support querying SQL Explorer log files that are manually exported from the console. This operation supports querying only the list of SQL Explorer files that are generated by calling the [DescribeSQLLogRecords](https://help.aliyun.com/document_detail/610533.html) operation with the **Form** request parameter set to **File**.
       * - The exported files are retained for only 2 days.
       *   > If DAS Enterprise Edition V2 or Enterprise Edition V3 is enabled and you use the SQL Explorer and Audit feature provided by DAS Enterprise Edition, the exported files are retained for 7 days. You can call [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) to query the enabled DAS Enterprise Edition information.
       *
       * @param request DescribeSQLLogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogFilesResponse
       */
      Models::DescribeSQLLogFilesResponse describeSQLLogFilesWithOptions(const Models::DescribeSQLLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of exported SQL Explorer (SQL Audit) files. This operation does not support querying SQL Explorer log files that are manually exported from the console. This operation supports querying only the list of SQL Explorer files that are generated by calling the DescribeSQLLogRecords operation with the Form request parameter set to File.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *   > Only SQL Server 2008 R2 is supported.
       * ### Precautions
       * - This operation does not support querying the SQL Explorer list for the trial edition of SQL Explorer on ApsaraDB RDS for MySQL instances.
       * - This operation does not support querying SQL Explorer log files that are manually exported from the console. This operation supports querying only the list of SQL Explorer files that are generated by calling the [DescribeSQLLogRecords](https://help.aliyun.com/document_detail/610533.html) operation with the **Form** request parameter set to **File**.
       * - The exported files are retained for only 2 days.
       *   > If DAS Enterprise Edition V2 or Enterprise Edition V3 is enabled and you use the SQL Explorer and Audit feature provided by DAS Enterprise Edition, the exported files are retained for 7 days. You can call [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) to query the enabled DAS Enterprise Edition information.
       *
       * @param request DescribeSQLLogFilesRequest
       * @return DescribeSQLLogFilesResponse
       */
      Models::DescribeSQLLogFilesResponse describeSQLLogFiles(const Models::DescribeSQLLogFilesRequest &request);

      /**
       * @summary Discontinued: This operation can still be called but is no longer maintained. Queries the SQL Explorer (SQL Audit) logs of an ApsaraDB RDS instance.
       *
       * @description This operation has been discontinued: The operation can still be invoked normally, but Alibaba Cloud no longer maintains it. Use the [GetDasSQLLogHotData](https://help.aliyun.com/document_detail/2360999.html) operation instead.
       * ### Precautions
       * - Regardless of whether this operation is invoked successfully or failed, a single user (including the Alibaba Cloud account and Resource Access Management (RAM) users) can invoke this operation up to 1,000 times per minute.
       * - This operation does not support querying SQL Explorer logs for the trial edition of SQL Explorer for MySQL instances.
       * - When this operation generates an audit file (the **Form** request parameter is set to **File**), a maximum of 1,000,000 log entries are recorded, and keyword-based log filtering is not supported.
       *
       * @param request DescribeSQLLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogRecordsResponse
       */
      Models::DescribeSQLLogRecordsResponse describeSQLLogRecordsWithOptions(const Models::DescribeSQLLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Discontinued: This operation can still be called but is no longer maintained. Queries the SQL Explorer (SQL Audit) logs of an ApsaraDB RDS instance.
       *
       * @description This operation has been discontinued: The operation can still be invoked normally, but Alibaba Cloud no longer maintains it. Use the [GetDasSQLLogHotData](https://help.aliyun.com/document_detail/2360999.html) operation instead.
       * ### Precautions
       * - Regardless of whether this operation is invoked successfully or failed, a single user (including the Alibaba Cloud account and Resource Access Management (RAM) users) can invoke this operation up to 1,000 times per minute.
       * - This operation does not support querying SQL Explorer logs for the trial edition of SQL Explorer for MySQL instances.
       * - When this operation generates an audit file (the **Form** request parameter is set to **File**), a maximum of 1,000,000 log entries are recorded, and keyword-based log filtering is not supported.
       *
       * @param request DescribeSQLLogRecordsRequest
       * @return DescribeSQLLogRecordsResponse
       */
      Models::DescribeSQLLogRecordsResponse describeSQLLogRecords(const Models::DescribeSQLLogRecordsRequest &request);

      /**
       * @summary Queries the list of SQL log running reports.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeSQLLogReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogReportListResponse
       */
      Models::DescribeSQLLogReportListResponse describeSQLLogReportListWithOptions(const Models::DescribeSQLLogReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of SQL log running reports.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request DescribeSQLLogReportListRequest
       * @return DescribeSQLLogReportListResponse
       */
      Models::DescribeSQLLogReportListResponse describeSQLLogReportList(const Models::DescribeSQLLogReportListRequest &request);

      /**
       * @summary Describes the versions to which a SQL Server instance or a specified SQL Server version can be upgraded.
       *
       * @description Applicable engine:
       * * SQL Server (only versions 2016 and earlier are supported)
       *
       * @param request DescribeSQLServerUpgradeVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLServerUpgradeVersionsResponse
       */
      Models::DescribeSQLServerUpgradeVersionsResponse describeSQLServerUpgradeVersionsWithOptions(const Models::DescribeSQLServerUpgradeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the versions to which a SQL Server instance or a specified SQL Server version can be upgraded.
       *
       * @description Applicable engine:
       * * SQL Server (only versions 2016 and earlier are supported)
       *
       * @param request DescribeSQLServerUpgradeVersionsRequest
       * @return DescribeSQLServerUpgradeVersionsResponse
       */
      Models::DescribeSQLServerUpgradeVersionsResponse describeSQLServerUpgradeVersions(const Models::DescribeSQLServerUpgradeVersionsRequest &request);

      /**
       * @summary Queries Data API user credentials.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       *
       * @param request DescribeSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecretsResponse
       */
      Models::DescribeSecretsResponse describeSecretsWithOptions(const Models::DescribeSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Data API user credentials.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       *
       * @param request DescribeSecretsRequest
       * @return DescribeSecretsResponse
       */
      Models::DescribeSecretsResponse describeSecrets(const Models::DescribeSecretsRequest &request);

      /**
       * @summary Queries the association between a specified ApsaraDB RDS instance and ECS security groups.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * - [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * - [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(const Models::DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the association between a specified ApsaraDB RDS instance and ECS security groups.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * - [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * - [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(const Models::DescribeSecurityGroupConfigurationRequest &request);

      /**
       * @summary Queries all replication slots of an instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request DescribeSlotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlotsResponse
       */
      Models::DescribeSlotsResponse describeSlotsWithOptions(const Models::DescribeSlotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all replication slots of an instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request DescribeSlotsRequest
       * @return DescribeSlotsResponse
       */
      Models::DescribeSlotsResponse describeSlots(const Models::DescribeSlotsRequest &request);

      /**
       * @summary Queries the slow query log details of an instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Precautions
       * - The response parameters of this operation are updated every minute.
       * - A certain delay may occur when you call this operation to retrieve data. Wait for the response to be returned.
       * - Starting from September 1, 2024, due to the optimization of the SQL template algorithm, the value of the SQLHash field will change when you call this operation. For more information, see [Notice: Optimization of the SQL template algorithm for slow SQL statements](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the slow query log details of an instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Precautions
       * - The response parameters of this operation are updated every minute.
       * - A certain delay may occur when you call this operation to retrieve data. Wait for the response to be returned.
       * - Starting from September 1, 2024, due to the optimization of the SQL template algorithm, the value of the SQLHash field will change when you call this operation. For more information, see [Notice: Optimization of the SQL template algorithm for slow SQL statements](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries slow query log statistics.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       *   > MySQL 5.7 Basic Edition is not supported.
       * - ApsaraDB RDS for SQL Server
       *   > Only SQL Server 2008 R2 is supported.
       * - ApsaraDB RDS for MariaDB
       * ### Before you begin
       * - Slow query log statistics are not collected in real time. A latency of 6 to 8 hours may occur.
       * - If the response is empty, check whether the values of StartTime and EndTime are in the required UTC format. If the values are valid, no slow query logs exist within the specified time range.
       * - Starting from September 1, 2024, the value of the **SQLHash** field will change when you call this operation due to the optimization of the SQL template algorithm. For more information, see [Notice: SQL template algorithm optimization](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogsWithOptions(const Models::DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries slow query log statistics.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       *   > MySQL 5.7 Basic Edition is not supported.
       * - ApsaraDB RDS for SQL Server
       *   > Only SQL Server 2008 R2 is supported.
       * - ApsaraDB RDS for MariaDB
       * ### Before you begin
       * - Slow query log statistics are not collected in real time. A latency of 6 to 8 hours may occur.
       * - If the response is empty, check whether the values of StartTime and EndTime are in the required UTC format. If the values are valid, no slow query logs exist within the specified time range.
       * - Starting from September 1, 2024, the value of the **SQLHash** field will change when you call this operation due to the optimization of the SQL template algorithm. For more information, see [Notice: SQL template algorithm optimization](https://help.aliyun.com/document_detail/2845725.html).
       *
       * @param request DescribeSlowLogsRequest
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogs(const Models::DescribeSlowLogsRequest &request);

      /**
       * @summary Queries whether an ApsaraDB RDS for SQL Server instance supports online storage expansion.
       *
       * @description ### Applicable engine
       * RDS SQL Server.
       *
       * @param request DescribeSupportOnlineResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportOnlineResizeDiskResponse
       */
      Models::DescribeSupportOnlineResizeDiskResponse describeSupportOnlineResizeDiskWithOptions(const Models::DescribeSupportOnlineResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an ApsaraDB RDS for SQL Server instance supports online storage expansion.
       *
       * @description ### Applicable engine
       * RDS SQL Server.
       *
       * @param request DescribeSupportOnlineResizeDiskRequest
       * @return DescribeSupportOnlineResizeDiskResponse
       */
      Models::DescribeSupportOnlineResizeDiskResponse describeSupportOnlineResizeDisk(const Models::DescribeSupportOnlineResizeDiskRequest &request);

      /**
       * @summary Queries the tag information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * If you specify an instance ID, all tags of the instance are returned and other filter conditions are ignored.
       * * If you specify only a tag key (TagKey) without a tag value (TagValue), all results that match the tag key are returned. If you specify both a tag key and a tag value, only results that match both conditions are returned.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag information of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * If you specify an instance ID, all tags of the instance are returned and other filter conditions are ignored.
       * * If you specify only a tag key (TagKey) without a tag value (TagValue), all results that match the tag key are returned. If you specify both a tag key and a tag value, only results that match both conditions are returned.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the tasks that are in the pending or running state for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server
       * > For ApsaraDB RDS for MySQL and ApsaraDB RDS for PostgreSQL instances, use [DescribeHistoryTasks](https://help.aliyun.com/document_detail/2627863.html) to query tasks.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tasks that are in the pending or running state for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server
       * > For ApsaraDB RDS for MySQL and ApsaraDB RDS for PostgreSQL instances, use [DescribeHistoryTasks](https://help.aliyun.com/document_detail/2627863.html) to query tasks.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the pre-upgrade check report for a major engine version upgrade of an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable DPI engines
       * ApsaraDB RDS for MySQL
       * ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Major engine version upgrade check report for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/2794383.html)
       * - [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL database](https://help.aliyun.com/document_detail/203309.html)
       * - [Understand the major engine version upgrade check report for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/218391.html)
       *
       * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
       */
      Models::DescribeUpgradeMajorVersionPrecheckTaskResponse describeUpgradeMajorVersionPrecheckTaskWithOptions(const Models::DescribeUpgradeMajorVersionPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pre-upgrade check report for a major engine version upgrade of an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable DPI engines
       * ApsaraDB RDS for MySQL
       * ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Major engine version upgrade check report for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/2794383.html)
       * - [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL database](https://help.aliyun.com/document_detail/203309.html)
       * - [Understand the major engine version upgrade check report for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/218391.html)
       *
       * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
       * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
       */
      Models::DescribeUpgradeMajorVersionPrecheckTaskResponse describeUpgradeMajorVersionPrecheckTask(const Models::DescribeUpgradeMajorVersionPrecheckTaskRequest &request);

      /**
       * @summary Queries the historical tasks of major engine version upgrades for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for PostgreSQL.
       *
       * @param request DescribeUpgradeMajorVersionTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeMajorVersionTasksResponse
       */
      Models::DescribeUpgradeMajorVersionTasksResponse describeUpgradeMajorVersionTasksWithOptions(const Models::DescribeUpgradeMajorVersionTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical tasks of major engine version upgrades for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for PostgreSQL.
       *
       * @param request DescribeUpgradeMajorVersionTasksRequest
       * @return DescribeUpgradeMajorVersionTasksResponse
       */
      Models::DescribeUpgradeMajorVersionTasksResponse describeUpgradeMajorVersionTasks(const Models::DescribeUpgradeMajorVersionTasksRequest &request);

      /**
       * @summary 查询交换机列表
       *
       * @param request DescribeVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchListResponse
       */
      Models::DescribeVSwitchListResponse describeVSwitchListWithOptions(const Models::DescribeVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询交换机列表
       *
       * @param request DescribeVSwitchListRequest
       * @return DescribeVSwitchListResponse
       */
      Models::DescribeVSwitchListResponse describeVSwitchList(const Models::DescribeVSwitchListRequest &request);

      /**
       * @summary Queries the details of vSwitches in a virtual private cloud (VPC).
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of vSwitches in a virtual private cloud (VPC).
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries the list of virtual private clouds (VPCs) under your Alibaba Cloud account.
       *
       * @param request DescribeVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcsWithOptions(const Models::DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of virtual private clouds (VPCs) under your Alibaba Cloud account.
       *
       * @param request DescribeVpcsRequest
       * @return DescribeVpcsResponse
       */
      Models::DescribeVpcsResponse describeVpcs(const Models::DescribeVpcsRequest &request);

      /**
       * @summary Retrieves information about a specified whitelist template.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       *
       * @param request DescribeWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistTemplateResponse
       */
      Models::DescribeWhitelistTemplateResponse describeWhitelistTemplateWithOptions(const Models::DescribeWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified whitelist template.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       *
       * @param request DescribeWhitelistTemplateRequest
       * @return DescribeWhitelistTemplateResponse
       */
      Models::DescribeWhitelistTemplateResponse describeWhitelistTemplate(const Models::DescribeWhitelistTemplateRequest &request);

      /**
       * @summary Queries instances associated with a whitelist template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeWhitelistTemplateLinkedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistTemplateLinkedInstanceResponse
       */
      Models::DescribeWhitelistTemplateLinkedInstanceResponse describeWhitelistTemplateLinkedInstanceWithOptions(const Models::DescribeWhitelistTemplateLinkedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances associated with a whitelist template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DescribeWhitelistTemplateLinkedInstanceRequest
       * @return DescribeWhitelistTemplateLinkedInstanceResponse
       */
      Models::DescribeWhitelistTemplateLinkedInstanceResponse describeWhitelistTemplateLinkedInstance(const Models::DescribeWhitelistTemplateLinkedInstanceRequest &request);

      /**
       * @summary Destroys an ApsaraDB RDS instance in the recycle bin.
       *
       * @param request DestroyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyDBInstanceResponse
       */
      Models::DestroyDBInstanceResponse destroyDBInstanceWithOptions(const Models::DestroyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Destroys an ApsaraDB RDS instance in the recycle bin.
       *
       * @param request DestroyDBInstanceRequest
       * @return DestroyDBInstanceResponse
       */
      Models::DestroyDBInstanceResponse destroyDBInstance(const Models::DestroyDBInstanceRequest &request);

      /**
       * @summary Removes a unit node from an ApsaraDB RDS global active database cluster.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for MySQL
       * ### Precautions
       * Only unit nodes can be removed.
       *
       * @param request DetachGadInstanceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGadInstanceMemberResponse
       */
      Models::DetachGadInstanceMemberResponse detachGadInstanceMemberWithOptions(const Models::DetachGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a unit node from an ApsaraDB RDS global active database cluster.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for MySQL
       * ### Precautions
       * Only unit nodes can be removed.
       *
       * @param request DetachGadInstanceMemberRequest
       * @return DetachGadInstanceMemberResponse
       */
      Models::DetachGadInstanceMemberResponse detachGadInstanceMember(const Models::DetachGadInstanceMemberRequest &request);

      /**
       * @summary Detaches a pay-as-you-go data cloud disk or a system cloud disk from an RDS Custom instance.
       *
       * @param request DetachRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachRCDiskResponse
       */
      Models::DetachRCDiskResponse detachRCDiskWithOptions(const Models::DetachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a pay-as-you-go data cloud disk or a system cloud disk from an RDS Custom instance.
       *
       * @param request DetachRCDiskRequest
       * @return DetachRCDiskResponse
       */
      Models::DetachRCDiskResponse detachRCDisk(const Models::DetachRCDiskRequest &request);

      /**
       * @summary Disassociates a whitelist template from an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstanceWithOptions(const Models::DetachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a whitelist template from an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstance(const Models::DetachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary Enables backup encryption for an instance.
       *
       * @param request EnableBackupEncryptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBackupEncryptionResponse
       */
      Models::EnableBackupEncryptionResponse enableBackupEncryptionWithOptions(const Models::EnableBackupEncryptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables backup encryption for an instance.
       *
       * @param request EnableBackupEncryptionRequest
       * @return EnableBackupEncryptionResponse
       */
      Models::EnableBackupEncryptionResponse enableBackupEncryption(const Models::EnableBackupEncryptionRequest &request);

      /**
       * @summary Evaluates the available disk space that can be unlocked by performing an emergency local disk expansion.
       *
       * @param request EvaluateLocalExtendDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateLocalExtendDiskResponse
       */
      Models::EvaluateLocalExtendDiskResponse evaluateLocalExtendDiskWithOptions(const Models::EvaluateLocalExtendDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluates the available disk space that can be unlocked by performing an emergency local disk expansion.
       *
       * @param request EvaluateLocalExtendDiskRequest
       * @return EvaluateLocalExtendDiskResponse
       */
      Models::EvaluateLocalExtendDiskResponse evaluateLocalExtendDisk(const Models::EvaluateLocalExtendDiskRequest &request);

      /**
       * @summary Queries the topology of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engine
       * RDS MySQL.
       *
       * @param request GetDBInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBInstanceTopologyResponse
       */
      Models::GetDBInstanceTopologyResponse getDBInstanceTopologyWithOptions(const Models::GetDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topology of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engine
       * RDS MySQL.
       *
       * @param request GetDBInstanceTopologyRequest
       * @return GetDBInstanceTopologyResponse
       */
      Models::GetDBInstanceTopologyResponse getDBInstanceTopology(const Models::GetDBInstanceTopologyRequest &request);

      /**
       * @summary Queries the Secure Sockets Layer (SSL) encryption information of database proxy endpoints for an ApsaraDB RDS for MySQL database instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL.
       *
       * @param request GetDbProxyInstanceSslRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDbProxyInstanceSslResponse
       */
      Models::GetDbProxyInstanceSslResponse getDbProxyInstanceSslWithOptions(const Models::GetDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Secure Sockets Layer (SSL) encryption information of database proxy endpoints for an ApsaraDB RDS for MySQL database instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL.
       *
       * @param request GetDbProxyInstanceSslRequest
       * @return GetDbProxyInstanceSslResponse
       */
      Models::GetDbProxyInstanceSslResponse getDbProxyInstanceSsl(const Models::GetDbProxyInstanceSslRequest &request);

      /**
       * @summary Grants access permissions on one or more databases to a specified database account.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify account permissions for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96101.html)
       * - [Modify account permissions for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95692.html)
       * - [Modify account permissions for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/97134.html)
       * - [Permission details for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/257684.html)
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants access permissions on one or more databases to a specified database account.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify account permissions for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96101.html)
       * - [Modify account permissions for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95692.html)
       * - [Modify account permissions for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/97134.html)
       * - [Permission details for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/257684.html)
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary Grants permissions to a service account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Grant permissions to a service account for MySQL](https://help.aliyun.com/document_detail/96102.html)
       * - [Grant permissions to a service account for SQL Server](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request GrantOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermissionWithOptions(const Models::GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to a service account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Grant permissions to a service account for MySQL](https://help.aliyun.com/document_detail/96102.html)
       * - [Grant permissions to a service account for SQL Server](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request GrantOperatorPermissionRequest
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermission(const Models::GrantOperatorPermissionRequest &request);

      /**
       * @summary Imports backup data from a self-managed MySQL 5.7 database into ApsaraDB RDS by using the data import feature.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for MySQL
       * ### Description
       * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud.
       * ### Before you begin
       * **To call this operation, the following conditions must be met:**
       * * You have backed up a self-managed MySQL 5.7 or 8.0 database by using XtraBackup, and the backup file name ends with `_qp.xb`. For more information, see [Full migration of self-managed MySQL 5.7 or 8.0 databases to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * * You have uploaded the backup file of the self-managed MySQL 5.7 or 8.0 database to an OSS bucket in the corresponding region. For more information, see [Full migration of self-managed MySQL 5.7 or 8.0 databases to the cloud](https://help.aliyun.com/document_detail/251779.html).
       *
       * @param request ImportUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportUserBackupFileResponse
       */
      Models::ImportUserBackupFileResponse importUserBackupFileWithOptions(const Models::ImportUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports backup data from a self-managed MySQL 5.7 database into ApsaraDB RDS by using the data import feature.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for MySQL
       * ### Description
       * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud.
       * ### Before you begin
       * **To call this operation, the following conditions must be met:**
       * * You have backed up a self-managed MySQL 5.7 or 8.0 database by using XtraBackup, and the backup file name ends with `_qp.xb`. For more information, see [Full migration of self-managed MySQL 5.7 or 8.0 databases to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * * You have uploaded the backup file of the self-managed MySQL 5.7 or 8.0 database to an OSS bucket in the corresponding region. For more information, see [Full migration of self-managed MySQL 5.7 or 8.0 databases to the cloud](https://help.aliyun.com/document_detail/251779.html).
       *
       * @param request ImportUserBackupFileRequest
       * @return ImportUserBackupFileResponse
       */
      Models::ImportUserBackupFileResponse importUserBackupFile(const Models::ImportUserBackupFileRequest &request);

      /**
       * @summary 为实例安装云助手Agent
       *
       * @param tmpReq InstallRCCloudAssistantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallRCCloudAssistantResponse
       */
      Models::InstallRCCloudAssistantResponse installRCCloudAssistantWithOptions(const Models::InstallRCCloudAssistantRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为实例安装云助手Agent
       *
       * @param request InstallRCCloudAssistantRequest
       * @return InstallRCCloudAssistantResponse
       */
      Models::InstallRCCloudAssistantResponse installRCCloudAssistant(const Models::InstallRCCloudAssistantRequest &request);

      /**
       * @summary Queries the details of all instance types for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request ListClassesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClassesResponse
       */
      Models::ListClassesResponse listClassesWithOptions(const Models::ListClassesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all instance types for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       *
       * @param request ListClassesRequest
       * @return ListClassesResponse
       */
      Models::ListClassesResponse listClasses(const Models::ListClassesRequest &request);

      /**
       * @summary Queries a list of native replication data import tasks.
       *
       * @description Queries a list of data import tasks for native replication instances.
       *
       * @param request ListImportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImportTasksResponse
       */
      Models::ListImportTasksResponse listImportTasksWithOptions(const Models::ListImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of native replication data import tasks.
       *
       * @description Queries a list of data import tasks for native replication instances.
       *
       * @param request ListImportTasksRequest
       * @return ListImportTasksResponse
       */
      Models::ListImportTasksResponse listImportTasks(const Models::ListImportTasksRequest &request);

      /**
       * @summary RCVCluster列表接口
       *
       * @param request ListRCVClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRCVClustersResponse
       */
      Models::ListRCVClustersResponse listRCVClustersWithOptions(const Models::ListRCVClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RCVCluster列表接口
       *
       * @param request ListRCVClustersRequest
       * @return ListRCVClustersResponse
       */
      Models::ListRCVClustersResponse listRCVClusters(const Models::ListRCVClustersRequest &request);

      /**
       * @summary Queries the tags that are bound to one or more ApsaraDB RDS instances.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to one or more ApsaraDB RDS instances.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the details of all user backups that have been imported to ApsaraDB RDS.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for MySQL
       * ### Description
       * * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud. For more information, see [Migrate the full data of a self-managed MySQL 5.7 database to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * * When you call the [CreateDBInstance](https://help.aliyun.com/document_detail/26228.html) operation to create an ApsaraDB RDS for MySQL instance from a backup, you can call this operation to query the user backup ID.
       * * You can call the [ImportUserBackupFile](https://help.aliyun.com/document_detail/260266.html) operation to import a user backup to ApsaraDB RDS.
       *
       * @param request ListUserBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserBackupFilesResponse
       */
      Models::ListUserBackupFilesResponse listUserBackupFilesWithOptions(const Models::ListUserBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all user backups that have been imported to ApsaraDB RDS.
       *
       * @description ### Applicable engine
       * - ApsaraDB RDS for MySQL
       * ### Description
       * * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud. For more information, see [Migrate the full data of a self-managed MySQL 5.7 database to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * * When you call the [CreateDBInstance](https://help.aliyun.com/document_detail/26228.html) operation to create an ApsaraDB RDS for MySQL instance from a backup, you can call this operation to query the user backup ID.
       * * You can call the [ImportUserBackupFile](https://help.aliyun.com/document_detail/260266.html) operation to import a user backup to ApsaraDB RDS.
       *
       * @param request ListUserBackupFilesRequest
       * @return ListUserBackupFilesResponse
       */
      Models::ListUserBackupFilesResponse listUserBackupFiles(const Models::ListUserBackupFilesRequest &request);

      /**
       * @summary Locks a database account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts. Proceed only after you understand the information.
       * [Lock an RDS PostgreSQL account](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request LockAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockAccountResponse
       */
      Models::LockAccountResponse lockAccountWithOptions(const Models::LockAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks a database account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before calling this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts. Proceed only after you understand the information.
       * [Lock an RDS PostgreSQL account](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request LockAccountRequest
       * @return LockAccountResponse
       */
      Models::LockAccountResponse lockAccount(const Models::LockAccountRequest &request);

      /**
       * @summary Migrates an ApsaraDB RDS instance to a different zone.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Migrate an ApsaraDB RDS for MySQL instance across zones](https://help.aliyun.com/document_detail/96746.html)
       * - [Migrate an ApsaraDB RDS for PostgreSQL instance across zones](https://help.aliyun.com/document_detail/96746.html)
       * - [Migrate an ApsaraDB RDS for SQL Server instance across zones](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateConnectionToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateConnectionToOtherZoneResponse
       */
      Models::MigrateConnectionToOtherZoneResponse migrateConnectionToOtherZoneWithOptions(const Models::MigrateConnectionToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an ApsaraDB RDS instance to a different zone.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Migrate an ApsaraDB RDS for MySQL instance across zones](https://help.aliyun.com/document_detail/96746.html)
       * - [Migrate an ApsaraDB RDS for PostgreSQL instance across zones](https://help.aliyun.com/document_detail/96746.html)
       * - [Migrate an ApsaraDB RDS for SQL Server instance across zones](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateConnectionToOtherZoneRequest
       * @return MigrateConnectionToOtherZoneResponse
       */
      Models::MigrateConnectionToOtherZoneResponse migrateConnectionToOtherZone(const Models::MigrateConnectionToOtherZoneRequest &request);

      /**
       * @summary Migrates an ApsaraDB RDS instance within a dedicated cluster by calling the MigrateDBInstance operation.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches in the form of clusters. You can create multiple dedicated clusters in a region. A dedicated cluster contains multiple hosts, and a host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request MigrateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstanceWithOptions(const Models::MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an ApsaraDB RDS instance within a dedicated cluster by calling the MigrateDBInstance operation.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches in the form of clusters. You can create multiple dedicated clusters in a region. A dedicated cluster contains multiple hosts, and a host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request MigrateDBInstanceRequest
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstance(const Models::MigrateDBInstanceRequest &request);

      /**
       * @summary Changes the zones of nodes in an ApsaraDB RDS for MySQL Cluster Edition instance.
       *
       * @param tmpReq MigrateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBNodesResponse
       */
      Models::MigrateDBNodesResponse migrateDBNodesWithOptions(const Models::MigrateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the zones of nodes in an ApsaraDB RDS for MySQL Cluster Edition instance.
       *
       * @param request MigrateDBNodesRequest
       * @return MigrateDBNodesResponse
       */
      Models::MigrateDBNodesResponse migrateDBNodes(const Models::MigrateDBNodesRequest &request);

      /**
       * @summary Switches the IP address whitelist of an ApsaraDB RDS instance from general pattern to enhanced whitelist safe mode.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Switch to the enhanced whitelist mode for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96117.html)
       * - [Switch to the enhanced whitelist mode for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96767.html)
       *
       * @param request MigrateSecurityIPModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateSecurityIPModeResponse
       */
      Models::MigrateSecurityIPModeResponse migrateSecurityIPModeWithOptions(const Models::MigrateSecurityIPModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the IP address whitelist of an ApsaraDB RDS instance from general pattern to enhanced whitelist safe mode.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Switch to the enhanced whitelist mode for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96117.html)
       * - [Switch to the enhanced whitelist mode for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96767.html)
       *
       * @param request MigrateSecurityIPModeRequest
       * @return MigrateSecurityIPModeResponse
       */
      Models::MigrateSecurityIPModeResponse migrateSecurityIPMode(const Models::MigrateSecurityIPModeRequest &request);

      /**
       * @summary Migrates an ApsaraDB RDS instance to a different zone.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Migrate an ApsaraDB RDS for MySQL instance across zones](https://help.aliyun.com/document_detail/96053.html)
       * - [Migrate an ApsaraDB RDS for PostgreSQL instance across zones](https://help.aliyun.com/document_detail/96746.html)
       * - [Migrate an ApsaraDB RDS for SQL Server instance across zones](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const Models::MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an ApsaraDB RDS instance to a different zone.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Migrate an ApsaraDB RDS for MySQL instance across zones](https://help.aliyun.com/document_detail/96053.html)
       * - [Migrate an ApsaraDB RDS for PostgreSQL instance across zones](https://help.aliyun.com/document_detail/96746.html)
       * - [Migrate an ApsaraDB RDS for SQL Server instance across zones](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Modifies the Active Directory (AD) domain information of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Connect an ApsaraDB RDS for SQL Server instance to a self-managed domain](https://help.aliyun.com/document_detail/170734.html)
       *
       * @param request ModifyADInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyADInfoResponse
       */
      Models::ModifyADInfoResponse modifyADInfoWithOptions(const Models::ModifyADInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Active Directory (AD) domain information of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Connect an ApsaraDB RDS for SQL Server instance to a self-managed domain](https://help.aliyun.com/document_detail/170734.html)
       *
       * @param request ModifyADInfoRequest
       * @return ModifyADInfoResponse
       */
      Models::ModifyADInfoResponse modifyADInfo(const Models::ModifyADInfoRequest &request);

      /**
       * @summary Modifies the password policy of an account for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for SQL Server (shared instance types and 2008 R2 instances are not supported)
       * > Before calling this operation, set the SQL Server account password policy. For more information, see [ModifyAccountSecurityPolicy](https://help.aliyun.com/document_detail/2848321.html).
       * ### Related documentation
       * [Custom account password policies for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2845728.html)
       *
       * @param request ModifyAccountCheckPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountCheckPolicyResponse
       */
      Models::ModifyAccountCheckPolicyResponse modifyAccountCheckPolicyWithOptions(const Models::ModifyAccountCheckPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password policy of an account for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * ApsaraDB RDS for SQL Server (shared instance types and 2008 R2 instances are not supported)
       * > Before calling this operation, set the SQL Server account password policy. For more information, see [ModifyAccountSecurityPolicy](https://help.aliyun.com/document_detail/2848321.html).
       * ### Related documentation
       * [Custom account password policies for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2845728.html)
       *
       * @param request ModifyAccountCheckPolicyRequest
       * @return ModifyAccountCheckPolicyResponse
       */
      Models::ModifyAccountCheckPolicyResponse modifyAccountCheckPolicy(const Models::ModifyAccountCheckPolicyRequest &request);

      /**
       * @summary Modifies the description of a database account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the encryption or data masking permissions of an account in a specified instance.
       *
       * @description ## Request description
       * - Before you invoke this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature before trying again.
       *
       * @param request ModifyAccountMaskingPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountMaskingPrivilegeResponse
       */
      Models::ModifyAccountMaskingPrivilegeResponse modifyAccountMaskingPrivilegeWithOptions(const Models::ModifyAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the encryption or data masking permissions of an account in a specified instance.
       *
       * @description ## Request description
       * - Before you invoke this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature before trying again.
       *
       * @param request ModifyAccountMaskingPrivilegeRequest
       * @return ModifyAccountMaskingPrivilegeResponse
       */
      Models::ModifyAccountMaskingPrivilegeResponse modifyAccountMaskingPrivilege(const Models::ModifyAccountMaskingPrivilegeRequest &request);

      /**
       * @summary Modifies the password policy for an account of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server (shared instance types and the 2008 R2 edition are not supported)
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Custom password policies for ApsaraDB RDS for SQL Server accounts](https://help.aliyun.com/document_detail/95640.html)
       *
       * @param request ModifyAccountSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountSecurityPolicyResponse
       */
      Models::ModifyAccountSecurityPolicyResponse modifyAccountSecurityPolicyWithOptions(const Models::ModifyAccountSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password policy for an account of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server (shared instance types and the 2008 R2 edition are not supported)
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following feature documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Custom password policies for ApsaraDB RDS for SQL Server accounts](https://help.aliyun.com/document_detail/95640.html)
       *
       * @param request ModifyAccountSecurityPolicyRequest
       * @return ModifyAccountSecurityPolicyResponse
       */
      Models::ModifyAccountSecurityPolicyResponse modifyAccountSecurityPolicy(const Models::ModifyAccountSecurityPolicyRequest &request);

      /**
       * @summary Enables or disables the historical events feature for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [ApsaraDB RDS for MySQL historical events](https://help.aliyun.com/document_detail/129759.html)
       * - [ApsaraDB RDS for PostgreSQL historical events](https://help.aliyun.com/document_detail/131008.html)
       * - [ApsaraDB RDS for SQL Server historical events](https://help.aliyun.com/document_detail/131013.html)
       * - [ApsaraDB RDS for MariaDB historical events](https://help.aliyun.com/document_detail/131010.html)
       *
       * @param request ModifyActionEventPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActionEventPolicyResponse
       */
      Models::ModifyActionEventPolicyResponse modifyActionEventPolicyWithOptions(const Models::ModifyActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the historical events feature for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [ApsaraDB RDS for MySQL historical events](https://help.aliyun.com/document_detail/129759.html)
       * - [ApsaraDB RDS for PostgreSQL historical events](https://help.aliyun.com/document_detail/131008.html)
       * - [ApsaraDB RDS for SQL Server historical events](https://help.aliyun.com/document_detail/131013.html)
       * - [ApsaraDB RDS for MariaDB historical events](https://help.aliyun.com/document_detail/131010.html)
       *
       * @param request ModifyActionEventPolicyRequest
       * @return ModifyActionEventPolicyResponse
       */
      Models::ModifyActionEventPolicyResponse modifyActionEventPolicy(const Models::ModifyActionEventPolicyRequest &request);

      /**
       * @summary Modifies the switchover time of scheduled O&M tasks for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Scheduled events of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/104183.html)
       * - [Scheduled events of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/104452.html)
       * - [Scheduled events of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/104451.html)
       * - [Scheduled events of ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/104454.html)
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switchover time of scheduled O&M tasks for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Scheduled events of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/104183.html)
       * - [Scheduled events of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/104452.html)
       * - [Scheduled events of ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/104451.html)
       * - [Scheduled events of ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/104454.html)
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the backup policy settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure an automatic backup policy for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98818.html)
       * - [Configure an automatic backup policy for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * - [Configure an automatic backup policy for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * - [Configure an automatic backup policy for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup policy settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure an automatic backup policy for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98818.html)
       * - [Configure an automatic backup policy for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * - [Configure an automatic backup policy for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * - [Configure an automatic backup policy for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Extends the expiration time of a single-database backup set (physical backup, full backup, or single-database backup) generated by a manual backup.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related feature documentation
       * >Notice: Before you invoke this operation, carefully read the feature documentation to fully understand the prerequisites and impacts. Then proceed with the operation.
       * [Manual backup of SQL Server data](https://help.aliyun.com/document_detail/95717.html)
       *
       * @param request ModifyBackupSetExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSetExpireTimeResponse
       */
      Models::ModifyBackupSetExpireTimeResponse modifyBackupSetExpireTimeWithOptions(const Models::ModifyBackupSetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the expiration time of a single-database backup set (physical backup, full backup, or single-database backup) generated by a manual backup.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related feature documentation
       * >Notice: Before you invoke this operation, carefully read the feature documentation to fully understand the prerequisites and impacts. Then proceed with the operation.
       * [Manual backup of SQL Server data](https://help.aliyun.com/document_detail/95717.html)
       *
       * @param request ModifyBackupSetExpireTimeRequest
       * @return ModifyBackupSetExpireTimeResponse
       */
      Models::ModifyBackupSetExpireTimeResponse modifyBackupSetExpireTime(const Models::ModifyBackupSetExpireTimeRequest &request);

      /**
       * @summary Modifies the system character set collation and time zone of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Modify the character set collation and time zone](https://help.aliyun.com/document_detail/95700.html)
       *
       * @param request ModifyCollationTimeZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCollationTimeZoneResponse
       */
      Models::ModifyCollationTimeZoneResponse modifyCollationTimeZoneWithOptions(const Models::ModifyCollationTimeZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the system character set collation and time zone of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Modify the character set collation and time zone](https://help.aliyun.com/document_detail/95700.html)
       *
       * @param request ModifyCollationTimeZoneRequest
       * @return ModifyCollationTimeZoneResponse
       */
      Models::ModifyCollationTimeZoneResponse modifyCollationTimeZone(const Models::ModifyCollationTimeZoneRequest &request);

      /**
       * @summary Modifies or disables the committed serverless feature.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [Committed Serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request ModifyComputeBurstConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyComputeBurstConfigResponse
       */
      Models::ModifyComputeBurstConfigResponse modifyComputeBurstConfigWithOptions(const Models::ModifyComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies or disables the committed serverless feature.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * [Committed Serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request ModifyComputeBurstConfigRequest
       * @return ModifyComputeBurstConfigResponse
       */
      Models::ModifyComputeBurstConfigResponse modifyComputeBurstConfig(const Models::ModifyComputeBurstConfigRequest &request);

      /**
       * @summary Modifies the resources of an ApsaraDB RDS instance.
       *
       * @param request ModifyCustinsResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustinsResourceResponse
       */
      Models::ModifyCustinsResourceResponse modifyCustinsResourceWithOptions(const Models::ModifyCustinsResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resources of an ApsaraDB RDS instance.
       *
       * @param request ModifyCustinsResourceRequest
       * @return ModifyCustinsResourceResponse
       */
      Models::ModifyCustinsResourceResponse modifyCustinsResource(const Models::ModifyCustinsResourceRequest &request);

      /**
       * @summary Modifies the description of a database.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ModifyDBDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescriptionWithOptions(const Models::ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ModifyDBDescriptionRequest
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescription(const Models::ModifyDBDescriptionRequest &request);

      /**
       * @summary Modifies an instance. Currently, only the PostgreSQL engine is supported.
       *
       * @param tmpReq ModifyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceResponse
       */
      Models::ModifyDBInstanceResponse modifyDBInstanceWithOptions(const Models::ModifyDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an instance. Currently, only the PostgreSQL engine is supported.
       *
       * @param request ModifyDBInstanceRequest
       * @return ModifyDBInstanceResponse
       */
      Models::ModifyDBInstanceResponse modifyDBInstance(const Models::ModifyDBInstanceRequest &request);

      /**
       * @summary Modifies the minor version update policy for an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify the automatic upgrade settings for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * - [Modify the automatic upgrade settings for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       *
       * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
       */
      Models::ModifyDBInstanceAutoUpgradeMinorVersionResponse modifyDBInstanceAutoUpgradeMinorVersionWithOptions(const Models::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the minor version update policy for an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify the automatic upgrade settings for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * - [Modify the automatic upgrade settings for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       *
       * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
       * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
       */
      Models::ModifyDBInstanceAutoUpgradeMinorVersionResponse modifyDBInstanceAutoUpgradeMinorVersion(const Models::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request);

      /**
       * @summary Modifies the column encryption algorithm configuration of a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive a fault message when invoking this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature before trying again.
       *
       * @param request ModifyDBInstanceCLSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceCLSResponse
       */
      Models::ModifyDBInstanceCLSResponse modifyDBInstanceCLSWithOptions(const Models::ModifyDBInstanceCLSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the column encryption algorithm configuration of a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that you have activated the column encryption feature in DAS Security Center.
       * - If you receive a fault message when invoking this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption feature before trying again.
       *
       * @param request ModifyDBInstanceCLSRequest
       * @return ModifyDBInstanceCLSResponse
       */
      Models::ModifyDBInstanceCLSResponse modifyDBInstanceCLS(const Models::ModifyDBInstanceCLSRequest &request);

      /**
       * @summary Modifies the configuration items of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * > Currently supported configuration items include [ApsaraDB RDS for PostgreSQL PgBouncer](https://help.aliyun.com/document_detail/2398301.html), [ApsaraDB RDS for PostgreSQL cloud disk encryption](https://help.aliyun.com/document_detail/124822.html), [ApsaraDB RDS for SQL Server cloud disk encryption](https://help.aliyun.com/document_detail/135391.html)<props="china">, [ApsaraDB RDS for SQL Server simple recovery](https://help.aliyun.com/document_detail/2618484.html), and [ApsaraDB RDS for SQL Server error log cleanup](https://help.aliyun.com/document_detail/95645.html).
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration items of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * > Currently supported configuration items include [ApsaraDB RDS for PostgreSQL PgBouncer](https://help.aliyun.com/document_detail/2398301.html), [ApsaraDB RDS for PostgreSQL cloud disk encryption](https://help.aliyun.com/document_detail/124822.html), [ApsaraDB RDS for SQL Server cloud disk encryption](https://help.aliyun.com/document_detail/135391.html)<props="china">, [ApsaraDB RDS for SQL Server simple recovery](https://help.aliyun.com/document_detail/2618484.html), and [ApsaraDB RDS for SQL Server error log cleanup](https://help.aliyun.com/document_detail/95645.html).
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Manages the endpoint and port of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify the endpoint and port of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96163.html)
       * - [Modify the endpoint and port of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96788.html)
       * - [Modify the endpoint and port of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95740.html)
       * - [Modify the endpoint and port of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97157.html)
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages the endpoint and port of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify the endpoint and port of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96163.html)
       * - [Modify the endpoint and port of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96788.html)
       * - [Modify the endpoint and port of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95740.html)
       * - [Modify the endpoint and port of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97157.html)
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Sets the replication delay time for an ApsaraDB RDS for MySQL read-only instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Read-only instance delayed replication](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyDBInstanceDelayedReplicationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDelayedReplicationTimeResponse
       */
      Models::ModifyDBInstanceDelayedReplicationTimeResponse modifyDBInstanceDelayedReplicationTimeWithOptions(const Models::ModifyDBInstanceDelayedReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the replication delay time for an ApsaraDB RDS for MySQL read-only instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Read-only instance delayed replication](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyDBInstanceDelayedReplicationTimeRequest
       * @return ModifyDBInstanceDelayedReplicationTimeResponse
       */
      Models::ModifyDBInstanceDelayedReplicationTimeResponse modifyDBInstanceDelayedReplicationTime(const Models::ModifyDBInstanceDelayedReplicationTimeRequest &request);

      /**
       * @summary Enables or disables release protection for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Enable and disable instance release protection for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/414512.html)
       * - [Enable and disable instance release protection for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/471512.html)
       * - [Enable and disable instance release protection for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/416209.html)
       * - [Enable and disable instance release protection for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/414512.html)
       *
       * @param request ModifyDBInstanceDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDeletionProtectionResponse
       */
      Models::ModifyDBInstanceDeletionProtectionResponse modifyDBInstanceDeletionProtectionWithOptions(const Models::ModifyDBInstanceDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables release protection for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Enable and disable instance release protection for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/414512.html)
       * - [Enable and disable instance release protection for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/471512.html)
       * - [Enable and disable instance release protection for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/416209.html)
       * - [Enable and disable instance release protection for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/414512.html)
       *
       * @param request ModifyDBInstanceDeletionProtectionRequest
       * @return ModifyDBInstanceDeletionProtectionResponse
       */
      Models::ModifyDBInstanceDeletionProtectionResponse modifyDBInstanceDeletionProtection(const Models::ModifyDBInstanceDeletionProtectionRequest &request);

      /**
       * @summary Modifies the name of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @summary Modifies the endpoint weight information of an ApsaraDB RDS instance in the Cluster Edition.
       *
       * @description ### Applicable engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       *
       * @param tmpReq ModifyDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceEndpointResponse
       */
      Models::ModifyDBInstanceEndpointResponse modifyDBInstanceEndpointWithOptions(const Models::ModifyDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoint weight information of an ApsaraDB RDS instance in the Cluster Edition.
       *
       * @description ### Applicable engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       *
       * @param request ModifyDBInstanceEndpointRequest
       * @return ModifyDBInstanceEndpointResponse
       */
      Models::ModifyDBInstanceEndpointResponse modifyDBInstanceEndpoint(const Models::ModifyDBInstanceEndpointRequest &request);

      /**
       * @summary Modifies the endpoint connection information of an ApsaraDB RDS instance in Cluster Edition.
       *
       * @description ### Supported DPI engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Precautions
       * - You can modify endpoint connection information, including the connection string and port for public and internal network endpoints, and the VPC, vSwitch, and IP address for internal network connections.
       * - When modifying, VpcId and VSwitchId are treated as a group. The internal network connection parameters (VpcId, VSwitchId, and PrivateIpAddress) and the connection parameters (ConnectionStringPrefix and Port) cannot be specified at the same time. However, you must specify at least one of them.
       *
       * @param request ModifyDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceEndpointAddressResponse
       */
      Models::ModifyDBInstanceEndpointAddressResponse modifyDBInstanceEndpointAddressWithOptions(const Models::ModifyDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoint connection information of an ApsaraDB RDS instance in Cluster Edition.
       *
       * @description ### Supported DPI engines
       * <props="china">
       * - RDS MySQL
       * - RDS PostgreSQL
       * <props="intl">RDS MySQL
       * ### Precautions
       * - You can modify endpoint connection information, including the connection string and port for public and internal network endpoints, and the VPC, vSwitch, and IP address for internal network connections.
       * - When modifying, VpcId and VSwitchId are treated as a group. The internal network connection parameters (VpcId, VSwitchId, and PrivateIpAddress) and the connection parameters (ConnectionStringPrefix and Port) cannot be specified at the same time. However, you must specify at least one of them.
       *
       * @param request ModifyDBInstanceEndpointAddressRequest
       * @return ModifyDBInstanceEndpointAddressResponse
       */
      Models::ModifyDBInstanceEndpointAddressResponse modifyDBInstanceEndpointAddress(const Models::ModifyDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Modifies the high-availability mode and data replication method of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify the data replication method of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96055.html)
       * - [Modify the data replication method of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/151265.html)
       *
       * @param request ModifyDBInstanceHAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceHAConfigResponse
       */
      Models::ModifyDBInstanceHAConfigResponse modifyDBInstanceHAConfigWithOptions(const Models::ModifyDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the high-availability mode and data replication method of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Modify the data replication method of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96055.html)
       * - [Modify the data replication method of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/151265.html)
       *
       * @param request ModifyDBInstanceHAConfigRequest
       * @return ModifyDBInstanceHAConfigResponse
       */
      Models::ModifyDBInstanceHAConfigResponse modifyDBInstanceHAConfig(const Models::ModifyDBInstanceHAConfigRequest &request);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Set the maintenance window of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96052.html)
       * - [Set the maintenance window of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96799.html)
       * - [Set the maintenance window of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95657.html)
       * - [Set the maintenance window of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97473.html)
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Set the maintenance window of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96052.html)
       * - [Set the maintenance window of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96799.html)
       * - [Set the maintenance window of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95657.html)
       * - [Set the maintenance window of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97473.html)
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @summary Modifies the enhanced monitoring metrics displayed for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [View enhanced monitoring](https://help.aliyun.com/document_detail/299200.html).
       *
       * @param request ModifyDBInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMetricsResponse
       */
      Models::ModifyDBInstanceMetricsResponse modifyDBInstanceMetricsWithOptions(const Models::ModifyDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the enhanced monitoring metrics displayed for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [View enhanced monitoring](https://help.aliyun.com/document_detail/299200.html).
       *
       * @param request ModifyDBInstanceMetricsRequest
       * @return ModifyDBInstanceMetricsResponse
       */
      Models::ModifyDBInstanceMetricsResponse modifyDBInstanceMetrics(const Models::ModifyDBInstanceMetricsRequest &request);

      /**
       * @summary Modifies the monitoring frequency of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Precautions
       * Second-level monitoring for ApsaraDB RDS for MySQL incurs additional fees. Before using this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/45020.html) of ApsaraDB RDS.
       * ### Related documentation
       * >Notice: Before using this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts, and then proceed.
       * - [Set the monitoring frequency for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96112.html)
       * - [Set the monitoring frequency for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95710.html)
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(const Models::ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the monitoring frequency of an instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Precautions
       * Second-level monitoring for ApsaraDB RDS for MySQL incurs additional fees. Before using this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/45020.html) of ApsaraDB RDS.
       * ### Related documentation
       * >Notice: Before using this operation, carefully read the following documentation to fully understand the prerequisites and potential impacts, and then proceed.
       * - [Set the monitoring frequency for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96112.html)
       * - [Set the monitoring frequency for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95710.html)
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(const Models::ModifyDBInstanceMonitorRequest &request);

      /**
       * @summary Modifies the expiration time of a classic network endpoint in hybrid access mode.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * - [Temporary hybrid access solution for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96110.html)
       * - [Temporary hybrid access solution for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95708.html)
       *
       * @param request ModifyDBInstanceNetworkExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkExpireTimeResponse
       */
      Models::ModifyDBInstanceNetworkExpireTimeResponse modifyDBInstanceNetworkExpireTimeWithOptions(const Models::ModifyDBInstanceNetworkExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the expiration time of a classic network endpoint in hybrid access mode.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * - [Temporary hybrid access solution for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96110.html)
       * - [Temporary hybrid access solution for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95708.html)
       *
       * @param request ModifyDBInstanceNetworkExpireTimeRequest
       * @return ModifyDBInstanceNetworkExpireTimeResponse
       */
      Models::ModifyDBInstanceNetworkExpireTimeResponse modifyDBInstanceNetworkExpireTime(const Models::ModifyDBInstanceNetworkExpireTimeRequest &request);

      /**
       * @summary Switches an ApsaraDB RDS instance from the classic network to a VPC. This operation is used for instance switchover from the classic network to a VPC.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Change the network type of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96109.html)
       * - [Change the network type of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96761.html)
       * - [Change the network type of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95707.html)
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(const Models::ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches an ApsaraDB RDS instance from the classic network to a VPC. This operation is used for instance switchover from the classic network to a VPC.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Change the network type of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96109.html)
       * - [Change the network type of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96761.html)
       * - [Change the network type of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95707.html)
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(const Models::ModifyDBInstanceNetworkTypeRequest &request);

      /**
       * @summary Changes the billing method of a pay-as-you-go instance to subscription.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves billing changes. After the conversion, the instance is immediately billed on a subscription basis. Calculate the estimated costs in advance and read the related documentation before you call this operation.
       * - [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html)
       * - [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html)
       * - [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html)
       * - [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html)
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayTypeWithOptions(const Models::ModifyDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a pay-as-you-go instance to subscription.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves billing changes. After the conversion, the instance is immediately billed on a subscription basis. Calculate the estimated costs in advance and read the related documentation before you call this operation.
       * - [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html)
       * - [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html)
       * - [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html)
       * - [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html)
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayType(const Models::ModifyDBInstancePayTypeRequest &request);

      /**
       * @summary Enables or disables native replication mode for an ApsaraDB RDS instance by calling the ModifyDBInstanceReplicationSwitch operation.
       *
       * @description ApsaraDB RDS for MySQL instances with native replication enabled must meet the following requirements:
       * - Database engine version: MySQL 5.7
       * - Instance edition: Basic Edition
       * - Billing method: pay-as-you-go or subscription
       * - Minor engine version: 20240930 or later
       * For more information about native replication, see [RDS native replication](https://help.aliyun.com/document_detail/2856530.html).
       *
       * @param request ModifyDBInstanceReplicationSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceReplicationSwitchResponse
       */
      Models::ModifyDBInstanceReplicationSwitchResponse modifyDBInstanceReplicationSwitchWithOptions(const Models::ModifyDBInstanceReplicationSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables native replication mode for an ApsaraDB RDS instance by calling the ModifyDBInstanceReplicationSwitch operation.
       *
       * @description ApsaraDB RDS for MySQL instances with native replication enabled must meet the following requirements:
       * - Database engine version: MySQL 5.7
       * - Instance edition: Basic Edition
       * - Billing method: pay-as-you-go or subscription
       * - Minor engine version: 20240930 or later
       * For more information about native replication, see [RDS native replication](https://help.aliyun.com/document_detail/2856530.html).
       *
       * @param request ModifyDBInstanceReplicationSwitchRequest
       * @return ModifyDBInstanceReplicationSwitchResponse
       */
      Models::ModifyDBInstanceReplicationSwitchResponse modifyDBInstanceReplicationSwitch(const Models::ModifyDBInstanceReplicationSwitchRequest &request);

      /**
       * @summary Modifies the SSL link configuration of an ApsaraDB RDS instance.
       *
       * @description ### Supported DPI engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229517.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request ModifyDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(const Models::ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL link configuration of an ApsaraDB RDS instance.
       *
       * @description ### Supported DPI engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229517.html)
       * - [Settings for Secure Sockets Layer (SSL) encryption for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request ModifyDBInstanceSSLRequest
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSL(const Models::ModifyDBInstanceSSLRequest &request);

      /**
       * @summary Modifies the security group rules of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server
       * ### Related documentation
       * [Configure security group rules for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifyDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSecurityGroupRuleResponse
       */
      Models::ModifyDBInstanceSecurityGroupRuleResponse modifyDBInstanceSecurityGroupRuleWithOptions(const Models::ModifyDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the security group rules of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for SQL Server
       * ### Related documentation
       * [Configure security group rules for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifyDBInstanceSecurityGroupRuleRequest
       * @return ModifyDBInstanceSecurityGroupRuleResponse
       */
      Models::ModifyDBInstanceSecurityGroupRuleResponse modifyDBInstanceSecurityGroupRule(const Models::ModifyDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Modifies the specifications and storage capacity of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines.
       *
       * @param tmpReq ModifyDBInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpecWithOptions(const Models::ModifyDBInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications and storage capacity of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines.
       *
       * @param request ModifyDBInstanceSpecRequest
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpec(const Models::ModifyDBInstanceSpecRequest &request);

      /**
       * @summary Enables or modifies the Transparent Data Encryption (TDE) feature for an ApsaraDB RDS instance.
       *
       * @description ### Applicable DPI engine
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the feature documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Settings for transparent data encryption TDE on ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96121.html)
       * - [Settings for transparent data encryption TDE on ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/465652.html)
       * - [Settings for transparent data encryption TDE on ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95716.html)
       *
       * @param request ModifyDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDEWithOptions(const Models::ModifyDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or modifies the Transparent Data Encryption (TDE) feature for an ApsaraDB RDS instance.
       *
       * @description ### Applicable DPI engine
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the feature documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Settings for transparent data encryption TDE on ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96121.html)
       * - [Settings for transparent data encryption TDE on ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/465652.html)
       * - [Settings for transparent data encryption TDE on ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95716.html)
       *
       * @param request ModifyDBInstanceTDERequest
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDE(const Models::ModifyDBInstanceTDERequest &request);

      /**
       * @summary Enables or disables the vector storage feature for an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the feature documentation to fully understand the prerequisites and impacts of this operation.
       * - [RDS MySQL vector storage](https://help.aliyun.com/document_detail/2998661.html)
       *
       * @param request ModifyDBInstanceVectorSupportStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceVectorSupportStatusResponse
       */
      Models::ModifyDBInstanceVectorSupportStatusResponse modifyDBInstanceVectorSupportStatusWithOptions(const Models::ModifyDBInstanceVectorSupportStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the vector storage feature for an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the feature documentation to fully understand the prerequisites and impacts of this operation.
       * - [RDS MySQL vector storage](https://help.aliyun.com/document_detail/2998661.html)
       *
       * @param request ModifyDBInstanceVectorSupportStatusRequest
       * @return ModifyDBInstanceVectorSupportStatusResponse
       */
      Models::ModifyDBInstanceVectorSupportStatusResponse modifyDBInstanceVectorSupportStatus(const Models::ModifyDBInstanceVectorSupportStatusRequest &request);

      /**
       * @summary Modifies the specifications, storage type, and storage capacity of nodes in an ApsaraDB RDS for MySQL Cluster Edition instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Related documentation
       *  [Modify node configurations](https://help.aliyun.com/document_detail/2627998.html)
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       *
       * @param tmpReq ModifyDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeResponse
       */
      Models::ModifyDBNodeResponse modifyDBNodeWithOptions(const Models::ModifyDBNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications, storage type, and storage capacity of nodes in an ApsaraDB RDS for MySQL Cluster Edition instance.
       *
       * @description ### Applicable engine
       * - RDS MySQL
       * ### Related documentation
       *  [Modify node configurations](https://help.aliyun.com/document_detail/2627998.html)
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       *
       * @param request ModifyDBNodeRequest
       * @return ModifyDBNodeResponse
       */
      Models::ModifyDBNodeResponse modifyDBNode(const Models::ModifyDBNodeRequest &request);

      /**
       * @summary Enables or modifies the database proxy instance feature for an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS for MySQL Cluster Edition instances are progressively granted a complimentary dedicated proxy service with one proxy node across regions. For details, see [ApsaraDB RDS for MySQL Cluster Edition complimentary dedicated proxy service with one proxy node](https://help.aliyun.com/document_detail/2555466.html).
       * ### Related feature documentation
       * >Notice: Before you invoke this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Enable database proxy for RDS MySQL](https://help.aliyun.com/document_detail/197456.html)
       * - [Enable database proxy for RDS PostgreSQL](https://help.aliyun.com/document_detail/418272.html)
       *
       * @param tmpReq ModifyDBProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyResponse
       */
      Models::ModifyDBProxyResponse modifyDBProxyWithOptions(const Models::ModifyDBProxyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or modifies the database proxy instance feature for an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS for MySQL Cluster Edition instances are progressively granted a complimentary dedicated proxy service with one proxy node across regions. For details, see [ApsaraDB RDS for MySQL Cluster Edition complimentary dedicated proxy service with one proxy node](https://help.aliyun.com/document_detail/2555466.html).
       * ### Related feature documentation
       * >Notice: Before you invoke this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Enable database proxy for RDS MySQL](https://help.aliyun.com/document_detail/197456.html)
       * - [Enable database proxy for RDS PostgreSQL](https://help.aliyun.com/document_detail/418272.html)
       *
       * @param request ModifyDBProxyRequest
       * @return ModifyDBProxyResponse
       */
      Models::ModifyDBProxyResponse modifyDBProxy(const Models::ModifyDBProxyRequest &request);

      /**
       * @summary Configures the access policy for a database proxy endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure the access policy for a database proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/2621331.html)
       * - [Configure the access policy for a database proxy endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418273.html)
       *
       * @param request ModifyDBProxyEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyEndpointResponse
       */
      Models::ModifyDBProxyEndpointResponse modifyDBProxyEndpointWithOptions(const Models::ModifyDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the access policy for a database proxy endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure the access policy for a database proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/2621331.html)
       * - [Configure the access policy for a database proxy endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418273.html)
       *
       * @param request ModifyDBProxyEndpointRequest
       * @return ModifyDBProxyEndpointResponse
       */
      Models::ModifyDBProxyEndpointResponse modifyDBProxyEndpoint(const Models::ModifyDBProxyEndpointRequest &request);

      /**
       * @summary Modifies the database proxy endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related feature documentation
       * >Notice: Before calling this operation, carefully read the following documentation, make sure that you fully understand the prerequisites and impacts of this operation, and then proceed.
       * - [Configure the database proxy endpoint for RDS MySQL](https://help.aliyun.com/document_detail/184921.html)
       * - [Configure the database proxy endpoint for RDS PostgreSQL](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request ModifyDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyEndpointAddressResponse
       */
      Models::ModifyDBProxyEndpointAddressResponse modifyDBProxyEndpointAddressWithOptions(const Models::ModifyDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the database proxy endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * ### Related feature documentation
       * >Notice: Before calling this operation, carefully read the following documentation, make sure that you fully understand the prerequisites and impacts of this operation, and then proceed.
       * - [Configure the database proxy endpoint for RDS MySQL](https://help.aliyun.com/document_detail/184921.html)
       * - [Configure the database proxy endpoint for RDS PostgreSQL](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request ModifyDBProxyEndpointAddressRequest
       * @return ModifyDBProxyEndpointAddressResponse
       */
      Models::ModifyDBProxyEndpointAddressResponse modifyDBProxyEndpointAddress(const Models::ModifyDBProxyEndpointAddressRequest &request);

      /**
       * @summary Modifies the configurations of an ApsaraDB RDS database proxy instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS for MySQL Cluster Edition progressively provides a complimentary dedicated proxy service with one proxy node across regions. For more information, see [ApsaraDB RDS for MySQL Cluster Edition complimentary dedicated proxy service with one proxy node](https://help.aliyun.com/document_detail/2555466.html).
       *
       * @param tmpReq ModifyDBProxyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyInstanceResponse
       */
      Models::ModifyDBProxyInstanceResponse modifyDBProxyInstanceWithOptions(const Models::ModifyDBProxyInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an ApsaraDB RDS database proxy instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * > Starting from October 17, 2023, ApsaraDB RDS for MySQL Cluster Edition progressively provides a complimentary dedicated proxy service with one proxy node across regions. For more information, see [ApsaraDB RDS for MySQL Cluster Edition complimentary dedicated proxy service with one proxy node](https://help.aliyun.com/document_detail/2555466.html).
       *
       * @param request ModifyDBProxyInstanceRequest
       * @return ModifyDBProxyInstanceResponse
       */
      Models::ModifyDBProxyInstanceResponse modifyDBProxyInstance(const Models::ModifyDBProxyInstanceRequest &request);

      /**
       * @summary Configures the distributed transaction whitelist for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDTCSecurityIpHostsForSQLServerResponse
       */
      Models::ModifyDTCSecurityIpHostsForSQLServerResponse modifyDTCSecurityIpHostsForSQLServerWithOptions(const Models::ModifyDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the distributed transaction whitelist for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
       * @return ModifyDTCSecurityIpHostsForSQLServerResponse
       */
      Models::ModifyDTCSecurityIpHostsForSQLServerResponse modifyDTCSecurityIpHostsForSQLServer(const Models::ModifyDTCSecurityIpHostsForSQLServerRequest &request);

      /**
       * @summary Configures the automatic storage expansion feature for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * <props="china">
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * <props="intl">
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - [Automatic storage expansion for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/173826.html)
       * - [Automatic storage expansion for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/432496.html)
       * - [Automatic storage expansion for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2573613.html)
       * <props="intl">
       * - [Automatic storage expansion for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/173826.html)
       * - [Automatic storage expansion for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/432496.html)
       *
       * @param request ModifyDasInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDasInstanceConfigResponse
       */
      Models::ModifyDasInstanceConfigResponse modifyDasInstanceConfigWithOptions(const Models::ModifyDasInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the automatic storage expansion feature for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * <props="china">
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * <props="intl">
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - [Automatic storage expansion for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/173826.html)
       * - [Automatic storage expansion for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/432496.html)
       * - [Automatic storage expansion for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/2573613.html)
       * <props="intl">
       * - [Automatic storage expansion for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/173826.html)
       * - [Automatic storage expansion for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/432496.html)
       *
       * @param request ModifyDasInstanceConfigRequest
       * @return ModifyDasInstanceConfigResponse
       */
      Models::ModifyDasInstanceConfigResponse modifyDasInstanceConfig(const Models::ModifyDasInstanceConfigRequest &request);

      /**
       * @summary Modifies the attributes of an ApsaraDB RDS for SQL Server database.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Related feature documentation
       * This operation supports the following features: [Modify SQL Server database attributes](https://help.aliyun.com/document_detail/2401398.html) and [Archive cloud disk data to OSS](https://help.aliyun.com/document_detail/2767189.html). Before using the data archiving to OSS feature through the API, enable the data archiving feature in the console first.
       * >Notice: Before calling this operation, carefully read the feature documentation to fully understand the prerequisites and potential impacts, and then proceed.
       *
       * @param request ModifyDatabaseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseConfigResponse
       */
      Models::ModifyDatabaseConfigResponse modifyDatabaseConfigWithOptions(const Models::ModifyDatabaseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an ApsaraDB RDS for SQL Server database.
       *
       * @description ### Applicable engine
       * - RDS SQL Server
       * ### Related feature documentation
       * This operation supports the following features: [Modify SQL Server database attributes](https://help.aliyun.com/document_detail/2401398.html) and [Archive cloud disk data to OSS](https://help.aliyun.com/document_detail/2767189.html). Before using the data archiving to OSS feature through the API, enable the data archiving feature in the console first.
       * >Notice: Before calling this operation, carefully read the feature documentation to fully understand the prerequisites and potential impacts, and then proceed.
       *
       * @param request ModifyDatabaseConfigRequest
       * @return ModifyDatabaseConfigResponse
       */
      Models::ModifyDatabaseConfigResponse modifyDatabaseConfig(const Models::ModifyDatabaseConfigRequest &request);

      /**
       * @summary Sets SSL encryption for a database proxy endpoint of an ApsaraDB RDS for MySQL database.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Settings for database proxy SSL encryption of an ApsaraDB RDS for MySQL database](https://help.aliyun.com/document_detail/188164.html)
       *
       * @param request ModifyDbProxyInstanceSslRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDbProxyInstanceSslResponse
       */
      Models::ModifyDbProxyInstanceSslResponse modifyDbProxyInstanceSslWithOptions(const Models::ModifyDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets SSL encryption for a database proxy endpoint of an ApsaraDB RDS for MySQL database.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Settings for database proxy SSL encryption of an ApsaraDB RDS for MySQL database](https://help.aliyun.com/document_detail/188164.html)
       *
       * @param request ModifyDbProxyInstanceSslRequest
       * @return ModifyDbProxyInstanceSslResponse
       */
      Models::ModifyDbProxyInstanceSslResponse modifyDbProxyInstanceSsl(const Models::ModifyDbProxyInstanceSslRequest &request);

      /**
       * @summary Modifies event information in Event Center.
       *
       * @param request ModifyEventInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfoWithOptions(const Models::ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies event information in Event Center.
       *
       * @param request ModifyEventInfoRequest
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfo(const Models::ModifyEventInfoRequest &request);

      /**
       * @summary Modifies the availability detection method of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [What is the availability detection method](https://help.aliyun.com/document_detail/207467.html).
       *
       * @param request ModifyHADiagnoseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHADiagnoseConfigResponse
       */
      Models::ModifyHADiagnoseConfigResponse modifyHADiagnoseConfigWithOptions(const Models::ModifyHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the availability detection method of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [What is the availability detection method](https://help.aliyun.com/document_detail/207467.html).
       *
       * @param request ModifyHADiagnoseConfigRequest
       * @return ModifyHADiagnoseConfigResponse
       */
      Models::ModifyHADiagnoseConfigResponse modifyHADiagnoseConfig(const Models::ModifyHADiagnoseConfigRequest &request);

      /**
       * @summary Enables or shuts down the automatic switchover feature for the primary and secondary instances of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96054.html)
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96747.html)
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95659.html)
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request ModifyHASwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHASwitchConfigResponse
       */
      Models::ModifyHASwitchConfigResponse modifyHASwitchConfigWithOptions(const Models::ModifyHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or shuts down the automatic switchover feature for the primary and secondary instances of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96054.html)
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96747.html)
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95659.html)
       * - [Automatic primary/secondary switchover for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request ModifyHASwitchConfigRequest
       * @return ModifyHASwitchConfigResponse
       */
      Models::ModifyHASwitchConfigResponse modifyHASwitchConfig(const Models::ModifyHASwitchConfigRequest &request);

      /**
       * @summary Modifies a data import task for an ApsaraDB RDS for MySQL native replication instance.
       *
       * @description Modifies a data import task for an ApsaraDB RDS for MySQL native replication instance.
       *
       * @param request ModifyImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImportTaskResponse
       */
      Models::ModifyImportTaskResponse modifyImportTaskWithOptions(const Models::ModifyImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data import task for an ApsaraDB RDS for MySQL native replication instance.
       *
       * @description Modifies a data import task for an ApsaraDB RDS for MySQL native replication instance.
       *
       * @param request ModifyImportTaskRequest
       * @return ModifyImportTaskResponse
       */
      Models::ModifyImportTaskResponse modifyImportTask(const Models::ModifyImportTaskRequest &request);

      /**
       * @summary Modifies the auto-renewal configuration of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       * - [Auto-renewal of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96049.html)
       * - [Auto-renewal of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96740.html)
       * - [Auto-renewal of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95635.html)
       * - [Auto-renewal of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97121.html)
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(const Models::ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal configuration of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       * - [Auto-renewal of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96049.html)
       * - [Auto-renewal of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96740.html)
       * - [Auto-renewal of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95635.html)
       * - [Auto-renewal of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97121.html)
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(const Models::ModifyInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Modifies the cross-region backup settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request ModifyInstanceCrossBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceCrossBackupPolicyResponse
       */
      Models::ModifyInstanceCrossBackupPolicyResponse modifyInstanceCrossBackupPolicyWithOptions(const Models::ModifyInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cross-region backup settings of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region backup for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/206671.html)
       * - [Cross-region backup for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request ModifyInstanceCrossBackupPolicyRequest
       * @return ModifyInstanceCrossBackupPolicyResponse
       */
      Models::ModifyInstanceCrossBackupPolicyResponse modifyInstanceCrossBackupPolicy(const Models::ModifyInstanceCrossBackupPolicyRequest &request);

      /**
       * @summary Modifies the encryption or masking rule of a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that the column encryption service is activated in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption service before trying again.
       *
       * @param tmpReq ModifyMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRulesWithOptions(const Models::ModifyMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the encryption or masking rule of a specified instance.
       *
       * @description ## Request description
       * - Before invoking this operation, make sure that the column encryption service is activated in DAS Security Center.
       * - If you receive the fault message ColumnEncryptionErrorCode.NOT_PURCHASED when you invoke this operation, go to Database Autonomy Service (DAS) Security Center to purchase and activate the column encryption service before trying again.
       *
       * @param request ModifyMaskingRulesRequest
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRules(const Models::ModifyMaskingRulesRequest &request);

      /**
       * @summary 修改PostgreSQL数据库的HBA配置文件
       *
       * @param request ModifyPGHbaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPGHbaConfigResponse
       */
      Models::ModifyPGHbaConfigResponse modifyPGHbaConfigWithOptions(const Models::ModifyPGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改PostgreSQL数据库的HBA配置文件
       *
       * @param request ModifyPGHbaConfigRequest
       * @return ModifyPGHbaConfigResponse
       */
      Models::ModifyPGHbaConfigResponse modifyPGHbaConfig(const Models::ModifyPGHbaConfigRequest &request);

      /**
       * @summary Modifies the parameter values of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure the parameters of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html)
       * - [Configure the parameters of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html)
       * - [Configure the parameters of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95667.html)
       * - [Configure the parameters of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97130.html)
       *
       * @param request ModifyParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameterWithOptions(const Models::ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameter values of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure the parameters of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html)
       * - [Configure the parameters of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html)
       * - [Configure the parameters of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95667.html)
       * - [Configure the parameters of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97130.html)
       *
       * @param request ModifyParameterRequest
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameter(const Models::ModifyParameterRequest &request);

      /**
       * @summary Modifies an ApsaraDB RDS parameter template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request ModifyParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroupWithOptions(const Models::ModifyParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an ApsaraDB RDS parameter template.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Use a parameter template for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * - [Use a parameter template for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request ModifyParameterGroupRequest
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroup(const Models::ModifyParameterGroupRequest &request);

      /**
       * @summary Modifies the effective period in a scheduled node for parameter modification.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the feature documentation to fully understand the prerequisites and impacts of calling this operation.
       * - [Set instance parameters for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set instance parameters for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request ModifyParameterTimedScheduleTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterTimedScheduleTaskResponse
       */
      Models::ModifyParameterTimedScheduleTaskResponse modifyParameterTimedScheduleTaskWithOptions(const Models::ModifyParameterTimedScheduleTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the effective period in a scheduled node for parameter modification.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, carefully read the feature documentation to fully understand the prerequisites and impacts of calling this operation.
       * - [Set instance parameters for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96063.html)
       * - [Set instance parameters for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96751.html)
       *
       * @param request ModifyParameterTimedScheduleTaskRequest
       * @return ModifyParameterTimedScheduleTaskResponse
       */
      Models::ModifyParameterTimedScheduleTaskResponse modifyParameterTimedScheduleTask(const Models::ModifyParameterTimedScheduleTaskRequest &request);

      /**
       * @summary 修改部署集的名称和描述信息
       *
       * @param request ModifyRCDeploymentSetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDeploymentSetAttributeResponse
       */
      Models::ModifyRCDeploymentSetAttributeResponse modifyRCDeploymentSetAttributeWithOptions(const Models::ModifyRCDeploymentSetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改部署集的名称和描述信息
       *
       * @param request ModifyRCDeploymentSetAttributeRequest
       * @return ModifyRCDeploymentSetAttributeResponse
       */
      Models::ModifyRCDeploymentSetAttributeResponse modifyRCDeploymentSetAttribute(const Models::ModifyRCDeploymentSetAttributeRequest &request);

      /**
       * @summary Modifies the name, description, release behavior, automatic snapshot deletion behavior, automatic snapshot policy, performance burst settings, and other attributes of a block storage device.
       *
       * @description You can call this operation with the DiskId parameter to modify the name, description, release behavior, and other attributes of a block storage device.
       *
       * @param request ModifyRCDiskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskAttributeResponse
       */
      Models::ModifyRCDiskAttributeResponse modifyRCDiskAttributeWithOptions(const Models::ModifyRCDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, release behavior, automatic snapshot deletion behavior, automatic snapshot policy, performance burst settings, and other attributes of a block storage device.
       *
       * @description You can call this operation with the DiskId parameter to modify the name, description, release behavior, and other attributes of a block storage device.
       *
       * @param request ModifyRCDiskAttributeRequest
       * @return ModifyRCDiskAttributeResponse
       */
      Models::ModifyRCDiskAttributeResponse modifyRCDiskAttribute(const Models::ModifyRCDiskAttributeRequest &request);

      /**
       * @summary 修改RDS用户磁盘付费类型
       *
       * @param request ModifyRCDiskChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskChargeTypeResponse
       */
      Models::ModifyRCDiskChargeTypeResponse modifyRCDiskChargeTypeWithOptions(const Models::ModifyRCDiskChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS用户磁盘付费类型
       *
       * @param request ModifyRCDiskChargeTypeRequest
       * @return ModifyRCDiskChargeTypeResponse
       */
      Models::ModifyRCDiskChargeTypeResponse modifyRCDiskChargeType(const Models::ModifyRCDiskChargeTypeRequest &request);

      /**
       * @summary Changes the cloud disk type or performance level (PL) of an RDS Custom instance.
       *
       * @description >Notice: To minimize the impact of Upgrade/Downgrade operations on your business, perform this operation during off-peak hours.
       * When you invoke this operation, take note of the following items:
       * - ESSD cloud disks support upgrading and lowering performance levels (PLs), but you cannot decrease the quota to PL0.
       * - The ESSD cloud disk must be in the In_Use or Available state.
       * - If the ESSD cloud disk is mounted to an instance, the instance must be in the Running or Stopped state and cannot have an overdue payment or be expired.
       * - Because the performance level (PL) of an ESSD cloud disk is limited by its capacity, if you cannot upgrade the performance level (PL), expand the disk capacity and try again.
       *
       * @param request ModifyRCDiskSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskSpecResponse
       */
      Models::ModifyRCDiskSpecResponse modifyRCDiskSpecWithOptions(const Models::ModifyRCDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the cloud disk type or performance level (PL) of an RDS Custom instance.
       *
       * @description >Notice: To minimize the impact of Upgrade/Downgrade operations on your business, perform this operation during off-peak hours.
       * When you invoke this operation, take note of the following items:
       * - ESSD cloud disks support upgrading and lowering performance levels (PLs), but you cannot decrease the quota to PL0.
       * - The ESSD cloud disk must be in the In_Use or Available state.
       * - If the ESSD cloud disk is mounted to an instance, the instance must be in the Running or Stopped state and cannot have an overdue payment or be expired.
       * - Because the performance level (PL) of an ESSD cloud disk is limited by its capacity, if you cannot upgrade the performance level (PL), expand the disk capacity and try again.
       *
       * @param request ModifyRCDiskSpecRequest
       * @return ModifyRCDiskSpecResponse
       */
      Models::ModifyRCDiskSpecResponse modifyRCDiskSpec(const Models::ModifyRCDiskSpecRequest &request);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request ModifyRCElasticScalingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCElasticScalingResponse
       */
      Models::ModifyRCElasticScalingResponse modifyRCElasticScalingWithOptions(const Models::ModifyRCElasticScalingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS用户专属主机实例
       *
       * @param request ModifyRCElasticScalingRequest
       * @return ModifyRCElasticScalingResponse
       */
      Models::ModifyRCElasticScalingResponse modifyRCElasticScaling(const Models::ModifyRCElasticScalingRequest &request);

      /**
       * @summary Calls the ModifyRCInstance operation to upgrade or downgrade the instance type of an RDS Custom instance.
       *
       * @description Before you invoke this operation, make sure that you fully understand the billing methods, pricing, and refund rules for downgrading RDS Custom instances.
       * When you invoke this operation, take note of the following items:
       * - You cannot modify the instance type of an expired instance. Complete the renewal and try again.
       * - Only **Standard Edition cloud disk instances** support instance type changes.
       * - When you upgrade or downgrade the instance type, take note of the following items:
       *   - The instance must be in the **Running** or **Paused** (Stopped) state.
       *   - The price difference after you decrease the quota is refunded to your original payment method. Coupons that have been used are not refunded. The payer receives the refund.
       *
       * @param request ModifyRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceResponse
       */
      Models::ModifyRCInstanceResponse modifyRCInstanceWithOptions(const Models::ModifyRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyRCInstance operation to upgrade or downgrade the instance type of an RDS Custom instance.
       *
       * @description Before you invoke this operation, make sure that you fully understand the billing methods, pricing, and refund rules for downgrading RDS Custom instances.
       * When you invoke this operation, take note of the following items:
       * - You cannot modify the instance type of an expired instance. Complete the renewal and try again.
       * - Only **Standard Edition cloud disk instances** support instance type changes.
       * - When you upgrade or downgrade the instance type, take note of the following items:
       *   - The instance must be in the **Running** or **Paused** (Stopped) state.
       *   - The price difference after you decrease the quota is refunded to your original payment method. Coupons that have been used are not refunded. The payer receives the refund.
       *
       * @param request ModifyRCInstanceRequest
       * @return ModifyRCInstanceResponse
       */
      Models::ModifyRCInstanceResponse modifyRCInstance(const Models::ModifyRCInstanceRequest &request);

      /**
       * @summary 修改rds custom实例的部分属性
       *
       * @param tmpReq ModifyRCInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceAttributeResponse
       */
      Models::ModifyRCInstanceAttributeResponse modifyRCInstanceAttributeWithOptions(const Models::ModifyRCInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改rds custom实例的部分属性
       *
       * @param request ModifyRCInstanceAttributeRequest
       * @return ModifyRCInstanceAttributeResponse
       */
      Models::ModifyRCInstanceAttributeResponse modifyRCInstanceAttribute(const Models::ModifyRCInstanceAttributeRequest &request);

      /**
       * @summary Modifies the billing method of an RDS Custom instance or a cloud disk. You can use this operation to switch between pay-as-you-go instances and subscription instances.
       *
       * @description ### Precautions
       * - Before you call this operation, make sure that you fully understand the subscription and pay-as-you-go billing methods and pricing of RDS Custom.
       * - Make sure that the target instance is in the **Running** or **Stopped** state and that your account does not have an overdue payment.
       * - Make sure that the cloud disk is in the **In_use** state and that the billing method of the cloud disk has not been successfully changed within the last 15 minutes.
       * - After the billing method is changed, fees are automatically deducted by default. Make sure that your account balance is sufficient. Otherwise, an abnormal order is generated, and you can only void the order.
       * ### Before you begin
       * Refer to the corresponding feature documentation:
       * - [Change the billing method of an instance](https://help.aliyun.com/document_detail/2878542.html)
       * - [Change the billing method of a cloud disk](https://help.aliyun.com/document_detail/2878547.html)
       *
       * @param request ModifyRCInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceChargeTypeResponse
       */
      Models::ModifyRCInstanceChargeTypeResponse modifyRCInstanceChargeTypeWithOptions(const Models::ModifyRCInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the billing method of an RDS Custom instance or a cloud disk. You can use this operation to switch between pay-as-you-go instances and subscription instances.
       *
       * @description ### Precautions
       * - Before you call this operation, make sure that you fully understand the subscription and pay-as-you-go billing methods and pricing of RDS Custom.
       * - Make sure that the target instance is in the **Running** or **Stopped** state and that your account does not have an overdue payment.
       * - Make sure that the cloud disk is in the **In_use** state and that the billing method of the cloud disk has not been successfully changed within the last 15 minutes.
       * - After the billing method is changed, fees are automatically deducted by default. Make sure that your account balance is sufficient. Otherwise, an abnormal order is generated, and you can only void the order.
       * ### Before you begin
       * Refer to the corresponding feature documentation:
       * - [Change the billing method of an instance](https://help.aliyun.com/document_detail/2878542.html)
       * - [Change the billing method of a cloud disk](https://help.aliyun.com/document_detail/2878547.html)
       *
       * @param request ModifyRCInstanceChargeTypeRequest
       * @return ModifyRCInstanceChargeTypeResponse
       */
      Models::ModifyRCInstanceChargeTypeResponse modifyRCInstanceChargeType(const Models::ModifyRCInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the name of an RDS Custom instance.
       *
       * @param request ModifyRCInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceDescriptionResponse
       */
      Models::ModifyRCInstanceDescriptionResponse modifyRCInstanceDescriptionWithOptions(const Models::ModifyRCInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an RDS Custom instance.
       *
       * @param request ModifyRCInstanceDescriptionRequest
       * @return ModifyRCInstanceDescriptionResponse
       */
      Models::ModifyRCInstanceDescriptionResponse modifyRCInstanceDescription(const Models::ModifyRCInstanceDescriptionRequest &request);

      /**
       * @summary 修改RDS Custom实例密钥对
       *
       * @param request ModifyRCInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceKeyPairResponse
       */
      Models::ModifyRCInstanceKeyPairResponse modifyRCInstanceKeyPairWithOptions(const Models::ModifyRCInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS Custom实例密钥对
       *
       * @param request ModifyRCInstanceKeyPairRequest
       * @return ModifyRCInstanceKeyPairResponse
       */
      Models::ModifyRCInstanceKeyPairResponse modifyRCInstanceKeyPair(const Models::ModifyRCInstanceKeyPairRequest &request);

      /**
       * @summary 修改RDS Custom实例的公网配置
       *
       * @param request ModifyRCInstanceNetworkSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceNetworkSpecResponse
       */
      Models::ModifyRCInstanceNetworkSpecResponse modifyRCInstanceNetworkSpecWithOptions(const Models::ModifyRCInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RDS Custom实例的公网配置
       *
       * @param request ModifyRCInstanceNetworkSpecRequest
       * @return ModifyRCInstanceNetworkSpecResponse
       */
      Models::ModifyRCInstanceNetworkSpecResponse modifyRCInstanceNetworkSpec(const Models::ModifyRCInstanceNetworkSpecRequest &request);

      /**
       * @summary 修改RC实例安全组
       *
       * @param request ModifyRCInstanceVpcAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceVpcAttributeResponse
       */
      Models::ModifyRCInstanceVpcAttributeResponse modifyRCInstanceVpcAttributeWithOptions(const Models::ModifyRCInstanceVpcAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RC实例安全组
       *
       * @param request ModifyRCInstanceVpcAttributeRequest
       * @return ModifyRCInstanceVpcAttributeResponse
       */
      Models::ModifyRCInstanceVpcAttributeResponse modifyRCInstanceVpcAttribute(const Models::ModifyRCInstanceVpcAttributeRequest &request);

      /**
       * @summary 修改RC安全组规则
       *
       * @param request ModifyRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCSecurityGroupPermissionResponse
       */
      Models::ModifyRCSecurityGroupPermissionResponse modifyRCSecurityGroupPermissionWithOptions(const Models::ModifyRCSecurityGroupPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RC安全组规则
       *
       * @param request ModifyRCSecurityGroupPermissionRequest
       * @return ModifyRCSecurityGroupPermissionResponse
       */
      Models::ModifyRCSecurityGroupPermissionResponse modifyRCSecurityGroupPermission(const Models::ModifyRCSecurityGroupPermissionRequest &request);

      /**
       * @summary 修改RCVCluster
       *
       * @param tmpReq ModifyRCVClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCVClusterResponse
       */
      Models::ModifyRCVClusterResponse modifyRCVClusterWithOptions(const Models::ModifyRCVClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RCVCluster
       *
       * @param request ModifyRCVClusterRequest
       * @return ModifyRCVClusterResponse
       */
      Models::ModifyRCVClusterResponse modifyRCVCluster(const Models::ModifyRCVClusterRequest &request);

      /**
       * @summary Modifies the latency threshold and read weights of instances on a read/write splitting link.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS SQL Server
       * ### Before you begin
       * The instance must meet the following conditions when you invoke this operation. Otherwise, the operation fails:
       * * The MySQL instance uses a shared database proxy.
       * * Read/write splitting is enabled for the MySQL instance.
       * * The instance runs one of the following versions:
       *     * MySQL 5.7 high-availability series (local SSDs)
       *     * MySQL 5.6
       *     * SQL Server on RDS Cluster Edition
       *
       * @param request ModifyReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReadWriteSplittingConnectionResponse
       */
      Models::ModifyReadWriteSplittingConnectionResponse modifyReadWriteSplittingConnectionWithOptions(const Models::ModifyReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the latency threshold and read weights of instances on a read/write splitting link.
       *
       * @description ### Applicable engines
       * - RDS MySQL
       * - RDS SQL Server
       * ### Before you begin
       * The instance must meet the following conditions when you invoke this operation. Otherwise, the operation fails:
       * * The MySQL instance uses a shared database proxy.
       * * Read/write splitting is enabled for the MySQL instance.
       * * The instance runs one of the following versions:
       *     * MySQL 5.7 high-availability series (local SSDs)
       *     * MySQL 5.6
       *     * SQL Server on RDS Cluster Edition
       *
       * @param request ModifyReadWriteSplittingConnectionRequest
       * @return ModifyReadWriteSplittingConnectionResponse
       */
      Models::ModifyReadWriteSplittingConnectionResponse modifyReadWriteSplittingConnection(const Models::ModifyReadWriteSplittingConnectionRequest &request);

      /**
       * @summary Modifies the delayed replication time of an ApsaraDB RDS for MySQL read-only instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delayed replication of ApsaraDB RDS for MySQL read-only instances](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
       */
      Models::ModifyReadonlyInstanceDelayReplicationTimeResponse modifyReadonlyInstanceDelayReplicationTimeWithOptions(const Models::ModifyReadonlyInstanceDelayReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the delayed replication time of an ApsaraDB RDS for MySQL read-only instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delayed replication of ApsaraDB RDS for MySQL read-only instances](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
       * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
       */
      Models::ModifyReadonlyInstanceDelayReplicationTimeResponse modifyReadonlyInstanceDelayReplicationTime(const Models::ModifyReadonlyInstanceDelayReplicationTimeRequest &request);

      /**
       * @summary Moves an ApsaraDB RDS instance to a specified resource group.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Move resources across resource groups](https://help.aliyun.com/document_detail/94487.html)
       *
       * @param request ModifyResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroupWithOptions(const Models::ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an ApsaraDB RDS instance to a specified resource group.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Move resources across resource groups](https://help.aliyun.com/document_detail/94487.html)
       *
       * @param request ModifyResourceGroupRequest
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroup(const Models::ModifyResourceGroupRequest &request);

      /**
       * @summary Enables or disables the SQL Explorer (SQL Audit) feature for an instance. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it. Use the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation instead.
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicyWithOptions(const Models::ModifySQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the SQL Explorer (SQL Audit) feature for an instance. This operation is no longer maintained but can still be called.
       *
       * @description This operation is no longer maintained. You can still call this operation, but Alibaba Cloud no longer maintains it. Use the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation instead.
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicy(const Models::ModifySQLCollectorPolicyRequest &request);

      /**
       * @summary No longer maintained: can be invoked normally but is no longer maintained. Modifies the log retention period of SQL Explorer for an ApsaraDB RDS instance.
       *
       * @description This operation is no longer maintained: the operation can still be called normally, but Alibaba Cloud no longer maintains it. Use the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation instead.
       *
       * @param request ModifySQLCollectorRetentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorRetentionResponse
       */
      Models::ModifySQLCollectorRetentionResponse modifySQLCollectorRetentionWithOptions(const Models::ModifySQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary No longer maintained: can be invoked normally but is no longer maintained. Modifies the log retention period of SQL Explorer for an ApsaraDB RDS instance.
       *
       * @description This operation is no longer maintained: the operation can still be called normally, but Alibaba Cloud no longer maintains it. Use the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation instead.
       *
       * @param request ModifySQLCollectorRetentionRequest
       * @return ModifySQLCollectorRetentionResponse
       */
      Models::ModifySQLCollectorRetentionResponse modifySQLCollectorRetention(const Models::ModifySQLCollectorRetentionRequest &request);

      /**
       * @summary Modifies the association between a specified ApsaraDB RDS instance and ECS security groups.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * - [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * - [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(const Models::ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the association between a specified ApsaraDB RDS instance and ECS security groups.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * - [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * - [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(const Models::ModifySecurityGroupConfigurationRequest &request);

      /**
       * @summary Modifies the IP whitelist configuration of a specified ApsaraDB RDS instance. Three modification modes are supported: overwrite, append, and delete.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure an IP whitelist for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96118.html)
       * - [Configure an IP whitelist for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/43187.html)
       * - [Configure an IP whitelist for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/43186.html)
       * - [Configure an IP whitelist for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/90336.html)
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist configuration of a specified ApsaraDB RDS instance. Three modification modes are supported: overwrite, append, and delete.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Configure an IP whitelist for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96118.html)
       * - [Configure an IP whitelist for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/43187.html)
       * - [Configure an IP whitelist for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/43186.html)
       * - [Configure an IP whitelist for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/90336.html)
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary Modifies the information of a historical task in the task center.
       *
       * @param request ModifyTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfoWithOptions(const Models::ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a historical task in the task center.
       *
       * @param request ModifyTaskInfoRequest
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfo(const Models::ModifyTaskInfoRequest &request);

      /**
       * @summary Edits a whitelist template, including creating, modifying, or deleting a whitelist template.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request ModifyWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWhitelistTemplateResponse
       */
      Models::ModifyWhitelistTemplateResponse modifyWhitelistTemplateWithOptions(const Models::ModifyWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a whitelist template, including creating, modifying, or deleting a whitelist template.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       *
       * @param request ModifyWhitelistTemplateRequest
       * @return ModifyWhitelistTemplateResponse
       */
      Models::ModifyWhitelistTemplateResponse modifyWhitelistTemplate(const Models::ModifyWhitelistTemplateRequest &request);

      /**
       * @summary Performs a precheck for a delete node order.
       *
       * @param tmpReq PreCheckCreateOrderForDeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckCreateOrderForDeleteDBNodesResponse
       */
      Models::PreCheckCreateOrderForDeleteDBNodesResponse preCheckCreateOrderForDeleteDBNodesWithOptions(const Models::PreCheckCreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck for a delete node order.
       *
       * @param request PreCheckCreateOrderForDeleteDBNodesRequest
       * @return PreCheckCreateOrderForDeleteDBNodesResponse
       */
      Models::PreCheckCreateOrderForDeleteDBNodesResponse preCheckCreateOrderForDeleteDBNodes(const Models::PreCheckCreateOrderForDeleteDBNodesRequest &request);

      /**
       * @summary Checks whether an ApsaraDB RDS for PostgreSQL primary instance meets the prerequisites for creating a DuckDB-based analytical instance. For conditions that are not met, the operation returns the failure reasons and provides solutions or recommended target values.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * [DuckDB-based analytical instance](https://help.aliyun.com/document_detail/2977241.html)
       *
       * @param request PrecheckDuckDBDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckDuckDBDependencyResponse
       */
      Models::PrecheckDuckDBDependencyResponse precheckDuckDBDependencyWithOptions(const Models::PrecheckDuckDBDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether an ApsaraDB RDS for PostgreSQL primary instance meets the prerequisites for creating a DuckDB-based analytical instance. For conditions that are not met, the operation returns the failure reasons and provides solutions or recommended target values.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * [DuckDB-based analytical instance](https://help.aliyun.com/document_detail/2977241.html)
       *
       * @param request PrecheckDuckDBDependencyRequest
       * @return PrecheckDuckDBDependencyResponse
       */
      Models::PrecheckDuckDBDependencyResponse precheckDuckDBDependency(const Models::PrecheckDuckDBDependencyRequest &request);

      /**
       * @summary Clears the binary logs of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Description
       * ApsaraDB RDS instances have an automatic log backup upload mechanism. However, when the instance storage is insufficient, you can use this operation to manually upload log backups and release storage space in advance. After the upload, the system automatically clears duplicate binary log backups.
       * Calling this operation uploads binary log backups to OSS (for SQL Server, the transaction log is shrunk before the upload), and then clears the binary log backups to release storage space.
       * ### Precautions
       * - Uploading log backups does not affect data restoration.
       * - The released space is storage space, not backup storage space. Therefore, the backup storage usage is not reduced.
       * - The OSS to which log backups are uploaded is provided by ApsaraDB RDS. You do not need to purchase OSS, and you cannot access this OSS.
       *
       * @param request PurgeDBInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeDBInstanceLogResponse
       */
      Models::PurgeDBInstanceLogResponse purgeDBInstanceLogWithOptions(const Models::PurgeDBInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the binary logs of an ApsaraDB RDS instance.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Description
       * ApsaraDB RDS instances have an automatic log backup upload mechanism. However, when the instance storage is insufficient, you can use this operation to manually upload log backups and release storage space in advance. After the upload, the system automatically clears duplicate binary log backups.
       * Calling this operation uploads binary log backups to OSS (for SQL Server, the transaction log is shrunk before the upload), and then clears the binary log backups to release storage space.
       * ### Precautions
       * - Uploading log backups does not affect data restoration.
       * - The released space is storage space, not backup storage space. Therefore, the backup storage usage is not reduced.
       * - The OSS to which log backups are uploaded is provided by ApsaraDB RDS. You do not need to purchase OSS, and you cannot access this OSS.
       *
       * @param request PurgeDBInstanceLogRequest
       * @return PurgeDBInstanceLogResponse
       */
      Models::PurgeDBInstanceLogResponse purgeDBInstanceLog(const Models::PurgeDBInstanceLogRequest &request);

      /**
       * @summary Queries notifications for ApsaraDB RDS.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Description
       * ApsaraDB RDS notifications are displayed in a highlighted banner at the top of the ApsaraDB RDS console. Notifications include renewal reminders and instance creation failure alerts.
       * After you query notifications by calling this operation, you can call [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) to mark a notification as confirmed, which indicates that you have acknowledged the notification.
       *
       * @param request QueryNotifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNotifyResponse
       */
      Models::QueryNotifyResponse queryNotifyWithOptions(const Models::QueryNotifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notifications for ApsaraDB RDS.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * - RDS MariaDB
       * ### Description
       * ApsaraDB RDS notifications are displayed in a highlighted banner at the top of the ApsaraDB RDS console. Notifications include renewal reminders and instance creation failure alerts.
       * After you query notifications by calling this operation, you can call [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) to mark a notification as confirmed, which indicates that you have acknowledged the notification.
       *
       * @param request QueryNotifyRequest
       * @return QueryNotifyResponse
       */
      Models::QueryNotifyResponse queryNotify(const Models::QueryNotifyRequest &request);

      /**
       * @summary Queries the hot topics of the ApsaraDB RDS chatbot.
       *
       * @param request QueryRecommendByCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecommendByCodeResponse
       */
      Models::QueryRecommendByCodeResponse queryRecommendByCodeWithOptions(const Models::QueryRecommendByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hot topics of the ApsaraDB RDS chatbot.
       *
       * @param request QueryRecommendByCodeRequest
       * @return QueryRecommendByCodeResponse
       */
      Models::QueryRecommendByCodeResponse queryRecommendByCode(const Models::QueryRecommendByCodeRequest &request);

      /**
       * @summary 创建服务关联角色和开租
       *
       * @param request RdsCustomInitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RdsCustomInitResponse
       */
      Models::RdsCustomInitResponse rdsCustomInitWithOptions(const Models::RdsCustomInitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务关联角色和开租
       *
       * @param request RdsCustomInitRequest
       * @return RdsCustomInitResponse
       */
      Models::RdsCustomInitResponse rdsCustomInit(const Models::RdsCustomInitRequest &request);

      /**
       * @summary 重启RDS用户专属主机实例
       *
       * @param request RebootRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRCInstanceResponse
       */
      Models::RebootRCInstanceResponse rebootRCInstanceWithOptions(const Models::RebootRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启RDS用户专属主机实例
       *
       * @param request RebootRCInstanceRequest
       * @return RebootRCInstanceResponse
       */
      Models::RebootRCInstanceResponse rebootRCInstance(const Models::RebootRCInstanceRequest &request);

      /**
       * @summary 批量重启RC实例
       *
       * @param tmpReq RebootRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRCInstancesResponse
       */
      Models::RebootRCInstancesResponse rebootRCInstancesWithOptions(const Models::RebootRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量重启RC实例
       *
       * @param request RebootRCInstancesRequest
       * @return RebootRCInstancesResponse
       */
      Models::RebootRCInstancesResponse rebootRCInstances(const Models::RebootRCInstancesRequest &request);

      /**
       * @summary Rebuilds a secondary instance in a dedicated cluster by calling the RebuildDBInstance operation.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches by cluster. You can create multiple dedicated clusters in a region. Each dedicated cluster contains multiple hosts, and each host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request RebuildDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildDBInstanceResponse
       */
      Models::RebuildDBInstanceResponse rebuildDBInstanceWithOptions(const Models::RebuildDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds a secondary instance in a dedicated cluster by calling the RebuildDBInstance operation.
       *
       * @description The dedicated cluster feature allows you to manage instances in batches by cluster. You can create multiple dedicated clusters in a region. Each dedicated cluster contains multiple hosts, and each host contains multiple instances. For more information, see [Overview of dedicated clusters](https://help.aliyun.com/document_detail/141455.html).
       *
       * @param request RebuildDBInstanceRequest
       * @return RebuildDBInstanceResponse
       */
      Models::RebuildDBInstanceResponse rebuildDBInstance(const Models::RebuildDBInstanceRequest &request);

      /**
       * @summary Rebuilds the data synchronization link for a disaster recovery instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request RebuildReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildReplicationLinkResponse
       */
      Models::RebuildReplicationLinkResponse rebuildReplicationLinkWithOptions(const Models::RebuildReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds the data synchronization link for a disaster recovery instance.
       *
       * @description ### Applicable engine
       * - RDS PostgreSQL
       *
       * @param request RebuildReplicationLinkRequest
       * @return RebuildReplicationLinkResponse
       */
      Models::RebuildReplicationLinkResponse rebuildReplicationLink(const Models::RebuildReplicationLinkRequest &request);

      /**
       * @summary Performs an instance switchover between an ApsaraDB RDS for MySQL primary instance and a disaster recovery instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL.
       *
       * @param request ReceiveDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReceiveDBInstanceResponse
       */
      Models::ReceiveDBInstanceResponse receiveDBInstanceWithOptions(const Models::ReceiveDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs an instance switchover between an ApsaraDB RDS for MySQL primary instance and a disaster recovery instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL.
       *
       * @param request ReceiveDBInstanceRequest
       * @return ReceiveDBInstanceResponse
       */
      Models::ReceiveDBInstanceResponse receiveDBInstance(const Models::ReceiveDBInstanceRequest &request);

      /**
       * @summary Restores RDS SQL Server backup data to an existing instance or a new instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server (instances running SQL Server 2012 or later) 
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Restore SQL Server data](https://help.aliyun.com/document_detail/95722.html)
       *
       * @param request RecoveryDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoveryDBInstanceResponse
       */
      Models::RecoveryDBInstanceResponse recoveryDBInstanceWithOptions(const Models::RecoveryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores RDS SQL Server backup data to an existing instance or a new instance.
       *
       * @description ### Applicable engine
       * RDS SQL Server (instances running SQL Server 2012 or later) 
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Restore SQL Server data](https://help.aliyun.com/document_detail/95722.html)
       *
       * @param request RecoveryDBInstanceRequest
       * @return RecoveryDBInstanceResponse
       */
      Models::RecoveryDBInstanceResponse recoveryDBInstance(const Models::RecoveryDBInstanceRequest &request);

      /**
       * @summary 重新部署实例
       *
       * @param request RedeployRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployRCInstanceResponse
       */
      Models::RedeployRCInstanceResponse redeployRCInstanceWithOptions(const Models::RedeployRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新部署实例
       *
       * @param request RedeployRCInstanceRequest
       * @return RedeployRCInstanceResponse
       */
      Models::RedeployRCInstanceResponse redeployRCInstance(const Models::RedeployRCInstanceRequest &request);

      /**
       * @summary Releases the public endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * - [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * - [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * - [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * - [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstanceConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceConnectionResponse
       */
      Models::ReleaseInstanceConnectionResponse releaseInstanceConnectionWithOptions(const Models::ReleaseInstanceConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * - [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * - [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * - [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * - [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstanceConnectionRequest
       * @return ReleaseInstanceConnectionResponse
       */
      Models::ReleaseInstanceConnectionResponse releaseInstanceConnection(const Models::ReleaseInstanceConnectionRequest &request);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * - [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * - [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * - [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * - [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * - [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * - [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Releases a read/write splitting endpoint.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Before you begin
       * Before you call this operation, make sure that the instance meets the following requirements. Otherwise, the operation fails:
       * * The MySQL instance uses a shared database proxy.
       * * Read/write splitting is enabled for the instance.
       * * The instance runs one of the following versions:
       *     * MySQL 5.7 on RDS High-availability Edition with local SSDs
       *     * MySQL 5.6
       *     * SQL Server Cluster Edition
       *
       * @param request ReleaseReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseReadWriteSplittingConnectionResponse
       */
      Models::ReleaseReadWriteSplittingConnectionResponse releaseReadWriteSplittingConnectionWithOptions(const Models::ReleaseReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a read/write splitting endpoint.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Before you begin
       * Before you call this operation, make sure that the instance meets the following requirements. Otherwise, the operation fails:
       * * The MySQL instance uses a shared database proxy.
       * * Read/write splitting is enabled for the instance.
       * * The instance runs one of the following versions:
       *     * MySQL 5.7 on RDS High-availability Edition with local SSDs
       *     * MySQL 5.6
       *     * SQL Server Cluster Edition
       *
       * @param request ReleaseReadWriteSplittingConnectionRequest
       * @return ReleaseReadWriteSplittingConnectionResponse
       */
      Models::ReleaseReadWriteSplittingConnectionResponse releaseReadWriteSplittingConnection(const Models::ReleaseReadWriteSplittingConnectionRequest &request);

      /**
       * @summary Removes instances from a deployment set.
       *
       * @description Removing instances from a deployment set is a non-disruptive operation and does not cause instance restarts.
       *
       * @param request RemoveRCInstancesFromDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRCInstancesFromDeploymentSetResponse
       */
      Models::RemoveRCInstancesFromDeploymentSetResponse removeRCInstancesFromDeploymentSetWithOptions(const Models::RemoveRCInstancesFromDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes instances from a deployment set.
       *
       * @description Removing instances from a deployment set is a non-disruptive operation and does not cause instance restarts.
       *
       * @param request RemoveRCInstancesFromDeploymentSetRequest
       * @return RemoveRCInstancesFromDeploymentSetResponse
       */
      Models::RemoveRCInstancesFromDeploymentSetResponse removeRCInstancesFromDeploymentSet(const Models::RemoveRCInstancesFromDeploymentSetRequest &request);

      /**
       * @summary Unbinds tags from an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * You can unbind up to 10 tags at a time.
       * * If all instances bound to a tag are unbound, the tag is automatically deleted.
       * * If you specify only a tag key (TagKey) without a tag value (TagValue) when unbinding tags, all tags that match the tag key are unbound.
       * * You must specify at least one key-value pair or a single tag key.
       *
       * @param request RemoveTagsFromResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsFromResourceResponse
       */
      Models::RemoveTagsFromResourceResponse removeTagsFromResourceWithOptions(const Models::RemoveTagsFromResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * You can unbind up to 10 tags at a time.
       * * If all instances bound to a tag are unbound, the tag is automatically deleted.
       * * If you specify only a tag key (TagKey) without a tag value (TagValue) when unbinding tags, all tags that match the tag key are unbound.
       * * You must specify at least one key-value pair or a single tag key.
       *
       * @param request RemoveTagsFromResourceRequest
       * @return RemoveTagsFromResourceResponse
       */
      Models::RemoveTagsFromResourceResponse removeTagsFromResource(const Models::RemoveTagsFromResourceRequest &request);

      /**
       * @summary Manually renews a subscription ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       * - [Manually renew an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96050.html)
       * - [Manually renew an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96741.html)
       * - [Manually renew an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95637.html)
       * - [Manually renew an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97122.html)
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually renews a subscription ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       * - [Manually renew an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96050.html)
       * - [Manually renew an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96741.html)
       * - [Manually renew an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95637.html)
       * - [Manually renew an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97122.html)
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Renews a subscription RDS Custom instance.
       *
       * @param request RenewRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewRCInstanceResponse
       */
      Models::RenewRCInstanceResponse renewRCInstanceWithOptions(const Models::RenewRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription RDS Custom instance.
       *
       * @param request RenewRCInstanceRequest
       * @return RenewRCInstanceResponse
       */
      Models::RenewRCInstanceResponse renewRCInstance(const Models::RenewRCInstanceRequest &request);

      /**
       * @summary Reinstalls the operating system of an RDS Custom instance.
       *
       * @description - The instance must be in the Stopped state.
       * - Reinstalling the operating system deletes all data on the original system cloud disk. Proceed with caution.
       *
       * @param request ReplaceRCInstanceSystemDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceRCInstanceSystemDiskResponse
       */
      Models::ReplaceRCInstanceSystemDiskResponse replaceRCInstanceSystemDiskWithOptions(const Models::ReplaceRCInstanceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinstalls the operating system of an RDS Custom instance.
       *
       * @description - The instance must be in the Stopped state.
       * - Reinstalling the operating system deletes all data on the original system cloud disk. Proceed with caution.
       *
       * @param request ReplaceRCInstanceSystemDiskRequest
       * @return ReplaceRCInstanceSystemDiskResponse
       */
      Models::ReplaceRCInstanceSystemDiskResponse replaceRCInstanceSystemDisk(const Models::ReplaceRCInstanceSystemDiskRequest &request);

      /**
       * @summary Resets the permissions of a privileged account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Reset the permissions of a privileged account](https://help.aliyun.com/document_detail/140724.html)
       *
       * @param request ResetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccountWithOptions(const Models::ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the permissions of a privileged account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Reset the permissions of a privileged account](https://help.aliyun.com/document_detail/140724.html)
       *
       * @param request ResetAccountRequest
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccount(const Models::ResetAccountRequest &request);

      /**
       * @summary Resets the password of a database account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Reset the password of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96100.html)
       * - [Reset the password of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96814.html)
       * - [Reset the password of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95691.html)
       * - [Reset the password of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97133.html)
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account.
       *
       * @description ### Applicable engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Reset the password of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96100.html)
       * - [Reset the password of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96814.html)
       * - [Reset the password of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95691.html)
       * - [Reset the password of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97133.html)
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Expands the instance storage of an RDS Custom instance.
       *
       * @description Instances with local disks do not support storage space changes.
       *
       * @param request ResizeRCInstanceDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeRCInstanceDiskResponse
       */
      Models::ResizeRCInstanceDiskResponse resizeRCInstanceDiskWithOptions(const Models::ResizeRCInstanceDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the instance storage of an RDS Custom instance.
       *
       * @description Instances with local disks do not support storage space changes.
       *
       * @param request ResizeRCInstanceDiskRequest
       * @return ResizeRCInstanceDiskResponse
       */
      Models::ResizeRCInstanceDiskResponse resizeRCInstanceDisk(const Models::ResizeRCInstanceDiskRequest &request);

      /**
       * @summary Manually restarts an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Restart an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96051.html)
       * - [Restart an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96798.html)
       * - [Restart an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95656.html)
       * - [Restart an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97472.html)
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually restarts an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Restart an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96051.html)
       * - [Restart an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96798.html)
       * - [Restart an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95656.html)
       * - [Restart an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97472.html)
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Restores data to an existing instance across regions.
       *
       * @description > Before the restoration, you can call the CheckCreateDdrDBInstance operation to check whether an ApsaraDB RDS instance can be restored across regions by using a cross-region backup set.
       * ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region restoration for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120875.html)
       *
       * @param request RestoreDdrTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreDdrTableResponse
       */
      Models::RestoreDdrTableResponse restoreDdrTableWithOptions(const Models::RestoreDdrTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores data to an existing instance across regions.
       *
       * @description > Before the restoration, you can call the CheckCreateDdrDBInstance operation to check whether an ApsaraDB RDS instance can be restored across regions by using a cross-region backup set.
       * ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Cross-region backup for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120824.html)
       * - [Cross-region restoration for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/120875.html)
       *
       * @param request RestoreDdrTableRequest
       * @return RestoreDdrTableResponse
       */
      Models::RestoreDdrTableResponse restoreDdrTable(const Models::RestoreDdrTableRequest &request);

      /**
       * @summary Restores specific databases or tables of an ApsaraDB RDS instance to the original instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html)
       * - [Restore specific databases of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/613672.html)
       *
       * @param request RestoreTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTableWithOptions(const Models::RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores specific databases or tables of an ApsaraDB RDS instance to the original instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html)
       * - [Restore specific databases of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/613672.html)
       *
       * @param request RestoreTableRequest
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTable(const Models::RestoreTableRequest &request);

      /**
       * @summary Revokes the access permissions of an account on a database.
       *
       * @description ### Supported DPI engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Before you begin
       * * The instance status is Running.
       * * The database is in the Running state.
       * ### Precautions
       * * The revoked permissions include SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, REFERENCES, INDEX, ALTER, CREATE TEMPORARY TABLES, LOCK TABLES, EXECUTE, CREATE VIEW, SHOW VIEW, CREATE ROUTINE, ALTER ROUTINE, EVENT, and TRIGGER.
       * * This operation does not support SQL Server 2017 Cluster Edition or PostgreSQL instances.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilegeWithOptions(const Models::RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the access permissions of an account on a database.
       *
       * @description ### Supported DPI engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Before you begin
       * * The instance status is Running.
       * * The database is in the Running state.
       * ### Precautions
       * * The revoked permissions include SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, REFERENCES, INDEX, ALTER, CREATE TEMPORARY TABLES, LOCK TABLES, EXECUTE, CREATE VIEW, SHOW VIEW, CREATE ROUTINE, ALTER ROUTINE, EVENT, and TRIGGER.
       * * This operation does not support SQL Server 2017 Cluster Edition or PostgreSQL instances.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilege(const Models::RevokeAccountPrivilegeRequest &request);

      /**
       * @summary Revokes the access permissions of an Alibaba Cloud service account on an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Grant permissions to the service account of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96102.html)
       * - [Grant permissions to the service account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146887.html)
       * - [Grant permissions to the service account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request RevokeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermissionWithOptions(const Models::RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the access permissions of an Alibaba Cloud service account on an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Grant permissions to the service account of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96102.html)
       * - [Grant permissions to the service account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146887.html)
       * - [Grant permissions to the service account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request RevokeOperatorPermissionRequest
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermission(const Models::RevokeOperatorPermissionRequest &request);

      /**
       * @summary 删除RC安全组规则
       *
       * @param tmpReq RevokeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRCSecurityGroupPermissionResponse
       */
      Models::RevokeRCSecurityGroupPermissionResponse revokeRCSecurityGroupPermissionWithOptions(const Models::RevokeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RC安全组规则
       *
       * @param request RevokeRCSecurityGroupPermissionRequest
       * @return RevokeRCSecurityGroupPermissionResponse
       */
      Models::RevokeRCSecurityGroupPermissionResponse revokeRCSecurityGroupPermission(const Models::RevokeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary 创建并执行云助手命令
       *
       * @param tmpReq RunRCCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunRCCommandResponse
       */
      Models::RunRCCommandResponse runRCCommandWithOptions(const Models::RunRCCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建并执行云助手命令
       *
       * @param request RunRCCommandRequest
       * @return RunRCCommandResponse
       */
      Models::RunRCCommandResponse runRCCommand(const Models::RunRCCommandRequest &request);

      /**
       * @summary Creates one or more RDS Custom instances by calling the RunRCInstances operation. You can specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId.
       *
       * @description - Before creating an RDS Custom instance, submit a ticket to request that your Alibaba Cloud account be added to the whitelist.
       * - Only subscription RDS Custom instances can be created.
       * - Supported regions are Beijing, Shanghai, Shenzhen, and Hangzhou.
       *
       * @param tmpReq RunRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunRCInstancesResponse
       */
      Models::RunRCInstancesResponse runRCInstancesWithOptions(const Models::RunRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more RDS Custom instances by calling the RunRCInstances operation. You can specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId.
       *
       * @description - Before creating an RDS Custom instance, submit a ticket to request that your Alibaba Cloud account be added to the whitelist.
       * - Only subscription RDS Custom instances can be created.
       * - Supported regions are Beijing, Shanghai, Shenzhen, and Hangzhou.
       *
       * @param request RunRCInstancesRequest
       * @return RunRCInstancesResponse
       */
      Models::RunRCInstancesResponse runRCInstances(const Models::RunRCInstancesRequest &request);

      /**
       * @summary 共享部署集
       *
       * @param request ShareRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShareRCDeploymentSetResponse
       */
      Models::ShareRCDeploymentSetResponse shareRCDeploymentSetWithOptions(const Models::ShareRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 共享部署集
       *
       * @param request ShareRCDeploymentSetRequest
       * @return ShareRCDeploymentSetResponse
       */
      Models::ShareRCDeploymentSetResponse shareRCDeploymentSet(const Models::ShareRCDeploymentSetRequest &request);

      /**
       * @summary Starts a suspended ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - [Start an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/427093.html)
       * - [Start an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/452314.html)
       * - [Start an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       * <props="intl">
       * [Start an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstanceWithOptions(const Models::StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a suspended ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china">
       * - [Start an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/427093.html)
       * - [Start an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/452314.html)
       * - [Start an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       * <props="intl">
       * [Start an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StartDBInstanceRequest
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstance(const Models::StartDBInstanceRequest &request);

      /**
       * @summary Starts an RDS Custom instance that is in the Stopped state. After the operation is called, the instance enters the Starting state and then transitions to the Running state.
       *
       * @param request StartRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRCInstanceResponse
       */
      Models::StartRCInstanceResponse startRCInstanceWithOptions(const Models::StartRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an RDS Custom instance that is in the Stopped state. After the operation is called, the instance enters the Starting state and then transitions to the Running state.
       *
       * @param request StartRCInstanceRequest
       * @return StartRCInstanceResponse
       */
      Models::StartRCInstanceResponse startRCInstance(const Models::StartRCInstanceRequest &request);

      /**
       * @summary 批量启动RC实例
       *
       * @param tmpReq StartRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRCInstancesResponse
       */
      Models::StartRCInstancesResponse startRCInstancesWithOptions(const Models::StartRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量启动RC实例
       *
       * @param request StartRCInstancesRequest
       * @return StartRCInstancesResponse
       */
      Models::StartRCInstancesResponse startRCInstances(const Models::StartRCInstancesRequest &request);

      /**
       * @summary Pauses an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china"> 
       * - [Pause an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/427093.html)
       * - [Pause an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/452314.html)
       * - [Pause an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       * <props="intl">
       * [Pause an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StopDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstanceWithOptions(const Models::StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * <props="china"> 
       * - [Pause an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/427093.html)
       * - [Pause an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/452314.html)
       * - [Pause an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       * <props="intl">
       * [Pause an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StopDBInstanceRequest
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstance(const Models::StopDBInstanceRequest &request);

      /**
       * @summary Stops a running RDS Custom instance. After the API is called, the instance transitions from the Stopping state to the Stopped state.
       *
       * @param request StopRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRCInstanceResponse
       */
      Models::StopRCInstanceResponse stopRCInstanceWithOptions(const Models::StopRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running RDS Custom instance. After the API is called, the instance transitions from the Stopping state to the Stopped state.
       *
       * @param request StopRCInstanceRequest
       * @return StopRCInstanceResponse
       */
      Models::StopRCInstanceResponse stopRCInstance(const Models::StopRCInstanceRequest &request);

      /**
       * @summary 批量停止RC实例
       *
       * @param tmpReq StopRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRCInstancesResponse
       */
      Models::StopRCInstancesResponse stopRCInstancesWithOptions(const Models::StopRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量停止RC实例
       *
       * @param request StopRCInstancesRequest
       * @return StopRCInstancesResponse
       */
      Models::StopRCInstancesResponse stopRCInstances(const Models::StopRCInstancesRequest &request);

      /**
       * @summary Performs a manual primary/secondary switchover for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Primary/secondary switchover for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96054.html)
       * - [Primary/secondary switchover for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96747.html)
       * - [Primary/secondary switchover for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95659.html)
       * - [Primary/secondary switchover for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request SwitchDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(const Models::SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a manual primary/secondary switchover for an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Primary/secondary switchover for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/96054.html)
       * - [Primary/secondary switchover for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/96747.html)
       * - [Primary/secondary switchover for ApsaraDB RDS for SQL Server](https://help.aliyun.com/document_detail/95659.html)
       * - [Primary/secondary switchover for ApsaraDB RDS for MariaDB](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request SwitchDBInstanceHARequest
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHA(const Models::SwitchDBInstanceHARequest &request);

      /**
       * @summary Switches the internal and public endpoints of a classic network instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Before you begin
       * - The instance has only one of the following addresses: an internal endpoint or a public endpoint.
       * - The instance is in the Running state.
       * - The number of switchovers within the last 24 hours is less than 20.
       * - The network type of the instance is classic network.
       * ### Precautions
       * After the switchover, the endpoint changes. You must update the endpoint in your code and restart the application.
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetTypeWithOptions(const Models::SwitchDBInstanceNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the internal and public endpoints of a classic network instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for SQL Server
       * ### Before you begin
       * - The instance has only one of the following addresses: an internal endpoint or a public endpoint.
       * - The instance is in the Running state.
       * - The number of switchovers within the last 24 hours is less than 20.
       * - The network type of the instance is classic network.
       * ### Precautions
       * After the switchover, the endpoint changes. You must update the endpoint in your code and restart the application.
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetType(const Models::SwitchDBInstanceNetTypeRequest &request);

      /**
       * @summary Switches the virtual private cloud (VPC) and vSwitch of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Switch the VPC and vSwitch of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/137567.html)
       * - [Switch the vSwitch of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146885.html)
       * - [Switch the VPC and vSwitch of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/347675.html)
       *
       * @param request SwitchDBInstanceVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceVpcResponse
       */
      Models::SwitchDBInstanceVpcResponse switchDBInstanceVpcWithOptions(const Models::SwitchDBInstanceVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the virtual private cloud (VPC) and vSwitch of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Switch the VPC and vSwitch of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/137567.html)
       * - [Switch the vSwitch of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146885.html)
       * - [Switch the VPC and vSwitch of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/347675.html)
       *
       * @param request SwitchDBInstanceVpcRequest
       * @return SwitchDBInstanceVpcResponse
       */
      Models::SwitchDBInstanceVpcResponse switchDBInstanceVpc(const Models::SwitchDBInstanceVpcRequest &request);

      /**
       * @summary Switches traffic for zero-downtime major engine version upgrades of ApsaraDB RDS for PostgreSQL instances.
       *
       * @description Applicable engine:
       * * RDS PostgreSQL
       *
       * @param request SwitchOverMajorVersionUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchOverMajorVersionUpgradeResponse
       */
      Models::SwitchOverMajorVersionUpgradeResponse switchOverMajorVersionUpgradeWithOptions(const Models::SwitchOverMajorVersionUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches traffic for zero-downtime major engine version upgrades of ApsaraDB RDS for PostgreSQL instances.
       *
       * @description Applicable engine:
       * * RDS PostgreSQL
       *
       * @param request SwitchOverMajorVersionUpgradeRequest
       * @return SwitchOverMajorVersionUpgradeResponse
       */
      Models::SwitchOverMajorVersionUpgradeResponse switchOverMajorVersionUpgrade(const Models::SwitchOverMajorVersionUpgradeRequest &request);

      /**
       * @summary Switches the replication task of an ApsaraDB RDS for SQL Server primary instance to a disaster recovery instance.
       *
       * @description ### Supported engine
       * RDS SQL Server.
       *
       * @param request SwitchReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchReplicationLinkResponse
       */
      Models::SwitchReplicationLinkResponse switchReplicationLinkWithOptions(const Models::SwitchReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the replication task of an ApsaraDB RDS for SQL Server primary instance to a disaster recovery instance.
       *
       * @description ### Supported engine
       * RDS SQL Server.
       *
       * @param request SwitchReplicationLinkRequest
       * @return SwitchReplicationLinkResponse
       */
      Models::SwitchReplicationLinkResponse switchReplicationLink(const Models::SwitchReplicationLinkRequest &request);

      /**
       * @summary 同步密钥对
       *
       * @param request SyncRCKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRCKeyPairResponse
       */
      Models::SyncRCKeyPairResponse syncRCKeyPairWithOptions(const Models::SyncRCKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步密钥对
       *
       * @param request SyncRCKeyPairRequest
       * @return SyncRCKeyPairResponse
       */
      Models::SyncRCKeyPairResponse syncRCKeyPair(const Models::SyncRCKeyPairRequest &request);

      /**
       * @summary 同步RDS Custom的安全组
       *
       * @param request SyncRCSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRCSecurityGroupResponse
       */
      Models::SyncRCSecurityGroupResponse syncRCSecurityGroupWithOptions(const Models::SyncRCSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步RDS Custom的安全组
       *
       * @param request SyncRCSecurityGroupRequest
       * @return SyncRCSecurityGroupResponse
       */
      Models::SyncRCSecurityGroupResponse syncRCSecurityGroup(const Models::SyncRCSecurityGroupRequest &request);

      /**
       * @summary Creates and binds tags to a specified ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Create tags for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96149.html)
       * - [Create tags for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96777.html)
       * - [Create tags for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95726.html)
       * - [Create tags for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97152.html)
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to a specified ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation before you proceed.
       * - [Create tags for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96149.html)
       * - [Create tags for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96777.html)
       * - [Create tags for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95726.html)
       * - [Create tags for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97152.html)
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Terminates an ongoing backup migration task for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       *
       * @param request TerminateMigrateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateMigrateTaskResponse
       */
      Models::TerminateMigrateTaskResponse terminateMigrateTaskWithOptions(const Models::TerminateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an ongoing backup migration task for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### Supported engine
       * - RDS SQL Server
       *
       * @param request TerminateMigrateTaskRequest
       * @return TerminateMigrateTaskResponse
       */
      Models::TerminateMigrateTaskResponse terminateMigrateTask(const Models::TerminateMigrateTaskRequest &request);

      /**
       * @summary Changes the billing method of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       * - [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html) and [Change the billing method of an ApsaraDB RDS for MySQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/161875.html)
       * - [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html) and [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162756.html)
       * - [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html) and [Change the billing method of an ApsaraDB RDS for SQL Server instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162755.html)
       * - [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html) and [Change the billing method of an ApsaraDB RDS for MariaDB instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/169252.html)
       *
       * @param request TransformDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformDBInstancePayTypeResponse
       */
      Models::TransformDBInstancePayTypeResponse transformDBInstancePayTypeWithOptions(const Models::TransformDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Related documentation
       * >Warning: This API operation involves fees. Read the related documentation carefully before you perform this operation.
       * - [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html) and [Change the billing method of an ApsaraDB RDS for MySQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/161875.html)
       * - [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html) and [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162756.html)
       * - [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html) and [Change the billing method of an ApsaraDB RDS for SQL Server instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162755.html)
       * - [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html) and [Change the billing method of an ApsaraDB RDS for MariaDB instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/169252.html)
       *
       * @param request TransformDBInstancePayTypeRequest
       * @return TransformDBInstancePayTypeResponse
       */
      Models::TransformDBInstancePayTypeResponse transformDBInstancePayType(const Models::TransformDBInstancePayTypeRequest &request);

      /**
       * @summary 解绑RDS Custom实例的弹性公网
       *
       * @param request UnassociateEipAddressWithRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressWithRCInstanceResponse
       */
      Models::UnassociateEipAddressWithRCInstanceResponse unassociateEipAddressWithRCInstanceWithOptions(const Models::UnassociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑RDS Custom实例的弹性公网
       *
       * @param request UnassociateEipAddressWithRCInstanceRequest
       * @return UnassociateEipAddressWithRCInstanceResponse
       */
      Models::UnassociateEipAddressWithRCInstanceResponse unassociateEipAddressWithRCInstance(const Models::UnassociateEipAddressWithRCInstanceRequest &request);

      /**
       * @summary Unlocks a database account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Lock an account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request UnlockAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockAccountResponse
       */
      Models::UnlockAccountResponse unlockAccountWithOptions(const Models::UnlockAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a database account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Lock an account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request UnlockAccountRequest
       * @return UnlockAccountResponse
       */
      Models::UnlockAccountResponse unlockAccount(const Models::UnlockAccountRequest &request);

      /**
       * @summary Unbinds tags from a specified ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * You can unbind up to 20 tags at a time.
       * * If a tag is unbound from an instance and is not bound to any other instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from a specified ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * - ApsaraDB RDS for SQL Server
       * - ApsaraDB RDS for MariaDB
       * ### Precautions
       * * You can unbind up to 20 tags at a time.
       * * If a tag is unbound from an instance and is not bound to any other instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a replication channel for a native replication instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [RDS MySQL native replication instance](https://help.aliyun.com/document_detail/2856487.html)
       *
       * @param request UpdateDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstanceReplicationResponse
       */
      Models::UpdateDBInstanceReplicationResponse updateDBInstanceReplicationWithOptions(const Models::UpdateDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a replication channel for a native replication instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [RDS MySQL native replication instance](https://help.aliyun.com/document_detail/2856487.html)
       *
       * @param request UpdateDBInstanceReplicationRequest
       * @return UpdateDBInstanceReplicationResponse
       */
      Models::UpdateDBInstanceReplicationResponse updateDBInstanceReplication(const Models::UpdateDBInstanceReplicationRequest &request);

      /**
       * @summary Upgrades a specified extension in a destination database.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request UpdatePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostgresExtensionsResponse
       */
      Models::UpdatePostgresExtensionsResponse updatePostgresExtensionsWithOptions(const Models::UpdatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a specified extension in a destination database.
       *
       * @description <props="china">You can join the RDS PostgreSQL extension exchange DingTalk group (103525002795) to consult, communicate, provide feedback, and obtain more information about extensions.
       * ### Applicable engine
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation to fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request UpdatePostgresExtensionsRequest
       * @return UpdatePostgresExtensionsResponse
       */
      Models::UpdatePostgresExtensionsResponse updatePostgresExtensions(const Models::UpdatePostgresExtensionsRequest &request);

      /**
       * @summary Modifies the description and retention period of a user backup.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related feature documentation
       * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud. For more information, see [Migrate the full data of a self-managed MySQL 5.7 or 8.0 database to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * >Notice: Before you call this operation, carefully read the feature documentation to fully understand the prerequisites and impacts of this operation.
       *
       * @param request UpdateUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserBackupFileResponse
       */
      Models::UpdateUserBackupFileResponse updateUserBackupFileWithOptions(const Models::UpdateUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description and retention period of a user backup.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related feature documentation
       * A user backup is a full backup of a self-managed MySQL database. You can restore a user backup to the cloud. For more information, see [Migrate the full data of a self-managed MySQL 5.7 or 8.0 database to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * >Notice: Before you call this operation, carefully read the feature documentation to fully understand the prerequisites and impacts of this operation.
       *
       * @param request UpdateUserBackupFileRequest
       * @return UpdateUserBackupFileResponse
       */
      Models::UpdateUserBackupFileResponse updateUserBackupFile(const Models::UpdateUserBackupFileRequest &request);

      /**
       * @summary Upgrades the major engine version of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Upgrade the database engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96058.html)
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(const Models::UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the major engine version of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for MySQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Upgrade the database engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96058.html)
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(const Models::UpgradeDBInstanceEngineVersionRequest &request);

      /**
       * @summary Upgrades the minor engine version of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Upgrade the minor engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * - [Upgrade the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       * - [Upgrade the minor engine version of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/213582.html)
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(const Models::UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor engine version of an ApsaraDB RDS instance.
       *
       * @description ### Supported engines
       * - RDS MySQL
       * - RDS PostgreSQL
       * - RDS SQL Server
       * ### Related documentation
       * >Notice: Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Upgrade the minor engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * - [Upgrade the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       * - [Upgrade the minor engine version of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/213582.html)
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(const Models::UpgradeDBInstanceKernelVersionRequest &request);

      /**
       * @summary Initiates a major engine version upgrade task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * This API operation involves fees. Carefully read the related documentation to fully understand the fees, prerequisites, and impacts before you proceed.
       * [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       *
       * @param request UpgradeDBInstanceMajorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceMajorVersionResponse
       */
      Models::UpgradeDBInstanceMajorVersionResponse upgradeDBInstanceMajorVersionWithOptions(const Models::UpgradeDBInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a major engine version upgrade task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Applicable engine
       * ApsaraDB RDS for PostgreSQL
       * ### Related documentation
       * This API operation involves fees. Carefully read the related documentation to fully understand the fees, prerequisites, and impacts before you proceed.
       * [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       *
       * @param request UpgradeDBInstanceMajorVersionRequest
       * @return UpgradeDBInstanceMajorVersionResponse
       */
      Models::UpgradeDBInstanceMajorVersionResponse upgradeDBInstanceMajorVersion(const Models::UpgradeDBInstanceMajorVersionRequest &request);

      /**
       * @summary Performs a pre-upgrade check before a major engine version upgrade for ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instances.
       *
       * @description ### Applicable engines
       * RDS MySQL
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Major engine version upgrade check report for RDS MySQL](https://help.aliyun.com/document_detail/2794383.html)
       * - [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/2879540.html)
       *
       * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceMajorVersionPrecheckResponse
       */
      Models::UpgradeDBInstanceMajorVersionPrecheckResponse upgradeDBInstanceMajorVersionPrecheckWithOptions(const Models::UpgradeDBInstanceMajorVersionPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a pre-upgrade check before a major engine version upgrade for ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instances.
       *
       * @description ### Applicable engines
       * RDS MySQL
       * RDS PostgreSQL
       * ### Related documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Major engine version upgrade check report for RDS MySQL](https://help.aliyun.com/document_detail/2794383.html)
       * - [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/2879540.html)
       *
       * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
       * @return UpgradeDBInstanceMajorVersionPrecheckResponse
       */
      Models::UpgradeDBInstanceMajorVersionPrecheckResponse upgradeDBInstanceMajorVersionPrecheck(const Models::UpgradeDBInstanceMajorVersionPrecheckRequest &request);

      /**
       * @summary Upgrades the minor engine version of the database proxy.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Upgrade the minor engine version of the database proxy for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/197465.html)
       * - [Upgrade the minor engine version of the database proxy for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418469.html)
       *
       * @param request UpgradeDBProxyInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBProxyInstanceKernelVersionResponse
       */
      Models::UpgradeDBProxyInstanceKernelVersionResponse upgradeDBProxyInstanceKernelVersionWithOptions(const Models::UpgradeDBProxyInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor engine version of the database proxy.
       *
       * @description ### Supported engines
       * - ApsaraDB RDS for MySQL
       * - ApsaraDB RDS for PostgreSQL
       * ### Related feature documentation
       * >Notice: Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * - [Upgrade the minor engine version of the database proxy for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/197465.html)
       * - [Upgrade the minor engine version of the database proxy for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418469.html)
       *
       * @param request UpgradeDBProxyInstanceKernelVersionRequest
       * @return UpgradeDBProxyInstanceKernelVersionResponse
       */
      Models::UpgradeDBProxyInstanceKernelVersionResponse upgradeDBProxyInstanceKernelVersion(const Models::UpgradeDBProxyInstanceKernelVersionRequest &request);

      /**
       * @summary Performs a precheck for a data import task of an ApsaraDB RDS for MySQL native replication instance.
       *
       * @description Performs a precheck for a data import task of an ApsaraDB RDS for MySQL native replication instance.
       *
       * @param request ValidateImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateImportTaskResponse
       */
      Models::ValidateImportTaskResponse validateImportTaskWithOptions(const Models::ValidateImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck for a data import task of an ApsaraDB RDS for MySQL native replication instance.
       *
       * @description Performs a precheck for a data import task of an ApsaraDB RDS for MySQL native replication instance.
       *
       * @param request ValidateImportTaskRequest
       * @return ValidateImportTaskResponse
       */
      Models::ValidateImportTaskResponse validateImportTask(const Models::ValidateImportTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
