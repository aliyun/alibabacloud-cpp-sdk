// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLNODECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLNODECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Hugepage.hpp>
#include <alibabacloud/models/ContainerdConfig.hpp>
#include <alibabacloud/models/KubeletConfig.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(node_names, nodeNames_);
      DARABONBA_PTR_TO_JSON(os_config, osConfig_);
      DARABONBA_PTR_TO_JSON(rolling_policy, rollingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolNodeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(containerd_config, containerdConfig_);
      DARABONBA_PTR_FROM_JSON(kubelet_config, kubeletConfig_);
      DARABONBA_PTR_FROM_JSON(node_names, nodeNames_);
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
    class RollingPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RollingPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(max_parallelism, maxParallelism_);
      };
      friend void from_json(const Darabonba::Json& j, RollingPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(max_parallelism, maxParallelism_);
      };
      RollingPolicy() = default ;
      RollingPolicy(const RollingPolicy &) = default ;
      RollingPolicy(RollingPolicy &&) = default ;
      RollingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RollingPolicy() = default ;
      RollingPolicy& operator=(const RollingPolicy &) = default ;
      RollingPolicy& operator=(RollingPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxParallelism_ == nullptr; };
      // maxParallelism Field Functions 
      bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
      void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
      inline int64_t getMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0L) };
      inline RollingPolicy& setMaxParallelism(int64_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


    protected:
      // The maximum number of unavailable nodes.
      shared_ptr<int64_t> maxParallelism_ {};
    };

    class OsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(hugepage, hugepage_);
        DARABONBA_ANY_TO_JSON(sysctl, sysctl_);
      };
      friend void from_json(const Darabonba::Json& j, OsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(hugepage, hugepage_);
        DARABONBA_ANY_FROM_JSON(sysctl, sysctl_);
      };
      OsConfig() = default ;
      OsConfig(const OsConfig &) = default ;
      OsConfig(OsConfig &&) = default ;
      OsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OsConfig() = default ;
      OsConfig& operator=(const OsConfig &) = default ;
      OsConfig& operator=(OsConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hugepage_ == nullptr
        && this->sysctl_ == nullptr; };
      // hugepage Field Functions 
      bool hasHugepage() const { return this->hugepage_ != nullptr;};
      void deleteHugepage() { this->hugepage_ = nullptr;};
      inline const Hugepage & getHugepage() const { DARABONBA_PTR_GET_CONST(hugepage_, Hugepage) };
      inline Hugepage getHugepage() { DARABONBA_PTR_GET(hugepage_, Hugepage) };
      inline OsConfig& setHugepage(const Hugepage & hugepage) { DARABONBA_PTR_SET_VALUE(hugepage_, hugepage) };
      inline OsConfig& setHugepage(Hugepage && hugepage) { DARABONBA_PTR_SET_RVALUE(hugepage_, hugepage) };


      // sysctl Field Functions 
      bool hasSysctl() const { return this->sysctl_ != nullptr;};
      void deleteSysctl() { this->sysctl_ = nullptr;};
      inline       const Darabonba::Json & getSysctl() const { DARABONBA_GET(sysctl_) };
      Darabonba::Json & getSysctl() { DARABONBA_GET(sysctl_) };
      inline OsConfig& setSysctl(const Darabonba::Json & sysctl) { DARABONBA_SET_VALUE(sysctl_, sysctl) };
      inline OsConfig& setSysctl(Darabonba::Json && sysctl) { DARABONBA_SET_RVALUE(sysctl_, sysctl) };


    protected:
      shared_ptr<Hugepage> hugepage_ {};
      // The sysctl configuration.
      Darabonba::Json sysctl_ {};
    };

    virtual bool empty() const override { return this->containerdConfig_ == nullptr
        && this->kubeletConfig_ == nullptr && this->nodeNames_ == nullptr && this->osConfig_ == nullptr && this->rollingPolicy_ == nullptr; };
    // containerdConfig Field Functions 
    bool hasContainerdConfig() const { return this->containerdConfig_ != nullptr;};
    void deleteContainerdConfig() { this->containerdConfig_ = nullptr;};
    inline const ContainerdConfig & getContainerdConfig() const { DARABONBA_PTR_GET_CONST(containerdConfig_, ContainerdConfig) };
    inline ContainerdConfig getContainerdConfig() { DARABONBA_PTR_GET(containerdConfig_, ContainerdConfig) };
    inline ModifyNodePoolNodeConfigRequest& setContainerdConfig(const ContainerdConfig & containerdConfig) { DARABONBA_PTR_SET_VALUE(containerdConfig_, containerdConfig) };
    inline ModifyNodePoolNodeConfigRequest& setContainerdConfig(ContainerdConfig && containerdConfig) { DARABONBA_PTR_SET_RVALUE(containerdConfig_, containerdConfig) };


    // kubeletConfig Field Functions 
    bool hasKubeletConfig() const { return this->kubeletConfig_ != nullptr;};
    void deleteKubeletConfig() { this->kubeletConfig_ = nullptr;};
    inline const KubeletConfig & getKubeletConfig() const { DARABONBA_PTR_GET_CONST(kubeletConfig_, KubeletConfig) };
    inline KubeletConfig getKubeletConfig() { DARABONBA_PTR_GET(kubeletConfig_, KubeletConfig) };
    inline ModifyNodePoolNodeConfigRequest& setKubeletConfig(const KubeletConfig & kubeletConfig) { DARABONBA_PTR_SET_VALUE(kubeletConfig_, kubeletConfig) };
    inline ModifyNodePoolNodeConfigRequest& setKubeletConfig(KubeletConfig && kubeletConfig) { DARABONBA_PTR_SET_RVALUE(kubeletConfig_, kubeletConfig) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & getNodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> getNodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline ModifyNodePoolNodeConfigRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline ModifyNodePoolNodeConfigRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // osConfig Field Functions 
    bool hasOsConfig() const { return this->osConfig_ != nullptr;};
    void deleteOsConfig() { this->osConfig_ = nullptr;};
    inline const ModifyNodePoolNodeConfigRequest::OsConfig & getOsConfig() const { DARABONBA_PTR_GET_CONST(osConfig_, ModifyNodePoolNodeConfigRequest::OsConfig) };
    inline ModifyNodePoolNodeConfigRequest::OsConfig getOsConfig() { DARABONBA_PTR_GET(osConfig_, ModifyNodePoolNodeConfigRequest::OsConfig) };
    inline ModifyNodePoolNodeConfigRequest& setOsConfig(const ModifyNodePoolNodeConfigRequest::OsConfig & osConfig) { DARABONBA_PTR_SET_VALUE(osConfig_, osConfig) };
    inline ModifyNodePoolNodeConfigRequest& setOsConfig(ModifyNodePoolNodeConfigRequest::OsConfig && osConfig) { DARABONBA_PTR_SET_RVALUE(osConfig_, osConfig) };


    // rollingPolicy Field Functions 
    bool hasRollingPolicy() const { return this->rollingPolicy_ != nullptr;};
    void deleteRollingPolicy() { this->rollingPolicy_ = nullptr;};
    inline const ModifyNodePoolNodeConfigRequest::RollingPolicy & getRollingPolicy() const { DARABONBA_PTR_GET_CONST(rollingPolicy_, ModifyNodePoolNodeConfigRequest::RollingPolicy) };
    inline ModifyNodePoolNodeConfigRequest::RollingPolicy getRollingPolicy() { DARABONBA_PTR_GET(rollingPolicy_, ModifyNodePoolNodeConfigRequest::RollingPolicy) };
    inline ModifyNodePoolNodeConfigRequest& setRollingPolicy(const ModifyNodePoolNodeConfigRequest::RollingPolicy & rollingPolicy) { DARABONBA_PTR_SET_VALUE(rollingPolicy_, rollingPolicy) };
    inline ModifyNodePoolNodeConfigRequest& setRollingPolicy(ModifyNodePoolNodeConfigRequest::RollingPolicy && rollingPolicy) { DARABONBA_PTR_SET_RVALUE(rollingPolicy_, rollingPolicy) };


  protected:
    // The containerd runtime configuration.
    shared_ptr<ContainerdConfig> containerdConfig_ {};
    // The kubelet configurations.
    shared_ptr<KubeletConfig> kubeletConfig_ {};
    shared_ptr<vector<string>> nodeNames_ {};
    // The OS configuration.
    shared_ptr<ModifyNodePoolNodeConfigRequest::OsConfig> osConfig_ {};
    // The rolling policy configuration.
    shared_ptr<ModifyNodePoolNodeConfigRequest::RollingPolicy> rollingPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
