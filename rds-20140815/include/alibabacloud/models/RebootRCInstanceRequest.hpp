// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTRCINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTRCINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RebootRCInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootRCInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRCInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RebootRCInstanceRequest() = default ;
    RebootRCInstanceRequest(const RebootRCInstanceRequest &) = default ;
    RebootRCInstanceRequest(RebootRCInstanceRequest &&) = default ;
    RebootRCInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootRCInstanceRequest() = default ;
    RebootRCInstanceRequest& operator=(const RebootRCInstanceRequest &) = default ;
    RebootRCInstanceRequest& operator=(RebootRCInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->forceStop_ == nullptr && this->instanceId_ == nullptr && this->rebootTime_ == nullptr && this->regionId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RebootRCInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool getForceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline RebootRCInstanceRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RebootRCInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // rebootTime Field Functions 
    bool hasRebootTime() const { return this->rebootTime_ != nullptr;};
    void deleteRebootTime() { this->rebootTime_ = nullptr;};
    inline string getRebootTime() const { DARABONBA_PTR_GET_DEFAULT(rebootTime_, "") };
    inline RebootRCInstanceRequest& setRebootTime(string rebootTime) { DARABONBA_PTR_SET_VALUE(rebootTime_, rebootTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RebootRCInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and insufficient inventory errors. If the request passes the dry run, the DryRunOperation error code is returned. Otherwise, an error message is returned.
    // *   **false**: performs a dry run and performs the actual request. If the request passes the dry run, the instance is restarted.
    // 
    // Default value: false
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to forcefully stop the instance before you restart the instance Valid values:
    // 
    // *   **true**: forcefully stops the instance. This operation is equivalent to the typical power-off operation. Cache data that is not written to storage devices on the instance is lost.
    // *   **false** (default): normally stops the instance.
    shared_ptr<bool> forceStop_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> rebootTime_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
