// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOPILOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOPILOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AutopilotPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateAutopilotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutopilotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(policyConfig, policyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutopilotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(policyConfig, policyConfig_);
    };
    UpdateAutopilotPolicyRequest() = default ;
    UpdateAutopilotPolicyRequest(const UpdateAutopilotPolicyRequest &) = default ;
    UpdateAutopilotPolicyRequest(UpdateAutopilotPolicyRequest &&) = default ;
    UpdateAutopilotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutopilotPolicyRequest() = default ;
    UpdateAutopilotPolicyRequest& operator=(const UpdateAutopilotPolicyRequest &) = default ;
    UpdateAutopilotPolicyRequest& operator=(UpdateAutopilotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->policyConfig_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateAutopilotPolicyRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // policyConfig Field Functions 
    bool hasPolicyConfig() const { return this->policyConfig_ != nullptr;};
    void deletePolicyConfig() { this->policyConfig_ = nullptr;};
    inline const AutopilotPolicy & getPolicyConfig() const { DARABONBA_PTR_GET_CONST(policyConfig_, AutopilotPolicy) };
    inline AutopilotPolicy getPolicyConfig() { DARABONBA_PTR_GET(policyConfig_, AutopilotPolicy) };
    inline UpdateAutopilotPolicyRequest& setPolicyConfig(const AutopilotPolicy & policyConfig) { DARABONBA_PTR_SET_VALUE(policyConfig_, policyConfig) };
    inline UpdateAutopilotPolicyRequest& setPolicyConfig(AutopilotPolicy && policyConfig) { DARABONBA_PTR_SET_RVALUE(policyConfig_, policyConfig) };


  protected:
    // Specifies whether to enable automatic tuning. A value of true enables automatic tuning (ACTIVE), and a value of false disables tuning (DISABLED). If this parameter is not specified, the current status is not changed.
    shared_ptr<bool> enabled_ {};
    // The tuning policy configuration. This parameter uses full PUT mode: when specified, the complete policy object replaces the existing configuration entirely (fields not included are cleared). If this parameter is not specified, the existing configuration is retained.
    shared_ptr<AutopilotPolicy> policyConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
