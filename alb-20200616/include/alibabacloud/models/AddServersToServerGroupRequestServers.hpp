// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVERSTOSERVERGROUPREQUESTSERVERS_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVERSTOSERVERGROUPREQUESTSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class AddServersToServerGroupRequestServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddServersToServerGroupRequestServers& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RemoteIpEnabled, remoteIpEnabled_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, AddServersToServerGroupRequestServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RemoteIpEnabled, remoteIpEnabled_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    AddServersToServerGroupRequestServers() = default ;
    AddServersToServerGroupRequestServers(const AddServersToServerGroupRequestServers &) = default ;
    AddServersToServerGroupRequestServers(AddServersToServerGroupRequestServers &&) = default ;
    AddServersToServerGroupRequestServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddServersToServerGroupRequestServers() = default ;
    AddServersToServerGroupRequestServers& operator=(const AddServersToServerGroupRequestServers &) = default ;
    AddServersToServerGroupRequestServers& operator=(AddServersToServerGroupRequestServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->port_ != nullptr && this->remoteIpEnabled_ != nullptr && this->serverId_ != nullptr && this->serverIp_ != nullptr && this->serverType_ != nullptr
        && this->weight_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddServersToServerGroupRequestServers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AddServersToServerGroupRequestServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // remoteIpEnabled Field Functions 
    bool hasRemoteIpEnabled() const { return this->remoteIpEnabled_ != nullptr;};
    void deleteRemoteIpEnabled() { this->remoteIpEnabled_ = nullptr;};
    inline bool remoteIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(remoteIpEnabled_, false) };
    inline AddServersToServerGroupRequestServers& setRemoteIpEnabled(bool remoteIpEnabled) { DARABONBA_PTR_SET_VALUE(remoteIpEnabled_, remoteIpEnabled) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline AddServersToServerGroupRequestServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline AddServersToServerGroupRequestServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline AddServersToServerGroupRequestServers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline AddServersToServerGroupRequestServers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The description of the backend server. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The port that is used by the backend server. Valid values: **1** to **65535**. You can specify at most 200 servers in each call.
    // 
    // >  This parameter is required if you set **ServerType** to **Ecs**, **Eni**, **Eci**, or **Ip**. You do not need to set this parameter if **ServerType** is set to **Fc**.
    std::shared_ptr<int32_t> port_ = nullptr;
    // Specifies whether to enable the remote IP feature. You can specify at most 200 servers in each call. Default values:
    // 
    // *   **true**: enables the feature.
    // *   **false**: disables the feature.
    // 
    // >  This parameter takes effect only when **ServerType** is set to **Ip**.
    std::shared_ptr<bool> remoteIpEnabled_ = nullptr;
    // The ID of the server group. You can specify at most 200 servers in each call.
    // 
    // *   If the server group is of the **Instance** type, set ServerId to the ID of a resource of the **Ecs**, **Eni**, or **Eci** type.
    // *   If the server group is of the **Ip** type, set this parameter to IP addresses.
    // *   If the server group is of the **Fc** type, set ServerId to an Alibaba Cloud Resource Name (ARN).
    std::shared_ptr<string> serverId_ = nullptr;
    // The IP address of the backend server. You can specify at most 200 servers in each call.
    // 
    // >  You do not need to set this parameter if you set **ServerType** to **Fc**.
    std::shared_ptr<string> serverIp_ = nullptr;
    // The type of the backend server. You can specify at most 200 servers in each call. Default values:
    // 
    // *   **Ecs**: Elastic Compute Service (ECS) instance
    // *   **Eni**: elastic network interface (ENI)
    // *   **Eci**: elastic container instance
    // *   **Ip**: IP address
    // *   **Fc**: Function Compute
    // 
    // This parameter is required.
    std::shared_ptr<string> serverType_ = nullptr;
    // The weight of the backend server. Valid values: **0** to **100**. Default value: **100**. If the value is set to **0**, no requests are forwarded to the server. You can specify at most 200 servers in each call.
    // 
    // >  You do not need to set this parameter if you set **ServerType** to **Fc**.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
