// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOSNONNORMALSERVERS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOSNONNORMALSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers &&) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& operator=(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& operator=(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->reason_ != nullptr && this->serverId_ != nullptr && this->serverIp_ != nullptr && this->status_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline const Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason & reason() const { DARABONBA_PTR_GET_CONST(reason_, Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason) };
    inline Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason reason() { DARABONBA_PTR_GET(reason_, Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& setReason(const Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& setReason(Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The backend port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The cause for the unhealthy state of the backend servers.
    std::shared_ptr<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason> reason_ = nullptr;
    // The ID of the backend server.
    std::shared_ptr<string> serverId_ = nullptr;
    // The IP address of the backend server.
    std::shared_ptr<string> serverIp_ = nullptr;
    // The status of the health check. Valid values: Valid values:
    // 
    // *   **Initial**: indicates that health checks are configured for the NLB instance, but no data was found.
    // *   **Unhealthy**: indicates that the backend server consecutively fails health checks.
    // *   **Unused**: indicates that the weight of the backend server is 0.
    // *   **Unavailable**: indicates that health checks are disabled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
