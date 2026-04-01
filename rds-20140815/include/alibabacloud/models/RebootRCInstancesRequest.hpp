// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTRCINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTRCINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RebootRCInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootRCInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_TO_JSON(ForceReboot, forceReboot_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRCInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_FROM_JSON(ForceReboot, forceReboot_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RebootRCInstancesRequest() = default ;
    RebootRCInstancesRequest(const RebootRCInstancesRequest &) = default ;
    RebootRCInstancesRequest(RebootRCInstancesRequest &&) = default ;
    RebootRCInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootRCInstancesRequest() = default ;
    RebootRCInstancesRequest& operator=(const RebootRCInstancesRequest &) = default ;
    RebootRCInstancesRequest& operator=(RebootRCInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchOptimization_ == nullptr
        && this->forceReboot_ == nullptr && this->instanceIds_ == nullptr && this->rebootTime_ == nullptr && this->regionId_ == nullptr; };
    // batchOptimization Field Functions 
    bool hasBatchOptimization() const { return this->batchOptimization_ != nullptr;};
    void deleteBatchOptimization() { this->batchOptimization_ = nullptr;};
    inline string getBatchOptimization() const { DARABONBA_PTR_GET_DEFAULT(batchOptimization_, "") };
    inline RebootRCInstancesRequest& setBatchOptimization(string batchOptimization) { DARABONBA_PTR_SET_VALUE(batchOptimization_, batchOptimization) };


    // forceReboot Field Functions 
    bool hasForceReboot() const { return this->forceReboot_ != nullptr;};
    void deleteForceReboot() { this->forceReboot_ = nullptr;};
    inline bool getForceReboot() const { DARABONBA_PTR_GET_DEFAULT(forceReboot_, false) };
    inline RebootRCInstancesRequest& setForceReboot(bool forceReboot) { DARABONBA_PTR_SET_VALUE(forceReboot_, forceReboot) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RebootRCInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RebootRCInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // rebootTime Field Functions 
    bool hasRebootTime() const { return this->rebootTime_ != nullptr;};
    void deleteRebootTime() { this->rebootTime_ = nullptr;};
    inline string getRebootTime() const { DARABONBA_PTR_GET_DEFAULT(rebootTime_, "") };
    inline RebootRCInstancesRequest& setRebootTime(string rebootTime) { DARABONBA_PTR_SET_VALUE(rebootTime_, rebootTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RebootRCInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The batch operation mode. Set the value to **AllTogether**. In this mode, if all specified instances are restarted, a success message is returned. If an instance fails the verification, none of the specified instances can be restarted and an error message is returned.
    shared_ptr<string> batchOptimization_ {};
    // Specifies whether to forcefully restart the instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> forceReboot_ {};
    // The node IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<string> rebootTime_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
