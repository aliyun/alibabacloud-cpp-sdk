// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EDSAIC20230930_HPP_
#define ALIBABACLOUD_EDSAIC20230930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EdsAic20230930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EdsAic20230930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Activates an edge agent device.
       *
       * @param request ActivateEdgeMobileAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateEdgeMobileAgentResponse
       */
      Models::ActivateEdgeMobileAgentResponse activateEdgeMobileAgentWithOptions(const Models::ActivateEdgeMobileAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates an edge agent device.
       *
       * @param request ActivateEdgeMobileAgentRequest
       * @return ActivateEdgeMobileAgentResponse
       */
      Models::ActivateEdgeMobileAgentResponse activateEdgeMobileAgent(const Models::ActivateEdgeMobileAgentRequest &request);

      /**
       * @summary Attaches an ADB key pair to one or more cloud phone instances.
       *
       * @description - The ADB key pair takes effect only when the instance is in the Running state.
       * - After you attach the key pair, copy the private key of the key pair to the local folder where the key pair is stored (for macOS or Linux operating systems, the folder is ~/.android. For the Windows operating system, the folder is C:\\Users\\Username\\.android.), and invoke the adb kill-server command to restart the ADB process. This ensures normal ADB connections. Otherwise, the ADB connection authentication may be failed.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an ADB key pair to one or more cloud phone instances.
       *
       * @description - The ADB key pair takes effect only when the instance is in the Running state.
       * - After you attach the key pair, copy the private key of the key pair to the local folder where the key pair is stored (for macOS or Linux operating systems, the folder is ~/.android. For the Windows operating system, the folder is C:\\Users\\Username\\.android.), and invoke the adb kill-server command to restart the ADB process. This ensures normal ADB connections. Otherwise, the ADB connection authentication may be failed.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Assigns a user to or unassigns a user from a cloud phone instance. Currently, each cloud phone instance supports only one assigned user.
       *
       * @description Instance statuses that support user assignment: Available, Shutting down, Stopped, Starting, Backing up, Restoring, Backup failed, and Restoration failed.
       * Instance statuses that support user unassignment: Available, Shutting down, Stopped, Starting, Backing up, Restoring, Backup failed, Restoration failed, Expired, Overdue payment, and Deleted.
       *
       * @param request AuthorizeAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeAndroidInstanceResponse
       */
      Models::AuthorizeAndroidInstanceResponse authorizeAndroidInstanceWithOptions(const Models::AuthorizeAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a user to or unassigns a user from a cloud phone instance. Currently, each cloud phone instance supports only one assigned user.
       *
       * @description Instance statuses that support user assignment: Available, Shutting down, Stopped, Starting, Backing up, Restoring, Backup failed, and Restoration failed.
       * Instance statuses that support user unassignment: Available, Shutting down, Stopped, Starting, Backing up, Restoring, Backup failed, Restoration failed, Expired, Overdue payment, and Deleted.
       *
       * @param request AuthorizeAndroidInstanceRequest
       * @return AuthorizeAndroidInstanceResponse
       */
      Models::AuthorizeAndroidInstanceResponse authorizeAndroidInstance(const Models::AuthorizeAndroidInstanceRequest &request);

      /**
       * @summary Creates a full backup of a cloud phone instance, including installed applications and properties.
       *
       * @description 1. To ensure a high success rate, back up data after the instance is shut down. Operating the cloud phone during the backup process may cause the backup to fail.
       * 2. Ensure that the backup file can be restored properly. After the restoration is complete, check and verify that all data is intact and functions are working properly before deleting the original backup file and resetting the source instance. Otherwise, data loss may occur.
       * 3. Backup and restoration across different image versions are not supported. Backup and restoration between custom images and public images are not supported. Backup and restoration across different architectures (cpm.gx7.10xlarge and cpm.gx8.16xlarge) are not supported.
       *
       * @param request BackupAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupAndroidInstanceResponse
       */
      Models::BackupAndroidInstanceResponse backupAndroidInstanceWithOptions(const Models::BackupAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a full backup of a cloud phone instance, including installed applications and properties.
       *
       * @description 1. To ensure a high success rate, back up data after the instance is shut down. Operating the cloud phone during the backup process may cause the backup to fail.
       * 2. Ensure that the backup file can be restored properly. After the restoration is complete, check and verify that all data is intact and functions are working properly before deleting the original backup file and resetting the source instance. Otherwise, data loss may occur.
       * 3. Backup and restoration across different image versions are not supported. Backup and restoration between custom images and public images are not supported. Backup and restoration across different architectures (cpm.gx7.10xlarge and cpm.gx8.16xlarge) are not supported.
       *
       * @param request BackupAndroidInstanceRequest
       * @return BackupAndroidInstanceResponse
       */
      Models::BackupAndroidInstanceResponse backupAndroidInstance(const Models::BackupAndroidInstanceRequest &request);

      /**
       * @summary Backs up specified applications on cloud phone instances, including the applications and application caches.
       *
       * @description 1. To ensure a high success rate, back up data after the cloud phone is shut down. Operating the cloud phone during the backup process may cause the backup to fail.
       * 2. Make sure that your backup files can be restored properly. After the restoration is complete, check and verify that all your data is intact and all features work as expected before you delete the original backup files or reset the source instance. Otherwise, your data may be lost.
       * 3. Backup and restoration are not supported across different image versions, between custom images and public images, or across different architectures (such as cpm.gx7.10xlarge and cpm.gx8.16xlarge).
       *
       * @param request BackupAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupAppResponse
       */
      Models::BackupAppResponse backupAppWithOptions(const Models::BackupAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backs up specified applications on cloud phone instances, including the applications and application caches.
       *
       * @description 1. To ensure a high success rate, back up data after the cloud phone is shut down. Operating the cloud phone during the backup process may cause the backup to fail.
       * 2. Make sure that your backup files can be restored properly. After the restoration is complete, check and verify that all your data is intact and all features work as expected before you delete the original backup files or reset the source instance. Otherwise, your data may be lost.
       * 3. Backup and restoration are not supported across different image versions, between custom images and public images, or across different architectures (such as cpm.gx7.10xlarge and cpm.gx8.16xlarge).
       *
       * @param request BackupAppRequest
       * @return BackupAppResponse
       */
      Models::BackupAppResponse backupApp(const Models::BackupAppRequest &request);

      /**
       * @summary Generates a backup file and uploads it to remote storage. Scenarios: You can perform regular backups for data security, or back up files from a single instance and recover them to multiple instances to achieve an effect similar to replication and migration.
       *
       * @description Currently, backup files generated by Cloud Phone can only be saved to Object Storage Service (OSS).
       *
       * @param request BackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupFileResponse
       */
      Models::BackupFileResponse backupFileWithOptions(const Models::BackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a backup file and uploads it to remote storage. Scenarios: You can perform regular backups for data security, or back up files from a single instance and recover them to multiple instances to achieve an effect similar to replication and migration.
       *
       * @description Currently, backup files generated by Cloud Phone can only be saved to Object Storage Service (OSS).
       *
       * @param request BackupFileRequest
       * @return BackupFileResponse
       */
      Models::BackupFileResponse backupFile(const Models::BackupFileRequest &request);

      /**
       * @summary Retrieves connection credentials in batches. This operation asynchronously generates tickets. In most cases, you can obtain the ticket directly from the response on the first call. In some cases, you must use the TaskId from the response to call this operation again and poll for the generation result.
       *
       * @description <props="china">
       * The behavior of this operation varies based on the Cloud Phone edition and the instance streaming mode:
       * - Cloud Phone Instance Edition or Cloud Phone Matrix Edition (preemptive mode): You can obtain a `Ticket` only by using the same `EnduserId`.
       * - Cloud Phone Matrix Edition (collaborative mode): You can pass different `EnduserId` values to obtain `Ticket` values and stream for different users (up to 5) at the same time. You can pass only one `EnduserId` at a time.
       * > You can define the instance streaming mode by using the `StreamMode` parameter of the [ModifyCloudPhoneNode](https://help.aliyun.com/document_detail/2878539.html) operation.
       *
       * @param request BatchGetAcpConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetAcpConnectionTicketResponse
       */
      Models::BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicketWithOptions(const Models::BatchGetAcpConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves connection credentials in batches. This operation asynchronously generates tickets. In most cases, you can obtain the ticket directly from the response on the first call. In some cases, you must use the TaskId from the response to call this operation again and poll for the generation result.
       *
       * @description <props="china">
       * The behavior of this operation varies based on the Cloud Phone edition and the instance streaming mode:
       * - Cloud Phone Instance Edition or Cloud Phone Matrix Edition (preemptive mode): You can obtain a `Ticket` only by using the same `EnduserId`.
       * - Cloud Phone Matrix Edition (collaborative mode): You can pass different `EnduserId` values to obtain `Ticket` values and stream for different users (up to 5) at the same time. You can pass only one `EnduserId` at a time.
       * > You can define the instance streaming mode by using the `StreamMode` parameter of the [ModifyCloudPhoneNode](https://help.aliyun.com/document_detail/2878539.html) operation.
       *
       * @param request BatchGetAcpConnectionTicketRequest
       * @return BatchGetAcpConnectionTicketResponse
       */
      Models::BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicket(const Models::BatchGetAcpConnectionTicketRequest &request);

      /**
       * @summary Cancels running agent tasks on Mobile nodes.
       *
       * @param request CancelAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAgentTaskResponse
       */
      Models::CancelAgentTaskResponse cancelAgentTaskWithOptions(const Models::CancelAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels running agent tasks on Mobile nodes.
       *
       * @param request CancelAgentTaskRequest
       * @return CancelAgentTaskResponse
       */
      Models::CancelAgentTaskResponse cancelAgentTask(const Models::CancelAgentTaskRequest &request);

      /**
       * @summary Modifies the configuration of a cloud phone matrix. Currently, only the instance type and the number of cloud phone instances (the number of instances in the cloud phone matrix) can be modified.
       *
       * @param request ChangeCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCloudPhoneNodeResponse
       */
      Models::ChangeCloudPhoneNodeResponse changeCloudPhoneNodeWithOptions(const Models::ChangeCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cloud phone matrix. Currently, only the instance type and the number of cloud phone instances (the number of instances in the cloud phone matrix) can be modified.
       *
       * @param request ChangeCloudPhoneNodeRequest
       * @return ChangeCloudPhoneNodeResponse
       */
      Models::ChangeCloudPhoneNodeResponse changeCloudPhoneNode(const Models::ChangeCloudPhoneNodeRequest &request);

      /**
       * @summary Checks the inventory status of cloud phone resources. Before creating an instance, you can call this operation to check whether the inventory in the target region is sufficient.
       *
       * @param request CheckResourceStockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourceStockResponse
       */
      Models::CheckResourceStockResponse checkResourceStockWithOptions(const Models::CheckResourceStockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the inventory status of cloud phone resources. Before creating an instance, you can call this operation to check whether the inventory in the target region is sufficient.
       *
       * @param request CheckResourceStockRequest
       * @return CheckResourceStockResponse
       */
      Models::CheckResourceStockResponse checkResourceStock(const Models::CheckResourceStockRequest &request);

      /**
       * @summary Creates an AI cloud phone.
       *
       * @param request CreateAICloudPhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAICloudPhoneResponse
       */
      Models::CreateAICloudPhoneResponse createAICloudPhoneWithOptions(const Models::CreateAICloudPhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI cloud phone.
       *
       * @param request CreateAICloudPhoneRequest
       * @return CreateAICloudPhoneResponse
       */
      Models::CreateAICloudPhoneResponse createAICloudPhone(const Models::CreateAICloudPhoneRequest &request);

      /**
       * @summary Creates a custom skill.
       *
       * @param request CreateAgentSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSkillResponse
       */
      Models::CreateAgentSkillResponse createAgentSkillWithOptions(const Models::CreateAgentSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom skill.
       *
       * @param request CreateAgentSkillRequest
       * @return CreateAgentSkillResponse
       */
      Models::CreateAgentSkillResponse createAgentSkill(const Models::CreateAgentSkillRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription cloud phone instance group. An instance group can manage multiple instances. Instances with the same functional roles can be grouped into the same instance group for unified management.
       *
       * @description <props="china">Before creating a cloud phone instance group, you must complete real-name verification. For more information, see [Individual real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * When creating a cloud phone instance group, note that resource billing is involved. We recommend that you understand the [Billable methods](https://help.aliyun.com/document_detail/2807121.html) of cloud phone instance groups in advance.
       *   - If the billing method of the instance group is subscription (PrePaid), the default value of AutoPay (automatic payment) is false. After you invoke the API operation, you must go to <props="china">[Expenses and Costs](https://usercenter2.aliyun.com/order/list)<props="intl">[Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually pay the order.
       *  - If you want to enable automatic payment, change the Settings of AutoPay to true.
       *
       * @param tmpReq CreateAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndroidInstanceGroupResponse
       */
      Models::CreateAndroidInstanceGroupResponse createAndroidInstanceGroupWithOptions(const Models::CreateAndroidInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription cloud phone instance group. An instance group can manage multiple instances. Instances with the same functional roles can be grouped into the same instance group for unified management.
       *
       * @description <props="china">Before creating a cloud phone instance group, you must complete real-name verification. For more information, see [Individual real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * When creating a cloud phone instance group, note that resource billing is involved. We recommend that you understand the [Billable methods](https://help.aliyun.com/document_detail/2807121.html) of cloud phone instance groups in advance.
       *   - If the billing method of the instance group is subscription (PrePaid), the default value of AutoPay (automatic payment) is false. After you invoke the API operation, you must go to <props="china">[Expenses and Costs](https://usercenter2.aliyun.com/order/list)<props="intl">[Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually pay the order.
       *  - If you want to enable automatic payment, change the Settings of AutoPay to true.
       *
       * @param request CreateAndroidInstanceGroupRequest
       * @return CreateAndroidInstanceGroupResponse
       */
      Models::CreateAndroidInstanceGroupResponse createAndroidInstanceGroup(const Models::CreateAndroidInstanceGroupRequest &request);

      /**
       * @summary Creates an Android application. Before you can install an application, you must use this API operation to create it. The application is not downloaded when it is created. It is downloaded only during installation. Ensure that the cloud phone can access the download URL.
       *
       * @description When you create an application, you can pass the application information in one of the following two ways:
       * - Method 1: Pass an application from the WUYING Workspace app center.
       *   - Supported methods:
       *     - Method 1: Pass `FileName` and `FilePath`. Both parameters are required.
       *     - Method 2: Pass `OssAppUrl`.
       *   - Rule: If you pass an application from the WUYING Workspace app center, you must use at least one of the two methods. If you use both, Method 1 takes precedence.
       *   - Prerequisite: Log on to the [Elastic Desktop Service Enterprise console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center. You can then obtain the required request parameters for this operation: `FileName` and `FilePath`, or `OssAppUrl`.
       * - Method 2: Pass a custom application.
       *   - Supported method: Pass `CustomAppInfo`.
       *   - Rule: If you pass `CustomAppInfo`, all six fields in this object parameter are required.
       * > If you use both Method 1 and Method 2, the information passed in Method 2 takes precedence.
       *
       * @param tmpReq CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Android application. Before you can install an application, you must use this API operation to create it. The application is not downloaded when it is created. It is downloaded only during installation. Ensure that the cloud phone can access the download URL.
       *
       * @description When you create an application, you can pass the application information in one of the following two ways:
       * - Method 1: Pass an application from the WUYING Workspace app center.
       *   - Supported methods:
       *     - Method 1: Pass `FileName` and `FilePath`. Both parameters are required.
       *     - Method 2: Pass `OssAppUrl`.
       *   - Rule: If you pass an application from the WUYING Workspace app center, you must use at least one of the two methods. If you use both, Method 1 takes precedence.
       *   - Prerequisite: Log on to the [Elastic Desktop Service Enterprise console](https://eds.console.aliyun.com/osshelp). Follow the on-screen instructions to upload your application file to the WUYING Workspace app center. You can then obtain the required request parameters for this operation: `FileName` and `FilePath`, or `OssAppUrl`.
       * - Method 2: Pass a custom application.
       *   - Supported method: Pass `CustomAppInfo`.
       *   - Rule: If you pass `CustomAppInfo`, all six fields in this object parameter are required.
       * > If you use both Method 1 and Method 2, the information passed in Method 2 takes precedence.
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary Creates a cloud phone matrix.
       * In the Wuying Cloud Phone system, a matrix (Cloud Phone Server) is a logical resource management snap-in that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances that share the underlying computing, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server on which you can create cloud phone instances. The number of cloud phone instances that you can create varies based on the configuration.
       *
       * @param tmpReq CreateCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudPhoneNodeResponse
       */
      Models::CreateCloudPhoneNodeResponse createCloudPhoneNodeWithOptions(const Models::CreateCloudPhoneNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud phone matrix.
       * In the Wuying Cloud Phone system, a matrix (Cloud Phone Server) is a logical resource management snap-in that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances that share the underlying computing, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server on which you can create cloud phone instances. The number of cloud phone instances that you can create varies based on the configuration.
       *
       * @param request CreateCloudPhoneNodeRequest
       * @return CreateCloudPhoneNodeResponse
       */
      Models::CreateCloudPhoneNodeResponse createCloudPhoneNode(const Models::CreateCloudPhoneNodeRequest &request);

      /**
       * @summary Purchases a credit package.
       *
       * @description This API operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of WUYING Cloud Phone.
       *
       * @param request CreateCreditPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCreditPackageResponse
       */
      Models::CreateCreditPackageResponse createCreditPackageWithOptions(const Models::CreateCreditPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a credit package.
       *
       * @description This API operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of WUYING Cloud Phone.
       *
       * @param request CreateCreditPackageRequest
       * @return CreateCreditPackageResponse
       */
      Models::CreateCreditPackageResponse createCreditPackage(const Models::CreateCreditPackageRequest &request);

      /**
       * @summary Creates a custom image from a cloud phone instance. You can use the custom image to create more cloud phones with the same configuration.
       *
       * @param request CreateCustomImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImageWithOptions(const Models::CreateCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image from a cloud phone instance. You can use the custom image to create more cloud phones with the same configuration.
       *
       * @param request CreateCustomImageRequest
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImage(const Models::CreateCustomImageRequest &request);

      /**
       * @summary Purchases an edge agent package.
       *
       * @description This operation involves billing. Make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of WUYING Cloud Phone before you call this operation.
       *
       * @param request CreateEdgeMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeMobileAgentPackageResponse
       */
      Models::CreateEdgeMobileAgentPackageResponse createEdgeMobileAgentPackageWithOptions(const Models::CreateEdgeMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases an edge agent package.
       *
       * @description This operation involves billing. Make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of WUYING Cloud Phone before you call this operation.
       *
       * @param request CreateEdgeMobileAgentPackageRequest
       * @return CreateEdgeMobileAgentPackageResponse
       */
      Models::CreateEdgeMobileAgentPackageResponse createEdgeMobileAgentPackage(const Models::CreateEdgeMobileAgentPackageRequest &request);

      /**
       * @summary Creates an ADB key pair. You can use ADB to connect to a cloud phone for device management, application management, and file transfers. ADB operations require elevated permissions. Cloud phones lack physical interfaces, so you cannot trigger a device-side authorization dialog box over USB. Therefore, when ADB connects to a cloud phone over a network, you must configure a key pair in advance to establish trust between the device and the client and ensure secure operations. You can invoke the CreateKeyPair operation to create an ADB key pair. The system stores the public key and returns the private key in the PKCS#8 format with PEM encoding that complies with ADB connection specifications. You must securely store the private key.
       *
       * @description In addition to calling CreateKeyPair, you can use the ADB tool to create a key pair and upload it to the Wuying Cloud Phone console by calling [ImportKeyPair](https://help.aliyun.com/document_detail/2807340.html). The uploaded key pair works the same way as a system-generated key pair. Each tenant can create a maximum of 500 key pairs.
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ADB key pair. You can use ADB to connect to a cloud phone for device management, application management, and file transfers. ADB operations require elevated permissions. Cloud phones lack physical interfaces, so you cannot trigger a device-side authorization dialog box over USB. Therefore, when ADB connects to a cloud phone over a network, you must configure a key pair in advance to establish trust between the device and the client and ensure secure operations. You can invoke the CreateKeyPair operation to create an ADB key pair. The system stores the public key and returns the private key in the PKCS#8 format with PEM encoding that complies with ADB connection specifications. You must securely store the private key.
       *
       * @description In addition to calling CreateKeyPair, you can use the ADB tool to create a key pair and upload it to the Wuying Cloud Phone console by calling [ImportKeyPair](https://help.aliyun.com/document_detail/2807340.html). The uploaded key pair works the same way as a system-generated key pair. Each tenant can create a maximum of 500 key pairs.
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Places an order for a resource plan.
       *
       * @description This API operation involves billing. Make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of WUYING Cloud Phone before you call this operation.
       *
       * @param request CreateMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMobileAgentPackageResponse
       */
      Models::CreateMobileAgentPackageResponse createMobileAgentPackageWithOptions(const Models::CreateMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Places an order for a resource plan.
       *
       * @description This API operation involves billing. Make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of WUYING Cloud Phone before you call this operation.
       *
       * @param request CreateMobileAgentPackageRequest
       * @return CreateMobileAgentPackageResponse
       */
      Models::CreateMobileAgentPackageResponse createMobileAgentPackage(const Models::CreateMobileAgentPackageRequest &request);

      /**
       * @summary Creates an agent task.
       *
       * @param request CreateMobileAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMobileAgentTaskResponse
       */
      Models::CreateMobileAgentTaskResponse createMobileAgentTaskWithOptions(const Models::CreateMobileAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agent task.
       *
       * @param request CreateMobileAgentTaskRequest
       * @return CreateMobileAgentTaskResponse
       */
      Models::CreateMobileAgentTaskResponse createMobileAgentTask(const Models::CreateMobileAgentTaskRequest &request);

      /**
       * @summary Creates a policy. Policies are used to configure unified settings for cloud phones, such as network redirection policies, watermarks, resolution, and clipboard settings.
       *
       * @param tmpReq CreatePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroupWithOptions(const Models::CreatePolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy. Policies are used to configure unified settings for cloud phones, such as network redirection policies, watermarks, resolution, and clipboard settings.
       *
       * @param request CreatePolicyGroupRequest
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroup(const Models::CreatePolicyGroupRequest &request);

      /**
       * @summary Creates a scheduled task for an agent.
       *
       * @param tmpReq CreateScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task for an agent.
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary This asynchronous API operation generates a screenshot of a cloud phone.
       *
       * @description This operation creates a screenshot of a cloud phone and uploads it to the default Object Storage Service (OSS) bucket. The operation returns a task ID. You can then call the DescribeTasks operation to retrieve the download link for the screenshot.
       *
       * @param request CreateScreenshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScreenshotResponse
       */
      Models::CreateScreenshotResponse createScreenshotWithOptions(const Models::CreateScreenshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This asynchronous API operation generates a screenshot of a cloud phone.
       *
       * @description This operation creates a screenshot of a cloud phone and uploads it to the default Object Storage Service (OSS) bucket. The operation returns a task ID. You can then call the DescribeTasks operation to retrieve the download link for the screenshot.
       *
       * @param request CreateScreenshotRequest
       * @return CreateScreenshotResponse
       */
      Models::CreateScreenshotResponse createScreenshot(const Models::CreateScreenshotRequest &request);

      /**
       * @summary Creates a system property template. The key-value pairs defined in the template are sent to cloud phones and set as properties in their Android systems using the setprop command. APKs or related programs can then read these property values.
       *
       * @param tmpReq CreateSystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSystemPropertyTemplateResponse
       */
      Models::CreateSystemPropertyTemplateResponse createSystemPropertyTemplateWithOptions(const Models::CreateSystemPropertyTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a system property template. The key-value pairs defined in the template are sent to cloud phones and set as properties in their Android systems using the setprop command. APKs or related programs can then read these property values.
       *
       * @param request CreateSystemPropertyTemplateRequest
       * @return CreateSystemPropertyTemplateResponse
       */
      Models::CreateSystemPropertyTemplateResponse createSystemPropertyTemplate(const Models::CreateSystemPropertyTemplateRequest &request);

      /**
       * @summary Deletes custom skills.
       *
       * @param request DeleteAgentSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSkillResponse
       */
      Models::DeleteAgentSkillResponse deleteAgentSkillWithOptions(const Models::DeleteAgentSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom skills.
       *
       * @param request DeleteAgentSkillRequest
       * @return DeleteAgentSkillResponse
       */
      Models::DeleteAgentSkillResponse deleteAgentSkill(const Models::DeleteAgentSkillRequest &request);

      /**
       * @summary Deletes a cloud phone instance group. All instances in the instance group are also deleted and cannot be recovered. Proceed with caution.
       *
       * @description Pay-as-you-go instance groups can be deleted directly.
       * Subscription instance groups can be deleted only after they expire. Only subscription instance groups in the Expired state can be deleted.
       *
       * @param request DeleteAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAndroidInstanceGroupResponse
       */
      Models::DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroupWithOptions(const Models::DeleteAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud phone instance group. All instances in the instance group are also deleted and cannot be recovered. Proceed with caution.
       *
       * @description Pay-as-you-go instance groups can be deleted directly.
       * Subscription instance groups can be deleted only after they expire. Only subscription instance groups in the Expired state can be deleted.
       *
       * @param request DeleteAndroidInstanceGroupRequest
       * @return DeleteAndroidInstanceGroupResponse
       */
      Models::DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroup(const Models::DeleteAndroidInstanceGroupRequest &request);

      /**
       * @summary Deletes an application. Ensure that the application is not installed on any instance group before deletion.
       *
       * @param request DeleteAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppsResponse
       */
      Models::DeleteAppsResponse deleteAppsWithOptions(const Models::DeleteAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application. Ensure that the application is not installed on any instance group before deletion.
       *
       * @param request DeleteAppsRequest
       * @return DeleteAppsResponse
       */
      Models::DeleteAppsResponse deleteApps(const Models::DeleteAppsRequest &request);

      /**
       * @summary Deletes backup files in batches.
       *
       * @param request DeleteBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFileWithOptions(const Models::DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes backup files in batches.
       *
       * @param request DeleteBackupFileRequest
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFile(const Models::DeleteBackupFileRequest &request);

      /**
       * @summary Deletes a cloud phone matrix.
       *
       * @description Before you proceed, make sure that the cloud phone matrix that you want to delete expired.
       *
       * @param request DeleteCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudPhoneNodesResponse
       */
      Models::DeleteCloudPhoneNodesResponse deleteCloudPhoneNodesWithOptions(const Models::DeleteCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud phone matrix.
       *
       * @description Before you proceed, make sure that the cloud phone matrix that you want to delete expired.
       *
       * @param request DeleteCloudPhoneNodesRequest
       * @return DeleteCloudPhoneNodesResponse
       */
      Models::DeleteCloudPhoneNodesResponse deleteCloudPhoneNodes(const Models::DeleteCloudPhoneNodesRequest &request);

      /**
       * @summary Deletes a custom image.
       *
       * @description You cannot delete an image that is currently in use by an instance group.
       *
       * @param tmpReq DeleteImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImagesResponse
       */
      Models::DeleteImagesResponse deleteImagesWithOptions(const Models::DeleteImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom image.
       *
       * @description You cannot delete an image that is currently in use by an instance group.
       *
       * @param request DeleteImagesRequest
       * @return DeleteImagesResponse
       */
      Models::DeleteImagesResponse deleteImages(const Models::DeleteImagesRequest &request);

      /**
       * @summary Deletes a cloud phone key pair.
       *
       * @description - If an ADB key pair is already attached to a cloud phone instance, the key pair cannot be deleted.
       * - After an ADB key pair is deleted, it can no longer be queried by calling DescribeKeyPairs.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud phone key pair.
       *
       * @description - If an ADB key pair is already attached to a cloud phone instance, the key pair cannot be deleted.
       * - After an ADB key pair is deleted, it can no longer be queried by calling DescribeKeyPairs.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a node package.
       *
       * @param request DeleteMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMobileAgentPackageResponse
       */
      Models::DeleteMobileAgentPackageResponse deleteMobileAgentPackageWithOptions(const Models::DeleteMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node package.
       *
       * @param request DeleteMobileAgentPackageRequest
       * @return DeleteMobileAgentPackageResponse
       */
      Models::DeleteMobileAgentPackageResponse deleteMobileAgentPackage(const Models::DeleteMobileAgentPackageRequest &request);

      /**
       * @summary Deletes one or more policies.
       *
       * @description You cannot delete a policy if it is associated with an undeleted instance group.
       *
       * @param request DeletePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyGroupResponse
       */
      Models::DeletePolicyGroupResponse deletePolicyGroupWithOptions(const Models::DeletePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more policies.
       *
       * @description You cannot delete a policy if it is associated with an undeleted instance group.
       *
       * @param request DeletePolicyGroupRequest
       * @return DeletePolicyGroupResponse
       */
      Models::DeletePolicyGroupResponse deletePolicyGroup(const Models::DeletePolicyGroupRequest &request);

      /**
       * @summary Deletes a scheduled task of an agent.
       *
       * @param request DeleteScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(const Models::DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled task of an agent.
       *
       * @param request DeleteScheduledTaskRequest
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTask(const Models::DeleteScheduledTaskRequest &request);

      /**
       * @summary Deletes system property templates.
       *
       * @description Deleting property templates does not affect instances for which you have already called the [](t3010125.xdita#)operation to send templates.
       *
       * @param request DeleteSystemPropertyTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSystemPropertyTemplatesResponse
       */
      Models::DeleteSystemPropertyTemplatesResponse deleteSystemPropertyTemplatesWithOptions(const Models::DeleteSystemPropertyTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes system property templates.
       *
       * @description Deleting property templates does not affect instances for which you have already called the [](t3010125.xdita#)operation to send templates.
       *
       * @param request DeleteSystemPropertyTemplatesRequest
       * @return DeleteSystemPropertyTemplatesResponse
       */
      Models::DeleteSystemPropertyTemplatesResponse deleteSystemPropertyTemplates(const Models::DeleteSystemPropertyTemplatesRequest &request);

      /**
       * @summary Queries the details of agent tasks.
       *
       * @param request DescribeAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgentTaskResponse
       */
      Models::DescribeAgentTaskResponse describeAgentTaskWithOptions(const Models::DescribeAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of agent tasks.
       *
       * @param request DescribeAgentTaskRequest
       * @return DescribeAgentTaskResponse
       */
      Models::DescribeAgentTaskResponse describeAgentTask(const Models::DescribeAgentTaskRequest &request);

      /**
       * @summary Queries the details of cloud phone instance groups.
       *
       * @param request DescribeAndroidInstanceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAndroidInstanceGroupsResponse
       */
      Models::DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroupsWithOptions(const Models::DescribeAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud phone instance groups.
       *
       * @param request DescribeAndroidInstanceGroupsRequest
       * @return DescribeAndroidInstanceGroupsResponse
       */
      Models::DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroups(const Models::DescribeAndroidInstanceGroupsRequest &request);

      /**
       * @summary Queries the details of cloud phone instances.
       *
       * @param request DescribeAndroidInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAndroidInstancesResponse
       */
      Models::DescribeAndroidInstancesResponse describeAndroidInstancesWithOptions(const Models::DescribeAndroidInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud phone instances.
       *
       * @param request DescribeAndroidInstancesRequest
       * @return DescribeAndroidInstancesResponse
       */
      Models::DescribeAndroidInstancesResponse describeAndroidInstances(const Models::DescribeAndroidInstancesRequest &request);

      /**
       * @summary Queries applications.
       *
       * @param request DescribeAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeAppsWithOptions(const Models::DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries applications.
       *
       * @param request DescribeAppsRequest
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeApps(const Models::DescribeAppsRequest &request);

      /**
       * @summary Queries a list of backup files.
       *
       * @description Currently, only backup files generated by cloud phones and stored in Object Storage Service (OSS) are supported.
       *
       * @param request DescribeBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFilesWithOptions(const Models::DescribeBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup files.
       *
       * @description Currently, only backup files generated by cloud phones and stored in Object Storage Service (OSS) are supported.
       *
       * @param request DescribeBackupFilesRequest
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFiles(const Models::DescribeBackupFilesRequest &request);

      /**
       * @summary Queries the price of a cloud phone bandwidth plan.
       *
       * @param request DescribeBandwidthPackagePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthPackagePriceResponse
       */
      Models::DescribeBandwidthPackagePriceResponse describeBandwidthPackagePriceWithOptions(const Models::DescribeBandwidthPackagePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of a cloud phone bandwidth plan.
       *
       * @param request DescribeBandwidthPackagePriceRequest
       * @return DescribeBandwidthPackagePriceResponse
       */
      Models::DescribeBandwidthPackagePriceResponse describeBandwidthPackagePrice(const Models::DescribeBandwidthPackagePriceRequest &request);

      /**
       * @summary Queries the list of buckets whose names start with cloudphone-saved-bucket-.
       *
       * @description Currently, only backup files generated by Cloud Phone can be stored in Object Storage Service (OSS).
       *
       * @param request DescribeBucketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBucketsResponse
       */
      Models::DescribeBucketsResponse describeBucketsWithOptions(const Models::DescribeBucketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of buckets whose names start with cloudphone-saved-bucket-.
       *
       * @description Currently, only backup files generated by Cloud Phone can be stored in Object Storage Service (OSS).
       *
       * @param request DescribeBucketsRequest
       * @return DescribeBucketsResponse
       */
      Models::DescribeBucketsResponse describeBuckets(const Models::DescribeBucketsRequest &request);

      /**
       * @summary Queries the purchase price of a cloud phone matrix.
       *
       * @param request DescribeCloudPhoneNodePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudPhoneNodePriceResponse
       */
      Models::DescribeCloudPhoneNodePriceResponse describeCloudPhoneNodePriceWithOptions(const Models::DescribeCloudPhoneNodePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the purchase price of a cloud phone matrix.
       *
       * @param request DescribeCloudPhoneNodePriceRequest
       * @return DescribeCloudPhoneNodePriceResponse
       */
      Models::DescribeCloudPhoneNodePriceResponse describeCloudPhoneNodePrice(const Models::DescribeCloudPhoneNodePriceRequest &request);

      /**
       * @summary Queries the renewal price of a cloud phone matrix.
       *
       * @param request DescribeCloudPhoneNodeRenewPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudPhoneNodeRenewPriceResponse
       */
      Models::DescribeCloudPhoneNodeRenewPriceResponse describeCloudPhoneNodeRenewPriceWithOptions(const Models::DescribeCloudPhoneNodeRenewPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of a cloud phone matrix.
       *
       * @param request DescribeCloudPhoneNodeRenewPriceRequest
       * @return DescribeCloudPhoneNodeRenewPriceResponse
       */
      Models::DescribeCloudPhoneNodeRenewPriceResponse describeCloudPhoneNodeRenewPrice(const Models::DescribeCloudPhoneNodeRenewPriceRequest &request);

      /**
       * @summary Queries the details of cloud phone matrices. In the Wuying Cloud Phone system, a matrix (cloud phone server) is a logical resource management unit that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances, which share the underlying compute, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server, on which you can create the corresponding cloud phone instances. The number of cloud phone instances that you can create varies based on the configuration.
       *
       * @param request DescribeCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudPhoneNodesResponse
       */
      Models::DescribeCloudPhoneNodesResponse describeCloudPhoneNodesWithOptions(const Models::DescribeCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cloud phone matrices. In the Wuying Cloud Phone system, a matrix (cloud phone server) is a logical resource management unit that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances, which share the underlying compute, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server, on which you can create the corresponding cloud phone instances. The number of cloud phone instances that you can create varies based on the configuration.
       *
       * @param request DescribeCloudPhoneNodesRequest
       * @return DescribeCloudPhoneNodesResponse
       */
      Models::DescribeCloudPhoneNodesResponse describeCloudPhoneNodes(const Models::DescribeCloudPhoneNodesRequest &request);

      /**
       * @summary Queries all credit change records.
       *
       * @param request DescribeCreditDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditDetailResponse
       */
      Models::DescribeCreditDetailResponse describeCreditDetailWithOptions(const Models::DescribeCreditDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all credit change records.
       *
       * @param request DescribeCreditDetailRequest
       * @return DescribeCreditDetailResponse
       */
      Models::DescribeCreditDetailResponse describeCreditDetail(const Models::DescribeCreditDetailRequest &request);

      /**
       * @summary Queries credit packages.
       *
       * @param request DescribeCreditPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackageResponse
       */
      Models::DescribeCreditPackageResponse describeCreditPackageWithOptions(const Models::DescribeCreditPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries credit packages.
       *
       * @param request DescribeCreditPackageRequest
       * @return DescribeCreditPackageResponse
       */
      Models::DescribeCreditPackageResponse describeCreditPackage(const Models::DescribeCreditPackageRequest &request);

      /**
       * @summary Queries the prices of AI credit boost packages for Cloud Phone.
       *
       * @param request DescribeCreditPackagePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackagePriceResponse
       */
      Models::DescribeCreditPackagePriceResponse describeCreditPackagePriceWithOptions(const Models::DescribeCreditPackagePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of AI credit boost packages for Cloud Phone.
       *
       * @param request DescribeCreditPackagePriceRequest
       * @return DescribeCreditPackagePriceResponse
       */
      Models::DescribeCreditPackagePriceResponse describeCreditPackagePrice(const Models::DescribeCreditPackagePriceRequest &request);

      /**
       * @summary Queries the display settings.
       *
       * @param request DescribeDisplayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisplayConfigResponse
       */
      Models::DescribeDisplayConfigResponse describeDisplayConfigWithOptions(const Models::DescribeDisplayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the display settings.
       *
       * @param request DescribeDisplayConfigRequest
       * @return DescribeDisplayConfigResponse
       */
      Models::DescribeDisplayConfigResponse describeDisplayConfig(const Models::DescribeDisplayConfigRequest &request);

      /**
       * @summary Queries the details of edge agent packages.
       *
       * @param request DescribeEdgeMobileAgentPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEdgeMobileAgentPackagesResponse
       */
      Models::DescribeEdgeMobileAgentPackagesResponse describeEdgeMobileAgentPackagesWithOptions(const Models::DescribeEdgeMobileAgentPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of edge agent packages.
       *
       * @param request DescribeEdgeMobileAgentPackagesRequest
       * @return DescribeEdgeMobileAgentPackagesResponse
       */
      Models::DescribeEdgeMobileAgentPackagesResponse describeEdgeMobileAgentPackages(const Models::DescribeEdgeMobileAgentPackagesRequest &request);

      /**
       * @summary Queries images.
       *
       * @param request DescribeImageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageListResponse
       */
      Models::DescribeImageListResponse describeImageListWithOptions(const Models::DescribeImageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries images.
       *
       * @param request DescribeImageListRequest
       * @return DescribeImageListResponse
       */
      Models::DescribeImageListResponse describeImageList(const Models::DescribeImageListRequest &request);

      /**
       * @summary Queries the price of an instance group.
       *
       * @param request DescribeInstanceGroupPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceGroupPriceResponse
       */
      Models::DescribeInstanceGroupPriceResponse describeInstanceGroupPriceWithOptions(const Models::DescribeInstanceGroupPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of an instance group.
       *
       * @param request DescribeInstanceGroupPriceRequest
       * @return DescribeInstanceGroupPriceResponse
       */
      Models::DescribeInstanceGroupPriceResponse describeInstanceGroupPrice(const Models::DescribeInstanceGroupPriceRequest &request);

      /**
       * @summary Queries the renewal price of an instance group.
       *
       * @param request DescribeInstanceGroupPriceForRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceGroupPriceForRenewResponse
       */
      Models::DescribeInstanceGroupPriceForRenewResponse describeInstanceGroupPriceForRenewWithOptions(const Models::DescribeInstanceGroupPriceForRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of an instance group.
       *
       * @param request DescribeInstanceGroupPriceForRenewRequest
       * @return DescribeInstanceGroupPriceForRenewResponse
       */
      Models::DescribeInstanceGroupPriceForRenewResponse describeInstanceGroupPriceForRenew(const Models::DescribeInstanceGroupPriceForRenewRequest &request);

      /**
       * @summary Queries the command execution results of the RunCommand operation.
       *
       * @description This operation will be deprecated soon. Use the [DescribeTasks](https://help.aliyun.com/document_detail/2833926.html) operation to query the progress and results of command execution.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the command execution results of the RunCommand operation.
       *
       * @description This operation will be deprecated soon. Use the [DescribeTasks](https://help.aliyun.com/document_detail/2833926.html) operation to query the progress and results of command execution.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary Queries the details of JVS instances.
       *
       * @param request DescribeJVSInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJVSInstanceResponse
       */
      Models::DescribeJVSInstanceResponse describeJVSInstanceWithOptions(const Models::DescribeJVSInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of JVS instances.
       *
       * @param request DescribeJVSInstanceRequest
       * @return DescribeJVSInstanceResponse
       */
      Models::DescribeJVSInstanceResponse describeJVSInstance(const Models::DescribeJVSInstanceRequest &request);

      /**
       * @summary Queries one or more key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairsWithOptions(const Models::DescribeKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairs(const Models::DescribeKeyPairsRequest &request);

      /**
       * @summary Queries the latest monitoring data of instances or matrices. Supports querying monitoring data such as CPU, memory, disk, and network.
       *
       * @param request DescribeMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLastWithOptions(const Models::DescribeMetricLastRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest monitoring data of instances or matrices. Supports querying monitoring data such as CPU, memory, disk, and network.
       *
       * @param request DescribeMetricLastRequest
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLast(const Models::DescribeMetricLastRequest &request);

      /**
       * @summary Queries the monitoring data of specified metrics, such as network bandwidth.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of specified metrics, such as network bandwidth.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Queries the latest sorted monitoring data and supports querying monitoring data such as instance network bandwidth.
       *
       * @param request DescribeMetricTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTopWithOptions(const Models::DescribeMetricTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest sorted monitoring data and supports querying monitoring data such as instance network bandwidth.
       *
       * @param request DescribeMetricTopRequest
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTop(const Models::DescribeMetricTopRequest &request);

      /**
       * @summary Queries the details of node packages.
       *
       * @param request DescribeMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMobileAgentPackageResponse
       */
      Models::DescribeMobileAgentPackageResponse describeMobileAgentPackageWithOptions(const Models::DescribeMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of node packages.
       *
       * @param request DescribeMobileAgentPackageRequest
       * @return DescribeMobileAgentPackageResponse
       */
      Models::DescribeMobileAgentPackageResponse describeMobileAgentPackage(const Models::DescribeMobileAgentPackageRequest &request);

      /**
       * @summary Queries the pricing of MobileAgent packages.
       *
       * @param request DescribeMobileAgentPackagePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMobileAgentPackagePriceResponse
       */
      Models::DescribeMobileAgentPackagePriceResponse describeMobileAgentPackagePriceWithOptions(const Models::DescribeMobileAgentPackagePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing of MobileAgent packages.
       *
       * @param request DescribeMobileAgentPackagePriceRequest
       * @return DescribeMobileAgentPackagePriceResponse
       */
      Models::DescribeMobileAgentPackagePriceResponse describeMobileAgentPackagePrice(const Models::DescribeMobileAgentPackagePriceRequest &request);

      /**
       * @summary Queries the renewal price of MobileAgent resource plans.
       *
       * @param request DescribeMobileAgentPackagePriceForRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMobileAgentPackagePriceForRenewResponse
       */
      Models::DescribeMobileAgentPackagePriceForRenewResponse describeMobileAgentPackagePriceForRenewWithOptions(const Models::DescribeMobileAgentPackagePriceForRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal price of MobileAgent resource plans.
       *
       * @param request DescribeMobileAgentPackagePriceForRenewRequest
       * @return DescribeMobileAgentPackagePriceForRenewResponse
       */
      Models::DescribeMobileAgentPackagePriceForRenewResponse describeMobileAgentPackagePriceForRenew(const Models::DescribeMobileAgentPackagePriceForRenewRequest &request);

      /**
       * @summary Query available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the execution records of an agent scheduled task.
       *
       * @param request DescribeScheduledTaskExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTaskExecutionsResponse
       */
      Models::DescribeScheduledTaskExecutionsResponse describeScheduledTaskExecutionsWithOptions(const Models::DescribeScheduledTaskExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of an agent scheduled task.
       *
       * @param request DescribeScheduledTaskExecutionsRequest
       * @return DescribeScheduledTaskExecutionsResponse
       */
      Models::DescribeScheduledTaskExecutionsResponse describeScheduledTaskExecutions(const Models::DescribeScheduledTaskExecutionsRequest &request);

      /**
       * @summary Queries a list of scheduled tasks for an agent.
       *
       * @param request DescribeScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasksWithOptions(const Models::DescribeScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of scheduled tasks for an agent.
       *
       * @param request DescribeScheduledTasksRequest
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasks(const Models::DescribeScheduledTasksRequest &request);

      /**
       * @summary Queries skill information.
       *
       * @param request DescribeSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSkillsResponse
       */
      Models::DescribeSkillsResponse describeSkillsWithOptions(const Models::DescribeSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries skill information.
       *
       * @param request DescribeSkillsRequest
       * @return DescribeSkillsResponse
       */
      Models::DescribeSkillsResponse describeSkills(const Models::DescribeSkillsRequest &request);

      /**
       * @summary Queries the available specifications for cloud phones. Creating an instance requires specifying specification parameters, and you can call this operation to obtain all specification information. For matrix creation, this operation returns the maximum and minimum limits on the number of instances that can be created in a single matrix.
       *
       * @param request DescribeSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpecResponse
       */
      Models::DescribeSpecResponse describeSpecWithOptions(const Models::DescribeSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available specifications for cloud phones. Creating an instance requires specifying specification parameters, and you can call this operation to obtain all specification information. For matrix creation, this operation returns the maximum and minimum limits on the number of instances that can be created in a single matrix.
       *
       * @param request DescribeSpecRequest
       * @return DescribeSpecResponse
       */
      Models::DescribeSpecResponse describeSpec(const Models::DescribeSpecRequest &request);

      /**
       * @summary Describes system property templates.
       *
       * @param request DescribeSystemPropertyTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemPropertyTemplatesResponse
       */
      Models::DescribeSystemPropertyTemplatesResponse describeSystemPropertyTemplatesWithOptions(const Models::DescribeSystemPropertyTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes system property templates.
       *
       * @param request DescribeSystemPropertyTemplatesRequest
       * @return DescribeSystemPropertyTemplatesResponse
       */
      Models::DescribeSystemPropertyTemplatesResponse describeSystemPropertyTemplates(const Models::DescribeSystemPropertyTemplatesRequest &request);

      /**
       * @summary Queries the current task list of cloud phone instances. Many operations on cloud phones, such as creation and power-on or power-off, are performed asynchronously. The system generates a task ID for you to query the operation progress and results. You can call this operation to query the complete task list and execution status.
       *
       * @description - You can call the DescribeTasks operation to query the operation status of one or more cloud phone instances.
       * - Task queries are currently supported for operations such as power-on, power-off, restart, reset, backup or restoration, application installation, and remote commands.
       * - The Level field distinguishes task levels. If Level is set to 1, the task is a batch task. If Level is set to 2, the task is an instance-level task.
       * **Examples:**
       * Assume that you restart two cloud phone instances whose instance IDs are acp-25nt4kk9whhok**** and acp-j2taq887orj8l****. The requestId returned for this operation is B8ED2BA9-0C6A-5643-818F-B5D60A64****. To check the result of this batch operation, you can call DescribeTasks and set InvokeId to B8ED2BA9-0C6A-5643-818F-B5D60A64****. To obtain the restart result for the instance whose ID is acp-25nt4kk9whhok****, you can call DescribeTasks and set ParentTaskId to the batch task ID and AndroidInstanceId to acp-25nt4kk9whhok****.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current task list of cloud phone instances. Many operations on cloud phones, such as creation and power-on or power-off, are performed asynchronously. The system generates a task ID for you to query the operation progress and results. You can call this operation to query the complete task list and execution status.
       *
       * @description - You can call the DescribeTasks operation to query the operation status of one or more cloud phone instances.
       * - Task queries are currently supported for operations such as power-on, power-off, restart, reset, backup or restoration, application installation, and remote commands.
       * - The Level field distinguishes task levels. If Level is set to 1, the task is a batch task. If Level is set to 2, the task is an instance-level task.
       * **Examples:**
       * Assume that you restart two cloud phone instances whose instance IDs are acp-25nt4kk9whhok**** and acp-j2taq887orj8l****. The requestId returned for this operation is B8ED2BA9-0C6A-5643-818F-B5D60A64****. To check the result of this batch operation, you can call DescribeTasks and set InvokeId to B8ED2BA9-0C6A-5643-818F-B5D60A64****. To obtain the restart result for the instance whose ID is acp-25nt4kk9whhok****, you can call DescribeTasks and set ParentTaskId to the batch task ID and AndroidInstanceId to acp-25nt4kk9whhok****.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Detaches an Android Debug Bridge (ADB) key pair from one or more cloud phone instances.
       *
       * @description - After a key pair is detached, the cloud phone no longer stores a valid ADB public key. As a result, ADB connections may fail to authenticate.
       *
       * @param request DetachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPairWithOptions(const Models::DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches an Android Debug Bridge (ADB) key pair from one or more cloud phone instances.
       *
       * @description - After a key pair is detached, the cloud phone no longer stores a valid ADB public key. As a result, ADB connections may fail to authenticate.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary Disconnects a connected instance or disassociates an instance that is associated with another user.
       *
       * @description Connections to instances are established using the [](t2848888.xdita#). After a connection is closed with `session.stop()`, the system maintains the user-instance association for 5 minutes. During this time, other users cannot connect. The `DisconnectAndroidInstance` operation lets you disassociate the instance immediately.
       * <props="china">If you use the Cloud Phone Matrix Edition and the instance stream pattern is collaborative mode, you can specify `EndUserId` to disconnect a specific user and invalidate the corresponding ticket.
       *
       * @param request DisconnectAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisconnectAndroidInstanceResponse
       */
      Models::DisconnectAndroidInstanceResponse disconnectAndroidInstanceWithOptions(const Models::DisconnectAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disconnects a connected instance or disassociates an instance that is associated with another user.
       *
       * @description Connections to instances are established using the [](t2848888.xdita#). After a connection is closed with `session.stop()`, the system maintains the user-instance association for 5 minutes. During this time, other users cannot connect. The `DisconnectAndroidInstance` operation lets you disassociate the instance immediately.
       * <props="china">If you use the Cloud Phone Matrix Edition and the instance stream pattern is collaborative mode, you can specify `EndUserId` to disconnect a specific user and invalidate the corresponding ticket.
       *
       * @param request DisconnectAndroidInstanceRequest
       * @return DisconnectAndroidInstanceResponse
       */
      Models::DisconnectAndroidInstanceResponse disconnectAndroidInstance(const Models::DisconnectAndroidInstanceRequest &request);

      /**
       * @summary Distributes an image to one or more regions. This lets you use the image to create cloud phones in regions other than its source region.
       *
       * @description You cannot cancel the distribution of an image to a region after the image is distributed.
       *
       * @param request DistributeImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DistributeImageResponse
       */
      Models::DistributeImageResponse distributeImageWithOptions(const Models::DistributeImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Distributes an image to one or more regions. This lets you use the image to create cloud phones in regions other than its source region.
       *
       * @description You cannot cancel the distribution of an image to a region after the image is distributed.
       *
       * @param request DistributeImageRequest
       * @return DistributeImageResponse
       */
      Models::DistributeImageResponse distributeImage(const Models::DistributeImageRequest &request);

      /**
       * @summary Downgrades an instance group. Currently, this operation allows you to only delete specific cloud phone instances from an instance group.
       *
       * @description This operation only allows you to scale down an instance group.
       *
       * @param request DowngradeAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DowngradeAndroidInstanceGroupResponse
       */
      Models::DowngradeAndroidInstanceGroupResponse downgradeAndroidInstanceGroupWithOptions(const Models::DowngradeAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downgrades an instance group. Currently, this operation allows you to only delete specific cloud phone instances from an instance group.
       *
       * @description This operation only allows you to scale down an instance group.
       *
       * @param request DowngradeAndroidInstanceGroupRequest
       * @return DowngradeAndroidInstanceGroupResponse
       */
      Models::DowngradeAndroidInstanceGroupResponse downgradeAndroidInstanceGroup(const Models::DowngradeAndroidInstanceGroupRequest &request);

      /**
       * @summary Ends all coordination tasks for a cloud phone instance and invalidates the coordination code.
       *
       * @param request EndCoordinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndCoordinationResponse
       */
      Models::EndCoordinationResponse endCoordinationWithOptions(const Models::EndCoordinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends all coordination tasks for a cloud phone instance and invalidates the coordination code.
       *
       * @param request EndCoordinationRequest
       * @return EndCoordinationResponse
       */
      Models::EndCoordinationResponse endCoordination(const Models::EndCoordinationRequest &request);

      /**
       * @summary Expands the storage of a cloud phone matrix. You can expand the shared device storage used to store matrix-level files such as images, and the independent device storage. Storage capacity expansion incurs additional fees. The response parameters returned when you invoke this operation include the order ID for the new fees.
       *
       * @description This operation is available only on the Alibaba Cloud China site.
       *
       * @param request ExpandDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandDataVolumeResponse
       */
      Models::ExpandDataVolumeResponse expandDataVolumeWithOptions(const Models::ExpandDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the storage of a cloud phone matrix. You can expand the shared device storage used to store matrix-level files such as images, and the independent device storage. Storage capacity expansion incurs additional fees. The response parameters returned when you invoke this operation include the order ID for the new fees.
       *
       * @description This operation is available only on the Alibaba Cloud China site.
       *
       * @param request ExpandDataVolumeRequest
       * @return ExpandDataVolumeResponse
       */
      Models::ExpandDataVolumeResponse expandDataVolume(const Models::ExpandDataVolumeRequest &request);

      /**
       * @summary Expands the independent device storage of a matrix instance.
       *
       * @param request ExpandPhoneDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandPhoneDataVolumeResponse
       */
      Models::ExpandPhoneDataVolumeResponse expandPhoneDataVolumeWithOptions(const Models::ExpandPhoneDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the independent device storage of a matrix instance.
       *
       * @param request ExpandPhoneDataVolumeRequest
       * @return ExpandPhoneDataVolumeResponse
       */
      Models::ExpandPhoneDataVolumeResponse expandPhoneDataVolume(const Models::ExpandPhoneDataVolumeRequest &request);

      /**
       * @summary Fetches files from a cloud phone to Object Storage Service (OSS).
       *
       * @description This operation fetches only files or folders from a cloud phone to Object Storage Service.
       *
       * @param request FetchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchFileResponse
       */
      Models::FetchFileResponse fetchFileWithOptions(const Models::FetchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fetches files from a cloud phone to Object Storage Service (OSS).
       *
       * @description This operation fetches only files or folders from a cloud phone to Object Storage Service.
       *
       * @param request FetchFileRequest
       * @return FetchFileResponse
       */
      Models::FetchFileResponse fetchFile(const Models::FetchFileRequest &request);

      /**
       * @summary By default, you can only use the BatchGetAcpConnectionTicket operation to get the ticket for a connection to a cloud phone, and a cloud phone supports only one connected user at a time. To allow multiple users to connect to a cloud phone at the same time, connect to the cloud phone with a convenience account, use this operation to generate a collaboration code by using the current account, and share this code with other convenience accounts to allow them to access the same cloud phone.
       *
       * @description You can call this operation to generate a collaboration code for a cloud phone accessed by your current account and share this code with other convenience users to allow them to access the same cloud phone over the desktop, mobile, or web client.
       *
       * @param request GenerateCoordinationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCoordinationCodeResponse
       */
      Models::GenerateCoordinationCodeResponse generateCoordinationCodeWithOptions(const Models::GenerateCoordinationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary By default, you can only use the BatchGetAcpConnectionTicket operation to get the ticket for a connection to a cloud phone, and a cloud phone supports only one connected user at a time. To allow multiple users to connect to a cloud phone at the same time, connect to the cloud phone with a convenience account, use this operation to generate a collaboration code by using the current account, and share this code with other convenience accounts to allow them to access the same cloud phone.
       *
       * @description You can call this operation to generate a collaboration code for a cloud phone accessed by your current account and share this code with other convenience users to allow them to access the same cloud phone over the desktop, mobile, or web client.
       *
       * @param request GenerateCoordinationCodeRequest
       * @return GenerateCoordinationCodeResponse
       */
      Models::GenerateCoordinationCodeResponse generateCoordinationCode(const Models::GenerateCoordinationCodeRequest &request);

      /**
       * @summary Retrieves the properties of an instance. This operation runs the android getprop command to retrieve all properties of the cloud phone.
       *
       * @param request GetInstancePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancePropertiesResponse
       */
      Models::GetInstancePropertiesResponse getInstancePropertiesWithOptions(const Models::GetInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the properties of an instance. This operation runs the android getprop command to retrieve all properties of the cloud phone.
       *
       * @param request GetInstancePropertiesRequest
       * @return GetInstancePropertiesResponse
       */
      Models::GetInstancePropertiesResponse getInstanceProperties(const Models::GetInstancePropertiesRequest &request);

      /**
       * @summary Queries the network access blacklist for IP addresses and domain names.
       *
       * @description - This operation requires image version 26.01 or later.
       * - This operation queries the network access blacklist for your account. The blacklist includes IP addresses and domain names.
       *
       * @param request GetNetworkBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkBlacklistResponse
       */
      Models::GetNetworkBlacklistResponse getNetworkBlacklistWithOptions(const Models::GetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network access blacklist for IP addresses and domain names.
       *
       * @description - This operation requires image version 26.01 or later.
       * - This operation queries the network access blacklist for your account. The blacklist includes IP addresses and domain names.
       *
       * @param request GetNetworkBlacklistRequest
       * @return GetNetworkBlacklistResponse
       */
      Models::GetNetworkBlacklistResponse getNetworkBlacklist(const Models::GetNetworkBlacklistRequest &request);

      /**
       * @summary Imports a custom image.
       *
       * @description 1. Importing a custom image is applicable to scenarios where you need to develop customized features or services.
       * 2. Obtain the required AOSP base image from the platform, perform a custom build, and then import the built image to the platform for use. For detailed steps, contact Wuying technical support.
       * 3. Ensure that the image TAR package is smaller than 2 GB. Otherwise, image parsing may fail.
       * 4. Ensure that your OSS address is in the Chinese mainland. Addresses outside the Chinese mainland or in Hong Kong (China) may cause image file download timeouts.
       *
       * @param request ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a custom image.
       *
       * @description 1. Importing a custom image is applicable to scenarios where you need to develop customized features or services.
       * 2. Obtain the required AOSP base image from the platform, perform a custom build, and then import the built image to the platform for use. For detailed steps, contact Wuying technical support.
       * 3. Ensure that the image TAR package is smaller than 2 GB. Otherwise, image parsing may fail.
       * 4. Ensure that your OSS address is in the Chinese mainland. Addresses outside the Chinese mainland or in Hong Kong (China) may cause image file download timeouts.
       *
       * @param request ImportImageRequest
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImage(const Models::ImportImageRequest &request);

      /**
       * @summary Imports the public key of an Android Debug Bridge (ADB) key pair.
       *
       * @description To avoid authorization errors that could cause ADB connection failures, you must import the public key of an ADB key pair.
       *
       * @param request ImportKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPairWithOptions(const Models::ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the public key of an Android Debug Bridge (ADB) key pair.
       *
       * @description To avoid authorization errors that could cause ADB connection failures, you must import the public key of an ADB key pair.
       *
       * @param request ImportKeyPairRequest
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPair(const Models::ImportKeyPairRequest &request);

      /**
       * @summary Installs applications on multiple Wuying Cloud Phone instances in batches.
       *
       * @description You must first create an application by calling the [CreateApp](https://help.aliyun.com/document_detail/2807330.html) operation before installing it on the specified cloud phones. This operation is asynchronous. You can view the results in the task center. To query the task, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request InstallAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAppResponse
       */
      Models::InstallAppResponse installAppWithOptions(const Models::InstallAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs applications on multiple Wuying Cloud Phone instances in batches.
       *
       * @description You must first create an application by calling the [CreateApp](https://help.aliyun.com/document_detail/2807330.html) operation before installing it on the specified cloud phones. This operation is asynchronous. You can view the results in the task center. To query the task, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request InstallAppRequest
       * @return InstallAppResponse
       */
      Models::InstallAppResponse installApp(const Models::InstallAppRequest &request);

      /**
       * @summary Installs the monitoring plugin in a single step. An instance can generate monitoring data only after the plugin is installed.
       *
       * @param request InstallMonitorAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallMonitorAgentResponse
       */
      Models::InstallMonitorAgentResponse installMonitorAgentWithOptions(const Models::InstallMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the monitoring plugin in a single step. An instance can generate monitoring data only after the plugin is installed.
       *
       * @param request InstallMonitorAgentRequest
       * @return InstallMonitorAgentResponse
       */
      Models::InstallMonitorAgentResponse installMonitorAgent(const Models::InstallMonitorAgentRequest &request);

      /**
       * @summary Installs skills to instances.
       *
       * @param request InstallSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallSkillsResponse
       */
      Models::InstallSkillsResponse installSkillsWithOptions(const Models::InstallSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs skills to instances.
       *
       * @param request InstallSkillsRequest
       * @return InstallSkillsResponse
       */
      Models::InstallSkillsResponse installSkills(const Models::InstallSkillsRequest &request);

      /**
       * @summary Diagnoses and recovers cloud phone matrix instances. This operation clears the system log files of an instance to prevent the instance from becoming unrecoverable due to a full disk.
       *
       * @param request InstanceHealerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstanceHealerResponse
       */
      Models::InstanceHealerResponse instanceHealerWithOptions(const Models::InstanceHealerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Diagnoses and recovers cloud phone matrix instances. This operation clears the system log files of an instance to prevent the instance from becoming unrecoverable due to a full disk.
       *
       * @param request InstanceHealerRequest
       * @return InstanceHealerResponse
       */
      Models::InstanceHealerResponse instanceHealer(const Models::InstanceHealerRequest &request);

      /**
       * @summary Queries the Android Debug Bridge (ADB) connection information for instances. This operation is available only to standard networks.
       *
       * @param request ListInstanceAdbAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAdbAttributesResponse
       */
      Models::ListInstanceAdbAttributesResponse listInstanceAdbAttributesWithOptions(const Models::ListInstanceAdbAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Android Debug Bridge (ADB) connection information for instances. This operation is available only to standard networks.
       *
       * @param request ListInstanceAdbAttributesRequest
       * @return ListInstanceAdbAttributesResponse
       */
      Models::ListInstanceAdbAttributesResponse listInstanceAdbAttributes(const Models::ListInstanceAdbAttributesRequest &request);

      /**
       * @summary Queries the details of a policy.
       *
       * @param request ListPolicyGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyGroupsResponse
       */
      Models::ListPolicyGroupsResponse listPolicyGroupsWithOptions(const Models::ListPolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a policy.
       *
       * @param request ListPolicyGroupsRequest
       * @return ListPolicyGroupsResponse
       */
      Models::ListPolicyGroupsResponse listPolicyGroups(const Models::ListPolicyGroupsRequest &request);

      /**
       * @summary Queries the tags that are associated with Cloud Phone instances.
       *
       * @description Specify at least one of the following parameters in the request to determine the queried object: `ResourceId.N`, `Tag.N.Key`, or `Tag.N.Value`.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are associated with Cloud Phone instances.
       *
       * @description Specify at least one of the following parameters in the request to determine the queried object: `ResourceId.N`, `Tag.N.Key`, or `Tag.N.Value`.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the information of an Android instance. Currently, this operation can be used to modify only the instance name and the upstream and downstream bandwidth limits.
       *
       * @param request ModifyAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAndroidInstanceResponse
       */
      Models::ModifyAndroidInstanceResponse modifyAndroidInstanceWithOptions(const Models::ModifyAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an Android instance. Currently, this operation can be used to modify only the instance name and the upstream and downstream bandwidth limits.
       *
       * @param request ModifyAndroidInstanceRequest
       * @return ModifyAndroidInstanceResponse
       */
      Models::ModifyAndroidInstanceResponse modifyAndroidInstance(const Models::ModifyAndroidInstanceRequest &request);

      /**
       * @summary Modifies attributes of an instance group.
       *
       * @param request ModifyAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAndroidInstanceGroupResponse
       */
      Models::ModifyAndroidInstanceGroupResponse modifyAndroidInstanceGroupWithOptions(const Models::ModifyAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies attributes of an instance group.
       *
       * @param request ModifyAndroidInstanceGroupRequest
       * @return ModifyAndroidInstanceGroupResponse
       */
      Models::ModifyAndroidInstanceGroupResponse modifyAndroidInstanceGroup(const Models::ModifyAndroidInstanceGroupRequest &request);

      /**
       * @summary Modify attributes of an application.
       *
       * @param request ModifyAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyAppWithOptions(const Models::ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify attributes of an application.
       *
       * @param request ModifyAppRequest
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyApp(const Models::ModifyAppRequest &request);

      /**
       * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix. Note: In the Cloud Phone system, a Matrix (Cloud Phone Server) is a logical resource management unit that represents a single physical server instance. This physical server can be partitioned into multiple, independently running cloud phone instances. These instances share the Matrix\\"s underlying compute, storage, and network resources. Creating a Matrix is equivalent to leasing a dedicated physical server. On this server, you can then create your cloud phone instances. The number of instances you can create depends on their configuration.
       *
       * @description Changing the streaming mode is an asynchronous operation. Please do not perform this action frequently.
       *
       * @param request ModifyCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudPhoneNodeResponse
       */
      Models::ModifyCloudPhoneNodeResponse modifyCloudPhoneNodeWithOptions(const Models::ModifyCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix. Note: In the Cloud Phone system, a Matrix (Cloud Phone Server) is a logical resource management unit that represents a single physical server instance. This physical server can be partitioned into multiple, independently running cloud phone instances. These instances share the Matrix\\"s underlying compute, storage, and network resources. Creating a Matrix is equivalent to leasing a dedicated physical server. On this server, you can then create your cloud phone instances. The number of instances you can create depends on their configuration.
       *
       * @description Changing the streaming mode is an asynchronous operation. Please do not perform this action frequently.
       *
       * @param request ModifyCloudPhoneNodeRequest
       * @return ModifyCloudPhoneNodeResponse
       */
      Models::ModifyCloudPhoneNodeResponse modifyCloudPhoneNode(const Models::ModifyCloudPhoneNodeRequest &request);

      /**
       * @summary Modifies display settings.
       *
       * @param tmpReq ModifyDisplayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDisplayConfigResponse
       */
      Models::ModifyDisplayConfigResponse modifyDisplayConfigWithOptions(const Models::ModifyDisplayConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies display settings.
       *
       * @param request ModifyDisplayConfigRequest
       * @return ModifyDisplayConfigResponse
       */
      Models::ModifyDisplayConfigResponse modifyDisplayConfig(const Models::ModifyDisplayConfigRequest &request);

      /**
       * @summary Modifies the billing method of an instance. Currently, only switching from pay-as-you-go to subscription is supported.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(const Models::ModifyInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the billing method of an instance. Currently, only switching from pay-as-you-go to subscription is supported.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

      /**
       * @summary Changes the specifications of instance groups. Currently, only specification upgrades are supported. Specification downgrades are not supported.
       *
       * @param request ModifyInstanceGroupSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceGroupSpecResponse
       */
      Models::ModifyInstanceGroupSpecResponse modifyInstanceGroupSpecWithOptions(const Models::ModifyInstanceGroupSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications of instance groups. Currently, only specification upgrades are supported. Specification downgrades are not supported.
       *
       * @param request ModifyInstanceGroupSpecRequest
       * @return ModifyInstanceGroupSpecResponse
       */
      Models::ModifyInstanceGroupSpecResponse modifyInstanceGroupSpec(const Models::ModifyInstanceGroupSpecRequest &request);

      /**
       * @summary Modifies the configuration of a JVS instance.
       *
       * @param request ModifyJVSInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyJVSInstanceResponse
       */
      Models::ModifyJVSInstanceResponse modifyJVSInstanceWithOptions(const Models::ModifyJVSInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a JVS instance.
       *
       * @param request ModifyJVSInstanceRequest
       * @return ModifyJVSInstanceResponse
       */
      Models::ModifyJVSInstanceResponse modifyJVSInstance(const Models::ModifyJVSInstanceRequest &request);

      /**
       * @summary Modifies Android Debug Bridge (ADB) key pairs.
       *
       * @param request ModifyKeyPairNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyKeyPairNameResponse
       */
      Models::ModifyKeyPairNameResponse modifyKeyPairNameWithOptions(const Models::ModifyKeyPairNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies Android Debug Bridge (ADB) key pairs.
       *
       * @param request ModifyKeyPairNameRequest
       * @return ModifyKeyPairNameResponse
       */
      Models::ModifyKeyPairNameResponse modifyKeyPairName(const Models::ModifyKeyPairNameRequest &request);

      /**
       * @summary Modifies a package.
       *
       * @param request ModifyMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMobileAgentPackageResponse
       */
      Models::ModifyMobileAgentPackageResponse modifyMobileAgentPackageWithOptions(const Models::ModifyMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a package.
       *
       * @param request ModifyMobileAgentPackageRequest
       * @return ModifyMobileAgentPackageResponse
       */
      Models::ModifyMobileAgentPackageResponse modifyMobileAgentPackage(const Models::ModifyMobileAgentPackageRequest &request);

      /**
       * @summary Modifies the information of a policy group.
       *
       * @param tmpReq ModifyPolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyGroupResponse
       */
      Models::ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(const Models::ModifyPolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a policy group.
       *
       * @param request ModifyPolicyGroupRequest
       * @return ModifyPolicyGroupResponse
       */
      Models::ModifyPolicyGroupResponse modifyPolicyGroup(const Models::ModifyPolicyGroupRequest &request);

      /**
       * @summary Updates a scheduled task for an agent.
       *
       * @param tmpReq ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scheduled task for an agent.
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const Models::ModifyScheduledTaskRequest &request);

      /**
       * @summary Modifies a property template.
       *
       * @description When you modify a property template, the [](t3010125.xdita#)operation is not triggered. To apply the changes to cloud phones, you must call the [](t3010125.xdita#)operation separately.
       *
       * @param tmpReq ModifySystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySystemPropertyTemplateResponse
       */
      Models::ModifySystemPropertyTemplateResponse modifySystemPropertyTemplateWithOptions(const Models::ModifySystemPropertyTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a property template.
       *
       * @description When you modify a property template, the [](t3010125.xdita#)operation is not triggered. To apply the changes to cloud phones, you must call the [](t3010125.xdita#)operation separately.
       *
       * @param request ModifySystemPropertyTemplateRequest
       * @return ModifySystemPropertyTemplateResponse
       */
      Models::ModifySystemPropertyTemplateResponse modifySystemPropertyTemplate(const Models::ModifySystemPropertyTemplateRequest &request);

      /**
       * @summary Starts, stops, or restarts applications in a cloud phone.
       *
       * @description This API operation is asynchronous. You can view the operation results in the task center. To query tasks, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request OperateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppResponse
       */
      Models::OperateAppResponse operateAppWithOptions(const Models::OperateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts, stops, or restarts applications in a cloud phone.
       *
       * @description This API operation is asynchronous. You can view the operation results in the task center. To query tasks, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request OperateAppRequest
       * @return OperateAppResponse
       */
      Models::OperateAppResponse operateApp(const Models::OperateAppRequest &request);

      /**
       * @summary Pauses running agent tasks on Mobile nodes.
       *
       * @param request PauseAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseAgentTaskResponse
       */
      Models::PauseAgentTaskResponse pauseAgentTaskWithOptions(const Models::PauseAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses running agent tasks on Mobile nodes.
       *
       * @param request PauseAgentTaskRequest
       * @return PauseAgentTaskResponse
       */
      Models::PauseAgentTaskResponse pauseAgentTask(const Models::PauseAgentTaskRequest &request);

      /**
       * @summary Restarts one or more cloud phone instances.
       *
       * @description You can restart an instance only when it is in the **Available**, **Exception**, **Backup Failed**, or **Recovery Failed** state.
       *
       * @param request RebootAndroidInstancesInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootAndroidInstancesInGroupResponse
       */
      Models::RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroupWithOptions(const Models::RebootAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts one or more cloud phone instances.
       *
       * @description You can restart an instance only when it is in the **Available**, **Exception**, **Backup Failed**, or **Recovery Failed** state.
       *
       * @param request RebootAndroidInstancesInGroupRequest
       * @return RebootAndroidInstancesInGroupResponse
       */
      Models::RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroup(const Models::RebootAndroidInstancesInGroupRequest &request);

      /**
       * @summary Restarts cloud phone matrices.
       *
       * @param request RebootCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootCloudPhoneNodesResponse
       */
      Models::RebootCloudPhoneNodesResponse rebootCloudPhoneNodesWithOptions(const Models::RebootCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts cloud phone matrices.
       *
       * @param request RebootCloudPhoneNodesRequest
       * @return RebootCloudPhoneNodesResponse
       */
      Models::RebootCloudPhoneNodesResponse rebootCloudPhoneNodes(const Models::RebootCloudPhoneNodesRequest &request);

      /**
       * @summary Restores a backup file of a cloud phone instance generated from a full-device backup to another cloud phone instance.
       *
       * @description 1. To ensure a high success rate, the cloud phone is restarted during a full-device restore. App and data restoration does not require a restart. Make sure your cloud phone is available and do not operate it during the restoration process. Otherwise, the restoration may fail.
       * 2. Make sure your backup file can be restored properly. After the restoration is complete, check and verify that all your data is intact and functions are working properly before you delete the original backup file or reset the source instance. Otherwise, your data may be lost.
       *
       * @param request RecoverAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAndroidInstanceResponse
       */
      Models::RecoverAndroidInstanceResponse recoverAndroidInstanceWithOptions(const Models::RecoverAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a backup file of a cloud phone instance generated from a full-device backup to another cloud phone instance.
       *
       * @description 1. To ensure a high success rate, the cloud phone is restarted during a full-device restore. App and data restoration does not require a restart. Make sure your cloud phone is available and do not operate it during the restoration process. Otherwise, the restoration may fail.
       * 2. Make sure your backup file can be restored properly. After the restoration is complete, check and verify that all your data is intact and functions are working properly before you delete the original backup file or reset the source instance. Otherwise, your data may be lost.
       *
       * @param request RecoverAndroidInstanceRequest
       * @return RecoverAndroidInstanceResponse
       */
      Models::RecoverAndroidInstanceResponse recoverAndroidInstance(const Models::RecoverAndroidInstanceRequest &request);

      /**
       * @summary Recovers an application from a backup file to another cloud phone instance.
       *
       * @description 1. A full instance recovery restarts the cloud phone. An application and data recovery does not require a restart. To ensure a successful recovery, make sure your cloud phone is in the active state. Do not perform any operations on the cloud phone during the recovery process. Otherwise, the recovery operation may fail.
       * 2. If the application being recovered already exists on the target cloud phone, the existing application is uninstalled before the backup version is installed. This prevents version conflicts.
       * 3. Ensure that your backup file can be used to recover the instance or application properly. After a recovery is complete, verify that your data is complete and all features work correctly. Do not delete the original backup file or reset the source instance until you have verified that the recovery was successful. Otherwise, there is risks that you lose some data.
       *
       * @param request RecoverAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAppResponse
       */
      Models::RecoverAppResponse recoverAppWithOptions(const Models::RecoverAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recovers an application from a backup file to another cloud phone instance.
       *
       * @description 1. A full instance recovery restarts the cloud phone. An application and data recovery does not require a restart. To ensure a successful recovery, make sure your cloud phone is in the active state. Do not perform any operations on the cloud phone during the recovery process. Otherwise, the recovery operation may fail.
       * 2. If the application being recovered already exists on the target cloud phone, the existing application is uninstalled before the backup version is installed. This prevents version conflicts.
       * 3. Ensure that your backup file can be used to recover the instance or application properly. After a recovery is complete, verify that your data is complete and all features work correctly. Do not delete the original backup file or reset the source instance until you have verified that the recovery was successful. Otherwise, there is risks that you lose some data.
       *
       * @param request RecoverAppRequest
       * @return RecoverAppResponse
       */
      Models::RecoverAppResponse recoverApp(const Models::RecoverAppRequest &request);

      /**
       * @summary Restores a backup file.
       *
       * @description Currently, only backup files generated by cloud phones and saved in Object Storage Service (OSS) are supported.
       *
       * @param request RecoveryFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoveryFileResponse
       */
      Models::RecoveryFileResponse recoveryFileWithOptions(const Models::RecoveryFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a backup file.
       *
       * @description Currently, only backup files generated by cloud phones and saved in Object Storage Service (OSS) are supported.
       *
       * @param request RecoveryFileRequest
       * @return RecoveryFileResponse
       */
      Models::RecoveryFileResponse recoveryFile(const Models::RecoveryFileRequest &request);

      /**
       * @summary Refreshes the model authentication tokens.
       *
       * @param request RefreshAuthTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAuthTokensResponse
       */
      Models::RefreshAuthTokensResponse refreshAuthTokensWithOptions(const Models::RefreshAuthTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the model authentication tokens.
       *
       * @param request RefreshAuthTokensRequest
       * @return RefreshAuthTokensResponse
       */
      Models::RefreshAuthTokensResponse refreshAuthTokens(const Models::RefreshAuthTokensRequest &request);

      /**
       * @summary Renews a Cloud Phone instance group. If a subscription instance group has been expired for 15 days, the system automatically deletes the instance group and its instances. This deletion is irreversible. Renew the instance group promptly.
       *
       * @param request RenewAndroidInstanceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAndroidInstanceGroupsResponse
       */
      Models::RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroupsWithOptions(const Models::RenewAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a Cloud Phone instance group. If a subscription instance group has been expired for 15 days, the system automatically deletes the instance group and its instances. This deletion is irreversible. Renew the instance group promptly.
       *
       * @param request RenewAndroidInstanceGroupsRequest
       * @return RenewAndroidInstanceGroupsResponse
       */
      Models::RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroups(const Models::RenewAndroidInstanceGroupsRequest &request);

      /**
       * @summary Renews a cloud phone matrix.
       *
       * @param request RenewCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewCloudPhoneNodesResponse
       */
      Models::RenewCloudPhoneNodesResponse renewCloudPhoneNodesWithOptions(const Models::RenewCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a cloud phone matrix.
       *
       * @param request RenewCloudPhoneNodesRequest
       * @return RenewCloudPhoneNodesResponse
       */
      Models::RenewCloudPhoneNodesResponse renewCloudPhoneNodes(const Models::RenewCloudPhoneNodesRequest &request);

      /**
       * @summary Renews a resource plan.
       *
       * @param request RenewMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewMobileAgentPackageResponse
       */
      Models::RenewMobileAgentPackageResponse renewMobileAgentPackageWithOptions(const Models::RenewMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a resource plan.
       *
       * @param request RenewMobileAgentPackageRequest
       * @return RenewMobileAgentPackageResponse
       */
      Models::RenewMobileAgentPackageResponse renewMobileAgentPackage(const Models::RenewMobileAgentPackageRequest &request);

      /**
       * @summary Resets a cloud phone instance. The reset process reinstalls the system by using the image of the cloud phone. For example, if the image used to create the cloud phone is deleted, the reset fails.
       *
       * @description You can reset (initialize the system) an instance only when the instance is in the **Available, Stopped, Abnormal, Backup Failed, or Restore Failed** state.
       *
       * @param request ResetAndroidInstancesInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAndroidInstancesInGroupResponse
       */
      Models::ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroupWithOptions(const Models::ResetAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a cloud phone instance. The reset process reinstalls the system by using the image of the cloud phone. For example, if the image used to create the cloud phone is deleted, the reset fails.
       *
       * @description You can reset (initialize the system) an instance only when the instance is in the **Available, Stopped, Abnormal, Backup Failed, or Restore Failed** state.
       *
       * @param request ResetAndroidInstancesInGroupRequest
       * @return ResetAndroidInstancesInGroupResponse
       */
      Models::ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroup(const Models::ResetAndroidInstancesInGroupRequest &request);

      /**
       * @summary Resumes the running agent automation tasks on a Mobile node.
       *
       * @param request ResumeAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeAgentTaskResponse
       */
      Models::ResumeAgentTaskResponse resumeAgentTaskWithOptions(const Models::ResumeAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes the running agent automation tasks on a Mobile node.
       *
       * @param request ResumeAgentTaskRequest
       * @return ResumeAgentTaskResponse
       */
      Models::ResumeAgentTaskResponse resumeAgentTask(const Models::ResumeAgentTaskRequest &request);

      /**
       * @summary Triggers an agent on a Mobile node to execute an AI automation task.
       *
       * @param tmpReq RunAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAgentTaskResponse
       */
      Models::RunAgentTaskResponse runAgentTaskWithOptions(const Models::RunAgentTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an agent on a Mobile node to execute an AI automation task.
       *
       * @param request RunAgentTaskRequest
       * @return RunAgentTaskResponse
       */
      Models::RunAgentTaskResponse runAgentTask(const Models::RunAgentTaskRequest &request);

      /**
       * @summary Executes a command on cloud phone instances.
       *
       * @param request RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a command on cloud phone instances.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Executes a command on a cloud phone and attempts to return the result.
       *
       * @description `RunSyncCommand` is suitable for commands that return results quickly, typically within milliseconds. For commands that take longer to execute, typically within seconds, use the [RunCommand](~~RunCommand~~) operation.
       *
       * @param request RunSyncCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSyncCommandResponse
       */
      Models::RunSyncCommandResponse runSyncCommandWithOptions(const Models::RunSyncCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a command on a cloud phone and attempts to return the result.
       *
       * @description `RunSyncCommand` is suitable for commands that return results quickly, typically within milliseconds. For commands that take longer to execute, typically within seconds, use the [RunCommand](~~RunCommand~~) operation.
       *
       * @param request RunSyncCommandRequest
       * @return RunSyncCommandResponse
       */
      Models::RunSyncCommandResponse runSyncCommand(const Models::RunSyncCommandRequest &request);

      /**
       * @summary Pushes files from OSS or public download URLs to cloud phones.
       *
       * @description Currently, only files or folders from Object Storage Service (OSS) can be sent to cloud phones.
       *
       * @param request SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes files from OSS or public download URLs to cloud phones.
       *
       * @description Currently, only files or folders from Object Storage Service (OSS) can be sent to cloud phones.
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary Sends property templates. The templates are delivered to cloud phones and configured in the Android system of the cloud phones by using the setprop command. APKs or related applications can read these property values. If multiple template IDs are specified, the property templates and cloud phone instances are randomly matched.
       *
       * @param request SendSystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSystemPropertyTemplateResponse
       */
      Models::SendSystemPropertyTemplateResponse sendSystemPropertyTemplateWithOptions(const Models::SendSystemPropertyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends property templates. The templates are delivered to cloud phones and configured in the Android system of the cloud phones by using the setprop command. APKs or related applications can read these property values. If multiple template IDs are specified, the property templates and cloud phone instances are randomly matched.
       *
       * @param request SendSystemPropertyTemplateRequest
       * @return SendSystemPropertyTemplateResponse
       */
      Models::SendSystemPropertyTemplateResponse sendSystemPropertyTemplate(const Models::SendSystemPropertyTemplateRequest &request);

      /**
       * @summary Sets the ADB authentication status of an instance. If ADB authentication is enabled, the cloud phone instance verifies the validity of the ADB key pair when you connect to the instance over ADB. In this case, bind an ADB key pair before connecting to the cloud phone instance over ADB. If ADB authentication is disabled, the cloud phone instance does not verify the validity of the ADB key pair. You can connect to the cloud phone instance over ADB as long as network connectivity is available.
       *
       * @description The ADB authentication settings take effect only when the instance is in the Running state.
       *
       * @param request SetAdbSecureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAdbSecureResponse
       */
      Models::SetAdbSecureResponse setAdbSecureWithOptions(const Models::SetAdbSecureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the ADB authentication status of an instance. If ADB authentication is enabled, the cloud phone instance verifies the validity of the ADB key pair when you connect to the instance over ADB. In this case, bind an ADB key pair before connecting to the cloud phone instance over ADB. If ADB authentication is disabled, the cloud phone instance does not verify the validity of the ADB key pair. You can connect to the cloud phone instance over ADB as long as network connectivity is available.
       *
       * @description The ADB authentication settings take effect only when the instance is in the Running state.
       *
       * @param request SetAdbSecureRequest
       * @return SetAdbSecureResponse
       */
      Models::SetAdbSecureResponse setAdbSecure(const Models::SetAdbSecureRequest &request);

      /**
       * @summary Updates the network access blacklist by adding or clearing IP addresses and domain names.
       *
       * @description - The image version must be 26.01 or later.
       * - This operation supports synchronous updates of the IP address blacklist and the domain name blacklist.
       * - The IP address blacklist supports single IP addresses and CIDR blocks and uses an overwrite update method. If an empty string "" is specified, all configured IP blacklist entries are cleared.
       * - The domain name blacklist supports only exact match and does not support regular expressions. If an empty string "" is specified, all configured domain name blacklist entries are cleared.
       * - After the configuration is changed, you must restart the cloud phone for the new blacklist rules to take effect. Note that these rules may not take effect when a proxy is used.
       *
       * @param request SetNetworkBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetNetworkBlacklistResponse
       */
      Models::SetNetworkBlacklistResponse setNetworkBlacklistWithOptions(const Models::SetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the network access blacklist by adding or clearing IP addresses and domain names.
       *
       * @description - The image version must be 26.01 or later.
       * - This operation supports synchronous updates of the IP address blacklist and the domain name blacklist.
       * - The IP address blacklist supports single IP addresses and CIDR blocks and uses an overwrite update method. If an empty string "" is specified, all configured IP blacklist entries are cleared.
       * - The domain name blacklist supports only exact match and does not support regular expressions. If an empty string "" is specified, all configured domain name blacklist entries are cleared.
       * - After the configuration is changed, you must restart the cloud phone for the new blacklist rules to take effect. Note that these rules may not take effect when a proxy is used.
       *
       * @param request SetNetworkBlacklistRequest
       * @return SetNetworkBlacklistResponse
       */
      Models::SetNetworkBlacklistResponse setNetworkBlacklist(const Models::SetNetworkBlacklistRequest &request);

      /**
       * @summary Starts a cloud phone instance.
       *
       * @description You can start an instance only when it is in the **Stopped, Backup Failed, or Recovery Failed** state.
       *
       * @param request StartAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAndroidInstanceResponse
       */
      Models::StartAndroidInstanceResponse startAndroidInstanceWithOptions(const Models::StartAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a cloud phone instance.
       *
       * @description You can start an instance only when it is in the **Stopped, Backup Failed, or Recovery Failed** state.
       *
       * @param request StartAndroidInstanceRequest
       * @return StartAndroidInstanceResponse
       */
      Models::StartAndroidInstanceResponse startAndroidInstance(const Models::StartAndroidInstanceRequest &request);

      /**
       * @summary Enables the ADB connection feature for instances and creates public network mapping rules for the ADB ports of the instances (standard network only).
       *
       * @description This feature can be enabled only when the instance is in the **non-exception** (**UNAVAILABLE**) state and has been successfully assigned a **private IP address**.
       *
       * @param request StartInstanceAdbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceAdbResponse
       */
      Models::StartInstanceAdbResponse startInstanceAdbWithOptions(const Models::StartInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the ADB connection feature for instances and creates public network mapping rules for the ADB ports of the instances (standard network only).
       *
       * @description This feature can be enabled only when the instance is in the **non-exception** (**UNAVAILABLE**) state and has been successfully assigned a **private IP address**.
       *
       * @param request StartInstanceAdbRequest
       * @return StartInstanceAdbResponse
       */
      Models::StartInstanceAdbResponse startInstanceAdb(const Models::StartInstanceAdbRequest &request);

      /**
       * @summary Stops (shuts down) an Android instance.
       *
       * @description An instance can be stopped only if it is in the Active, Backup Failed, or **Recover Failed** status.
       *
       * @param request StopAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAndroidInstanceResponse
       */
      Models::StopAndroidInstanceResponse stopAndroidInstanceWithOptions(const Models::StopAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops (shuts down) an Android instance.
       *
       * @description An instance can be stopped only if it is in the Active, Backup Failed, or **Recover Failed** status.
       *
       * @param request StopAndroidInstanceRequest
       * @return StopAndroidInstanceResponse
       */
      Models::StopAndroidInstanceResponse stopAndroidInstance(const Models::StopAndroidInstanceRequest &request);

      /**
       * @summary Disables the ADB connection for an Android instance and deletes its ADB port forwarding rules. This operation applies only to standard networks.
       *
       * @param request StopInstanceAdbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceAdbResponse
       */
      Models::StopInstanceAdbResponse stopInstanceAdbWithOptions(const Models::StopInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the ADB connection for an Android instance and deletes its ADB port forwarding rules. This operation applies only to standard networks.
       *
       * @param request StopInstanceAdbRequest
       * @return StopInstanceAdbResponse
       */
      Models::StopInstanceAdbResponse stopInstanceAdb(const Models::StopInstanceAdbRequest &request);

      /**
       * @summary Adds tags to cloud phones.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to cloud phones.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Uninstalls applications from Wuying Cloud Phone instances in batches.
       *
       * @description This operation is asynchronous. You can view the operation results in the task center. To query the task, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request UninstallAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAppResponse
       */
      Models::UninstallAppResponse uninstallAppWithOptions(const Models::UninstallAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls applications from Wuying Cloud Phone instances in batches.
       *
       * @description This operation is asynchronous. You can view the operation results in the task center. To query the task, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request UninstallAppRequest
       * @return UninstallAppResponse
       */
      Models::UninstallAppResponse uninstallApp(const Models::UninstallAppRequest &request);

      /**
       * @summary Uninstalls the monitoring plugin.
       *
       * @param request UninstallMonitorAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallMonitorAgentResponse
       */
      Models::UninstallMonitorAgentResponse uninstallMonitorAgentWithOptions(const Models::UninstallMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls the monitoring plugin.
       *
       * @param request UninstallMonitorAgentRequest
       * @return UninstallMonitorAgentResponse
       */
      Models::UninstallMonitorAgentResponse uninstallMonitorAgent(const Models::UninstallMonitorAgentRequest &request);

      /**
       * @summary Uninstalls skills from instances.
       *
       * @param request UninstallSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallSkillsResponse
       */
      Models::UninstallSkillsResponse uninstallSkillsWithOptions(const Models::UninstallSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls skills from instances.
       *
       * @param request UninstallSkillsRequest
       * @return UninstallSkillsResponse
       */
      Models::UninstallSkillsResponse uninstallSkills(const Models::UninstallSkillsRequest &request);

      /**
       * @summary Removes tags from cloud phones. After a tag is removed, if it is not added to any cloud phone, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from cloud phones. After a tag is removed, if it is not added to any cloud phone, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Changes the system cloud disk image of a normal matrix node.
       *
       * @description After changing the system cloud disk image, the instance may have compatibility issues. Verify compatibility before making the change.
       *
       * @param request UpdateCloudPhoneNodeSystemImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudPhoneNodeSystemImageResponse
       */
      Models::UpdateCloudPhoneNodeSystemImageResponse updateCloudPhoneNodeSystemImageWithOptions(const Models::UpdateCloudPhoneNodeSystemImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the system cloud disk image of a normal matrix node.
       *
       * @description After changing the system cloud disk image, the instance may have compatibility issues. Verify compatibility before making the change.
       *
       * @param request UpdateCloudPhoneNodeSystemImageRequest
       * @return UpdateCloudPhoneNodeSystemImageResponse
       */
      Models::UpdateCloudPhoneNodeSystemImageResponse updateCloudPhoneNodeSystemImage(const Models::UpdateCloudPhoneNodeSystemImageRequest &request);

      /**
       * @summary Updates the name of a custom image.
       *
       * @param request UpdateCustomImageNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomImageNameResponse
       */
      Models::UpdateCustomImageNameResponse updateCustomImageNameWithOptions(const Models::UpdateCustomImageNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a custom image.
       *
       * @param request UpdateCustomImageNameRequest
       * @return UpdateCustomImageNameResponse
       */
      Models::UpdateCustomImageNameResponse updateCustomImageName(const Models::UpdateCustomImageNameRequest &request);

      /**
       * @summary Changes the image of an instance group. This change applies to all instances in the instance group.
       *
       * @description The image must be in the Available state and available in the region where the instance group is located. The instance group must be in the Available state.
       *
       * @param request UpdateInstanceGroupImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceGroupImageResponse
       */
      Models::UpdateInstanceGroupImageResponse updateInstanceGroupImageWithOptions(const Models::UpdateInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the image of an instance group. This change applies to all instances in the instance group.
       *
       * @description The image must be in the Available state and available in the region where the instance group is located. The instance group must be in the Available state.
       *
       * @param request UpdateInstanceGroupImageRequest
       * @return UpdateInstanceGroupImageResponse
       */
      Models::UpdateInstanceGroupImageResponse updateInstanceGroupImage(const Models::UpdateInstanceGroupImageRequest &request);

      /**
       * @summary Changes the image of a cloud phone matrix instance. Image changes are supported only for instances in the running, stopped, or image change failed state. The GPU vendor of the destination image must match the GPU vendor of the server where the current instance resides. If you change the image across versions, such as upgrading from Android 10 to Android 12, the system forcibly clears all data, which is equivalent to changing the image and resetting the instance.
       *
       * @description <props="china">Currently, you can only change the image of cloud phone matrix instances. Other instance types are not supported.
       * <props="intl">This operation is not supported on the international site.
       *
       * @param request UpdateInstanceImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceImageResponse
       */
      Models::UpdateInstanceImageResponse updateInstanceImageWithOptions(const Models::UpdateInstanceImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the image of a cloud phone matrix instance. Image changes are supported only for instances in the running, stopped, or image change failed state. The GPU vendor of the destination image must match the GPU vendor of the server where the current instance resides. If you change the image across versions, such as upgrading from Android 10 to Android 12, the system forcibly clears all data, which is equivalent to changing the image and resetting the instance.
       *
       * @description <props="china">Currently, you can only change the image of cloud phone matrix instances. Other instance types are not supported.
       * <props="intl">This operation is not supported on the international site.
       *
       * @param request UpdateInstanceImageRequest
       * @return UpdateInstanceImageResponse
       */
      Models::UpdateInstanceImageResponse updateInstanceImage(const Models::UpdateInstanceImageRequest &request);

      /**
       * @summary Upgrades an instance group. Currently, only scaling out the instance group by increasing the number of instances is supported.
       *
       * @param request UpgradeAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAndroidInstanceGroupResponse
       */
      Models::UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroupWithOptions(const Models::UpgradeAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades an instance group. Currently, only scaling out the instance group by increasing the number of instances is supported.
       *
       * @param request UpgradeAndroidInstanceGroupRequest
       * @return UpgradeAndroidInstanceGroupResponse
       */
      Models::UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroup(const Models::UpgradeAndroidInstanceGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
