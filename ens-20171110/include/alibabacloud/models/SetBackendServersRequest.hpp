// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETBACKENDSERVERSREQUEST_HPP_
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
  class SetBackendServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBackendServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetBackendServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    SetBackendServersRequest() = default ;
    SetBackendServersRequest(const SetBackendServersRequest &) = default ;
    SetBackendServersRequest(SetBackendServersRequest &&) = default ;
    SetBackendServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBackendServersRequest() = default ;
    SetBackendServersRequest& operator=(const SetBackendServersRequest &) = default ;
    SetBackendServersRequest& operator=(SetBackendServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
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
      virtual bool empty() const override { return this->serverId_ == nullptr
        && this->type_ == nullptr && this->weight_ == nullptr; };
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
      // The ID of the instance that you use as the backend server.
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
      // 
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->backendServers_ == nullptr
        && this->loadBalancerId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<SetBackendServersRequest::BackendServers> & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<SetBackendServersRequest::BackendServers>) };
    inline vector<SetBackendServersRequest::BackendServers> getBackendServers() { DARABONBA_PTR_GET(backendServers_, vector<SetBackendServersRequest::BackendServers>) };
    inline SetBackendServersRequest& setBackendServers(const vector<SetBackendServersRequest::BackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline SetBackendServersRequest& setBackendServers(vector<SetBackendServersRequest::BackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetBackendServersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you added. You can modify the weights of up to 20 backend servers in each request.
    // 
    // This parameter is required.
    shared_ptr<vector<SetBackendServersRequest::BackendServers>> backendServers_ {};
    // The ID of the Edge Load Balancer (ELB) instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
