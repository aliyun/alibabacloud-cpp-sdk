// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#define ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSRESPONSEBODYBACKENDSERVERSBACKENDSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveBackendServersResponseBodyBackendServersBackendServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveBackendServersResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveBackendServersResponseBodyBackendServersBackendServer& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    RemoveBackendServersResponseBodyBackendServersBackendServer() = default ;
    RemoveBackendServersResponseBodyBackendServersBackendServer(const RemoveBackendServersResponseBodyBackendServersBackendServer &) = default ;
    RemoveBackendServersResponseBodyBackendServersBackendServer(RemoveBackendServersResponseBodyBackendServersBackendServer &&) = default ;
    RemoveBackendServersResponseBodyBackendServersBackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveBackendServersResponseBodyBackendServersBackendServer() = default ;
    RemoveBackendServersResponseBodyBackendServersBackendServer& operator=(const RemoveBackendServersResponseBodyBackendServersBackendServer &) = default ;
    RemoveBackendServersResponseBodyBackendServersBackendServer& operator=(RemoveBackendServersResponseBodyBackendServersBackendServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr
        && this->port_ != nullptr && this->serverId_ != nullptr && this->type_ != nullptr && this->weight_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline RemoveBackendServersResponseBodyBackendServersBackendServer& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline RemoveBackendServersResponseBodyBackendServersBackendServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RemoveBackendServersResponseBodyBackendServersBackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RemoveBackendServersResponseBodyBackendServersBackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline RemoveBackendServersResponseBodyBackendServersBackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The IP address of the backend server.
    std::shared_ptr<string> ip_ = nullptr;
    // The backend port that is used by the ELB instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The instance ID of the backend server.
    std::shared_ptr<string> serverId_ = nullptr;
    // The type of the backend server. Valid values:
    // 
    // *   **ens**: an ENS instance.
    // *   **eni**: an ENI.
    std::shared_ptr<string> type_ = nullptr;
    // The weight of the backend server.
    // 
    // >  The value 0 indicates that requests are not forwarded to the backend server.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
