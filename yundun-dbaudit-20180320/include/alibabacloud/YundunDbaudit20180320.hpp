// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YUNDUNDBAUDIT20180320_HPP_
#define ALIBABACLOUD_YUNDUNDBAUDIT20180320_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/YundunDbaudit20180320Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/YundunDbaudit20180320.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 配置实例网络
       *
       * @param request ConfigInstanceNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigInstanceNetworkResponse
       */
      Models::ConfigInstanceNetworkResponse configInstanceNetworkWithOptions(const Models::ConfigInstanceNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置实例网络
       *
       * @param request ConfigInstanceNetworkRequest
       * @return ConfigInstanceNetworkResponse
       */
      Models::ConfigInstanceNetworkResponse configInstanceNetwork(const Models::ConfigInstanceNetworkRequest &request);

      /**
       * @summary 获取实例属性
       *
       * @param request DescribeInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(const Models::DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例属性
       *
       * @param request DescribeInstanceAttributeRequest
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttribute(const Models::DescribeInstanceAttributeRequest &request);

      /**
       * @summary 获取实例列表
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例列表
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary 获取登录凭据
       *
       * @param request DescribeLoginTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoginTicketResponse
       */
      Models::DescribeLoginTicketResponse describeLoginTicketWithOptions(const Models::DescribeLoginTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取登录凭据
       *
       * @param request DescribeLoginTicketRequest
       * @return DescribeLoginTicketResponse
       */
      Models::DescribeLoginTicketResponse describeLoginTicket(const Models::DescribeLoginTicketRequest &request);

      /**
       * @summary 获取同步信息
       *
       * @param request DescribeSyncInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncInfoResponse
       */
      Models::DescribeSyncInfoResponse describeSyncInfoWithOptions(const Models::DescribeSyncInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取同步信息
       *
       * @param request DescribeSyncInfoRequest
       * @return DescribeSyncInfoResponse
       */
      Models::DescribeSyncInfoResponse describeSyncInfo(const Models::DescribeSyncInfoRequest &request);

      /**
       * @summary 获取Agent列表
       *
       * @param request GetAgentListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentListResponse
       */
      Models::GetAgentListResponse getAgentListWithOptions(const Models::GetAgentListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Agent列表
       *
       * @param request GetAgentListRequest
       * @return GetAgentListResponse
       */
      Models::GetAgentListResponse getAgentList(const Models::GetAgentListRequest &request);

      /**
       * @summary 查询审计统计数
       *
       * @param request GetAuditCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditCountResponse
       */
      Models::GetAuditCountResponse getAuditCountWithOptions(const Models::GetAuditCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审计统计数
       *
       * @param request GetAuditCountRequest
       * @return GetAuditCountResponse
       */
      Models::GetAuditCountResponse getAuditCount(const Models::GetAuditCountRequest &request);

      /**
       * @summary 按时间分布查询审计统计数
       *
       * @param request GetAuditCountDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditCountDistributionResponse
       */
      Models::GetAuditCountDistributionResponse getAuditCountDistributionWithOptions(const Models::GetAuditCountDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按时间分布查询审计统计数
       *
       * @param request GetAuditCountDistributionRequest
       * @return GetAuditCountDistributionResponse
       */
      Models::GetAuditCountDistributionResponse getAuditCountDistribution(const Models::GetAuditCountDistributionRequest &request);

      /**
       * @summary 按数据源分组查询审计统计数
       *
       * @param request GetDBAuditCountListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBAuditCountListResponse
       */
      Models::GetDBAuditCountListResponse getDBAuditCountListWithOptions(const Models::GetDBAuditCountListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按数据源分组查询审计统计数
       *
       * @param request GetDBAuditCountListRequest
       * @return GetDBAuditCountListResponse
       */
      Models::GetDBAuditCountListResponse getDBAuditCountList(const Models::GetDBAuditCountListRequest &request);

      /**
       * @summary 获取单条语句详细信息
       *
       * @param request GetLogDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogDetailResponse
       */
      Models::GetLogDetailResponse getLogDetailWithOptions(const Models::GetLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单条语句详细信息
       *
       * @param request GetLogDetailRequest
       * @return GetLogDetailResponse
       */
      Models::GetLogDetailResponse getLogDetail(const Models::GetLogDetailRequest &request);

      /**
       * @summary 获取语句详情列表
       *
       * @param request GetLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogListResponse
       */
      Models::GetLogListResponse getLogListWithOptions(const Models::GetLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语句详情列表
       *
       * @param request GetLogListRequest
       * @return GetLogListResponse
       */
      Models::GetLogListResponse getLogList(const Models::GetLogListRequest &request);

      /**
       * @summary 获取语句类型分布信息
       *
       * @param request GetLogTypeDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogTypeDistributionResponse
       */
      Models::GetLogTypeDistributionResponse getLogTypeDistributionWithOptions(const Models::GetLogTypeDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语句类型分布信息
       *
       * @param request GetLogTypeDistributionRequest
       * @return GetLogTypeDistributionResponse
       */
      Models::GetLogTypeDistributionResponse getLogTypeDistribution(const Models::GetLogTypeDistributionRequest &request);

      /**
       * @summary 获取风险级别分布情况
       *
       * @param request GetRiskLevelDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRiskLevelDistributionResponse
       */
      Models::GetRiskLevelDistributionResponse getRiskLevelDistributionWithOptions(const Models::GetRiskLevelDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取风险级别分布情况
       *
       * @param request GetRiskLevelDistributionRequest
       * @return GetRiskLevelDistributionResponse
       */
      Models::GetRiskLevelDistributionResponse getRiskLevelDistribution(const Models::GetRiskLevelDistributionRequest &request);

      /**
       * @summary 获取会话分布情况
       *
       * @param request GetSessionDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionDistributionResponse
       */
      Models::GetSessionDistributionResponse getSessionDistributionWithOptions(const Models::GetSessionDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会话分布情况
       *
       * @param request GetSessionDistributionRequest
       * @return GetSessionDistributionResponse
       */
      Models::GetSessionDistributionResponse getSessionDistribution(const Models::GetSessionDistributionRequest &request);

      /**
       * @summary 获取指定日期会话列表
       *
       * @param request GetSessionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionListResponse
       */
      Models::GetSessionListResponse getSessionListWithOptions(const Models::GetSessionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定日期会话列表
       *
       * @param request GetSessionListRequest
       * @return GetSessionListResponse
       */
      Models::GetSessionListResponse getSessionList(const Models::GetSessionListRequest &request);

      /**
       * @summary 获取数据源审计属性
       *
       * @param request ListDataSourceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceAttributeResponse
       */
      Models::ListDataSourceAttributeResponse listDataSourceAttributeWithOptions(const Models::ListDataSourceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源审计属性
       *
       * @param request ListDataSourceAttributeRequest
       * @return ListDataSourceAttributeResponse
       */
      Models::ListDataSourceAttributeResponse listDataSourceAttribute(const Models::ListDataSourceAttributeRequest &request);

      /**
       * @summary 查询数据源列表
       *
       * @param request ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据源列表
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary 查询系统告警
       *
       * @param request ListSystemAlarmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemAlarmsResponse
       */
      Models::ListSystemAlarmsResponse listSystemAlarmsWithOptions(const Models::ListSystemAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询系统告警
       *
       * @param request ListSystemAlarmsRequest
       * @return ListSystemAlarmsResponse
       */
      Models::ListSystemAlarmsResponse listSystemAlarms(const Models::ListSystemAlarmsRequest &request);

      /**
       * @summary 修改指定实例的信息
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改指定实例的信息
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary 启动审计实例
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动审计实例
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
