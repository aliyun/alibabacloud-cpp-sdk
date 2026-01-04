// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOADBALANCERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOADBALANCERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyLoadBalancerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoadBalancerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoadBalancerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
    };
    ModifyLoadBalancerAttributeRequest() = default ;
    ModifyLoadBalancerAttributeRequest(const ModifyLoadBalancerAttributeRequest &) = default ;
    ModifyLoadBalancerAttributeRequest(ModifyLoadBalancerAttributeRequest &&) = default ;
    ModifyLoadBalancerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoadBalancerAttributeRequest() = default ;
    ModifyLoadBalancerAttributeRequest& operator=(const ModifyLoadBalancerAttributeRequest &) = default ;
    ModifyLoadBalancerAttributeRequest& operator=(ModifyLoadBalancerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->loadBalancerName_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ModifyLoadBalancerAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline ModifyLoadBalancerAttributeRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


  protected:
    // The ID of the ELB instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The name of the ELB instance. The name must be **2** to **128** characters in length.
    // 
    // >  The value cannot start with `http://` or `https://`.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
