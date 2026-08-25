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
       * @summary Removes managed terminal devices by UUID.
       *
       * @param request DeleteClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientsResponse
       */
      Models::DeleteClientsResponse deleteClientsWithOptions(const Models::DeleteClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes managed terminal devices by UUID.
       *
       * @param request DeleteClientsRequest
       * @return DeleteClientsResponse
       */
      Models::DeleteClientsResponse deleteClients(const Models::DeleteClientsRequest &request);

      /**
       * @summary Queries information about all managed clients.
       *
       * @param request DescribeClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientsResponse
       */
      Models::DescribeClientsResponse describeClientsWithOptions(const Models::DescribeClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all managed clients.
       *
       * @param request DescribeClientsRequest
       * @return DescribeClientsResponse
       */
      Models::DescribeClientsResponse describeClients(const Models::DescribeClientsRequest &request);

      /**
       * @summary Retrieves custom resource statistics information.
       *
       * @param request GetCustomResourceStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomResourceStatsResponse
       */
      Models::GetCustomResourceStatsResponse getCustomResourceStatsWithOptions(const Models::GetCustomResourceStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves custom resource statistics information.
       *
       * @param request GetCustomResourceStatsRequest
       * @return GetCustomResourceStatsResponse
       */
      Models::GetCustomResourceStatsResponse getCustomResourceStats(const Models::GetCustomResourceStatsRequest &request);

      /**
       * @summary Retrieves or creates an invitation code for desktop device enrollment.
       * Query mode: Pass only terminalGroupId to return the current invitation code and its expiration status in read-only mode.
       * Creation mode: Pass terminalGroupId along with an expiration duration (expireDays or expireMinutes) to generate a new code that overwrites the existing invitation code.
       *
       * @param request GetOrCreateInvitationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrCreateInvitationCodeResponse
       */
      Models::GetOrCreateInvitationCodeResponse getOrCreateInvitationCodeWithOptions(const Models::GetOrCreateInvitationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves or creates an invitation code for desktop device enrollment.
       * Query mode: Pass only terminalGroupId to return the current invitation code and its expiration status in read-only mode.
       * Creation mode: Pass terminalGroupId along with an expiration duration (expireDays or expireMinutes) to generate a new code that overwrites the existing invitation code.
       *
       * @param request GetOrCreateInvitationCodeRequest
       * @return GetOrCreateInvitationCodeResponse
       */
      Models::GetOrCreateInvitationCodeResponse getOrCreateInvitationCode(const Models::GetOrCreateInvitationCodeRequest &request);

      /**
       * @summary Retrieves the number of terminals.
       *
       * @param request GetTerminalCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTerminalCountResponse
       */
      Models::GetTerminalCountResponse getTerminalCountWithOptions(const Models::GetTerminalCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of terminals.
       *
       * @param request GetTerminalCountRequest
       * @return GetTerminalCountResponse
       */
      Models::GetTerminalCountResponse getTerminalCount(const Models::GetTerminalCountRequest &request);

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
       * @summary Queries the version distribution of terminals.
       *
       * @param request ListVersionDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVersionDistributionResponse
       */
      Models::ListVersionDistributionResponse listVersionDistributionWithOptions(const Models::ListVersionDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version distribution of terminals.
       *
       * @param request ListVersionDistributionRequest
       * @return ListVersionDistributionResponse
       */
      Models::ListVersionDistributionResponse listVersionDistribution(const Models::ListVersionDistributionRequest &request);

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
