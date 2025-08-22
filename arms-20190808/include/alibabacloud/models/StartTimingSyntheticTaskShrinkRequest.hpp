// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTIMINGSYNTHETICTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTTIMINGSYNTHETICTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class StartTimingSyntheticTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTimingSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartTimingSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIdsShrink_);
    };
    StartTimingSyntheticTaskShrinkRequest() = default ;
    StartTimingSyntheticTaskShrinkRequest(const StartTimingSyntheticTaskShrinkRequest &) = default ;
    StartTimingSyntheticTaskShrinkRequest(StartTimingSyntheticTaskShrinkRequest &&) = default ;
    StartTimingSyntheticTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTimingSyntheticTaskShrinkRequest() = default ;
    StartTimingSyntheticTaskShrinkRequest& operator=(const StartTimingSyntheticTaskShrinkRequest &) = default ;
    StartTimingSyntheticTaskShrinkRequest& operator=(StartTimingSyntheticTaskShrinkRequest &&) = default ;
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
    inline StartTimingSyntheticTaskShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string taskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline StartTimingSyntheticTaskShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


  protected:
    // The region ID. Default value: cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
    // The task IDs.
    std::shared_ptr<string> taskIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
