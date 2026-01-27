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
       * @summary Accepts the default operation for a system event in the Inquiring state and authorizes the system to perform the default operation.
       *
       * @param request AcceptRCInquiredSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptRCInquiredSystemEventResponse
       */
      Models::AcceptRCInquiredSystemEventResponse acceptRCInquiredSystemEventWithOptions(const Models::AcceptRCInquiredSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts the default operation for a system event in the Inquiring state and authorizes the system to perform the default operation.
       *
       * @param request AcceptRCInquiredSystemEventRequest
       * @return AcceptRCInquiredSystemEventResponse
       */
      Models::AcceptRCInquiredSystemEventResponse acceptRCInquiredSystemEvent(const Models::AcceptRCInquiredSystemEventRequest &request);

      /**
       * @summary Switches workloads over from the source PostgreSQL instance to the destination ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cloud migration feature](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request ActivateMigrationTargetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateMigrationTargetInstanceResponse
       */
      Models::ActivateMigrationTargetInstanceResponse activateMigrationTargetInstanceWithOptions(const Models::ActivateMigrationTargetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches workloads over from the source PostgreSQL instance to the destination ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cloud migration feature](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request ActivateMigrationTargetInstanceRequest
       * @return ActivateMigrationTargetInstanceResponse
       */
      Models::ActivateMigrationTargetInstanceResponse activateMigrationTargetInstance(const Models::ActivateMigrationTargetInstanceRequest &request);

      /**
       * @summary Adds tags to an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Usage notes
       * *   Each tag consists of a tag key and a tag value. The tag key is required, and the tag value is optional.
       * *   The tag key and tag value cannot start with aliyun.
       * *   The tag key and tag value are not case-sensitive.
       * *   The maximum length of a tag key is 64 characters, and the maximum length of a tag value is 128 characters.
       * *   A maximum of 10 tags can be added to each instance. Each tag that is added to the same instance must have a unique tag key. If you add a new tag to the instance and the key of the new tag is the same as that of an existing tag, the new tag overwrites the existing tag.
       *
       * @param request AddTagsToResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsToResourceResponse
       */
      Models::AddTagsToResourceResponse addTagsToResourceWithOptions(const Models::AddTagsToResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Usage notes
       * *   Each tag consists of a tag key and a tag value. The tag key is required, and the tag value is optional.
       * *   The tag key and tag value cannot start with aliyun.
       * *   The tag key and tag value are not case-sensitive.
       * *   The maximum length of a tag key is 64 characters, and the maximum length of a tag value is 128 characters.
       * *   A maximum of 10 tags can be added to each instance. Each tag that is added to the same instance must have a unique tag key. If you add a new tag to the instance and the key of the new tag is the same as that of an existing tag, the new tag overwrites the existing tag.
       *
       * @param request AddTagsToResourceRequest
       * @return AddTagsToResourceResponse
       */
      Models::AddTagsToResourceResponse addTagsToResource(const Models::AddTagsToResourceRequest &request);

      /**
       * @summary Apply for a public endpoint for an ApsaraDB RDS instance
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Apply for a public endpoint for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * *   [Apply for a public endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * *   [Apply for a public endpoint for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * *   [Apply for a public endpoint for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply for a public endpoint for an ApsaraDB RDS instance
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Apply for a public endpoint for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * *   [Apply for a public endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * *   [Apply for a public endpoint for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * *   [Apply for a public endpoint for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary Applies for a read-only routing endpoint for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Feature description
       * If read-only instances are attached to a primary ApsaraDB RDS for SQL Server instance, you can call this operation to apply for a unified read-only routing endpoint for the primary instance. After you apply for a read-only routing endpoint for a primary instance, the existing endpoints of the primary instance and its read-only instances remain valid. In addition, you can still apply for internal and public endpoints.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The instance is in the Running state.
       * *   Read-only instances are attached to the primary instance.
       * *   The instance does not have an ongoing Data Transmission Service (DTS) migration task.
       * *   The instance runs one of the following database versions and RDS editions:
       *     *   SQL Server on RDS Cluster Edition
       *     *   MySQL 5.7 on RDS High-availability Edition (with local disks)
       *     *   MySQL 5.6
       *
       * @param request AllocateReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateReadWriteSplittingConnectionResponse
       */
      Models::AllocateReadWriteSplittingConnectionResponse allocateReadWriteSplittingConnectionWithOptions(const Models::AllocateReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a read-only routing endpoint for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Feature description
       * If read-only instances are attached to a primary ApsaraDB RDS for SQL Server instance, you can call this operation to apply for a unified read-only routing endpoint for the primary instance. After you apply for a read-only routing endpoint for a primary instance, the existing endpoints of the primary instance and its read-only instances remain valid. In addition, you can still apply for internal and public endpoints.
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The instance is in the Running state.
       * *   Read-only instances are attached to the primary instance.
       * *   The instance does not have an ongoing Data Transmission Service (DTS) migration task.
       * *   The instance runs one of the following database versions and RDS editions:
       *     *   SQL Server on RDS Cluster Edition
       *     *   MySQL 5.7 on RDS High-availability Edition (with local disks)
       *     *   MySQL 5.6
       *
       * @param request AllocateReadWriteSplittingConnectionRequest
       * @return AllocateReadWriteSplittingConnectionResponse
       */
      Models::AllocateReadWriteSplittingConnectionResponse allocateReadWriteSplittingConnection(const Models::AllocateReadWriteSplittingConnectionRequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with an RDS Custom instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * ### [](#)Precautions
       * If the RDS Custom instance uses a public IP address, the public IP address is automatically released after you associate an EIP with the instance.
       *
       * @param request AssociateEipAddressWithRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEipAddressWithRCInstanceResponse
       */
      Models::AssociateEipAddressWithRCInstanceResponse associateEipAddressWithRCInstanceWithOptions(const Models::AssociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with an RDS Custom instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * ### [](#)Precautions
       * If the RDS Custom instance uses a public IP address, the public IP address is automatically released after you associate an EIP with the instance.
       *
       * @param request AssociateEipAddressWithRCInstanceRequest
       * @return AssociateEipAddressWithRCInstanceResponse
       */
      Models::AssociateEipAddressWithRCInstanceResponse associateEipAddressWithRCInstance(const Models::AssociateEipAddressWithRCInstanceRequest &request);

      /**
       * @summary Attaches a pay-as-you-go data disk or a system disk to an RDS Custom instance. The instance and the disk must reside in the same zone.
       *
       * @param request AttachRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachRCDiskResponse
       */
      Models::AttachRCDiskResponse attachRCDiskWithOptions(const Models::AttachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a pay-as-you-go data disk or a system disk to an RDS Custom instance. The instance and the disk must reside in the same zone.
       *
       * @param request AttachRCDiskRequest
       * @return AttachRCDiskResponse
       */
      Models::AttachRCDiskResponse attachRCDisk(const Models::AttachRCDiskRequest &request);

      /**
       * @summary Adds RDS Custom nodes to a Container Service for Kubernetes (ACK) cluster.
       *
       * @param tmpReq AttachRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachRCInstancesResponse
       */
      Models::AttachRCInstancesResponse attachRCInstancesWithOptions(const Models::AttachRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds RDS Custom nodes to a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request AttachRCInstancesRequest
       * @return AttachRCInstancesResponse
       */
      Models::AttachRCInstancesResponse attachRCInstances(const Models::AttachRCInstancesRequest &request);

      /**
       * @summary Associates a whitelist template with an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstanceWithOptions(const Models::AttachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a whitelist template with an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request AttachWhitelistTemplateToInstanceRequest
       * @return AttachWhitelistTemplateToInstanceResponse
       */
      Models::AttachWhitelistTemplateToInstanceResponse attachWhitelistTemplateToInstance(const Models::AttachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary Adds rules to the specified security group.
       *
       * @param tmpReq AuthorizeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeRCSecurityGroupPermissionResponse
       */
      Models::AuthorizeRCSecurityGroupPermissionResponse authorizeRCSecurityGroupPermissionWithOptions(const Models::AuthorizeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds rules to the specified security group.
       *
       * @param request AuthorizeRCSecurityGroupPermissionRequest
       * @return AuthorizeRCSecurityGroupPermissionResponse
       */
      Models::AuthorizeRCSecurityGroupPermissionResponse authorizeRCSecurityGroupPermission(const Models::AuthorizeRCSecurityGroupPermissionRequest &request);

      /**
       * @summary Queries system-assigned read weights.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Feature description
       * When the [read/write splitting](https://help.aliyun.com/document_detail/51073.html) feature is enabled, this operation is used to calculate system-assigned read weights. For more information about custom read weights, see [DescribeDBInstanceNetInfo](https://help.aliyun.com/document_detail/610423.html).
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   If the instance runs MySQL, the instance uses a shared proxy.
       * *   The instance runs one of the following MySQL versions and RDS editions:
       *     *   MySQL 5.7 on RDS High-availability Edition (with local disks)
       *     *   MySQL 5.6
       *     *   SQL Server on RDS Cluster Edition
       *
       * @param request CalculateDBInstanceWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CalculateDBInstanceWeightResponse
       */
      Models::CalculateDBInstanceWeightResponse calculateDBInstanceWeightWithOptions(const Models::CalculateDBInstanceWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries system-assigned read weights.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Feature description
       * When the [read/write splitting](https://help.aliyun.com/document_detail/51073.html) feature is enabled, this operation is used to calculate system-assigned read weights. For more information about custom read weights, see [DescribeDBInstanceNetInfo](https://help.aliyun.com/document_detail/610423.html).
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   If the instance runs MySQL, the instance uses a shared proxy.
       * *   The instance runs one of the following MySQL versions and RDS editions:
       *     *   MySQL 5.7 on RDS High-availability Edition (with local disks)
       *     *   MySQL 5.6
       *     *   SQL Server on RDS Cluster Edition
       *
       * @param request CalculateDBInstanceWeightRequest
       * @return CalculateDBInstanceWeightResponse
       */
      Models::CalculateDBInstanceWeightResponse calculateDBInstanceWeight(const Models::CalculateDBInstanceWeightRequest &request);

      /**
       * @summary Cancels O\\&M tasks that are not started.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Scheduled events for ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/104183.html)
       * *   [Scheduled events for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/104452.html)
       * *   [Scheduled events for ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/104451.html)
       * *   [Scheduled events for ApsaraDB RDS for MariaDB instances](https://help.aliyun.com/document_detail/104454.html)
       * ### [](#)Usage notes
       * Tasks cannot be canceled in the following situations:
       * *   The allowCancel parameter is set to 0.
       * *   The current time is later than the task start time.
       * *   The status of the task is not set to 3. The value 3 specifies that the task is waiting to be executed.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O\\&M tasks that are not started.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Scheduled events for ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/104183.html)
       * *   [Scheduled events for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/104452.html)
       * *   [Scheduled events for ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/104451.html)
       * *   [Scheduled events for ApsaraDB RDS for MariaDB instances](https://help.aliyun.com/document_detail/104454.html)
       * ### [](#)Usage notes
       * Tasks cannot be canceled in the following situations:
       * *   The allowCancel parameter is set to 0.
       * *   The current time is later than the task start time.
       * *   The status of the task is not set to 3. The value 3 specifies that the task is waiting to be executed.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Checks whether the username of the account that you want to create on an instance is available.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request CheckAccountNameAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountNameAvailableResponse
       */
      Models::CheckAccountNameAvailableResponse checkAccountNameAvailableWithOptions(const Models::CheckAccountNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the username of the account that you want to create on an instance is available.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request CheckAccountNameAvailableRequest
       * @return CheckAccountNameAvailableResponse
       */
      Models::CheckAccountNameAvailableResponse checkAccountNameAvailable(const Models::CheckAccountNameAvailableRequest &request);

      /**
       * @summary Checks permissions that are granted on an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks permissions that are granted on an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary Queries whether an instance can be restored by using a cross-region backup set.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * >  If your ApsaraDB RDS for PostgreSQL instance uses the new architecture and is created after October 10, 2022, this feature is not supported for the RDS instance. For more information, see [[Notice\\] SLR authorization is required to create an ApsaraDB RDS for PostgreSQL instance from October 10, 2022](~~452313~~).
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html) and [Restore the data of an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120875.html)
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html) and [Restore the data of an ApsaraDB RDS for PostgreSQL across regions](https://help.aliyun.com/document_detail/206662.html)
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html) and [Restore the data of an ApsaraDB RDS for SQL Server across regions](https://help.aliyun.com/document_detail/187924.html)
       *
       * @param request CheckCreateDdrDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCreateDdrDBInstanceResponse
       */
      Models::CheckCreateDdrDBInstanceResponse checkCreateDdrDBInstanceWithOptions(const Models::CheckCreateDdrDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an instance can be restored by using a cross-region backup set.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * >  If your ApsaraDB RDS for PostgreSQL instance uses the new architecture and is created after October 10, 2022, this feature is not supported for the RDS instance. For more information, see [[Notice\\] SLR authorization is required to create an ApsaraDB RDS for PostgreSQL instance from October 10, 2022](~~452313~~).
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html) and [Restore the data of an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120875.html)
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html) and [Restore the data of an ApsaraDB RDS for PostgreSQL across regions](https://help.aliyun.com/document_detail/206662.html)
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html) and [Restore the data of an ApsaraDB RDS for SQL Server across regions](https://help.aliyun.com/document_detail/187924.html)
       *
       * @param request CheckCreateDdrDBInstanceRequest
       * @return CheckCreateDdrDBInstanceResponse
       */
      Models::CheckCreateDdrDBInstanceResponse checkCreateDdrDBInstance(const Models::CheckCreateDdrDBInstanceRequest &request);

      /**
       * @summary Checks whether a database name is unique and conforms to the naming conventions on an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request CheckDBNameAvailableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDBNameAvailableResponse
       */
      Models::CheckDBNameAvailableResponse checkDBNameAvailableWithOptions(const Models::CheckDBNameAvailableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a database name is unique and conforms to the naming conventions on an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request CheckDBNameAvailableRequest
       * @return CheckDBNameAvailableResponse
       */
      Models::CheckDBNameAvailableResponse checkDBNameAvailable(const Models::CheckDBNameAvailableRequest &request);

      /**
       * @summary You can call the CheckInstanceExist operation to query whether an ApsaraDB RDS instance exists.
       *
       * @param request CheckInstanceExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceExistResponse
       */
      Models::CheckInstanceExistResponse checkInstanceExistWithOptions(const Models::CheckInstanceExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CheckInstanceExist operation to query whether an ApsaraDB RDS instance exists.
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
       * @summary Checks whether a service-linked role (SLR) is created.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a service-linked role (SLR) is created.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Restores the data of an original instance to a new instance. The new instance is called a cloned instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Restore data of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96147.html)
       * *   [Restore data of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96776.html)
       * *   [Restore data of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95722.html)
       * *   [Restore data of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97151.html)
       *
       * @param tmpReq CloneDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstanceWithOptions(const Models::CloneDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores the data of an original instance to a new instance. The new instance is called a cloned instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Restore data of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96147.html)
       * *   [Restore data of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96776.html)
       * *   [Restore data of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95722.html)
       * *   [Restore data of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97151.html)
       *
       * @param request CloneDBInstanceRequest
       * @return CloneDBInstanceResponse
       */
      Models::CloneDBInstanceResponse cloneDBInstance(const Models::CloneDBInstanceRequest &request);

      /**
       * @summary Replicates a parameter template to the current region or another region.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CloneParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneParameterGroupResponse
       */
      Models::CloneParameterGroupResponse cloneParameterGroupWithOptions(const Models::CloneParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replicates a parameter template to the current region or another region.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CloneParameterGroupRequest
       * @return CloneParameterGroupResponse
       */
      Models::CloneParameterGroupResponse cloneParameterGroup(const Models::CloneParameterGroupRequest &request);

      /**
       * @summary Marks the notifications of an instance within your Alibaba Cloud account as confirmed.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Feature description
       * After you call the [QueryNotify](https://help.aliyun.com/document_detail/610443.html) operation to query notifications for an instance, you can call this operation to mark the notifications as confirmed.
       *
       * @param tmpReq ConfirmNotifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNotifyResponse
       */
      Models::ConfirmNotifyResponse confirmNotifyWithOptions(const Models::ConfirmNotifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks the notifications of an instance within your Alibaba Cloud account as confirmed.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Feature description
       * After you call the [QueryNotify](https://help.aliyun.com/document_detail/610443.html) operation to query notifications for an instance, you can call this operation to mark the notifications as confirmed.
       *
       * @param request ConfirmNotifyRequest
       * @return ConfirmNotifyResponse
       */
      Models::ConfirmNotifyResponse confirmNotify(const Models::ConfirmNotifyRequest &request);

      /**
       * @summary Replicates the databases of an instance that runs SQL Server 2008 R2 to another instance. This operation is phased out.
       *
       * @description This operation is phased out.
       *
       * @param request CopyDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDatabaseResponse
       */
      Models::CopyDatabaseResponse copyDatabaseWithOptions(const Models::CopyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replicates the databases of an instance that runs SQL Server 2008 R2 to another instance. This operation is phased out.
       *
       * @description This operation is phased out.
       *
       * @param request CopyDatabaseRequest
       * @return CopyDatabaseResponse
       */
      Models::CopyDatabaseResponse copyDatabase(const Models::CopyDatabaseRequest &request);

      /**
       * @summary Replicates databases between RDS SQL Server instances.
       *
       * @description ### Supported database engines
       * RDS SQL Server
       * ### References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Replicate databases between ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95702.html)
       *
       * @param request CopyDatabaseBetweenInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyDatabaseBetweenInstancesResponse
       */
      Models::CopyDatabaseBetweenInstancesResponse copyDatabaseBetweenInstancesWithOptions(const Models::CopyDatabaseBetweenInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replicates databases between RDS SQL Server instances.
       *
       * @description ### Supported database engines
       * RDS SQL Server
       * ### References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Replicate databases between ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95702.html)
       *
       * @param request CopyDatabaseBetweenInstancesRequest
       * @return CopyDatabaseBetweenInstancesResponse
       */
      Models::CopyDatabaseBetweenInstancesResponse copyDatabaseBetweenInstances(const Models::CopyDatabaseBetweenInstancesRequest &request);

      /**
       * @summary Creates a database account.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Create an account on an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96089.html)
       * *   [Create an account on an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96753.html)
       * *   [Create an account on an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95810.html)
       * *   [Create an account on an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97132.html)
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Create an account on an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96089.html)
       * *   [Create an account on an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96753.html)
       * *   [Create an account on an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95810.html)
       * *   [Create an account on an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97132.html)
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a backup file for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Feature description
       * This operation uses the backup feature of ApsaraDB RDS to create a backup set. You can also call an operation of Database Backup (DBS) to create a backup set. For more information, see [List of operations by function](https://help.aliyun.com/document_detail/2402073.html).
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The instance is in the Running state.
       * *   The instance does not have ongoing backup tasks.
       * *   The number of backup sets that can be created for an instance per day cannot exceed 20.
       * ### [](#)References
       * *   [Use the data backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/378074.html)
       * *   [Use the data backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * *   [Use the data backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * *   [Use the data backup feature for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup file for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Feature description
       * This operation uses the backup feature of ApsaraDB RDS to create a backup set. You can also call an operation of Database Backup (DBS) to create a backup set. For more information, see [List of operations by function](https://help.aliyun.com/document_detail/2402073.html).
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The instance is in the Running state.
       * *   The instance does not have ongoing backup tasks.
       * *   The number of backup sets that can be created for an instance per day cannot exceed 20.
       * ### [](#)References
       * *   [Use the data backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/378074.html)
       * *   [Use the data backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * *   [Use the data backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * *   [Use the data backup feature for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates an assessment task for cloud migration to an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cloud migration feature](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationPrecheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMigrationPrecheckTaskResponse
       */
      Models::CreateCloudMigrationPrecheckTaskResponse createCloudMigrationPrecheckTaskWithOptions(const Models::CreateCloudMigrationPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an assessment task for cloud migration to an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cloud migration feature](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationPrecheckTaskRequest
       * @return CreateCloudMigrationPrecheckTaskResponse
       */
      Models::CreateCloudMigrationPrecheckTaskResponse createCloudMigrationPrecheckTask(const Models::CreateCloudMigrationPrecheckTaskRequest &request);

      /**
       * @summary Creates a cloud migration task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cloud migration feature](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMigrationTaskResponse
       */
      Models::CreateCloudMigrationTaskResponse createCloudMigrationTaskWithOptions(const Models::CreateCloudMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud migration task for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cloud migration feature](https://help.aliyun.com/document_detail/365562.html)
       *
       * @param request CreateCloudMigrationTaskRequest
       * @return CreateCloudMigrationTaskResponse
       */
      Models::CreateCloudMigrationTaskResponse createCloudMigrationTask(const Models::CreateCloudMigrationTaskRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics. If an error message appears when you call this operation, you can search for the error message to view the cause of the error.
       * *   [Create an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/148036.html).
       * *   [Create a serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html).
       * *   [Create an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
       * *   [Create a serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
       * *   [Create an ApsaraDB RDS for PostgreSQL instance for which Babelfish is enabled](https://help.aliyun.com/document_detail/428615.html)
       * *   [Create an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
       * *   [Create a serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
       * *   [Create an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics. If an error message appears when you call this operation, you can search for the error message to view the cause of the error.
       * *   [Create an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/148036.html).
       * *   [Create a serverless ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/412231.html).
       * *   [Create an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/148038.html)
       * *   [Create a serverless ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/607753.html)
       * *   [Create an ApsaraDB RDS for PostgreSQL instance for which Babelfish is enabled](https://help.aliyun.com/document_detail/428615.html)
       * *   [Create an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/148037.html)
       * *   [Create a serverless ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/603465.html)
       * *   [Create an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/148040.html)
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates an endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Create a read-only endpoint for a cluster](https://help.aliyun.com/document_detail/464132.html)
       *
       * @param tmpReq CreateDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceEndpointResponse
       */
      Models::CreateDBInstanceEndpointResponse createDBInstanceEndpointWithOptions(const Models::CreateDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Create a read-only endpoint for a cluster](https://help.aliyun.com/document_detail/464132.html)
       *
       * @param request CreateDBInstanceEndpointRequest
       * @return CreateDBInstanceEndpointResponse
       */
      Models::CreateDBInstanceEndpointResponse createDBInstanceEndpoint(const Models::CreateDBInstanceEndpointRequest &request);

      /**
       * @summary Creates a public endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       * ### [](#)Precautions
       * *   You can create a public endpoint of an endpoint type only when no public endpoint is created for this endpoint type.
       * *   The node weights and other configurations are the same as those of the internal endpoint of this endpoint type. Each type of endpoint can contain an internal endpoint and a public endpoint.
       *
       * @param request CreateDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceEndpointAddressResponse
       */
      Models::CreateDBInstanceEndpointAddressResponse createDBInstanceEndpointAddressWithOptions(const Models::CreateDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       * ### [](#)Precautions
       * *   You can create a public endpoint of an endpoint type only when no public endpoint is created for this endpoint type.
       * *   The node weights and other configurations are the same as those of the internal endpoint of this endpoint type. Each type of endpoint can contain an internal endpoint and a public endpoint.
       *
       * @param request CreateDBInstanceEndpointAddressRequest
       * @return CreateDBInstanceEndpointAddressResponse
       */
      Models::CreateDBInstanceEndpointAddressResponse createDBInstanceEndpointAddress(const Models::CreateDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Rebuilds an instance from the recycle bin.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### References
       * > : Fees are generated if the call is successful. Before you call this operation, carefully read the following documentation:
       * *   [Manage ApsaraDB RDS for MySQL instances in the recycle bin](https://help.aliyun.com/document_detail/96065.html)
       * *   [Manage ApsaraDB RDS for PostgreSQL instances in the recycle bin](https://help.aliyun.com/document_detail/96752.html)
       * *   [Manage ApsaraDB RDS for SQL Server instances in the recycle bin](https://help.aliyun.com/document_detail/95669.html)
       * *   [Manage ApsaraDB RDS for MariaDB instances in the recycle bin](https://help.aliyun.com/document_detail/97131.html)
       *
       * @param request CreateDBInstanceForRebuildRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceForRebuildResponse
       */
      Models::CreateDBInstanceForRebuildResponse createDBInstanceForRebuildWithOptions(const Models::CreateDBInstanceForRebuildRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds an instance from the recycle bin.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### References
       * > : Fees are generated if the call is successful. Before you call this operation, carefully read the following documentation:
       * *   [Manage ApsaraDB RDS for MySQL instances in the recycle bin](https://help.aliyun.com/document_detail/96065.html)
       * *   [Manage ApsaraDB RDS for PostgreSQL instances in the recycle bin](https://help.aliyun.com/document_detail/96752.html)
       * *   [Manage ApsaraDB RDS for SQL Server instances in the recycle bin](https://help.aliyun.com/document_detail/95669.html)
       * *   [Manage ApsaraDB RDS for MariaDB instances in the recycle bin](https://help.aliyun.com/document_detail/97131.html)
       *
       * @param request CreateDBInstanceForRebuildRequest
       * @return CreateDBInstanceForRebuildResponse
       */
      Models::CreateDBInstanceForRebuildResponse createDBInstanceForRebuild(const Models::CreateDBInstanceForRebuildRequest &request);

      /**
       * @summary Adds a security group rule to an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request CreateDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceSecurityGroupRuleResponse
       */
      Models::CreateDBInstanceSecurityGroupRuleResponse createDBInstanceSecurityGroupRuleWithOptions(const Models::CreateDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a security group rule to an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request CreateDBInstanceSecurityGroupRuleRequest
       * @return CreateDBInstanceSecurityGroupRuleResponse
       */
      Models::CreateDBInstanceSecurityGroupRuleResponse createDBInstanceSecurityGroupRule(const Models::CreateDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Adds a node to an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance that runs RDS Cluster Edition. An RDS instance that runs RDS Cluster Edition is referred to as an RDS cluster.
       *
       * @description ### Supported database engines
       * MySQL
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Add a node to an ApsaraDB RDS for MySQL cluster](https://help.aliyun.com/document_detail/464129.html)
       *
       * @param tmpReq CreateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodesWithOptions(const Models::CreateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a node to an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance that runs RDS Cluster Edition. An RDS instance that runs RDS Cluster Edition is referred to as an RDS cluster.
       *
       * @description ### Supported database engines
       * MySQL
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Add a node to an ApsaraDB RDS for MySQL cluster](https://help.aliyun.com/document_detail/464129.html)
       *
       * @param request CreateDBNodesRequest
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodes(const Models::CreateDBNodesRequest &request);

      /**
       * @summary Creates the endpoint that is used to connect to the dedicated proxy of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure the dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * *   [Configure the dedicated proxy endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request CreateDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBProxyEndpointAddressResponse
       */
      Models::CreateDBProxyEndpointAddressResponse createDBProxyEndpointAddressWithOptions(const Models::CreateDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the endpoint that is used to connect to the dedicated proxy of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure the dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * *   [Configure the dedicated proxy endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request CreateDBProxyEndpointAddressRequest
       * @return CreateDBProxyEndpointAddressResponse
       */
      Models::CreateDBProxyEndpointAddressResponse createDBProxyEndpointAddress(const Models::CreateDBProxyEndpointAddressRequest &request);

      /**
       * @summary Creates a database in an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Create a database in an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96105.html)
       * *   [Create a database in an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96758.html)
       * *   [Create a database in an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95698.html)
       * *   [Create a database in an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97136.html)
       *
       * @param request CreateDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database in an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Create a database in an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96105.html)
       * *   [Create a database in an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96758.html)
       * *   [Create a database in an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95698.html)
       * *   [Create a database in an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97136.html)
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary Restores data to a new instance across regions.
       *
       * @description >  Before restoration, you can call the CheckCreateDdrDBInstance operation to check whether a cross-region backup set can be used for cross-region restoration.
       * ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request CreateDdrInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDdrInstanceResponse
       */
      Models::CreateDdrInstanceResponse createDdrInstanceWithOptions(const Models::CreateDdrInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores data to a new instance across regions.
       *
       * @description >  Before restoration, you can call the CheckCreateDdrDBInstance operation to check whether a cross-region backup set can be used for cross-region restoration.
       * ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request CreateDdrInstanceRequest
       * @return CreateDdrInstanceResponse
       */
      Models::CreateDdrInstanceResponse createDdrInstance(const Models::CreateDdrInstanceRequest &request);

      /**
       * @summary Creates an ApsaraDB RDS global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request CreateGADInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGADInstanceResponse
       */
      Models::CreateGADInstanceResponse createGADInstanceWithOptions(const Models::CreateGADInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB RDS global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request CreateGADInstanceRequest
       * @return CreateGADInstanceResponse
       */
      Models::CreateGADInstanceResponse createGADInstance(const Models::CreateGADInstanceRequest &request);

      /**
       * @summary Adds nodes to an ApsaraDB RDS global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Add or remove unit nodes](https://help.aliyun.com/document_detail/331851.html)
       *
       * @param request CreateGadInstanceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGadInstanceMemberResponse
       */
      Models::CreateGadInstanceMemberResponse createGadInstanceMemberWithOptions(const Models::CreateGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds nodes to an ApsaraDB RDS global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Add or remove unit nodes](https://help.aliyun.com/document_detail/331851.html)
       *
       * @param request CreateGadInstanceMemberRequest
       * @return CreateGadInstanceMemberResponse
       */
      Models::CreateGadInstanceMemberResponse createGadInstanceMember(const Models::CreateGadInstanceMemberRequest &request);

      /**
       * @summary 创建全密态规则
       *
       * @param tmpReq CreateMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMaskingRulesResponse
       */
      Models::CreateMaskingRulesResponse createMaskingRulesWithOptions(const Models::CreateMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建全密态规则
       *
       * @param request CreateMaskingRulesRequest
       * @return CreateMaskingRulesResponse
       */
      Models::CreateMaskingRulesResponse createMaskingRules(const Models::CreateMaskingRulesRequest &request);

      /**
       * @summary Creates a migration task to restore backup files from an Object Storage Service (OSS) bucket to an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)Limits
       * Data migration across Alibaba Cloud accounts is not supported. For example, backup files in an Object Storage Service (OSS) bucket within Alibaba Cloud Account A cannot be migrated to an ApsaraDB RDS for SQL Server instance within Alibaba Cloud Account B.
       * >  You can migrate backup files from an OSS bucket within Alibaba Cloud Account A to an OSS bucket within Alibaba Cloud Account B. Make sure that the data in the OSS bucket and the RDS instance belong to the same Alibaba Cloud account. Then, you can call this operation to create a migration task. For more information, see [Use Data Online Migration to migrate data between accounts](https://help.aliyun.com/document_detail/342762.html).
       * ### [](#)References
       * >  Before you call this operation, carefully read the following topic. Make sure that you fully understand the prerequisites, preparations, and impacts for calling this operation.
       * [Migrate data from a self-managed SQL Server instance to an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/100019.html)
       *
       * @param request CreateMigrateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMigrateTaskResponse
       */
      Models::CreateMigrateTaskResponse createMigrateTaskWithOptions(const Models::CreateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a migration task to restore backup files from an Object Storage Service (OSS) bucket to an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)Limits
       * Data migration across Alibaba Cloud accounts is not supported. For example, backup files in an Object Storage Service (OSS) bucket within Alibaba Cloud Account A cannot be migrated to an ApsaraDB RDS for SQL Server instance within Alibaba Cloud Account B.
       * >  You can migrate backup files from an OSS bucket within Alibaba Cloud Account A to an OSS bucket within Alibaba Cloud Account B. Make sure that the data in the OSS bucket and the RDS instance belong to the same Alibaba Cloud account. Then, you can call this operation to create a migration task. For more information, see [Use Data Online Migration to migrate data between accounts](https://help.aliyun.com/document_detail/342762.html).
       * ### [](#)References
       * >  Before you call this operation, carefully read the following topic. Make sure that you fully understand the prerequisites, preparations, and impacts for calling this operation.
       * [Migrate data from a self-managed SQL Server instance to an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/100019.html)
       *
       * @param request CreateMigrateTaskRequest
       * @return CreateMigrateTaskResponse
       */
      Models::CreateMigrateTaskResponse createMigrateTask(const Models::CreateMigrateTaskRequest &request);

      /**
       * @summary Opens the database that is involved in a backup data migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * This operation is used to migrate backup data to the cloud. Before you call this operation, make sure that you understand the descriptions in the following topics:
       * *   [Migrate the full backup data of a self-managed SQL Server database to an ApsaraDB RDS instance that runs SQL Server 2008 R2](https://help.aliyun.com/document_detail/95737.html)
       * *   [Migrate full backup data of SQL Server 2012, 2014, 2016, 2017, or 2019 databases](https://help.aliyun.com/document_detail/95738.html)
       * *   [Migrate incremental backup data to ApsaraDB RDS for SQL Server 2012, 2014, 2016, 2017, or 2019](https://help.aliyun.com/document_detail/95736.html)
       *
       * @param request CreateOnlineDatabaseTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOnlineDatabaseTaskResponse
       */
      Models::CreateOnlineDatabaseTaskResponse createOnlineDatabaseTaskWithOptions(const Models::CreateOnlineDatabaseTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Opens the database that is involved in a backup data migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * This operation is used to migrate backup data to the cloud. Before you call this operation, make sure that you understand the descriptions in the following topics:
       * *   [Migrate the full backup data of a self-managed SQL Server database to an ApsaraDB RDS instance that runs SQL Server 2008 R2](https://help.aliyun.com/document_detail/95737.html)
       * *   [Migrate full backup data of SQL Server 2012, 2014, 2016, 2017, or 2019 databases](https://help.aliyun.com/document_detail/95738.html)
       * *   [Migrate incremental backup data to ApsaraDB RDS for SQL Server 2012, 2014, 2016, 2017, or 2019](https://help.aliyun.com/document_detail/95736.html)
       *
       * @param request CreateOnlineDatabaseTaskRequest
       * @return CreateOnlineDatabaseTaskResponse
       */
      Models::CreateOnlineDatabaseTaskResponse createOnlineDatabaseTask(const Models::CreateOnlineDatabaseTaskRequest &request);

      /**
       * @summary Deletes a node from an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * RDS MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delete a node from an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param tmpReq CreateOrderForDeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderForDeleteDBNodesResponse
       */
      Models::CreateOrderForDeleteDBNodesResponse createOrderForDeleteDBNodesWithOptions(const Models::CreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node from an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * RDS MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delete a node from an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param request CreateOrderForDeleteDBNodesRequest
       * @return CreateOrderForDeleteDBNodesResponse
       */
      Models::CreateOrderForDeleteDBNodesResponse createOrderForDeleteDBNodes(const Models::CreateOrderForDeleteDBNodesRequest &request);

      /**
       * @summary Creates a parameter template for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a parameter template for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request CreateParameterGroupRequest
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroup(const Models::CreateParameterGroupRequest &request);

      /**
       * @summary Creates an extension for a database.
       *
       * @description ### [](#)Supported database engines
       * PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       * ### [](#)Usage notes
       * Install only the extensions that are supported by the major engine version of the instance. Otherwise, the installation fails.
       * *   For more information, see [Supported extensions](https://help.aliyun.com/document_detail/142340.html).
       * *   You can call an API operation to query the major engine version of the instance. For more information, see [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html).
       *
       * @param request CreatePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePostgresExtensionsResponse
       */
      Models::CreatePostgresExtensionsResponse createPostgresExtensionsWithOptions(const Models::CreatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an extension for a database.
       *
       * @description ### [](#)Supported database engines
       * PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       * ### [](#)Usage notes
       * Install only the extensions that are supported by the major engine version of the instance. Otherwise, the installation fails.
       * *   For more information, see [Supported extensions](https://help.aliyun.com/document_detail/142340.html).
       * *   You can call an API operation to query the major engine version of the instance. For more information, see [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/610394.html).
       *
       * @param request CreatePostgresExtensionsRequest
       * @return CreatePostgresExtensionsResponse
       */
      Models::CreatePostgresExtensionsResponse createPostgresExtensions(const Models::CreatePostgresExtensionsRequest &request);

      /**
       * @summary Creates a deployment set for an RDS Custom instance in a region. Before you call this operation, you must specify parameters such as OnUnableToRedeployFailedInstance, DeploymentSetName, and Strategy.
       *
       * @param request CreateRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCDeploymentSetResponse
       */
      Models::CreateRCDeploymentSetResponse createRCDeploymentSetWithOptions(const Models::CreateRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a deployment set for an RDS Custom instance in a region. Before you call this operation, you must specify parameters such as OnUnableToRedeployFailedInstance, DeploymentSetName, and Strategy.
       *
       * @param request CreateRCDeploymentSetRequest
       * @return CreateRCDeploymentSetResponse
       */
      Models::CreateRCDeploymentSetResponse createRCDeploymentSet(const Models::CreateRCDeploymentSetRequest &request);

      /**
       * @summary Creates a data disk for an RDS Custom instance.
       *
       * @description *   The disk can be an ultra disk, an Enterprise SSD (ESSD), an SSD, or a Premium ESSD. By default, Premium ESSD is used.
       * *   When you set InstanceChargeType to **Prepaid**, the disk billing method is subscription. You must set **InstanceId** to the ID of a subscription instance. The expiration time of the disk must be the same as that of the instance to which the disk is attached.
       * *   When you set **InstanceChargeType** to Postpaid, the disk billing method is pay-as-you-go. You do not need to attach the disk to an instance. You can also attach the pay-as-you-go disk to an instance of any billing method based on your business requirements.
       * *   The type and number of disks that can be attached to an instance vary based on instance specifications.
       *
       * @param request CreateRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCDiskResponse
       */
      Models::CreateRCDiskResponse createRCDiskWithOptions(const Models::CreateRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data disk for an RDS Custom instance.
       *
       * @description *   The disk can be an ultra disk, an Enterprise SSD (ESSD), an SSD, or a Premium ESSD. By default, Premium ESSD is used.
       * *   When you set InstanceChargeType to **Prepaid**, the disk billing method is subscription. You must set **InstanceId** to the ID of a subscription instance. The expiration time of the disk must be the same as that of the instance to which the disk is attached.
       * *   When you set **InstanceChargeType** to Postpaid, the disk billing method is pay-as-you-go. You do not need to attach the disk to an instance. You can also attach the pay-as-you-go disk to an instance of any billing method based on your business requirements.
       * *   The type and number of disks that can be attached to an instance vary based on instance specifications.
       *
       * @param request CreateRCDiskRequest
       * @return CreateRCDiskResponse
       */
      Models::CreateRCDiskResponse createRCDisk(const Models::CreateRCDiskRequest &request);

      /**
       * @summary Creates an edge node pool in the Container Service for Kubernetes (ACK) Edge cluster to which the RDS Custom instance belongs.
       *
       * @param tmpReq CreateRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCNodePoolResponse
       */
      Models::CreateRCNodePoolResponse createRCNodePoolWithOptions(const Models::CreateRCNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge node pool in the Container Service for Kubernetes (ACK) Edge cluster to which the RDS Custom instance belongs.
       *
       * @param request CreateRCNodePoolRequest
       * @return CreateRCNodePoolResponse
       */
      Models::CreateRCNodePoolResponse createRCNodePool(const Models::CreateRCNodePoolRequest &request);

      /**
       * @summary Creates a snapshot for a cloud disk.
       *
       * @description In the following scenarios, you cannot create snapshots for a specific disk:
       * *   The number of manual snapshots of the disk has reached 256.
       * *   A snapshot is being created for the disk.
       * *   The instance to which the disk is attached has never been started.
       * *   The instance to which the disk is attached is not in the **Stopped** or **Running** state.
       * When you create a snapshot, take note of the following items:
       * *   If a snapshot is being created, the snapshot cannot be used to create a custom image by calling the CreateImage operation.
       * *   When a snapshot is being created for a disk that is attached to an RDS Custom instance, do not change the instance state.
       * *   You can create snapshots for a disk that is in the **Expired** state. If the release time scheduled for a disk arrives when a snapshot is being created for the disk, the snapshot in the Creating state is deleted when the disk is released.
       *
       * @param request CreateRCSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCSnapshotResponse
       */
      Models::CreateRCSnapshotResponse createRCSnapshotWithOptions(const Models::CreateRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot for a cloud disk.
       *
       * @description In the following scenarios, you cannot create snapshots for a specific disk:
       * *   The number of manual snapshots of the disk has reached 256.
       * *   A snapshot is being created for the disk.
       * *   The instance to which the disk is attached has never been started.
       * *   The instance to which the disk is attached is not in the **Stopped** or **Running** state.
       * When you create a snapshot, take note of the following items:
       * *   If a snapshot is being created, the snapshot cannot be used to create a custom image by calling the CreateImage operation.
       * *   When a snapshot is being created for a disk that is attached to an RDS Custom instance, do not change the instance state.
       * *   You can create snapshots for a disk that is in the **Expired** state. If the release time scheduled for a disk arrives when a snapshot is being created for the disk, the snapshot in the Creating state is deleted when the disk is released.
       *
       * @param request CreateRCSnapshotRequest
       * @return CreateRCSnapshotResponse
       */
      Models::CreateRCSnapshotResponse createRCSnapshot(const Models::CreateRCSnapshotRequest &request);

      /**
       * @summary Creates a read-only instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Create a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/56991.html)
       * *   [Create a read-only ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/108959.html)
       * *   [Create a read-only ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/99005.html)
       *
       * @param request CreateReadOnlyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReadOnlyDBInstanceResponse
       */
      Models::CreateReadOnlyDBInstanceResponse createReadOnlyDBInstanceWithOptions(const Models::CreateReadOnlyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a read-only instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Create a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/56991.html)
       * *   [Create a read-only ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/108959.html)
       * *   [Create a read-only ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/99005.html)
       *
       * @param request CreateReadOnlyDBInstanceRequest
       * @return CreateReadOnlyDBInstanceResponse
       */
      Models::CreateReadOnlyDBInstanceResponse createReadOnlyDBInstance(const Models::CreateReadOnlyDBInstanceRequest &request);

      /**
       * @summary Creates a data synchronization task for a disaster recovery (DR) ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * *   SQL Server
       * >  The parameters vary based on database engines.
       *
       * @param request CreateReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReplicationLinkResponse
       */
      Models::CreateReplicationLinkResponse createReplicationLinkWithOptions(const Models::CreateReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data synchronization task for a disaster recovery (DR) ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * *   SQL Server
       * >  The parameters vary based on database engines.
       *
       * @param request CreateReplicationLinkRequest
       * @return CreateReplicationLinkResponse
       */
      Models::CreateReplicationLinkResponse createReplicationLink(const Models::CreateReplicationLinkRequest &request);

      /**
       * @summary Creates a credential for a user who uses the Data API feature.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request CreateSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a credential for a user who uses the Data API feature.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Creates a service-linked role.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Service-linked roles](https://help.aliyun.com/document_detail/342840.html)
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Service-linked roles](https://help.aliyun.com/document_detail/342840.html)
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a temporary instance for an RDS instance that runs SQL Server 2008 R2 and uses local disks.
       *
       * @description ### [](#)Supported database engines
       * Your RDS instance runs SQL Server 2008 R2 with local disks.
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Restore the data of an ApsaraDB RDS for SQL Server instance by using a temporary RDS instance](https://help.aliyun.com/document_detail/95724.html)
       *
       * @param request CreateTempDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTempDBInstanceResponse
       */
      Models::CreateTempDBInstanceResponse createTempDBInstanceWithOptions(const Models::CreateTempDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a temporary instance for an RDS instance that runs SQL Server 2008 R2 and uses local disks.
       *
       * @description ### [](#)Supported database engines
       * Your RDS instance runs SQL Server 2008 R2 with local disks.
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Restore the data of an ApsaraDB RDS for SQL Server instance by using a temporary RDS instance](https://help.aliyun.com/document_detail/95724.html)
       *
       * @param request CreateTempDBInstanceRequest
       * @return CreateTempDBInstanceResponse
       */
      Models::CreateTempDBInstanceResponse createTempDBInstance(const Models::CreateTempDBInstanceRequest &request);

      /**
       * @summary 下单领券接口
       *
       * @param request CreateYouhuiForOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateYouhuiForOrderResponse
       */
      Models::CreateYouhuiForOrderResponse createYouhuiForOrderWithOptions(const Models::CreateYouhuiForOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下单领券接口
       *
       * @param request CreateYouhuiForOrderRequest
       * @return CreateYouhuiForOrderResponse
       */
      Models::CreateYouhuiForOrderResponse createYouhuiForOrder(const Models::CreateYouhuiForOrderRequest &request);

      /**
       * @summary Deletes an ApsaraDB RDS for SQL Server instance from an Active Directory (AD) domain.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request DeleteADSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteADSettingResponse
       */
      Models::DeleteADSettingResponse deleteADSettingWithOptions(const Models::DeleteADSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApsaraDB RDS for SQL Server instance from an Active Directory (AD) domain.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request DeleteADSettingRequest
       * @return DeleteADSettingResponse
       */
      Models::DeleteADSettingResponse deleteADSetting(const Models::DeleteADSettingRequest &request);

      /**
       * @summary Deletes an account from an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Delete a database account from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96104.html)
       * *   [Delete a database account from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       * *   [Delete a database account from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95694.html)
       * *   [Delete a database account from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97135.html)
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an account from an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Delete a database account from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96104.html)
       * *   [Delete a database account from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       * *   [Delete a database account from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95694.html)
       * *   [Delete a database account from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97135.html)
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes the data backup files of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * > Only instances that run RDS High-availability Edition are supported.
       * ### Description
       * You can call this operation to delete backup sets of the instance itself. Backup sets of the associated instances such as read-only, disaster recovery, and cloned instances are not deleted.
       * ### Precautions
       * Before you call this operation, make sure that the following requirements are met:
       * *   The instance is in the Running state.
       * *   If the log backup feature is disabled, instances cannot be restored by point in time. You can delete data backup sets that are retained for more than seven days.
       * *   If the log backup feature is enabled and the log backup retention period is shorter than the data backup retention period, you can delete the data backup files that are retained for a period longer than the log backup retention period.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the data backup files of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * > Only instances that run RDS High-availability Edition are supported.
       * ### Description
       * You can call this operation to delete backup sets of the instance itself. Backup sets of the associated instances such as read-only, disaster recovery, and cloned instances are not deleted.
       * ### Precautions
       * Before you call this operation, make sure that the following requirements are met:
       * *   The instance is in the Running state.
       * *   If the log backup feature is disabled, instances cannot be restored by point in time. You can delete data backup sets that are retained for more than seven days.
       * *   If the log backup feature is enabled and the log backup retention period is shorter than the data backup retention period, you can delete the data backup files that are retained for a period longer than the log backup retention period.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes the backup files of an ApsaraDB RDS for SQL Server instance. This operation is available only for users that have been added to the whitelist of the instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * >  **This operation is not supported for new users. **Select other methods to [reduce or save backup costs](https://help.aliyun.com/document_detail/95718.html). Users who are added to the whitelist can still use the backup file. Check the availability of the backup file before you delete it. After the backup file is deleted, you cannot retrieve it.
       *
       * @param request DeleteBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFileWithOptions(const Models::DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the backup files of an ApsaraDB RDS for SQL Server instance. This operation is available only for users that have been added to the whitelist of the instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * >  **This operation is not supported for new users. **Select other methods to [reduce or save backup costs](https://help.aliyun.com/document_detail/95718.html). Users who are added to the whitelist can still use the backup file. Check the availability of the backup file before you delete it. After the backup file is deleted, you cannot retrieve it.
       *
       * @param request DeleteBackupFileRequest
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFile(const Models::DeleteBackupFileRequest &request);

      /**
       * @summary Releases an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Note Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Release an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96057.html)
       * *   [Release an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96749.html)
       * *   [Release an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95662.html)
       * *   [Release an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97128.html)
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Note Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Release an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96057.html)
       * *   [Release an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96749.html)
       * *   [Release an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95662.html)
       * *   [Release an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97128.html)
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes an endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Delete the read-only endpoint of an ApsaraDB RDS for MySQL cluster](https://help.aliyun.com/document_detail/464133.html)
       *
       * @param request DeleteDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceEndpointResponse
       */
      Models::DeleteDBInstanceEndpointResponse deleteDBInstanceEndpointWithOptions(const Models::DeleteDBInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Delete the read-only endpoint of an ApsaraDB RDS for MySQL cluster](https://help.aliyun.com/document_detail/464133.html)
       *
       * @param request DeleteDBInstanceEndpointRequest
       * @return DeleteDBInstanceEndpointResponse
       */
      Models::DeleteDBInstanceEndpointResponse deleteDBInstanceEndpoint(const Models::DeleteDBInstanceEndpointRequest &request);

      /**
       * @summary Releases the public endpoint of an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)Precautions
       * You can delete only the public endpoint of each endpoint type from the instance. If you want to delete an internal endpoint of any endpoint type, you can directly delete the type of endpoint.
       *
       * @param request DeleteDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceEndpointAddressResponse
       */
      Models::DeleteDBInstanceEndpointAddressResponse deleteDBInstanceEndpointAddressWithOptions(const Models::DeleteDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)Precautions
       * You can delete only the public endpoint of each endpoint type from the instance. If you want to delete an internal endpoint of any endpoint type, you can directly delete the type of endpoint.
       *
       * @param request DeleteDBInstanceEndpointAddressRequest
       * @return DeleteDBInstanceEndpointAddressResponse
       */
      Models::DeleteDBInstanceEndpointAddressResponse deleteDBInstanceEndpointAddress(const Models::DeleteDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Deletes a security group rule that is configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DeleteDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceSecurityGroupRuleResponse
       */
      Models::DeleteDBInstanceSecurityGroupRuleResponse deleteDBInstanceSecurityGroupRuleWithOptions(const Models::DeleteDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group rule that is configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DeleteDBInstanceSecurityGroupRuleRequest
       * @return DeleteDBInstanceSecurityGroupRuleResponse
       */
      Models::DeleteDBInstanceSecurityGroupRuleResponse deleteDBInstanceSecurityGroupRule(const Models::DeleteDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Deletes a node from an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delete a node from an ApsaraDB RDS for MySQL cluster](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param tmpReq DeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodesWithOptions(const Models::DeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node from an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Delete a node from an ApsaraDB RDS for MySQL cluster](https://help.aliyun.com/document_detail/464130.html)
       *
       * @param request DeleteDBNodesRequest
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodes(const Models::DeleteDBNodesRequest &request);

      /**
       * @summary Deletes the endpoint that is used to connect to the dedicated proxy of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure the dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * *   [Configure the dedicated proxy endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request DeleteDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBProxyEndpointAddressResponse
       */
      Models::DeleteDBProxyEndpointAddressResponse deleteDBProxyEndpointAddressWithOptions(const Models::DeleteDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the endpoint that is used to connect to the dedicated proxy of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure the dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * *   [Configure the dedicated proxy endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request DeleteDBProxyEndpointAddressRequest
       * @return DeleteDBProxyEndpointAddressResponse
       */
      Models::DeleteDBProxyEndpointAddressResponse deleteDBProxyEndpointAddress(const Models::DeleteDBProxyEndpointAddressRequest &request);

      /**
       * @summary Deletes a database from an RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### [](#)References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Delete a database from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96106.html)
       * *   [Delete a database from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96759.html)
       * *   [Delete a database from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95699.html)
       * *   [Delete a database from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97137.html)
       *
       * @param request DeleteDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database from an RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### [](#)References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Delete a database from an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96106.html)
       * *   [Delete a database from an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96759.html)
       * *   [Delete a database from an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95699.html)
       * *   [Delete a database from an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97137.html)
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary Deletes a global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [Usage notes](#)
       * *   A global active database cluster cannot be restored after it is deleted. Proceed with caution.
       * *   If you delete a global active database cluster, the system removes all nodes and Data Transmission Service (DTS) synchronization tasks from the cluster. However, the system does not release the ApsaraDB RDS for MySQL instances that run as nodes in the cluster. If you no longer need the ApsaraDB RDS for MySQL instances, you can call the [DeleteDBInstance](https://help.aliyun.com/document_detail/26229.html) to release the instances one after another.
       *
       * @param request DeleteGadInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstanceWithOptions(const Models::DeleteGadInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [Usage notes](#)
       * *   A global active database cluster cannot be restored after it is deleted. Proceed with caution.
       * *   If you delete a global active database cluster, the system removes all nodes and Data Transmission Service (DTS) synchronization tasks from the cluster. However, the system does not release the ApsaraDB RDS for MySQL instances that run as nodes in the cluster. If you no longer need the ApsaraDB RDS for MySQL instances, you can call the [DeleteDBInstance](https://help.aliyun.com/document_detail/26229.html) to release the instances one after another.
       *
       * @param request DeleteGadInstanceRequest
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstance(const Models::DeleteGadInstanceRequest &request);

      /**
       * @summary 删除全密态规则
       *
       * @param request DeleteMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRulesWithOptions(const Models::DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除全密态规则
       *
       * @param request DeleteMaskingRulesRequest
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRules(const Models::DeleteMaskingRulesRequest &request);

      /**
       * @summary Deletes a parameter template from an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DeleteParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroupWithOptions(const Models::DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a parameter template from an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DeleteParameterGroupRequest
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroup(const Models::DeleteParameterGroupRequest &request);

      /**
       * @summary Deletes an extension from a database.
       *
       * @description ### Supported database engines
       * RDS PostgreSQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DeletePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePostgresExtensionsResponse
       */
      Models::DeletePostgresExtensionsResponse deletePostgresExtensionsWithOptions(const Models::DeletePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an extension from a database.
       *
       * @description ### Supported database engines
       * RDS PostgreSQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DeletePostgresExtensionsRequest
       * @return DeletePostgresExtensionsResponse
       */
      Models::DeletePostgresExtensionsResponse deletePostgresExtensions(const Models::DeletePostgresExtensionsRequest &request);

      /**
       * @summary Deletes a RDS Custom node from a Container Service for Kubernetes (ACK) cluster.
       *
       * @param tmpReq DeleteRCClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCClusterNodesResponse
       */
      Models::DeleteRCClusterNodesResponse deleteRCClusterNodesWithOptions(const Models::DeleteRCClusterNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a RDS Custom node from a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DeleteRCClusterNodesRequest
       * @return DeleteRCClusterNodesResponse
       */
      Models::DeleteRCClusterNodesResponse deleteRCClusterNodes(const Models::DeleteRCClusterNodesRequest &request);

      /**
       * @summary Deletes a deployment set for an RDS Custom instance. Before you call this operation, you must specify parameters such as RegionId and DeploymentSetId.
       *
       * @param request DeleteRCDeploymentSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCDeploymentSetResponse
       */
      Models::DeleteRCDeploymentSetResponse deleteRCDeploymentSetWithOptions(const Models::DeleteRCDeploymentSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a deployment set for an RDS Custom instance. Before you call this operation, you must specify parameters such as RegionId and DeploymentSetId.
       *
       * @param request DeleteRCDeploymentSetRequest
       * @return DeleteRCDeploymentSetResponse
       */
      Models::DeleteRCDeploymentSetResponse deleteRCDeploymentSet(const Models::DeleteRCDeploymentSetRequest &request);

      /**
       * @summary Releases a pay-as-you-go data disk. The data disk can be a basic disk, an ultra disk, a standard SSD, or an Enterprise SSD (ESSD).
       *
       * @description Before you call this operation, take note of the following items:
       * *   Manual snapshots of the disk are retained.
       * *   The disk must be in the Unattached (Available) state.
       * *   If no disk with the specified disk ID exists, the request will be ignored.
       *
       * @param request DeleteRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCDiskResponse
       */
      Models::DeleteRCDiskResponse deleteRCDiskWithOptions(const Models::DeleteRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go data disk. The data disk can be a basic disk, an ultra disk, a standard SSD, or an Enterprise SSD (ESSD).
       *
       * @description Before you call this operation, take note of the following items:
       * *   Manual snapshots of the disk are retained.
       * *   The disk must be in the Unattached (Available) state.
       * *   If no disk with the specified disk ID exists, the request will be ignored.
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
       * @summary Releases a subscription RDS Custom instance.
       *
       * @description After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       *
       * @param tmpReq DeleteRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCInstancesResponse
       */
      Models::DeleteRCInstancesResponse deleteRCInstancesWithOptions(const Models::DeleteRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a subscription RDS Custom instance.
       *
       * @description After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       *
       * @param request DeleteRCInstancesRequest
       * @return DeleteRCInstancesResponse
       */
      Models::DeleteRCInstancesResponse deleteRCInstances(const Models::DeleteRCInstancesRequest &request);

      /**
       * @summary Deletes the edge node pool of an RDS Custom instance.
       *
       * @param request DeleteRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCNodePoolResponse
       */
      Models::DeleteRCNodePoolResponse deleteRCNodePoolWithOptions(const Models::DeleteRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the edge node pool of an RDS Custom instance.
       *
       * @param request DeleteRCNodePoolRequest
       * @return DeleteRCNodePoolResponse
       */
      Models::DeleteRCNodePoolResponse deleteRCNodePool(const Models::DeleteRCNodePoolRequest &request);

      /**
       * @summary Deletes a cloud disk snapshot.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the specified snapshot ID does not exist, the request will be ignored.
       * *   If the snapshot is used to create custom images, the snapshot cannot be deleted. You must delete the created custom images before you can delete the snapshot.
       * *   If the snapshot is used to create cloud disks and `Force` is not specified or is set to `false`, the snapshot cannot be directly deleted. If you want to delete the snapshot, set `Force` to true to forcefully delete the snapshot. The cloud disks created from the snapshot cannot be re-initialized after the snapshot is forcefully deleted.
       *
       * @param request DeleteRCSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRCSnapshotResponse
       */
      Models::DeleteRCSnapshotResponse deleteRCSnapshotWithOptions(const Models::DeleteRCSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud disk snapshot.
       *
       * @description Before you call this operation, take note of the following items:
       * *   If the specified snapshot ID does not exist, the request will be ignored.
       * *   If the snapshot is used to create custom images, the snapshot cannot be deleted. You must delete the created custom images before you can delete the snapshot.
       * *   If the snapshot is used to create cloud disks and `Force` is not specified or is set to `false`, the snapshot cannot be directly deleted. If you want to delete the snapshot, set `Force` to true to forcefully delete the snapshot. The cloud disks created from the snapshot cannot be re-initialized after the snapshot is forcefully deleted.
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
       * @summary Deletes the data synchronization link for a disaster recovery (DR) ApsaraDB RDS instance and promotes the DR instance to the primary instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DeleteReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReplicationLinkResponse
       */
      Models::DeleteReplicationLinkResponse deleteReplicationLinkWithOptions(const Models::DeleteReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the data synchronization link for a disaster recovery (DR) ApsaraDB RDS instance and promotes the DR instance to the primary instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DeleteReplicationLinkRequest
       * @return DeleteReplicationLinkResponse
       */
      Models::DeleteReplicationLinkResponse deleteReplicationLink(const Models::DeleteReplicationLinkRequest &request);

      /**
       * @summary Deletes the credential of a user who uses the Data API feature.
       *
       * @param request DeleteSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the credential of a user who uses the Data API feature.
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @summary Deletes a replication slot of an instance.
       *
       * @description ### [](#)Supported database engine
       * *   PostgreSQL
       * ### [](#)Precautions
       * You can delete a replication slot only when the status of the slot is **INACTIVE**. You can call the DescribeSlots operation to query the status of a replication slot.
       *
       * @param request DeleteSlotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlotWithOptions(const Models::DeleteSlotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a replication slot of an instance.
       *
       * @description ### [](#)Supported database engine
       * *   PostgreSQL
       * ### [](#)Precautions
       * You can delete a replication slot only when the status of the slot is **INACTIVE**. You can call the DescribeSlots operation to query the status of a replication slot.
       *
       * @param request DeleteSlotRequest
       * @return DeleteSlotResponse
       */
      Models::DeleteSlotResponse deleteSlot(const Models::DeleteSlotRequest &request);

      /**
       * @summary Deletes the backup files of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engine
       * *   MySQL
       * ### [](#)Usage notes
       * *   A full backup file contains the data of a self-managed MySQL instance. You can restore the data of a self-managed MySQL instance from a full backup file to an ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * *   This operation deletes full backup files only from the ApsaraDB RDS console. This operation does not affect the full backup files that are stored as objects in Object Storage Service (OSS) buckets. After you call this operation to delete a full backup file, you can call the ImportUserBackupFile operation to reimport the full backup file.
       *
       * @param request DeleteUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserBackupFileResponse
       */
      Models::DeleteUserBackupFileResponse deleteUserBackupFileWithOptions(const Models::DeleteUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the backup files of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engine
       * *   MySQL
       * ### [](#)Usage notes
       * *   A full backup file contains the data of a self-managed MySQL instance. You can restore the data of a self-managed MySQL instance from a full backup file to an ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * *   This operation deletes full backup files only from the ApsaraDB RDS console. This operation does not affect the full backup files that are stored as objects in Object Storage Service (OSS) buckets. After you call this operation to delete a full backup file, you can call the ImportUserBackupFile operation to reimport the full backup file.
       *
       * @param request DeleteUserBackupFileRequest
       * @return DeleteUserBackupFileResponse
       */
      Models::DeleteUserBackupFileResponse deleteUserBackupFile(const Models::DeleteUserBackupFileRequest &request);

      /**
       * @summary Queries the migration tasks of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request DescibeImportsFromDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescibeImportsFromDatabaseResponse
       */
      Models::DescibeImportsFromDatabaseResponse descibeImportsFromDatabaseWithOptions(const Models::DescibeImportsFromDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the migration tasks of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request DescibeImportsFromDatabaseRequest
       * @return DescibeImportsFromDatabaseResponse
       */
      Models::DescibeImportsFromDatabaseResponse descibeImportsFromDatabase(const Models::DescibeImportsFromDatabaseRequest &request);

      /**
       * @summary Queries information about the AD domain of an instance. The information includes whether the instance is added to the AD domain, the name of the AD domain, and the account.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request DescribeADInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeADInfoResponse
       */
      Models::DescribeADInfoResponse describeADInfoWithOptions(const Models::DescribeADInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the AD domain of an instance. The information includes whether the instance is added to the AD domain, the name of the AD domain, and the account.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request DescribeADInfoRequest
       * @return DescribeADInfoResponse
       */
      Models::DescribeADInfoResponse describeADInfo(const Models::DescribeADInfoRequest &request);

      /**
       * @summary 查询全密态用户权限
       *
       * @param request DescribeAccountMaskingPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountMaskingPrivilegeResponse
       */
      Models::DescribeAccountMaskingPrivilegeResponse describeAccountMaskingPrivilegeWithOptions(const Models::DescribeAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询全密态用户权限
       *
       * @param request DescribeAccountMaskingPrivilegeRequest
       * @return DescribeAccountMaskingPrivilegeResponse
       */
      Models::DescribeAccountMaskingPrivilegeResponse describeAccountMaskingPrivilege(const Models::DescribeAccountMaskingPrivilegeRequest &request);

      /**
       * @summary Queries the details about the accounts that are created on an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the accounts that are created on an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries whether the historical events feature is enabled.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeActionEventPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActionEventPolicyResponse
       */
      Models::DescribeActionEventPolicyResponse describeActionEventPolicyWithOptions(const Models::DescribeActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the historical events feature is enabled.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeActionEventPolicyRequest
       * @return DescribeActionEventPolicyResponse
       */
      Models::DescribeActionEventPolicyResponse describeActionEventPolicy(const Models::DescribeActionEventPolicyRequest &request);

      /**
       * @summary Queries the details about scheduled O\\\\\\\\\\\\\\\\\\\\&M tasks for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about scheduled O\\\\\\\\\\\\\\\\\\\\&M tasks for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries whitelist templates at a time by using fuzzy search.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeAllWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllWhitelistTemplateResponse
       */
      Models::DescribeAllWhitelistTemplateResponse describeAllWhitelistTemplateWithOptions(const Models::DescribeAllWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whitelist templates at a time by using fuzzy search.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeAllWhitelistTemplateRequest
       * @return DescribeAllWhitelistTemplateResponse
       */
      Models::DescribeAllWhitelistTemplateResponse describeAllWhitelistTemplate(const Models::DescribeAllWhitelistTemplateRequest &request);

      /**
       * @summary Queries the number of analytic instances that are associated with an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * [Create and view an analytic instance](https://help.aliyun.com/document_detail/2950002.html)
       *
       * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
       */
      Models::DescribeAnalyticdbByPrimaryDBInstanceResponse describeAnalyticdbByPrimaryDBInstanceWithOptions(const Models::DescribeAnalyticdbByPrimaryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of analytic instances that are associated with an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * [Create and view an analytic instance](https://help.aliyun.com/document_detail/2950002.html)
       *
       * @param request DescribeAnalyticdbByPrimaryDBInstanceRequest
       * @return DescribeAnalyticdbByPrimaryDBInstanceResponse
       */
      Models::DescribeAnalyticdbByPrimaryDBInstanceResponse describeAnalyticdbByPrimaryDBInstance(const Models::DescribeAnalyticdbByPrimaryDBInstanceRequest &request);

      /**
       * @summary Queries the specifications that are supported for an instance. The specifications include the instance type and the storage capacity.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeAvailableClassesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableClassesResponse
       */
      Models::DescribeAvailableClassesResponse describeAvailableClassesWithOptions(const Models::DescribeAvailableClassesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications that are supported for an instance. The specifications include the instance type and the storage capacity.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeAvailableClassesRequest
       * @return DescribeAvailableClassesResponse
       */
      Models::DescribeAvailableClassesResponse describeAvailableClasses(const Models::DescribeAvailableClassesRequest &request);

      /**
       * @summary Queries the available destination regions to which the cross-region backup files from a specific source region can be replicated.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeAvailableCrossRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableCrossRegionResponse
       */
      Models::DescribeAvailableCrossRegionResponse describeAvailableCrossRegionWithOptions(const Models::DescribeAvailableCrossRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available destination regions to which the cross-region backup files from a specific source region can be replicated.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeAvailableCrossRegionRequest
       * @return DescribeAvailableCrossRegionResponse
       */
      Models::DescribeAvailableCrossRegionResponse describeAvailableCrossRegion(const Models::DescribeAvailableCrossRegionRequest &request);

      /**
       * @summary Queries all Enhanced Monitoring metrics that are supported by an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [View the Enhanced Monitoring metrics](https://help.aliyun.com/document_detail/299200.html)
       *
       * @param request DescribeAvailableMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableMetricsResponse
       */
      Models::DescribeAvailableMetricsResponse describeAvailableMetricsWithOptions(const Models::DescribeAvailableMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Enhanced Monitoring metrics that are supported by an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [View the Enhanced Monitoring metrics](https://help.aliyun.com/document_detail/299200.html)
       *
       * @param request DescribeAvailableMetricsRequest
       * @return DescribeAvailableMetricsResponse
       */
      Models::DescribeAvailableMetricsResponse describeAvailableMetrics(const Models::DescribeAvailableMetricsRequest &request);

      /**
       * @summary Queries the time range within which data can be restored from a cross-region backup file.
       *
       * @description >  To view the time range within which you can restore data from a standard backup set, see DescribeBackups.
       * ### [](#)Supported database engines
       * ApsaraDB RDS for MySQL instances with local disks
       * ### [](#)References
       * >  Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cross-region backup feature](https://help.aliyun.com/document_detail/120824.html)
       *
       * @param request DescribeAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableRecoveryTimeResponse
       */
      Models::DescribeAvailableRecoveryTimeResponse describeAvailableRecoveryTimeWithOptions(const Models::DescribeAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time range within which data can be restored from a cross-region backup file.
       *
       * @description >  To view the time range within which you can restore data from a standard backup set, see DescribeBackups.
       * ### [](#)Supported database engines
       * ApsaraDB RDS for MySQL instances with local disks
       * ### [](#)References
       * >  Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the cross-region backup feature](https://help.aliyun.com/document_detail/120824.html)
       *
       * @param request DescribeAvailableRecoveryTimeRequest
       * @return DescribeAvailableRecoveryTimeResponse
       */
      Models::DescribeAvailableRecoveryTimeResponse describeAvailableRecoveryTime(const Models::DescribeAvailableRecoveryTimeRequest &request);

      /**
       * @summary Queries the available zones for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * > You can call this operation to query the available zones for an instance. The query result may be different from the zones available on the buy page of the ApsaraDB RDS console. The values of some parameters on the buy page vary based on the actual sales policy. The actual information on the [buy page](https://rdsbuy.console.aliyun.com/create/rds/PostgreSQL) prevails.
       *
       * @param request DescribeAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZonesWithOptions(const Models::DescribeAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available zones for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * > You can call this operation to query the available zones for an instance. The query result may be different from the zones available on the buy page of the ApsaraDB RDS console. The values of some parameters on the buy page vary based on the actual sales policy. The actual information on the [buy page](https://rdsbuy.console.aliyun.com/create/rds/PostgreSQL) prevails.
       *
       * @param request DescribeAvailableZonesRequest
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZones(const Models::DescribeAvailableZonesRequest &request);

      /**
       * @summary Queries the databases that are involved in a backup file.
       *
       * @description > This operation is phased out.
       *
       * @param request DescribeBackupDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupDatabaseResponse
       */
      Models::DescribeBackupDatabaseResponse describeBackupDatabaseWithOptions(const Models::DescribeBackupDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases that are involved in a backup file.
       *
       * @description > This operation is phased out.
       *
       * @param request DescribeBackupDatabaseRequest
       * @return DescribeBackupDatabaseResponse
       */
      Models::DescribeBackupDatabaseResponse describeBackupDatabase(const Models::DescribeBackupDatabaseRequest &request);

      /**
       * @summary Queries the backup settings of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup settings of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup tasks of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup tasks of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries the data backup files of an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data backup files of an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the binary log files of an instance that runs MySQL or MariaDB or the write-ahead logging (WAL) files of an instance that runs PostgreSQL.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   MariaDB
       * ### Usage notes
       * *   If the return value of the **DownloadLink** parameter is NULL, ApsaraDB RDS does not provide a download URL.
       * *   If the return value of the **DownloadLink** parameter is not NULL, ApsaraDB RDS provides a URL for you to download backup files. The expiration time of the URL is specified by the **LinkExpiredTime** parameter. You must download the backup files before the expiration time.
       * *   If you use a RAM user to download backup files, you must grant permissions to the RAM user. For more information, see [Grant backup file download permissions to a RAM user with read-only permissions](https://help.aliyun.com/document_detail/100043.html).
       * *   Each log file that is returned by this operation contains the log entries that are generated over the time range that is specified by the StartTime and EndTime parameters.
       *
       * @param request DescribeBinlogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFilesWithOptions(const Models::DescribeBinlogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binary log files of an instance that runs MySQL or MariaDB or the write-ahead logging (WAL) files of an instance that runs PostgreSQL.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   MariaDB
       * ### Usage notes
       * *   If the return value of the **DownloadLink** parameter is NULL, ApsaraDB RDS does not provide a download URL.
       * *   If the return value of the **DownloadLink** parameter is not NULL, ApsaraDB RDS provides a URL for you to download backup files. The expiration time of the URL is specified by the **LinkExpiredTime** parameter. You must download the backup files before the expiration time.
       * *   If you use a RAM user to download backup files, you must grant permissions to the RAM user. For more information, see [Grant backup file download permissions to a RAM user with read-only permissions](https://help.aliyun.com/document_detail/100043.html).
       * *   Each log file that is returned by this operation contains the log entries that are generated over the time range that is specified by the StartTime and EndTime parameters.
       *
       * @param request DescribeBinlogFilesRequest
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFiles(const Models::DescribeBinlogFilesRequest &request);

      /**
       * @summary Queries the character sets that are supported by an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeCharacterSetNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetNameWithOptions(const Models::DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the character sets that are supported by an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeCharacterSetNameRequest
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetName(const Models::DescribeCharacterSetNameRequest &request);

      /**
       * @summary Queries the details about the instance types of an instance by using the code of the instance types.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeClassDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassDetailsResponse
       */
      Models::DescribeClassDetailsResponse describeClassDetailsWithOptions(const Models::DescribeClassDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the instance types of an instance by using the code of the instance types.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
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
       * @summary Queries the details about the cloud migration task of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request DescribeCloudMigrationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudMigrationResultResponse
       */
      Models::DescribeCloudMigrationResultResponse describeCloudMigrationResultWithOptions(const Models::DescribeCloudMigrationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the cloud migration task of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request DescribeCloudMigrationResultRequest
       * @return DescribeCloudMigrationResultResponse
       */
      Models::DescribeCloudMigrationResultResponse describeCloudMigrationResult(const Models::DescribeCloudMigrationResultRequest &request);

      /**
       * @summary Queries the character set collations and time zones that are available for use in ApsaraDB RDS for SQL Server.
       *
       * @description ### Supported database engine
       * SQL Server
       *
       * @param request DescribeCollationTimeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCollationTimeZonesResponse
       */
      Models::DescribeCollationTimeZonesResponse describeCollationTimeZonesWithOptions(const Models::DescribeCollationTimeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the character set collations and time zones that are available for use in ApsaraDB RDS for SQL Server.
       *
       * @description ### Supported database engine
       * SQL Server
       *
       * @param request DescribeCollationTimeZonesRequest
       * @return DescribeCollationTimeZonesResponse
       */
      Models::DescribeCollationTimeZonesResponse describeCollationTimeZones(const Models::DescribeCollationTimeZonesRequest &request);

      /**
       * @summary Queries the settings of assured serverless.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [Assured serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request DescribeComputeBurstConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComputeBurstConfigResponse
       */
      Models::DescribeComputeBurstConfigResponse describeComputeBurstConfigWithOptions(const Models::DescribeComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of assured serverless.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [Assured serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request DescribeComputeBurstConfigRequest
       * @return DescribeComputeBurstConfigResponse
       */
      Models::DescribeComputeBurstConfigResponse describeComputeBurstConfig(const Models::DescribeComputeBurstConfigRequest &request);

      /**
       * @summary Queries the databases and tables whose data is included in a cross-region backup file of an instance.
       *
       * @description ApsaraDB RDS for MySQL instances support cross-region backup and restoration. For more information, see [Back up an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120824.html) and [Restore the data of an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120875.html).
       * Before you call this operation, make sure that the instance runs one of the following database engines:
       * *   MySQL. For more information, see [Back up an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120824.html).
       * *   SQL Server. For more information, see [Back up an ApsaraDB RDS for SQL Server instance across regions](https://help.aliyun.com/document_detail/187923.html).
       * *   PostgreSQL. For more information, see [Enable cross-region backups for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html).
       *
       * @param request DescribeCrossBackupMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossBackupMetaListResponse
       */
      Models::DescribeCrossBackupMetaListResponse describeCrossBackupMetaListWithOptions(const Models::DescribeCrossBackupMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases and tables whose data is included in a cross-region backup file of an instance.
       *
       * @description ApsaraDB RDS for MySQL instances support cross-region backup and restoration. For more information, see [Back up an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120824.html) and [Restore the data of an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120875.html).
       * Before you call this operation, make sure that the instance runs one of the following database engines:
       * *   MySQL. For more information, see [Back up an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120824.html).
       * *   SQL Server. For more information, see [Back up an ApsaraDB RDS for SQL Server instance across regions](https://help.aliyun.com/document_detail/187923.html).
       * *   PostgreSQL. For more information, see [Enable cross-region backups for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html).
       *
       * @param request DescribeCrossBackupMetaListRequest
       * @return DescribeCrossBackupMetaListResponse
       */
      Models::DescribeCrossBackupMetaListResponse describeCrossBackupMetaList(const Models::DescribeCrossBackupMetaListRequest &request);

      /**
       * @summary Queries the instances for which the cross-region backup feature is enabled in a region and the cross-region backup settings of these instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeCrossRegionBackupDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionBackupDBInstanceResponse
       */
      Models::DescribeCrossRegionBackupDBInstanceResponse describeCrossRegionBackupDBInstanceWithOptions(const Models::DescribeCrossRegionBackupDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances for which the cross-region backup feature is enabled in a region and the cross-region backup settings of these instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeCrossRegionBackupDBInstanceRequest
       * @return DescribeCrossRegionBackupDBInstanceResponse
       */
      Models::DescribeCrossRegionBackupDBInstanceResponse describeCrossRegionBackupDBInstance(const Models::DescribeCrossRegionBackupDBInstanceRequest &request);

      /**
       * @summary Queries the cross-region data backup files of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL instances with local disks
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * >  Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * >  For more information about how to query cross-region log backup files, see DescribeCrossRegionLogBackupFiles.
       *
       * @param request DescribeCrossRegionBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionBackupsResponse
       */
      Models::DescribeCrossRegionBackupsResponse describeCrossRegionBackupsWithOptions(const Models::DescribeCrossRegionBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-region data backup files of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL instances with local disks
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * >  Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * >  For more information about how to query cross-region log backup files, see DescribeCrossRegionLogBackupFiles.
       *
       * @param request DescribeCrossRegionBackupsRequest
       * @return DescribeCrossRegionBackupsResponse
       */
      Models::DescribeCrossRegionBackupsResponse describeCrossRegionBackups(const Models::DescribeCrossRegionBackupsRequest &request);

      /**
       * @summary Queries the cross-region log backup files of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * >  For more information about how to query cross-region data backup files, see [DescribeCrossRegionBackups](https://help.aliyun.com/document_detail/121733.html).
       *
       * @param request DescribeCrossRegionLogBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossRegionLogBackupFilesResponse
       */
      Models::DescribeCrossRegionLogBackupFilesResponse describeCrossRegionLogBackupFilesWithOptions(const Models::DescribeCrossRegionLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-region log backup files of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * >  For more information about how to query cross-region data backup files, see [DescribeCrossRegionBackups](https://help.aliyun.com/document_detail/121733.html).
       *
       * @param request DescribeCrossRegionLogBackupFilesRequest
       * @return DescribeCrossRegionLogBackupFilesResponse
       */
      Models::DescribeCrossRegionLogBackupFilesResponse describeCrossRegionLogBackupFiles(const Models::DescribeCrossRegionLogBackupFilesRequest &request);

      /**
       * @summary 查询实例最新变配订单
       *
       * @param request DescribeCurrentModifyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCurrentModifyOrderResponse
       */
      Models::DescribeCurrentModifyOrderResponse describeCurrentModifyOrderWithOptions(const Models::DescribeCurrentModifyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例最新变配订单
       *
       * @param request DescribeCurrentModifyOrderRequest
       * @return DescribeCurrentModifyOrderResponse
       */
      Models::DescribeCurrentModifyOrderResponse describeCurrentModifyOrder(const Models::DescribeCurrentModifyOrderRequest &request);

      /**
       * @summary 查询实例资源使用情况
       *
       * @param request DescribeCustinsResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustinsResourceInfoResponse
       */
      Models::DescribeCustinsResourceInfoResponse describeCustinsResourceInfoWithOptions(const Models::DescribeCustinsResourceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例资源使用情况
       *
       * @param request DescribeCustinsResourceInfoRequest
       * @return DescribeCustinsResourceInfoResponse
       */
      Models::DescribeCustinsResourceInfoResponse describeCustinsResourceInfo(const Models::DescribeCustinsResourceInfoRequest &request);

      /**
       * @summary Queries the details of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries information about the tags that are added to an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceByTagsResponse
       */
      Models::DescribeDBInstanceByTagsResponse describeDBInstanceByTagsWithOptions(const Models::DescribeDBInstanceByTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the tags that are added to an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceByTagsRequest
       * @return DescribeDBInstanceByTagsResponse
       */
      Models::DescribeDBInstanceByTagsResponse describeDBInstanceByTags(const Models::DescribeDBInstanceByTagsRequest &request);

      /**
       * @summary 获取实例链路诊断信息
       *
       * @param request DescribeDBInstanceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConnectivityResponse
       */
      Models::DescribeDBInstanceConnectivityResponse describeDBInstanceConnectivityWithOptions(const Models::DescribeDBInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例链路诊断信息
       *
       * @param request DescribeDBInstanceConnectivityRequest
       * @return DescribeDBInstanceConnectivityResponse
       */
      Models::DescribeDBInstanceConnectivityResponse describeDBInstanceConnectivity(const Models::DescribeDBInstanceConnectivityRequest &request);

      /**
       * @summary You can call the DescribeDBInstanceDetail operation to query the details of an instance.
       *
       * @description This operation is phased out.
       *
       * @param request DescribeDBInstanceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceDetailResponse
       */
      Models::DescribeDBInstanceDetailResponse describeDBInstanceDetailWithOptions(const Models::DescribeDBInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeDBInstanceDetail operation to query the details of an instance.
       *
       * @description This operation is phased out.
       *
       * @param request DescribeDBInstanceDetailRequest
       * @return DescribeDBInstanceDetailResponse
       */
      Models::DescribeDBInstanceDetailResponse describeDBInstanceDetail(const Models::DescribeDBInstanceDetailRequest &request);

      /**
       * @summary You can call the DescribeDBInstanceEncryptionKey operation to check whether disk encryption is enabled for an instance. You can also query details about the keys that are used for disk encryption. This operation is supported for instances that run MySQL, SQL Server, or PostgreSQL.
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKeyWithOptions(const Models::DescribeDBInstanceEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeDBInstanceEncryptionKey operation to check whether disk encryption is enabled for an instance. You can also query details about the keys that are used for disk encryption. This operation is supported for instances that run MySQL, SQL Server, or PostgreSQL.
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKey(const Models::DescribeDBInstanceEncryptionKeyRequest &request);

      /**
       * @summary Queries the information about the endpoints of an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       *
       * @param request DescribeDBInstanceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEndpointsResponse
       */
      Models::DescribeDBInstanceEndpointsResponse describeDBInstanceEndpointsWithOptions(const Models::DescribeDBInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the endpoints of an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       *
       * @param request DescribeDBInstanceEndpointsRequest
       * @return DescribeDBInstanceEndpointsResponse
       */
      Models::DescribeDBInstanceEndpointsResponse describeDBInstanceEndpoints(const Models::DescribeDBInstanceEndpointsRequest &request);

      /**
       * @summary Queries the high availability mode and data replication mode of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Query the data replication mode of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96055.html)
       * *   [Query the data replication mode of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/151265.html)
       * *   [Query the data replication mode of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/415433.html)
       *
       * @param request DescribeDBInstanceHAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceHAConfigResponse
       */
      Models::DescribeDBInstanceHAConfigResponse describeDBInstanceHAConfigWithOptions(const Models::DescribeDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the high availability mode and data replication mode of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Query the data replication mode of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96055.html)
       * *   [Query the data replication mode of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/151265.html)
       * *   [Query the data replication mode of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/415433.html)
       *
       * @param request DescribeDBInstanceHAConfigRequest
       * @return DescribeDBInstanceHAConfigResponse
       */
      Models::DescribeDBInstanceHAConfigResponse describeDBInstanceHAConfig(const Models::DescribeDBInstanceHAConfigRequest &request);

      /**
       * @summary Queries the IP address whitelist of an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayListWithOptions(const Models::DescribeDBInstanceIPArrayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelist of an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeDBInstanceIPArrayListRequest
       * @return DescribeDBInstanceIPArrayListResponse
       */
      Models::DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayList(const Models::DescribeDBInstanceIPArrayListRequest &request);

      /**
       * @summary Queries the internal IP address and hostname of the Elastic Compute Service (ECS) instance on which the ApsaraDB RDS for SQL Server instance runs.
       *
       * @description ### [](#)Supported database engines
       * SQL Server
       * ### [](#)Prerequisites
       * *   The RDS instance runs RDS Basic Edition, RDS High-availability Edition, or RDS Cluster Edition. If your RDS instance runs RDS High-availability Edition, make sure that the instance runs SQL Server 2012 or later.
       * *   The RDS instance belongs to a general-purpose or dedicated instance family. The shared instance family is not supported.
       * *   If the RDS instance runs RDS Basic Edition, the instance is created on or after September 02, 2022. You can view the Creation Time parameter of an instance in the Status section of the Basic Information page in the ApsaraDB RDS console.
       * ### [](#)References
       * >  Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       * *   [Connect Kingdee K/3 WISE to an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/124188.html)
       *
       * @param request DescribeDBInstanceIpHostnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceIpHostnameResponse
       */
      Models::DescribeDBInstanceIpHostnameResponse describeDBInstanceIpHostnameWithOptions(const Models::DescribeDBInstanceIpHostnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the internal IP address and hostname of the Elastic Compute Service (ECS) instance on which the ApsaraDB RDS for SQL Server instance runs.
       *
       * @description ### [](#)Supported database engines
       * SQL Server
       * ### [](#)Prerequisites
       * *   The RDS instance runs RDS Basic Edition, RDS High-availability Edition, or RDS Cluster Edition. If your RDS instance runs RDS High-availability Edition, make sure that the instance runs SQL Server 2012 or later.
       * *   The RDS instance belongs to a general-purpose or dedicated instance family. The shared instance family is not supported.
       * *   If the RDS instance runs RDS Basic Edition, the instance is created on or after September 02, 2022. You can view the Creation Time parameter of an instance in the Status section of the Basic Information page in the ApsaraDB RDS console.
       * ### [](#)References
       * >  Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       * *   [Connect Kingdee K/3 WISE to an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/124188.html)
       *
       * @param request DescribeDBInstanceIpHostnameRequest
       * @return DescribeDBInstanceIpHostnameResponse
       */
      Models::DescribeDBInstanceIpHostnameResponse describeDBInstanceIpHostname(const Models::DescribeDBInstanceIpHostnameRequest &request);

      /**
       * @summary Queries the Enhanced Monitoring metrics that are displayed for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [View the Enhanced Monitoring metrics](https://help.aliyun.com/document_detail/299200.html)
       *
       * @param request DescribeDBInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMetricsResponse
       */
      Models::DescribeDBInstanceMetricsResponse describeDBInstanceMetricsWithOptions(const Models::DescribeDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Enhanced Monitoring metrics that are displayed for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [View the Enhanced Monitoring metrics](https://help.aliyun.com/document_detail/299200.html)
       *
       * @param request DescribeDBInstanceMetricsRequest
       * @return DescribeDBInstanceMetricsResponse
       */
      Models::DescribeDBInstanceMetricsResponse describeDBInstanceMetrics(const Models::DescribeDBInstanceMetricsRequest &request);

      /**
       * @summary Queries the monitoring frequency of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(const Models::DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring frequency of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(const Models::DescribeDBInstanceMonitorRequest &request);

      /**
       * @summary Queries all endpoints of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all endpoints of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries all endpoints of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceNetInfoForChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoForChannelResponse
       */
      Models::DescribeDBInstanceNetInfoForChannelResponse describeDBInstanceNetInfoForChannelWithOptions(const Models::DescribeDBInstanceNetInfoForChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all endpoints of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstanceNetInfoForChannelRequest
       * @return DescribeDBInstanceNetInfoForChannelResponse
       */
      Models::DescribeDBInstanceNetInfoForChannelResponse describeDBInstanceNetInfoForChannel(const Models::DescribeDBInstanceNetInfoForChannelRequest &request);

      /**
       * @summary Queries the performance metrics of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(const Models::DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance metrics of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformance(const Models::DescribeDBInstancePerformanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
       *
       * @summary The operation is phased out.
       *
       * @param request DescribeDBInstancePromoteActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePromoteActivityResponse
       */
      Models::DescribeDBInstancePromoteActivityResponse describeDBInstancePromoteActivityWithOptions(const Models::DescribeDBInstancePromoteActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancePromoteActivity is deprecated
       *
       * @summary The operation is phased out.
       *
       * @param request DescribeDBInstancePromoteActivityRequest
       * @return DescribeDBInstancePromoteActivityResponse
       */
      Models::DescribeDBInstancePromoteActivityResponse describeDBInstancePromoteActivity(const Models::DescribeDBInstancePromoteActivityRequest &request);

      /**
       * @summary Queries the settings of shared proxies that are enabled on an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Feature description
       * This operation is used to query the shared proxy settings of an instance that runs MySQL or the read/write splitting settings of an instance that runs SQL Server. For more information about how to query the dedicated proxy settings of an ApsaraDB RDS for MySQL instance, see [DescribeDBProxy](https://help.aliyun.com/document_detail/610506.html).
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature must be enabled for the primary instance.
       * *   The read/write splitting feature must be enabled for the primary instance.
       *
       * @param request DescribeDBInstanceProxyConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceProxyConfigurationResponse
       */
      Models::DescribeDBInstanceProxyConfigurationResponse describeDBInstanceProxyConfigurationWithOptions(const Models::DescribeDBInstanceProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of shared proxies that are enabled on an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Feature description
       * This operation is used to query the shared proxy settings of an instance that runs MySQL or the read/write splitting settings of an instance that runs SQL Server. For more information about how to query the dedicated proxy settings of an ApsaraDB RDS for MySQL instance, see [DescribeDBProxy](https://help.aliyun.com/document_detail/610506.html).
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature must be enabled for the primary instance.
       * *   The read/write splitting feature must be enabled for the primary instance.
       *
       * @param request DescribeDBInstanceProxyConfigurationRequest
       * @return DescribeDBInstanceProxyConfigurationResponse
       */
      Models::DescribeDBInstanceProxyConfigurationResponse describeDBInstanceProxyConfiguration(const Models::DescribeDBInstanceProxyConfigurationRequest &request);

      /**
       * @summary Queries the status and configurations of a native replication instance.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [ApsaraDB RDS for MySQL native replication instances](https://help.aliyun.com/document_detail/2856487.html)
       *
       * @param request DescribeDBInstanceReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceReplicationResponse
       */
      Models::DescribeDBInstanceReplicationResponse describeDBInstanceReplicationWithOptions(const Models::DescribeDBInstanceReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status and configurations of a native replication instance.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [ApsaraDB RDS for MySQL native replication instances](https://help.aliyun.com/document_detail/2856487.html)
       *
       * @param request DescribeDBInstanceReplicationRequest
       * @return DescribeDBInstanceReplicationResponse
       */
      Models::DescribeDBInstanceReplicationResponse describeDBInstanceReplication(const Models::DescribeDBInstanceReplicationRequest &request);

      /**
       * @summary Queries the SSL configurations of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229518.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL configurations of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229518.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @summary Queries the security group rules that are configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSecurityGroupRuleResponse
       */
      Models::DescribeDBInstanceSecurityGroupRuleResponse describeDBInstanceSecurityGroupRuleWithOptions(const Models::DescribeDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security group rules that are configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeDBInstanceSecurityGroupRuleRequest
       * @return DescribeDBInstanceSecurityGroupRuleResponse
       */
      Models::DescribeDBInstanceSecurityGroupRuleResponse describeDBInstanceSecurityGroupRule(const Models::DescribeDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Queries the status of the Transparent Data Encryption (TDE) feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(const Models::DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Transparent Data Encryption (TDE) feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeDBInstanceTDERequest
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDE(const Models::DescribeDBInstanceTDERequest &request);

      /**
       * @summary Queries instances.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries the instances.
       *
       * @description >  The DescribeDBInstancesAsCsv operation is phased out. You can call the DescribeDBInstances operation.
       *
       * @param request DescribeDBInstancesAsCsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesAsCsvResponse
       */
      Models::DescribeDBInstancesAsCsvResponse describeDBInstancesAsCsvWithOptions(const Models::DescribeDBInstancesAsCsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancesAsCsv is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries the instances.
       *
       * @description >  The DescribeDBInstancesAsCsv operation is phased out. You can call the DescribeDBInstances operation.
       *
       * @param request DescribeDBInstancesAsCsvRequest
       * @return DescribeDBInstancesAsCsvResponse
       */
      Models::DescribeDBInstancesAsCsvResponse describeDBInstancesAsCsv(const Models::DescribeDBInstancesAsCsvRequest &request);

      /**
       * @summary Queries the information about an ApsaraDB RDS instance based on the remaining subscription duration of an instance.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeDBInstancesByExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesByExpireTimeResponse
       */
      Models::DescribeDBInstancesByExpireTimeResponse describeDBInstancesByExpireTimeWithOptions(const Models::DescribeDBInstancesByExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an ApsaraDB RDS instance based on the remaining subscription duration of an instance.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeDBInstancesByExpireTimeRequest
       * @return DescribeDBInstancesByExpireTimeResponse
       */
      Models::DescribeDBInstancesByExpireTimeResponse describeDBInstancesByExpireTime(const Models::DescribeDBInstancesByExpireTimeRequest &request);

      /**
       * @summary You can call the DescribeDBInstancePerformance operation to query the performance of instances.
       *
       * @description This operation is phased out.
       *
       * @param request DescribeDBInstancesByPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesByPerformanceResponse
       */
      Models::DescribeDBInstancesByPerformanceResponse describeDBInstancesByPerformanceWithOptions(const Models::DescribeDBInstancesByPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeDBInstancePerformance operation to query the performance of instances.
       *
       * @description This operation is phased out.
       *
       * @param request DescribeDBInstancesByPerformanceRequest
       * @return DescribeDBInstancesByPerformanceResponse
       */
      Models::DescribeDBInstancesByPerformanceResponse describeDBInstancesByPerformance(const Models::DescribeDBInstancesByPerformanceRequest &request);

      /**
       * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries a list of instances.
       *
       * @description This operation is phased out.
       *
       * @param request DescribeDBInstancesForCloneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesForCloneResponse
       */
      Models::DescribeDBInstancesForCloneResponse describeDBInstancesForCloneWithOptions(const Models::DescribeDBInstancesForCloneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDBInstancesForClone is deprecated, please use Rds::2014-08-15::DescribeDBInstances instead.
       *
       * @summary Queries a list of instances.
       *
       * @description This operation is phased out.
       *
       * @param request DescribeDBInstancesForCloneRequest
       * @return DescribeDBInstancesForCloneResponse
       */
      Models::DescribeDBInstancesForCloneResponse describeDBInstancesForClone(const Models::DescribeDBInstancesForCloneRequest &request);

      /**
       * @summary Queries minor engine versions that are available for an ApsaraDB RDS for MySQL instance or an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)Usage notes
       * Before you purchase or upgrade an instance that runs MySQL or PostgreSQL, you can call the DescribeDBMiniEngineVersions operation to query the minor engine versions that are available for the instance.
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersionsWithOptions(const Models::DescribeDBMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries minor engine versions that are available for an ApsaraDB RDS for MySQL instance or an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)Usage notes
       * Before you purchase or upgrade an instance that runs MySQL or PostgreSQL, you can call the DescribeDBMiniEngineVersions operation to query the minor engine versions that are available for the instance.
       *
       * @param request DescribeDBMiniEngineVersionsRequest
       * @return DescribeDBMiniEngineVersionsResponse
       */
      Models::DescribeDBMiniEngineVersionsResponse describeDBMiniEngineVersions(const Models::DescribeDBMiniEngineVersionsRequest &request);

      /**
       * @summary Queries the settings of the database proxy feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       *
       * @param request DescribeDBProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyResponse
       */
      Models::DescribeDBProxyResponse describeDBProxyWithOptions(const Models::DescribeDBProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of the database proxy feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       *
       * @param request DescribeDBProxyRequest
       * @return DescribeDBProxyResponse
       */
      Models::DescribeDBProxyResponse describeDBProxy(const Models::DescribeDBProxyRequest &request);

      /**
       * @summary Queries the information about the database proxy endpoints of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       *
       * @param request DescribeDBProxyEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyEndpointResponse
       */
      Models::DescribeDBProxyEndpointResponse describeDBProxyEndpointWithOptions(const Models::DescribeDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the database proxy endpoints of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       *
       * @param request DescribeDBProxyEndpointRequest
       * @return DescribeDBProxyEndpointResponse
       */
      Models::DescribeDBProxyEndpointResponse describeDBProxyEndpoint(const Models::DescribeDBProxyEndpointRequest &request);

      /**
       * @summary Queries the performance data of the database proxy for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * >  Starting October 17, 2023, ApsaraDB RDS provides a dedicated proxy free of charge for each ApsaraDB RDS for MySQL instance on RDS Cluster Edition. For more information, see [[Special offers/Price changes\\] One proxy is provided free of charge for ApsaraDB RDS for MySQL instances on RDS Cluster Edition](~~2555466~~).
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [View the monitoring data of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/194241.html)
       * *   [View the monitoring data of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418275.html)
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformanceWithOptions(const Models::DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of the database proxy for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * >  Starting October 17, 2023, ApsaraDB RDS provides a dedicated proxy free of charge for each ApsaraDB RDS for MySQL instance on RDS Cluster Edition. For more information, see [[Special offers/Price changes\\] One proxy is provided free of charge for ApsaraDB RDS for MySQL instances on RDS Cluster Edition](~~2555466~~).
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [View the monitoring data of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/194241.html)
       * *   [View the monitoring data of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418275.html)
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformance(const Models::DescribeDBProxyPerformanceRequest &request);

      /**
       * @summary Queries the distributed transaction whitelists of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Configures a distributed transaction whitelist for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDTCSecurityIpHostsForSQLServerResponse
       */
      Models::DescribeDTCSecurityIpHostsForSQLServerResponse describeDTCSecurityIpHostsForSQLServerWithOptions(const Models::DescribeDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distributed transaction whitelists of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Configures a distributed transaction whitelist for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request DescribeDTCSecurityIpHostsForSQLServerRequest
       * @return DescribeDTCSecurityIpHostsForSQLServerResponse
       */
      Models::DescribeDTCSecurityIpHostsForSQLServerResponse describeDTCSecurityIpHostsForSQLServer(const Models::DescribeDTCSecurityIpHostsForSQLServerRequest &request);

      /**
       * @summary Queries the details about the databases on an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabasesWithOptions(const Models::DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the databases on an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeDatabasesRequest
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabases(const Models::DescribeDatabasesRequest &request);

      /**
       * @summary Queries information about an ApsaraDB MyBase dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances in a cluster at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request DescribeDedicatedHostGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostGroupsResponse
       */
      Models::DescribeDedicatedHostGroupsResponse describeDedicatedHostGroupsWithOptions(const Models::DescribeDedicatedHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an ApsaraDB MyBase dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances in a cluster at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request DescribeDedicatedHostGroupsRequest
       * @return DescribeDedicatedHostGroupsResponse
       */
      Models::DescribeDedicatedHostGroupsResponse describeDedicatedHostGroups(const Models::DescribeDedicatedHostGroupsRequest &request);

      /**
       * @summary Queries the information about the hosts in a dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request DescribeDedicatedHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(const Models::DescribeDedicatedHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the hosts in a dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request DescribeDedicatedHostsRequest
       * @return DescribeDedicatedHostsResponse
       */
      Models::DescribeDedicatedHostsResponse describeDedicatedHosts(const Models::DescribeDedicatedHostsRequest &request);

      /**
       * @summary Queries the data backup files of an ApsaraDB RDS instance that is released.
       *
       * @description ### Supported database engine
       * MySQL
       * > This operation is available only for instances that use local disks.
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * For more information about how to retain the data backup files of an instance after the instance is released, see [Configure automatic backup](https://help.aliyun.com/document_detail/98818.html).
       *
       * @param request DescribeDetachedBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackupsWithOptions(const Models::DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data backup files of an ApsaraDB RDS instance that is released.
       *
       * @description ### Supported database engine
       * MySQL
       * > This operation is available only for instances that use local disks.
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * For more information about how to retain the data backup files of an instance after the instance is released, see [Configure automatic backup](https://help.aliyun.com/document_detail/98818.html).
       *
       * @param request DescribeDetachedBackupsRequest
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackups(const Models::DescribeDetachedBackupsRequest &request);

      /**
       * @summary Queries the error logs of an instance over a specific time range.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeErrorLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeErrorLogsResponse
       */
      Models::DescribeErrorLogsResponse describeErrorLogsWithOptions(const Models::DescribeErrorLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error logs of an instance over a specific time range.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeErrorLogsRequest
       * @return DescribeErrorLogsResponse
       */
      Models::DescribeErrorLogsResponse describeErrorLogs(const Models::DescribeErrorLogsRequest &request);

      /**
       * @summary Queries historical events of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Historical events of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/129759.html)
       * *   [Historical events of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/131008.html)
       * *   [Historical events of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/131013.html)
       * *   [Historical events of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/131010.html)
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical events of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Historical events of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/129759.html)
       * *   [Historical events of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/131008.html)
       * *   [Historical events of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/131013.html)
       * *   [Historical events of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/131010.html)
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Queries the information about a global active database cluster or information about all global active database clusters in a region.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request DescribeGadInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstancesWithOptions(const Models::DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a global active database cluster or information about all global active database clusters in a region.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *
       * @param request DescribeGadInstancesRequest
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstances(const Models::DescribeGadInstancesRequest &request);

      /**
       * @summary Queries the availability check method of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * [What is availability detection?](https://help.aliyun.com/document_detail/207467.html)
       *
       * @param request DescribeHADiagnoseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHADiagnoseConfigResponse
       */
      Models::DescribeHADiagnoseConfigResponse describeHADiagnoseConfigWithOptions(const Models::DescribeHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the availability check method of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * [What is availability detection?](https://help.aliyun.com/document_detail/207467.html)
       *
       * @param request DescribeHADiagnoseConfigRequest
       * @return DescribeHADiagnoseConfigResponse
       */
      Models::DescribeHADiagnoseConfigResponse describeHADiagnoseConfig(const Models::DescribeHADiagnoseConfigRequest &request);

      /**
       * @summary Queries the settings of the automatic primary/secondary switchover feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeHASwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHASwitchConfigResponse
       */
      Models::DescribeHASwitchConfigResponse describeHASwitchConfigWithOptions(const Models::DescribeHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of the automatic primary/secondary switchover feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeHASwitchConfigRequest
       * @return DescribeHASwitchConfigResponse
       */
      Models::DescribeHASwitchConfigResponse describeHASwitchConfig(const Models::DescribeHASwitchConfigRequest &request);

      /**
       * @summary Queries historical events in the event center.
       *
       * @param request DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical events in the event center.
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Queries the statistics of historical events in the event center.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStatWithOptions(const Models::DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of historical events in the event center.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStat(const Models::DescribeHistoryEventsStatRequest &request);

      /**
       * @summary Queries the historical tasks that are created within 30 days.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Tasks of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/474275.html)
       * *   [Tasks of an ApsaraDB RDS for PostrgreSQL instance](https://help.aliyun.com/document_detail/474537.html)
       * *   [Tasks of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/614826.html)
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical tasks that are created within 30 days.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Tasks of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/474275.html)
       * *   [Tasks of an ApsaraDB RDS for PostrgreSQL instance](https://help.aliyun.com/document_detail/474537.html)
       * *   [Tasks of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/614826.html)
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Collects tasks in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Collects tasks in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary 查询主机组弹性策略参数
       *
       * @param request DescribeHostGroupElasticStrategyParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostGroupElasticStrategyParametersResponse
       */
      Models::DescribeHostGroupElasticStrategyParametersResponse describeHostGroupElasticStrategyParametersWithOptions(const Models::DescribeHostGroupElasticStrategyParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主机组弹性策略参数
       *
       * @param request DescribeHostGroupElasticStrategyParametersRequest
       * @return DescribeHostGroupElasticStrategyParametersResponse
       */
      Models::DescribeHostGroupElasticStrategyParametersResponse describeHostGroupElasticStrategyParameters(const Models::DescribeHostGroupElasticStrategyParametersRequest &request);

      /**
       * @summary Queries the webshell URL that is used to connect to the host of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)Prerequisite
       * *   The instance meets the following requirements:
       *     *   The instance resides in a region other than the China (Zhangjiakou) region.
       *     *   The instance runs RDS Basic Edition, RDS Cluster Edition, or RDS High-availability Edition. If your instance runs RDS High-availability Edition, make sure that the instance runs SQL Server 2012 or later.
       *     *   The instance belongs to the general-purpose or dedicated instance family. The shared instance family is not supported.
       *     *   The instance resides in a virtual private cloud (VPC). For more information about how to change the network type of an RDS instance, see [Change the network type](https://help.aliyun.com/document_detail/95707.html).
       *     *   If the instance runs RDS High-availability Edition or RDS Cluster Edition, the instance is created on or after January 1, 2021. If the instance runs RDS Basic Edition, the instance is created on or after September 02, 2022. You can view the **Creation Time** parameter of an instance in the **Status** section of the **Basic Information** page in the ApsaraDB RDS console.
       * *   Your **Alibaba Cloud account** is used for logons.
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Create a host account and use the host account for logons](https://help.aliyun.com/document_detail/354862.html)
       *
       * @param request DescribeHostWebShellRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostWebShellResponse
       */
      Models::DescribeHostWebShellResponse describeHostWebShellWithOptions(const Models::DescribeHostWebShellRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the webshell URL that is used to connect to the host of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)Prerequisite
       * *   The instance meets the following requirements:
       *     *   The instance resides in a region other than the China (Zhangjiakou) region.
       *     *   The instance runs RDS Basic Edition, RDS Cluster Edition, or RDS High-availability Edition. If your instance runs RDS High-availability Edition, make sure that the instance runs SQL Server 2012 or later.
       *     *   The instance belongs to the general-purpose or dedicated instance family. The shared instance family is not supported.
       *     *   The instance resides in a virtual private cloud (VPC). For more information about how to change the network type of an RDS instance, see [Change the network type](https://help.aliyun.com/document_detail/95707.html).
       *     *   If the instance runs RDS High-availability Edition or RDS Cluster Edition, the instance is created on or after January 1, 2021. If the instance runs RDS Basic Edition, the instance is created on or after September 02, 2022. You can view the **Creation Time** parameter of an instance in the **Status** section of the **Basic Information** page in the ApsaraDB RDS console.
       * *   Your **Alibaba Cloud account** is used for logons.
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Create a host account and use the host account for logons](https://help.aliyun.com/document_detail/354862.html)
       *
       * @param request DescribeHostWebShellRequest
       * @return DescribeHostWebShellResponse
       */
      Models::DescribeHostWebShellResponse describeHostWebShell(const Models::DescribeHostWebShellRequest &request);

      /**
       * @summary Queries the automatic renewal status of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic renewal status of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Queries the cross-region backup settings of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeInstanceCrossBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceCrossBackupPolicyResponse
       */
      Models::DescribeInstanceCrossBackupPolicyResponse describeInstanceCrossBackupPolicyWithOptions(const Models::DescribeInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cross-region backup settings of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request DescribeInstanceCrossBackupPolicyRequest
       * @return DescribeInstanceCrossBackupPolicyResponse
       */
      Models::DescribeInstanceCrossBackupPolicyResponse describeInstanceCrossBackupPolicy(const Models::DescribeInstanceCrossBackupPolicyRequest &request);

      /**
       * @summary Queries the reserved keywords of an instance. The reserved keywords cannot be used for the usernames of accounts or the names of databases.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeInstanceKeywordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceKeywordsResponse
       */
      Models::DescribeInstanceKeywordsResponse describeInstanceKeywordsWithOptions(const Models::DescribeInstanceKeywordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reserved keywords of an instance. The reserved keywords cannot be used for the usernames of accounts or the names of databases.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request DescribeInstanceKeywordsRequest
       * @return DescribeInstanceKeywordsResponse
       */
      Models::DescribeInstanceKeywordsResponse describeInstanceKeywords(const Models::DescribeInstanceKeywordsRequest &request);

      /**
       * @summary Queries associated whitelists by instance name.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeInstanceLinkedWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceLinkedWhitelistTemplateResponse
       */
      Models::DescribeInstanceLinkedWhitelistTemplateResponse describeInstanceLinkedWhitelistTemplateWithOptions(const Models::DescribeInstanceLinkedWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries associated whitelists by instance name.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeInstanceLinkedWhitelistTemplateRequest
       * @return DescribeInstanceLinkedWhitelistTemplateResponse
       */
      Models::DescribeInstanceLinkedWhitelistTemplateResponse describeInstanceLinkedWhitelistTemplate(const Models::DescribeInstanceLinkedWhitelistTemplateRequest &request);

      /**
       * @summary Checks whether the specified resource of Key Management Service (KMS) is associated with an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeKmsAssociateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKmsAssociateResourcesResponse
       */
      Models::DescribeKmsAssociateResourcesResponse describeKmsAssociateResourcesWithOptions(const Models::DescribeKmsAssociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the specified resource of Key Management Service (KMS) is associated with an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeKmsAssociateResourcesRequest
       * @return DescribeKmsAssociateResourcesResponse
       */
      Models::DescribeKmsAssociateResourcesResponse describeKmsAssociateResources(const Models::DescribeKmsAssociateResourcesRequest &request);

      /**
       * @summary Queries the time range to which an RDS instance can be restored.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   MariaDB
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTimeWithOptions(const Models::DescribeLocalAvailableRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time range to which an RDS instance can be restored.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   MariaDB
       *
       * @param request DescribeLocalAvailableRecoveryTimeRequest
       * @return DescribeLocalAvailableRecoveryTimeResponse
       */
      Models::DescribeLocalAvailableRecoveryTimeResponse describeLocalAvailableRecoveryTime(const Models::DescribeLocalAvailableRecoveryTimeRequest &request);

      /**
       * @summary Queries the log backup files of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server
       * >  You can call the DescribeBinlogFiles operation to query the log files of instances that run different database engines.
       *
       * @param request DescribeLogBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogBackupFilesResponse
       */
      Models::DescribeLogBackupFilesResponse describeLogBackupFilesWithOptions(const Models::DescribeLogBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log backup files of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server
       * >  You can call the DescribeBinlogFiles operation to query the log files of instances that run different database engines.
       *
       * @param request DescribeLogBackupFilesRequest
       * @return DescribeLogBackupFilesResponse
       */
      Models::DescribeLogBackupFilesResponse describeLogBackupFiles(const Models::DescribeLogBackupFilesRequest &request);

      /**
       * @summary 获取RDS营销项目中待升级实例信息
       *
       * @param request DescribeMarketingActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMarketingActivityResponse
       */
      Models::DescribeMarketingActivityResponse describeMarketingActivityWithOptions(const Models::DescribeMarketingActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取RDS营销项目中待升级实例信息
       *
       * @param request DescribeMarketingActivityRequest
       * @return DescribeMarketingActivityResponse
       */
      Models::DescribeMarketingActivityResponse describeMarketingActivity(const Models::DescribeMarketingActivityRequest &request);

      /**
       * @summary 查询全密态规则
       *
       * @param request DescribeMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRulesWithOptions(const Models::DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询全密态规则
       *
       * @param request DescribeMaskingRulesRequest
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRules(const Models::DescribeMaskingRulesRequest &request);

      /**
       * @summary Queries the information about the databases and tables that can be restored from a specified backup set.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * > This operation is available for RDS instances that run MySQL 8.0, MySQL 5.7, and MySQL 5.6 on RDS High-availability Edition with local disks.
       * ### [](#)Description
       * Before you call the [RestoreTable](https://help.aliyun.com/document_detail/131510.html) operation to restore individual databases or tables of an ApsaraDB RDS for MySQL instance, you can call this operation to query the information about the databases and tables that can be restored. For more information, see [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html).
       *
       * @param request DescribeMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaListWithOptions(const Models::DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the databases and tables that can be restored from a specified backup set.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * > This operation is available for RDS instances that run MySQL 8.0, MySQL 5.7, and MySQL 5.6 on RDS High-availability Edition with local disks.
       * ### [](#)Description
       * Before you call the [RestoreTable](https://help.aliyun.com/document_detail/131510.html) operation to restore individual databases or tables of an ApsaraDB RDS for MySQL instance, you can call this operation to query the information about the databases and tables that can be restored. For more information, see [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html).
       *
       * @param request DescribeMetaListRequest
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaList(const Models::DescribeMetaListRequest &request);

      /**
       * @summary Queries a task that is used to import the backup data of an ApsaraDB RDS for SQL Server instance to an Object Storage Service (OSS) bucket.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request DescribeMigrateTaskByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrateTaskByIdResponse
       */
      Models::DescribeMigrateTaskByIdResponse describeMigrateTaskByIdWithOptions(const Models::DescribeMigrateTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a task that is used to import the backup data of an ApsaraDB RDS for SQL Server instance to an Object Storage Service (OSS) bucket.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request DescribeMigrateTaskByIdRequest
       * @return DescribeMigrateTaskByIdResponse
       */
      Models::DescribeMigrateTaskByIdResponse describeMigrateTaskById(const Models::DescribeMigrateTaskByIdRequest &request);

      /**
       * @summary Queries the tasks that are created to migrate the backup data of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)Usage notes
       * This operation allows you to query the migration tasks that are created for the instance over the last week.
       * ### [](#)Precautions
       * *   This operation is supported only for migration tasks that are created to migrate full backup files.
       * *   This operation is not supported for instances that run SQL Server 2017 on RDS Cluster Edition.
       *
       * @param request DescribeMigrateTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrateTasksResponse
       */
      Models::DescribeMigrateTasksResponse describeMigrateTasksWithOptions(const Models::DescribeMigrateTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tasks that are created to migrate the backup data of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)Usage notes
       * This operation allows you to query the migration tasks that are created for the instance over the last week.
       * ### [](#)Precautions
       * *   This operation is supported only for migration tasks that are created to migrate full backup files.
       * *   This operation is not supported for instances that run SQL Server 2017 on RDS Cluster Edition.
       *
       * @param request DescribeMigrateTasksRequest
       * @return DescribeMigrateTasksResponse
       */
      Models::DescribeMigrateTasksResponse describeMigrateTasks(const Models::DescribeMigrateTasksRequest &request);

      /**
       * @summary Queries the details about the modifications to the pg_hba.conf file of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS PostgreSQL
       *
       * @param request DescribeModifyPGHbaConfigLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyPGHbaConfigLogResponse
       */
      Models::DescribeModifyPGHbaConfigLogResponse describeModifyPGHbaConfigLogWithOptions(const Models::DescribeModifyPGHbaConfigLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the modifications to the pg_hba.conf file of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS PostgreSQL
       *
       * @param request DescribeModifyPGHbaConfigLogRequest
       * @return DescribeModifyPGHbaConfigLogResponse
       */
      Models::DescribeModifyPGHbaConfigLogResponse describeModifyPGHbaConfigLog(const Models::DescribeModifyPGHbaConfigLogRequest &request);

      /**
       * @summary Queries the parameter modification logs of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeModifyParameterLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(const Models::DescribeModifyParameterLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter modification logs of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeModifyParameterLogRequest
       * @return DescribeModifyParameterLogResponse
       */
      Models::DescribeModifyParameterLogResponse describeModifyParameterLog(const Models::DescribeModifyParameterLogRequest &request);

      /**
       * @summary Queries the backup files that are included in a backup data migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       * ### [Usage notes](#)
       * This operation is not supported for instances that run SQL Server 2017 EE or SQL Server 2019 EE.
       *
       * @param request DescribeOssDownloadsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssDownloadsResponse
       */
      Models::DescribeOssDownloadsResponse describeOssDownloadsWithOptions(const Models::DescribeOssDownloadsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup files that are included in a backup data migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       * ### [Usage notes](#)
       * This operation is not supported for instances that run SQL Server 2017 EE or SQL Server 2019 EE.
       *
       * @param request DescribeOssDownloadsRequest
       * @return DescribeOssDownloadsResponse
       */
      Models::DescribeOssDownloadsResponse describeOssDownloads(const Models::DescribeOssDownloadsRequest &request);

      /**
       * @summary Queries the configuration of the pg_hba.conf file of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS PostgreSQL
       *
       * @param request DescribePGHbaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePGHbaConfigResponse
       */
      Models::DescribePGHbaConfigResponse describePGHbaConfigWithOptions(const Models::DescribePGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of the pg_hba.conf file of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS PostgreSQL
       *
       * @param request DescribePGHbaConfigRequest
       * @return DescribePGHbaConfigResponse
       */
      Models::DescribePGHbaConfigResponse describePGHbaConfig(const Models::DescribePGHbaConfigRequest &request);

      /**
       * @summary Queries the information about a parameter template.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a parameter template.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary Queries the parameter templates that are available in a region.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter templates that are available in a region.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Queries parameter templates.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries parameter templates.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the parameter settings of an instance.
       *
       * @description ### Applicable engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter settings of an instance.
       *
       * @description ### Applicable engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Queries extensions that are installed on a database.
       *
       * @description ### Supported database engines
       * RDS PostgreSQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DescribePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostgresExtensionsResponse
       */
      Models::DescribePostgresExtensionsResponse describePostgresExtensionsWithOptions(const Models::DescribePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries extensions that are installed on a database.
       *
       * @description ### Supported database engines
       * RDS PostgreSQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request DescribePostgresExtensionsRequest
       * @return DescribePostgresExtensionsResponse
       */
      Models::DescribePostgresExtensionsResponse describePostgresExtensions(const Models::DescribePostgresExtensionsRequest &request);

      /**
       * @summary Queries the price of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param tmpReq DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary 查询RDS快捷售卖配置
       *
       * @param request DescribeQuickSaleConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuickSaleConfigResponse
       */
      Models::DescribeQuickSaleConfigResponse describeQuickSaleConfigWithOptions(const Models::DescribeQuickSaleConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RDS快捷售卖配置
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
       * @summary Queries whether Cloud Assistant Agent is installed on one or more RDS Custom instances. If Cloud Assistant Agent is installed, the system queries the total number of Cloud Assistant commands that have been run, the number of Cloud Assistant commands that are being run, and the time when Cloud Assistant commands were last run.
       *
       * @description *   Before you run commands on or send files to instances, especially new instances, we recommend that you query the status of Cloud Assistant on the instances by calling this operation and checking the return value of `CloudAssistantStatus`. Run commands on or send files to the instances only when the return value is `true`.
       * *   During a paged query, when you retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param tmpReq DescribeRCCloudAssistantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCCloudAssistantStatusResponse
       */
      Models::DescribeRCCloudAssistantStatusResponse describeRCCloudAssistantStatusWithOptions(const Models::DescribeRCCloudAssistantStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Cloud Assistant Agent is installed on one or more RDS Custom instances. If Cloud Assistant Agent is installed, the system queries the total number of Cloud Assistant commands that have been run, the number of Cloud Assistant commands that are being run, and the time when Cloud Assistant commands were last run.
       *
       * @description *   Before you run commands on or send files to instances, especially new instances, we recommend that you query the status of Cloud Assistant on the instances by calling this operation and checking the return value of `CloudAssistantStatus`. Run commands on or send files to the instances only when the return value is `true`.
       * *   During a paged query, when you retrieve the first page of results, set `MaxResults` to specify the maximum number of entries to return in the call. The return value of `NextToken` is a pagination token that can be used in the next call to retrieve a new page of results. When you retrieve a new page of results, set `NextToken` to the `NextToken` value returned in the previous call and set `MaxResults` to specify the maximum number of entries to return in this call.
       *
       * @param request DescribeRCCloudAssistantStatusRequest
       * @return DescribeRCCloudAssistantStatusResponse
       */
      Models::DescribeRCCloudAssistantStatusResponse describeRCCloudAssistantStatus(const Models::DescribeRCCloudAssistantStatusRequest &request);

      /**
       * @summary Queries the kubeconfig file of a Container Service for Kubernetes (ACK) cluster in which an RDS Custom instance resides.
       *
       * @description Kubeconfig files store identity and authentication information that is used by clients to access ACK clusters. To use kubectl to manage an ACK cluster, you must use the kubeconfig file to connect to the ACK cluster. We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
       *
       * @param request DescribeRCClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClusterConfigResponse
       */
      Models::DescribeRCClusterConfigResponse describeRCClusterConfigWithOptions(const Models::DescribeRCClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the kubeconfig file of a Container Service for Kubernetes (ACK) cluster in which an RDS Custom instance resides.
       *
       * @description Kubeconfig files store identity and authentication information that is used by clients to access ACK clusters. To use kubectl to manage an ACK cluster, you must use the kubeconfig file to connect to the ACK cluster. We recommend that you keep kubeconfig files confidential and revoke kubeconfig files that are not in use. This helps prevent data leaks caused by the disclosure of kubeconfig files.
       *
       * @param request DescribeRCClusterConfigRequest
       * @return DescribeRCClusterConfigResponse
       */
      Models::DescribeRCClusterConfigResponse describeRCClusterConfig(const Models::DescribeRCClusterConfigRequest &request);

      /**
       * @summary Queries the RDS custom nodes in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeRCClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClusterNodesResponse
       */
      Models::DescribeRCClusterNodesResponse describeRCClusterNodesWithOptions(const Models::DescribeRCClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RDS custom nodes in a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeRCClusterNodesRequest
       * @return DescribeRCClusterNodesResponse
       */
      Models::DescribeRCClusterNodesResponse describeRCClusterNodes(const Models::DescribeRCClusterNodesRequest &request);

      /**
       * @summary Queries Container Service for Kubernetes (ACK) clusters to which RDS Custom nodes reside in a specific region.
       *
       * @param request DescribeRCClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCClustersResponse
       */
      Models::DescribeRCClustersResponse describeRCClustersWithOptions(const Models::DescribeRCClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Container Service for Kubernetes (ACK) clusters to which RDS Custom nodes reside in a specific region.
       *
       * @param request DescribeRCClustersRequest
       * @return DescribeRCClustersResponse
       */
      Models::DescribeRCClustersResponse describeRCClusters(const Models::DescribeRCClustersRequest &request);

      /**
       * @summary Queries the details of one or more deployment sets for RDS Custom instances. Before you call this operation, you must specify parameters such as DeploymentSetIds, Strategy, and DeploymentSetName.
       *
       * @param request DescribeRCDeploymentSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCDeploymentSetsResponse
       */
      Models::DescribeRCDeploymentSetsResponse describeRCDeploymentSetsWithOptions(const Models::DescribeRCDeploymentSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more deployment sets for RDS Custom instances. Before you call this operation, you must specify parameters such as DeploymentSetIds, Strategy, and DeploymentSetName.
       *
       * @param request DescribeRCDeploymentSetsRequest
       * @return DescribeRCDeploymentSetsResponse
       */
      Models::DescribeRCDeploymentSetsResponse describeRCDeploymentSets(const Models::DescribeRCDeploymentSetsRequest &request);

      /**
       * @summary Queries the disk information about an RDS Custom instance.
       *
       * @param request DescribeRCDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCDisksResponse
       */
      Models::DescribeRCDisksResponse describeRCDisksWithOptions(const Models::DescribeRCDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disk information about an RDS Custom instance.
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
       * @summary Queries custom images that can be used to create an RDS Custom instance. Before you call this operation, you must specify parameters such as RegionId.
       *
       * @param request DescribeRCImageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCImageListResponse
       */
      Models::DescribeRCImageListResponse describeRCImageListWithOptions(const Models::DescribeRCImageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom images that can be used to create an RDS Custom instance. Before you call this operation, you must specify parameters such as RegionId.
       *
       * @param request DescribeRCImageListRequest
       * @return DescribeRCImageListResponse
       */
      Models::DescribeRCImageListResponse describeRCImageList(const Models::DescribeRCImageListRequest &request);

      /**
       * @summary Queries the details of an RDS Custom instance.
       *
       * @param request DescribeRCInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceAttributeResponse
       */
      Models::DescribeRCInstanceAttributeResponse describeRCInstanceAttributeWithOptions(const Models::DescribeRCInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an RDS Custom instance.
       *
       * @param request DescribeRCInstanceAttributeRequest
       * @return DescribeRCInstanceAttributeResponse
       */
      Models::DescribeRCInstanceAttributeResponse describeRCInstanceAttribute(const Models::DescribeRCInstanceAttributeRequest &request);

      /**
       * @summary Queries the number of DDos attacks on an RDS Custom for SQL Server instance and monitors the security status of the instance in real time to assess potential security risks.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request DescribeRCInstanceDdosCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceDdosCountResponse
       */
      Models::DescribeRCInstanceDdosCountResponse describeRCInstanceDdosCountWithOptions(const Models::DescribeRCInstanceDdosCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of DDos attacks on an RDS Custom for SQL Server instance and monitors the security status of the instance in real time to assess potential security risks.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request DescribeRCInstanceDdosCountRequest
       * @return DescribeRCInstanceDdosCountResponse
       */
      Models::DescribeRCInstanceDdosCountResponse describeRCInstanceDdosCount(const Models::DescribeRCInstanceDdosCountRequest &request);

      /**
       * @summary Queries the system events of ApsaraDB RDS instances. When you call this operation, you can specify parameters, such as InstanceId and EventType, in the request. By default, non-active system events are queried.
       *
       * @description *   You can query system events that were completed within the last 30 days. No limits apply to the time range for querying uncompleted system events.
       * *   If you do not specify the EventCycleStatus or InstanceEventCycleStatus parameter, only system events in the Avoidated, Executed, Canceled, or Failed state are included in the query results by default.
       * *   You can also specify the InstanceEventCycleStatus parameter in the request to query the system events that are in the Scheduled, Executing, or Inquiring state.
       *
       * @param request DescribeRCInstanceHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceHistoryEventsResponse
       */
      Models::DescribeRCInstanceHistoryEventsResponse describeRCInstanceHistoryEventsWithOptions(const Models::DescribeRCInstanceHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system events of ApsaraDB RDS instances. When you call this operation, you can specify parameters, such as InstanceId and EventType, in the request. By default, non-active system events are queried.
       *
       * @description *   You can query system events that were completed within the last 30 days. No limits apply to the time range for querying uncompleted system events.
       * *   If you do not specify the EventCycleStatus or InstanceEventCycleStatus parameter, only system events in the Avoidated, Executed, Canceled, or Failed state are included in the query results by default.
       * *   You can also specify the InstanceEventCycleStatus parameter in the request to query the system events that are in the Scheduled, Executing, or Inquiring state.
       *
       * @param request DescribeRCInstanceHistoryEventsRequest
       * @return DescribeRCInstanceHistoryEventsResponse
       */
      Models::DescribeRCInstanceHistoryEventsResponse describeRCInstanceHistoryEvents(const Models::DescribeRCInstanceHistoryEventsRequest &request);

      /**
       * @summary Queries the protection information about an RDS Custom for SQL Server instance and the details of the Anti-DDoS Origin instance to which the RDS Custom instance is added.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * >  If one or more assets of the current Alibaba Cloud account are added to an [Anti-DDoS Origin instance](https://help.aliyun.com/document_detail/63643.html), you can call the DescribeRCInstanceIpAddress operation to query the DDoS mitigation information and the details of the Anti-DDoS Origin instance. The information and the details include the basic protection threshold and traffic scrubbing threshold for the assets, DDoS mitigation status of the assets, ID of the instance, and the mitigation status of the instance.
       *
       * @param request DescribeRCInstanceIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceIpAddressResponse
       */
      Models::DescribeRCInstanceIpAddressResponse describeRCInstanceIpAddressWithOptions(const Models::DescribeRCInstanceIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protection information about an RDS Custom for SQL Server instance and the details of the Anti-DDoS Origin instance to which the RDS Custom instance is added.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       * >  If one or more assets of the current Alibaba Cloud account are added to an [Anti-DDoS Origin instance](https://help.aliyun.com/document_detail/63643.html), you can call the DescribeRCInstanceIpAddress operation to query the DDoS mitigation information and the details of the Anti-DDoS Origin instance. The information and the details include the basic protection threshold and traffic scrubbing threshold for the assets, DDoS mitigation status of the assets, ID of the instance, and the mitigation status of the instance.
       *
       * @param request DescribeRCInstanceIpAddressRequest
       * @return DescribeRCInstanceIpAddressResponse
       */
      Models::DescribeRCInstanceIpAddressResponse describeRCInstanceIpAddress(const Models::DescribeRCInstanceIpAddressRequest &request);

      /**
       * @summary Queries the instance families of RDS Custom instances.
       *
       * @param request DescribeRCInstanceTypeFamiliesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceTypeFamiliesResponse
       */
      Models::DescribeRCInstanceTypeFamiliesResponse describeRCInstanceTypeFamiliesWithOptions(const Models::DescribeRCInstanceTypeFamiliesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance families of RDS Custom instances.
       *
       * @param request DescribeRCInstanceTypeFamiliesRequest
       * @return DescribeRCInstanceTypeFamiliesResponse
       */
      Models::DescribeRCInstanceTypeFamiliesResponse describeRCInstanceTypeFamilies(const Models::DescribeRCInstanceTypeFamiliesRequest &request);

      /**
       * @summary Queries the instance types of RDS Custom instances.
       *
       * @param tmpReq DescribeRCInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceTypesResponse
       */
      Models::DescribeRCInstanceTypesResponse describeRCInstanceTypesWithOptions(const Models::DescribeRCInstanceTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance types of RDS Custom instances.
       *
       * @param request DescribeRCInstanceTypesRequest
       * @return DescribeRCInstanceTypesResponse
       */
      Models::DescribeRCInstanceTypesResponse describeRCInstanceTypes(const Models::DescribeRCInstanceTypesRequest &request);

      /**
       * @summary Queries the Virtual Network Computing (VNC) logon address of an RDS Custom instance.
       *
       * @description The address returned is valid only for 15 seconds. If you do not use the returned address to establish a connection within 15 seconds, the address expires and you must call the operation again to obtain a new address.
       *
       * @param request DescribeRCInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstanceVncUrlResponse
       */
      Models::DescribeRCInstanceVncUrlResponse describeRCInstanceVncUrlWithOptions(const Models::DescribeRCInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Virtual Network Computing (VNC) logon address of an RDS Custom instance.
       *
       * @description The address returned is valid only for 15 seconds. If you do not use the returned address to establish a connection within 15 seconds, the address expires and you must call the operation again to obtain a new address.
       *
       * @param request DescribeRCInstanceVncUrlRequest
       * @return DescribeRCInstanceVncUrlResponse
       */
      Models::DescribeRCInstanceVncUrlResponse describeRCInstanceVncUrl(const Models::DescribeRCInstanceVncUrlRequest &request);

      /**
       * @summary Queries the details of an RDS Custom instance.
       *
       * @param request DescribeRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCInstancesResponse
       */
      Models::DescribeRCInstancesResponse describeRCInstancesWithOptions(const Models::DescribeRCInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an RDS Custom instance.
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
       * @summary Queries the monitoring data of a metric for an RDS Custom instance.
       *
       * @param request DescribeRCMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCMetricListResponse
       */
      Models::DescribeRCMetricListResponse describeRCMetricListWithOptions(const Models::DescribeRCMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of a metric for an RDS Custom instance.
       *
       * @param request DescribeRCMetricListRequest
       * @return DescribeRCMetricListResponse
       */
      Models::DescribeRCMetricListResponse describeRCMetricList(const Models::DescribeRCMetricListRequest &request);

      /**
       * @summary Queries the configuration information about the edge node pool of an RDS Custom instance.
       *
       * @param request DescribeRCNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCNodePoolResponse
       */
      Models::DescribeRCNodePoolResponse describeRCNodePoolWithOptions(const Models::DescribeRCNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information about the edge node pool of an RDS Custom instance.
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
       * @summary Queries the security groups of RDS Custom instances.
       *
       * @param request DescribeRCSecurityGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSecurityGroupListResponse
       */
      Models::DescribeRCSecurityGroupListResponse describeRCSecurityGroupListWithOptions(const Models::DescribeRCSecurityGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security groups of RDS Custom instances.
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
       * @summary Queries the details of snapshots. The details include the status of the snapshots, the amount of remaining time required to create the snapshots, and the retention period of the automatic snapshots in days.
       *
       * @param request DescribeRCSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRCSnapshotsResponse
       */
      Models::DescribeRCSnapshotsResponse describeRCSnapshotsWithOptions(const Models::DescribeRCSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of snapshots. The details include the status of the snapshots, the amount of remaining time required to create the snapshots, and the retention period of the automatic snapshots in days.
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
       * @summary Obtains the notification settings for instance resources. This operation can still be called but is no longer maintained.
       *
       * @description This operation can still be called but is no longer maintained.
       *
       * @param request DescribeRdsResourceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsResourceSettingsResponse
       */
      Models::DescribeRdsResourceSettingsResponse describeRdsResourceSettingsWithOptions(const Models::DescribeRdsResourceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRdsResourceSettings is deprecated
       *
       * @summary Obtains the notification settings for instance resources. This operation can still be called but is no longer maintained.
       *
       * @description This operation can still be called but is no longer maintained.
       *
       * @param request DescribeRdsResourceSettingsRequest
       * @return DescribeRdsResourceSettingsResponse
       */
      Models::DescribeRdsResourceSettingsResponse describeRdsResourceSettings(const Models::DescribeRdsResourceSettingsRequest &request);

      /**
       * @summary Queries the latency of data replication between a primary instance and its read-only instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       *
       * @param request DescribeReadDBInstanceDelayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReadDBInstanceDelayResponse
       */
      Models::DescribeReadDBInstanceDelayResponse describeReadDBInstanceDelayWithOptions(const Models::DescribeReadDBInstanceDelayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latency of data replication between a primary instance and its read-only instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       *
       * @param request DescribeReadDBInstanceDelayRequest
       * @return DescribeReadDBInstanceDelayResponse
       */
      Models::DescribeReadDBInstanceDelayResponse describeReadDBInstanceDelay(const Models::DescribeReadDBInstanceDelayRequest &request);

      /**
       * @summary Queries the regions.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeRegionInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionInfosResponse
       */
      Models::DescribeRegionInfosResponse describeRegionInfosWithOptions(const Models::DescribeRegionInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeRegionInfosRequest
       * @return DescribeRegionInfosResponse
       */
      Models::DescribeRegionInfosResponse describeRegionInfos(const Models::DescribeRegionInfosRequest &request);

      /**
       * @summary Queries the details of all regions and zones for ApsaraDB RDS. The regions that are no longer supported are also queried. Exercise caution when you call this operation.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all regions and zones for ApsaraDB RDS. The regions that are no longer supported are also queried. Exercise caution when you call this operation.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the renewal fees for a subscription instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal fees for a subscription instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeRenewalPriceRequest
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPrice(const Models::DescribeRenewalPriceRequest &request);

      /**
       * @summary Queries the operation logs of the data synchronization task for a specified ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engine
       * *   PostgreSQL
       *
       * @param request DescribeReplicationLinkLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReplicationLinkLogsResponse
       */
      Models::DescribeReplicationLinkLogsResponse describeReplicationLinkLogsWithOptions(const Models::DescribeReplicationLinkLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of the data synchronization task for a specified ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engine
       * *   PostgreSQL
       *
       * @param request DescribeReplicationLinkLogsRequest
       * @return DescribeReplicationLinkLogsResponse
       */
      Models::DescribeReplicationLinkLogsResponse describeReplicationLinkLogs(const Models::DescribeReplicationLinkLogsRequest &request);

      /**
       * @summary 概览页资源详情
       *
       * @param request DescribeResourceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceDetailsResponse
       */
      Models::DescribeResourceDetailsResponse describeResourceDetailsWithOptions(const Models::DescribeResourceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 概览页资源详情
       *
       * @param request DescribeResourceDetailsRequest
       * @return DescribeResourceDetailsResponse
       */
      Models::DescribeResourceDetailsResponse describeResourceDetails(const Models::DescribeResourceDetailsRequest &request);

      /**
       * @summary Queries the storage usage of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceUsageResponse
       */
      Models::DescribeResourceUsageResponse describeResourceUsageWithOptions(const Models::DescribeResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage usage of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeResourceUsageRequest
       * @return DescribeResourceUsageResponse
       */
      Models::DescribeResourceUsageResponse describeResourceUsage(const Models::DescribeResourceUsageRequest &request);

      /**
       * @summary Queries the status of the SQL Explorer (SQL Audit) feature for an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeSQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLCollectorPolicyResponse
       */
      Models::DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicyWithOptions(const Models::DescribeSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the SQL Explorer (SQL Audit) feature for an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeSQLCollectorPolicyRequest
       * @return DescribeSQLCollectorPolicyResponse
       */
      Models::DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicy(const Models::DescribeSQLCollectorPolicyRequest &request);

      /**
       * @summary Queries the retention period of the log files that are generated by the SQL Explorer feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeSQLCollectorRetentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLCollectorRetentionResponse
       */
      Models::DescribeSQLCollectorRetentionResponse describeSQLCollectorRetentionWithOptions(const Models::DescribeSQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the retention period of the log files that are generated by the SQL Explorer feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *
       * @param request DescribeSQLCollectorRetentionRequest
       * @return DescribeSQLCollectorRetentionResponse
       */
      Models::DescribeSQLCollectorRetentionResponse describeSQLCollectorRetention(const Models::DescribeSQLCollectorRetentionRequest &request);

      /**
       * @summary Queries the log files that are generated by the SQL Explorer (SQL Audit) feature for an instance. The DescribeSQLLogFiles operation does not return the log files that are generated by the SQL Explorer feature and manually exported from the ApsaraDB RDS console. The DescribeSQLLogFiles operation returns the SQL Explorer log files that are generated by calling the DescribeSQLLogRecords operation with the request parameter Form set to File.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *     **
       *     **Note** If your instance runs SQL Server, only SQL Server 2008 R2 is supported.
       * ### [](#)Precautions
       * *   The DescribeSQLLogFiles operation does not return the log files that are generated by SQL Explorer Trial Edition for an ApsaraDB RDS for MySQL instance.
       * *   The DescribeSQLLogFiles operation does not return the log files that are generated by the SQL Explorer feature and manually exported from the ApsaraDB RDS console. The DescribeSQLLogFiles operation returns the SQL Explorer log files that are generated by calling the [DescribeSQLLogRecords](https://help.aliyun.com/document_detail/610533.html) operation with the request parameter **Form** set to **File**.
       * *   The exported files are retained for only two days.
       *     **
       *     **Note** If you have enabled Database Autonomy Service (DAS) Enterprise Edition V2 or V3 and have enabled the SQL Explorer and Audit feature, the exported files are retained for seven days. You can call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the information about the enabled DAS Enterprise Edition.
       *
       * @param request DescribeSQLLogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogFilesResponse
       */
      Models::DescribeSQLLogFilesResponse describeSQLLogFilesWithOptions(const Models::DescribeSQLLogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log files that are generated by the SQL Explorer (SQL Audit) feature for an instance. The DescribeSQLLogFiles operation does not return the log files that are generated by the SQL Explorer feature and manually exported from the ApsaraDB RDS console. The DescribeSQLLogFiles operation returns the SQL Explorer log files that are generated by calling the DescribeSQLLogRecords operation with the request parameter Form set to File.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       *     **
       *     **Note** If your instance runs SQL Server, only SQL Server 2008 R2 is supported.
       * ### [](#)Precautions
       * *   The DescribeSQLLogFiles operation does not return the log files that are generated by SQL Explorer Trial Edition for an ApsaraDB RDS for MySQL instance.
       * *   The DescribeSQLLogFiles operation does not return the log files that are generated by the SQL Explorer feature and manually exported from the ApsaraDB RDS console. The DescribeSQLLogFiles operation returns the SQL Explorer log files that are generated by calling the [DescribeSQLLogRecords](https://help.aliyun.com/document_detail/610533.html) operation with the request parameter **Form** set to **File**.
       * *   The exported files are retained for only two days.
       *     **
       *     **Note** If you have enabled Database Autonomy Service (DAS) Enterprise Edition V2 or V3 and have enabled the SQL Explorer and Audit feature, the exported files are retained for seven days. You can call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the information about the enabled DAS Enterprise Edition.
       *
       * @param request DescribeSQLLogFilesRequest
       * @return DescribeSQLLogFilesResponse
       */
      Models::DescribeSQLLogFilesResponse describeSQLLogFiles(const Models::DescribeSQLLogFilesRequest &request);

      /**
       * @summary Queries the logs that are generated by the SQL Explorer (SQL Audit) feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [Usage notes](#)
       * *   You can call this operation up to 1,000 times per minute per account. The calls initiated by using both your Alibaba Cloud account and RAM users within your Alibaba Cloud account are counted.
       * *   This operation cannot be used to query the logs that are generated by SQL Explorer Trial Edition for an ApsaraDB RDS for MySQL instance.
       * *   When you call this operation and set the **Form** parameter to **File** to generate an audit file, a maximum of 1 million log entries can be recorded in the audit file, and you cannot filter log entries by keyword.
       *
       * @param request DescribeSQLLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogRecordsResponse
       */
      Models::DescribeSQLLogRecordsResponse describeSQLLogRecordsWithOptions(const Models::DescribeSQLLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs that are generated by the SQL Explorer (SQL Audit) feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [Usage notes](#)
       * *   You can call this operation up to 1,000 times per minute per account. The calls initiated by using both your Alibaba Cloud account and RAM users within your Alibaba Cloud account are counted.
       * *   This operation cannot be used to query the logs that are generated by SQL Explorer Trial Edition for an ApsaraDB RDS for MySQL instance.
       * *   When you call this operation and set the **Form** parameter to **File** to generate an audit file, a maximum of 1 million log entries can be recorded in the audit file, and you cannot filter log entries by keyword.
       *
       * @param request DescribeSQLLogRecordsRequest
       * @return DescribeSQLLogRecordsResponse
       */
      Models::DescribeSQLLogRecordsResponse describeSQLLogRecords(const Models::DescribeSQLLogRecordsRequest &request);

      /**
       * @summary Queries SQL log reports.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeSQLLogReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSQLLogReportListResponse
       */
      Models::DescribeSQLLogReportListResponse describeSQLLogReportListWithOptions(const Models::DescribeSQLLogReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SQL log reports.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeSQLLogReportListRequest
       * @return DescribeSQLLogReportListResponse
       */
      Models::DescribeSQLLogReportListResponse describeSQLLogReportList(const Models::DescribeSQLLogReportListRequest &request);

      /**
       * @summary Queries the credential of a user who uses the Data API feature.
       *
       * @description ### [](#)Supported database engine
       * *   MySQL
       *
       * @param request DescribeSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecretsResponse
       */
      Models::DescribeSecretsResponse describeSecretsWithOptions(const Models::DescribeSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential of a user who uses the Data API feature.
       *
       * @description ### [](#)Supported database engine
       * *   MySQL
       *
       * @param request DescribeSecretsRequest
       * @return DescribeSecretsResponse
       */
      Models::DescribeSecretsResponse describeSecrets(const Models::DescribeSecretsRequest &request);

      /**
       * @summary Queries ECS security groups to which an instance is added.
       *
       * @description ### [](#)Supported database engines
       * * MySQL
       * * PostgreSQL
       * * SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * *   [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * *   [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(const Models::DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ECS security groups to which an instance is added.
       *
       * @description ### [](#)Supported database engines
       * * MySQL
       * * PostgreSQL
       * * SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * *   [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * *   [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(const Models::DescribeSecurityGroupConfigurationRequest &request);

      /**
       * @summary Queries all replication slots of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request DescribeSlotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlotsResponse
       */
      Models::DescribeSlotsResponse describeSlotsWithOptions(const Models::DescribeSlotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all replication slots of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       *
       * @param request DescribeSlotsRequest
       * @return DescribeSlotsResponse
       */
      Models::DescribeSlotsResponse describeSlots(const Models::DescribeSlotsRequest &request);

      /**
       * @summary Queries the slow log details of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### Precautions
       * The response parameters returned by this operation are updated every minute.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the slow log details of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### Precautions
       * The response parameters returned by this operation are updated every minute.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries the statistics on slow query logs.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *     **
       *     **Note** This operation is not supported for RDS instances that run MySQL 5.7 on RDS Basic Edition.
       * *   SQL Server
       *     **
       *     **Note** This operation is supported only for RDS instances that run SQL Server 2008 R2.
       * *   MariaDB
       * ### [](#)Prerequisites
       * *   Slow query logs are not collected in real time and may show a latency of 6 to 8 hours.
       * *   If the return result is empty, check whether the StartTime and EndTime parameters are in UTC. If yes, no slow logs are generated within the specified time range.
       * *   Starting from September 01, 2024, the template algorithm for slow queries is optimized. When you call the operation, you must change the value of the **SQLHASH** parameter. For more information, see [[Notice\\] Optimization of the template algorithm for slow queries](~~2845725~~).
       *
       * @param request DescribeSlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogsWithOptions(const Models::DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on slow query logs.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       *     **
       *     **Note** This operation is not supported for RDS instances that run MySQL 5.7 on RDS Basic Edition.
       * *   SQL Server
       *     **
       *     **Note** This operation is supported only for RDS instances that run SQL Server 2008 R2.
       * *   MariaDB
       * ### [](#)Prerequisites
       * *   Slow query logs are not collected in real time and may show a latency of 6 to 8 hours.
       * *   If the return result is empty, check whether the StartTime and EndTime parameters are in UTC. If yes, no slow logs are generated within the specified time range.
       * *   Starting from September 01, 2024, the template algorithm for slow queries is optimized. When you call the operation, you must change the value of the **SQLHASH** parameter. For more information, see [[Notice\\] Optimization of the template algorithm for slow queries](~~2845725~~).
       *
       * @param request DescribeSlowLogsRequest
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogs(const Models::DescribeSlowLogsRequest &request);

      /**
       * @summary Checks whether the disk of an ApsaraDB RDS for SQL Server instance can be resized online.
       *
       * @description ### Supported database engine
       * SQL Server
       *
       * @param request DescribeSupportOnlineResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportOnlineResizeDiskResponse
       */
      Models::DescribeSupportOnlineResizeDiskResponse describeSupportOnlineResizeDiskWithOptions(const Models::DescribeSupportOnlineResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the disk of an ApsaraDB RDS for SQL Server instance can be resized online.
       *
       * @description ### Supported database engine
       * SQL Server
       *
       * @param request DescribeSupportOnlineResizeDiskRequest
       * @return DescribeSupportOnlineResizeDiskResponse
       */
      Models::DescribeSupportOnlineResizeDiskResponse describeSupportOnlineResizeDisk(const Models::DescribeSupportOnlineResizeDiskRequest &request);

      /**
       * @summary Queries tags of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [Usage notes](#)
       * *   If an instance ID is specified, all tags that are added to this instance are queried, and other filter conditions are invalid.
       * *   If you specify only TagKey, the results that match the specified TagKey are returned. If you specify both TagKey and TagValue, the results that match both the specified TagKey and TagValue are returned.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [Usage notes](#)
       * *   If an instance ID is specified, all tags that are added to this instance are queried, and other filter conditions are invalid.
       * *   If you specify only TagKey, the results that match the specified TagKey are returned. If you specify both TagKey and TagValue, the results that match both the specified TagKey and TagValue are returned.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the tasks in the Waiting or Executing state on an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * >  You can call the [DescribeHistoryTasks](https://help.aliyun.com/document_detail/2627863.html) operation to query the tasks on an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tasks in the Waiting or Executing state on an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * >  You can call the [DescribeHistoryTasks](https://help.aliyun.com/document_detail/2627863.html) operation to query the tasks on an ApsaraDB RDS for MySQL or ApsaraDB RDS for PostgreSQL instance
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the check report for a major engine version upgrade of an ApsaraDB RDS for MySQL instance or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * PostgreSQL
       * ### [](#)References
       * > Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Check report for the major engine version upgrade of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/2794383.html)
       * *   [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       * *   [Introduction to the check report of a major engine version upgrade for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/218391.html)
       *
       * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
       */
      Models::DescribeUpgradeMajorVersionPrecheckTaskResponse describeUpgradeMajorVersionPrecheckTaskWithOptions(const Models::DescribeUpgradeMajorVersionPrecheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check report for a major engine version upgrade of an ApsaraDB RDS for MySQL instance or ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * PostgreSQL
       * ### [](#)References
       * > Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Check report for the major engine version upgrade of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/2794383.html)
       * *   [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       * *   [Introduction to the check report of a major engine version upgrade for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/218391.html)
       *
       * @param request DescribeUpgradeMajorVersionPrecheckTaskRequest
       * @return DescribeUpgradeMajorVersionPrecheckTaskResponse
       */
      Models::DescribeUpgradeMajorVersionPrecheckTaskResponse describeUpgradeMajorVersionPrecheckTask(const Models::DescribeUpgradeMajorVersionPrecheckTaskRequest &request);

      /**
       * @summary Queries the historical tasks for major engine version upgrades of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * PostgreSQL
       *
       * @param request DescribeUpgradeMajorVersionTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpgradeMajorVersionTasksResponse
       */
      Models::DescribeUpgradeMajorVersionTasksResponse describeUpgradeMajorVersionTasksWithOptions(const Models::DescribeUpgradeMajorVersionTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical tasks for major engine version upgrades of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * PostgreSQL
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
       * @summary Queries the details of vSwitch that are available in a virtual private cloud (VPC).
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of vSwitch that are available in a virtual private cloud (VPC).
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Queries information about the specified IP whitelist.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistTemplateResponse
       */
      Models::DescribeWhitelistTemplateResponse describeWhitelistTemplateWithOptions(const Models::DescribeWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the specified IP whitelist.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeWhitelistTemplateRequest
       * @return DescribeWhitelistTemplateResponse
       */
      Models::DescribeWhitelistTemplateResponse describeWhitelistTemplate(const Models::DescribeWhitelistTemplateRequest &request);

      /**
       * @summary Queries associated instances by whitelist template.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeWhitelistTemplateLinkedInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhitelistTemplateLinkedInstanceResponse
       */
      Models::DescribeWhitelistTemplateLinkedInstanceResponse describeWhitelistTemplateLinkedInstanceWithOptions(const Models::DescribeWhitelistTemplateLinkedInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries associated instances by whitelist template.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DescribeWhitelistTemplateLinkedInstanceRequest
       * @return DescribeWhitelistTemplateLinkedInstanceResponse
       */
      Models::DescribeWhitelistTemplateLinkedInstanceResponse describeWhitelistTemplateLinkedInstance(const Models::DescribeWhitelistTemplateLinkedInstanceRequest &request);

      /**
       * @summary You can call the DestroyDBInstance operation to destroy an instance. The instance is in the Locked state.
       *
       * @description The DestroyDBInstance operation is phased out.
       *
       * @param request DestroyDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyDBInstanceResponse
       */
      Models::DestroyDBInstanceResponse destroyDBInstanceWithOptions(const Models::DestroyDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DestroyDBInstance operation to destroy an instance. The instance is in the Locked state.
       *
       * @description The DestroyDBInstance operation is phased out.
       *
       * @param request DestroyDBInstanceRequest
       * @return DestroyDBInstanceResponse
       */
      Models::DestroyDBInstanceResponse destroyDBInstance(const Models::DestroyDBInstanceRequest &request);

      /**
       * @summary Removes a unit node from a global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [Usage notes](#)
       * This operation can be used to remove only unit nodes.
       *
       * @param request DetachGadInstanceMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGadInstanceMemberResponse
       */
      Models::DetachGadInstanceMemberResponse detachGadInstanceMemberWithOptions(const Models::DetachGadInstanceMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a unit node from a global active database cluster.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [Usage notes](#)
       * This operation can be used to remove only unit nodes.
       *
       * @param request DetachGadInstanceMemberRequest
       * @return DetachGadInstanceMemberResponse
       */
      Models::DetachGadInstanceMemberResponse detachGadInstanceMember(const Models::DetachGadInstanceMemberRequest &request);

      /**
       * @summary Detaches a pay-as-you-go data disk or a system disk from an RDS Custom instance.
       *
       * @param request DetachRCDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachRCDiskResponse
       */
      Models::DetachRCDiskResponse detachRCDiskWithOptions(const Models::DetachRCDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a pay-as-you-go data disk or a system disk from an RDS Custom instance.
       *
       * @param request DetachRCDiskRequest
       * @return DetachRCDiskResponse
       */
      Models::DetachRCDiskResponse detachRCDisk(const Models::DetachRCDiskRequest &request);

      /**
       * @summary Disassociates a whitelist template from an instance.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstanceWithOptions(const Models::DetachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a whitelist template from an instance.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request DetachWhitelistTemplateToInstanceRequest
       * @return DetachWhitelistTemplateToInstanceResponse
       */
      Models::DetachWhitelistTemplateToInstanceResponse detachWhitelistTemplateToInstance(const Models::DetachWhitelistTemplateToInstanceRequest &request);

      /**
       * @summary 评估紧急本地扩容磁盘解锁可使用的磁盘空间
       *
       * @param request EvaluateLocalExtendDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateLocalExtendDiskResponse
       */
      Models::EvaluateLocalExtendDiskResponse evaluateLocalExtendDiskWithOptions(const Models::EvaluateLocalExtendDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 评估紧急本地扩容磁盘解锁可使用的磁盘空间
       *
       * @param request EvaluateLocalExtendDiskRequest
       * @return EvaluateLocalExtendDiskResponse
       */
      Models::EvaluateLocalExtendDiskResponse evaluateLocalExtendDisk(const Models::EvaluateLocalExtendDiskRequest &request);

      /**
       * @summary Queries the topology of an instance.
       *
       * @description ### Supported database engines
       * RDS MySQL
       *
       * @param request GetDBInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBInstanceTopologyResponse
       */
      Models::GetDBInstanceTopologyResponse getDBInstanceTopologyWithOptions(const Models::GetDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the topology of an instance.
       *
       * @description ### Supported database engines
       * RDS MySQL
       *
       * @param request GetDBInstanceTopologyRequest
       * @return GetDBInstanceTopologyResponse
       */
      Models::GetDBInstanceTopologyResponse getDBInstanceTopology(const Models::GetDBInstanceTopologyRequest &request);

      /**
       * @summary Queries the SSL encryption settings for a dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS MySQL
       *
       * @param request GetDbProxyInstanceSslRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDbProxyInstanceSslResponse
       */
      Models::GetDbProxyInstanceSslResponse getDbProxyInstanceSslWithOptions(const Models::GetDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SSL encryption settings for a dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS MySQL
       *
       * @param request GetDbProxyInstanceSslRequest
       * @return GetDbProxyInstanceSslResponse
       */
      Models::GetDbProxyInstanceSslResponse getDbProxyInstanceSsl(const Models::GetDbProxyInstanceSslRequest &request);

      /**
       * @summary Grants an account the permissions on a database of an instance.
       *
       * @description Each account can be granted permissions on one or more databases. Before you call this operation, make sure that the instance is in the Running state.
       * > This operation is not supported for instances that run SQL Server 2017 on RDS Cluster Edition or run PostgreSQL with local disks.
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants an account the permissions on a database of an instance.
       *
       * @description Each account can be granted permissions on one or more databases. Before you call this operation, make sure that the instance is in the Running state.
       * > This operation is not supported for instances that run SQL Server 2017 on RDS Cluster Edition or run PostgreSQL with local disks.
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary Grant permissions to a service account.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Grant permissions to the service account of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96102.html)
       * *   [Grant permissions to the service account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request GrantOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermissionWithOptions(const Models::GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grant permissions to a service account.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Grant permissions to the service account of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96102.html)
       * *   [Grant permissions to the service account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request GrantOperatorPermissionRequest
       * @return GrantOperatorPermissionResponse
       */
      Models::GrantOperatorPermissionResponse grantOperatorPermission(const Models::GrantOperatorPermissionRequest &request);

      /**
       * @summary Imports the backup data of a self-managed instance that runs MySQL 5.7 to an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [](#)Description
       * A full backup file contains the data of a self-managed MySQL instance. You can restore the data of a self-managed MySQL instance from a full backup file to an ApsaraDB RDS for MySQL instance.
       * ### [](#)Usage notes
       * Before you call this operation, make sure that the following requirements are met:
       * *   The self-managed MySQL instance runs MySQL 5.7 and is backed up by using XtraBackup. The name of the backup file ends with `_qp.xb`. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * *   The full backup file of the self-managed MySQL instance is uploaded to an Object Storage Service (OSS) bucket in the region of the ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * >  This operation is supported only for MySQL 5.7.
       *
       * @param request ImportUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportUserBackupFileResponse
       */
      Models::ImportUserBackupFileResponse importUserBackupFileWithOptions(const Models::ImportUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the backup data of a self-managed instance that runs MySQL 5.7 to an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [](#)Description
       * A full backup file contains the data of a self-managed MySQL instance. You can restore the data of a self-managed MySQL instance from a full backup file to an ApsaraDB RDS for MySQL instance.
       * ### [](#)Usage notes
       * Before you call this operation, make sure that the following requirements are met:
       * *   The self-managed MySQL instance runs MySQL 5.7 and is backed up by using XtraBackup. The name of the backup file ends with `_qp.xb`. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * *   The full backup file of the self-managed MySQL instance is uploaded to an Object Storage Service (OSS) bucket in the region of the ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * >  This operation is supported only for MySQL 5.7.
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
       * @summary Queries the specification details of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request ListClassesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClassesResponse
       */
      Models::ListClassesResponse listClassesWithOptions(const Models::ListClassesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specification details of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request ListClassesRequest
       * @return ListClassesResponse
       */
      Models::ListClassesResponse listClasses(const Models::ListClassesRequest &request);

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
       * @summary Queries the tags that are added to one or more instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to one or more instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the details about the full backup files that are imported into an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [](#)Feature description
       * *   A full backup file contains the data of a self-managed MySQL database. You can restore the data of a self-managed MySQL database from a full backup file to an ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * *   Before you call the [CreateDBInstance](https://help.aliyun.com/document_detail/26228.html) operation to create an ApsaraDB RDS for MySQL instance into which you want to import full backup files, you can call this operation to query the IDs of full backup files.
       * *   You can call the [ImportUserBackupFile](https://help.aliyun.com/document_detail/260266.html) operation to import a full backup file into an ApsaraDB RDS for MySQL instance.
       *
       * @param request ListUserBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserBackupFilesResponse
       */
      Models::ListUserBackupFilesResponse listUserBackupFilesWithOptions(const Models::ListUserBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the full backup files that are imported into an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [](#)Feature description
       * *   A full backup file contains the data of a self-managed MySQL database. You can restore the data of a self-managed MySQL database from a full backup file to an ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 instance to the cloud](https://help.aliyun.com/document_detail/251779.html).
       * *   Before you call the [CreateDBInstance](https://help.aliyun.com/document_detail/26228.html) operation to create an ApsaraDB RDS for MySQL instance into which you want to import full backup files, you can call this operation to query the IDs of full backup files.
       * *   You can call the [ImportUserBackupFile](https://help.aliyun.com/document_detail/260266.html) operation to import a full backup file into an ApsaraDB RDS for MySQL instance.
       *
       * @param request ListUserBackupFilesRequest
       * @return ListUserBackupFilesResponse
       */
      Models::ListUserBackupFilesResponse listUserBackupFiles(const Models::ListUserBackupFilesRequest &request);

      /**
       * @summary Locks an account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Lock an account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request LockAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockAccountResponse
       */
      Models::LockAccountResponse lockAccountWithOptions(const Models::LockAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks an account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Lock an account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request LockAccountRequest
       * @return LockAccountResponse
       */
      Models::LockAccountResponse lockAccount(const Models::LockAccountRequest &request);

      /**
       * @summary Migrates an instance to a different zone.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Migrate an ApsaraDB RDS for MySQL instance across zones in the same region](https://help.aliyun.com/document_detail/96746.html)
       * *   [Migrate an ApsaraDB RDS for PostgreSQL instance across zones in the same region](https://help.aliyun.com/document_detail/96746.html)
       * *   [Migrate an ApsaraDB RDS for SQL Server instance across zones in the same region](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateConnectionToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateConnectionToOtherZoneResponse
       */
      Models::MigrateConnectionToOtherZoneResponse migrateConnectionToOtherZoneWithOptions(const Models::MigrateConnectionToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an instance to a different zone.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Migrate an ApsaraDB RDS for MySQL instance across zones in the same region](https://help.aliyun.com/document_detail/96746.html)
       * *   [Migrate an ApsaraDB RDS for PostgreSQL instance across zones in the same region](https://help.aliyun.com/document_detail/96746.html)
       * *   [Migrate an ApsaraDB RDS for SQL Server instance across zones in the same region](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateConnectionToOtherZoneRequest
       * @return MigrateConnectionToOtherZoneResponse
       */
      Models::MigrateConnectionToOtherZoneResponse migrateConnectionToOtherZone(const Models::MigrateConnectionToOtherZoneRequest &request);

      /**
       * @summary Migrates an instance across hosts in a dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request MigrateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstanceWithOptions(const Models::MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an instance across hosts in a dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request MigrateDBInstanceRequest
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstance(const Models::MigrateDBInstanceRequest &request);

      /**
       * @summary Changes the zone of a node from an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition.
       *
       * @param tmpReq MigrateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBNodesResponse
       */
      Models::MigrateDBNodesResponse migrateDBNodesWithOptions(const Models::MigrateDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the zone of a node from an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition.
       *
       * @param request MigrateDBNodesRequest
       * @return MigrateDBNodesResponse
       */
      Models::MigrateDBNodesResponse migrateDBNodes(const Models::MigrateDBNodesRequest &request);

      /**
       * @summary Changes the whitelist mode of an instance from the standard whitelist mode to the enhanced whitelist mode.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Change the whitelist mode of an ApsaraDB RDS for MySQL instance to the enhanced whitelist mode](https://help.aliyun.com/document_detail/96117.html)
       * *   [Change the whitelist mode of an ApsaraDB RDS for PostgreSQL instance to the enhanced whitelist mode](https://help.aliyun.com/document_detail/96767.html)
       *
       * @param request MigrateSecurityIPModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateSecurityIPModeResponse
       */
      Models::MigrateSecurityIPModeResponse migrateSecurityIPModeWithOptions(const Models::MigrateSecurityIPModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the whitelist mode of an instance from the standard whitelist mode to the enhanced whitelist mode.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Change the whitelist mode of an ApsaraDB RDS for MySQL instance to the enhanced whitelist mode](https://help.aliyun.com/document_detail/96117.html)
       * *   [Change the whitelist mode of an ApsaraDB RDS for PostgreSQL instance to the enhanced whitelist mode](https://help.aliyun.com/document_detail/96767.html)
       *
       * @param request MigrateSecurityIPModeRequest
       * @return MigrateSecurityIPModeResponse
       */
      Models::MigrateSecurityIPModeResponse migrateSecurityIPMode(const Models::MigrateSecurityIPModeRequest &request);

      /**
       * @summary Migrates an instance across zones in the same region.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Migrate an ApsaraDB RDS for MySQL instance across zones in the same region](https://help.aliyun.com/document_detail/96053.html)
       * *   [Migrate an ApsaraDB RDS for PostgreSQL instance across zones in the same region](https://help.aliyun.com/document_detail/96746.html)
       * *   [Migrate an ApsaraDB RDS for SQL Server instance across zones in the same region](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const Models::MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an instance across zones in the same region.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Migrate an ApsaraDB RDS for MySQL instance across zones in the same region](https://help.aliyun.com/document_detail/96053.html)
       * *   [Migrate an ApsaraDB RDS for PostgreSQL instance across zones in the same region](https://help.aliyun.com/document_detail/96746.html)
       * *   [Migrate an ApsaraDB RDS for SQL Server instance across zones in the same region](https://help.aliyun.com/document_detail/95658.html)
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Modifies the AD domain information about an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Connect an RDS instance to a self-managed domain](https://help.aliyun.com/document_detail/170734.html)
       *
       * @param request ModifyADInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyADInfoResponse
       */
      Models::ModifyADInfoResponse modifyADInfoWithOptions(const Models::ModifyADInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the AD domain information about an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Connect an RDS instance to a self-managed domain](https://help.aliyun.com/document_detail/170734.html)
       *
       * @param request ModifyADInfoRequest
       * @return ModifyADInfoResponse
       */
      Models::ModifyADInfoResponse modifyADInfo(const Models::ModifyADInfoRequest &request);

      /**
       * @summary Checks whether a password policy is applied to an account.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       *
       * @param request ModifyAccountCheckPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountCheckPolicyResponse
       */
      Models::ModifyAccountCheckPolicyResponse modifyAccountCheckPolicyWithOptions(const Models::ModifyAccountCheckPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a password policy is applied to an account.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       *
       * @param request ModifyAccountCheckPolicyRequest
       * @return ModifyAccountCheckPolicyResponse
       */
      Models::ModifyAccountCheckPolicyResponse modifyAccountCheckPolicy(const Models::ModifyAccountCheckPolicyRequest &request);

      /**
       * @summary Modifies the description of a database account.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary 修改全密态用户权限
       *
       * @param request ModifyAccountMaskingPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountMaskingPrivilegeResponse
       */
      Models::ModifyAccountMaskingPrivilegeResponse modifyAccountMaskingPrivilegeWithOptions(const Models::ModifyAccountMaskingPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改全密态用户权限
       *
       * @param request ModifyAccountMaskingPrivilegeRequest
       * @return ModifyAccountMaskingPrivilegeResponse
       */
      Models::ModifyAccountMaskingPrivilegeResponse modifyAccountMaskingPrivilege(const Models::ModifyAccountMaskingPrivilegeRequest &request);

      /**
       * @summary Modifies the password policy for an account of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server (This parameter is unavailable for ApsaraDB RDS for SQL Server instances that belong to the shared instance family and run SQL Server 2008 R2.)
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Create a custom password policy for an account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95640.html)
       *
       * @param request ModifyAccountSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountSecurityPolicyResponse
       */
      Models::ModifyAccountSecurityPolicyResponse modifyAccountSecurityPolicyWithOptions(const Models::ModifyAccountSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password policy for an account of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server (This parameter is unavailable for ApsaraDB RDS for SQL Server instances that belong to the shared instance family and run SQL Server 2008 R2.)
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Create a custom password policy for an account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95640.html)
       *
       * @param request ModifyAccountSecurityPolicyRequest
       * @return ModifyAccountSecurityPolicyResponse
       */
      Models::ModifyAccountSecurityPolicyResponse modifyAccountSecurityPolicy(const Models::ModifyAccountSecurityPolicyRequest &request);

      /**
       * @summary Enables or disables the event history feature of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [View the event history of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/129759.html)
       * *   [View the event history of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/131008.html)
       * *   [View the event history of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/131013.html)
       * *   [View the event history of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/131010.html)
       *
       * @param request ModifyActionEventPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActionEventPolicyResponse
       */
      Models::ModifyActionEventPolicyResponse modifyActionEventPolicyWithOptions(const Models::ModifyActionEventPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the event history feature of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [View the event history of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/129759.html)
       * *   [View the event history of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/131008.html)
       * *   [View the event history of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/131013.html)
       * *   [View the event history of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/131010.html)
       *
       * @param request ModifyActionEventPolicyRequest
       * @return ModifyActionEventPolicyResponse
       */
      Models::ModifyActionEventPolicyResponse modifyActionEventPolicy(const Models::ModifyActionEventPolicyRequest &request);

      /**
       * @summary Changes the switching time of scheduled O\\\\\\&M tasks for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Scheduled events for ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/104183.html)
       * *   [Scheduled events for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/104452.html)
       * *   [Scheduled events for ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/104451.html)
       * *   [Scheduled events for ApsaraDB RDS for MariaDB instances](https://help.aliyun.com/document_detail/104454.html)
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the switching time of scheduled O\\\\\\&M tasks for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Scheduled events for ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/104183.html)
       * *   [Scheduled events for ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/104452.html)
       * *   [Scheduled events for ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/104451.html)
       * *   [Scheduled events for ApsaraDB RDS for MariaDB instances](https://help.aliyun.com/document_detail/104454.html)
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the backup policy settings of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98818.html)
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup policy settings of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98818.html)
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96772.html)
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       * *   [Configure an automatic backup policy for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97147.html)
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Extends the expiration time of backup sets generated by manual backup for a single database, including physical backup sets and full backup sets.
       *
       * @description ### [](#)Supported database engines
       * RDS SQL Server
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Manually back up the data of an RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       *
       * @param request ModifyBackupSetExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSetExpireTimeResponse
       */
      Models::ModifyBackupSetExpireTimeResponse modifyBackupSetExpireTimeWithOptions(const Models::ModifyBackupSetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the expiration time of backup sets generated by manual backup for a single database, including physical backup sets and full backup sets.
       *
       * @description ### [](#)Supported database engines
       * RDS SQL Server
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Manually back up the data of an RDS for SQL Server instance](https://help.aliyun.com/document_detail/95717.html)
       *
       * @param request ModifyBackupSetExpireTimeRequest
       * @return ModifyBackupSetExpireTimeResponse
       */
      Models::ModifyBackupSetExpireTimeResponse modifyBackupSetExpireTime(const Models::ModifyBackupSetExpireTimeRequest &request);

      /**
       * @summary Modifies the character set collation and time zone of system databases on an instance.
       *
       * @description ### [](#)Supported database engines
       * RDS SQL Server
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Change the character set collation and the time zone of system databases](https://help.aliyun.com/document_detail/95700.html)
       *
       * @param request ModifyCollationTimeZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCollationTimeZoneResponse
       */
      Models::ModifyCollationTimeZoneResponse modifyCollationTimeZoneWithOptions(const Models::ModifyCollationTimeZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the character set collation and time zone of system databases on an instance.
       *
       * @description ### [](#)Supported database engines
       * RDS SQL Server
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Change the character set collation and the time zone of system databases](https://help.aliyun.com/document_detail/95700.html)
       *
       * @param request ModifyCollationTimeZoneRequest
       * @return ModifyCollationTimeZoneResponse
       */
      Models::ModifyCollationTimeZoneResponse modifyCollationTimeZone(const Models::ModifyCollationTimeZoneRequest &request);

      /**
       * @summary Modifies the settings of assured serverless or disables assured serverless.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [Assured serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request ModifyComputeBurstConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyComputeBurstConfigResponse
       */
      Models::ModifyComputeBurstConfigResponse modifyComputeBurstConfigWithOptions(const Models::ModifyComputeBurstConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of assured serverless or disables assured serverless.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [Assured serverless](https://help.aliyun.com/document_detail/2928780.html)
       *
       * @param request ModifyComputeBurstConfigRequest
       * @return ModifyComputeBurstConfigResponse
       */
      Models::ModifyComputeBurstConfigResponse modifyComputeBurstConfig(const Models::ModifyComputeBurstConfigRequest &request);

      /**
       * @summary 修改实例资源
       *
       * @param request ModifyCustinsResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustinsResourceResponse
       */
      Models::ModifyCustinsResourceResponse modifyCustinsResourceWithOptions(const Models::ModifyCustinsResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例资源
       *
       * @param request ModifyCustinsResourceRequest
       * @return ModifyCustinsResourceResponse
       */
      Models::ModifyCustinsResourceResponse modifyCustinsResource(const Models::ModifyCustinsResourceRequest &request);

      /**
       * @summary Modifies the description of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request ModifyDBDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescriptionWithOptions(const Models::ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       *
       * @param request ModifyDBDescriptionRequest
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescription(const Models::ModifyDBDescriptionRequest &request);

      /**
       * @summary Changes the method that is used to update the minor engine version of an ApsaraDB RDS for MySQL instance or an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Modify automatic update settings for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * *   [Modify automatic update settings for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       *
       * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
       */
      Models::ModifyDBInstanceAutoUpgradeMinorVersionResponse modifyDBInstanceAutoUpgradeMinorVersionWithOptions(const Models::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the method that is used to update the minor engine version of an ApsaraDB RDS for MySQL instance or an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Modify automatic update settings for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * *   [Modify automatic update settings for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       *
       * @param request ModifyDBInstanceAutoUpgradeMinorVersionRequest
       * @return ModifyDBInstanceAutoUpgradeMinorVersionResponse
       */
      Models::ModifyDBInstanceAutoUpgradeMinorVersionResponse modifyDBInstanceAutoUpgradeMinorVersion(const Models::ModifyDBInstanceAutoUpgradeMinorVersionRequest &request);

      /**
       * @summary Modifies the configuration item of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * *   SQL Server
       * >  The configuration items that are supported are pgbouncer and clear_errorlog. For more information, see [PgBouncer of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/2398301.html) and [Error log cleanup of ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95645.html).
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration item of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * *   SQL Server
       * >  The configuration items that are supported are pgbouncer and clear_errorlog. For more information, see [PgBouncer of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/2398301.html) and [Error log cleanup of ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95645.html).
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Modifies the endpoint and port of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation:
       * *   [Change the endpoint and port number of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96163.html)
       * *   [Change the endpoint and port number of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96788.html)
       * *   [Change the endpoint and port number of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95740.html)
       * *   [Change the endpoint and port number of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97157.html)
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoint and port of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation:
       * *   [Change the endpoint and port number of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96163.html)
       * *   [Change the endpoint and port number of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96788.html)
       * *   [Change the endpoint and port number of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95740.html)
       * *   [Change the endpoint and port number of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97157.html)
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Configures the replication latency for a read-only ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure a data replication latency for a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyDBInstanceDelayedReplicationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDelayedReplicationTimeResponse
       */
      Models::ModifyDBInstanceDelayedReplicationTimeResponse modifyDBInstanceDelayedReplicationTimeWithOptions(const Models::ModifyDBInstanceDelayedReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the replication latency for a read-only ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure a data replication latency for a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyDBInstanceDelayedReplicationTimeRequest
       * @return ModifyDBInstanceDelayedReplicationTimeResponse
       */
      Models::ModifyDBInstanceDelayedReplicationTimeResponse modifyDBInstanceDelayedReplicationTime(const Models::ModifyDBInstanceDelayedReplicationTimeRequest &request);

      /**
       * @summary Enable or disable the release protection feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Enable and disable instance release protection for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/414512.html)
       * *   [Enable and disable instance release protection for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/471512.html)
       * *   [Enable and disable instance release protection for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/416209.html)
       * *   [Enable and disable release protection for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/414512.html)
       *
       * @param request ModifyDBInstanceDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDeletionProtectionResponse
       */
      Models::ModifyDBInstanceDeletionProtectionResponse modifyDBInstanceDeletionProtectionWithOptions(const Models::ModifyDBInstanceDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable the release protection feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Enable and disable instance release protection for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/414512.html)
       * *   [Enable and disable instance release protection for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/471512.html)
       * *   [Enable and disable instance release protection for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/416209.html)
       * *   [Enable and disable release protection for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/414512.html)
       *
       * @param request ModifyDBInstanceDeletionProtectionRequest
       * @return ModifyDBInstanceDeletionProtectionResponse
       */
      Models::ModifyDBInstanceDeletionProtectionResponse modifyDBInstanceDeletionProtection(const Models::ModifyDBInstanceDeletionProtectionRequest &request);

      /**
       * @summary You can call the ModifyDBInstanceDescription operation to modify the name of an instance.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyDBInstanceDescription operation to modify the name of an instance.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @summary Modifies the weight of an endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       *
       * @param tmpReq ModifyDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceEndpointResponse
       */
      Models::ModifyDBInstanceEndpointResponse modifyDBInstanceEndpointWithOptions(const Models::ModifyDBInstanceEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of an endpoint for an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * MySQL
       *
       * @param request ModifyDBInstanceEndpointRequest
       * @return ModifyDBInstanceEndpointResponse
       */
      Models::ModifyDBInstanceEndpointResponse modifyDBInstanceEndpoint(const Models::ModifyDBInstanceEndpointRequest &request);

      /**
       * @summary Modifies the information about the endpoint of an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)Precautions
       * *   You can modify the following information about the endpoint of an instance: the public and internal endpoints, the public and internal ports, and the virtual private cloud (VPC), vSwitch, and IP address of the internal endpoint.
       * *   The VPC and vSwitch must be modified at the same time. If you specify the VPC, vSwitch, and IP address of the internal endpoint, you do not need to specify the endpoint and port. If you specify the endpoint and port, you do not need to specify the VPC, vSwitch, and IP address of the internal endpoint.
       *
       * @param request ModifyDBInstanceEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceEndpointAddressResponse
       */
      Models::ModifyDBInstanceEndpointAddressResponse modifyDBInstanceEndpointAddressWithOptions(const Models::ModifyDBInstanceEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about the endpoint of an instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engines
       * MySQL
       * ### [](#)Precautions
       * *   You can modify the following information about the endpoint of an instance: the public and internal endpoints, the public and internal ports, and the virtual private cloud (VPC), vSwitch, and IP address of the internal endpoint.
       * *   The VPC and vSwitch must be modified at the same time. If you specify the VPC, vSwitch, and IP address of the internal endpoint, you do not need to specify the endpoint and port. If you specify the endpoint and port, you do not need to specify the VPC, vSwitch, and IP address of the internal endpoint.
       *
       * @param request ModifyDBInstanceEndpointAddressRequest
       * @return ModifyDBInstanceEndpointAddressResponse
       */
      Models::ModifyDBInstanceEndpointAddressResponse modifyDBInstanceEndpointAddress(const Models::ModifyDBInstanceEndpointAddressRequest &request);

      /**
       * @summary Changes the high availability (HA) and data replication mode of an instance.
       *
       * @param request ModifyDBInstanceHAConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceHAConfigResponse
       */
      Models::ModifyDBInstanceHAConfigResponse modifyDBInstanceHAConfigWithOptions(const Models::ModifyDBInstanceHAConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the high availability (HA) and data replication mode of an instance.
       *
       * @param request ModifyDBInstanceHAConfigRequest
       * @return ModifyDBInstanceHAConfigResponse
       */
      Models::ModifyDBInstanceHAConfigResponse modifyDBInstanceHAConfig(const Models::ModifyDBInstanceHAConfigRequest &request);

      /**
       * @summary Modifies the maintenance window of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Set a maintenance window for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96052.html)
       * *   [Set a maintenance window for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96799.html)
       * *   [Set a maintenance window for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95657.html)
       * *   [Set a maintenance window for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97473.html)
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Set a maintenance window for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96052.html)
       * *   [Set a maintenance window for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96799.html)
       * *   [Set a maintenance window for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95657.html)
       * *   [Set a maintenance window for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97473.html)
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @summary Modifies the Enhanced Monitoring metrics that are displayed for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [View the Enhanced Monitoring metrics](https://help.aliyun.com/document_detail/299200.html)
       *
       * @param request ModifyDBInstanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMetricsResponse
       */
      Models::ModifyDBInstanceMetricsResponse modifyDBInstanceMetricsWithOptions(const Models::ModifyDBInstanceMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Enhanced Monitoring metrics that are displayed for an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [View the Enhanced Monitoring metrics](https://help.aliyun.com/document_detail/299200.html)
       *
       * @param request ModifyDBInstanceMetricsRequest
       * @return ModifyDBInstanceMetricsResponse
       */
      Models::ModifyDBInstanceMetricsResponse modifyDBInstanceMetrics(const Models::ModifyDBInstanceMetricsRequest &request);

      /**
       * @summary Modifies a monitoring frequency.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Usage notes
       * If you use the Every 5 Seconds monitoring frequency, you are charged additional fees. Before you call this operation, make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/45020.html) of ApsaraDB RDS.
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure the monitoring frequency for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96112.html)
       * *   [Configure the monitoring frequency for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95710.html)
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(const Models::ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a monitoring frequency.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Usage notes
       * If you use the Every 5 Seconds monitoring frequency, you are charged additional fees. Before you call this operation, make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/45020.html) of ApsaraDB RDS.
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure the monitoring frequency for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96112.html)
       * *   [Configure the monitoring frequency for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95710.html)
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(const Models::ModifyDBInstanceMonitorRequest &request);

      /**
       * @summary Changes the expiration time of the classic network endpoint of an instance in hybrid access mode.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)References
       * *   [Configure the hybrid access solution for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96110.html)
       * *   [Configure the hybrid access solution for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95708.html)
       *
       * @param request ModifyDBInstanceNetworkExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkExpireTimeResponse
       */
      Models::ModifyDBInstanceNetworkExpireTimeResponse modifyDBInstanceNetworkExpireTimeWithOptions(const Models::ModifyDBInstanceNetworkExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the expiration time of the classic network endpoint of an instance in hybrid access mode.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)References
       * *   [Configure the hybrid access solution for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96110.html)
       * *   [Configure the hybrid access solution for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95708.html)
       *
       * @param request ModifyDBInstanceNetworkExpireTimeRequest
       * @return ModifyDBInstanceNetworkExpireTimeResponse
       */
      Models::ModifyDBInstanceNetworkExpireTimeResponse modifyDBInstanceNetworkExpireTime(const Models::ModifyDBInstanceNetworkExpireTimeRequest &request);

      /**
       * @summary Changes the network type of an ApsaraDB RDS instance from classic network to VPC
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Change the network type of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96109.html)
       * *   [Change the network type of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96761.html)
       * *   [Change the network type of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95707.html)
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(const Models::ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the network type of an ApsaraDB RDS instance from classic network to VPC
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Change the network type of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96109.html)
       * *   [Change the network type of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96761.html)
       * *   [Change the network type of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95707.html)
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(const Models::ModifyDBInstanceNetworkTypeRequest &request);

      /**
       * @summary Changes the billing method of an instance from pay-as-you-go to subscription.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the following topics:
       * *   [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html)
       * *   [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html)
       * *   [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html)
       * *   [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html)
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayTypeWithOptions(const Models::ModifyDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of an instance from pay-as-you-go to subscription.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the following topics:
       * *   [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html)
       * *   [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html)
       * *   [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html)
       * *   [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html)
       *
       * @param request ModifyDBInstancePayTypeRequest
       * @return ModifyDBInstancePayTypeResponse
       */
      Models::ModifyDBInstancePayTypeResponse modifyDBInstancePayType(const Models::ModifyDBInstancePayTypeRequest &request);

      /**
       * @summary Enables or disables the native replication feature of ApsaraDB RDS for MySQL.
       *
       * @description If you want to enable the native replication feature for an ApsaraDB RDS for MySQL instance, the following requirements must be met:
       * *   The RDS instance runs MySQL 5.7.
       * *   The RDS instance runs RDS Basic Edition.
       * *   The RDS instance uses the pay-as-you-go or subscription billing method.
       * *   The RDS instance runs a minor engine version of 20240930 or later.
       * For more information, see [Enable the native replication feature](https://help.aliyun.com/document_detail/2856530.html).
       *
       * @param request ModifyDBInstanceReplicationSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceReplicationSwitchResponse
       */
      Models::ModifyDBInstanceReplicationSwitchResponse modifyDBInstanceReplicationSwitchWithOptions(const Models::ModifyDBInstanceReplicationSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the native replication feature of ApsaraDB RDS for MySQL.
       *
       * @description If you want to enable the native replication feature for an ApsaraDB RDS for MySQL instance, the following requirements must be met:
       * *   The RDS instance runs MySQL 5.7.
       * *   The RDS instance runs RDS Basic Edition.
       * *   The RDS instance uses the pay-as-you-go or subscription billing method.
       * *   The RDS instance runs a minor engine version of 20240930 or later.
       * For more information, see [Enable the native replication feature](https://help.aliyun.com/document_detail/2856530.html).
       *
       * @param request ModifyDBInstanceReplicationSwitchRequest
       * @return ModifyDBInstanceReplicationSwitchResponse
       */
      Models::ModifyDBInstanceReplicationSwitchResponse modifyDBInstanceReplicationSwitch(const Models::ModifyDBInstanceReplicationSwitchRequest &request);

      /**
       * @summary Modifies the SSL encryption settings of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229517.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request ModifyDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(const Models::ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL encryption settings of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96120.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/229517.html)
       * *   [Use the SSL encryption feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95715.html)
       *
       * @param request ModifyDBInstanceSSLRequest
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSL(const Models::ModifyDBInstanceSSLRequest &request);

      /**
       * @summary Modifies a security group rule that is configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifyDBInstanceSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSecurityGroupRuleResponse
       */
      Models::ModifyDBInstanceSecurityGroupRuleResponse modifyDBInstanceSecurityGroupRuleWithOptions(const Models::ModifyDBInstanceSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a security group rule that is configured for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Configure security group settings for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifyDBInstanceSecurityGroupRuleRequest
       * @return ModifyDBInstanceSecurityGroupRuleResponse
       */
      Models::ModifyDBInstanceSecurityGroupRuleResponse modifyDBInstanceSecurityGroupRule(const Models::ModifyDBInstanceSecurityGroupRuleRequest &request);

      /**
       * @summary Changes the instance type and storage capacity of an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Billing details
       * [Fees for specification changes](https://help.aliyun.com/document_detail/57178.html) are generated if the call is successful. Before you call this operation, carefully read the following topics.
       * ### [](#)References
       * *   [Change the specifications of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96061.html)
       * *   [Change the specifications of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96750.html)
       * *   [Change the specifications of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95665.html)
       * *   [Change the specifications of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97129.html)
       *
       * @param tmpReq ModifyDBInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpecWithOptions(const Models::ModifyDBInstanceSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the instance type and storage capacity of an ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Billing details
       * [Fees for specification changes](https://help.aliyun.com/document_detail/57178.html) are generated if the call is successful. Before you call this operation, carefully read the following topics.
       * ### [](#)References
       * *   [Change the specifications of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96061.html)
       * *   [Change the specifications of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96750.html)
       * *   [Change the specifications of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95665.html)
       * *   [Change the specifications of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97129.html)
       *
       * @param request ModifyDBInstanceSpecRequest
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpec(const Models::ModifyDBInstanceSpecRequest &request);

      /**
       * @summary Enables the Transparent Data Encryption (TDE) feature for an ApsaraDB RDS instance and modifies the TDE status for the instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure TDE for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96121.html)
       * *   [Configure TDE for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/465652.html)
       * *   [Configure TDE for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95716.html)
       *
       * @param request ModifyDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDEWithOptions(const Models::ModifyDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Transparent Data Encryption (TDE) feature for an ApsaraDB RDS instance and modifies the TDE status for the instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure TDE for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96121.html)
       * *   [Configure TDE for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/465652.html)
       * *   [Configure TDE for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95716.html)
       *
       * @param request ModifyDBInstanceTDERequest
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDE(const Models::ModifyDBInstanceTDERequest &request);

      /**
       * @summary Changes the specifications, storage type, and storage capacity of an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * *   MySQL
       * ### [](#)References
       * [Change instance specifications](https://help.aliyun.com/document_detail/2627998.html)
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
       *
       * @param tmpReq ModifyDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeResponse
       */
      Models::ModifyDBNodeResponse modifyDBNodeWithOptions(const Models::ModifyDBNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications, storage type, and storage capacity of an ApsaraDB RDS for MySQL instance that runs RDS Cluster Edition.
       *
       * @description ### [](#)Supported database engine
       * *   MySQL
       * ### [](#)References
       * [Change instance specifications](https://help.aliyun.com/document_detail/2627998.html)
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
       *
       * @param request ModifyDBNodeRequest
       * @return ModifyDBNodeResponse
       */
      Models::ModifyDBNodeResponse modifyDBNode(const Models::ModifyDBNodeRequest &request);

      /**
       * @summary Enables or modifies the database proxy feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * >  Starting October 17, 2023, ApsaraDB RDS for MySQL instances that run RDS Cluster Edition offer one free-of-charge dedicated database proxy for each unit in phases. For more information, see [[Special offers/Price changes\\] One dedicated proxy is provided free of charge for ApsaraDB RDS for MySQL instances on RDS Cluster Edition](~~2555466~~).
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Enable the database proxy feature of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/197456.html)
       * *   [Enable the database proxy feature of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/418272.html)
       *
       * @param tmpReq ModifyDBProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyResponse
       */
      Models::ModifyDBProxyResponse modifyDBProxyWithOptions(const Models::ModifyDBProxyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or modifies the database proxy feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * >  Starting October 17, 2023, ApsaraDB RDS for MySQL instances that run RDS Cluster Edition offer one free-of-charge dedicated database proxy for each unit in phases. For more information, see [[Special offers/Price changes\\] One dedicated proxy is provided free of charge for ApsaraDB RDS for MySQL instances on RDS Cluster Edition](~~2555466~~).
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Enable the database proxy feature of ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/197456.html)
       * *   [Enable the database proxy feature of ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/418272.html)
       *
       * @param request ModifyDBProxyRequest
       * @return ModifyDBProxyResponse
       */
      Models::ModifyDBProxyResponse modifyDBProxy(const Models::ModifyDBProxyRequest &request);

      /**
       * @summary Modifies the connection settings for a database proxy endpoint.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure the connection settings for a database proxy endpoint for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/2621331.html)
       * *   [Configure the connection settings for a database proxy endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418273.html)
       *
       * @param request ModifyDBProxyEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyEndpointResponse
       */
      Models::ModifyDBProxyEndpointResponse modifyDBProxyEndpointWithOptions(const Models::ModifyDBProxyEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the connection settings for a database proxy endpoint.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure the connection settings for a database proxy endpoint for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/2621331.html)
       * *   [Configure the connection settings for a database proxy endpoint for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418273.html)
       *
       * @param request ModifyDBProxyEndpointRequest
       * @return ModifyDBProxyEndpointResponse
       */
      Models::ModifyDBProxyEndpointResponse modifyDBProxyEndpoint(const Models::ModifyDBProxyEndpointRequest &request);

      /**
       * @summary Modifies the database proxy endpoint of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure the database proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * *   [Configure the database proxy endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request ModifyDBProxyEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyEndpointAddressResponse
       */
      Models::ModifyDBProxyEndpointAddressResponse modifyDBProxyEndpointAddressWithOptions(const Models::ModifyDBProxyEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the database proxy endpoint of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure the database proxy endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/184921.html)
       * *   [Configure the database proxy endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418274.html)
       *
       * @param request ModifyDBProxyEndpointAddressRequest
       * @return ModifyDBProxyEndpointAddressResponse
       */
      Models::ModifyDBProxyEndpointAddressResponse modifyDBProxyEndpointAddress(const Models::ModifyDBProxyEndpointAddressRequest &request);

      /**
       * @summary Changes the configuration of a database proxy for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * >  Starting October 17, 2023, ApsaraDB RDS for MySQL instances that run RDS Cluster Edition offer one free-of-charge dedicated database proxy for each unit in phases. For more information, see [[Special offers/Price changes\\] One dedicated proxy is provided free of charge for ApsaraDB RDS for MySQL instances on RDS Cluster Edition](~~2555466~~).
       *
       * @param tmpReq ModifyDBProxyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBProxyInstanceResponse
       */
      Models::ModifyDBProxyInstanceResponse modifyDBProxyInstanceWithOptions(const Models::ModifyDBProxyInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configuration of a database proxy for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * >  Starting October 17, 2023, ApsaraDB RDS for MySQL instances that run RDS Cluster Edition offer one free-of-charge dedicated database proxy for each unit in phases. For more information, see [[Special offers/Price changes\\] One dedicated proxy is provided free of charge for ApsaraDB RDS for MySQL instances on RDS Cluster Edition](~~2555466~~).
       *
       * @param request ModifyDBProxyInstanceRequest
       * @return ModifyDBProxyInstanceResponse
       */
      Models::ModifyDBProxyInstanceResponse modifyDBProxyInstance(const Models::ModifyDBProxyInstanceRequest &request);

      /**
       * @summary Configures a distributed transaction whitelist for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDTCSecurityIpHostsForSQLServerResponse
       */
      Models::ModifyDTCSecurityIpHostsForSQLServerResponse modifyDTCSecurityIpHostsForSQLServerWithOptions(const Models::ModifyDTCSecurityIpHostsForSQLServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a distributed transaction whitelist for an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Configure a distributed transaction whitelist](https://help.aliyun.com/document_detail/124321.html)
       *
       * @param request ModifyDTCSecurityIpHostsForSQLServerRequest
       * @return ModifyDTCSecurityIpHostsForSQLServerResponse
       */
      Models::ModifyDTCSecurityIpHostsForSQLServerResponse modifyDTCSecurityIpHostsForSQLServer(const Models::ModifyDTCSecurityIpHostsForSQLServerRequest &request);

      /**
       * @summary Configures automatic storage expansion for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure automatic storage expansion for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/173826.html)
       * *   [Configure automatic storage expansion for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/432496.html)
       *
       * @param request ModifyDasInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDasInstanceConfigResponse
       */
      Models::ModifyDasInstanceConfigResponse modifyDasInstanceConfigWithOptions(const Models::ModifyDasInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures automatic storage expansion for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure automatic storage expansion for ApsaraDB RDS for MySQL](https://help.aliyun.com/document_detail/173826.html)
       * *   [Configure automatic storage expansion for ApsaraDB RDS for PostgreSQL](https://help.aliyun.com/document_detail/432496.html)
       *
       * @param request ModifyDasInstanceConfigRequest
       * @return ModifyDasInstanceConfigResponse
       */
      Models::ModifyDasInstanceConfigResponse modifyDasInstanceConfig(const Models::ModifyDasInstanceConfigRequest &request);

      /**
       * @summary Modifies the property settings of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)References
       * You can call this operation to modify the database properties of an ApsaraDB RDS for SQL Server instance and archive data from an instance that uses cloud disks to an Object Storage Service (OSS) bucket. Before you call this operation to archive data to an OSS bucket, you must enable the data archiving feature in the ApsaraDB RDS console. For more information, see [Modify database properties](https://help.aliyun.com/document_detail/2401398.html) and [Archive cloud disk data to an OSS bucket](https://help.aliyun.com/document_detail/2767189.html).
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       *
       * @param request ModifyDatabaseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseConfigResponse
       */
      Models::ModifyDatabaseConfigResponse modifyDatabaseConfigWithOptions(const Models::ModifyDatabaseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the property settings of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * *   SQL Server
       * ### [](#)References
       * You can call this operation to modify the database properties of an ApsaraDB RDS for SQL Server instance and archive data from an instance that uses cloud disks to an Object Storage Service (OSS) bucket. Before you call this operation to archive data to an OSS bucket, you must enable the data archiving feature in the ApsaraDB RDS console. For more information, see [Modify database properties](https://help.aliyun.com/document_detail/2401398.html) and [Archive cloud disk data to an OSS bucket](https://help.aliyun.com/document_detail/2767189.html).
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       *
       * @param request ModifyDatabaseConfigRequest
       * @return ModifyDatabaseConfigResponse
       */
      Models::ModifyDatabaseConfigResponse modifyDatabaseConfig(const Models::ModifyDatabaseConfigRequest &request);

      /**
       * @summary Configures SSL encryption for an dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS MySQL
       * ### [](#)References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation:
       * [Configure SSL encryption for a proxy endpoint](https://help.aliyun.com/document_detail/188164.html)
       *
       * @param request ModifyDbProxyInstanceSslRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDbProxyInstanceSslResponse
       */
      Models::ModifyDbProxyInstanceSslResponse modifyDbProxyInstanceSslWithOptions(const Models::ModifyDbProxyInstanceSslRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures SSL encryption for an dedicated proxy endpoint of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS MySQL
       * ### [](#)References
       * > : Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation:
       * [Configure SSL encryption for a proxy endpoint](https://help.aliyun.com/document_detail/188164.html)
       *
       * @param request ModifyDbProxyInstanceSslRequest
       * @return ModifyDbProxyInstanceSslResponse
       */
      Models::ModifyDbProxyInstanceSslResponse modifyDbProxyInstanceSsl(const Models::ModifyDbProxyInstanceSslRequest &request);

      /**
       * @summary Modifies information about the events in the event center.
       *
       * @param request ModifyEventInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfoWithOptions(const Models::ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about the events in the event center.
       *
       * @param request ModifyEventInfoRequest
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfo(const Models::ModifyEventInfoRequest &request);

      /**
       * @summary Change the availability check method of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [What is availability check?](https://help.aliyun.com/document_detail/207467.html)
       *
       * @param request ModifyHADiagnoseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHADiagnoseConfigResponse
       */
      Models::ModifyHADiagnoseConfigResponse modifyHADiagnoseConfigWithOptions(const Models::ModifyHADiagnoseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the availability check method of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [What is availability check?](https://help.aliyun.com/document_detail/207467.html)
       *
       * @param request ModifyHADiagnoseConfigRequest
       * @return ModifyHADiagnoseConfigResponse
       */
      Models::ModifyHADiagnoseConfigResponse modifyHADiagnoseConfig(const Models::ModifyHADiagnoseConfigRequest &request);

      /**
       * @summary Enables or disables the automatic primary/secondary switchover feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96054.html)
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96747.html)
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95659.html)
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request ModifyHASwitchConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHASwitchConfigResponse
       */
      Models::ModifyHASwitchConfigResponse modifyHASwitchConfigWithOptions(const Models::ModifyHASwitchConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the automatic primary/secondary switchover feature for an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96054.html)
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96747.html)
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95659.html)
       * *   [Use the automatic primary/secondary switchover feature for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request ModifyHASwitchConfigRequest
       * @return ModifyHASwitchConfigResponse
       */
      Models::ModifyHASwitchConfigResponse modifyHASwitchConfig(const Models::ModifyHASwitchConfigRequest &request);

      /**
       * @summary Modifies the auto-renewal settings of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * >Notice: Fees are generated if the call is successful. Before you call this operation, carefully read the following topics:
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96049.html)
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96740.html)
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95635.html)
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97121.html)
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(const Models::ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal settings of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * >Notice: Fees are generated if the call is successful. Before you call this operation, carefully read the following topics:
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96049.html)
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96740.html)
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95635.html)
       * *   [Use the auto-renewal feature for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97121.html)
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(const Models::ModifyInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Modifies the cross-region backup settings of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request ModifyInstanceCrossBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceCrossBackupPolicyResponse
       */
      Models::ModifyInstanceCrossBackupPolicyResponse modifyInstanceCrossBackupPolicyWithOptions(const Models::ModifyInstanceCrossBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cross-region backup settings of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206671.html)
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/187923.html)
       *
       * @param request ModifyInstanceCrossBackupPolicyRequest
       * @return ModifyInstanceCrossBackupPolicyResponse
       */
      Models::ModifyInstanceCrossBackupPolicyResponse modifyInstanceCrossBackupPolicy(const Models::ModifyInstanceCrossBackupPolicyRequest &request);

      /**
       * @summary 修改全密态规则
       *
       * @param tmpReq ModifyMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRulesWithOptions(const Models::ModifyMaskingRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改全密态规则
       *
       * @param request ModifyMaskingRulesRequest
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRules(const Models::ModifyMaskingRulesRequest &request);

      /**
       * @summary Modifies the pg_hba.conf file of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS PostgreSQL
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Connect an ApsaraDB RDS for PostgreSQL instance to a self-managed AD domain](https://help.aliyun.com/document_detail/349288.html)
       * *   [The pg_hba.conf File](https://www.postgresql.org/docs/11/auth-pg-hba-conf.html)
       *
       * @param request ModifyPGHbaConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPGHbaConfigResponse
       */
      Models::ModifyPGHbaConfigResponse modifyPGHbaConfigWithOptions(const Models::ModifyPGHbaConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the pg_hba.conf file of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### [](#)Supported database engines
       * RDS PostgreSQL
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Connect an ApsaraDB RDS for PostgreSQL instance to a self-managed AD domain](https://help.aliyun.com/document_detail/349288.html)
       * *   [The pg_hba.conf File](https://www.postgresql.org/docs/11/auth-pg-hba-conf.html)
       *
       * @param request ModifyPGHbaConfigRequest
       * @return ModifyPGHbaConfigResponse
       */
      Models::ModifyPGHbaConfigResponse modifyPGHbaConfig(const Models::ModifyPGHbaConfigRequest &request);

      /**
       * @summary Modifies the parameter values of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Modify the parameters of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html)
       * *   [Modify the parameters of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html)
       * *   [Modify the parameters of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95667.html)
       * *   [Modify the parameters of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97130.html)
       *
       * @param request ModifyParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameterWithOptions(const Models::ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameter values of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Modify the parameters of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html)
       * *   [Modify the parameters of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html)
       * *   [Modify the parameters of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95667.html)
       * *   [Modify the parameters of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97130.html)
       *
       * @param request ModifyParameterRequest
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameter(const Models::ModifyParameterRequest &request);

      /**
       * @summary Modifies the parameter template of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request ModifyParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroupWithOptions(const Models::ModifyParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameter template of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/130565.html)
       * *   [Use a parameter template to configure the parameters of ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/457176.html)
       *
       * @param request ModifyParameterGroupRequest
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroup(const Models::ModifyParameterGroupRequest &request);

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
       * @summary Modifies the disk type or performance level (PL) of the cloud disks of an RDS Custom instance.
       *
       * @description >  To minimize the impacts on your business, we recommend that you change specifications during off-peak hours.
       * Take note of the following items:
       * *   For a pay-as-you-go Enterprise SSD (ESSD), you can upgrade or downgrade its PL. However, you cannot downgrade the performance level to PL0.
       * *   The ESSD must be in the In Use (In_Use) or Unattached (Available) state.
       * *   If the ESSD is attached to an instance, the instance must be in the Running or Stopped state. The instance cannot be in the Expired state or stopped due to overdue payments.
       * *   The performance level of an ESSD is limited by the capacity of the ESSD. If you cannot upgrade the PL of an ESSD, you can expand the capacity of the ESSD.
       *
       * @param request ModifyRCDiskSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCDiskSpecResponse
       */
      Models::ModifyRCDiskSpecResponse modifyRCDiskSpecWithOptions(const Models::ModifyRCDiskSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the disk type or performance level (PL) of the cloud disks of an RDS Custom instance.
       *
       * @description >  To minimize the impacts on your business, we recommend that you change specifications during off-peak hours.
       * Take note of the following items:
       * *   For a pay-as-you-go Enterprise SSD (ESSD), you can upgrade or downgrade its PL. However, you cannot downgrade the performance level to PL0.
       * *   The ESSD must be in the In Use (In_Use) or Unattached (Available) state.
       * *   If the ESSD is attached to an instance, the instance must be in the Running or Stopped state. The instance cannot be in the Expired state or stopped due to overdue payments.
       * *   The performance level of an ESSD is limited by the capacity of the ESSD. If you cannot upgrade the PL of an ESSD, you can expand the capacity of the ESSD.
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
       * @summary Upgrades or downgrades the instance type of a subscription RDS Custom instance. The new instance type takes effect for the remaining lifecycle of the instance.
       *
       * @description Before you call this operation, make sure that you are familiar with the billing methods, pricing, and refund rules of RDS Custom.
       * Before you call this operation, take note of the following items:
       * *   You cannot change the instance type of an expired instance. You can renew the instance and try again.
       * *   When you downgrade the instance type of an instance, take note of the following items:
       *     *   The instance must be in the Stopped state.
       *     *   The price difference is refunded to the payment account you used. Vouchers that have been redeemed are not refundable.
       * *   The operation is asynchronous. Wait 5 to 10 seconds for the instance type change to complete. Then, restart the instance by calling the RebootInstance operation or by using the console for the instance type change to take effect. If you restart only the operating system of the instance, the instance type change does not take effect. If the instance is in the Stopped state, you need only to start the instance. You do not need to restart the instance after it enters the Running state.
       *
       * @param request ModifyRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceResponse
       */
      Models::ModifyRCInstanceResponse modifyRCInstanceWithOptions(const Models::ModifyRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the instance type of a subscription RDS Custom instance. The new instance type takes effect for the remaining lifecycle of the instance.
       *
       * @description Before you call this operation, make sure that you are familiar with the billing methods, pricing, and refund rules of RDS Custom.
       * Before you call this operation, take note of the following items:
       * *   You cannot change the instance type of an expired instance. You can renew the instance and try again.
       * *   When you downgrade the instance type of an instance, take note of the following items:
       *     *   The instance must be in the Stopped state.
       *     *   The price difference is refunded to the payment account you used. Vouchers that have been redeemed are not refundable.
       * *   The operation is asynchronous. Wait 5 to 10 seconds for the instance type change to complete. Then, restart the instance by calling the RebootInstance operation or by using the console for the instance type change to take effect. If you restart only the operating system of the instance, the instance type change does not take effect. If the instance is in the Stopped state, you need only to start the instance. You do not need to restart the instance after it enters the Running state.
       *
       * @param request ModifyRCInstanceRequest
       * @return ModifyRCInstanceResponse
       */
      Models::ModifyRCInstanceResponse modifyRCInstance(const Models::ModifyRCInstanceRequest &request);

      /**
       * @summary Modifies the attributes of an RDS Custom instance, such as the password, hostname, security groups, and whether release protection is enabled.
       *
       * @param tmpReq ModifyRCInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceAttributeResponse
       */
      Models::ModifyRCInstanceAttributeResponse modifyRCInstanceAttributeWithOptions(const Models::ModifyRCInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an RDS Custom instance, such as the password, hostname, security groups, and whether release protection is enabled.
       *
       * @param request ModifyRCInstanceAttributeRequest
       * @return ModifyRCInstanceAttributeResponse
       */
      Models::ModifyRCInstanceAttributeResponse modifyRCInstanceAttribute(const Models::ModifyRCInstanceAttributeRequest &request);

      /**
       * @summary Modifies the billing method of an RDS Custom instance or cloud disks. You can call this operation to change the billing method of instances between pay-as-you-go and subscription.
       *
       * @description ### [](#)Precautions
       * *   Before you call this operation, make sure that you are familiar with the subscription and pay-as-you-go billing methods and pricing of RDS Custom.
       * *   The instances must be in the **Running** or **Stopped** state, and you have no overdue payments for the instances.
       * *   The disk is in the **In_use** state and the billing method of the disk has not been changed within the previous 15 minutes.
       * *   After you change the billing method, the payment is automatically completed. Make sure that the balance in your account is sufficient. Otherwise, your order becomes invalid and is canceled.
       * ### [](#)Considerations
       * For more information, see the following documentation:
       * *   [Change the billing method of an instance](https://help.aliyun.com/document_detail/2878542.html)
       * *   [Change the billing method of a disk](https://help.aliyun.com/document_detail/2878547.html)
       *
       * @param request ModifyRCInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceChargeTypeResponse
       */
      Models::ModifyRCInstanceChargeTypeResponse modifyRCInstanceChargeTypeWithOptions(const Models::ModifyRCInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the billing method of an RDS Custom instance or cloud disks. You can call this operation to change the billing method of instances between pay-as-you-go and subscription.
       *
       * @description ### [](#)Precautions
       * *   Before you call this operation, make sure that you are familiar with the subscription and pay-as-you-go billing methods and pricing of RDS Custom.
       * *   The instances must be in the **Running** or **Stopped** state, and you have no overdue payments for the instances.
       * *   The disk is in the **In_use** state and the billing method of the disk has not been changed within the previous 15 minutes.
       * *   After you change the billing method, the payment is automatically completed. Make sure that the balance in your account is sufficient. Otherwise, your order becomes invalid and is canceled.
       * ### [](#)Considerations
       * For more information, see the following documentation:
       * *   [Change the billing method of an instance](https://help.aliyun.com/document_detail/2878542.html)
       * *   [Change the billing method of a disk](https://help.aliyun.com/document_detail/2878547.html)
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
       * @summary Modifies the key pair of an RDS Custom instance.
       *
       * @param request ModifyRCInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceKeyPairResponse
       */
      Models::ModifyRCInstanceKeyPairResponse modifyRCInstanceKeyPairWithOptions(const Models::ModifyRCInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the key pair of an RDS Custom instance.
       *
       * @param request ModifyRCInstanceKeyPairRequest
       * @return ModifyRCInstanceKeyPairResponse
       */
      Models::ModifyRCInstanceKeyPairResponse modifyRCInstanceKeyPair(const Models::ModifyRCInstanceKeyPairRequest &request);

      /**
       * @summary Modifies the public bandwidth of an RDS Custom for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * Custom for SQL Server
       *
       * @param request ModifyRCInstanceNetworkSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRCInstanceNetworkSpecResponse
       */
      Models::ModifyRCInstanceNetworkSpecResponse modifyRCInstanceNetworkSpecWithOptions(const Models::ModifyRCInstanceNetworkSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the public bandwidth of an RDS Custom for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * Custom for SQL Server
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
       * @summary Modifies the latency threshold of the read/write splitting link and the read weights of a primary instance and its read-only instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The read/write splitting feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The instance must run one of the following database engine versions and RDS editions:
       *     *   MySQL 5.7 on RDS High-availability Edition with local disks
       *     *   MySQL 5.6
       *     *   SQL Server on RDS Cluster Edition
       *
       * @param request ModifyReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReadWriteSplittingConnectionResponse
       */
      Models::ModifyReadWriteSplittingConnectionResponse modifyReadWriteSplittingConnectionWithOptions(const Models::ModifyReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the latency threshold of the read/write splitting link and the read weights of a primary instance and its read-only instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### [](#)Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The read/write splitting feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The instance must run one of the following database engine versions and RDS editions:
       *     *   MySQL 5.7 on RDS High-availability Edition with local disks
       *     *   MySQL 5.6
       *     *   SQL Server on RDS Cluster Edition
       *
       * @param request ModifyReadWriteSplittingConnectionRequest
       * @return ModifyReadWriteSplittingConnectionResponse
       */
      Models::ModifyReadWriteSplittingConnectionResponse modifyReadWriteSplittingConnection(const Models::ModifyReadWriteSplittingConnectionRequest &request);

      /**
       * @summary Modifies the latency at which a read-only ApsaraDB RDS for MySQL instance replicates data from its primary instance.
       *
       * @description ### Supported database engines
       * RDS MySQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Set the data replication latency of a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
       */
      Models::ModifyReadonlyInstanceDelayReplicationTimeResponse modifyReadonlyInstanceDelayReplicationTimeWithOptions(const Models::ModifyReadonlyInstanceDelayReplicationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the latency at which a read-only ApsaraDB RDS for MySQL instance replicates data from its primary instance.
       *
       * @description ### Supported database engines
       * RDS MySQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Set the data replication latency of a read-only ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96056.html)
       *
       * @param request ModifyReadonlyInstanceDelayReplicationTimeRequest
       * @return ModifyReadonlyInstanceDelayReplicationTimeResponse
       */
      Models::ModifyReadonlyInstanceDelayReplicationTimeResponse modifyReadonlyInstanceDelayReplicationTime(const Models::ModifyReadonlyInstanceDelayReplicationTimeRequest &request);

      /**
       * @summary Moves an ApsaraDB RDS instance to a specified resource group.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Transfer resources across resource groups](https://help.aliyun.com/document_detail/94487.html)
       *
       * @param request ModifyResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroupWithOptions(const Models::ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an ApsaraDB RDS instance to a specified resource group.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Transfer resources across resource groups](https://help.aliyun.com/document_detail/94487.html)
       *
       * @param request ModifyResourceGroupRequest
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroup(const Models::ModifyResourceGroupRequest &request);

      /**
       * @summary This operation can still be called but is no longer maintained. This operation enables or disables the SQL Explorer (SQL Audit) feature for an instance.
       *
       * @description This operation can still be called but is no longer maintained. We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation instead of this operation.
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicyWithOptions(const Models::ModifySQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation can still be called but is no longer maintained. This operation enables or disables the SQL Explorer (SQL Audit) feature for an instance.
       *
       * @description This operation can still be called but is no longer maintained. We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation instead of this operation.
       *
       * @param request ModifySQLCollectorPolicyRequest
       * @return ModifySQLCollectorPolicyResponse
       */
      Models::ModifySQLCollectorPolicyResponse modifySQLCollectorPolicy(const Models::ModifySQLCollectorPolicyRequest &request);

      /**
       * @summary Changes the retention period of the log files that are generated by the SQL Explorer feature for an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * RDS MySQL
       * ### Precautions
       * After you shorten the log backup retention period, log backup files that are stored longer than the specified log backup retention period are immediately deleted.
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the SQL Explorer and Audit feature](https://help.aliyun.com/document_detail/476574.html)
       *
       * @param request ModifySQLCollectorRetentionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySQLCollectorRetentionResponse
       */
      Models::ModifySQLCollectorRetentionResponse modifySQLCollectorRetentionWithOptions(const Models::ModifySQLCollectorRetentionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the retention period of the log files that are generated by the SQL Explorer feature for an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * RDS MySQL
       * ### Precautions
       * After you shorten the log backup retention period, log backup files that are stored longer than the specified log backup retention period are immediately deleted.
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Use the SQL Explorer and Audit feature](https://help.aliyun.com/document_detail/476574.html)
       *
       * @param request ModifySQLCollectorRetentionRequest
       * @return ModifySQLCollectorRetentionResponse
       */
      Models::ModifySQLCollectorRetentionResponse modifySQLCollectorRetention(const Models::ModifySQLCollectorRetentionRequest &request);

      /**
       * @summary Changes the ECS security groups to which an instance is added.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * *   [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * *   [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(const Models::ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the ECS security groups to which an instance is added.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Configure a security group for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/201042.html)
       * *   [Configure a security group for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/206310.html)
       * *   [Configure a security group for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/2392322.html)
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(const Models::ModifySecurityGroupConfigurationRequest &request);

      /**
       * @summary Modifies the IP address whitelist of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96118.html)
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/43187.html)
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/43186.html)
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/90336.html)
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelist of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96118.html)
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/43187.html)
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/43186.html)
       * *   [Configure an IP address whitelist for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/90336.html)
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary Modifies information about the historical tasks in the task center.
       *
       * @param request ModifyTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfoWithOptions(const Models::ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about the historical tasks in the task center.
       *
       * @param request ModifyTaskInfoRequest
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfo(const Models::ModifyTaskInfoRequest &request);

      /**
       * @summary Edits a whitelist. You can call this operation to create, modify, or delete a whitelist.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request ModifyWhitelistTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyWhitelistTemplateResponse
       */
      Models::ModifyWhitelistTemplateResponse modifyWhitelistTemplateWithOptions(const Models::ModifyWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a whitelist. You can call this operation to create, modify, or delete a whitelist.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       *
       * @param request ModifyWhitelistTemplateRequest
       * @return ModifyWhitelistTemplateResponse
       */
      Models::ModifyWhitelistTemplateResponse modifyWhitelistTemplate(const Models::ModifyWhitelistTemplateRequest &request);

      /**
       * @summary 删除节点创建订单预检查
       *
       * @param tmpReq PreCheckCreateOrderForDeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckCreateOrderForDeleteDBNodesResponse
       */
      Models::PreCheckCreateOrderForDeleteDBNodesResponse preCheckCreateOrderForDeleteDBNodesWithOptions(const Models::PreCheckCreateOrderForDeleteDBNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除节点创建订单预检查
       *
       * @param request PreCheckCreateOrderForDeleteDBNodesRequest
       * @return PreCheckCreateOrderForDeleteDBNodesResponse
       */
      Models::PreCheckCreateOrderForDeleteDBNodesResponse preCheckCreateOrderForDeleteDBNodes(const Models::PreCheckCreateOrderForDeleteDBNodesRequest &request);

      /**
       * @summary Checks whether DuckDB-based analytical instances can be created for the specified RDS for PostgreSQL primary instance. If DuckDB-based analytical instances cannot be created, this operation returns the failure causes and provides solutions or recommended specification values.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [DuckDB-based analytical instance](https://help.aliyun.com/document_detail/2977241.html)
       *
       * @param request PrecheckDuckDBDependencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckDuckDBDependencyResponse
       */
      Models::PrecheckDuckDBDependencyResponse precheckDuckDBDependencyWithOptions(const Models::PrecheckDuckDBDependencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether DuckDB-based analytical instances can be created for the specified RDS for PostgreSQL primary instance. If DuckDB-based analytical instances cannot be created, this operation returns the failure causes and provides solutions or recommended specification values.
       *
       * @description ### [](#)Supported database engine
       * RDS PostgreSQL
       * ### [](#)References
       * [DuckDB-based analytical instance](https://help.aliyun.com/document_detail/2977241.html)
       *
       * @param request PrecheckDuckDBDependencyRequest
       * @return PrecheckDuckDBDependencyResponse
       */
      Models::PrecheckDuckDBDependencyResponse precheckDuckDBDependency(const Models::PrecheckDuckDBDependencyRequest &request);

      /**
       * @summary Clears the on-premises logs of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### Description
       * The system automatically uploads log backup files to Object Storage Service (OSS) buckets. If the remaining storage of an instance is insufficient, you can call this operation to upload the log backup files of the instance to OSS buckets. After the upload is complete, the system deletes these files from the instance to release storage. This operation is called to upload log backup files from an instance to OSS buckets and then delete these files from the instance. If the instance runs SQL Server, transaction log backup files are compressed before they are uploaded.
       * ### Precautions
       * *   When you upload log backup files, the data restoration feature is not affected.
       * *   This operation is called to release storage. The backup storage usage is not reduced.
       * *   The OSS buckets to which log backup files are uploaded are provided by the system. You do not need to purchase these OSS buckets. In addition, you cannot access these OSS buckets.
       *
       * @param request PurgeDBInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeDBInstanceLogResponse
       */
      Models::PurgeDBInstanceLogResponse purgeDBInstanceLogWithOptions(const Models::PurgeDBInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the on-premises logs of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### Description
       * The system automatically uploads log backup files to Object Storage Service (OSS) buckets. If the remaining storage of an instance is insufficient, you can call this operation to upload the log backup files of the instance to OSS buckets. After the upload is complete, the system deletes these files from the instance to release storage. This operation is called to upload log backup files from an instance to OSS buckets and then delete these files from the instance. If the instance runs SQL Server, transaction log backup files are compressed before they are uploaded.
       * ### Precautions
       * *   When you upload log backup files, the data restoration feature is not affected.
       * *   This operation is called to release storage. The backup storage usage is not reduced.
       * *   The OSS buckets to which log backup files are uploaded are provided by the system. You do not need to purchase these OSS buckets. In addition, you cannot access these OSS buckets.
       *
       * @param request PurgeDBInstanceLogRequest
       * @return PurgeDBInstanceLogResponse
       */
      Models::PurgeDBInstanceLogResponse purgeDBInstanceLog(const Models::PurgeDBInstanceLogRequest &request);

      /**
       * @summary Queries the notifications of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### Feature description
       * The notifications are highlighted at the top of the ApsaraDB RDS console. The notifications include renewal reminders and reminders of instance creation failures.
       * After you call this operation to query notifications, you can call the [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) operation to mark the notifications as confirmed, which means that you understand the content of the notifications.
       *
       * @param request QueryNotifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNotifyResponse
       */
      Models::QueryNotifyResponse queryNotifyWithOptions(const Models::QueryNotifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the notifications of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### Feature description
       * The notifications are highlighted at the top of the ApsaraDB RDS console. The notifications include renewal reminders and reminders of instance creation failures.
       * After you call this operation to query notifications, you can call the [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) operation to mark the notifications as confirmed, which means that you understand the content of the notifications.
       *
       * @param request QueryNotifyRequest
       * @return QueryNotifyResponse
       */
      Models::QueryNotifyResponse queryNotify(const Models::QueryNotifyRequest &request);

      /**
       * @summary rds机器人热点问题
       *
       * @param request QueryRecommendByCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecommendByCodeResponse
       */
      Models::QueryRecommendByCodeResponse queryRecommendByCodeWithOptions(const Models::QueryRecommendByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary rds机器人热点问题
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
       * @summary Restarts an RDS Custom instance that is in the Running state.
       *
       * @param request RebootRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRCInstanceResponse
       */
      Models::RebootRCInstanceResponse rebootRCInstanceWithOptions(const Models::RebootRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an RDS Custom instance that is in the Running state.
       *
       * @param request RebootRCInstanceRequest
       * @return RebootRCInstanceResponse
       */
      Models::RebootRCInstanceResponse rebootRCInstance(const Models::RebootRCInstanceRequest &request);

      /**
       * @summary Restarts multiple RDS Custom instances at a time.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       *
       * @param tmpReq RebootRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRCInstancesResponse
       */
      Models::RebootRCInstancesResponse rebootRCInstancesWithOptions(const Models::RebootRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts multiple RDS Custom instances at a time.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       *
       * @param request RebootRCInstancesRequest
       * @return RebootRCInstancesResponse
       */
      Models::RebootRCInstancesResponse rebootRCInstances(const Models::RebootRCInstancesRequest &request);

      /**
       * @summary Rebuilds the secondary instance of a primary instance in a dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request RebuildDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildDBInstanceResponse
       */
      Models::RebuildDBInstanceResponse rebuildDBInstanceWithOptions(const Models::RebuildDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds the secondary instance of a primary instance in a dedicated cluster.
       *
       * @description Dedicated clusters allow you to manage a number of instances at a time. You can create multiple dedicated clusters in a single region. Each dedicated cluster consists of multiple hosts. You can create multiple instances on each host. For more information, see [What is ApsaraDB MyBase?](https://help.aliyun.com/document_detail/141455.html)
       *
       * @param request RebuildDBInstanceRequest
       * @return RebuildDBInstanceResponse
       */
      Models::RebuildDBInstanceResponse rebuildDBInstance(const Models::RebuildDBInstanceRequest &request);

      /**
       * @summary Re-creates a data synchronization link for a disaster recovery ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engine
       * *   PostgreSQL
       *
       * @param request RebuildReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildReplicationLinkResponse
       */
      Models::RebuildReplicationLinkResponse rebuildReplicationLinkWithOptions(const Models::RebuildReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Re-creates a data synchronization link for a disaster recovery ApsaraDB RDS instance.
       *
       * @description ### [](#)Supported database engine
       * *   PostgreSQL
       *
       * @param request RebuildReplicationLinkRequest
       * @return RebuildReplicationLinkResponse
       */
      Models::RebuildReplicationLinkResponse rebuildReplicationLink(const Models::RebuildReplicationLinkRequest &request);

      /**
       * @summary Switches a primary instance to a disaster recovery instance or a disaster recovery instance to a primary instance.
       *
       * @description The operation is phased out.
       *
       * @param request ReceiveDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReceiveDBInstanceResponse
       */
      Models::ReceiveDBInstanceResponse receiveDBInstanceWithOptions(const Models::ReceiveDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches a primary instance to a disaster recovery instance or a disaster recovery instance to a primary instance.
       *
       * @description The operation is phased out.
       *
       * @param request ReceiveDBInstanceRequest
       * @return ReceiveDBInstanceResponse
       */
      Models::ReceiveDBInstanceResponse receiveDBInstance(const Models::ReceiveDBInstanceRequest &request);

      /**
       * @summary Restores backup data of an ApsaraDB RDS for SQL Server instance to an existing instance or a new instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server 2012 or later
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Restore the data of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95722.html)
       *
       * @param request RecoveryDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoveryDBInstanceResponse
       */
      Models::RecoveryDBInstanceResponse recoveryDBInstanceWithOptions(const Models::RecoveryDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores backup data of an ApsaraDB RDS for SQL Server instance to an existing instance or a new instance.
       *
       * @description ### [](#)Supported database engines
       * SQL Server 2012 or later
       * ### [](#)References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Restore the data of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95722.html)
       *
       * @param request RecoveryDBInstanceRequest
       * @return RecoveryDBInstanceResponse
       */
      Models::RecoveryDBInstanceResponse recoveryDBInstance(const Models::RecoveryDBInstanceRequest &request);

      /**
       * @summary Redeploys an RDS Custom instance when the instance receives a system event notification.
       *
       * @description RedeployInstance is an **asynchronous** operation. It migrates data before it restarts the instance. If the instance is successfully redeployed, it enters the Running state. If the instance fails to be redeployed, it returns to the original physical server and the state before the redeployment.
       * When you call this operation, take note of the following items:
       * The instance must be in the Running or Stopped state. After the instance is redeployed, the state of the instance has the following changes:
       * *   If the instance is in the Running state before redeployment, the instance enters the Stopped state.
       * *   If the instance is in the Stopped state before redeployment, the instance enters the Starting state.
       * *   If an instance receives notifications about simulated events that are created by calling the CreateSimulatedSystemEvent operation for the instance, you cannot call this operation to redeploy the instance.
       * The following table lists the types and states of events that you can handle by calling the RedeployInstance operation.
       * *   Instance redeployment due to system maintenance: SystemMaintenance.Redeploy. The event state is Inquiring or Scheduled.
       * *   Instance redeployment due to system failures: SystemFailure.Redeploy. The event state is Inquiring.
       *
       * @param request RedeployRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedeployRCInstanceResponse
       */
      Models::RedeployRCInstanceResponse redeployRCInstanceWithOptions(const Models::RedeployRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redeploys an RDS Custom instance when the instance receives a system event notification.
       *
       * @description RedeployInstance is an **asynchronous** operation. It migrates data before it restarts the instance. If the instance is successfully redeployed, it enters the Running state. If the instance fails to be redeployed, it returns to the original physical server and the state before the redeployment.
       * When you call this operation, take note of the following items:
       * The instance must be in the Running or Stopped state. After the instance is redeployed, the state of the instance has the following changes:
       * *   If the instance is in the Running state before redeployment, the instance enters the Stopped state.
       * *   If the instance is in the Stopped state before redeployment, the instance enters the Starting state.
       * *   If an instance receives notifications about simulated events that are created by calling the CreateSimulatedSystemEvent operation for the instance, you cannot call this operation to redeploy the instance.
       * The following table lists the types and states of events that you can handle by calling the RedeployInstance operation.
       * *   Instance redeployment due to system maintenance: SystemMaintenance.Redeploy. The event state is Inquiring or Scheduled.
       * *   Instance redeployment due to system failures: SystemFailure.Redeploy. The event state is Inquiring.
       *
       * @param request RedeployRCInstanceRequest
       * @return RedeployRCInstanceResponse
       */
      Models::RedeployRCInstanceResponse redeployRCInstance(const Models::RedeployRCInstanceRequest &request);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * *   [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstanceConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceConnectionResponse
       */
      Models::ReleaseInstanceConnectionResponse releaseInstanceConnectionWithOptions(const Models::ReleaseInstanceConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * *   [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstanceConnectionRequest
       * @return ReleaseInstanceConnectionResponse
       */
      Models::ReleaseInstanceConnectionResponse releaseInstanceConnection(const Models::ReleaseInstanceConnectionRequest &request);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Release the public endpoint of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/26128.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/97738.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/97736.html)
       * *   [Release the public endpoint of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97740.html)
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Releases the read/write splitting endpoint of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The read/write splitting feature is enabled for the instance.
       * *   The instance must run one of the following database engine versions and RDS editions:
       *     *   MySQL 5.7 on RDS High-availability Edition (with local disks)
       *     *   MySQL 5.6
       *     *   SQL Server on RDS Cluster Edition
       *
       * @param request ReleaseReadWriteSplittingConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseReadWriteSplittingConnectionResponse
       */
      Models::ReleaseReadWriteSplittingConnectionResponse releaseReadWriteSplittingConnectionWithOptions(const Models::ReleaseReadWriteSplittingConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the read/write splitting endpoint of an instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### Prerequisites
       * Before you call this operation, make sure that the following requirements are met:
       * *   The shared proxy feature is enabled for your ApsaraDB RDS for MySQL instance.
       * *   The read/write splitting feature is enabled for the instance.
       * *   The instance must run one of the following database engine versions and RDS editions:
       *     *   MySQL 5.7 on RDS High-availability Edition (with local disks)
       *     *   MySQL 5.6
       *     *   SQL Server on RDS Cluster Edition
       *
       * @param request ReleaseReadWriteSplittingConnectionRequest
       * @return ReleaseReadWriteSplittingConnectionResponse
       */
      Models::ReleaseReadWriteSplittingConnectionResponse releaseReadWriteSplittingConnection(const Models::ReleaseReadWriteSplittingConnectionRequest &request);

      /**
       * @summary Removes tags from an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Usage notes
       * *   A maximum of 10 tags can be removed in a single request.
       * *   If a tag is removed from all instances to which the tag is added, the tag is automatically deleted.
       * *   If you specify only TagKey, all tags that match the TagKey condition are removed.
       * *   You must specify at least TagKey or a pair of TagKey and TagValue.
       *
       * @param request RemoveTagsFromResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsFromResourceResponse
       */
      Models::RemoveTagsFromResourceResponse removeTagsFromResourceWithOptions(const Models::RemoveTagsFromResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Usage notes
       * *   A maximum of 10 tags can be removed in a single request.
       * *   If a tag is removed from all instances to which the tag is added, the tag is automatically deleted.
       * *   If you specify only TagKey, all tags that match the TagKey condition are removed.
       * *   You must specify at least TagKey or a pair of TagKey and TagValue.
       *
       * @param request RemoveTagsFromResourceRequest
       * @return RemoveTagsFromResourceResponse
       */
      Models::RemoveTagsFromResourceResponse removeTagsFromResource(const Models::RemoveTagsFromResourceRequest &request);

      /**
       * @summary Manually renews an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the following topics:
       * *   [Manually renew an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96050.html)
       * *   [Manually renew an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96741.html)
       * *   [Manually renew an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95637.html)
       * *   [Manually renew an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97122.html)
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually renews an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the following topics:
       * *   [Manually renew an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96050.html)
       * *   [Manually renew an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96741.html)
       * *   [Manually renew an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95637.html)
       * *   [Manually renew an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97122.html)
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
       * @summary Reinstalls the operating system (OS) of an RDS Custom instance.
       *
       * @description *   The instance must be in the Stopped state.
       * *   If you reinstall the system, the data on the original system disk is lost. Exercise caution when you perform this operation.
       *
       * @param request ReplaceRCInstanceSystemDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceRCInstanceSystemDiskResponse
       */
      Models::ReplaceRCInstanceSystemDiskResponse replaceRCInstanceSystemDiskWithOptions(const Models::ReplaceRCInstanceSystemDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinstalls the operating system (OS) of an RDS Custom instance.
       *
       * @description *   The instance must be in the Stopped state.
       * *   If you reinstall the system, the data on the original system disk is lost. Exercise caution when you perform this operation.
       *
       * @param request ReplaceRCInstanceSystemDiskRequest
       * @return ReplaceRCInstanceSystemDiskResponse
       */
      Models::ReplaceRCInstanceSystemDiskResponse replaceRCInstanceSystemDisk(const Models::ReplaceRCInstanceSystemDiskRequest &request);

      /**
       * @summary Resets the permissions of the privileged account.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Reset of the permissions of privileged accounts](https://help.aliyun.com/document_detail/140724.html)
       *
       * @param request ResetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccountWithOptions(const Models::ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the permissions of the privileged account.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Reset of the permissions of privileged accounts](https://help.aliyun.com/document_detail/140724.html)
       *
       * @param request ResetAccountRequest
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccount(const Models::ResetAccountRequest &request);

      /**
       * @summary Resets the password of a database account.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Reset the password of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96100.html)
       * *   [Reset the password of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96814.html)
       * *   [Reset the password of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95691.html)
       * *   [Reset the password of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97133.html)
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a database account.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Reset the password of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96100.html)
       * *   [Reset the password of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96814.html)
       * *   [Reset the password of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95691.html)
       * *   [Reset the password of an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97133.html)
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Expand the storage capacity of an RDS Custom instance.
       *
       * @param request ResizeRCInstanceDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeRCInstanceDiskResponse
       */
      Models::ResizeRCInstanceDiskResponse resizeRCInstanceDiskWithOptions(const Models::ResizeRCInstanceDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expand the storage capacity of an RDS Custom instance.
       *
       * @param request ResizeRCInstanceDiskRequest
       * @return ResizeRCInstanceDiskResponse
       */
      Models::ResizeRCInstanceDiskResponse resizeRCInstanceDisk(const Models::ResizeRCInstanceDiskRequest &request);

      /**
       * @summary Restarts an instance.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Restart an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96051.html)
       * *   [Restart an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96798.html)
       * *   [Restart an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95656.html)
       * *   [Restart an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97472.html)
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an instance.
       *
       * @description ### Supported database engines
       * *   RDS MySQL
       * *   RDS PostgreSQL
       * *   RDS SQL Server
       * *   RDS MariaDB
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Restart an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96051.html)
       * *   [Restart an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96798.html)
       * *   [Restart an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95656.html)
       * *   [Restart an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97472.html)
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Restores data to an existing instance across regions.
       *
       * @description >  Before restoration, you can call the CheckCreateDdrDBInstance operation to check whether a cross-region backup set can be used for cross-region restoration.
       * ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Restore the data of an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120875.html)
       *
       * @param request RestoreDdrTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreDdrTableResponse
       */
      Models::RestoreDdrTableResponse restoreDdrTableWithOptions(const Models::RestoreDdrTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores data to an existing instance across regions.
       *
       * @description >  Before restoration, you can call the CheckCreateDdrDBInstance operation to check whether a cross-region backup set can be used for cross-region restoration.
       * ### [](#)Supported database engines
       * MySQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Use the cross-region backup feature for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/120824.html)
       * *   [Restore the data of an ApsaraDB RDS for MySQL instance across regions](https://help.aliyun.com/document_detail/120875.html)
       *
       * @param request RestoreDdrTableRequest
       * @return RestoreDdrTableResponse
       */
      Models::RestoreDdrTableResponse restoreDdrTable(const Models::RestoreDdrTableRequest &request);

      /**
       * @summary Restores individual databases or tables of an instance to the original instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html)
       * *   [Restore individual databases and tables of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/613672.html)
       *
       * @param request RestoreTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTableWithOptions(const Models::RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores individual databases or tables of an instance to the original instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Restore individual databases and tables of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/103175.html)
       * *   [Restore individual databases and tables of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/613672.html)
       *
       * @param request RestoreTableRequest
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTable(const Models::RestoreTableRequest &request);

      /**
       * @summary Removes the permissions on a database of an ApsaraDB RDS instance from an account.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Prerequisites
       * *   The instance is in the Running state.
       * *   The database is in the Running state.
       * ### [](#)Precautions
       * *   The permissions that can be revoked include SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, REFERENCES, INDEX, ALTER, CREATE TEMPORARY TABLES, LOCK TABLES, EXECUTE, CREATE VIEW, SHOW VIEW, CREATE ROUTINE, ALTER ROUTINE, EVENT, and TRIGGER.
       * *   This operation is not supported for instances that run SQL Server 2017 on RDS Cluster Edition and run PostgreSQL.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilegeWithOptions(const Models::RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the permissions on a database of an ApsaraDB RDS instance from an account.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Prerequisites
       * *   The instance is in the Running state.
       * *   The database is in the Running state.
       * ### [](#)Precautions
       * *   The permissions that can be revoked include SELECT, INSERT, UPDATE, DELETE, CREATE, DROP, REFERENCES, INDEX, ALTER, CREATE TEMPORARY TABLES, LOCK TABLES, EXECUTE, CREATE VIEW, SHOW VIEW, CREATE ROUTINE, ALTER ROUTINE, EVENT, and TRIGGER.
       * *   This operation is not supported for instances that run SQL Server 2017 on RDS Cluster Edition and run PostgreSQL.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilege(const Models::RevokeAccountPrivilegeRequest &request);

      /**
       * @summary Revokes permissions from the service account of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Grant permissions to the service account of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96102.html)
       * *   [Grant permissions to the service account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146887.html)
       * *   [Grant permissions to the service account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request RevokeOperatorPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermissionWithOptions(const Models::RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions from the service account of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Grant permissions to the service account of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96102.html)
       * *   [Grant permissions to the service account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146887.html)
       * *   [Grant permissions to the service account of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95693.html)
       *
       * @param request RevokeOperatorPermissionRequest
       * @return RevokeOperatorPermissionResponse
       */
      Models::RevokeOperatorPermissionResponse revokeOperatorPermission(const Models::RevokeOperatorPermissionRequest &request);

      /**
       * @summary Deletes security group rules with the specified IDs.
       *
       * @param tmpReq RevokeRCSecurityGroupPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeRCSecurityGroupPermissionResponse
       */
      Models::RevokeRCSecurityGroupPermissionResponse revokeRCSecurityGroupPermissionWithOptions(const Models::RevokeRCSecurityGroupPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes security group rules with the specified IDs.
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
       * @summary Creates one or more subscription RDS Custom instances. Before you call this operation, you must specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId.
       *
       * @description *   Before you create RDS Custom instances, you must submit a ticket to add your Alibaba Cloud account to a whitelist.
       * *   You can create only subscription RDS Custom instances.
       * *   Subscription RDS Custom instances are supported in the China (Shanghai), China (Shenzhen), China (Beijing), and China (Hangzhou) regions.
       *
       * @param tmpReq RunRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunRCInstancesResponse
       */
      Models::RunRCInstancesResponse runRCInstancesWithOptions(const Models::RunRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more subscription RDS Custom instances. Before you call this operation, you must specify parameters such as ImageId, InstanceType, VSwitchId, and SecurityGroupId.
       *
       * @description *   Before you create RDS Custom instances, you must submit a ticket to add your Alibaba Cloud account to a whitelist.
       * *   You can create only subscription RDS Custom instances.
       * *   Subscription RDS Custom instances are supported in the China (Shanghai), China (Shenzhen), China (Beijing), and China (Hangzhou) regions.
       *
       * @param request RunRCInstancesRequest
       * @return RunRCInstancesResponse
       */
      Models::RunRCInstancesResponse runRCInstances(const Models::RunRCInstancesRequest &request);

      /**
       * @summary Resumes an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Start an ApsaraDB RDS for SQL instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstanceWithOptions(const Models::StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### [](#)References
       * >  Before you call this operation, read the following topics and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Start an ApsaraDB RDS for SQL instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StartDBInstanceRequest
       * @return StartDBInstanceResponse
       */
      Models::StartDBInstanceResponse startDBInstance(const Models::StartDBInstanceRequest &request);

      /**
       * @summary Starts RDS Custom instances that are in the Stopped state. After the operation is successfully called, the instances enter the Starting state.
       *
       * @param request StartRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRCInstanceResponse
       */
      Models::StartRCInstanceResponse startRCInstanceWithOptions(const Models::StartRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts RDS Custom instances that are in the Stopped state. After the operation is successfully called, the instances enter the Starting state.
       *
       * @param request StartRCInstanceRequest
       * @return StartRCInstanceResponse
       */
      Models::StartRCInstanceResponse startRCInstance(const Models::StartRCInstanceRequest &request);

      /**
       * @summary Starts multiple RDS Custom instances at a time.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       *
       * @param tmpReq StartRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRCInstancesResponse
       */
      Models::StartRCInstancesResponse startRCInstancesWithOptions(const Models::StartRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple RDS Custom instances at a time.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       *
       * @param request StartRCInstancesRequest
       * @return StartRCInstancesResponse
       */
      Models::StartRCInstancesResponse startRCInstances(const Models::StartRCInstancesRequest &request);

      /**
       * @summary Suspends an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       *   [Suspend an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StopDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstanceWithOptions(const Models::StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       *   [Suspend an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/462504.html)
       *
       * @param request StopDBInstanceRequest
       * @return StopDBInstanceResponse
       */
      Models::StopDBInstanceResponse stopDBInstance(const Models::StopDBInstanceRequest &request);

      /**
       * @summary Stops an RDS Custom instance that is in the Running state. After the operation is successfully called, the status of the RDS Custom instance changes from Stopping to Stopped.
       *
       * @param request StopRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRCInstanceResponse
       */
      Models::StopRCInstanceResponse stopRCInstanceWithOptions(const Models::StopRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an RDS Custom instance that is in the Running state. After the operation is successfully called, the status of the RDS Custom instance changes from Stopping to Stopped.
       *
       * @param request StopRCInstanceRequest
       * @return StopRCInstanceResponse
       */
      Models::StopRCInstanceResponse stopRCInstance(const Models::StopRCInstanceRequest &request);

      /**
       * @summary Stops multiple RDS Custom instances at a time.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS SQL Server
       * ### [](#)References
       * *   [Introduction to RDS Custom for MySQL](https://help.aliyun.com/document_detail/2844223.html)
       * *   [Introduction to RDS Custom for SQL Server](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param tmpReq StopRCInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRCInstancesResponse
       */
      Models::StopRCInstancesResponse stopRCInstancesWithOptions(const Models::StopRCInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple RDS Custom instances at a time.
       *
       * @description ### [](#)Supported database engines
       * *   RDS MySQL
       * *   RDS SQL Server
       * ### [](#)References
       * *   [Introduction to RDS Custom for MySQL](https://help.aliyun.com/document_detail/2844223.html)
       * *   [Introduction to RDS Custom for SQL Server](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request StopRCInstancesRequest
       * @return StopRCInstancesResponse
       */
      Models::StopRCInstancesResponse stopRCInstances(const Models::StopRCInstancesRequest &request);

      /**
       * @summary Switches workloads between primary and secondary ApsaraDB RDS instances.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/96054.html)
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/96747.html)
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95659.html)
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for MariaDB instances](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request SwitchDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(const Models::SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches workloads between primary and secondary ApsaraDB RDS instances.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for MySQL instances](https://help.aliyun.com/document_detail/96054.html)
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for PostgreSQL instances](https://help.aliyun.com/document_detail/96747.html)
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for SQL Server instances](https://help.aliyun.com/document_detail/95659.html)
       * *   [Switch workloads between primary and secondary ApsaraDB RDS for MariaDB instances](https://help.aliyun.com/document_detail/97127.html)
       *
       * @param request SwitchDBInstanceHARequest
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHA(const Models::SwitchDBInstanceHARequest &request);

      /**
       * @summary Switches between internal and public endpoints of an instance in the classic network.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### Prerequisites
       * *   The instance is connected by using its internal or public endpoint.
       * *   The instance is in the Running state.
       * *   The number of times that you have switched the instance between its internal and public endpoints within the last 24 hours does not reach 20.
       * *   The instance resides in the classic network.
       * ### Usage notes
       * After the endpoint that is used to connect to the instance is changed, you must update the endpoint information in the code of your application and restart the application.
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetTypeWithOptions(const Models::SwitchDBInstanceNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches between internal and public endpoints of an instance in the classic network.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   SQL Server
       * ### Prerequisites
       * *   The instance is connected by using its internal or public endpoint.
       * *   The instance is in the Running state.
       * *   The number of times that you have switched the instance between its internal and public endpoints within the last 24 hours does not reach 20.
       * *   The instance resides in the classic network.
       * ### Usage notes
       * After the endpoint that is used to connect to the instance is changed, you must update the endpoint information in the code of your application and restart the application.
       *
       * @param request SwitchDBInstanceNetTypeRequest
       * @return SwitchDBInstanceNetTypeResponse
       */
      Models::SwitchDBInstanceNetTypeResponse switchDBInstanceNetType(const Models::SwitchDBInstanceNetTypeRequest &request);

      /**
       * @summary Changes the virtual private cloud (VPC) and vSwitch for an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Change the VPC and vSwitch for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/137567.html)
       * *   [Change the vSwitch for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146885.html)
       * *   [Change the VPC and vSwitch for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/347675.html)
       *
       * @param request SwitchDBInstanceVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceVpcResponse
       */
      Models::SwitchDBInstanceVpcResponse switchDBInstanceVpcWithOptions(const Models::SwitchDBInstanceVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the virtual private cloud (VPC) and vSwitch for an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Change the VPC and vSwitch for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/137567.html)
       * *   [Change the vSwitch for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146885.html)
       * *   [Change the VPC and vSwitch for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/347675.html)
       *
       * @param request SwitchDBInstanceVpcRequest
       * @return SwitchDBInstanceVpcResponse
       */
      Models::SwitchDBInstanceVpcResponse switchDBInstanceVpc(const Models::SwitchDBInstanceVpcRequest &request);

      /**
       * @summary Performs a zero-downtime workload switchover after the major engine version upgrade of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description Supported database engine
       * *   PostgreSQL
       *
       * @param request SwitchOverMajorVersionUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchOverMajorVersionUpgradeResponse
       */
      Models::SwitchOverMajorVersionUpgradeResponse switchOverMajorVersionUpgradeWithOptions(const Models::SwitchOverMajorVersionUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a zero-downtime workload switchover after the major engine version upgrade of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description Supported database engine
       * *   PostgreSQL
       *
       * @param request SwitchOverMajorVersionUpgradeRequest
       * @return SwitchOverMajorVersionUpgradeResponse
       */
      Models::SwitchOverMajorVersionUpgradeResponse switchOverMajorVersionUpgrade(const Models::SwitchOverMajorVersionUpgradeRequest &request);

      /**
       * @summary Switches the data synchronization link from a the primary ApsaraDB RDS for SQL Server instance to a disaster recovery (DR) instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       *
       * @param request SwitchReplicationLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchReplicationLinkResponse
       */
      Models::SwitchReplicationLinkResponse switchReplicationLinkWithOptions(const Models::SwitchReplicationLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the data synchronization link from a the primary ApsaraDB RDS for SQL Server instance to a disaster recovery (DR) instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       *
       * @param request SwitchReplicationLinkRequest
       * @return SwitchReplicationLinkResponse
       */
      Models::SwitchReplicationLinkResponse switchReplicationLink(const Models::SwitchReplicationLinkRequest &request);

      /**
       * @summary Synchronizes a custom key pair to an RDS Custom instance. If you change the key pair that you created for your RDS Custom instance and you want the change to immediately take effect on the RDS Custom instance, you can call this operation to synchronize the new key pair to the RDS Custom instance. For example, you delete a key pair that has the same name as another key pair and recreate the key pair.
       *
       * @param request SyncRCKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRCKeyPairResponse
       */
      Models::SyncRCKeyPairResponse syncRCKeyPairWithOptions(const Models::SyncRCKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes a custom key pair to an RDS Custom instance. If you change the key pair that you created for your RDS Custom instance and you want the change to immediately take effect on the RDS Custom instance, you can call this operation to synchronize the new key pair to the RDS Custom instance. For example, you delete a key pair that has the same name as another key pair and recreate the key pair.
       *
       * @param request SyncRCKeyPairRequest
       * @return SyncRCKeyPairResponse
       */
      Models::SyncRCKeyPairResponse syncRCKeyPair(const Models::SyncRCKeyPairRequest &request);

      /**
       * @summary Adds security group rules to an RDS Custom for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request SyncRCSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncRCSecurityGroupResponse
       */
      Models::SyncRCSecurityGroupResponse syncRCSecurityGroupWithOptions(const Models::SyncRCSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds security group rules to an RDS Custom for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request SyncRCSecurityGroupRequest
       * @return SyncRCSecurityGroupResponse
       */
      Models::SyncRCSecurityGroupResponse syncRCSecurityGroup(const Models::SyncRCSecurityGroupRequest &request);

      /**
       * @summary Creates and adds tags to one or more instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Create tags for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96149.html)
       * *   [Create tags for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96777.html)
       * *   [Create tags for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95726.html)
       * *   [Create tags for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97152.html)
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to one or more instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Create tags for an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96149.html)
       * *   [Create tags for an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96777.html)
       * *   [Create tags for an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/95726.html)
       * *   [Create tags for an ApsaraDB RDS for MariaDB instance](https://help.aliyun.com/document_detail/97152.html)
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Terminates an ongoing migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request TerminateMigrateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateMigrateTaskResponse
       */
      Models::TerminateMigrateTaskResponse terminateMigrateTaskWithOptions(const Models::TerminateMigrateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an ongoing migration task of an ApsaraDB RDS for SQL Server instance.
       *
       * @description ### [](#)Supported database engines
       * *   SQL Server
       *
       * @param request TerminateMigrateTaskRequest
       * @return TerminateMigrateTaskResponse
       */
      Models::TerminateMigrateTaskResponse terminateMigrateTask(const Models::TerminateMigrateTaskRequest &request);

      /**
       * @summary Changes the billing method of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Fees are generated if the call is successful. Before you call this operation, you must read the following documentation.
       * *   [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html) or [Change the billing method of an ApsaraDB RDS for MySQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/161875.html)
       * *   [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html) or [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162756.html)
       * *   [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html) or [Change the billing method of an ApsaraDB RDS for SQL Server instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162755.html)
       * *   [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html) or [Change the billing method of an ApsaraDB RDS for MariaDB instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/169252.html)
       *
       * @param request TransformDBInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformDBInstancePayTypeResponse
       */
      Models::TransformDBInstancePayTypeResponse transformDBInstancePayTypeWithOptions(const Models::TransformDBInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### References
       * > Fees are generated if the call is successful. Before you call this operation, you must read the following documentation.
       * *   [Change the billing method of an ApsaraDB RDS for MySQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96048.html) or [Change the billing method of an ApsaraDB RDS for MySQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/161875.html)
       * *   [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/96743.html) or [Change the billing method of an ApsaraDB RDS for PostgreSQL instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162756.html)
       * *   [Change the billing method of an ApsaraDB RDS for SQL Server instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/95631.html) or [Change the billing method of an ApsaraDB RDS for SQL Server instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/162755.html)
       * *   [Change the billing method of an ApsaraDB RDS for MariaDB instance from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/97120.html) or [Change the billing method of an ApsaraDB RDS for MariaDB instance from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/169252.html)
       *
       * @param request TransformDBInstancePayTypeRequest
       * @return TransformDBInstancePayTypeResponse
       */
      Models::TransformDBInstancePayTypeResponse transformDBInstancePayType(const Models::TransformDBInstancePayTypeRequest &request);

      /**
       * @summary Unbinds a elastic IP address (EIP) from an RDS Custom for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request UnassociateEipAddressWithRCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateEipAddressWithRCInstanceResponse
       */
      Models::UnassociateEipAddressWithRCInstanceResponse unassociateEipAddressWithRCInstanceWithOptions(const Models::UnassociateEipAddressWithRCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a elastic IP address (EIP) from an RDS Custom for SQL Server instance.
       *
       * @description ### [](#)Supported database engine
       * SQL Server
       * ### [](#)References
       * [Introduction to ApsaraDB RDS Custom](https://help.aliyun.com/document_detail/2864363.html)
       *
       * @param request UnassociateEipAddressWithRCInstanceRequest
       * @return UnassociateEipAddressWithRCInstanceResponse
       */
      Models::UnassociateEipAddressWithRCInstanceResponse unassociateEipAddressWithRCInstance(const Models::UnassociateEipAddressWithRCInstanceRequest &request);

      /**
       * @summary Unlocks a database account of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
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
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Lock an account of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/147649.html)
       *
       * @param request UnlockAccountRequest
       * @return UnlockAccountResponse
       */
      Models::UnlockAccountResponse unlockAccount(const Models::UnlockAccountRequest &request);

      /**
       * @summary Removes tags from one or more instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Usage notes
       * *   You can remove up to 20 tags at a time.
       * *   If a tag is removed from an instance and is not added to other instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from one or more instances.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * *   MariaDB
       * ### [](#)Usage notes
       * *   You can remove up to 20 tags at a time.
       * *   If a tag is removed from an instance and is not added to other instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the version of an extension on a database.
       *
       * @description ### Supported database engines
       * RDS PostgreSQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request UpdatePostgresExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostgresExtensionsResponse
       */
      Models::UpdatePostgresExtensionsResponse updatePostgresExtensionsWithOptions(const Models::UpdatePostgresExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version of an extension on a database.
       *
       * @description ### Supported database engines
       * RDS PostgreSQL
       * ### References
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Manage extensions](https://help.aliyun.com/document_detail/2402409.html)
       *
       * @param request UpdatePostgresExtensionsRequest
       * @return UpdatePostgresExtensionsResponse
       */
      Models::UpdatePostgresExtensionsResponse updatePostgresExtensions(const Models::UpdatePostgresExtensionsRequest &request);

      /**
       * @summary Modifies the description and retention period of a full backup file.
       *
       * @description ### Supported database engines
       * RDS MySQL
       * ### References
       * A full backup file contains the data of a self-managed MySQL database. You can restore the data of a self-managed MySQL database from a full backup file to an ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 or MySQL 8.0 instance to an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/251779.html).
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       *
       * @param request UpdateUserBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserBackupFileResponse
       */
      Models::UpdateUserBackupFileResponse updateUserBackupFileWithOptions(const Models::UpdateUserBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description and retention period of a full backup file.
       *
       * @description ### Supported database engines
       * RDS MySQL
       * ### References
       * A full backup file contains the data of a self-managed MySQL database. You can restore the data of a self-managed MySQL database from a full backup file to an ApsaraDB RDS for MySQL instance. For more information, see [Migrate the data of a self-managed MySQL 5.7 or MySQL 8.0 instance to an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/251779.html).
       * > : Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       *
       * @param request UpdateUserBackupFileRequest
       * @return UpdateUserBackupFileResponse
       */
      Models::UpdateUserBackupFileResponse updateUserBackupFile(const Models::UpdateUserBackupFileRequest &request);

      /**
       * @summary Upgrades the major engine version of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Supported database engine
       * MySQL
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Upgrade the major engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96058.html)
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(const Models::UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the major engine version of an ApsaraDB RDS for MySQL instance.
       *
       * @description ### Supported database engine
       * MySQL
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * [Upgrade the major engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96058.html)
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(const Models::UpgradeDBInstanceEngineVersionRequest &request);

      /**
       * @summary Updates the minor engine version of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Update the minor engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * *   [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       * *   [Update the minor engine version of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/213582.html)
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(const Models::UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor engine version of an ApsaraDB RDS instance.
       *
       * @description ### Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * *   SQL Server
       * ### References
       * > Before you call this operation, read the following documentation and make sure that you fully understand the prerequisites and impacts of this operation.
       * *   [Update the minor engine version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96059.html)
       * *   [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html)
       * *   [Update the minor engine version of an ApsaraDB RDS for SQL Server instance](https://help.aliyun.com/document_detail/213582.html)
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(const Models::UpgradeDBInstanceKernelVersionRequest &request);

      /**
       * @summary Initiates a task to upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * Fees are generated if the call is successful. Before you call this operation, read the following documentation and make sure that you fully understand the billing rules, prerequisites, and impacts of this operation.
       * [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       *
       * @param request UpgradeDBInstanceMajorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceMajorVersionResponse
       */
      Models::UpgradeDBInstanceMajorVersionResponse upgradeDBInstanceMajorVersionWithOptions(const Models::UpgradeDBInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a task to upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * Fees are generated if the call is successful. Before you call this operation, read the following documentation and make sure that you fully understand the billing rules, prerequisites, and impacts of this operation.
       * [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       *
       * @param request UpgradeDBInstanceMajorVersionRequest
       * @return UpgradeDBInstanceMajorVersionResponse
       */
      Models::UpgradeDBInstanceMajorVersionResponse upgradeDBInstanceMajorVersion(const Models::UpgradeDBInstanceMajorVersionRequest &request);

      /**
       * @summary Performs a precheck before the upgrade of the major engine version of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       *
       * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceMajorVersionPrecheckResponse
       */
      Models::UpgradeDBInstanceMajorVersionPrecheckResponse upgradeDBInstanceMajorVersionPrecheckWithOptions(const Models::UpgradeDBInstanceMajorVersionPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck before the upgrade of the major engine version of an ApsaraDB RDS for PostgreSQL instance.
       *
       * @description ### Supported database engine
       * PostgreSQL
       * ### References
       * > Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * [Upgrade the major engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/203309.html)
       *
       * @param request UpgradeDBInstanceMajorVersionPrecheckRequest
       * @return UpgradeDBInstanceMajorVersionPrecheckResponse
       */
      Models::UpgradeDBInstanceMajorVersionPrecheckResponse upgradeDBInstanceMajorVersionPrecheck(const Models::UpgradeDBInstanceMajorVersionPrecheckRequest &request);

      /**
       * @summary Upgrades the database proxy version of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Upgrade the database proxy version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/197465.html)
       * *   [Upgrade the database proxy version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418469.html)
       *
       * @param request UpgradeDBProxyInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBProxyInstanceKernelVersionResponse
       */
      Models::UpgradeDBProxyInstanceKernelVersionResponse upgradeDBProxyInstanceKernelVersionWithOptions(const Models::UpgradeDBProxyInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the database proxy version of an instance.
       *
       * @description ### [](#)Supported database engines
       * *   MySQL
       * *   PostgreSQL
       * ### [](#)References
       * >  Before you call this operation, carefully read the following documentation. Make sure that you fully understand the prerequisites and impacts for calling this operation.
       * *   [Upgrade the database proxy version of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/197465.html)
       * *   [Upgrade the database proxy version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/418469.html)
       *
       * @param request UpgradeDBProxyInstanceKernelVersionRequest
       * @return UpgradeDBProxyInstanceKernelVersionResponse
       */
      Models::UpgradeDBProxyInstanceKernelVersionResponse upgradeDBProxyInstanceKernelVersion(const Models::UpgradeDBProxyInstanceKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
