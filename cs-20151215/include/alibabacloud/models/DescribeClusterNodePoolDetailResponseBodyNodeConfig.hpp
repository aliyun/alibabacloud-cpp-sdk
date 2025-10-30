// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KubeletConfig.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyNodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyNodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(kubelet_configuration, kubeletConfiguration_);
      DARABONBA_PTR_TO_JSON(node_os_config, nodeOsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyNodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(kubelet_configuration, kubeletConfiguration_);
      DARABONBA_PTR_FROM_JSON(node_os_config, nodeOsConfig_);
    };
    DescribeClusterNodePoolDetailResponseBodyNodeConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfig(const DescribeClusterNodePoolDetailResponseBodyNodeConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfig(DescribeClusterNodePoolDetailResponseBodyNodeConfig &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyNodeConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfig& operator=(const DescribeClusterNodePoolDetailResponseBodyNodeConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfig& operator=(DescribeClusterNodePoolDetailResponseBodyNodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kubeletConfiguration_ == nullptr
        && return this->nodeOsConfig_ == nullptr; };
    // kubeletConfiguration Field Functions 
    bool hasKubeletConfiguration() const { return this->kubeletConfiguration_ != nullptr;};
    void deleteKubeletConfiguration() { this->kubeletConfiguration_ = nullptr;};
    inline const Models::KubeletConfig & kubeletConfiguration() const { DARABONBA_PTR_GET_CONST(kubeletConfiguration_, Models::KubeletConfig) };
    inline Models::KubeletConfig kubeletConfiguration() { DARABONBA_PTR_GET(kubeletConfiguration_, Models::KubeletConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfig& setKubeletConfiguration(const Models::KubeletConfig & kubeletConfiguration) { DARABONBA_PTR_SET_VALUE(kubeletConfiguration_, kubeletConfiguration) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfig& setKubeletConfiguration(Models::KubeletConfig && kubeletConfiguration) { DARABONBA_PTR_SET_RVALUE(kubeletConfiguration_, kubeletConfiguration) };


    // nodeOsConfig Field Functions 
    bool hasNodeOsConfig() const { return this->nodeOsConfig_ != nullptr;};
    void deleteNodeOsConfig() { this->nodeOsConfig_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig & nodeOsConfig() const { DARABONBA_PTR_GET_CONST(nodeOsConfig_, Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig nodeOsConfig() { DARABONBA_PTR_GET(nodeOsConfig_, Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfig& setNodeOsConfig(const Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig & nodeOsConfig) { DARABONBA_PTR_SET_VALUE(nodeOsConfig_, nodeOsConfig) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfig& setNodeOsConfig(Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig && nodeOsConfig) { DARABONBA_PTR_SET_RVALUE(nodeOsConfig_, nodeOsConfig) };


  protected:
    // The configurations of the kubelet.
    std::shared_ptr<Models::KubeletConfig> kubeletConfiguration_ = nullptr;
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig> nodeOsConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
