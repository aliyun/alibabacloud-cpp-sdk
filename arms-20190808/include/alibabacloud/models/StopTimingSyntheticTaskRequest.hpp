// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPTIMINGSYNTHETICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPTIMINGSYNTHETICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class StopTimingSyntheticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTimingSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, StopTimingSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    StopTimingSyntheticTaskRequest() = default ;
    StopTimingSyntheticTaskRequest(const StopTimingSyntheticTaskRequest &) = default ;
    StopTimingSyntheticTaskRequest(StopTimingSyntheticTaskRequest &&) = default ;
    StopTimingSyntheticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTimingSyntheticTaskRequest() = default ;
    StopTimingSyntheticTaskRequest& operator=(const StopTimingSyntheticTaskRequest &) = default ;
    StopTimingSyntheticTaskRequest& operator=(StopTimingSyntheticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->taskIds_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopTimingSyntheticTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline StopTimingSyntheticTaskRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline StopTimingSyntheticTaskRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The task IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
