// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OSSMFD20231017_HPP_
#define ALIBABACLOUD_OSSMFD20231017_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OssMfd20231017Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OssMfd20231017.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssMfd20231017
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 检查服务是否开通
       *
       * @param request CheckMfdServiceOpenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMfdServiceOpenResponse
       */
      Models::CheckMfdServiceOpenResponse checkMfdServiceOpenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查服务是否开通
       *
       * @return CheckMfdServiceOpenResponse
       */
      Models::CheckMfdServiceOpenResponse checkMfdServiceOpen();

      /**
       * @summary 创建bucket扫描任务
       *
       * @param request CreateOssBucketScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssBucketScanTaskResponse
       */
      Models::CreateOssBucketScanTaskResponse createOssBucketScanTaskWithOptions(const Models::CreateOssBucketScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建bucket扫描任务
       *
       * @param request CreateOssBucketScanTaskRequest
       * @return CreateOssBucketScanTaskResponse
       */
      Models::CreateOssBucketScanTaskResponse createOssBucketScanTask(const Models::CreateOssBucketScanTaskRequest &request);

      /**
       * @summary 创建Bucket检测策略配置
       *
       * @param request CreateOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssScanConfigResponse
       */
      Models::CreateOssScanConfigResponse createOssScanConfigWithOptions(const Models::CreateOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Bucket检测策略配置
       *
       * @param request CreateOssScanConfigRequest
       * @return CreateOssScanConfigResponse
       */
      Models::CreateOssScanConfigResponse createOssScanConfig(const Models::CreateOssScanConfigRequest &request);

      /**
       * @summary 查询导出信息
       *
       * @param request DescribeExportInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportInfoResponse
       */
      Models::DescribeExportInfoResponse describeExportInfoWithOptions(const Models::DescribeExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询导出信息
       *
       * @param request DescribeExportInfoRequest
       * @return DescribeExportInfoResponse
       */
      Models::DescribeExportInfoResponse describeExportInfo(const Models::DescribeExportInfoRequest &request);

      /**
       * @summary 查询您是否已创建云安全中心服务关联角色
       *
       * @param request DescribeServiceLinkedRoleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatusWithOptions(const Models::DescribeServiceLinkedRoleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询您是否已创建云安全中心服务关联角色
       *
       * @param request DescribeServiceLinkedRoleStatusRequest
       * @return DescribeServiceLinkedRoleStatusResponse
       */
      Models::DescribeServiceLinkedRoleStatusResponse describeServiceLinkedRoleStatus(const Models::DescribeServiceLinkedRoleStatusRequest &request);

      /**
       * @summary 导出恶意文件列表
       *
       * @param request ExportRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportRecordResponse
       */
      Models::ExportRecordResponse exportRecordWithOptions(const Models::ExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出恶意文件列表
       *
       * @param request ExportRecordRequest
       * @return ExportRecordResponse
       */
      Models::ExportRecordResponse exportRecord(const Models::ExportRecordRequest &request);

      /**
       * @summary 获取沙箱检测报告。
       *
       * @param request GetFileDetectReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileDetectReportResponse
       */
      Models::GetFileDetectReportResponse getFileDetectReportWithOptions(const Models::GetFileDetectReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取沙箱检测报告。
       *
       * @param request GetFileDetectReportRequest
       * @return GetFileDetectReportResponse
       */
      Models::GetFileDetectReportResponse getFileDetectReport(const Models::GetFileDetectReportRequest &request);

      /**
       * @summary 获取bucket检测统计信息
       *
       * @param request GetOssBucketScanStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssBucketScanStatisticResponse
       */
      Models::GetOssBucketScanStatisticResponse getOssBucketScanStatisticWithOptions(const Models::GetOssBucketScanStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取bucket检测统计信息
       *
       * @param request GetOssBucketScanStatisticRequest
       * @return GetOssBucketScanStatisticResponse
       */
      Models::GetOssBucketScanStatisticResponse getOssBucketScanStatistic(const Models::GetOssBucketScanStatisticRequest &request);

      /**
       * @summary 获取Bucket检测配置
       *
       * @param request GetOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssScanConfigResponse
       */
      Models::GetOssScanConfigResponse getOssScanConfigWithOptions(const Models::GetOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Bucket检测配置
       *
       * @param request GetOssScanConfigRequest
       * @return GetOssScanConfigResponse
       */
      Models::GetOssScanConfigResponse getOssScanConfig(const Models::GetOssScanConfigRequest &request);

      /**
       * @summary 获取文件检测告警列表
       *
       * @param request ListObjectScanEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListObjectScanEventResponse
       */
      Models::ListObjectScanEventResponse listObjectScanEventWithOptions(const Models::ListObjectScanEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件检测告警列表
       *
       * @param request ListObjectScanEventRequest
       * @return ListObjectScanEventResponse
       */
      Models::ListObjectScanEventResponse listObjectScanEvent(const Models::ListObjectScanEventRequest &request);

      /**
       * @summary 列举用户所有的bucket
       *
       * @param request ListOssBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOssBucketResponse
       */
      Models::ListOssBucketResponse listOssBucketWithOptions(const Models::ListOssBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举用户所有的bucket
       *
       * @param request ListOssBucketRequest
       * @return ListOssBucketResponse
       */
      Models::ListOssBucketResponse listOssBucket(const Models::ListOssBucketRequest &request);

      /**
       * @summary 获取bucket详情
       *
       * @param request ListOssBucketScanInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOssBucketScanInfoResponse
       */
      Models::ListOssBucketScanInfoResponse listOssBucketScanInfoWithOptions(const Models::ListOssBucketScanInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取bucket详情
       *
       * @param request ListOssBucketScanInfoRequest
       * @return ListOssBucketScanInfoResponse
       */
      Models::ListOssBucketScanInfoResponse listOssBucketScanInfo(const Models::ListOssBucketScanInfoRequest &request);

      /**
       * @summary 获取支持的文件后缀
       *
       * @param request ListSupportObjectSuffixRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportObjectSuffixResponse
       */
      Models::ListSupportObjectSuffixResponse listSupportObjectSuffixWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取支持的文件后缀
       *
       * @return ListSupportObjectSuffixResponse
       */
      Models::ListSupportObjectSuffixResponse listSupportObjectSuffix();

      /**
       * @summary 操作oss检测任务
       *
       * @param request OperateBucketScanTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBucketScanTaskResponse
       */
      Models::OperateBucketScanTaskResponse operateBucketScanTaskWithOptions(const Models::OperateBucketScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 操作oss检测任务
       *
       * @param request OperateBucketScanTaskRequest
       * @return OperateBucketScanTaskResponse
       */
      Models::OperateBucketScanTaskResponse operateBucketScanTask(const Models::OperateBucketScanTaskRequest &request);

      /**
       * @summary 修改Bucket检测配置
       *
       * @param request UpdateOssScanConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOssScanConfigResponse
       */
      Models::UpdateOssScanConfigResponse updateOssScanConfigWithOptions(const Models::UpdateOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Bucket检测配置
       *
       * @param request UpdateOssScanConfigRequest
       * @return UpdateOssScanConfigResponse
       */
      Models::UpdateOssScanConfigResponse updateOssScanConfig(const Models::UpdateOssScanConfigRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OssMfd20231017
#endif
