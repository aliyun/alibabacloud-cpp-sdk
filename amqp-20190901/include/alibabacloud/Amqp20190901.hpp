// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AMQP20190901_HPP_
#define ALIBABACLOUD_AMQP20190901_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Amqp20190901Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Amqp20190901.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 路由绑定
       *
       * @param request BindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindResponse
       */
      Models::BindResponse bindWithOptions(const Models::BindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 路由绑定
       *
       * @param request BindRequest
       * @return BindResponse
       */
      Models::BindResponse bind(const Models::BindRequest &request);

      /**
       * @summary 删除用户配置
       *
       * @param request CancelUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelUserSettingResponse
       */
      Models::CancelUserSettingResponse cancelUserSettingWithOptions(const Models::CancelUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户配置
       *
       * @param request CancelUserSettingRequest
       * @return CancelUserSettingResponse
       */
      Models::CancelUserSettingResponse cancelUserSetting(const Models::CancelUserSettingRequest &request);

      /**
       * @summary 新增用户配置
       *
       * @param request ConfigureUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureUserSettingResponse
       */
      Models::ConfigureUserSettingResponse configureUserSettingWithOptions(const Models::ConfigureUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增用户配置
       *
       * @param request ConfigureUserSettingRequest
       * @return ConfigureUserSettingResponse
       */
      Models::ConfigureUserSettingResponse configureUserSetting(const Models::ConfigureUserSettingRequest &request);

      /**
       * @summary 清除售后视角状态
       *
       * @param request ConsoleClearPretendStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConsoleClearPretendStatusResponse
       */
      Models::ConsoleClearPretendStatusResponse consoleClearPretendStatusWithOptions(const Models::ConsoleClearPretendStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清除售后视角状态
       *
       * @param request ConsoleClearPretendStatusRequest
       * @return ConsoleClearPretendStatusResponse
       */
      Models::ConsoleClearPretendStatusResponse consoleClearPretendStatus(const Models::ConsoleClearPretendStatusRequest &request);

      /**
       * @summary 保存售后视角状态
       *
       * @param request ConsoleSavePretendStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConsoleSavePretendStatusResponse
       */
      Models::ConsoleSavePretendStatusResponse consoleSavePretendStatusWithOptions(const Models::ConsoleSavePretendStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存售后视角状态
       *
       * @param request ConsoleSavePretendStatusRequest
       * @return ConsoleSavePretendStatusResponse
       */
      Models::ConsoleSavePretendStatusResponse consoleSavePretendStatus(const Models::ConsoleSavePretendStatusRequest &request);

      /**
       * @summary 创建云监控相关角色
       *
       * @param request CreateCloudMonitorSLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudMonitorSLRResponse
       */
      Models::CreateCloudMonitorSLRResponse createCloudMonitorSLRWithOptions(const Models::CreateCloudMonitorSLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建云监控相关角色
       *
       * @param request CreateCloudMonitorSLRRequest
       * @return CreateCloudMonitorSLRResponse
       */
      Models::CreateCloudMonitorSLRResponse createCloudMonitorSLR(const Models::CreateCloudMonitorSLRRequest &request);

      /**
       * @summary 创建Exchange
       *
       * @param request CreateExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExchangeResponse
       */
      Models::CreateExchangeResponse createExchangeWithOptions(const Models::CreateExchangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Exchange
       *
       * @param request CreateExchangeRequest
       * @return CreateExchangeResponse
       */
      Models::CreateExchangeResponse createExchange(const Models::CreateExchangeRequest &request);

      /**
       * @summary 创建日志相关角色
       *
       * @param request CreateLogDeliverySLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogDeliverySLRResponse
       */
      Models::CreateLogDeliverySLRResponse createLogDeliverySLRWithOptions(const Models::CreateLogDeliverySLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建日志相关角色
       *
       * @param request CreateLogDeliverySLRRequest
       * @return CreateLogDeliverySLRResponse
       */
      Models::CreateLogDeliverySLRResponse createLogDeliverySLR(const Models::CreateLogDeliverySLRRequest &request);

      /**
       * @summary 创建队列
       *
       * @param request CreateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueueWithOptions(const Models::CreateQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建队列
       *
       * @param request CreateQueueRequest
       * @return CreateQueueResponse
       */
      Models::CreateQueueResponse createQueue(const Models::CreateQueueRequest &request);

      /**
       * @summary 创建Vhost
       *
       * @param request CreateVhostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVhostResponse
       */
      Models::CreateVhostResponse createVhostWithOptions(const Models::CreateVhostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Vhost
       *
       * @param request CreateVhostRequest
       * @return CreateVhostResponse
       */
      Models::CreateVhostResponse createVhost(const Models::CreateVhostRequest &request);

      /**
       * @summary prometheus Dashboard 检查相关服务开通状态
       *
       * @param request DashboardCheckServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DashboardCheckServiceStatusResponse
       */
      Models::DashboardCheckServiceStatusResponse dashboardCheckServiceStatusWithOptions(const Models::DashboardCheckServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary prometheus Dashboard 检查相关服务开通状态
       *
       * @param request DashboardCheckServiceStatusRequest
       * @return DashboardCheckServiceStatusResponse
       */
      Models::DashboardCheckServiceStatusResponse dashboardCheckServiceStatus(const Models::DashboardCheckServiceStatusRequest &request);

      /**
       * @summary 获取 arms grafana 大盘 http url
       *
       * @param request DashboardListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DashboardListResponse
       */
      Models::DashboardListResponse dashboardListWithOptions(const Models::DashboardListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 arms grafana 大盘 http url
       *
       * @param request DashboardListRequest
       * @return DashboardListResponse
       */
      Models::DashboardListResponse dashboardList(const Models::DashboardListRequest &request);

      /**
       * @summary 删除Exchange
       *
       * @param tmpReq DeleteExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExchangeResponse
       */
      Models::DeleteExchangeResponse deleteExchangeWithOptions(const Models::DeleteExchangeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Exchange
       *
       * @param request DeleteExchangeRequest
       * @return DeleteExchangeResponse
       */
      Models::DeleteExchangeResponse deleteExchange(const Models::DeleteExchangeRequest &request);

      /**
       * @summary 删除实例
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实例
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary 删除队列
       *
       * @param tmpReq DeleteQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQueueResponse
       */
      Models::DeleteQueueResponse deleteQueueWithOptions(const Models::DeleteQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除队列
       *
       * @param request DeleteQueueRequest
       * @return DeleteQueueResponse
       */
      Models::DeleteQueueResponse deleteQueue(const Models::DeleteQueueRequest &request);

      /**
       * @summary 删除静态账户
       *
       * @param request DeleteStaticAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStaticAccountResponse
       */
      Models::DeleteStaticAccountResponse deleteStaticAccountWithOptions(const Models::DeleteStaticAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除静态账户
       *
       * @param request DeleteStaticAccountRequest
       * @return DeleteStaticAccountResponse
       */
      Models::DeleteStaticAccountResponse deleteStaticAccount(const Models::DeleteStaticAccountRequest &request);

      /**
       * @summary 删除Vhost
       *
       * @param tmpReq DeleteVhostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVhostResponse
       */
      Models::DeleteVhostResponse deleteVhostWithOptions(const Models::DeleteVhostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Vhost
       *
       * @param request DeleteVhostRequest
       * @return DeleteVhostResponse
       */
      Models::DeleteVhostResponse deleteVhost(const Models::DeleteVhostRequest &request);

      /**
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 导出元数据
       *
       * @param request ExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportResponse
       */
      Models::ExportResponse exportWithOptions(const Models::ExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出元数据
       *
       * @param request ExportRequest
       * @return ExportResponse
       */
      Models::ExportResponse export(const Models::ExportRequest &request);

      /**
       * @summary 更新静态账户
       *
       * @param request FetchStaticAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchStaticAccountResponse
       */
      Models::FetchStaticAccountResponse fetchStaticAccountWithOptions(const Models::FetchStaticAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新静态账户
       *
       * @param request FetchStaticAccountRequest
       * @return FetchStaticAccountResponse
       */
      Models::FetchStaticAccountResponse fetchStaticAccount(const Models::FetchStaticAccountRequest &request);

      /**
       * @summary 根据耗时查询ack信息
       *
       * @param request GetAckInfoByIntervalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAckInfoByIntervalResponse
       */
      Models::GetAckInfoByIntervalResponse getAckInfoByIntervalWithOptions(const Models::GetAckInfoByIntervalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据耗时查询ack信息
       *
       * @param request GetAckInfoByIntervalRequest
       * @return GetAckInfoByIntervalResponse
       */
      Models::GetAckInfoByIntervalResponse getAckInfoByInterval(const Models::GetAckInfoByIntervalRequest &request);

      /**
       * @summary 获取一个PushMessage（PullMessage）对应的Ack行为
       *
       * @param request GetAckInfoOfMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAckInfoOfMessageResponse
       */
      Models::GetAckInfoOfMessageResponse getAckInfoOfMessageWithOptions(const Models::GetAckInfoOfMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个PushMessage（PullMessage）对应的Ack行为
       *
       * @param request GetAckInfoOfMessageRequest
       * @return GetAckInfoOfMessageResponse
       */
      Models::GetAckInfoOfMessageResponse getAckInfoOfMessage(const Models::GetAckInfoOfMessageRequest &request);

      /**
       * @summary 获取绑定数量
       *
       * @param request GetBindingCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBindingCountResponse
       */
      Models::GetBindingCountResponse getBindingCountWithOptions(const Models::GetBindingCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取绑定数量
       *
       * @param request GetBindingCountRequest
       * @return GetBindingCountResponse
       */
      Models::GetBindingCountResponse getBindingCount(const Models::GetBindingCountRequest &request);

      /**
       * @summary 获取绑定错误
       *
       * @param request GetBindingErrorByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBindingErrorByTaskIdResponse
       */
      Models::GetBindingErrorByTaskIdResponse getBindingErrorByTaskIdWithOptions(const Models::GetBindingErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取绑定错误
       *
       * @param request GetBindingErrorByTaskIdRequest
       * @return GetBindingErrorByTaskIdResponse
       */
      Models::GetBindingErrorByTaskIdResponse getBindingErrorByTaskId(const Models::GetBindingErrorByTaskIdRequest &request);

      /**
       * @param request GetCommonBuyUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCommonBuyUrlResponse
       */
      Models::GetCommonBuyUrlResponse getCommonBuyUrlWithOptions(const Models::GetCommonBuyUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetCommonBuyUrlRequest
       * @return GetCommonBuyUrlResponse
       */
      Models::GetCommonBuyUrlResponse getCommonBuyUrl(const Models::GetCommonBuyUrlRequest &request);

      /**
       * @summary 通过rocketMqMsgId查询消息消费轨迹
       *
       * @param request GetConsumeTraceByQueueAndRocketMqMsgIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumeTraceByQueueAndRocketMqMsgIdResponse
       */
      Models::GetConsumeTraceByQueueAndRocketMqMsgIdResponse getConsumeTraceByQueueAndRocketMqMsgIdWithOptions(const Models::GetConsumeTraceByQueueAndRocketMqMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过rocketMqMsgId查询消息消费轨迹
       *
       * @param request GetConsumeTraceByQueueAndRocketMqMsgIdRequest
       * @return GetConsumeTraceByQueueAndRocketMqMsgIdResponse
       */
      Models::GetConsumeTraceByQueueAndRocketMqMsgIdResponse getConsumeTraceByQueueAndRocketMqMsgId(const Models::GetConsumeTraceByQueueAndRocketMqMsgIdRequest &request);

      /**
       * @summary 获取Exchange错误
       *
       * @param request GetExchangeErrorByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExchangeErrorByTaskIdResponse
       */
      Models::GetExchangeErrorByTaskIdResponse getExchangeErrorByTaskIdWithOptions(const Models::GetExchangeErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Exchange错误
       *
       * @param request GetExchangeErrorByTaskIdRequest
       * @return GetExchangeErrorByTaskIdResponse
       */
      Models::GetExchangeErrorByTaskIdResponse getExchangeErrorByTaskId(const Models::GetExchangeErrorByTaskIdRequest &request);

      /**
       * @summary 获取Exchange Rate
       *
       * @param tmpReq GetExchangeRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExchangeRateResponse
       */
      Models::GetExchangeRateResponse getExchangeRateWithOptions(const Models::GetExchangeRateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Exchange Rate
       *
       * @param request GetExchangeRateRequest
       * @return GetExchangeRateResponse
       */
      Models::GetExchangeRateResponse getExchangeRate(const Models::GetExchangeRateRequest &request);

      /**
       * @summary 通过queueName查询一段时间内的消息id列表
       *
       * @param request GetMsgIdListByQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMsgIdListByQueueResponse
       */
      Models::GetMsgIdListByQueueResponse getMsgIdListByQueueWithOptions(const Models::GetMsgIdListByQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过queueName查询一段时间内的消息id列表
       *
       * @param request GetMsgIdListByQueueRequest
       * @return GetMsgIdListByQueueResponse
       */
      Models::GetMsgIdListByQueueResponse getMsgIdListByQueue(const Models::GetMsgIdListByQueueRequest &request);

      /**
       * @summary GetQueueConsumers
       *
       * @param request GetQueueConsumersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueConsumersResponse
       */
      Models::GetQueueConsumersResponse getQueueConsumersWithOptions(const Models::GetQueueConsumersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetQueueConsumers
       *
       * @param request GetQueueConsumersRequest
       * @return GetQueueConsumersResponse
       */
      Models::GetQueueConsumersResponse getQueueConsumers(const Models::GetQueueConsumersRequest &request);

      /**
       * @summary 获取队列错误
       *
       * @param request GetQueueErrorByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueErrorByTaskIdResponse
       */
      Models::GetQueueErrorByTaskIdResponse getQueueErrorByTaskIdWithOptions(const Models::GetQueueErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取队列错误
       *
       * @param request GetQueueErrorByTaskIdRequest
       * @return GetQueueErrorByTaskIdResponse
       */
      Models::GetQueueErrorByTaskIdResponse getQueueErrorByTaskId(const Models::GetQueueErrorByTaskIdRequest &request);

      /**
       * @summary 获取Queue Rate
       *
       * @param tmpReq GetQueueRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueRateResponse
       */
      Models::GetQueueRateResponse getQueueRateWithOptions(const Models::GetQueueRateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Queue Rate
       *
       * @param request GetQueueRateRequest
       * @return GetQueueRateResponse
       */
      Models::GetQueueRateResponse getQueueRate(const Models::GetQueueRateRequest &request);

      /**
       * @summary 根据connectionId,channelId,deliveryTag查询SendMessage
       *
       * @param request GetSendTraceByConnectionAndChannelAndDeliveryTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSendTraceByConnectionAndChannelAndDeliveryTagResponse
       */
      Models::GetSendTraceByConnectionAndChannelAndDeliveryTagResponse getSendTraceByConnectionAndChannelAndDeliveryTagWithOptions(const Models::GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据connectionId,channelId,deliveryTag查询SendMessage
       *
       * @param request GetSendTraceByConnectionAndChannelAndDeliveryTagRequest
       * @return GetSendTraceByConnectionAndChannelAndDeliveryTagResponse
       */
      Models::GetSendTraceByConnectionAndChannelAndDeliveryTagResponse getSendTraceByConnectionAndChannelAndDeliveryTag(const Models::GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &request);

      /**
       * @summary 通过用户msgId查询消息发送轨迹
       *
       * @param request GetSendTraceByMsgIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSendTraceByMsgIdResponse
       */
      Models::GetSendTraceByMsgIdResponse getSendTraceByMsgIdWithOptions(const Models::GetSendTraceByMsgIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过用户msgId查询消息发送轨迹
       *
       * @param request GetSendTraceByMsgIdRequest
       * @return GetSendTraceByMsgIdResponse
       */
      Models::GetSendTraceByMsgIdResponse getSendTraceByMsgId(const Models::GetSendTraceByMsgIdRequest &request);

      /**
       * @summary 根据queue 查询SendMessage
       *
       * @param request GetSendTraceByQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSendTraceByQueueResponse
       */
      Models::GetSendTraceByQueueResponse getSendTraceByQueueWithOptions(const Models::GetSendTraceByQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据queue 查询SendMessage
       *
       * @param request GetSendTraceByQueueRequest
       * @return GetSendTraceByQueueResponse
       */
      Models::GetSendTraceByQueueResponse getSendTraceByQueue(const Models::GetSendTraceByQueueRequest &request);

      /**
       * @summary GetStatisticsByVhost
       *
       * @param request GetStatisticsByVhostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStatisticsByVhostResponse
       */
      Models::GetStatisticsByVhostResponse getStatisticsByVhostWithOptions(const Models::GetStatisticsByVhostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetStatisticsByVhost
       *
       * @param request GetStatisticsByVhostRequest
       * @return GetStatisticsByVhostResponse
       */
      Models::GetStatisticsByVhostResponse getStatisticsByVhost(const Models::GetStatisticsByVhostRequest &request);

      /**
       * @summary 获取任务
       *
       * @param request GetTaskByUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskByUidResponse
       */
      Models::GetTaskByUidResponse getTaskByUidWithOptions(const Models::GetTaskByUidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务
       *
       * @param request GetTaskByUidRequest
       * @return GetTaskByUidResponse
       */
      Models::GetTaskByUidResponse getTaskByUid(const Models::GetTaskByUidRequest &request);

      /**
       * @summary 查询一段时间内某个实例或是vhost或是queue的tps
       *
       * @param request GetTpsByTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTpsByTimeResponse
       */
      Models::GetTpsByTimeResponse getTpsByTimeWithOptions(const Models::GetTpsByTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一段时间内某个实例或是vhost或是queue的tps
       *
       * @param request GetTpsByTimeRequest
       * @return GetTpsByTimeResponse
       */
      Models::GetTpsByTimeResponse getTpsByTime(const Models::GetTpsByTimeRequest &request);

      /**
       * @summary 获取用户配置
       *
       * @param request GetUserSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserSettingResponse
       */
      Models::GetUserSettingResponse getUserSettingWithOptions(const Models::GetUserSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户配置
       *
       * @param request GetUserSettingRequest
       * @return GetUserSettingResponse
       */
      Models::GetUserSettingResponse getUserSetting(const Models::GetUserSettingRequest &request);

      /**
       * @summary 获取Vhost错误
       *
       * @param request GetVhostErrorByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVhostErrorByTaskIdResponse
       */
      Models::GetVhostErrorByTaskIdResponse getVhostErrorByTaskIdWithOptions(const Models::GetVhostErrorByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Vhost错误
       *
       * @param request GetVhostErrorByTaskIdRequest
       * @return GetVhostErrorByTaskIdResponse
       */
      Models::GetVhostErrorByTaskIdResponse getVhostErrorByTaskId(const Models::GetVhostErrorByTaskIdRequest &request);

      /**
       * @summary 获取Vhost Rate
       *
       * @param tmpReq GetVhostRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVhostRateResponse
       */
      Models::GetVhostRateResponse getVhostRateWithOptions(const Models::GetVhostRateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Vhost Rate
       *
       * @param request GetVhostRateRequest
       * @return GetVhostRateResponse
       */
      Models::GetVhostRateResponse getVhostRate(const Models::GetVhostRateRequest &request);

      /**
       * @summary 异步导入元数据
       *
       * @param request ImportDefinitionAsynchronousRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportDefinitionAsynchronousResponse
       */
      Models::ImportDefinitionAsynchronousResponse importDefinitionAsynchronousWithOptions(const Models::ImportDefinitionAsynchronousRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步导入元数据
       *
       * @param request ImportDefinitionAsynchronousRequest
       * @return ImportDefinitionAsynchronousResponse
       */
      Models::ImportDefinitionAsynchronousResponse importDefinitionAsynchronous(const Models::ImportDefinitionAsynchronousRequest &request);

      /**
       * @summary 获取实例列表
       *
       * @param request InstancePreivewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstancePreivewResponse
       */
      Models::InstancePreivewResponse instancePreivewWithOptions(const Models::InstancePreivewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例列表
       *
       * @param request InstancePreivewRequest
       * @return InstancePreivewResponse
       */
      Models::InstancePreivewResponse instancePreivew(const Models::InstancePreivewRequest &request);

      /**
       * @summary 获取Exchange列表
       *
       * @param request ListExchangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangeResponse
       */
      Models::ListExchangeResponse listExchangeWithOptions(const Models::ListExchangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Exchange列表
       *
       * @param request ListExchangeRequest
       * @return ListExchangeResponse
       */
      Models::ListExchangeResponse listExchange(const Models::ListExchangeRequest &request);

      /**
       * @summary 获取Exchange下游列表
       *
       * @param request ListExchangeDownstreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangeDownstreamBindingsResponse
       */
      Models::ListExchangeDownstreamBindingsResponse listExchangeDownstreamBindingsWithOptions(const Models::ListExchangeDownstreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Exchange下游列表
       *
       * @param request ListExchangeDownstreamBindingsRequest
       * @return ListExchangeDownstreamBindingsResponse
       */
      Models::ListExchangeDownstreamBindingsResponse listExchangeDownstreamBindings(const Models::ListExchangeDownstreamBindingsRequest &request);

      /**
       * @summary 获取Exchange上游绑定列表
       *
       * @param request ListExchangeUpstreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExchangeUpstreamBindingsResponse
       */
      Models::ListExchangeUpstreamBindingsResponse listExchangeUpstreamBindingsWithOptions(const Models::ListExchangeUpstreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Exchange上游绑定列表
       *
       * @param request ListExchangeUpstreamBindingsRequest
       * @return ListExchangeUpstreamBindingsResponse
       */
      Models::ListExchangeUpstreamBindingsResponse listExchangeUpstreamBindings(const Models::ListExchangeUpstreamBindingsRequest &request);

      /**
       * @summary 获取实例列表
       *
       * @param request ListInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstanceWithOptions(const Models::ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例列表
       *
       * @param request ListInstanceRequest
       * @return ListInstanceResponse
       */
      Models::ListInstanceResponse listInstance(const Models::ListInstanceRequest &request);

      /**
       * @summary 获取实例告警
       *
       * @param request ListInstanceAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAlarmResponse
       */
      Models::ListInstanceAlarmResponse listInstanceAlarmWithOptions(const Models::ListInstanceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例告警
       *
       * @param request ListInstanceAlarmRequest
       * @return ListInstanceAlarmResponse
       */
      Models::ListInstanceAlarmResponse listInstanceAlarm(const Models::ListInstanceAlarmRequest &request);

      /**
       * @summary 获取日志Logstore
       *
       * @param request ListLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogstoreResponse
       */
      Models::ListLogstoreResponse listLogstoreWithOptions(const Models::ListLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志Logstore
       *
       * @param request ListLogstoreRequest
       * @return ListLogstoreResponse
       */
      Models::ListLogstoreResponse listLogstore(const Models::ListLogstoreRequest &request);

      /**
       * @summary 获取日志Project
       *
       * @param request ListProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProjectWithOptions(const Models::ListProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志Project
       *
       * @param request ListProjectRequest
       * @return ListProjectResponse
       */
      Models::ListProjectResponse listProject(const Models::ListProjectRequest &request);

      /**
       * @summary 获取队列列表
       *
       * @param request ListQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueResponse
       */
      Models::ListQueueResponse listQueueWithOptions(const Models::ListQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取队列列表
       *
       * @param request ListQueueRequest
       * @return ListQueueResponse
       */
      Models::ListQueueResponse listQueue(const Models::ListQueueRequest &request);

      /**
       * @summary 获取队列上游绑定列表
       *
       * @param request ListQueueUpstreamBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueueUpstreamBindingsResponse
       */
      Models::ListQueueUpstreamBindingsResponse listQueueUpstreamBindingsWithOptions(const Models::ListQueueUpstreamBindingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取队列上游绑定列表
       *
       * @param request ListQueueUpstreamBindingsRequest
       * @return ListQueueUpstreamBindingsResponse
       */
      Models::ListQueueUpstreamBindingsResponse listQueueUpstreamBindings(const Models::ListQueueUpstreamBindingsRequest &request);

      /**
       * @summary 获取静态账户列表
       *
       * @param request ListStaticAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStaticAccountsResponse
       */
      Models::ListStaticAccountsResponse listStaticAccountsWithOptions(const Models::ListStaticAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取静态账户列表
       *
       * @param request ListStaticAccountsRequest
       * @return ListStaticAccountsResponse
       */
      Models::ListStaticAccountsResponse listStaticAccounts(const Models::ListStaticAccountsRequest &request);

      /**
       * @summary 获取Vhost列表
       *
       * @param request ListVhostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVhostResponse
       */
      Models::ListVhostResponse listVhostWithOptions(const Models::ListVhostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Vhost列表
       *
       * @param request ListVhostRequest
       * @return ListVhostResponse
       */
      Models::ListVhostResponse listVhost(const Models::ListVhostRequest &request);

      /**
       * @summary 获取元数据
       *
       * @param request MetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MetadataResponse
       */
      Models::MetadataResponse metadataWithOptions(const Models::MetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取元数据
       *
       * @param request MetadataRequest
       * @return MetadataResponse
       */
      Models::MetadataResponse metadata(const Models::MetadataRequest &request);

      /**
       * @summary 清空队列
       *
       * @param tmpReq PurgeQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurgeQueueResponse
       */
      Models::PurgeQueueResponse purgeQueueWithOptions(const Models::PurgeQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清空队列
       *
       * @param request PurgeQueueRequest
       * @return PurgeQueueResponse
       */
      Models::PurgeQueueResponse purgeQueue(const Models::PurgeQueueRequest &request);

      /**
       * @summary 根据Message Id查询消息
       *
       * @param request QueryMessageByMessageIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageByMessageIdResponse
       */
      Models::QueryMessageByMessageIdResponse queryMessageByMessageIdWithOptions(const Models::QueryMessageByMessageIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据Message Id查询消息
       *
       * @param request QueryMessageByMessageIdRequest
       * @return QueryMessageByMessageIdResponse
       */
      Models::QueryMessageByMessageIdResponse queryMessageByMessageId(const Models::QueryMessageByMessageIdRequest &request);

      /**
       * @summary 根据队列查询消息
       *
       * @param request QueryMessageByQueueNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageByQueueNameResponse
       */
      Models::QueryMessageByQueueNameResponse queryMessageByQueueNameWithOptions(const Models::QueryMessageByQueueNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据队列查询消息
       *
       * @param request QueryMessageByQueueNameRequest
       * @return QueryMessageByQueueNameResponse
       */
      Models::QueryMessageByQueueNameResponse queryMessageByQueueName(const Models::QueryMessageByQueueNameRequest &request);

      /**
       * @summary 实例释放
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例释放
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary 发送消息
       *
       * @param request SendMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessageWithOptions(const Models::SendMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送消息
       *
       * @param request SendMessageRequest
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessage(const Models::SendMessageRequest &request);

      /**
       * @summary 发送消息
       *
       * @param request SendMessageCopyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageCopyResponse
       */
      Models::SendMessageCopyResponse sendMessageCopyWithOptions(const Models::SendMessageCopyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送消息
       *
       * @param request SendMessageCopyRequest
       * @return SendMessageCopyResponse
       */
      Models::SendMessageCopyResponse sendMessageCopy(const Models::SendMessageCopyRequest &request);

      /**
       * @summary 取消绑定
       *
       * @param request UnbindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindResponse
       */
      Models::UnbindResponse unbindWithOptions(const Models::UnbindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消绑定
       *
       * @param request UnbindRequest
       * @return UnbindResponse
       */
      Models::UnbindResponse unbind(const Models::UnbindRequest &request);

      /**
       * @summary 更新实例
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary 修改实例的重试策略
       *
       * @param request UpdateInstanceRetryStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceRetryStrategyResponse
       */
      Models::UpdateInstanceRetryStrategyResponse updateInstanceRetryStrategyWithOptions(const Models::UpdateInstanceRetryStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的重试策略
       *
       * @param request UpdateInstanceRetryStrategyRequest
       * @return UpdateInstanceRetryStrategyResponse
       */
      Models::UpdateInstanceRetryStrategyResponse updateInstanceRetryStrategy(const Models::UpdateInstanceRetryStrategyRequest &request);

      /**
       * @summary 更新serverless开关
       *
       * @param request UpdateServerlessSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServerlessSwitchResponse
       */
      Models::UpdateServerlessSwitchResponse updateServerlessSwitchWithOptions(const Models::UpdateServerlessSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新serverless开关
       *
       * @param request UpdateServerlessSwitchRequest
       * @return UpdateServerlessSwitchResponse
       */
      Models::UpdateServerlessSwitchResponse updateServerlessSwitch(const Models::UpdateServerlessSwitchRequest &request);

      /**
       * @summary 升级实例配额
       *
       * @param request UpgradeLimitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeLimitsResponse
       */
      Models::UpgradeLimitsResponse upgradeLimitsWithOptions(const Models::UpgradeLimitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级实例配额
       *
       * @param request UpgradeLimitsRequest
       * @return UpgradeLimitsResponse
       */
      Models::UpgradeLimitsResponse upgradeLimits(const Models::UpgradeLimitsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
