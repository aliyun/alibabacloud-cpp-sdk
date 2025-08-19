// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSNODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSNODECONFIG_HPP_
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
  class DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(kubelet_configuration, kubeletConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(kubelet_configuration, kubeletConfiguration_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig(const DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig(DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kubeletConfiguration_ != nullptr; };
    // kubeletConfiguration Field Functions 
    bool hasKubeletConfiguration() const { return this->kubeletConfiguration_ != nullptr;};
    void deleteKubeletConfiguration() { this->kubeletConfiguration_ = nullptr;};
    inline const Models::KubeletConfig & kubeletConfiguration() const { DARABONBA_PTR_GET_CONST(kubeletConfiguration_, Models::KubeletConfig) };
    inline Models::KubeletConfig kubeletConfiguration() { DARABONBA_PTR_GET(kubeletConfiguration_, Models::KubeletConfig) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig& setKubeletConfiguration(const Models::KubeletConfig & kubeletConfiguration) { DARABONBA_PTR_SET_VALUE(kubeletConfiguration_, kubeletConfiguration) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfig& setKubeletConfiguration(Models::KubeletConfig && kubeletConfiguration) { DARABONBA_PTR_SET_RVALUE(kubeletConfiguration_, kubeletConfiguration) };


  protected:
    // The parameter settings of the kubelet.
    std::shared_ptr<Models::KubeletConfig> kubeletConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
