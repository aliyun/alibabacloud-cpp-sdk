// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSRESPONSEBODYSERVERS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSERVERSRESPONSEBODYSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListServerGroupServersResponseBodyServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupServersResponseBodyServers& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupServersResponseBodyServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListServerGroupServersResponseBodyServers() = default ;
    ListServerGroupServersResponseBodyServers(const ListServerGroupServersResponseBodyServers &) = default ;
    ListServerGroupServersResponseBodyServers(ListServerGroupServersResponseBodyServers &&) = default ;
    ListServerGroupServersResponseBodyServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupServersResponseBodyServers() = default ;
    ListServerGroupServersResponseBodyServers& operator=(const ListServerGroupServersResponseBodyServers &) = default ;
    ListServerGroupServersResponseBodyServers& operator=(ListServerGroupServersResponseBodyServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->port_ != nullptr && this->serverGroupId_ != nullptr && this->serverId_ != nullptr && this->serverIp_ != nullptr && this->serverType_ != nullptr
        && this->status_ != nullptr && this->weight_ != nullptr && this->zoneId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListServerGroupServersResponseBodyServers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListServerGroupServersResponseBodyServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ListServerGroupServersResponseBodyServers& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline ListServerGroupServersResponseBodyServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline ListServerGroupServersResponseBodyServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline ListServerGroupServersResponseBodyServers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServerGroupServersResponseBodyServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ListServerGroupServersResponseBodyServers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListServerGroupServersResponseBodyServers& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The description of the backend server.
    std::shared_ptr<string> description_ = nullptr;
    // The port that is used by the backend server. Valid values: **1** to **65535**.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<string> serverId_ = nullptr;
    // The IP address of the backend server.
    std::shared_ptr<string> serverIp_ = nullptr;
    // The type of backend server. Valid values:
    // 
    // *   **Ecs**: Elastic Compute Service (ECS) instance
    // *   **Eni**: elastic network interface (ENI)
    // *   **Eci**: elastic container instance
    // *   **Ip**: IP address
    std::shared_ptr<string> serverType_ = nullptr;
    // The status of the backend server. Valid values:
    // 
    // *   **Adding**
    // *   **Available**
    // *   **Configuring**
    // *   **Removing**
    std::shared_ptr<string> status_ = nullptr;
    // The weight of the backend server.
    std::shared_ptr<int32_t> weight_ = nullptr;
    // The zone ID of the server.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
