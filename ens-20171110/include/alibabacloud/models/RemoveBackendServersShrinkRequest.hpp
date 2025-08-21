// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEBACKENDSERVERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveBackendServersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveBackendServersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServersShrink_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveBackendServersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServersShrink_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    RemoveBackendServersShrinkRequest() = default ;
    RemoveBackendServersShrinkRequest(const RemoveBackendServersShrinkRequest &) = default ;
    RemoveBackendServersShrinkRequest(RemoveBackendServersShrinkRequest &&) = default ;
    RemoveBackendServersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveBackendServersShrinkRequest() = default ;
    RemoveBackendServersShrinkRequest& operator=(const RemoveBackendServersShrinkRequest &) = default ;
    RemoveBackendServersShrinkRequest& operator=(RemoveBackendServersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendServersShrink_ != nullptr
        && this->loadBalancerId_ != nullptr; };
    // backendServersShrink Field Functions 
    bool hasBackendServersShrink() const { return this->backendServersShrink_ != nullptr;};
    void deleteBackendServersShrink() { this->backendServersShrink_ = nullptr;};
    inline string backendServersShrink() const { DARABONBA_PTR_GET_DEFAULT(backendServersShrink_, "") };
    inline RemoveBackendServersShrinkRequest& setBackendServersShrink(string backendServersShrink) { DARABONBA_PTR_SET_VALUE(backendServersShrink_, backendServersShrink) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline RemoveBackendServersShrinkRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The list of backend servers that you want to remove. You can remove up to 20 backend servers at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> backendServersShrink_ = nullptr;
    // The ID of the Edge Load Balancer (ELB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
