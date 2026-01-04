// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveBackendServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveBackendServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveBackendServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    RemoveBackendServersRequest() = default ;
    RemoveBackendServersRequest(const RemoveBackendServersRequest &) = default ;
    RemoveBackendServersRequest(RemoveBackendServersRequest &&) = default ;
    RemoveBackendServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveBackendServersRequest() = default ;
    RemoveBackendServersRequest& operator=(const RemoveBackendServersRequest &) = default ;
    RemoveBackendServersRequest& operator=(RemoveBackendServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      BackendServers() = default ;
      BackendServers(const BackendServers &) = default ;
      BackendServers(BackendServers &&) = default ;
      BackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendServers() = default ;
      BackendServers& operator=(const BackendServers &) = default ;
      BackendServers& operator=(BackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline BackendServers& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline BackendServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
      inline BackendServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BackendServers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline BackendServers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The IP address of the backend server.
      shared_ptr<string> ip_ {};
      // The backend port that is used by the Edge Load Balancer (ELB) instance.
      shared_ptr<int32_t> port_ {};
      // The instance ID of the backend server.
      // 
      // This parameter is required.
      shared_ptr<string> serverId_ {};
      // The type of backend server. Valid values:
      // 
      // *   **ens**: an Edge Node Service (ENS) instance.
      // *   **eni**: an Elastic Network Interface (ENI).
      shared_ptr<string> type_ {};
      // The weight of the backend server.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->backendServers_ == nullptr
        && this->loadBalancerId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<RemoveBackendServersRequest::BackendServers> & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<RemoveBackendServersRequest::BackendServers>) };
    inline vector<RemoveBackendServersRequest::BackendServers> getBackendServers() { DARABONBA_PTR_GET(backendServers_, vector<RemoveBackendServersRequest::BackendServers>) };
    inline RemoveBackendServersRequest& setBackendServers(const vector<RemoveBackendServersRequest::BackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline RemoveBackendServersRequest& setBackendServers(vector<RemoveBackendServersRequest::BackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline RemoveBackendServersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you want to remove. You can remove up to 20 backend servers at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<RemoveBackendServersRequest::BackendServers>> backendServers_ {};
    // The ID of the Edge Load Balancer (ELB) instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
