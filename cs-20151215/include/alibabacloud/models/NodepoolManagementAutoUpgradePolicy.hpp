// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTAUTOUPGRADEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolManagementAutoUpgradePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolManagementAutoUpgradePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
    };
    NodepoolManagementAutoUpgradePolicy() = default ;
    NodepoolManagementAutoUpgradePolicy(const NodepoolManagementAutoUpgradePolicy &) = default ;
    NodepoolManagementAutoUpgradePolicy(NodepoolManagementAutoUpgradePolicy &&) = default ;
    NodepoolManagementAutoUpgradePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolManagementAutoUpgradePolicy() = default ;
    NodepoolManagementAutoUpgradePolicy& operator=(const NodepoolManagementAutoUpgradePolicy &) = default ;
    NodepoolManagementAutoUpgradePolicy& operator=(NodepoolManagementAutoUpgradePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoUpgradeKubelet_ != nullptr; };
    // autoUpgradeKubelet Field Functions 
    bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
    void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
    inline bool autoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
    inline NodepoolManagementAutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


  protected:
    std::shared_ptr<bool> autoUpgradeKubelet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
