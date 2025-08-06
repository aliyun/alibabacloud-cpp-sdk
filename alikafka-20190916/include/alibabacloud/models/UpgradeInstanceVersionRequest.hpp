// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEINSTANCEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEINSTANCEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpgradeInstanceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeInstanceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetVersion, targetVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeInstanceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetVersion, targetVersion_);
    };
    UpgradeInstanceVersionRequest() = default ;
    UpgradeInstanceVersionRequest(const UpgradeInstanceVersionRequest &) = default ;
    UpgradeInstanceVersionRequest(UpgradeInstanceVersionRequest &&) = default ;
    UpgradeInstanceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeInstanceVersionRequest() = default ;
    UpgradeInstanceVersionRequest& operator=(const UpgradeInstanceVersionRequest &) = default ;
    UpgradeInstanceVersionRequest& operator=(UpgradeInstanceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr && this->targetVersion_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeInstanceVersionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeInstanceVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string targetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline UpgradeInstanceVersionRequest& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The major version to be upgraded to. Valid values:
    // 
    // *   **0.10.2**
    // *   **2.2.0**
    // 
    // If you set this parameter to the current major version, the system upgrades the instance to the latest minor version.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
