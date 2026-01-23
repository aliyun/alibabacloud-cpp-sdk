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
       * @summary Attaches an Android Debug Bridge (ADB) key pair to one or more cloud phone instances.
       *
       * @description *   You can attach to an ADB key pair only to cloud phone instances in the Running state.
       * *   After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the ~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an Android Debug Bridge (ADB) key pair to one or more cloud phone instances.
       *
       * @description *   You can attach to an ADB key pair only to cloud phone instances in the Running state.
       * *   After you attach an ADB key pair, make sure the private key of the ADB key pair is copied to the ~/.android directory (macOS or Linux operating systems) or the C:\\Users\\Username.android directory (Windows operating systems). In addition, you must run the adb kill-server command to restart the ADB process to ensure correct ADB connection. Otherwise, ADB connection may fail due to authentication exceptions.
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
       * @summary 整机备份
       *
       * @param request BackupAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupAndroidInstanceResponse
       */
      Models::BackupAndroidInstanceResponse backupAndroidInstanceWithOptions(const Models::BackupAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 整机备份
       *
       * @param request BackupAndroidInstanceRequest
       * @return BackupAndroidInstanceResponse
       */
      Models::BackupAndroidInstanceResponse backupAndroidInstance(const Models::BackupAndroidInstanceRequest &request);

      /**
       * @summary 应用备份
       *
       * @param request BackupAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupAppResponse
       */
      Models::BackupAppResponse backupAppWithOptions(const Models::BackupAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用备份
       *
       * @param request BackupAppRequest
       * @return BackupAppResponse
       */
      Models::BackupAppResponse backupApp(const Models::BackupAppRequest &request);

      /**
       * @summary Generates and uploads backup files.
       *
       * @description Currently, this operation allows you to upload only backup files generated by cloud phones to Object Storage Service (OSS) buckets.
       *
       * @param request BackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackupFileResponse
       */
      Models::BackupFileResponse backupFileWithOptions(const Models::BackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates and uploads backup files.
       *
       * @description Currently, this operation allows you to upload only backup files generated by cloud phones to Object Storage Service (OSS) buckets.
       *
       * @param request BackupFileRequest
       * @return BackupFileResponse
       */
      Models::BackupFileResponse backupFile(const Models::BackupFileRequest &request);

      /**
       * @summary Retrieves connection tickets in batch.
       *
       * @param request BatchGetAcpConnectionTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetAcpConnectionTicketResponse
       */
      Models::BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicketWithOptions(const Models::BatchGetAcpConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves connection tickets in batch.
       *
       * @param request BatchGetAcpConnectionTicketRequest
       * @return BatchGetAcpConnectionTicketResponse
       */
      Models::BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicket(const Models::BatchGetAcpConnectionTicketRequest &request);

      /**
       * @summary 修改云手机矩阵的配置
       *
       * @param request ChangeCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCloudPhoneNodeResponse
       */
      Models::ChangeCloudPhoneNodeResponse changeCloudPhoneNodeWithOptions(const Models::ChangeCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改云手机矩阵的配置
       *
       * @param request ChangeCloudPhoneNodeRequest
       * @return ChangeCloudPhoneNodeResponse
       */
      Models::ChangeCloudPhoneNodeResponse changeCloudPhoneNode(const Models::ChangeCloudPhoneNodeRequest &request);

      /**
       * @summary Check the resource inventory.
       *
       * @param request CheckResourceStockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckResourceStockResponse
       */
      Models::CheckResourceStockResponse checkResourceStockWithOptions(const Models::CheckResourceStockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check the resource inventory.
       *
       * @param request CheckResourceStockRequest
       * @return CheckResourceStockResponse
       */
      Models::CheckResourceStockResponse checkResourceStock(const Models::CheckResourceStockRequest &request);

      /**
       * @summary Creates pay-as-you-go or subscription instance groups.
       *
       * @description Before creating an instance group, ensure you understand the [billing methods](https://help.aliyun.com/document_detail/2807121.html) supported by Cloud Phone.
       * *   If the billing method of an instance group is PrePaid, AutoPay is set to false by default. In this case, you need to go to [Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually complete the payment.
       * *   You can also set AutoPay to true based on your business requirements.
       *
       * @param tmpReq CreateAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndroidInstanceGroupResponse
       */
      Models::CreateAndroidInstanceGroupResponse createAndroidInstanceGroupWithOptions(const Models::CreateAndroidInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates pay-as-you-go or subscription instance groups.
       *
       * @description Before creating an instance group, ensure you understand the [billing methods](https://help.aliyun.com/document_detail/2807121.html) supported by Cloud Phone.
       * *   If the billing method of an instance group is PrePaid, AutoPay is set to false by default. In this case, you need to go to [Expenses and Costs](https://usercenter2-intl.aliyun.com/order/list) to manually complete the payment.
       * *   You can also set AutoPay to true based on your business requirements.
       *
       * @param request CreateAndroidInstanceGroupRequest
       * @return CreateAndroidInstanceGroupResponse
       */
      Models::CreateAndroidInstanceGroupResponse createAndroidInstanceGroup(const Models::CreateAndroidInstanceGroupRequest &request);

      /**
       * @summary Creates an Android application.
       *
       * @description When creating an app, you can provide app information to the system in one of the following ways:
       * *   Way 1: Apps from the Application Center
       *     *   You can use one of the following methods:
       *         *   Method 1: Pass in the `FileName` and `FilePath` parameters at the same time.
       *         *   Method 2: Pass in the `OssAppUrl` parameter
       *     *   Rule: If your app is from the Alibaba Cloud Workspace Application Center, you must use either Method 1 or Method 2. If both are used, Method 1 takes priority.
       *     *   Condition: Before you proceed, log on to the [Elastic Desktop Service (EDS) Enterprise console](https://eds.console.aliyun.com/osshelp) and follow the on-screen instructions to upload the app file to the Application Center to obtain the values of the `FileName`, `FilePath`, and `OssAppUrl` parameters.
       * *   Way 2: Custom apps
       *     *   Pass in the `CustomAppInfo` parameter.
       *     *   Rule: If you pass in the `CustomAppInfo` parameter, all six fields within it are required.
       * >  If Way 1 and Way 2 are adopted simultaneously, the information from Way 2 takes priority.
       *
       * @param tmpReq CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Android application.
       *
       * @description When creating an app, you can provide app information to the system in one of the following ways:
       * *   Way 1: Apps from the Application Center
       *     *   You can use one of the following methods:
       *         *   Method 1: Pass in the `FileName` and `FilePath` parameters at the same time.
       *         *   Method 2: Pass in the `OssAppUrl` parameter
       *     *   Rule: If your app is from the Alibaba Cloud Workspace Application Center, you must use either Method 1 or Method 2. If both are used, Method 1 takes priority.
       *     *   Condition: Before you proceed, log on to the [Elastic Desktop Service (EDS) Enterprise console](https://eds.console.aliyun.com/osshelp) and follow the on-screen instructions to upload the app file to the Application Center to obtain the values of the `FileName`, `FilePath`, and `OssAppUrl` parameters.
       * *   Way 2: Custom apps
       *     *   Pass in the `CustomAppInfo` parameter.
       *     *   Rule: If you pass in the `CustomAppInfo` parameter, all six fields within it are required.
       * >  If Way 1 and Way 2 are adopted simultaneously, the information from Way 2 takes priority.
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary Creates a cloud phone matrix.
       *
       * @param tmpReq CreateCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudPhoneNodeResponse
       */
      Models::CreateCloudPhoneNodeResponse createCloudPhoneNodeWithOptions(const Models::CreateCloudPhoneNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud phone matrix.
       *
       * @param request CreateCloudPhoneNodeRequest
       * @return CreateCloudPhoneNodeResponse
       */
      Models::CreateCloudPhoneNodeResponse createCloudPhoneNode(const Models::CreateCloudPhoneNodeRequest &request);

      /**
       * @summary Creates a custom image from a cloud phone instance.
       *
       * @param request CreateCustomImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImageWithOptions(const Models::CreateCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image from a cloud phone instance.
       *
       * @param request CreateCustomImageRequest
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImage(const Models::CreateCustomImageRequest &request);

      /**
       * @summary Creates an Android Debug Bridge (ADB) key pair. The system retains the public key and provides a PEM-encoded private key in PKCS#8 format, adhering to the ADB connection specification. You must securely store the private key.
       *
       * @description In addition to using the CreateKeyPair operation to generate a key pair, you can also create one by using the ADB tool and upload it to the Cloud Phone console. The usage of this key pair is identical to that of a system-generated key pair.
       * Each tenant can create up to 500 key pairs.
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Android Debug Bridge (ADB) key pair. The system retains the public key and provides a PEM-encoded private key in PKCS#8 format, adhering to the ADB connection specification. You must securely store the private key.
       *
       * @description In addition to using the CreateKeyPair operation to generate a key pair, you can also create one by using the ADB tool and upload it to the Cloud Phone console. The usage of this key pair is identical to that of a system-generated key pair.
       * Each tenant can create up to 500 key pairs.
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Creates a policy.
       *
       * @param tmpReq CreatePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroupWithOptions(const Models::CreatePolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy.
       *
       * @param request CreatePolicyGroupRequest
       * @return CreatePolicyGroupResponse
       */
      Models::CreatePolicyGroupResponse createPolicyGroup(const Models::CreatePolicyGroupRequest &request);

      /**
       * @summary Creates a screenshot of a cloud phone instance.
       *
       * @description You can call this operation to create a screenshot of a cloud phone instance and upload it to the default Object Storage Service (OSS) bucket. The operation returns a task ID, which you can use with the DescribeTasks operation to get the download link for the screenshot.
       *
       * @param request CreateScreenshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScreenshotResponse
       */
      Models::CreateScreenshotResponse createScreenshotWithOptions(const Models::CreateScreenshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a screenshot of a cloud phone instance.
       *
       * @description You can call this operation to create a screenshot of a cloud phone instance and upload it to the default Object Storage Service (OSS) bucket. The operation returns a task ID, which you can use with the DescribeTasks operation to get the download link for the screenshot.
       *
       * @param request CreateScreenshotRequest
       * @return CreateScreenshotResponse
       */
      Models::CreateScreenshotResponse createScreenshot(const Models::CreateScreenshotRequest &request);

      /**
       * @summary 创建系统属性模板
       *
       * @param tmpReq CreateSystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSystemPropertyTemplateResponse
       */
      Models::CreateSystemPropertyTemplateResponse createSystemPropertyTemplateWithOptions(const Models::CreateSystemPropertyTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建系统属性模板
       *
       * @param request CreateSystemPropertyTemplateRequest
       * @return CreateSystemPropertyTemplateResponse
       */
      Models::CreateSystemPropertyTemplateResponse createSystemPropertyTemplate(const Models::CreateSystemPropertyTemplateRequest &request);

      /**
       * @summary Delete an instance group.
       *
       * @description You can delete only pay-as-you-go instance groups.
       * You can delete subscription instance groups only after they expire.
       *
       * @param request DeleteAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAndroidInstanceGroupResponse
       */
      Models::DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroupWithOptions(const Models::DeleteAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an instance group.
       *
       * @description You can delete only pay-as-you-go instance groups.
       * You can delete subscription instance groups only after they expire.
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
       * @summary 删除备份文件
       *
       * @param request DeleteBackupFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupFileResponse
       */
      Models::DeleteBackupFileResponse deleteBackupFileWithOptions(const Models::DeleteBackupFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除备份文件
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
       * @summary Deletes a policy.
       *
       * @param request DeletePolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyGroupResponse
       */
      Models::DeletePolicyGroupResponse deletePolicyGroupWithOptions(const Models::DeletePolicyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy.
       *
       * @param request DeletePolicyGroupRequest
       * @return DeletePolicyGroupResponse
       */
      Models::DeletePolicyGroupResponse deletePolicyGroup(const Models::DeletePolicyGroupRequest &request);

      /**
       * @summary 删除系统属性模板
       *
       * @param request DeleteSystemPropertyTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSystemPropertyTemplatesResponse
       */
      Models::DeleteSystemPropertyTemplatesResponse deleteSystemPropertyTemplatesWithOptions(const Models::DeleteSystemPropertyTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除系统属性模板
       *
       * @param request DeleteSystemPropertyTemplatesRequest
       * @return DeleteSystemPropertyTemplatesResponse
       */
      Models::DeleteSystemPropertyTemplatesResponse deleteSystemPropertyTemplates(const Models::DeleteSystemPropertyTemplatesRequest &request);

      /**
       * @summary Queries the details of an instance group.
       *
       * @param request DescribeAndroidInstanceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAndroidInstanceGroupsResponse
       */
      Models::DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroupsWithOptions(const Models::DescribeAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance group.
       *
       * @param request DescribeAndroidInstanceGroupsRequest
       * @return DescribeAndroidInstanceGroupsResponse
       */
      Models::DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroups(const Models::DescribeAndroidInstanceGroupsRequest &request);

      /**
       * @summary Queries cloud phone instances.
       *
       * @param request DescribeAndroidInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAndroidInstancesResponse
       */
      Models::DescribeAndroidInstancesResponse describeAndroidInstancesWithOptions(const Models::DescribeAndroidInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cloud phone instances.
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
       * @summary Queries backup files.
       *
       * @description Currently, this operation allows you to query only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
       *
       * @param request DescribeBackupFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFilesWithOptions(const Models::DescribeBackupFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup files.
       *
       * @description Currently, this operation allows you to query only backup files generated by cloud phones that are stored in Object Storage Service (OSS) buckets.
       *
       * @param request DescribeBackupFilesRequest
       * @return DescribeBackupFilesResponse
       */
      Models::DescribeBackupFilesResponse describeBackupFiles(const Models::DescribeBackupFilesRequest &request);

      /**
       * @summary 查询bucket信息
       *
       * @param request DescribeBucketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBucketsResponse
       */
      Models::DescribeBucketsResponse describeBucketsWithOptions(const Models::DescribeBucketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询bucket信息
       *
       * @param request DescribeBucketsRequest
       * @return DescribeBucketsResponse
       */
      Models::DescribeBucketsResponse describeBuckets(const Models::DescribeBucketsRequest &request);

      /**
       * @summary Queries the details of a cloud phone matrix.
       *
       * @param request DescribeCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudPhoneNodesResponse
       */
      Models::DescribeCloudPhoneNodesResponse describeCloudPhoneNodesWithOptions(const Models::DescribeCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cloud phone matrix.
       *
       * @param request DescribeCloudPhoneNodesRequest
       * @return DescribeCloudPhoneNodesResponse
       */
      Models::DescribeCloudPhoneNodesResponse describeCloudPhoneNodes(const Models::DescribeCloudPhoneNodesRequest &request);

      /**
       * @summary 查询显示设置
       *
       * @param request DescribeDisplayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisplayConfigResponse
       */
      Models::DescribeDisplayConfigResponse describeDisplayConfigWithOptions(const Models::DescribeDisplayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询显示设置
       *
       * @param request DescribeDisplayConfigRequest
       * @return DescribeDisplayConfigResponse
       */
      Models::DescribeDisplayConfigResponse describeDisplayConfig(const Models::DescribeDisplayConfigRequest &request);

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
       * @summary Queries the execution results of commands.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of commands.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

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
       * @summary 查询指定监控项的最新监控数据
       *
       * @param request DescribeMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLastWithOptions(const Models::DescribeMetricLastRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定监控项的最新监控数据
       *
       * @param request DescribeMetricLastRequest
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLast(const Models::DescribeMetricLastRequest &request);

      /**
       * @summary 查询指定监控项的监控数据
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定监控项的监控数据
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary 查询指定监控项的最新监控数据
       *
       * @param request DescribeMetricTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTopWithOptions(const Models::DescribeMetricTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定监控项的最新监控数据
       *
       * @param request DescribeMetricTopRequest
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTop(const Models::DescribeMetricTopRequest &request);

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
       * @summary Query available specifications.
       *
       * @param request DescribeSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSpecResponse
       */
      Models::DescribeSpecResponse describeSpecWithOptions(const Models::DescribeSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query available specifications.
       *
       * @param request DescribeSpecRequest
       * @return DescribeSpecResponse
       */
      Models::DescribeSpecResponse describeSpec(const Models::DescribeSpecRequest &request);

      /**
       * @summary 查询系统属性模板
       *
       * @param request DescribeSystemPropertyTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemPropertyTemplatesResponse
       */
      Models::DescribeSystemPropertyTemplatesResponse describeSystemPropertyTemplatesWithOptions(const Models::DescribeSystemPropertyTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询系统属性模板
       *
       * @param request DescribeSystemPropertyTemplatesRequest
       * @return DescribeSystemPropertyTemplatesResponse
       */
      Models::DescribeSystemPropertyTemplatesResponse describeSystemPropertyTemplates(const Models::DescribeSystemPropertyTemplatesRequest &request);

      /**
       * @summary Queries tasks created for a cloud phone instance.
       *
       * @description *   You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
       * *   The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
       * *   You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
       * **Example**
       * Assume you restart two cloud phone instances with the instance IDs acp-25nt4kk9whhok\\*\\*\\*\\* and acp-j2taq887orj8l\\*\\*\\*\\*, and the returned request ID is B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you want to check the operation outcomes of the two cloud phone instances, you can call the DescribeTasks operation. You need to set the InvokeId request parameter to B8ED2BA9-0C6A-5643-818F-B5D60A64\\*\\*\\*\\*. If you only want to check the cloud phone instance with the ID acp-25nt4kk9whhok\\*\\*\\*\\*, you must set the ParentTaskId request parameter to the ID of the batch task and the AndroidInstanceId request parameter to acp-25nt4kk9whhok\\*\\*\\*\\* when calling the DescribeTasks operation.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tasks created for a cloud phone instance.
       *
       * @description *   You can call the DescribeTasks operation to query the tasks created for one or more cloud phone instances.
       * *   The system currently supports various tasks, including starting, stopping, restarting, and resetting cloud phone instances; backing up and restoring data; installing apps; and executing remote commands.
       * *   You can use the Level field to specify the type of task. If Level is set to 1, it represents a batch task. If Level is set to 2, it represents an instance-level task.
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
       * @description *   After you detach an ADB key pair from a cloud phone instance, the ADB connection will fail. This occurs because the system can no longer authenticate using a valid ADB public key, leading to authentication errors.
       *
       * @param request DetachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPairWithOptions(const Models::DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches an Android Debug Bridge (ADB) key pair from one or more cloud phone instances.
       *
       * @description *   After you detach an ADB key pair from a cloud phone instance, the ADB connection will fail. This occurs because the system can no longer authenticate using a valid ADB public key, leading to authentication errors.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary 实例断开连接
       *
       * @param request DisconnectAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisconnectAndroidInstanceResponse
       */
      Models::DisconnectAndroidInstanceResponse disconnectAndroidInstanceWithOptions(const Models::DisconnectAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例断开连接
       *
       * @param request DisconnectAndroidInstanceRequest
       * @return DisconnectAndroidInstanceResponse
       */
      Models::DisconnectAndroidInstanceResponse disconnectAndroidInstance(const Models::DisconnectAndroidInstanceRequest &request);

      /**
       * @summary Distributes an image.
       *
       * @description After you distribute an image in supported regions, the distribution cannot be canceled.
       *
       * @param request DistributeImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DistributeImageResponse
       */
      Models::DistributeImageResponse distributeImageWithOptions(const Models::DistributeImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Distributes an image.
       *
       * @description After you distribute an image in supported regions, the distribution cannot be canceled.
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
       * @summary 结束协同
       *
       * @param request EndCoordinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndCoordinationResponse
       */
      Models::EndCoordinationResponse endCoordinationWithOptions(const Models::EndCoordinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 结束协同
       *
       * @param request EndCoordinationRequest
       * @return EndCoordinationResponse
       */
      Models::EndCoordinationResponse endCoordination(const Models::EndCoordinationRequest &request);

      /**
       * @summary 存储扩容
       *
       * @param request ExpandDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandDataVolumeResponse
       */
      Models::ExpandDataVolumeResponse expandDataVolumeWithOptions(const Models::ExpandDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 存储扩容
       *
       * @param request ExpandDataVolumeRequest
       * @return ExpandDataVolumeResponse
       */
      Models::ExpandDataVolumeResponse expandDataVolume(const Models::ExpandDataVolumeRequest &request);

      /**
       * @summary 扩容实例的独立机身存储
       *
       * @param request ExpandPhoneDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandPhoneDataVolumeResponse
       */
      Models::ExpandPhoneDataVolumeResponse expandPhoneDataVolumeWithOptions(const Models::ExpandPhoneDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 扩容实例的独立机身存储
       *
       * @param request ExpandPhoneDataVolumeRequest
       * @return ExpandPhoneDataVolumeResponse
       */
      Models::ExpandPhoneDataVolumeResponse expandPhoneDataVolume(const Models::ExpandPhoneDataVolumeRequest &request);

      /**
       * @summary Pulls a file from a cloud phone instance and stores it in Object Storage Service (OSS).
       *
       * @description Currently, this operation allows you to retrieve files or folders from cloud phone instances and save them directly to OSS.
       *
       * @param request FetchFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchFileResponse
       */
      Models::FetchFileResponse fetchFileWithOptions(const Models::FetchFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pulls a file from a cloud phone instance and stores it in Object Storage Service (OSS).
       *
       * @description Currently, this operation allows you to retrieve files or folders from cloud phone instances and save them directly to OSS.
       *
       * @param request FetchFileRequest
       * @return FetchFileResponse
       */
      Models::FetchFileResponse fetchFile(const Models::FetchFileRequest &request);

      /**
       * @summary Generates a collaboration code for the cloud phone being accessed by using the current convenience account, and shares this code with other convenience accounts to allow them to access the same cloud phone.
       *
       * @description You can call this operation to generate a collaboration code for a cloud phone accessed by your current account and share this code with other convenience users to allow them to access the same cloud phone over the desktop, mobile, or web client.
       *
       * @param request GenerateCoordinationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCoordinationCodeResponse
       */
      Models::GenerateCoordinationCodeResponse generateCoordinationCodeWithOptions(const Models::GenerateCoordinationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a collaboration code for the cloud phone being accessed by using the current convenience account, and shares this code with other convenience accounts to allow them to access the same cloud phone.
       *
       * @description You can call this operation to generate a collaboration code for a cloud phone accessed by your current account and share this code with other convenience users to allow them to access the same cloud phone over the desktop, mobile, or web client.
       *
       * @param request GenerateCoordinationCodeRequest
       * @return GenerateCoordinationCodeResponse
       */
      Models::GenerateCoordinationCodeResponse generateCoordinationCode(const Models::GenerateCoordinationCodeRequest &request);

      /**
       * @summary 获取属性模板信息
       *
       * @param request GetInstancePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstancePropertiesResponse
       */
      Models::GetInstancePropertiesResponse getInstancePropertiesWithOptions(const Models::GetInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取属性模板信息
       *
       * @param request GetInstancePropertiesRequest
       * @return GetInstancePropertiesResponse
       */
      Models::GetInstancePropertiesResponse getInstanceProperties(const Models::GetInstancePropertiesRequest &request);

      /**
       * @summary 网络黑名单列表查询
       *
       * @param request GetNetworkBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkBlacklistResponse
       */
      Models::GetNetworkBlacklistResponse getNetworkBlacklistWithOptions(const Models::GetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 网络黑名单列表查询
       *
       * @param request GetNetworkBlacklistRequest
       * @return GetNetworkBlacklistResponse
       */
      Models::GetNetworkBlacklistResponse getNetworkBlacklist(const Models::GetNetworkBlacklistRequest &request);

      /**
       * @summary 导入自定义镜像
       *
       * @param request ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入自定义镜像
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
       * @summary Installs an app on multiple cloud phone instances at the same time.
       *
       * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request InstallAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallAppResponse
       */
      Models::InstallAppResponse installAppWithOptions(const Models::InstallAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an app on multiple cloud phone instances at the same time.
       *
       * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request InstallAppRequest
       * @return InstallAppResponse
       */
      Models::InstallAppResponse installApp(const Models::InstallAppRequest &request);

      /**
       * @summary 安装监控插件
       *
       * @param request InstallMonitorAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallMonitorAgentResponse
       */
      Models::InstallMonitorAgentResponse installMonitorAgentWithOptions(const Models::InstallMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 安装监控插件
       *
       * @param request InstallMonitorAgentRequest
       * @return InstallMonitorAgentResponse
       */
      Models::InstallMonitorAgentResponse installMonitorAgent(const Models::InstallMonitorAgentRequest &request);

      /**
       * @summary 实例诊断
       *
       * @param request InstanceHealerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstanceHealerResponse
       */
      Models::InstanceHealerResponse instanceHealerWithOptions(const Models::InstanceHealerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例诊断
       *
       * @param request InstanceHealerRequest
       * @return InstanceHealerResponse
       */
      Models::InstanceHealerResponse instanceHealer(const Models::InstanceHealerRequest &request);

      /**
       * @summary 查询ADB端口连接信息
       *
       * @param request ListInstanceAdbAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAdbAttributesResponse
       */
      Models::ListInstanceAdbAttributesResponse listInstanceAdbAttributesWithOptions(const Models::ListInstanceAdbAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ADB端口连接信息
       *
       * @param request ListInstanceAdbAttributesRequest
       * @return ListInstanceAdbAttributesResponse
       */
      Models::ListInstanceAdbAttributesResponse listInstanceAdbAttributes(const Models::ListInstanceAdbAttributesRequest &request);

      /**
       * @summary Queries policies.
       *
       * @param request ListPolicyGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyGroupsResponse
       */
      Models::ListPolicyGroupsResponse listPolicyGroupsWithOptions(const Models::ListPolicyGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries policies.
       *
       * @param request ListPolicyGroupsRequest
       * @return ListPolicyGroupsResponse
       */
      Models::ListPolicyGroupsResponse listPolicyGroups(const Models::ListPolicyGroupsRequest &request);

      /**
       * @summary 查询资源标签
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源标签
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies attributes of a cloud phone instance. Currently, this operation allows you to modify only the name of a cloud phone instance.
       *
       * @param request ModifyAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAndroidInstanceResponse
       */
      Models::ModifyAndroidInstanceResponse modifyAndroidInstanceWithOptions(const Models::ModifyAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies attributes of a cloud phone instance. Currently, this operation allows you to modify only the name of a cloud phone instance.
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
       * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix.
       *
       * @param request ModifyCloudPhoneNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudPhoneNodeResponse
       */
      Models::ModifyCloudPhoneNodeResponse modifyCloudPhoneNodeWithOptions(const Models::ModifyCloudPhoneNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a cloud phone matrix. Currently, you can only modify the name of a cloud phone matrix.
       *
       * @param request ModifyCloudPhoneNodeRequest
       * @return ModifyCloudPhoneNodeResponse
       */
      Models::ModifyCloudPhoneNodeResponse modifyCloudPhoneNode(const Models::ModifyCloudPhoneNodeRequest &request);

      /**
       * @summary 修改显示设置
       *
       * @param tmpReq ModifyDisplayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDisplayConfigResponse
       */
      Models::ModifyDisplayConfigResponse modifyDisplayConfigWithOptions(const Models::ModifyDisplayConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改显示设置
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
       * @summary Modifies a policy.
       *
       * @param tmpReq ModifyPolicyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyGroupResponse
       */
      Models::ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(const Models::ModifyPolicyGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a policy.
       *
       * @param request ModifyPolicyGroupRequest
       * @return ModifyPolicyGroupResponse
       */
      Models::ModifyPolicyGroupResponse modifyPolicyGroup(const Models::ModifyPolicyGroupRequest &request);

      /**
       * @summary 修改属性模板
       *
       * @param tmpReq ModifySystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySystemPropertyTemplateResponse
       */
      Models::ModifySystemPropertyTemplateResponse modifySystemPropertyTemplateWithOptions(const Models::ModifySystemPropertyTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改属性模板
       *
       * @param request ModifySystemPropertyTemplateRequest
       * @return ModifySystemPropertyTemplateResponse
       */
      Models::ModifySystemPropertyTemplateResponse modifySystemPropertyTemplate(const Models::ModifySystemPropertyTemplateRequest &request);

      /**
       * @summary Operates apps in a cloud phone, such as opening, closing, and reopening apps.
       *
       * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request OperateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAppResponse
       */
      Models::OperateAppResponse operateAppWithOptions(const Models::OperateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Operates apps in a cloud phone, such as opening, closing, and reopening apps.
       *
       * @description This operation runs asynchronously. To check the operation result, visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request OperateAppRequest
       * @return OperateAppResponse
       */
      Models::OperateAppResponse operateApp(const Models::OperateAppRequest &request);

      /**
       * @summary Restarts one or more cloud phone instances.
       *
       * @description Before you restart a cloud phone instance, make sure it is in one of the following states: **Available, Abnormal, Backup failure, and Restoration failure**.
       *
       * @param request RebootAndroidInstancesInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootAndroidInstancesInGroupResponse
       */
      Models::RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroupWithOptions(const Models::RebootAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts one or more cloud phone instances.
       *
       * @description Before you restart a cloud phone instance, make sure it is in one of the following states: **Available, Abnormal, Backup failure, and Restoration failure**.
       *
       * @param request RebootAndroidInstancesInGroupRequest
       * @return RebootAndroidInstancesInGroupResponse
       */
      Models::RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroup(const Models::RebootAndroidInstancesInGroupRequest &request);

      /**
       * @summary 整机恢复
       *
       * @param request RecoverAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAndroidInstanceResponse
       */
      Models::RecoverAndroidInstanceResponse recoverAndroidInstanceWithOptions(const Models::RecoverAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 整机恢复
       *
       * @param request RecoverAndroidInstanceRequest
       * @return RecoverAndroidInstanceResponse
       */
      Models::RecoverAndroidInstanceResponse recoverAndroidInstance(const Models::RecoverAndroidInstanceRequest &request);

      /**
       * @summary 恢复应用
       *
       * @param request RecoverAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAppResponse
       */
      Models::RecoverAppResponse recoverAppWithOptions(const Models::RecoverAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复应用
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
       * @summary Renews instance groups.
       *
       * @param request RenewAndroidInstanceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAndroidInstanceGroupsResponse
       */
      Models::RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroupsWithOptions(const Models::RenewAndroidInstanceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews instance groups.
       *
       * @param request RenewAndroidInstanceGroupsRequest
       * @return RenewAndroidInstanceGroupsResponse
       */
      Models::RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroups(const Models::RenewAndroidInstanceGroupsRequest &request);

      /**
       * @summary Renews a cloud mobile matrix.
       *
       * @param request RenewCloudPhoneNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewCloudPhoneNodesResponse
       */
      Models::RenewCloudPhoneNodesResponse renewCloudPhoneNodesWithOptions(const Models::RenewCloudPhoneNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a cloud mobile matrix.
       *
       * @param request RenewCloudPhoneNodesRequest
       * @return RenewCloudPhoneNodesResponse
       */
      Models::RenewCloudPhoneNodesResponse renewCloudPhoneNodes(const Models::RenewCloudPhoneNodesRequest &request);

      /**
       * @summary Resets one or more cloud phone instances.
       *
       * @description Before you reset a cloud phone instance, make sure it is in one of the following states: **Available, Stopped, Abnormal, Backup failure, and Restoration failure**.
       *
       * @param request ResetAndroidInstancesInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAndroidInstancesInGroupResponse
       */
      Models::ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroupWithOptions(const Models::ResetAndroidInstancesInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets one or more cloud phone instances.
       *
       * @description Before you reset a cloud phone instance, make sure it is in one of the following states: **Available, Stopped, Abnormal, Backup failure, and Restoration failure**.
       *
       * @param request ResetAndroidInstancesInGroupRequest
       * @return ResetAndroidInstancesInGroupResponse
       */
      Models::ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroup(const Models::ResetAndroidInstancesInGroupRequest &request);

      /**
       * @summary Executes a command on a cloud phone instance.
       *
       * @param request RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a command on a cloud phone instance.
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Pushes files from Object Storage Service (OSS) buckets to cloud phone instances.
       *
       * @description Currently, this operation allows you to only push files or folders from OSS buckets to cloud phone instances.
       *
       * @param request SendFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFileWithOptions(const Models::SendFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes files from Object Storage Service (OSS) buckets to cloud phone instances.
       *
       * @description Currently, this operation allows you to only push files or folders from OSS buckets to cloud phone instances.
       *
       * @param request SendFileRequest
       * @return SendFileResponse
       */
      Models::SendFileResponse sendFile(const Models::SendFileRequest &request);

      /**
       * @summary 发送属性模板
       *
       * @param request SendSystemPropertyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSystemPropertyTemplateResponse
       */
      Models::SendSystemPropertyTemplateResponse sendSystemPropertyTemplateWithOptions(const Models::SendSystemPropertyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送属性模板
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
       * @summary 设置网络黑名单
       *
       * @param request SetNetworkBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetNetworkBlacklistResponse
       */
      Models::SetNetworkBlacklistResponse setNetworkBlacklistWithOptions(const Models::SetNetworkBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置网络黑名单
       *
       * @param request SetNetworkBlacklistRequest
       * @return SetNetworkBlacklistResponse
       */
      Models::SetNetworkBlacklistResponse setNetworkBlacklist(const Models::SetNetworkBlacklistRequest &request);

      /**
       * @summary Start instances.
       *
       * @description Only supports starting when the instance is in the **Stopped, Backup Failed, or Recovery Failed** state.
       *
       * @param request StartAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAndroidInstanceResponse
       */
      Models::StartAndroidInstanceResponse startAndroidInstanceWithOptions(const Models::StartAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start instances.
       *
       * @description Only supports starting when the instance is in the **Stopped, Backup Failed, or Recovery Failed** state.
       *
       * @param request StartAndroidInstanceRequest
       * @return StartAndroidInstanceResponse
       */
      Models::StartAndroidInstanceResponse startAndroidInstance(const Models::StartAndroidInstanceRequest &request);

      /**
       * @summary 开启实例ADB端口并创建端口转发条目
       *
       * @param request StartInstanceAdbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceAdbResponse
       */
      Models::StartInstanceAdbResponse startInstanceAdbWithOptions(const Models::StartInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启实例ADB端口并创建端口转发条目
       *
       * @param request StartInstanceAdbRequest
       * @return StartInstanceAdbResponse
       */
      Models::StartInstanceAdbResponse startInstanceAdb(const Models::StartInstanceAdbRequest &request);

      /**
       * @summary Stops a cloud phone instance.
       *
       * @description Before you stop a cloud phone instance, make sure it is in one of the following states: **Available, Backup failure, and Restoration failure**.
       *
       * @param request StopAndroidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAndroidInstanceResponse
       */
      Models::StopAndroidInstanceResponse stopAndroidInstanceWithOptions(const Models::StopAndroidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a cloud phone instance.
       *
       * @description Before you stop a cloud phone instance, make sure it is in one of the following states: **Available, Backup failure, and Restoration failure**.
       *
       * @param request StopAndroidInstanceRequest
       * @return StopAndroidInstanceResponse
       */
      Models::StopAndroidInstanceResponse stopAndroidInstance(const Models::StopAndroidInstanceRequest &request);

      /**
       * @summary 停止实例ADB端口并删除端口转发条目
       *
       * @param request StopInstanceAdbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceAdbResponse
       */
      Models::StopInstanceAdbResponse stopInstanceAdbWithOptions(const Models::StopInstanceAdbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止实例ADB端口并删除端口转发条目
       *
       * @param request StopInstanceAdbRequest
       * @return StopInstanceAdbResponse
       */
      Models::StopInstanceAdbResponse stopInstanceAdb(const Models::StopInstanceAdbRequest &request);

      /**
       * @summary 给资源打标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 给资源打标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Uninstalls an app from multiple cloud phone instances.
       *
       * @description This operation runs asynchronously. To check the operation result, you can visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request UninstallAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallAppResponse
       */
      Models::UninstallAppResponse uninstallAppWithOptions(const Models::UninstallAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls an app from multiple cloud phone instances.
       *
       * @description This operation runs asynchronously. To check the operation result, you can visit the Task Center. To retrieve task details, call the [DescribeTasks](~~DescribeTasks~~) operation.
       *
       * @param request UninstallAppRequest
       * @return UninstallAppResponse
       */
      Models::UninstallAppResponse uninstallApp(const Models::UninstallAppRequest &request);

      /**
       * @summary 卸载监控插件
       *
       * @param request UninstallMonitorAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallMonitorAgentResponse
       */
      Models::UninstallMonitorAgentResponse uninstallMonitorAgentWithOptions(const Models::UninstallMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 卸载监控插件
       *
       * @param request UninstallMonitorAgentRequest
       * @return UninstallMonitorAgentResponse
       */
      Models::UninstallMonitorAgentResponse uninstallMonitorAgent(const Models::UninstallMonitorAgentRequest &request);

      /**
       * @summary 删除资源标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源标签
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
       * @summary Changes the image of an instance group.
       *
       * @description Before you call this operation, make sure the image is in the Available state and the region of the image is included in the region list of the desired instance group. In addition, the instance group itself is available.
       *
       * @param request UpdateInstanceGroupImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceGroupImageResponse
       */
      Models::UpdateInstanceGroupImageResponse updateInstanceGroupImageWithOptions(const Models::UpdateInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the image of an instance group.
       *
       * @description Before you call this operation, make sure the image is in the Available state and the region of the image is included in the region list of the desired instance group. In addition, the instance group itself is available.
       *
       * @param request UpdateInstanceGroupImageRequest
       * @return UpdateInstanceGroupImageResponse
       */
      Models::UpdateInstanceGroupImageResponse updateInstanceGroupImage(const Models::UpdateInstanceGroupImageRequest &request);

      /**
       * @summary 更新实例镜像
       *
       * @param request UpdateInstanceImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceImageResponse
       */
      Models::UpdateInstanceImageResponse updateInstanceImageWithOptions(const Models::UpdateInstanceImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例镜像
       *
       * @param request UpdateInstanceImageRequest
       * @return UpdateInstanceImageResponse
       */
      Models::UpdateInstanceImageResponse updateInstanceImage(const Models::UpdateInstanceImageRequest &request);

      /**
       * @summary Upgrades an instance group. Currently, this operation allows you to only increase the number of instances in an instance group.
       *
       * @description Currently, this operation allows you to only increase the size of an instance group.
       *
       * @param request UpgradeAndroidInstanceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAndroidInstanceGroupResponse
       */
      Models::UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroupWithOptions(const Models::UpgradeAndroidInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades an instance group. Currently, this operation allows you to only increase the number of instances in an instance group.
       *
       * @description Currently, this operation allows you to only increase the size of an instance group.
       *
       * @param request UpgradeAndroidInstanceGroupRequest
       * @return UpgradeAndroidInstanceGroupResponse
       */
      Models::UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroup(const Models::UpgradeAndroidInstanceGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
