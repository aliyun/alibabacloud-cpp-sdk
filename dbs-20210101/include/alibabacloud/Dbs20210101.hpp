// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DBS20210101_HPP_
#define ALIBABACLOUD_DBS20210101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dbs20210101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dbs20210101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Moves a resource from one resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource from one resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 配置备份集信息
       *
       * @param request ConfigureBackupSetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureBackupSetInfoResponse
       */
      Models::ConfigureBackupSetInfoResponse configureBackupSetInfoWithOptions(const Models::ConfigureBackupSetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置备份集信息
       *
       * @param request ConfigureBackupSetInfoRequest
       * @return ConfigureBackupSetInfoResponse
       */
      Models::ConfigureBackupSetInfoResponse configureBackupSetInfo(const Models::ConfigureBackupSetInfoRequest &request);

      /**
       * @summary Enables an advanced backup policy for a PolarDB instance.
       *
       * @description ### [](#)Supported database engines
       * PolarDB for MySQL
       * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
       *
       * @param request CreateAdvancedPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAdvancedPolicyResponse
       */
      Models::CreateAdvancedPolicyResponse createAdvancedPolicyWithOptions(const Models::CreateAdvancedPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an advanced backup policy for a PolarDB instance.
       *
       * @description ### [](#)Supported database engines
       * PolarDB for MySQL
       * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
       *
       * @param request CreateAdvancedPolicyRequest
       * @return CreateAdvancedPolicyResponse
       */
      Models::CreateAdvancedPolicyResponse createAdvancedPolicy(const Models::CreateAdvancedPolicyRequest &request);

      /**
       * @summary Creates an advanced download task for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL
       * *   ApsaraDB RDS for PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * For the instances that meet your business requirements, you can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request CreateDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDownloadResponse
       */
      Models::CreateDownloadResponse createDownloadWithOptions(const Models::CreateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an advanced download task for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL
       * *   ApsaraDB RDS for PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * For the instances that meet your business requirements, you can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request CreateDownloadRequest
       * @return CreateDownloadResponse
       */
      Models::CreateDownloadResponse createDownload(const Models::CreateDownloadRequest &request);

      /**
       * @summary Releases a sandbox instance.
       *
       * @description This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DeleteSandboxInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSandboxInstanceResponse
       */
      Models::DeleteSandboxInstanceResponse deleteSandboxInstanceWithOptions(const Models::DeleteSandboxInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a sandbox instance.
       *
       * @description This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DeleteSandboxInstanceRequest
       * @return DeleteSandboxInstanceResponse
       */
      Models::DeleteSandboxInstanceResponse deleteSandboxInstance(const Models::DeleteSandboxInstanceRequest &request);

      /**
       * @summary Queries the information about the backup data of a PolarDB for MySQL cluster.
       *
       * @description ### [](#)Supported database engine
       * PolarDB for MySQL
       * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID: 35585947) for customer consultation to request permissions.
       * ### [](#)References
       * [Back up data of PolarDB for MySQL](https://help.aliyun.com/document_detail/88172.html)
       *
       * @param request DescribeBackupDataListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupDataListResponse
       */
      Models::DescribeBackupDataListResponse describeBackupDataListWithOptions(const Models::DescribeBackupDataListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the backup data of a PolarDB for MySQL cluster.
       *
       * @description ### [](#)Supported database engine
       * PolarDB for MySQL
       * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID: 35585947) for customer consultation to request permissions.
       * ### [](#)References
       * [Back up data of PolarDB for MySQL](https://help.aliyun.com/document_detail/88172.html)
       *
       * @param request DescribeBackupDataListRequest
       * @return DescribeBackupDataListResponse
       */
      Models::DescribeBackupDataListResponse describeBackupDataList(const Models::DescribeBackupDataListRequest &request);

      /**
       * @summary Queries the information about the backup policy of a PolarDB for MySQL instance.
       *
       * @description ### [](#)Supported database engine
       * PolarDB for MySQL
       * >  The API operation is available only to specific customers. If you want to call this API operation, request permissions by joining the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation.
       * ### [](#)References
       * [Topics related to backup policies of PolarDB for MySQL instances](https://help.aliyun.com/document_detail/280422.html)
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the backup policy of a PolarDB for MySQL instance.
       *
       * @description ### [](#)Supported database engine
       * PolarDB for MySQL
       * >  The API operation is available only to specific customers. If you want to call this API operation, request permissions by joining the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation.
       * ### [](#)References
       * [Topics related to backup policies of PolarDB for MySQL instances](https://help.aliyun.com/document_detail/280422.html)
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary 查询存储介质访问详情
       *
       * @param request DescribeBakDataSourceStorageAccessInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBakDataSourceStorageAccessInfoResponse
       */
      Models::DescribeBakDataSourceStorageAccessInfoResponse describeBakDataSourceStorageAccessInfoWithOptions(const Models::DescribeBakDataSourceStorageAccessInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询存储介质访问详情
       *
       * @param request DescribeBakDataSourceStorageAccessInfoRequest
       * @return DescribeBakDataSourceStorageAccessInfoResponse
       */
      Models::DescribeBakDataSourceStorageAccessInfoResponse describeBakDataSourceStorageAccessInfo(const Models::DescribeBakDataSourceStorageAccessInfoRequest &request);

      /**
       * @summary 根据dbs实例id获取费用列表
       *
       * @param request DescribeCostInfoByDbsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostInfoByDbsInstanceResponse
       */
      Models::DescribeCostInfoByDbsInstanceResponse describeCostInfoByDbsInstanceWithOptions(const Models::DescribeCostInfoByDbsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据dbs实例id获取费用列表
       *
       * @param request DescribeCostInfoByDbsInstanceRequest
       * @return DescribeCostInfoByDbsInstanceResponse
       */
      Models::DescribeCostInfoByDbsInstanceResponse describeCostInfoByDbsInstance(const Models::DescribeCostInfoByDbsInstanceRequest &request);

      /**
       * @summary 查库表恢复可用的备份集
       *
       * @param request DescribeDBTablesRecoveryBackupSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBTablesRecoveryBackupSetResponse
       */
      Models::DescribeDBTablesRecoveryBackupSetResponse describeDBTablesRecoveryBackupSetWithOptions(const Models::DescribeDBTablesRecoveryBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查库表恢复可用的备份集
       *
       * @param request DescribeDBTablesRecoveryBackupSetRequest
       * @return DescribeDBTablesRecoveryBackupSetResponse
       */
      Models::DescribeDBTablesRecoveryBackupSetResponse describeDBTablesRecoveryBackupSet(const Models::DescribeDBTablesRecoveryBackupSetRequest &request);

      /**
       * @summary 查库表恢复状态
       *
       * @param request DescribeDBTablesRecoveryStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBTablesRecoveryStateResponse
       */
      Models::DescribeDBTablesRecoveryStateResponse describeDBTablesRecoveryStateWithOptions(const Models::DescribeDBTablesRecoveryStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查库表恢复状态
       *
       * @param request DescribeDBTablesRecoveryStateRequest
       * @return DescribeDBTablesRecoveryStateResponse
       */
      Models::DescribeDBTablesRecoveryStateResponse describeDBTablesRecoveryState(const Models::DescribeDBTablesRecoveryStateRequest &request);

      /**
       * @summary 查库表恢复可恢复的时间范围
       *
       * @param request DescribeDBTablesRecoveryTimeRangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBTablesRecoveryTimeRangeResponse
       */
      Models::DescribeDBTablesRecoveryTimeRangeResponse describeDBTablesRecoveryTimeRangeWithOptions(const Models::DescribeDBTablesRecoveryTimeRangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查库表恢复可恢复的时间范围
       *
       * @param request DescribeDBTablesRecoveryTimeRangeRequest
       * @return DescribeDBTablesRecoveryTimeRangeResponse
       */
      Models::DescribeDBTablesRecoveryTimeRangeResponse describeDBTablesRecoveryTimeRange(const Models::DescribeDBTablesRecoveryTimeRangeRequest &request);

      /**
       * @summary Queries the storage information of a downloaded backup set.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL that uses Enterprise SSDs (ESSDs)
       * *   RDS PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request DescribeDownloadBackupSetStorageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadBackupSetStorageInfoResponse
       */
      Models::DescribeDownloadBackupSetStorageInfoResponse describeDownloadBackupSetStorageInfoWithOptions(const Models::DescribeDownloadBackupSetStorageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage information of a downloaded backup set.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL that uses Enterprise SSDs (ESSDs)
       * *   RDS PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request DescribeDownloadBackupSetStorageInfoRequest
       * @return DescribeDownloadBackupSetStorageInfoResponse
       */
      Models::DescribeDownloadBackupSetStorageInfoResponse describeDownloadBackupSetStorageInfo(const Models::DescribeDownloadBackupSetStorageInfoRequest &request);

      /**
       * @summary Queries whether an instance supports the advanced download feature.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL
       * *   ApsaraDB RDS for PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * You can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request DescribeDownloadSupportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadSupportResponse
       */
      Models::DescribeDownloadSupportResponse describeDownloadSupportWithOptions(const Models::DescribeDownloadSupportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an instance supports the advanced download feature.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL
       * *   ApsaraDB RDS for PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * You can create an advanced download task by point in time or backup set. You can set the download destination to a URL or directly upload the downloaded backup set to your Object Storage Service (OSS) bucket to facilitate data analysis and offline archiving.
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request DescribeDownloadSupportRequest
       * @return DescribeDownloadSupportResponse
       */
      Models::DescribeDownloadSupportResponse describeDownloadSupport(const Models::DescribeDownloadSupportRequest &request);

      /**
       * @summary Queries the advanced download tasks for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL
       * *   ApsaraDB RDS for PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request DescribeDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadTaskResponse
       */
      Models::DescribeDownloadTaskResponse describeDownloadTaskWithOptions(const Models::DescribeDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the advanced download tasks for an ApsaraDB RDS for MySQL instance, an ApsaraDB RDS for PostgreSQL instance, or a PolarDB for MySQL cluster.
       *
       * @description ### [](#)Supported database engines
       * *   ApsaraDB RDS for MySQL
       * *   ApsaraDB RDS for PostgreSQL
       * *   PolarDB for MySQL
       * ### [](#)References
       * *   [Download the backup files of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/98819.html)
       * *   [Download the backup files of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96774.html)
       * *   [Download the backup files of a PolarDB for MySQL cluster](https://help.aliyun.com/document_detail/2627635.html)
       *
       * @param request DescribeDownloadTaskRequest
       * @return DescribeDownloadTaskResponse
       */
      Models::DescribeDownloadTaskResponse describeDownloadTask(const Models::DescribeDownloadTaskRequest &request);

      /**
       * @summary Queries the snapshots of an instance.
       *
       * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DescribeSandboxBackupSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSandboxBackupSetsResponse
       */
      Models::DescribeSandboxBackupSetsResponse describeSandboxBackupSetsWithOptions(const Models::DescribeSandboxBackupSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshots of an instance.
       *
       * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only for the Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DescribeSandboxBackupSetsRequest
       * @return DescribeSandboxBackupSetsResponse
       */
      Models::DescribeSandboxBackupSetsResponse describeSandboxBackupSets(const Models::DescribeSandboxBackupSetsRequest &request);

      /**
       * @summary Queries sandbox instances that are created within an account.
       *
       * @description This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DescribeSandboxInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSandboxInstancesResponse
       */
      Models::DescribeSandboxInstancesResponse describeSandboxInstancesWithOptions(const Models::DescribeSandboxInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries sandbox instances that are created within an account.
       *
       * @description This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DescribeSandboxInstancesRequest
       * @return DescribeSandboxInstancesResponse
       */
      Models::DescribeSandboxInstancesResponse describeSandboxInstances(const Models::DescribeSandboxInstancesRequest &request);

      /**
       * @summary Queries the recoverable time range of a sandbox instance.
       *
       * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DescribeSandboxRecoveryTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSandboxRecoveryTimeResponse
       */
      Models::DescribeSandboxRecoveryTimeResponse describeSandboxRecoveryTimeWithOptions(const Models::DescribeSandboxRecoveryTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recoverable time range of a sandbox instance.
       *
       * @description Before you call this operation, you must enable the sandbox feature for the database instance. For more information, see [Use the emergency recovery feature of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/203154.html) or [Create a sandbox instance for emergency disaster recovery of a self-managed MySQL database](https://help.aliyun.com/document_detail/185577.html). This operation is available only in Database Backup (DBS) API of the 2021-01-01 version.
       *
       * @param request DescribeSandboxRecoveryTimeRequest
       * @return DescribeSandboxRecoveryTimeResponse
       */
      Models::DescribeSandboxRecoveryTimeResponse describeSandboxRecoveryTime(const Models::DescribeSandboxRecoveryTimeRequest &request);

      /**
       * @summary Modifies the backup policy of a PolarDB instance.
       *
       * @description ### [](#)Supported database engines
       * PolarDB for MySQL
       * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
       *
       * @param tmpReq ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup policy of a PolarDB instance.
       *
       * @description ### [](#)Supported database engines
       * PolarDB for MySQL
       * >  This API operation is available only to specific customers. If you want to call this API operation, join the Database Backup (DBS) DingTalk group (ID 35585947) for customer consultation to request permissions.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary 修改库表恢复状态
       *
       * @param request ModifyDBTablesRecoveryStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBTablesRecoveryStateResponse
       */
      Models::ModifyDBTablesRecoveryStateResponse modifyDBTablesRecoveryStateWithOptions(const Models::ModifyDBTablesRecoveryStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改库表恢复状态
       *
       * @param request ModifyDBTablesRecoveryStateRequest
       * @return ModifyDBTablesRecoveryStateResponse
       */
      Models::ModifyDBTablesRecoveryStateResponse modifyDBTablesRecoveryState(const Models::ModifyDBTablesRecoveryStateRequest &request);

      /**
       * @summary 重试高级下载任务
       *
       * @param request RetryDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryDownloadTaskResponse
       */
      Models::RetryDownloadTaskResponse retryDownloadTaskWithOptions(const Models::RetryDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重试高级下载任务
       *
       * @param request RetryDownloadTaskRequest
       * @return RetryDownloadTaskResponse
       */
      Models::RetryDownloadTaskResponse retryDownloadTask(const Models::RetryDownloadTaskRequest &request);

      /**
       * @summary 查询是否支持库表恢复
       *
       * @param request SupportDBTableRecoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SupportDBTableRecoveryResponse
       */
      Models::SupportDBTableRecoveryResponse supportDBTableRecoveryWithOptions(const Models::SupportDBTableRecoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询是否支持库表恢复
       *
       * @param request SupportDBTableRecoveryRequest
       * @return SupportDBTableRecoveryResponse
       */
      Models::SupportDBTableRecoveryResponse supportDBTableRecovery(const Models::SupportDBTableRecoveryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
