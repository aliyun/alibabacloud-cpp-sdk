// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBACKENDSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddBackendServersRequestBackendServers.hpp>
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
    virtual bool empty() const override { this->backendServers_ != nullptr
        && this->loadBalancerId_ != nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<AddBackendServersRequestBackendServers> & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<AddBackendServersRequestBackendServers>) };
    inline vector<AddBackendServersRequestBackendServers> backendServers() { DARABONBA_PTR_GET(backendServers_, vector<AddBackendServersRequestBackendServers>) };
    inline AddBackendServersRequest& setBackendServers(const vector<AddBackendServersRequestBackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline AddBackendServersRequest& setBackendServers(vector<AddBackendServersRequestBackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline AddBackendServersRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you want to add to the Edge Load Balancer (ELB) instance. You can add up to 20 backend servers at a time.
    // 
    // >  Only Edge Node Service (ENS) instances that are in the running state can be added to the ELB instance as backend servers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddBackendServersRequestBackendServers>> backendServers_ = nullptr;
    // The frontend port that is used by the Edge Load Balance (ELB) instance. Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
