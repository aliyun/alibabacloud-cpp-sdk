// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      inline int32_t getMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0) };
      inline RollingPolicy& setMaxParallelism(int32_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


    protected:
      // The maximum number of nodes concurrently upgraded per batch.
      shared_ptr<int32_t> maxParallelism_ {};
    };

    virtual bool empty() const override { return this->componentName_ == nullptr
        && this->masterOnly_ == nullptr && this->nextVersion_ == nullptr && this->rollingPolicy_ == nullptr && this->version_ == nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline UpgradeClusterRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // masterOnly Field Functions 
    bool hasMasterOnly() const { return this->masterOnly_ != nullptr;};
    void deleteMasterOnly() { this->masterOnly_ = nullptr;};
    inline bool getMasterOnly() const { DARABONBA_PTR_GET_DEFAULT(masterOnly_, false) };
    inline UpgradeClusterRequest& setMasterOnly(bool masterOnly) { DARABONBA_PTR_SET_VALUE(masterOnly_, masterOnly) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline UpgradeClusterRequest& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // rollingPolicy Field Functions 
    bool hasRollingPolicy() const { return this->rollingPolicy_ != nullptr;};
    void deleteRollingPolicy() { this->rollingPolicy_ = nullptr;};
    inline const UpgradeClusterRequest::RollingPolicy & getRollingPolicy() const { DARABONBA_PTR_GET_CONST(rollingPolicy_, UpgradeClusterRequest::RollingPolicy) };
    inline UpgradeClusterRequest::RollingPolicy getRollingPolicy() { DARABONBA_PTR_GET(rollingPolicy_, UpgradeClusterRequest::RollingPolicy) };
    inline UpgradeClusterRequest& setRollingPolicy(const UpgradeClusterRequest::RollingPolicy & rollingPolicy) { DARABONBA_PTR_SET_VALUE(rollingPolicy_, rollingPolicy) };
    inline UpgradeClusterRequest& setRollingPolicy(UpgradeClusterRequest::RollingPolicy && rollingPolicy) { DARABONBA_PTR_SET_RVALUE(rollingPolicy_, rollingPolicy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeClusterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is deprecated. No need to pass values.
    shared_ptr<string> componentName_ {};
    // Specifies whether to upgrade only master nodes. Valid values:
    // 
    // *   true: upgrades master nodes only.
    // *   false: upgrades both master and worker nodes.
    shared_ptr<bool> masterOnly_ {};
    // The target Kubernetes version for cluster upgrade.
    shared_ptr<string> nextVersion_ {};
    // The rolling update configuration.
    shared_ptr<UpgradeClusterRequest::RollingPolicy> rollingPolicy_ {};
    // This parameter is deprecated. Use next_version to specify the upgrade target Kubernetes version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
