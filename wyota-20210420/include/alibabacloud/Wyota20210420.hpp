// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WYOTA20210420_HPP_
#define ALIBABACLOUD_WYOTA20210420_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Wyota20210420Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Wyota20210420.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加终端
       *
       * @param request AddTerminalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTerminalResponse
       */
      Models::AddTerminalResponse addTerminalWithOptions(const Models::AddTerminalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加终端
       *
       * @param request AddTerminalRequest
       * @return AddTerminalResponse
       */
      Models::AddTerminalResponse addTerminal(const Models::AddTerminalRequest &request);

      /**
       * @summary 添加终端
       *
       * @param request AddTerminalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTerminalsResponse
       */
      Models::AddTerminalsResponse addTerminalsWithOptions(const Models::AddTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加终端
       *
       * @param request AddTerminalsRequest
       * @return AddTerminalsResponse
       */
      Models::AddTerminalsResponse addTerminals(const Models::AddTerminalsRequest &request);

      /**
       * @summary 绑定免账号登录用户
       *
       * @param request BindAccountLessLoginUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAccountLessLoginUserResponse
       */
      Models::BindAccountLessLoginUserResponse bindAccountLessLoginUserWithOptions(const Models::BindAccountLessLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定免账号登录用户
       *
       * @param request BindAccountLessLoginUserRequest
       * @return BindAccountLessLoginUserResponse
       */
      Models::BindAccountLessLoginUserResponse bindAccountLessLoginUser(const Models::BindAccountLessLoginUserRequest &request);

      /**
       * @summary 绑定免账号登录用户
       *
       * @param request BindPasswordFreeLoginUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPasswordFreeLoginUserResponse
       */
      Models::BindPasswordFreeLoginUserResponse bindPasswordFreeLoginUserWithOptions(const Models::BindPasswordFreeLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定免账号登录用户
       *
       * @param request BindPasswordFreeLoginUserRequest
       * @return BindPasswordFreeLoginUserResponse
       */
      Models::BindPasswordFreeLoginUserResponse bindPasswordFreeLoginUser(const Models::BindPasswordFreeLoginUserRequest &request);

      /**
       * @summary 查询设备座位
       *
       * @param request DescribeDeviceSeatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceSeatsResponse
       */
      Models::DescribeDeviceSeatsResponse describeDeviceSeatsWithOptions(const Models::DescribeDeviceSeatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备座位
       *
       * @param request DescribeDeviceSeatsRequest
       * @return DescribeDeviceSeatsResponse
       */
      Models::DescribeDeviceSeatsResponse describeDeviceSeats(const Models::DescribeDeviceSeatsRequest &request);

      /**
       * @summary 查询终端列表
       *
       * @param request ListTerminalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTerminalResponse
       */
      Models::ListTerminalResponse listTerminalWithOptions(const Models::ListTerminalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询终端列表
       *
       * @param request ListTerminalRequest
       * @return ListTerminalResponse
       */
      Models::ListTerminalResponse listTerminal(const Models::ListTerminalRequest &request);

      /**
       * @summary 向终端发送运维命令
       *
       * @param request SendOpsMessageToTerminalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendOpsMessageToTerminalsResponse
       */
      Models::SendOpsMessageToTerminalsResponse sendOpsMessageToTerminalsWithOptions(const Models::SendOpsMessageToTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 向终端发送运维命令
       *
       * @param request SendOpsMessageToTerminalsRequest
       * @return SendOpsMessageToTerminalsResponse
       */
      Models::SendOpsMessageToTerminalsResponse sendOpsMessageToTerminals(const Models::SendOpsMessageToTerminalsRequest &request);

      /**
       * @summary 解绑免账号登录用户
       *
       * @param request UnbindAccountLessLoginUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindAccountLessLoginUserResponse
       */
      Models::UnbindAccountLessLoginUserResponse unbindAccountLessLoginUserWithOptions(const Models::UnbindAccountLessLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑免账号登录用户
       *
       * @param request UnbindAccountLessLoginUserRequest
       * @return UnbindAccountLessLoginUserResponse
       */
      Models::UnbindAccountLessLoginUserResponse unbindAccountLessLoginUser(const Models::UnbindAccountLessLoginUserRequest &request);

      /**
       * @summary 解绑设备座位
       *
       * @param tmpReq UnbindDeviceSeatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDeviceSeatsResponse
       */
      Models::UnbindDeviceSeatsResponse unbindDeviceSeatsWithOptions(const Models::UnbindDeviceSeatsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑设备座位
       *
       * @param request UnbindDeviceSeatsRequest
       * @return UnbindDeviceSeatsResponse
       */
      Models::UnbindDeviceSeatsResponse unbindDeviceSeats(const Models::UnbindDeviceSeatsRequest &request);

      /**
       * @summary 解绑免密登录用户
       *
       * @param request UnbindPasswordFreeLoginUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPasswordFreeLoginUserResponse
       */
      Models::UnbindPasswordFreeLoginUserResponse unbindPasswordFreeLoginUserWithOptions(const Models::UnbindPasswordFreeLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑免密登录用户
       *
       * @param request UnbindPasswordFreeLoginUserRequest
       * @return UnbindPasswordFreeLoginUserResponse
       */
      Models::UnbindPasswordFreeLoginUserResponse unbindPasswordFreeLoginUser(const Models::UnbindPasswordFreeLoginUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
