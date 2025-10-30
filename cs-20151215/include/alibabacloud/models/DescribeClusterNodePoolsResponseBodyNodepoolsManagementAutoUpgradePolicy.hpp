// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy(const DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy(DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgradeKubelet_ == nullptr; };
    // autoUpgradeKubelet Field Functions 
    bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
    void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
    inline bool autoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsManagementAutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


  protected:
    // Specifies whether to allow the auto upgrade of the kubelet. This parameter takes effect only if `auto_upgrade` is set to true. Valid values:
    // 
    // *   `true`: allows the auto upgrade of the kubelet.
    // *   `false`: no.
    std::shared_ptr<bool> autoUpgradeKubelet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
