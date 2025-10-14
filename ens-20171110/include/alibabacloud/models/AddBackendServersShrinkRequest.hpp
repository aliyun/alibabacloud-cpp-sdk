// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBACKENDSERVERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBACKENDSERVERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AddBackendServersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBackendServersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServersShrink_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddBackendServersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServersShrink_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    AddBackendServersShrinkRequest() = default ;
    AddBackendServersShrinkRequest(const AddBackendServersShrinkRequest &) = default ;
    AddBackendServersShrinkRequest(AddBackendServersShrinkRequest &&) = default ;
    AddBackendServersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBackendServersShrinkRequest() = default ;
    AddBackendServersShrinkRequest& operator=(const AddBackendServersShrinkRequest &) = default ;
    AddBackendServersShrinkRequest& operator=(AddBackendServersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServersShrink_ == nullptr
        && return this->loadBalancerId_ == nullptr; };
    // backendServersShrink Field Functions 
    bool hasBackendServersShrink() const { return this->backendServersShrink_ != nullptr;};
    void deleteBackendServersShrink() { this->backendServersShrink_ = nullptr;};
    inline string backendServersShrink() const { DARABONBA_PTR_GET_DEFAULT(backendServersShrink_, "") };
    inline AddBackendServersShrinkRequest& setBackendServersShrink(string backendServersShrink) { DARABONBA_PTR_SET_VALUE(backendServersShrink_, backendServersShrink) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline AddBackendServersShrinkRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you want to add to the Edge Load Balancer (ELB) instance. You can add up to 20 backend servers at a time.
    // 
    // >  Only Edge Node Service (ENS) instances that are in the running state can be added to the ELB instance as backend servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> backendServersShrink_ = nullptr;
    // The frontend port that is used by the Edge Load Balance (ELB) instance. Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
