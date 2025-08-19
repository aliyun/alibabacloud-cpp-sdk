// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLNODECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLNODECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContainerdConfig.hpp>
#include <alibabacloud/models/KubeletConfig.hpp>
#include <alibabacloud/models/ModifyNodePoolNodeConfigRequestOsConfig.hpp>
#include <alibabacloud/models/ModifyNodePoolNodeConfigRequestRollingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyNodePoolNodeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolNodeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(containerd_config, containerdConfig_);
      DARABONBA_PTR_TO_JSON(kubelet_config, kubeletConfig_);
      DARABONBA_PTR_TO_JSON(os_config, osConfig_);
      DARABONBA_PTR_TO_JSON(rolling_policy, rollingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolNodeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(containerd_config, containerdConfig_);
      DARABONBA_PTR_FROM_JSON(kubelet_config, kubeletConfig_);
      DARABONBA_PTR_FROM_JSON(os_config, osConfig_);
      DARABONBA_PTR_FROM_JSON(rolling_policy, rollingPolicy_);
    };
    ModifyNodePoolNodeConfigRequest() = default ;
    ModifyNodePoolNodeConfigRequest(const ModifyNodePoolNodeConfigRequest &) = default ;
    ModifyNodePoolNodeConfigRequest(ModifyNodePoolNodeConfigRequest &&) = default ;
    ModifyNodePoolNodeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolNodeConfigRequest() = default ;
    ModifyNodePoolNodeConfigRequest& operator=(const ModifyNodePoolNodeConfigRequest &) = default ;
    ModifyNodePoolNodeConfigRequest& operator=(ModifyNodePoolNodeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerdConfig_ != nullptr
        && this->kubeletConfig_ != nullptr && this->osConfig_ != nullptr && this->rollingPolicy_ != nullptr; };
    // containerdConfig Field Functions 
    bool hasContainerdConfig() const { return this->containerdConfig_ != nullptr;};
    void deleteContainerdConfig() { this->containerdConfig_ = nullptr;};
    inline const ContainerdConfig & containerdConfig() const { DARABONBA_PTR_GET_CONST(containerdConfig_, ContainerdConfig) };
    inline ContainerdConfig containerdConfig() { DARABONBA_PTR_GET(containerdConfig_, ContainerdConfig) };
    inline ModifyNodePoolNodeConfigRequest& setContainerdConfig(const ContainerdConfig & containerdConfig) { DARABONBA_PTR_SET_VALUE(containerdConfig_, containerdConfig) };
    inline ModifyNodePoolNodeConfigRequest& setContainerdConfig(ContainerdConfig && containerdConfig) { DARABONBA_PTR_SET_RVALUE(containerdConfig_, containerdConfig) };


    // kubeletConfig Field Functions 
    bool hasKubeletConfig() const { return this->kubeletConfig_ != nullptr;};
    void deleteKubeletConfig() { this->kubeletConfig_ = nullptr;};
    inline const KubeletConfig & kubeletConfig() const { DARABONBA_PTR_GET_CONST(kubeletConfig_, KubeletConfig) };
    inline KubeletConfig kubeletConfig() { DARABONBA_PTR_GET(kubeletConfig_, KubeletConfig) };
    inline ModifyNodePoolNodeConfigRequest& setKubeletConfig(const KubeletConfig & kubeletConfig) { DARABONBA_PTR_SET_VALUE(kubeletConfig_, kubeletConfig) };
    inline ModifyNodePoolNodeConfigRequest& setKubeletConfig(KubeletConfig && kubeletConfig) { DARABONBA_PTR_SET_RVALUE(kubeletConfig_, kubeletConfig) };


    // osConfig Field Functions 
    bool hasOsConfig() const { return this->osConfig_ != nullptr;};
    void deleteOsConfig() { this->osConfig_ = nullptr;};
    inline const ModifyNodePoolNodeConfigRequestOsConfig & osConfig() const { DARABONBA_PTR_GET_CONST(osConfig_, ModifyNodePoolNodeConfigRequestOsConfig) };
    inline ModifyNodePoolNodeConfigRequestOsConfig osConfig() { DARABONBA_PTR_GET(osConfig_, ModifyNodePoolNodeConfigRequestOsConfig) };
    inline ModifyNodePoolNodeConfigRequest& setOsConfig(const ModifyNodePoolNodeConfigRequestOsConfig & osConfig) { DARABONBA_PTR_SET_VALUE(osConfig_, osConfig) };
    inline ModifyNodePoolNodeConfigRequest& setOsConfig(ModifyNodePoolNodeConfigRequestOsConfig && osConfig) { DARABONBA_PTR_SET_RVALUE(osConfig_, osConfig) };


    // rollingPolicy Field Functions 
    bool hasRollingPolicy() const { return this->rollingPolicy_ != nullptr;};
    void deleteRollingPolicy() { this->rollingPolicy_ = nullptr;};
    inline const ModifyNodePoolNodeConfigRequestRollingPolicy & rollingPolicy() const { DARABONBA_PTR_GET_CONST(rollingPolicy_, ModifyNodePoolNodeConfigRequestRollingPolicy) };
    inline ModifyNodePoolNodeConfigRequestRollingPolicy rollingPolicy() { DARABONBA_PTR_GET(rollingPolicy_, ModifyNodePoolNodeConfigRequestRollingPolicy) };
    inline ModifyNodePoolNodeConfigRequest& setRollingPolicy(const ModifyNodePoolNodeConfigRequestRollingPolicy & rollingPolicy) { DARABONBA_PTR_SET_VALUE(rollingPolicy_, rollingPolicy) };
    inline ModifyNodePoolNodeConfigRequest& setRollingPolicy(ModifyNodePoolNodeConfigRequestRollingPolicy && rollingPolicy) { DARABONBA_PTR_SET_RVALUE(rollingPolicy_, rollingPolicy) };


  protected:
    // The containerd runtime configuration.
    std::shared_ptr<ContainerdConfig> containerdConfig_ = nullptr;
    // The kubelet configurations.
    std::shared_ptr<KubeletConfig> kubeletConfig_ = nullptr;
    // The OS configuration.
    std::shared_ptr<ModifyNodePoolNodeConfigRequestOsConfig> osConfig_ = nullptr;
    // The rolling policy configuration.
    std::shared_ptr<ModifyNodePoolNodeConfigRequestRollingPolicy> rollingPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
