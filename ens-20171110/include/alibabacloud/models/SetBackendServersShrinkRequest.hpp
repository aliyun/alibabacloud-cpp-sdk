// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKENDSERVERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETBACKENDSERVERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class SetBackendServersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBackendServersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServersShrink_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetBackendServersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServersShrink_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    SetBackendServersShrinkRequest() = default ;
    SetBackendServersShrinkRequest(const SetBackendServersShrinkRequest &) = default ;
    SetBackendServersShrinkRequest(SetBackendServersShrinkRequest &&) = default ;
    SetBackendServersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBackendServersShrinkRequest() = default ;
    SetBackendServersShrinkRequest& operator=(const SetBackendServersShrinkRequest &) = default ;
    SetBackendServersShrinkRequest& operator=(SetBackendServersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServersShrink_ == nullptr
        && this->loadBalancerId_ == nullptr; };
    // backendServersShrink Field Functions 
    bool hasBackendServersShrink() const { return this->backendServersShrink_ != nullptr;};
    void deleteBackendServersShrink() { this->backendServersShrink_ = nullptr;};
    inline string getBackendServersShrink() const { DARABONBA_PTR_GET_DEFAULT(backendServersShrink_, "") };
    inline SetBackendServersShrinkRequest& setBackendServersShrink(string backendServersShrink) { DARABONBA_PTR_SET_VALUE(backendServersShrink_, backendServersShrink) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetBackendServersShrinkRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you added. You can modify the weights of up to 20 backend servers in each request.
    // 
    // This parameter is required.
    shared_ptr<string> backendServersShrink_ {};
    // The ID of the Edge Load Balancer (ELB) instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
