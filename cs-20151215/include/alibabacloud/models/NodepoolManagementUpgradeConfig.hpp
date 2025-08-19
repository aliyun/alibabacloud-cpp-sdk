// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTUPGRADECONFIG_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTUPGRADECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolManagementUpgradeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolManagementUpgradeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(max_unavailable, maxUnavailable_);
      DARABONBA_PTR_TO_JSON(surge, surge_);
      DARABONBA_PTR_TO_JSON(surge_percentage, surgePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolManagementUpgradeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(max_unavailable, maxUnavailable_);
      DARABONBA_PTR_FROM_JSON(surge, surge_);
      DARABONBA_PTR_FROM_JSON(surge_percentage, surgePercentage_);
    };
    NodepoolManagementUpgradeConfig() = default ;
    NodepoolManagementUpgradeConfig(const NodepoolManagementUpgradeConfig &) = default ;
    NodepoolManagementUpgradeConfig(NodepoolManagementUpgradeConfig &&) = default ;
    NodepoolManagementUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolManagementUpgradeConfig() = default ;
    NodepoolManagementUpgradeConfig& operator=(const NodepoolManagementUpgradeConfig &) = default ;
    NodepoolManagementUpgradeConfig& operator=(NodepoolManagementUpgradeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoUpgrade_ != nullptr
        && this->maxUnavailable_ != nullptr && this->surge_ != nullptr && this->surgePercentage_ != nullptr; };
    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline bool autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
    inline NodepoolManagementUpgradeConfig& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // maxUnavailable Field Functions 
    bool hasMaxUnavailable() const { return this->maxUnavailable_ != nullptr;};
    void deleteMaxUnavailable() { this->maxUnavailable_ = nullptr;};
    inline int64_t maxUnavailable() const { DARABONBA_PTR_GET_DEFAULT(maxUnavailable_, 0L) };
    inline NodepoolManagementUpgradeConfig& setMaxUnavailable(int64_t maxUnavailable) { DARABONBA_PTR_SET_VALUE(maxUnavailable_, maxUnavailable) };


    // surge Field Functions 
    bool hasSurge() const { return this->surge_ != nullptr;};
    void deleteSurge() { this->surge_ = nullptr;};
    inline int64_t surge() const { DARABONBA_PTR_GET_DEFAULT(surge_, 0L) };
    inline NodepoolManagementUpgradeConfig& setSurge(int64_t surge) { DARABONBA_PTR_SET_VALUE(surge_, surge) };


    // surgePercentage Field Functions 
    bool hasSurgePercentage() const { return this->surgePercentage_ != nullptr;};
    void deleteSurgePercentage() { this->surgePercentage_ = nullptr;};
    inline int64_t surgePercentage() const { DARABONBA_PTR_GET_DEFAULT(surgePercentage_, 0L) };
    inline NodepoolManagementUpgradeConfig& setSurgePercentage(int64_t surgePercentage) { DARABONBA_PTR_SET_VALUE(surgePercentage_, surgePercentage) };


  protected:
    std::shared_ptr<bool> autoUpgrade_ = nullptr;
    std::shared_ptr<int64_t> maxUnavailable_ = nullptr;
    std::shared_ptr<int64_t> surge_ = nullptr;
    std::shared_ptr<int64_t> surgePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
