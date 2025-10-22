// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIOUTBOUNDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIOUTBOUNDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAiOutboundTaskRequestRecallRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateAiOutboundTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiOutboundTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(ForecastCallRate, forecastCallRate_);
      DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumRepeated, numRepeated_);
      DARABONBA_PTR_TO_JSON(OutboundNums, outboundNums_);
      DARABONBA_PTR_TO_JSON(RecallRule, recallRule_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiOutboundTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(ForecastCallRate, forecastCallRate_);
      DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumRepeated, numRepeated_);
      DARABONBA_PTR_FROM_JSON(OutboundNums, outboundNums_);
      DARABONBA_PTR_FROM_JSON(RecallRule, recallRule_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateAiOutboundTaskRequest() = default ;
    UpdateAiOutboundTaskRequest(const UpdateAiOutboundTaskRequest &) = default ;
    UpdateAiOutboundTaskRequest(UpdateAiOutboundTaskRequest &&) = default ;
    UpdateAiOutboundTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiOutboundTaskRequest() = default ;
    UpdateAiOutboundTaskRequest& operator=(const UpdateAiOutboundTaskRequest &) = default ;
    UpdateAiOutboundTaskRequest& operator=(UpdateAiOutboundTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrentRate_ == nullptr
        && return this->description_ == nullptr && return this->executionTime_ == nullptr && return this->forecastCallRate_ == nullptr && return this->handlerId_ == nullptr && return this->instanceId_ == nullptr
        && return this->name_ == nullptr && return this->numRepeated_ == nullptr && return this->outboundNums_ == nullptr && return this->recallRule_ == nullptr && return this->taskId_ == nullptr; };
    // concurrentRate Field Functions 
    bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
    void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
    inline int32_t concurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
    inline UpdateAiOutboundTaskRequest& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAiOutboundTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline UpdateAiOutboundTaskRequest& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // forecastCallRate Field Functions 
    bool hasForecastCallRate() const { return this->forecastCallRate_ != nullptr;};
    void deleteForecastCallRate() { this->forecastCallRate_ = nullptr;};
    inline float forecastCallRate() const { DARABONBA_PTR_GET_DEFAULT(forecastCallRate_, 0.0) };
    inline UpdateAiOutboundTaskRequest& setForecastCallRate(float forecastCallRate) { DARABONBA_PTR_SET_VALUE(forecastCallRate_, forecastCallRate) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline UpdateAiOutboundTaskRequest& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAiOutboundTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAiOutboundTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRepeated Field Functions 
    bool hasNumRepeated() const { return this->numRepeated_ != nullptr;};
    void deleteNumRepeated() { this->numRepeated_ = nullptr;};
    inline int32_t numRepeated() const { DARABONBA_PTR_GET_DEFAULT(numRepeated_, 0) };
    inline UpdateAiOutboundTaskRequest& setNumRepeated(int32_t numRepeated) { DARABONBA_PTR_SET_VALUE(numRepeated_, numRepeated) };


    // outboundNums Field Functions 
    bool hasOutboundNums() const { return this->outboundNums_ != nullptr;};
    void deleteOutboundNums() { this->outboundNums_ = nullptr;};
    inline const vector<string> & outboundNums() const { DARABONBA_PTR_GET_CONST(outboundNums_, vector<string>) };
    inline vector<string> outboundNums() { DARABONBA_PTR_GET(outboundNums_, vector<string>) };
    inline UpdateAiOutboundTaskRequest& setOutboundNums(const vector<string> & outboundNums) { DARABONBA_PTR_SET_VALUE(outboundNums_, outboundNums) };
    inline UpdateAiOutboundTaskRequest& setOutboundNums(vector<string> && outboundNums) { DARABONBA_PTR_SET_RVALUE(outboundNums_, outboundNums) };


    // recallRule Field Functions 
    bool hasRecallRule() const { return this->recallRule_ != nullptr;};
    void deleteRecallRule() { this->recallRule_ = nullptr;};
    inline const UpdateAiOutboundTaskRequestRecallRule & recallRule() const { DARABONBA_PTR_GET_CONST(recallRule_, UpdateAiOutboundTaskRequestRecallRule) };
    inline UpdateAiOutboundTaskRequestRecallRule recallRule() { DARABONBA_PTR_GET(recallRule_, UpdateAiOutboundTaskRequestRecallRule) };
    inline UpdateAiOutboundTaskRequest& setRecallRule(const UpdateAiOutboundTaskRequestRecallRule & recallRule) { DARABONBA_PTR_SET_VALUE(recallRule_, recallRule) };
    inline UpdateAiOutboundTaskRequest& setRecallRule(UpdateAiOutboundTaskRequestRecallRule && recallRule) { DARABONBA_PTR_SET_RVALUE(recallRule_, recallRule) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline UpdateAiOutboundTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> concurrentRate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> executionTime_ = nullptr;
    std::shared_ptr<float> forecastCallRate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> handlerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> numRepeated_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> outboundNums_ = nullptr;
    std::shared_ptr<UpdateAiOutboundTaskRequestRecallRule> recallRule_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
