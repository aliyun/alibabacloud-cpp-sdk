// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTMODIFICATIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTMODIFICATIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateLoadBalancerRequestModificationProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequestModificationProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequestModificationProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateLoadBalancerRequestModificationProtectionConfig() = default ;
    CreateLoadBalancerRequestModificationProtectionConfig(const CreateLoadBalancerRequestModificationProtectionConfig &) = default ;
    CreateLoadBalancerRequestModificationProtectionConfig(CreateLoadBalancerRequestModificationProtectionConfig &&) = default ;
    CreateLoadBalancerRequestModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequestModificationProtectionConfig() = default ;
    CreateLoadBalancerRequestModificationProtectionConfig& operator=(const CreateLoadBalancerRequestModificationProtectionConfig &) = default ;
    CreateLoadBalancerRequestModificationProtectionConfig& operator=(CreateLoadBalancerRequestModificationProtectionConfig &&) = default ;
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
    inline CreateLoadBalancerRequestModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateLoadBalancerRequestModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason for enabling the configuration read-only mode.
    // 
    // The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    // 
    // >  This parameter takes effect only when **Status** is set to **ConsoleProtection**.
    std::shared_ptr<string> reason_ = nullptr;
    // Specifies whether to enable the configuration read-only mode. Valid values:
    // 
    // *   **NonProtection**: Disables the configuration read-only mode. In this case, the value of the **Reason** parameter that you specify does not take effect. If you specify **Reason**, the value of the parameter is cleared.
    // *   **ConsoleProtection**: Enables the configuration read-only mode. In this case, the value of the **Reason** parameter that you specify takes effect.****
    // 
    // >  If the parameter is set to **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the ALB instance in the ALB console. However, you can call API operations to modify the configurations of the ALB instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
