// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONSHRINKREQUESTSECURITYOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONSHRINKREQUESTSECURITYOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationShrinkRequestSecurityOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationShrinkRequestSecurityOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidentialComputingMode, confidentialComputingMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationShrinkRequestSecurityOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidentialComputingMode, confidentialComputingMode_);
    };
    ModifyScalingConfigurationShrinkRequestSecurityOptions() = default ;
    ModifyScalingConfigurationShrinkRequestSecurityOptions(const ModifyScalingConfigurationShrinkRequestSecurityOptions &) = default ;
    ModifyScalingConfigurationShrinkRequestSecurityOptions(ModifyScalingConfigurationShrinkRequestSecurityOptions &&) = default ;
    ModifyScalingConfigurationShrinkRequestSecurityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationShrinkRequestSecurityOptions() = default ;
    ModifyScalingConfigurationShrinkRequestSecurityOptions& operator=(const ModifyScalingConfigurationShrinkRequestSecurityOptions &) = default ;
    ModifyScalingConfigurationShrinkRequestSecurityOptions& operator=(ModifyScalingConfigurationShrinkRequestSecurityOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidentialComputingMode_ != nullptr; };
    // confidentialComputingMode Field Functions 
    bool hasConfidentialComputingMode() const { return this->confidentialComputingMode_ != nullptr;};
    void deleteConfidentialComputingMode() { this->confidentialComputingMode_ = nullptr;};
    inline string confidentialComputingMode() const { DARABONBA_PTR_GET_DEFAULT(confidentialComputingMode_, "") };
    inline ModifyScalingConfigurationShrinkRequestSecurityOptions& setConfidentialComputingMode(string confidentialComputingMode) { DARABONBA_PTR_SET_VALUE(confidentialComputingMode_, confidentialComputingMode) };


  protected:
    // The confidential computing mode. Valid values:
    // 
    // *   Enclave: An enclave-based confidential computing environment is built on the instance. For more information, see [Build a confidential computing environment by using Enclave](https://help.aliyun.com/document_detail/203433.html).
    // *   TDX: A Trust Domain Extensions (TDX) confidential computing environment is built on the instance. For more information, see [Build a TDX confidential computing environment](https://help.aliyun.com/document_detail/479090.html).
    std::shared_ptr<string> confidentialComputingMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
