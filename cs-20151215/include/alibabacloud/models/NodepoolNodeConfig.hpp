// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLNODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLNODECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KubeletConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolNodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolNodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(kubelet_configuration, kubeletConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolNodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(kubelet_configuration, kubeletConfiguration_);
    };
    NodepoolNodeConfig() = default ;
    NodepoolNodeConfig(const NodepoolNodeConfig &) = default ;
    NodepoolNodeConfig(NodepoolNodeConfig &&) = default ;
    NodepoolNodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolNodeConfig() = default ;
    NodepoolNodeConfig& operator=(const NodepoolNodeConfig &) = default ;
    NodepoolNodeConfig& operator=(NodepoolNodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kubeletConfiguration_ == nullptr; };
    // kubeletConfiguration Field Functions 
    bool hasKubeletConfiguration() const { return this->kubeletConfiguration_ != nullptr;};
    void deleteKubeletConfiguration() { this->kubeletConfiguration_ = nullptr;};
    inline const Models::KubeletConfig & kubeletConfiguration() const { DARABONBA_PTR_GET_CONST(kubeletConfiguration_, Models::KubeletConfig) };
    inline Models::KubeletConfig kubeletConfiguration() { DARABONBA_PTR_GET(kubeletConfiguration_, Models::KubeletConfig) };
    inline NodepoolNodeConfig& setKubeletConfiguration(const Models::KubeletConfig & kubeletConfiguration) { DARABONBA_PTR_SET_VALUE(kubeletConfiguration_, kubeletConfiguration) };
    inline NodepoolNodeConfig& setKubeletConfiguration(Models::KubeletConfig && kubeletConfiguration) { DARABONBA_PTR_SET_RVALUE(kubeletConfiguration_, kubeletConfiguration) };


  protected:
    std::shared_ptr<Models::KubeletConfig> kubeletConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
