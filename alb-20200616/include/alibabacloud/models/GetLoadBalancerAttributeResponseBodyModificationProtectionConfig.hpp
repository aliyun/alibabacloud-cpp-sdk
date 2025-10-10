// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYMODIFICATIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYMODIFICATIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyModificationProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &&) = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& operator=(const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& operator=(GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reason_ != nullptr
        && this->status_ != nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the configuration read-only mode is enabled.
    // 
    // The name must be 2 to 128 character characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    // 
    // This parameter takes effect only if **Status** is set to **ConsoleProtection**.
    std::shared_ptr<string> reason_ = nullptr;
    // Specifies whether the configuration read-only mode is enabled. Valid values:
    // 
    // *   **NonProtection**: The configuration read-only mode is disabled. In this case, the value of the **Reason** parameter that you specify does not take effect. If you set **Reason**, the value is cleared.
    // *   **ConsoleProtection**: The configuration read-only mode is enabled. In this case, the value of the **Reason** parameter takes effect.****
    // 
    // >  If the parameter is set to **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the ALB instance in the ALB console. However, you can call API operations to modify the configurations of the ALB instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
