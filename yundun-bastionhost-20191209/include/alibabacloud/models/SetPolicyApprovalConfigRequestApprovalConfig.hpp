// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYAPPROVALCONFIGREQUESTAPPROVALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYAPPROVALCONFIGREQUESTAPPROVALCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyApprovalConfigRequestApprovalConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyApprovalConfigRequestApprovalConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyApprovalConfigRequestApprovalConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    SetPolicyApprovalConfigRequestApprovalConfig() = default ;
    SetPolicyApprovalConfigRequestApprovalConfig(const SetPolicyApprovalConfigRequestApprovalConfig &) = default ;
    SetPolicyApprovalConfigRequestApprovalConfig(SetPolicyApprovalConfigRequestApprovalConfig &&) = default ;
    SetPolicyApprovalConfigRequestApprovalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyApprovalConfigRequestApprovalConfig() = default ;
    SetPolicyApprovalConfigRequestApprovalConfig& operator=(const SetPolicyApprovalConfigRequestApprovalConfig &) = default ;
    SetPolicyApprovalConfigRequestApprovalConfig& operator=(SetPolicyApprovalConfigRequestApprovalConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->switchStatus_ == nullptr; };
    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline SetPolicyApprovalConfigRequestApprovalConfig& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    // Specifies whether to enable O&M approval in the control policy. Valid values:
    // 
    // * **On**: enables O&M approval.
    // * **Off**: disables O&M approval.
    // 
    // This parameter is required.
    std::shared_ptr<string> switchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
