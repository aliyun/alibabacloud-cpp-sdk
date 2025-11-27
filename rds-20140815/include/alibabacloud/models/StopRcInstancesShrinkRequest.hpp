// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPRCINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPRCINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class StopRCInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_TO_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_FROM_JSON(ForceStop, forceStop_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StopRCInstancesShrinkRequest() = default ;
    StopRCInstancesShrinkRequest(const StopRCInstancesShrinkRequest &) = default ;
    StopRCInstancesShrinkRequest(StopRCInstancesShrinkRequest &&) = default ;
    StopRCInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopRCInstancesShrinkRequest() = default ;
    StopRCInstancesShrinkRequest& operator=(const StopRCInstancesShrinkRequest &) = default ;
    StopRCInstancesShrinkRequest& operator=(StopRCInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchOptimization_ == nullptr
        && return this->forceStop_ == nullptr && return this->instanceIdsShrink_ == nullptr && return this->regionId_ == nullptr; };
    // batchOptimization Field Functions 
    bool hasBatchOptimization() const { return this->batchOptimization_ != nullptr;};
    void deleteBatchOptimization() { this->batchOptimization_ = nullptr;};
    inline string batchOptimization() const { DARABONBA_PTR_GET_DEFAULT(batchOptimization_, "") };
    inline StopRCInstancesShrinkRequest& setBatchOptimization(string batchOptimization) { DARABONBA_PTR_SET_VALUE(batchOptimization_, batchOptimization) };


    // forceStop Field Functions 
    bool hasForceStop() const { return this->forceStop_ != nullptr;};
    void deleteForceStop() { this->forceStop_ = nullptr;};
    inline bool forceStop() const { DARABONBA_PTR_GET_DEFAULT(forceStop_, false) };
    inline StopRCInstancesShrinkRequest& setForceStop(bool forceStop) { DARABONBA_PTR_SET_VALUE(forceStop_, forceStop) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline StopRCInstancesShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopRCInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The batch operation mode. Set the value to **AllTogether**. In this mode, if all instances are stopped, a success message is returned. If an instance fails the verification, none of the instances can be stopped and an error message is returned.
    std::shared_ptr<string> batchOptimization_ = nullptr;
    // Specifies whether to forcefully stop the instance. Valid values:
    // 
    // *   **true**: forcefully stops the instance. If an instance fails to stop due to system or network issues, a forced stop can be triggered, **though it may result in data loss.**
    // *   **false**: does not forcefully stop the instance. This is the default value.
    std::shared_ptr<bool> forceStop_ = nullptr;
    // The node IDs.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
