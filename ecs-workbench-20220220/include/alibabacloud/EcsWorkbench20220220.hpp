// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECSWORKBENCH20220220_HPP_
#define ALIBABACLOUD_ECSWORKBENCH20220220_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EcsWorkbench20220220Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EcsWorkbench20220220.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取实例录屏配置
       *
       * @param request GetInstanceRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceRecordConfigResponse
       */
      Models::GetInstanceRecordConfigResponse getInstanceRecordConfigWithOptions(const Models::GetInstanceRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例录屏配置
       *
       * @param request GetInstanceRecordConfigRequest
       * @return GetInstanceRecordConfigResponse
       */
      Models::GetInstanceRecordConfigResponse getInstanceRecordConfig(const Models::GetInstanceRecordConfigRequest &request);

      /**
       * @summary 获取实例录屏记录列表
       *
       * @param request ListInstanceRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceRecordsResponse
       */
      Models::ListInstanceRecordsResponse listInstanceRecordsWithOptions(const Models::ListInstanceRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例录屏记录列表
       *
       * @param request ListInstanceRecordsRequest
       * @return ListInstanceRecordsResponse
       */
      Models::ListInstanceRecordsResponse listInstanceRecords(const Models::ListInstanceRecordsRequest &request);

      /**
       * @summary 查看实例Workbench登录后执行命令的历史列表。
       *
       * @param request ListTerminalCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTerminalCommandsResponse
       */
      Models::ListTerminalCommandsResponse listTerminalCommandsWithOptions(const Models::ListTerminalCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看实例Workbench登录后执行命令的历史列表。
       *
       * @param request ListTerminalCommandsRequest
       * @return ListTerminalCommandsResponse
       */
      Models::ListTerminalCommandsResponse listTerminalCommands(const Models::ListTerminalCommandsRequest &request);

      /**
       * @summary 登录实例
       *
       * @param request LoginInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoginInstanceResponse
       */
      Models::LoginInstanceResponse loginInstanceWithOptions(const Models::LoginInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 登录实例
       *
       * @param request LoginInstanceRequest
       * @return LoginInstanceResponse
       */
      Models::LoginInstanceResponse loginInstance(const Models::LoginInstanceRequest &request);

      /**
       * @summary 设置实例录屏配置
       *
       * @param request SetInstanceRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceRecordConfigResponse
       */
      Models::SetInstanceRecordConfigResponse setInstanceRecordConfigWithOptions(const Models::SetInstanceRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例录屏配置
       *
       * @param request SetInstanceRecordConfigRequest
       * @return SetInstanceRecordConfigResponse
       */
      Models::SetInstanceRecordConfigResponse setInstanceRecordConfig(const Models::SetInstanceRecordConfigRequest &request);

      /**
       * @summary 查看实例录屏内容
       *
       * @param request ViewInstanceRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ViewInstanceRecordsResponse
       */
      Models::ViewInstanceRecordsResponse viewInstanceRecordsWithOptions(const Models::ViewInstanceRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看实例录屏内容
       *
       * @param request ViewInstanceRecordsRequest
       * @return ViewInstanceRecordsResponse
       */
      Models::ViewInstanceRecordsResponse viewInstanceRecords(const Models::ViewInstanceRecordsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
