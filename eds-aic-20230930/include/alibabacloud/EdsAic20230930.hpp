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
       * @summary Attaches an Android Debug Bridge (ADB) key pair to one or more cloud phone instances.
       *
       * @description - You can attach to an ADB key pair only to cloud phone instances in the Running state.
       * - After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the \\~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an Android Debug Bridge (ADB) key pair to one or more cloud phone instances.
       *
       * @description - You can attach to an ADB key pair only to cloud phone instances in the Running state.
       * - After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the \\~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Authorize/unauthorize Android instances for users.
       *
       * @description Instance states that support user assignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed.
       * Instance states that support unassignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed, Expired, Overdue, Deleted.
       *
       * @param request AuthorizeAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeAndroidInstanceResponse
       */
      Models::AuthorizeAndroidInstanceResponse authorizeAndroidInstanceWithOptions(const Models::AuthorizeAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorize/unauthorize Android instances for users.
       *
       * @description Instance states that support user assignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed.
       * Instance states that support unassignment: Available, Shutting Down, Stopped, Starting, Backing Up, Restoring, Backup Failed, Restore Failed, Expired, Overdue, Deleted.
       *
       * @param request AuthorizeAndroidInstanceRequest
       * @return AuthorizeAndroidInstanceResponse
       */
      Models::AuthorizeAndroidInstanceResponse authorizeAndroidInstance(const Models::AuthorizeAndroidInstanceRequest &request);

      /**
       * @summary Creates a full backup of a Cloud Phone instance. The backup includes installed applications and properties.
       *
       * @description 1. To ensure that the backup is successful, shut down the instance before you start the data backup. The operation may fail if the cloud phone instance is used during the backup process.
       * 2. You should test the backup file to ensure that you can restore the instance from it. After the restoration is complete, verify that your data is complete and that all features function correctly. Do not delete the original backup file or reset the source instance until this verification is complete. Otherwise, you may lose your data.
       * 3. You cannot back up and restore data between different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
       *
       * @param request BackupAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupAndroidInstanceResponse
       */
      Models::BackupAndroidInstanceResponse backupAndroidInstanceWithOptions(const Models::BackupAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a full backup of a Cloud Phone instance. The backup includes installed applications and properties.
       *
       * @description 1. To ensure that the backup is successful, shut down the instance before you start the data backup. The operation may fail if the cloud phone instance is used during the backup process.
       * 2. You should test the backup file to ensure that you can restore the instance from it. After the restoration is complete, verify that your data is complete and that all features function correctly. Do not delete the original backup file or reset the source instance until this verification is complete. Otherwise, you may lose your data.
       * 3. You cannot back up and restore data between different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
       *
       * @param request BackupAndroidInstanceRequest
       * @return BackupAndroidInstanceResponse
       */
      Models::BackupAndroidInstanceResponse backupAndroidInstance(const Models::BackupAndroidInstanceRequest &request);

      /**
       * @summary Backs up specified applications on a cloud phone instance. The backup includes the application and its cache.
       *
       * @description 1. Shut down the cloud phone instance before you back up data to ensure that the operation succeeds. Using the cloud phone during a backup may cause the operation to fail.
       * 2. Ensure that the backup file can be used to restore the instance successfully. After you restore from a backup, verify that your data is complete and that all features are working correctly. Do not delete the original backup file or reset the source instance until you complete this verification. Failure to do so may result in data loss.
       * 3. Backup and restore operations are not suppported across different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
       *
       * @param request BackupAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupAppResponse
       */
      Models::BackupAppResponse backupAppWithOptions(const Models::BackupAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backs up specified applications on a cloud phone instance. The backup includes the application and its cache.
       *
       * @description 1. Shut down the cloud phone instance before you back up data to ensure that the operation succeeds. Using the cloud phone during a backup may cause the operation to fail.
       * 2. Ensure that the backup file can be used to restore the instance successfully. After you restore from a backup, verify that your data is complete and that all features are working correctly. Do not delete the original backup file or reset the source instance until you complete this verification. Failure to do so may result in data loss.
       * 3. Backup and restore operations are not suppported across different image versions, between custom images and public images, or across different architectures, such as cpm.gx7.10xlarge and cpm.gx8.16xlarge.
       *
       * @param request BackupAppRequest
       * @return BackupAppResponse
       */
      Models::BackupAppResponse backupApp(const Models::BackupAppRequest &request);

      /**
       * @summary Generates a backup file and uploads it to remote storage. You can use this operation for regular data backups. You can also back up files from one instance and restore them to multiple instances, a process similar to data replication or migration.
       *
       * @description You can save backup files generated by cloud phones only to Object Storage Service (OSS).
       *
       * @param request BackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupFileResponse
       */
      Models::BackupFileResponse backupFileWithOptions(const Models::BackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a backup file and uploads it to remote storage. You can use this operation for regular data backups. You can also back up files from one instance and restore them to multiple instances, a process similar to data replication or migration.
       *
       * @description You can save backup files generated by cloud phones only to Object Storage Service (OSS).
       *
       * @param request BackupFileRequest
       * @return BackupFileResponse
       */
      Models::BackupFileResponse backupFile(const Models::BackupFileRequest &request);

      /**
       * @summary Retrieves connection tickets in batch. This operation generates connection tickets asynchronously. In most cases, the tickets are returned directly in the response of the first call. However, in some situations, the initial response will contain a `TaskId`. You must then poll this endpoint with the `TaskId` until the generation is complete and the tickets are returned.
       *
       * @description <props="china">
       * 本接口的作用因云手机产品版本和实例串流模式而异：
       * - 云手机实例版或云手机矩阵版（抢占模式）：只能通过同一个`EnduserId`获取`Ticket`。
       * - 云手机矩阵版（协同模式）：可通过传入不同的`EnduserId`来为不同的用户（至多 5 个）同时获取`Ticket`并串流。每次只能传入 1 个`EnduserId`。
       * > 实例串流模式可通过 [ModifyCloudPhoneNode](https://help.aliyun.com/document_detail/2878539.html) 接口的`StreamMode`参数来定义。
       *
       * @param request BatchGetAcpConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetAcpConnectionTicketResponse
       */
      Models::BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicketWithOptions(const Models::BatchGetAcpConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves connection tickets in batch. This operation generates connection tickets asynchronously. In most cases, the tickets are returned directly in the response of the first call. However, in some situations, the initial response will contain a `TaskId`. You must then poll this endpoint with the `TaskId` until the generation is complete and the tickets are returned.
       *
       * @description <props="china">
       * 本接口的作用因云手机产品版本和实例串流模式而异：
       * - 云手机实例版或云手机矩阵版（抢占模式）：只能通过同一个`EnduserId`获取`Ticket`。
       * - 云手机矩阵版（协同模式）：可通过传入不同的`EnduserId`来为不同的用户（至多 5 个）同时获取`Ticket`并串流。每次只能传入 1 个`EnduserId`。
       * > 实例串流模式可通过 [ModifyCloudPhoneNode](https://help.aliyun.com/document_detail/2878539.html) 接口的`StreamMode`参数来定义。
       *
       * @param request BatchGetAcpConnectionTicketRequest
       * @return BatchGetAcpConnectionTicketResponse
       */
      Models::BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicket(const Models::BatchGetAcpConnectionTicketRequest &request);

      /**
       * @summary Cancels running agent tasks on a mobile node.
       *
       * @param request CancelAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAgentTaskResponse
       */
      Models::CancelAgentTaskResponse cancelAgentTaskWithOptions(const Models::CancelAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels running agent tasks on a mobile node.
       *
       * @param request CancelAgentTaskRequest
       * @return CancelAgentTaskResponse
       */
      Models::CancelAgentTaskResponse cancelAgentTask(const Models::CancelAgentTaskRequest &request);

      /**
       * @summary Modifies the configuration of a cloud phone matrix, including the instance type and the number of cloud phone instances.
       *
       * @param request ChangeCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCloudPhoneNodeResponse
       */
      Models::ChangeCloudPhoneNodeResponse changeCloudPhoneNodeWithOptions(const Models::ChangeCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cloud phone matrix, including the instance type and the number of cloud phone instances.
       *
       * @param request ChangeCloudPhoneNodeRequest
       * @return ChangeCloudPhoneNodeResponse
       */
      Models::ChangeCloudPhoneNodeResponse changeCloudPhoneNode(const Models::ChangeCloudPhoneNodeRequest &request);

      /**
       * @summary Checks the inventory of Cloud Phone resources. Before you create an instance, call this operation to check whether resources are available in the target region. Create the instance only after you confirm that resources are available.
       *
       * @param request CheckResourceStockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourceStockResponse
       */
      Models::CheckResourceStockResponse checkResourceStockWithOptions(const Models::CheckResourceStockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the inventory of Cloud Phone resources. Before you create an instance, call this operation to check whether resources are available in the target region. Create the instance only after you confirm that resources are available.
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
       * @summary Creates pay-as-you-go or subscription cloud phone instance groups. An instance group can manage multiple instances. You can organize instances with the same functional purpose into the same instance group for unified management.
       *
       * @description <props="china">Before creating a cloud phone instance group, complete real-name verification. For more information, see [verify your identity - Individual account](https://help.aliyun.com/document_detail/48263.html).
       * When you create a cloud phone instance group, note that creating an instance group incurs resource charges. Familiarize yourself with the [billable methods](https://help.aliyun.com/document_detail/2807121.html) of cloud phone instance groups in advance.
       *   - If the billing method of the instance group is subscription (PrePaid), the default value of AutoPay is false. After you invoke this operation, go to <props="china">[Expenses and Costs](https://usercenter2.aliyun.com/order/list)<props="intl">[Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually pay for the order.
       *  - If you want to enable automatic payment, set AutoPay to true.
       *
       * @param tmpReq CreateAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndroidInstanceGroupResponse
       */
      Models::CreateAndroidInstanceGroupResponse createAndroidInstanceGroupWithOptions(const Models::CreateAndroidInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates pay-as-you-go or subscription cloud phone instance groups. An instance group can manage multiple instances. You can organize instances with the same functional purpose into the same instance group for unified management.
       *
       * @description <props="china">Before creating a cloud phone instance group, complete real-name verification. For more information, see [verify your identity - Individual account](https://help.aliyun.com/document_detail/48263.html).
       * When you create a cloud phone instance group, note that creating an instance group incurs resource charges. Familiarize yourself with the [billable methods](https://help.aliyun.com/document_detail/2807121.html) of cloud phone instance groups in advance.
       *   - If the billing method of the instance group is subscription (PrePaid), the default value of AutoPay is false. After you invoke this operation, go to <props="china">[Expenses and Costs](https://usercenter2.aliyun.com/order/list)<props="intl">[Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually pay for the order.
       *  - If you want to enable automatic payment, set AutoPay to true.
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
       * In the Wuying Cloud Phone system, a matrix (Cloud Phone Server) is a logical resource management unit that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances that share the underlying compute, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server on which you can create cloud phone instances. The number of cloud phone instances varies based on the configuration.
       *
       * @param tmpReq CreateCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudPhoneNodeResponse
       */
      Models::CreateCloudPhoneNodeResponse createCloudPhoneNodeWithOptions(const Models::CreateCloudPhoneNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud phone matrix.
       * In the Wuying Cloud Phone system, a matrix (Cloud Phone Server) is a logical resource management unit that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances that share the underlying compute, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server on which you can create cloud phone instances. The number of cloud phone instances varies based on the configuration.
       *
       * @param request CreateCloudPhoneNodeRequest
       * @return CreateCloudPhoneNodeResponse
       */
      Models::CreateCloudPhoneNodeResponse createCloudPhoneNode(const Models::CreateCloudPhoneNodeRequest &request);

      /**
       * @summary Purchases a credit booster pack.
       *
       * @description This operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of Elastic Cloud Phone.
       *
       * @param request CreateCreditPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCreditPackageResponse
       */
      Models::CreateCreditPackageResponse createCreditPackageWithOptions(const Models::CreateCreditPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a credit booster pack.
       *
       * @description This operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of Elastic Cloud Phone.
       *
       * @param request CreateCreditPackageRequest
       * @return CreateCreditPackageResponse
       */
      Models::CreateCreditPackageResponse createCreditPackage(const Models::CreateCreditPackageRequest &request);

      /**
       * @summary Creates a custom image from a cloud phone instance. Then, you can use the image to create more cloud phones with the same configuration.
       *
       * @param request CreateCustomImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImageWithOptions(const Models::CreateCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image from a cloud phone instance. Then, you can use the image to create more cloud phones with the same configuration.
       *
       * @param request CreateCustomImageRequest
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImage(const Models::CreateCustomImageRequest &request);

      /**
       * @summary Places an order to purchase an edge smart gateway agent package.
       *
       * @description This operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of the Cloud Phone product.
       *
       * @param request CreateEdgeMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeMobileAgentPackageResponse
       */
      Models::CreateEdgeMobileAgentPackageResponse createEdgeMobileAgentPackageWithOptions(const Models::CreateEdgeMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Places an order to purchase an edge smart gateway agent package.
       *
       * @description This operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of the Cloud Phone product.
       *
       * @param request CreateEdgeMobileAgentPackageRequest
       * @return CreateEdgeMobileAgentPackageResponse
       */
      Models::CreateEdgeMobileAgentPackageResponse createEdgeMobileAgentPackage(const Models::CreateEdgeMobileAgentPackageRequest &request);

      /**
       * @summary You can connect to Cloud Phones using the Android Debug Bridge (ADB). ADB lets you manage devices and applications, and transfer files. These operations require high permissions. Because Cloud Phones do not have physical interfaces, you cannot use a USB connection to trigger an authorization dialog box on the device. Therefore, you must configure a key pair before you connect to a Cloud Phone with ADB over a network. This key pair ensures that the device trusts the client and that all operations are secure. You can call the CreateKeyPair operation to create an ADB key pair. The system stores the public key and returns the private key. The private key is in PEM-encoded PKCS#8 format and complies with ADB connection standards. You must securely store the private key.
       *
       * @description You can also use the Android Debug Bridge (ADB) tool to create a key pair and then upload it to the Cloud Phone console by calling the [](t2729840.xdita#)operation. This key pair can be used in the same way as a key pair created by the system.
       * Each tenant can have a maximum of 500 key pairs.
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can connect to Cloud Phones using the Android Debug Bridge (ADB). ADB lets you manage devices and applications, and transfer files. These operations require high permissions. Because Cloud Phones do not have physical interfaces, you cannot use a USB connection to trigger an authorization dialog box on the device. Therefore, you must configure a key pair before you connect to a Cloud Phone with ADB over a network. This key pair ensures that the device trusts the client and that all operations are secure. You can call the CreateKeyPair operation to create an ADB key pair. The system stores the public key and returns the private key. The private key is in PEM-encoded PKCS#8 format and complies with ADB connection standards. You must securely store the private key.
       *
       * @description You can also use the Android Debug Bridge (ADB) tool to create a key pair and then upload it to the Cloud Phone console by calling the [](t2729840.xdita#)operation. This key pair can be used in the same way as a key pair created by the system.
       * Each tenant can have a maximum of 500 key pairs.
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Purchases a resource plan.
       *
       * @description This operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of Alibaba Cloud CloudPhone.
       *
       * @param request CreateMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMobileAgentPackageResponse
       */
      Models::CreateMobileAgentPackageResponse createMobileAgentPackageWithOptions(const Models::CreateMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a resource plan.
       *
       * @description This operation involves billing. Before you call this operation, make sure that you fully understand the [billing methods and pricing](https://www.alibabacloud.com/help/en/ecp/jvs-mobile-billing-instructions) of Alibaba Cloud CloudPhone.
       *
       * @param request CreateMobileAgentPackageRequest
       * @return CreateMobileAgentPackageResponse
       */
      Models::CreateMobileAgentPackageResponse createMobileAgentPackage(const Models::CreateMobileAgentPackageRequest &request);

      /**
       * @summary Creates a policy that applies unified settings to cloud phones. These settings include features such as network redirection, watermarks, resolution, and the clipboard.
       *
       * @param tmpReq CreatePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroupWithOptions(const Models::CreatePolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy that applies unified settings to cloud phones. These settings include features such as network redirection, watermarks, resolution, and the clipboard.
       *
       * @param request CreatePolicyGroupRequest
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroup(const Models::CreatePolicyGroupRequest &request);

      /**
       * @summary 创建定时任务
       *
       * @param tmpReq CreateScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建定时任务
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
       * @summary Deletes an Android instance group. All instances in the group are also deleted. This operation cannot be undone. Proceed with caution.
       *
       * @description Pay-as-you-go instance groups can be deleted at any time.
       * Subscription instance groups can be deleted only after they expire.
       *
       * @param request DeleteAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAndroidInstanceGroupResponse
       */
      Models::DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroupWithOptions(const Models::DeleteAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Android instance group. All instances in the group are also deleted. This operation cannot be undone. Proceed with caution.
       *
       * @description Pay-as-you-go instance groups can be deleted at any time.
       * Subscription instance groups can be deleted only after they expire.
       *
       * @param request DeleteAndroidInstanceGroupRequest
       * @return DeleteAndroidInstanceGroupResponse
       */
      Models::DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroup(const Models::DeleteAndroidInstanceGroupRequest &request);

      /**
       * @summary Deletes an application. Before you delete an application, make sure that the application is not installed on any instances.
       *
       * @param request DeleteAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppsResponse
       */
      Models::DeleteAppsResponse deleteAppsWithOptions(const Models::DeleteAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application. Before you delete an application, make sure that the application is not installed on any instances.
       *
       * @param request DeleteAppsRequest
       * @return DeleteAppsResponse
       */
      Models::DeleteAppsResponse deleteApps(const Models::DeleteAppsRequest &request);

      /**
       * @summary Deletes a batch of backup files.
       *
       * @param request DeleteBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFileWithOptions(const Models::DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a batch of backup files.
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
       * @summary Deletes Android Debug Bridge (ADB) key pairs.
       *
       * @description *   If a cloud phone instance is currently associated with the ADB key pair you intend to delete, the ADB key pair cannot be deleted.
       * *   Once an ADB key pair is deleted, it cannot be retrieved or queried by using the DescribeKeyPairs operation.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Android Debug Bridge (ADB) key pairs.
       *
       * @description *   If a cloud phone instance is currently associated with the ADB key pair you intend to delete, the ADB key pair cannot be deleted.
       * *   Once an ADB key pair is deleted, it cannot be retrieved or queried by using the DescribeKeyPairs operation.
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
       * @summary Deletes one or more policy groups.
       *
       * @description A policy group cannot be deleted if it is associated with an instance group.
       *
       * @param request DeletePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyGroupResponse
       */
      Models::DeletePolicyGroupResponse deletePolicyGroupWithOptions(const Models::DeletePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more policy groups.
       *
       * @description A policy group cannot be deleted if it is associated with an instance group.
       *
       * @param request DeletePolicyGroupRequest
       * @return DeletePolicyGroupResponse
       */
      Models::DeletePolicyGroupResponse deletePolicyGroup(const Models::DeletePolicyGroupRequest &request);

      /**
       * @summary Deletes an agent scheduled task.
       *
       * @param request DeleteScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(const Models::DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an agent scheduled task.
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
       * @summary Queries information about Agent Tasks.
       *
       * @param request DescribeAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgentTaskResponse
       */
      Models::DescribeAgentTaskResponse describeAgentTaskWithOptions(const Models::DescribeAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Agent Tasks.
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
       * @description Currently, only backup files generated by cloud phones can be stored in Object Storage Service (OSS).
       *
       * @param request DescribeBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFilesWithOptions(const Models::DescribeBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup files.
       *
       * @description Currently, only backup files generated by cloud phones can be stored in Object Storage Service (OSS).
       *
       * @param request DescribeBackupFilesRequest
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFiles(const Models::DescribeBackupFilesRequest &request);

      /**
       * @summary Queries information about buckets. This operation returns only the buckets whose names start with `cloudphone-saved-bucket-`.
       *
       * @description Currently, you can save backup files generated by Cloud Phone only to Object Storage Service (OSS).
       *
       * @param request DescribeBucketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBucketsResponse
       */
      Models::DescribeBucketsResponse describeBucketsWithOptions(const Models::DescribeBucketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about buckets. This operation returns only the buckets whose names start with `cloudphone-saved-bucket-`.
       *
       * @description Currently, you can save backup files generated by Cloud Phone only to Object Storage Service (OSS).
       *
       * @param request DescribeBucketsRequest
       * @return DescribeBucketsResponse
       */
      Models::DescribeBucketsResponse describeBuckets(const Models::DescribeBucketsRequest &request);

      /**
       * @summary Queries the details of a cloud phone matrix.
       * In the Wuying Cloud Phone system, a matrix (Cloud Phone Server) is a logical resource snap-in that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances that share the underlying compute, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server on which you can create cloud phone instances. The number of cloud phone instances that can be created varies depending on the configuration.
       *
       * @param request DescribeCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudPhoneNodesResponse
       */
      Models::DescribeCloudPhoneNodesResponse describeCloudPhoneNodesWithOptions(const Models::DescribeCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cloud phone matrix.
       * In the Wuying Cloud Phone system, a matrix (Cloud Phone Server) is a logical resource snap-in that represents a physical server instance. The physical server can be divided into multiple independently running cloud phone instances that share the underlying compute, storage, and network resources of the matrix. Creating a matrix is equivalent to obtaining a physical server on which you can create cloud phone instances. The number of cloud phone instances that can be created varies depending on the configuration.
       *
       * @param request DescribeCloudPhoneNodesRequest
       * @return DescribeCloudPhoneNodesResponse
       */
      Models::DescribeCloudPhoneNodesResponse describeCloudPhoneNodes(const Models::DescribeCloudPhoneNodesRequest &request);

      /**
       * @summary Queries all change records of credits.
       *
       * @param request DescribeCreditDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditDetailResponse
       */
      Models::DescribeCreditDetailResponse describeCreditDetailWithOptions(const Models::DescribeCreditDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all change records of credits.
       *
       * @param request DescribeCreditDetailRequest
       * @return DescribeCreditDetailResponse
       */
      Models::DescribeCreditDetailResponse describeCreditDetail(const Models::DescribeCreditDetailRequest &request);

      /**
       * @summary Queries credit booster packages.
       *
       * @param request DescribeCreditPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackageResponse
       */
      Models::DescribeCreditPackageResponse describeCreditPackageWithOptions(const Models::DescribeCreditPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries credit booster packages.
       *
       * @param request DescribeCreditPackageRequest
       * @return DescribeCreditPackageResponse
       */
      Models::DescribeCreditPackageResponse describeCreditPackage(const Models::DescribeCreditPackageRequest &request);

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
       * @summary Queries a list of available images.
       *
       * @param request DescribeImageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageListResponse
       */
      Models::DescribeImageListResponse describeImageListWithOptions(const Models::DescribeImageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available images.
       *
       * @param request DescribeImageListRequest
       * @return DescribeImageListResponse
       */
      Models::DescribeImageListResponse describeImageList(const Models::DescribeImageListRequest &request);

      /**
       * @summary Queries the execution results of a command run by calling the RunCommand operation.
       *
       * @description This operation is being deprecated. Use the [](t2740507.xdita#)operation to query the progress and results of a command execution.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of a command run by calling the RunCommand operation.
       *
       * @description This operation is being deprecated. Use the [](t2740507.xdita#)operation to query the progress and results of a command execution.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary Retrieves details of JVS instances.
       *
       * @param request DescribeJVSInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJVSInstanceResponse
       */
      Models::DescribeJVSInstanceResponse describeJVSInstanceWithOptions(const Models::DescribeJVSInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details of JVS instances.
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
       * @summary Queries the latest monitoring data for an instance or a matrix. You can query metrics such as CPU, memory, disk, and network.
       *
       * @param request DescribeMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLastWithOptions(const Models::DescribeMetricLastRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest monitoring data for an instance or a matrix. You can query metrics such as CPU, memory, disk, and network.
       *
       * @param request DescribeMetricLastRequest
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLast(const Models::DescribeMetricLastRequest &request);

      /**
       * @summary Queries monitoring data for specified metrics, such as network bandwidth.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring data for specified metrics, such as network bandwidth.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Queries the latest monitoring data for metrics such as instance network bandwidth and returns the results in a sorted list.
       *
       * @param request DescribeMetricTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTopWithOptions(const Models::DescribeMetricTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest monitoring data for metrics such as instance network bandwidth and returns the results in a sorted list.
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
       * @summary Queries the execution records of agent scheduled tasks.
       *
       * @param request DescribeScheduledTaskExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTaskExecutionsResponse
       */
      Models::DescribeScheduledTaskExecutionsResponse describeScheduledTaskExecutionsWithOptions(const Models::DescribeScheduledTaskExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of agent scheduled tasks.
       *
       * @param request DescribeScheduledTaskExecutionsRequest
       * @return DescribeScheduledTaskExecutionsResponse
       */
      Models::DescribeScheduledTaskExecutionsResponse describeScheduledTaskExecutions(const Models::DescribeScheduledTaskExecutionsRequest &request);

      /**
       * @summary Queries the list of scheduled tasks for an agent.
       *
       * @param request DescribeScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasksWithOptions(const Models::DescribeScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scheduled tasks for an agent.
       *
       * @param request DescribeScheduledTasksRequest
       * @return DescribeScheduledTasksResponse
       */
      Models::DescribeScheduledTasksResponse describeScheduledTasks(const Models::DescribeScheduledTasksRequest &request);

      /**
       * @summary Queries the available specifications for cloud phones. This information is required to create an instance. For the cloud phone matrix mode, this operation also returns the minimum and maximum number of instances allowed per matrix.
       *
       * @param request DescribeSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpecResponse
       */
      Models::DescribeSpecResponse describeSpecWithOptions(const Models::DescribeSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available specifications for cloud phones. This information is required to create an instance. For the cloud phone matrix mode, this operation also returns the minimum and maximum number of instances allowed per matrix.
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
       * @summary Queries tasks created for a cloud phone instance. Many operations on cloud phones—such as creating, starting, or stopping them—are asynchronous. When you initiate an operation, the system returns a `Task ID` that you can use to track its progress and final result. You can call this API to retrieve a list of all tasks and their execution statuses.
       *
       * @description - You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
       * - The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
       * - You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
       * **Example**
       * Assume you restart two cloud phone instances with the instance IDs acp-25nt4kk9whhok\\*\\*\\*\\* and acp-j2taq887orj8l\\*\\*\\*\\*, and the returned request ID is B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you want to check the operation outcomes of the two cloud phone instances, you can call the DescribeTasks operation. You need to set the InvokeId request parameter to B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you only want to check the cloud phone instance with the ID acp-25nt4kk9whhok\\*\\*\\*\\*, you must set the ParentTaskId request parameter to the ID of the batch task and the AndroidInstanceId request parameter to acp-25nt4kk9whhok\\*\\*\\*\\* when calling the DescribeTasks operation.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tasks created for a cloud phone instance. Many operations on cloud phones—such as creating, starting, or stopping them—are asynchronous. When you initiate an operation, the system returns a `Task ID` that you can use to track its progress and final result. You can call this API to retrieve a list of all tasks and their execution statuses.
       *
       * @description - You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
       * - The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
       * - You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
       * **Example**
       * Assume you restart two cloud phone instances with the instance IDs acp-25nt4kk9whhok\\*\\*\\*\\* and acp-j2taq887orj8l\\*\\*\\*\\*, and the returned request ID is B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you want to check the operation outcomes of the two cloud phone instances, you can call the DescribeTasks operation. You need to set the InvokeId request parameter to B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you only want to check the cloud phone instance with the ID acp-25nt4kk9whhok\\*\\*\\*\\*, you must set the ParentTaskId request parameter to the ID of the batch task and the AndroidInstanceId request parameter to acp-25nt4kk9whhok\\*\\*\\*\\* when calling the DescribeTasks operation.
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
       * @summary Expands the storage of a cloud phone matrix. You can expand shared storage for matrix-level files such as images, and instance storage. Expanding the storage incurs new fees, and the API response returns an order ID.
       *
       * @description This operation is only available on the china site (aliyun.com).
       *
       * @param request ExpandDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandDataVolumeResponse
       */
      Models::ExpandDataVolumeResponse expandDataVolumeWithOptions(const Models::ExpandDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the storage of a cloud phone matrix. You can expand shared storage for matrix-level files such as images, and instance storage. Expanding the storage incurs new fees, and the API response returns an order ID.
       *
       * @description This operation is only available on the china site (aliyun.com).
       *
       * @param request ExpandDataVolumeRequest
       * @return ExpandDataVolumeResponse
       */
      Models::ExpandDataVolumeResponse expandDataVolume(const Models::ExpandDataVolumeRequest &request);

      /**
       * @summary Expands the phone storage for one or more matrix instances.
       *
       * @param request ExpandPhoneDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandPhoneDataVolumeResponse
       */
      Models::ExpandPhoneDataVolumeResponse expandPhoneDataVolumeWithOptions(const Models::ExpandPhoneDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the phone storage for one or more matrix instances.
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
       * @description 1. You can import a custom image to develop custom features or services.
       * 2. First, obtain the required Android Open Source Project (AOSP) image baseline from the platform. Then, create a custom build. After the build is complete, import the image to the platform. For detailed instructions, contact Wuying technical support.
       * 3. Ensure the image tar package is smaller than 2 GB. Otherwise, image parsing may fail.
       * 4. Ensure the Object Storage Service (OSS) address is in mainland China. If the address is outside mainland China or in the Hong Kong region, the image file download may time out.
       *
       * @param request ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a custom image.
       *
       * @description 1. You can import a custom image to develop custom features or services.
       * 2. First, obtain the required Android Open Source Project (AOSP) image baseline from the platform. Then, create a custom build. After the build is complete, import the image to the platform. For detailed instructions, contact Wuying technical support.
       * 3. Ensure the image tar package is smaller than 2 GB. Otherwise, image parsing may fail.
       * 4. Ensure the Object Storage Service (OSS) address is in mainland China. If the address is outside mainland China or in the Hong Kong region, the image file download may time out.
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
       * @summary Installs applications in batches on Cloud Phone instances.
       *
       * @description Before you can install an application, you must create it by calling the [CreateApp](https://help.aliyun.com/document_detail/2807330.html) operation. This is an asynchronous operation. You can call the [DescribeTasks](~~DescribeTasks~~) operation to query the task status.
       *
       * @param request InstallAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAppResponse
       */
      Models::InstallAppResponse installAppWithOptions(const Models::InstallAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs applications in batches on Cloud Phone instances.
       *
       * @description Before you can install an application, you must create it by calling the [CreateApp](https://help.aliyun.com/document_detail/2807330.html) operation. This is an asynchronous operation. You can call the [DescribeTasks](~~DescribeTasks~~) operation to query the task status.
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
       * @summary Modifies the billing method. Currently, this operation only allows you to change the billing method from pay-as-you-go to subscription.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(const Models::ModifyInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the billing method. Currently, this operation only allows you to change the billing method from pay-as-you-go to subscription.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

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
       * @summary Modifies an agent scheduled task.
       *
       * @param tmpReq ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an agent scheduled task.
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
       * @summary Operates apps in a cloud phone, such as opening, closing, and reopening apps.
       *
       * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [](t2740507.xdita#)operation.
       *
       * @param request OperateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppResponse
       */
      Models::OperateAppResponse operateAppWithOptions(const Models::OperateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Operates apps in a cloud phone, such as opening, closing, and reopening apps.
       *
       * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [](t2740507.xdita#)operation.
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
       * @summary Reboots (shuts down and then starts) Cloud Phone instances.
       *
       * @description You can reboot an instance only if its status is Active, Abnormal, Backup failed, or **Recover failed**.
       *
       * @param request RebootAndroidInstancesInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootAndroidInstancesInGroupResponse
       */
      Models::RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroupWithOptions(const Models::RebootAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reboots (shuts down and then starts) Cloud Phone instances.
       *
       * @description You can reboot an instance only if its status is Active, Abnormal, Backup failed, or **Recover failed**.
       *
       * @param request RebootAndroidInstancesInGroupRequest
       * @return RebootAndroidInstancesInGroupResponse
       */
      Models::RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroup(const Models::RebootAndroidInstancesInGroupRequest &request);

      /**
       * @summary Restores a full instance backup to another cloud phone instance.
       *
       * @description 1. When you restore a full instance, the system restarts the instance to ensure a successful restoration. A restart is not required if you restore only applications and data. Make sure the instance is in an active state. Do not perform any operations on the instance during the restoration process. Otherwise, the restoration may fail.
       * 2. Ensure that the backup file can be used to restore the instance properly. After a restoration is complete, check that all your data is complete and all features are working properly. Do not delete the original backup file or reset the source instance until you have verified the restored data. Otherwise, you may lose your data.
       *
       * @param request RecoverAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAndroidInstanceResponse
       */
      Models::RecoverAndroidInstanceResponse recoverAndroidInstanceWithOptions(const Models::RecoverAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a full instance backup to another cloud phone instance.
       *
       * @description 1. When you restore a full instance, the system restarts the instance to ensure a successful restoration. A restart is not required if you restore only applications and data. Make sure the instance is in an active state. Do not perform any operations on the instance during the restoration process. Otherwise, the restoration may fail.
       * 2. Ensure that the backup file can be used to restore the instance properly. After a restoration is complete, check that all your data is complete and all features are working properly. Do not delete the original backup file or reset the source instance until you have verified the restored data. Otherwise, you may lose your data.
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
       * @summary Restores backup files.
       *
       * @description Currently, this operation allows you to restore only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
       *
       * @param request RecoveryFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoveryFileResponse
       */
      Models::RecoveryFileResponse recoveryFileWithOptions(const Models::RecoveryFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores backup files.
       *
       * @description Currently, this operation allows you to restore only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
       *
       * @param request RecoveryFileRequest
       * @return RecoveryFileResponse
       */
      Models::RecoveryFileResponse recoveryFile(const Models::RecoveryFileRequest &request);

      /**
       * @summary Refreshes model authentication tokens.
       *
       * @param request RefreshAuthTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAuthTokensResponse
       */
      Models::RefreshAuthTokensResponse refreshAuthTokensWithOptions(const Models::RefreshAuthTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes model authentication tokens.
       *
       * @param request RefreshAuthTokensRequest
       * @return RefreshAuthTokensResponse
       */
      Models::RefreshAuthTokensResponse refreshAuthTokens(const Models::RefreshAuthTokensRequest &request);

      /**
       * @summary Renews subscription Cloud Phone instance groups. If a subscription instance group expires, the system automatically deletes the instance group and its instances after 15 days. You cannot recover deleted resources. Renew your instance groups promptly to prevent resource loss.
       *
       * @param request RenewAndroidInstanceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAndroidInstanceGroupsResponse
       */
      Models::RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroupsWithOptions(const Models::RenewAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews subscription Cloud Phone instance groups. If a subscription instance group expires, the system automatically deletes the instance group and its instances after 15 days. You cannot recover deleted resources. Renew your instance groups promptly to prevent resource loss.
       *
       * @param request RenewAndroidInstanceGroupsRequest
       * @return RenewAndroidInstanceGroupsResponse
       */
      Models::RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroups(const Models::RenewAndroidInstanceGroupsRequest &request);

      /**
       * @summary Renews the specified cloud phone matrices.
       *
       * @param request RenewCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewCloudPhoneNodesResponse
       */
      Models::RenewCloudPhoneNodesResponse renewCloudPhoneNodesWithOptions(const Models::RenewCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews the specified cloud phone matrices.
       *
       * @param request RenewCloudPhoneNodesRequest
       * @return RenewCloudPhoneNodesResponse
       */
      Models::RenewCloudPhoneNodesResponse renewCloudPhoneNodes(const Models::RenewCloudPhoneNodesRequest &request);

      /**
       * @summary Renews a mobile agent package.
       *
       * @param request RenewMobileAgentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewMobileAgentPackageResponse
       */
      Models::RenewMobileAgentPackageResponse renewMobileAgentPackageWithOptions(const Models::RenewMobileAgentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a mobile agent package.
       *
       * @param request RenewMobileAgentPackageRequest
       * @return RenewMobileAgentPackageResponse
       */
      Models::RenewMobileAgentPackageResponse renewMobileAgentPackage(const Models::RenewMobileAgentPackageRequest &request);

      /**
       * @summary Resets the instance by reinstalling the operating system using its original image. Note: The reset operation will fail if the image that was used to create the Cloud Phone has since been deleted.
       *
       * @description You can reset an instance (initialize its system) only when the instance is Active, Stopped, Abnormal, Backup Failed, or **Recover Failed**.
       *
       * @param request ResetAndroidInstancesInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAndroidInstancesInGroupResponse
       */
      Models::ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroupWithOptions(const Models::ResetAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the instance by reinstalling the operating system using its original image. Note: The reset operation will fail if the image that was used to create the Cloud Phone has since been deleted.
       *
       * @description You can reset an instance (initialize its system) only when the instance is Active, Stopped, Abnormal, Backup Failed, or **Recover Failed**.
       *
       * @param request ResetAndroidInstancesInGroupRequest
       * @return ResetAndroidInstancesInGroupResponse
       */
      Models::ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroup(const Models::ResetAndroidInstancesInGroupRequest &request);

      /**
       * @summary Resumes an automated Agent task that is running on a Mobile node.
       *
       * @param request ResumeAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeAgentTaskResponse
       */
      Models::ResumeAgentTaskResponse resumeAgentTaskWithOptions(const Models::ResumeAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an automated Agent task that is running on a Mobile node.
       *
       * @param request ResumeAgentTaskRequest
       * @return ResumeAgentTaskResponse
       */
      Models::ResumeAgentTaskResponse resumeAgentTask(const Models::ResumeAgentTaskRequest &request);

      /**
       * @summary Triggers an Agent to execute an AI automation task on Mobile nodes.
       *
       * @param request RunAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAgentTaskResponse
       */
      Models::RunAgentTaskResponse runAgentTaskWithOptions(const Models::RunAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an Agent to execute an AI automation task on Mobile nodes.
       *
       * @param request RunAgentTaskRequest
       * @return RunAgentTaskResponse
       */
      Models::RunAgentTaskResponse runAgentTask(const Models::RunAgentTaskRequest &request);

      /**
       * @summary Runs a command on one or more cloud phone instances.
       *
       * @param request RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a command on one or more cloud phone instances.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Runs a synchronous command on one or more Cloud Phone instances and returns the execution result.
       *
       * @description The `RunSyncCommand` operation is designed for commands that return a result quickly, typically within milliseconds. For longer-running commands that may take several seconds, we recommend using the asynchronous [](t2729835.xdita#)operation.
       *
       * @param request RunSyncCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSyncCommandResponse
       */
      Models::RunSyncCommandResponse runSyncCommandWithOptions(const Models::RunSyncCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a synchronous command on one or more Cloud Phone instances and returns the execution result.
       *
       * @description The `RunSyncCommand` operation is designed for commands that return a result quickly, typically within milliseconds. For longer-running commands that may take several seconds, we recommend using the asynchronous [](t2729835.xdita#)operation.
       *
       * @param request RunSyncCommandRequest
       * @return RunSyncCommandResponse
       */
      Models::RunSyncCommandResponse runSyncCommand(const Models::RunSyncCommandRequest &request);

      /**
       * @summary Pushes files from Object Storage Service (OSS) or a public download link to one or more cloud phones.
       *
       * @description Use this operation to send files or folders from Object Storage Service (OSS) to cloud phones.
       *
       * @param request SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes files from Object Storage Service (OSS) or a public download link to one or more cloud phones.
       *
       * @description Use this operation to send files or folders from Object Storage Service (OSS) to cloud phones.
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary Sends a property template to cloud phone instances and, based on the template, sets properties in the Android system using the setprop command. An APK or a related program can read these property values. If you specify multiple template IDs, the property templates are randomly sent to the cloud phone instances.
       *
       * @param request SendSystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSystemPropertyTemplateResponse
       */
      Models::SendSystemPropertyTemplateResponse sendSystemPropertyTemplateWithOptions(const Models::SendSystemPropertyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a property template to cloud phone instances and, based on the template, sets properties in the Android system using the setprop command. An APK or a related program can read these property values. If you specify multiple template IDs, the property templates are randomly sent to the cloud phone instances.
       *
       * @param request SendSystemPropertyTemplateRequest
       * @return SendSystemPropertyTemplateResponse
       */
      Models::SendSystemPropertyTemplateResponse sendSystemPropertyTemplate(const Models::SendSystemPropertyTemplateRequest &request);

      /**
       * @summary Sets the authentication status for cloud phone instances. If you enable Android Debug Bridge (ADB) authentication for cloud phone instances, the system will verify the validity of the ADB key pairs provided by end users when they connect to the instances over ADB. To ensure successful authentication and a proper connection, we recommend that you attach ADB key pairs to cloud phone instances. If you disable ADB authentication for cloud phone instances, the system will no longer verify the validity of any ADB key pairs. As a result, end users can connect to the cloud phone instances over ADB without authentication, provided the network connection is functioning properly.
       *
       * @description Before you call this operation, make sure that the desired cloud phone instance is in the Running state.
       *
       * @param request SetAdbSecureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAdbSecureResponse
       */
      Models::SetAdbSecureResponse setAdbSecureWithOptions(const Models::SetAdbSecureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the authentication status for cloud phone instances. If you enable Android Debug Bridge (ADB) authentication for cloud phone instances, the system will verify the validity of the ADB key pairs provided by end users when they connect to the instances over ADB. To ensure successful authentication and a proper connection, we recommend that you attach ADB key pairs to cloud phone instances. If you disable ADB authentication for cloud phone instances, the system will no longer verify the validity of any ADB key pairs. As a result, end users can connect to the cloud phone instances over ADB without authentication, provided the network connection is functioning properly.
       *
       * @description Before you call this operation, make sure that the desired cloud phone instance is in the Running state.
       *
       * @param request SetAdbSecureRequest
       * @return SetAdbSecureResponse
       */
      Models::SetAdbSecureResponse setAdbSecure(const Models::SetAdbSecureRequest &request);

      /**
       * @summary Adds or purges IP addresses and domain names from the network access blacklist.
       *
       * @description - This operation requires image version 26.01 or later.
       * - This API call synchronously updates the IP address blacklist and the domain name blacklist.
       * - The IP address blacklist supports individual IP addresses and IP address segments. The update overwrites the existing configuration. If you pass an empty string (""), all configured IP blacklist entries are purged.
       * - The domain name blacklist supports only exact matches and does not support regular expressions. If you pass an empty string (""), all configured domain name blacklist entries are purged.
       * - After you change the configuration, restart the cloud phone to apply the new blacklist rules. Note that these rules may not take effect if you use an agent.
       *
       * @param request SetNetworkBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetNetworkBlacklistResponse
       */
      Models::SetNetworkBlacklistResponse setNetworkBlacklistWithOptions(const Models::SetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or purges IP addresses and domain names from the network access blacklist.
       *
       * @description - This operation requires image version 26.01 or later.
       * - This API call synchronously updates the IP address blacklist and the domain name blacklist.
       * - The IP address blacklist supports individual IP addresses and IP address segments. The update overwrites the existing configuration. If you pass an empty string (""), all configured IP blacklist entries are purged.
       * - The domain name blacklist supports only exact matches and does not support regular expressions. If you pass an empty string (""), all configured domain name blacklist entries are purged.
       * - After you change the configuration, restart the cloud phone to apply the new blacklist rules. Note that these rules may not take effect if you use an agent.
       *
       * @param request SetNetworkBlacklistRequest
       * @return SetNetworkBlacklistResponse
       */
      Models::SetNetworkBlacklistResponse setNetworkBlacklist(const Models::SetNetworkBlacklistRequest &request);

      /**
       * @summary Start cloud phone instances.
       *
       * @description Only supports starting when the instance is in the **Stopped, Backup Failed, or Recovery Failed** state.
       *
       * @param request StartAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAndroidInstanceResponse
       */
      Models::StartAndroidInstanceResponse startAndroidInstanceWithOptions(const Models::StartAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start cloud phone instances.
       *
       * @description Only supports starting when the instance is in the **Stopped, Backup Failed, or Recovery Failed** state.
       *
       * @param request StartAndroidInstanceRequest
       * @return StartAndroidInstanceResponse
       */
      Models::StartAndroidInstanceResponse startAndroidInstance(const Models::StartAndroidInstanceRequest &request);

      /**
       * @summary Enables the Android Debug Bridge (ADB) connection for an instance and creates an Internet mapping rule for its ADB port. This feature is available only for standard networks.
       *
       * @description This feature can be enabled when the instance is not in the **UNAVAILABLE** state and has a **private IP address** assigned.
       *
       * @param request StartInstanceAdbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceAdbResponse
       */
      Models::StartInstanceAdbResponse startInstanceAdbWithOptions(const Models::StartInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Android Debug Bridge (ADB) connection for an instance and creates an Internet mapping rule for its ADB port. This feature is available only for standard networks.
       *
       * @description This feature can be enabled when the instance is not in the **UNAVAILABLE** state and has a **private IP address** assigned.
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
       * @summary Adds tags to one or more cloud phones.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to one or more cloud phones.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Uninstalls applications from one or more Cloud Phone instances.
       *
       * @description This is an asynchronous operation. You can query the task status in the Task Hub by calling [DescribeTasks](~~DescribeTasks~~).
       *
       * @param request UninstallAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAppResponse
       */
      Models::UninstallAppResponse uninstallAppWithOptions(const Models::UninstallAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls applications from one or more Cloud Phone instances.
       *
       * @description This is an asynchronous operation. You can query the task status in the Task Hub by calling [DescribeTasks](~~DescribeTasks~~).
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
       * @summary Removes tags from cloud phones. If a tag is no longer associated with any cloud phone after it is removed, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from cloud phones. If a tag is no longer associated with any cloud phone after it is removed, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

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
       * @summary Updates the image of an instance group. This update affects all instances in the group.
       *
       * @description The image and the instance group must be in the active state. The image must be available in the same region as the instance group.
       *
       * @param request UpdateInstanceGroupImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceGroupImageResponse
       */
      Models::UpdateInstanceGroupImageResponse updateInstanceGroupImageWithOptions(const Models::UpdateInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the image of an instance group. This update affects all instances in the group.
       *
       * @description The image and the instance group must be in the active state. The image must be available in the same region as the instance group.
       *
       * @param request UpdateInstanceGroupImageRequest
       * @return UpdateInstanceGroupImageResponse
       */
      Models::UpdateInstanceGroupImageResponse updateInstanceGroupImage(const Models::UpdateInstanceGroupImageRequest &request);

      /**
       * @summary Changes the image of an instance in a cloud phone matrix. You can change the image for an instance only when the instance is in the Running, Stopped, or Failed to change the image state. The GPU vendor of the target image must match the GPU vendor of the server where the instance runs. If you change the image across major versions, such as from Android 10 to Android 12, the system clears all data. This operation is equivalent to changing the image and then resetting the instance.
       *
       * @description <props="china">You can change images only for cloud phone matrix instances. Other instance types are not supported.<props="intl">This feature is not available on the Alibaba Cloud international site (www\\.alibabacloud.com).
       *
       * @param request UpdateInstanceImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceImageResponse
       */
      Models::UpdateInstanceImageResponse updateInstanceImageWithOptions(const Models::UpdateInstanceImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the image of an instance in a cloud phone matrix. You can change the image for an instance only when the instance is in the Running, Stopped, or Failed to change the image state. The GPU vendor of the target image must match the GPU vendor of the server where the instance runs. If you change the image across major versions, such as from Android 10 to Android 12, the system clears all data. This operation is equivalent to changing the image and then resetting the instance.
       *
       * @description <props="china">You can change images only for cloud phone matrix instances. Other instance types are not supported.<props="intl">This feature is not available on the Alibaba Cloud international site (www\\.alibabacloud.com).
       *
       * @param request UpdateInstanceImageRequest
       * @return UpdateInstanceImageResponse
       */
      Models::UpdateInstanceImageResponse updateInstanceImage(const Models::UpdateInstanceImageRequest &request);

      /**
       * @summary Upgrades an instance group. This operation only supports scaling out an instance group, which increases the number of instances.
       *
       * @param request UpgradeAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAndroidInstanceGroupResponse
       */
      Models::UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroupWithOptions(const Models::UpgradeAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades an instance group. This operation only supports scaling out an instance group, which increases the number of instances.
       *
       * @param request UpgradeAndroidInstanceGroupRequest
       * @return UpgradeAndroidInstanceGroupResponse
       */
      Models::UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroup(const Models::UpgradeAndroidInstanceGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
