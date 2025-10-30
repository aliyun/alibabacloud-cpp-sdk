// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpgradeClusterRequestRollingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(component_name, componentName_);
      DARABONBA_PTR_TO_JSON(master_only, masterOnly_);
      DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
      DARABONBA_PTR_TO_JSON(rolling_policy, rollingPolicy_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(component_name, componentName_);
      DARABONBA_PTR_FROM_JSON(master_only, masterOnly_);
      DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
      DARABONBA_PTR_FROM_JSON(rolling_policy, rollingPolicy_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpgradeClusterRequest() = default ;
    UpgradeClusterRequest(const UpgradeClusterRequest &) = default ;
    UpgradeClusterRequest(UpgradeClusterRequest &&) = default ;
    UpgradeClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterRequest() = default ;
    UpgradeClusterRequest& operator=(const UpgradeClusterRequest &) = default ;
    UpgradeClusterRequest& operator=(UpgradeClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentName_ == nullptr
        && return this->masterOnly_ == nullptr && return this->nextVersion_ == nullptr && return this->rollingPolicy_ == nullptr && return this->version_ == nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline UpgradeClusterRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // masterOnly Field Functions 
    bool hasMasterOnly() const { return this->masterOnly_ != nullptr;};
    void deleteMasterOnly() { this->masterOnly_ = nullptr;};
    inline bool masterOnly() const { DARABONBA_PTR_GET_DEFAULT(masterOnly_, false) };
    inline UpgradeClusterRequest& setMasterOnly(bool masterOnly) { DARABONBA_PTR_SET_VALUE(masterOnly_, masterOnly) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline UpgradeClusterRequest& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // rollingPolicy Field Functions 
    bool hasRollingPolicy() const { return this->rollingPolicy_ != nullptr;};
    void deleteRollingPolicy() { this->rollingPolicy_ = nullptr;};
    inline const UpgradeClusterRequestRollingPolicy & rollingPolicy() const { DARABONBA_PTR_GET_CONST(rollingPolicy_, UpgradeClusterRequestRollingPolicy) };
    inline UpgradeClusterRequestRollingPolicy rollingPolicy() { DARABONBA_PTR_GET(rollingPolicy_, UpgradeClusterRequestRollingPolicy) };
    inline UpgradeClusterRequest& setRollingPolicy(const UpgradeClusterRequestRollingPolicy & rollingPolicy) { DARABONBA_PTR_SET_VALUE(rollingPolicy_, rollingPolicy) };
    inline UpgradeClusterRequest& setRollingPolicy(UpgradeClusterRequestRollingPolicy && rollingPolicy) { DARABONBA_PTR_SET_RVALUE(rollingPolicy_, rollingPolicy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeClusterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is deprecated. No need to pass values.
    std::shared_ptr<string> componentName_ = nullptr;
    // Specifies whether to upgrade only master nodes. Valid values:
    // 
    // *   true: upgrades master nodes only.
    // *   false: upgrades both master and worker nodes.
    std::shared_ptr<bool> masterOnly_ = nullptr;
    // The target Kubernetes version for cluster upgrade.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // The rolling update configuration.
    std::shared_ptr<UpgradeClusterRequestRollingPolicy> rollingPolicy_ = nullptr;
    // This parameter is deprecated. Use next_version to specify the upgrade target Kubernetes version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
