// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeHealthStatusResponseBodyBackendServersBackendServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ServerHealthStatus, serverHealthStatus_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ServerHealthStatus, serverHealthStatus_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
    };
    DescribeHealthStatusResponseBodyBackendServersBackendServer() = default ;
    DescribeHealthStatusResponseBodyBackendServersBackendServer(const DescribeHealthStatusResponseBodyBackendServersBackendServer &) = default ;
    DescribeHealthStatusResponseBodyBackendServersBackendServer(DescribeHealthStatusResponseBodyBackendServersBackendServer &&) = default ;
    DescribeHealthStatusResponseBodyBackendServersBackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyBackendServersBackendServer() = default ;
    DescribeHealthStatusResponseBodyBackendServersBackendServer& operator=(const DescribeHealthStatusResponseBodyBackendServersBackendServer &) = default ;
    DescribeHealthStatusResponseBodyBackendServersBackendServer& operator=(DescribeHealthStatusResponseBodyBackendServersBackendServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPort_ == nullptr
        && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->serverHealthStatus_ == nullptr && return this->serverId_ == nullptr && return this->serverIp_ == nullptr; };
    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeHealthStatusResponseBodyBackendServersBackendServer& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeHealthStatusResponseBodyBackendServersBackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeHealthStatusResponseBodyBackendServersBackendServer& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serverHealthStatus Field Functions 
    bool hasServerHealthStatus() const { return this->serverHealthStatus_ != nullptr;};
    void deleteServerHealthStatus() { this->serverHealthStatus_ = nullptr;};
    inline string serverHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(serverHealthStatus_, "") };
    inline DescribeHealthStatusResponseBodyBackendServersBackendServer& setServerHealthStatus(string serverHealthStatus) { DARABONBA_PTR_SET_VALUE(serverHealthStatus_, serverHealthStatus) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline DescribeHealthStatusResponseBodyBackendServersBackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline DescribeHealthStatusResponseBodyBackendServersBackendServer& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


  protected:
    // The frontend port that is used by the SLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The backend port that is used by the SLB instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The frontend protocol that is used by the SLB instance.
    std::shared_ptr<string> protocol_ = nullptr;
    // The health status of the backend server. Valid values:
    // 
    // *   normal: The backend server is healthy.
    // *   abnormal: The backend server is unhealthy.
    // *   unavailable: The health check is not completed.
    std::shared_ptr<string> serverHealthStatus_ = nullptr;
    // The ID of the backend server.
    std::shared_ptr<string> serverId_ = nullptr;
    // The IP address of the backend server.
    std::shared_ptr<string> serverIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
