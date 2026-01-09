// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIOUTBOUNDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIOUTBOUNDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateAiOutboundTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiOutboundTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(ForecastCallRate, forecastCallRate_);
      DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumRepeated, numRepeated_);
      DARABONBA_PTR_TO_JSON(OutboundNums, outboundNumsShrink_);
      DARABONBA_PTR_TO_JSON(RecallRule, recallRuleShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiOutboundTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(ForecastCallRate, forecastCallRate_);
      DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumRepeated, numRepeated_);
      DARABONBA_PTR_FROM_JSON(OutboundNums, outboundNumsShrink_);
      DARABONBA_PTR_FROM_JSON(RecallRule, recallRuleShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateAiOutboundTaskShrinkRequest() = default ;
    UpdateAiOutboundTaskShrinkRequest(const UpdateAiOutboundTaskShrinkRequest &) = default ;
    UpdateAiOutboundTaskShrinkRequest(UpdateAiOutboundTaskShrinkRequest &&) = default ;
    UpdateAiOutboundTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiOutboundTaskShrinkRequest() = default ;
    UpdateAiOutboundTaskShrinkRequest& operator=(const UpdateAiOutboundTaskShrinkRequest &) = default ;
    UpdateAiOutboundTaskShrinkRequest& operator=(UpdateAiOutboundTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrentRate_ == nullptr
        && this->description_ == nullptr && this->executionTime_ == nullptr && this->forecastCallRate_ == nullptr && this->handlerId_ == nullptr && this->instanceId_ == nullptr
        && this->name_ == nullptr && this->numRepeated_ == nullptr && this->outboundNumsShrink_ == nullptr && this->recallRuleShrink_ == nullptr && this->taskId_ == nullptr; };
    // concurrentRate Field Functions 
    bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
    void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
    inline int32_t getConcurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
    inline UpdateAiOutboundTaskShrinkRequest& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAiOutboundTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline UpdateAiOutboundTaskShrinkRequest& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // forecastCallRate Field Functions 
    bool hasForecastCallRate() const { return this->forecastCallRate_ != nullptr;};
    void deleteForecastCallRate() { this->forecastCallRate_ = nullptr;};
    inline float getForecastCallRate() const { DARABONBA_PTR_GET_DEFAULT(forecastCallRate_, 0.0) };
    inline UpdateAiOutboundTaskShrinkRequest& setForecastCallRate(float forecastCallRate) { DARABONBA_PTR_SET_VALUE(forecastCallRate_, forecastCallRate) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline UpdateAiOutboundTaskShrinkRequest& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAiOutboundTaskShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAiOutboundTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRepeated Field Functions 
    bool hasNumRepeated() const { return this->numRepeated_ != nullptr;};
    void deleteNumRepeated() { this->numRepeated_ = nullptr;};
    inline int32_t getNumRepeated() const { DARABONBA_PTR_GET_DEFAULT(numRepeated_, 0) };
    inline UpdateAiOutboundTaskShrinkRequest& setNumRepeated(int32_t numRepeated) { DARABONBA_PTR_SET_VALUE(numRepeated_, numRepeated) };


    // outboundNumsShrink Field Functions 
    bool hasOutboundNumsShrink() const { return this->outboundNumsShrink_ != nullptr;};
    void deleteOutboundNumsShrink() { this->outboundNumsShrink_ = nullptr;};
    inline string getOutboundNumsShrink() const { DARABONBA_PTR_GET_DEFAULT(outboundNumsShrink_, "") };
    inline UpdateAiOutboundTaskShrinkRequest& setOutboundNumsShrink(string outboundNumsShrink) { DARABONBA_PTR_SET_VALUE(outboundNumsShrink_, outboundNumsShrink) };


    // recallRuleShrink Field Functions 
    bool hasRecallRuleShrink() const { return this->recallRuleShrink_ != nullptr;};
    void deleteRecallRuleShrink() { this->recallRuleShrink_ = nullptr;};
    inline string getRecallRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(recallRuleShrink_, "") };
    inline UpdateAiOutboundTaskShrinkRequest& setRecallRuleShrink(string recallRuleShrink) { DARABONBA_PTR_SET_VALUE(recallRuleShrink_, recallRuleShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline UpdateAiOutboundTaskShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int32_t> concurrentRate_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> executionTime_ {};
    shared_ptr<float> forecastCallRate_ {};
    // This parameter is required.
    shared_ptr<int64_t> handlerId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int32_t> numRepeated_ {};
    // This parameter is required.
    shared_ptr<string> outboundNumsShrink_ {};
    shared_ptr<string> recallRuleShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
