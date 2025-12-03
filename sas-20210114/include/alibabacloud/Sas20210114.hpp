// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAS20210114_HPP_
#define ALIBABACLOUD_SAS20210114_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sas20210114Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sas20210114.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 新增或者修改用户大屏设置
       *
       * @param request CreateScreenSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScreenSettingResponse
       */
      Models::CreateScreenSettingResponse createScreenSettingWithOptions(const Models::CreateScreenSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增或者修改用户大屏设置
       *
       * @param request CreateScreenSettingRequest
       * @return CreateScreenSettingResponse
       */
      Models::CreateScreenSettingResponse createScreenSetting(const Models::CreateScreenSettingRequest &request);

      /**
       * @summary 删除大屏设置
       *
       * @param request DeleteScreenSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScreenSettingResponse
       */
      Models::DeleteScreenSettingResponse deleteScreenSettingWithOptions(const Models::DeleteScreenSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除大屏设置
       *
       * @param request DeleteScreenSettingRequest
       * @return DeleteScreenSettingResponse
       */
      Models::DeleteScreenSettingResponse deleteScreenSetting(const Models::DeleteScreenSettingRequest &request);

      /**
       * @summary 查询安全大屏告警事件
       *
       * @param request DescribeScreenAlarmEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenAlarmEventListResponse
       */
      Models::DescribeScreenAlarmEventListResponse describeScreenAlarmEventListWithOptions(const Models::DescribeScreenAlarmEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全大屏告警事件
       *
       * @param request DescribeScreenAlarmEventListRequest
       * @return DescribeScreenAlarmEventListResponse
       */
      Models::DescribeScreenAlarmEventListResponse describeScreenAlarmEventList(const Models::DescribeScreenAlarmEventListRequest &request);

      /**
       * @summary 查询大屏攻击防御事件
       *
       * @param request DescribeScreenAttackAnalysisDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenAttackAnalysisDataResponse
       */
      Models::DescribeScreenAttackAnalysisDataResponse describeScreenAttackAnalysisDataWithOptions(const Models::DescribeScreenAttackAnalysisDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询大屏攻击防御事件
       *
       * @param request DescribeScreenAttackAnalysisDataRequest
       * @return DescribeScreenAttackAnalysisDataResponse
       */
      Models::DescribeScreenAttackAnalysisDataResponse describeScreenAttackAnalysisData(const Models::DescribeScreenAttackAnalysisDataRequest &request);

      /**
       * @summary 查询云产品基线问题
       *
       * @param request DescribeScreenCloudHcRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenCloudHcRiskResponse
       */
      Models::DescribeScreenCloudHcRiskResponse describeScreenCloudHcRiskWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云产品基线问题
       *
       * @return DescribeScreenCloudHcRiskResponse
       */
      Models::DescribeScreenCloudHcRiskResponse describeScreenCloudHcRisk();

      /**
       * @summary 获取大屏可展示数据列表
       *
       * @param request DescribeScreenDataMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenDataMapResponse
       */
      Models::DescribeScreenDataMapResponse describeScreenDataMapWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取大屏可展示数据列表
       *
       * @return DescribeScreenDataMapResponse
       */
      Models::DescribeScreenDataMapResponse describeScreenDataMap();

      /**
       * @summary 查询云产品漏洞风险
       *
       * @param request DescribeScreenEmerRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenEmerRiskResponse
       */
      Models::DescribeScreenEmerRiskResponse describeScreenEmerRiskWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云产品漏洞风险
       *
       * @return DescribeScreenEmerRiskResponse
       */
      Models::DescribeScreenEmerRiskResponse describeScreenEmerRisk();

      /**
       * @summary 查询大屏主机统计数据
       *
       * @param request DescribeScreenHostStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenHostStatisticsResponse
       */
      Models::DescribeScreenHostStatisticsResponse describeScreenHostStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询大屏主机统计数据
       *
       * @return DescribeScreenHostStatisticsResponse
       */
      Models::DescribeScreenHostStatisticsResponse describeScreenHostStatistics();

      /**
       * @summary 查看运营信息
       *
       * @param request DescribeScreenOperateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenOperateInfoResponse
       */
      Models::DescribeScreenOperateInfoResponse describeScreenOperateInfoWithOptions(const Models::DescribeScreenOperateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看运营信息
       *
       * @param request DescribeScreenOperateInfoRequest
       * @return DescribeScreenOperateInfoResponse
       */
      Models::DescribeScreenOperateInfoResponse describeScreenOperateInfo(const Models::DescribeScreenOperateInfoRequest &request);

      /**
       * @summary 查询大屏上传信息
       *
       * @param request DescribeScreenOssUploadInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenOssUploadInfoResponse
       */
      Models::DescribeScreenOssUploadInfoResponse describeScreenOssUploadInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询大屏上传信息
       *
       * @return DescribeScreenOssUploadInfoResponse
       */
      Models::DescribeScreenOssUploadInfoResponse describeScreenOssUploadInfo();

      /**
       * @summary 查询安全大屏分数趋势
       *
       * @param request DescribeScreenScoreThreadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenScoreThreadResponse
       */
      Models::DescribeScreenScoreThreadResponse describeScreenScoreThreadWithOptions(const Models::DescribeScreenScoreThreadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全大屏分数趋势
       *
       * @param request DescribeScreenScoreThreadRequest
       * @return DescribeScreenScoreThreadResponse
       */
      Models::DescribeScreenScoreThreadResponse describeScreenScoreThread(const Models::DescribeScreenScoreThreadRequest &request);

      /**
       * @summary 查询已处理的风险
       *
       * @param request DescribeScreenSecurityStatInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenSecurityStatInfoResponse
       */
      Models::DescribeScreenSecurityStatInfoResponse describeScreenSecurityStatInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询已处理的风险
       *
       * @return DescribeScreenSecurityStatInfoResponse
       */
      Models::DescribeScreenSecurityStatInfoResponse describeScreenSecurityStatInfo();

      /**
       * @summary 查询大屏配置
       *
       * @param request DescribeScreenSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenSettingResponse
       */
      Models::DescribeScreenSettingResponse describeScreenSettingWithOptions(const Models::DescribeScreenSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询大屏配置
       *
       * @param request DescribeScreenSettingRequest
       * @return DescribeScreenSettingResponse
       */
      Models::DescribeScreenSettingResponse describeScreenSetting(const Models::DescribeScreenSettingRequest &request);

      /**
       * @summary 查询大屏统计信息
       *
       * @param request DescribeScreenSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenSummaryInfoResponse
       */
      Models::DescribeScreenSummaryInfoResponse describeScreenSummaryInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询大屏统计信息
       *
       * @return DescribeScreenSummaryInfoResponse
       */
      Models::DescribeScreenSummaryInfoResponse describeScreenSummaryInfo();

      /**
       * @summary 获取大屏幕设置全部列表
       *
       * @param request DescribeScreenTitlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenTitlesResponse
       */
      Models::DescribeScreenTitlesResponse describeScreenTitlesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取大屏幕设置全部列表
       *
       * @return DescribeScreenTitlesResponse
       */
      Models::DescribeScreenTitlesResponse describeScreenTitles();

      /**
       * @summary 查询上传之后的图片显示地址
       *
       * @param request DescribeScreenUploadPictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenUploadPictureResponse
       */
      Models::DescribeScreenUploadPictureResponse describeScreenUploadPictureWithOptions(const Models::DescribeScreenUploadPictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询上传之后的图片显示地址
       *
       * @param request DescribeScreenUploadPictureRequest
       * @return DescribeScreenUploadPictureResponse
       */
      Models::DescribeScreenUploadPictureResponse describeScreenUploadPicture(const Models::DescribeScreenUploadPictureRequest &request);

      /**
       * @summary 查询安全大屏版本配置
       *
       * @param request DescribeScreenVersionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScreenVersionConfigResponse
       */
      Models::DescribeScreenVersionConfigResponse describeScreenVersionConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询安全大屏版本配置
       *
       * @return DescribeScreenVersionConfigResponse
       */
      Models::DescribeScreenVersionConfigResponse describeScreenVersionConfig();

      /**
       * @summary 获取文件检测结果。
       *
       * @param request GetFileDetectResultInnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileDetectResultInnerResponse
       */
      Models::GetFileDetectResultInnerResponse getFileDetectResultInnerWithOptions(const Models::GetFileDetectResultInnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文件检测结果。
       *
       * @param request GetFileDetectResultInnerRequest
       * @return GetFileDetectResultInnerResponse
       */
      Models::GetFileDetectResultInnerResponse getFileDetectResultInner(const Models::GetFileDetectResultInnerRequest &request);

      /**
       * @summary 首页配置情况汇总接口
       *
       * @param tmpReq ListGlobalUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGlobalUserConfigResponse
       */
      Models::ListGlobalUserConfigResponse listGlobalUserConfigWithOptions(const Models::ListGlobalUserConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 首页配置情况汇总接口
       *
       * @param request ListGlobalUserConfigRequest
       * @return ListGlobalUserConfigResponse
       */
      Models::ListGlobalUserConfigResponse listGlobalUserConfig(const Models::ListGlobalUserConfigRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
