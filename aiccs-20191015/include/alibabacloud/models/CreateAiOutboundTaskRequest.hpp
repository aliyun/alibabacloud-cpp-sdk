// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIOUTBOUNDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIOUTBOUNDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateAiOutboundTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAiOutboundTaskRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAiOutboundTaskRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAiOutboundTaskRequest() = default ;
    CreateAiOutboundTaskRequest(const CreateAiOutboundTaskRequest &) = default ;
    CreateAiOutboundTaskRequest(CreateAiOutboundTaskRequest &&) = default ;
    CreateAiOutboundTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAiOutboundTaskRequest() = default ;
    CreateAiOutboundTaskRequest& operator=(const CreateAiOutboundTaskRequest &) = default ;
    CreateAiOutboundTaskRequest& operator=(CreateAiOutboundTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallRule& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
      };
      friend void from_json(const Darabonba::Json& j, RecallRule& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
      };
      RecallRule() = default ;
      RecallRule(const RecallRule &) = default ;
      RecallRule(RecallRule &&) = default ;
      RecallRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallRule() = default ;
      RecallRule& operator=(const RecallRule &) = default ;
      RecallRule& operator=(RecallRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->interval_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline RecallRule& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline RecallRule& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    protected:
      // The number of retries. Valid values: **1 to 3**.
      shared_ptr<int32_t> count_ {};
      // The retry interval. Valid values: **1 to 60**. Unit: minutes.
      shared_ptr<int32_t> interval_ {};
    };

    virtual bool empty() const override { return this->concurrentRate_ == nullptr
        && this->description_ == nullptr && this->executionTime_ == nullptr && this->forecastCallRate_ == nullptr && this->handlerId_ == nullptr && this->instanceId_ == nullptr
        && this->name_ == nullptr && this->numRepeated_ == nullptr && this->outboundNums_ == nullptr && this->recallRule_ == nullptr && this->type_ == nullptr; };
    // concurrentRate Field Functions 
    bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
    void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
    inline int32_t getConcurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
    inline CreateAiOutboundTaskRequest& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAiOutboundTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline CreateAiOutboundTaskRequest& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // forecastCallRate Field Functions 
    bool hasForecastCallRate() const { return this->forecastCallRate_ != nullptr;};
    void deleteForecastCallRate() { this->forecastCallRate_ = nullptr;};
    inline float getForecastCallRate() const { DARABONBA_PTR_GET_DEFAULT(forecastCallRate_, 0.0) };
    inline CreateAiOutboundTaskRequest& setForecastCallRate(float forecastCallRate) { DARABONBA_PTR_SET_VALUE(forecastCallRate_, forecastCallRate) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline CreateAiOutboundTaskRequest& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAiOutboundTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAiOutboundTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRepeated Field Functions 
    bool hasNumRepeated() const { return this->numRepeated_ != nullptr;};
    void deleteNumRepeated() { this->numRepeated_ = nullptr;};
    inline int32_t getNumRepeated() const { DARABONBA_PTR_GET_DEFAULT(numRepeated_, 0) };
    inline CreateAiOutboundTaskRequest& setNumRepeated(int32_t numRepeated) { DARABONBA_PTR_SET_VALUE(numRepeated_, numRepeated) };


    // outboundNums Field Functions 
    bool hasOutboundNums() const { return this->outboundNums_ != nullptr;};
    void deleteOutboundNums() { this->outboundNums_ = nullptr;};
    inline const vector<string> & getOutboundNums() const { DARABONBA_PTR_GET_CONST(outboundNums_, vector<string>) };
    inline vector<string> getOutboundNums() { DARABONBA_PTR_GET(outboundNums_, vector<string>) };
    inline CreateAiOutboundTaskRequest& setOutboundNums(const vector<string> & outboundNums) { DARABONBA_PTR_SET_VALUE(outboundNums_, outboundNums) };
    inline CreateAiOutboundTaskRequest& setOutboundNums(vector<string> && outboundNums) { DARABONBA_PTR_SET_RVALUE(outboundNums_, outboundNums) };


    // recallRule Field Functions 
    bool hasRecallRule() const { return this->recallRule_ != nullptr;};
    void deleteRecallRule() { this->recallRule_ = nullptr;};
    inline const CreateAiOutboundTaskRequest::RecallRule & getRecallRule() const { DARABONBA_PTR_GET_CONST(recallRule_, CreateAiOutboundTaskRequest::RecallRule) };
    inline CreateAiOutboundTaskRequest::RecallRule getRecallRule() { DARABONBA_PTR_GET(recallRule_, CreateAiOutboundTaskRequest::RecallRule) };
    inline CreateAiOutboundTaskRequest& setRecallRule(const CreateAiOutboundTaskRequest::RecallRule & recallRule) { DARABONBA_PTR_SET_VALUE(recallRule_, recallRule) };
    inline CreateAiOutboundTaskRequest& setRecallRule(CreateAiOutboundTaskRequest::RecallRule && recallRule) { DARABONBA_PTR_SET_RVALUE(recallRule_, recallRule) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateAiOutboundTaskRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The call concurrency for automatic outbound calls.
    shared_ptr<int32_t> concurrentRate_ {};
    // The task description. The description can be up to 100 characters in length.
    shared_ptr<string> description_ {};
    // The task execution time. The value is in JSON format.
    // 
    // > The end time (end) must be later than the start time (start).
    // 
    // This parameter is required.
    shared_ptr<string> executionTime_ {};
    // The fixed call ratio for predictive outbound calls. Valid values: **≥ 1**.
    shared_ptr<float> forecastCallRate_ {};
    // The skill group ID (for predictive outbound calls) or IVR ID (for automatic outbound calls). You can obtain this information from the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview).
    // 
    // This parameter is required.
    shared_ptr<int64_t> handlerId_ {};
    // The ID of the Artificial Intelligence Cloud Call Service (AICCS) instance.
    // You can obtain the instance ID from **Instance Management** in the left-side navigation pane of the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The task name. The name must be 1 to 15 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The callee number deduplication policy. Valid values:
    // - **0**: deduplicate within the task.
    // - **1**: no deduplication.
    // 
    // This parameter is required.
    shared_ptr<int32_t> numRepeated_ {};
    // The outbound caller numbers.
    // 
    // > The numbers must be purchased numbers. Separate multiple numbers with commas (,).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> outboundNums_ {};
    // The failed call retry policy.
    // 
    // > If the value is empty, no retry is performed.
    shared_ptr<CreateAiOutboundTaskRequest::RecallRule> recallRule_ {};
    // The task type. Valid values:
    // - **2**: predictive outbound call.
    // - **3**: automatic outbound call.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
