// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYAPPROVALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYAPPROVALCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyApprovalConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyApprovalConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyApprovalConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    GetPolicyResponseBodyPolicyApprovalConfig() = default ;
    GetPolicyResponseBodyPolicyApprovalConfig(const GetPolicyResponseBodyPolicyApprovalConfig &) = default ;
    GetPolicyResponseBodyPolicyApprovalConfig(GetPolicyResponseBodyPolicyApprovalConfig &&) = default ;
    GetPolicyResponseBodyPolicyApprovalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyApprovalConfig() = default ;
    GetPolicyResponseBodyPolicyApprovalConfig& operator=(const GetPolicyResponseBodyPolicyApprovalConfig &) = default ;
    GetPolicyResponseBodyPolicyApprovalConfig& operator=(GetPolicyResponseBodyPolicyApprovalConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->switchStatus_ != nullptr; };
    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline GetPolicyResponseBodyPolicyApprovalConfig& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    // Indicates whether O\\&M approval is enabled in the control policy. Valid values:
    // 
    // *   **On**: O\\&M approval is enabled.
    // *   **Off**: O\\&M approval is disabled.
    std::shared_ptr<string> switchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
