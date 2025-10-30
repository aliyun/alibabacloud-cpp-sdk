// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
    };
    DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy() = default ;
    DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy(const DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy &) = default ;
    DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy(DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy() = default ;
    DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy& operator=(const DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy &) = default ;
    DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy& operator=(DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgradeKubelet_ == nullptr; };
    // autoUpgradeKubelet Field Functions 
    bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
    void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
    inline bool autoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyManagementAutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


  protected:
    // Whether to allow automatic upgrading of kubelet.
    std::shared_ptr<bool> autoUpgradeKubelet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
