// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAiOutboundTaskDetailResponseBodyDataRecallRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(ForecastCallRate, forecastCallRate_);
      DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumRepeated, numRepeated_);
      DARABONBA_PTR_TO_JSON(OutboundNums, outboundNums_);
      DARABONBA_PTR_TO_JSON(RecallRule, recallRule_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentRate, concurrentRate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(ForecastCallRate, forecastCallRate_);
      DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
      DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumRepeated, numRepeated_);
      DARABONBA_PTR_FROM_JSON(OutboundNums, outboundNums_);
      DARABONBA_PTR_FROM_JSON(RecallRule, recallRule_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAiOutboundTaskDetailResponseBodyData() = default ;
    GetAiOutboundTaskDetailResponseBodyData(const GetAiOutboundTaskDetailResponseBodyData &) = default ;
    GetAiOutboundTaskDetailResponseBodyData(GetAiOutboundTaskDetailResponseBodyData &&) = default ;
    GetAiOutboundTaskDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskDetailResponseBodyData() = default ;
    GetAiOutboundTaskDetailResponseBodyData& operator=(const GetAiOutboundTaskDetailResponseBodyData &) = default ;
    GetAiOutboundTaskDetailResponseBodyData& operator=(GetAiOutboundTaskDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrentRate_ == nullptr
        && return this->description_ == nullptr && return this->executionTime_ == nullptr && return this->forecastCallRate_ == nullptr && return this->handlerId_ == nullptr && return this->handlerName_ == nullptr
        && return this->name_ == nullptr && return this->numRepeated_ == nullptr && return this->outboundNums_ == nullptr && return this->recallRule_ == nullptr && return this->status_ == nullptr
        && return this->statusDesc_ == nullptr && return this->taskId_ == nullptr && return this->type_ == nullptr; };
    // concurrentRate Field Functions 
    bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
    void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
    inline int32_t concurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
    inline GetAiOutboundTaskDetailResponseBodyData& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAiOutboundTaskDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline GetAiOutboundTaskDetailResponseBodyData& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // forecastCallRate Field Functions 
    bool hasForecastCallRate() const { return this->forecastCallRate_ != nullptr;};
    void deleteForecastCallRate() { this->forecastCallRate_ = nullptr;};
    inline float forecastCallRate() const { DARABONBA_PTR_GET_DEFAULT(forecastCallRate_, 0.0) };
    inline GetAiOutboundTaskDetailResponseBodyData& setForecastCallRate(float forecastCallRate) { DARABONBA_PTR_SET_VALUE(forecastCallRate_, forecastCallRate) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline GetAiOutboundTaskDetailResponseBodyData& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // handlerName Field Functions 
    bool hasHandlerName() const { return this->handlerName_ != nullptr;};
    void deleteHandlerName() { this->handlerName_ = nullptr;};
    inline string handlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
    inline GetAiOutboundTaskDetailResponseBodyData& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAiOutboundTaskDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRepeated Field Functions 
    bool hasNumRepeated() const { return this->numRepeated_ != nullptr;};
    void deleteNumRepeated() { this->numRepeated_ = nullptr;};
    inline int32_t numRepeated() const { DARABONBA_PTR_GET_DEFAULT(numRepeated_, 0) };
    inline GetAiOutboundTaskDetailResponseBodyData& setNumRepeated(int32_t numRepeated) { DARABONBA_PTR_SET_VALUE(numRepeated_, numRepeated) };


    // outboundNums Field Functions 
    bool hasOutboundNums() const { return this->outboundNums_ != nullptr;};
    void deleteOutboundNums() { this->outboundNums_ = nullptr;};
    inline const vector<string> & outboundNums() const { DARABONBA_PTR_GET_CONST(outboundNums_, vector<string>) };
    inline vector<string> outboundNums() { DARABONBA_PTR_GET(outboundNums_, vector<string>) };
    inline GetAiOutboundTaskDetailResponseBodyData& setOutboundNums(const vector<string> & outboundNums) { DARABONBA_PTR_SET_VALUE(outboundNums_, outboundNums) };
    inline GetAiOutboundTaskDetailResponseBodyData& setOutboundNums(vector<string> && outboundNums) { DARABONBA_PTR_SET_RVALUE(outboundNums_, outboundNums) };


    // recallRule Field Functions 
    bool hasRecallRule() const { return this->recallRule_ != nullptr;};
    void deleteRecallRule() { this->recallRule_ = nullptr;};
    inline const Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule & recallRule() const { DARABONBA_PTR_GET_CONST(recallRule_, Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule) };
    inline Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule recallRule() { DARABONBA_PTR_GET(recallRule_, Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule) };
    inline GetAiOutboundTaskDetailResponseBodyData& setRecallRule(const Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule & recallRule) { DARABONBA_PTR_SET_VALUE(recallRule_, recallRule) };
    inline GetAiOutboundTaskDetailResponseBodyData& setRecallRule(Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule && recallRule) { DARABONBA_PTR_SET_RVALUE(recallRule_, recallRule) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAiOutboundTaskDetailResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetAiOutboundTaskDetailResponseBodyData& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetAiOutboundTaskDetailResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetAiOutboundTaskDetailResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> concurrentRate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> executionTime_ = nullptr;
    std::shared_ptr<float> forecastCallRate_ = nullptr;
    std::shared_ptr<int64_t> handlerId_ = nullptr;
    std::shared_ptr<string> handlerName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> numRepeated_ = nullptr;
    std::shared_ptr<vector<string>> outboundNums_ = nullptr;
    std::shared_ptr<Models::GetAiOutboundTaskDetailResponseBodyDataRecallRule> recallRule_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
