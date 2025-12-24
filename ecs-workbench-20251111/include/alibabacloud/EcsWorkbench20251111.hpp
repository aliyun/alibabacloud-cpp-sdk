// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECSWORKBENCH20251111_HPP_
#define ALIBABACLOUD_ECSWORKBENCH20251111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EcsWorkbench20251111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EcsWorkbench20251111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20251111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 查询Workbench终端配置
       *
       * @description 查询Workbench终端配置
       *
       * @param request DescribeTerminalSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTerminalSettingsResponse
       */
      Models::DescribeTerminalSettingsResponse describeTerminalSettingsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Workbench终端配置
       *
       * @description 查询Workbench终端配置
       *
       * @return DescribeTerminalSettingsResponse
       */
      Models::DescribeTerminalSettingsResponse describeTerminalSettings();

      /**
       * @summary 修改Workbench终端配置
       *
       * @description 修改Workbench终端配置
       *
       * @param tmpReq ModifyTerminalSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTerminalSettingsResponse
       */
      Models::ModifyTerminalSettingsResponse modifyTerminalSettingsWithOptions(const Models::ModifyTerminalSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Workbench终端配置
       *
       * @description 修改Workbench终端配置
       *
       * @param request ModifyTerminalSettingsRequest
       * @return ModifyTerminalSettingsResponse
       */
      Models::ModifyTerminalSettingsResponse modifyTerminalSettings(const Models::ModifyTerminalSettingsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EcsWorkbench20251111
#endif
