// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVSERVERGROUPBACKENDSERVERSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVSERVERGROUPBACKENDSERVERSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer() = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer(const RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer &) = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer(RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer &&) = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer() = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& operator=(const RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer &) = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& operator=(RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->serverId_ == nullptr && return this->type_ == nullptr && return this->weight_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The port that is used by the backend server.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the backend server.
    std::shared_ptr<string> serverId_ = nullptr;
    // The type of the backend server. Valid values:
    // 
    // *   **ecs** (default): ECS instance
    // *   **eni**: ENI
    // *   **eci**: elastic container instance
    std::shared_ptr<string> type_ = nullptr;
    // The weight of the backend server.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
