// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPTIMINGSYNTHETICTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPTIMINGSYNTHETICTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class StopTimingSyntheticTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTimingSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StopTimingSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIdsShrink_);
    };
    StopTimingSyntheticTaskShrinkRequest() = default ;
    StopTimingSyntheticTaskShrinkRequest(const StopTimingSyntheticTaskShrinkRequest &) = default ;
    StopTimingSyntheticTaskShrinkRequest(StopTimingSyntheticTaskShrinkRequest &&) = default ;
    StopTimingSyntheticTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTimingSyntheticTaskShrinkRequest() = default ;
    StopTimingSyntheticTaskShrinkRequest& operator=(const StopTimingSyntheticTaskShrinkRequest &) = default ;
    StopTimingSyntheticTaskShrinkRequest& operator=(StopTimingSyntheticTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->taskIdsShrink_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopTimingSyntheticTaskShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string taskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline StopTimingSyntheticTaskShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The task IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
