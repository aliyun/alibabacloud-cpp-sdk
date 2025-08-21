// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETBACKENDSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetBackendServersRequestBackendServers.hpp>
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
    virtual bool empty() const override { this->backendServers_ != nullptr
        && this->loadBalancerId_ != nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<SetBackendServersRequestBackendServers> & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<SetBackendServersRequestBackendServers>) };
    inline vector<SetBackendServersRequestBackendServers> backendServers() { DARABONBA_PTR_GET(backendServers_, vector<SetBackendServersRequestBackendServers>) };
    inline SetBackendServersRequest& setBackendServers(const vector<SetBackendServersRequestBackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline SetBackendServersRequest& setBackendServers(vector<SetBackendServersRequestBackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetBackendServersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you added. You can modify the weights of up to 20 backend servers in each request.
    // 
    // This parameter is required.
    std::shared_ptr<vector<SetBackendServersRequestBackendServers>> backendServers_ = nullptr;
    // The ID of the Edge Load Balancer (ELB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
