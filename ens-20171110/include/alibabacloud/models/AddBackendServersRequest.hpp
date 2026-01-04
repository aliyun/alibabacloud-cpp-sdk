// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBACKENDSERVERSREQUEST_HPP_
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
  class AddBackendServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBackendServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddBackendServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    AddBackendServersRequest() = default ;
    AddBackendServersRequest(const AddBackendServersRequest &) = default ;
    AddBackendServersRequest(AddBackendServersRequest &&) = default ;
    AddBackendServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBackendServersRequest() = default ;
    AddBackendServersRequest& operator=(const AddBackendServersRequest &) = default ;
    AddBackendServersRequest& operator=(AddBackendServersRequest &&) = default ;
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
      // The backend port that is used by the ELB instance.
      shared_ptr<int32_t> port_ {};
      // The ID of the ENS instance.
      // 
      // This parameter is required.
      shared_ptr<string> serverId_ {};
      // The type of the backend server. Valid values:
      // 
      // *   **ens**: ENS instance
      // *   **eni**: elastic network interface (ENI)
      shared_ptr<string> type_ {};
      // The weight of the backend server. Default value: 100. Valid values: **0** to **100**.
      // 
      // >  The value 0 indicates that requests are not forwarded to the backend server.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->backendServers_ == nullptr
        && this->loadBalancerId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<AddBackendServersRequest::BackendServers> & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<AddBackendServersRequest::BackendServers>) };
    inline vector<AddBackendServersRequest::BackendServers> getBackendServers() { DARABONBA_PTR_GET(backendServers_, vector<AddBackendServersRequest::BackendServers>) };
    inline AddBackendServersRequest& setBackendServers(const vector<AddBackendServersRequest::BackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline AddBackendServersRequest& setBackendServers(vector<AddBackendServersRequest::BackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline AddBackendServersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you want to add to the Edge Load Balancer (ELB) instance. You can add up to 20 backend servers at a time.
    // 
    // >  Only Edge Node Service (ENS) instances that are in the running state can be added to the ELB instance as backend servers.
    // 
    // This parameter is required.
    shared_ptr<vector<AddBackendServersRequest::BackendServers>> backendServers_ {};
    // The frontend port that is used by the Edge Load Balance (ELB) instance. Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
