// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRCINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRCINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class StartRCInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchOptimization, batchOptimization_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StartRCInstancesShrinkRequest() = default ;
    StartRCInstancesShrinkRequest(const StartRCInstancesShrinkRequest &) = default ;
    StartRCInstancesShrinkRequest(StartRCInstancesShrinkRequest &&) = default ;
    StartRCInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRCInstancesShrinkRequest() = default ;
    StartRCInstancesShrinkRequest& operator=(const StartRCInstancesShrinkRequest &) = default ;
    StartRCInstancesShrinkRequest& operator=(StartRCInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchOptimization_ == nullptr
        && return this->instanceIdsShrink_ == nullptr && return this->regionId_ == nullptr; };
    // batchOptimization Field Functions 
    bool hasBatchOptimization() const { return this->batchOptimization_ != nullptr;};
    void deleteBatchOptimization() { this->batchOptimization_ = nullptr;};
    inline string batchOptimization() const { DARABONBA_PTR_GET_DEFAULT(batchOptimization_, "") };
    inline StartRCInstancesShrinkRequest& setBatchOptimization(string batchOptimization) { DARABONBA_PTR_SET_VALUE(batchOptimization_, batchOptimization) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline StartRCInstancesShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartRCInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The batch operation mode. Set the value to **AllTogether**. In this mode, a success message is returned if all specified instances are started. If an instance fails the verification, none of the specified instances can be started and an error message is returned.
    std::shared_ptr<string> batchOptimization_ = nullptr;
    // The node IDs.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
