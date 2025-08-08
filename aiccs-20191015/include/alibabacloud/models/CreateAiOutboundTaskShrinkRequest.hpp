// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIOUTBOUNDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIOUTBOUNDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateAiOutboundTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAiOutboundTaskShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAiOutboundTaskShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAiOutboundTaskShrinkRequest() = default ;
    CreateAiOutboundTaskShrinkRequest(const CreateAiOutboundTaskShrinkRequest &) = default ;
    CreateAiOutboundTaskShrinkRequest(CreateAiOutboundTaskShrinkRequest &&) = default ;
    CreateAiOutboundTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAiOutboundTaskShrinkRequest() = default ;
    CreateAiOutboundTaskShrinkRequest& operator=(const CreateAiOutboundTaskShrinkRequest &) = default ;
    CreateAiOutboundTaskShrinkRequest& operator=(CreateAiOutboundTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrentRate_ != nullptr
        && this->description_ != nullptr && this->executionTime_ != nullptr && this->forecastCallRate_ != nullptr && this->handlerId_ != nullptr && this->instanceId_ != nullptr
        && this->name_ != nullptr && this->numRepeated_ != nullptr && this->outboundNumsShrink_ != nullptr && this->recallRuleShrink_ != nullptr && this->type_ != nullptr; };
    // concurrentRate Field Functions 
    bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
    void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
    inline int32_t concurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
    inline CreateAiOutboundTaskShrinkRequest& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAiOutboundTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline CreateAiOutboundTaskShrinkRequest& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // forecastCallRate Field Functions 
    bool hasForecastCallRate() const { return this->forecastCallRate_ != nullptr;};
    void deleteForecastCallRate() { this->forecastCallRate_ = nullptr;};
    inline float forecastCallRate() const { DARABONBA_PTR_GET_DEFAULT(forecastCallRate_, 0.0) };
    inline CreateAiOutboundTaskShrinkRequest& setForecastCallRate(float forecastCallRate) { DARABONBA_PTR_SET_VALUE(forecastCallRate_, forecastCallRate) };


    // handlerId Field Functions 
    bool hasHandlerId() const { return this->handlerId_ != nullptr;};
    void deleteHandlerId() { this->handlerId_ = nullptr;};
    inline int64_t handlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
    inline CreateAiOutboundTaskShrinkRequest& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAiOutboundTaskShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAiOutboundTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numRepeated Field Functions 
    bool hasNumRepeated() const { return this->numRepeated_ != nullptr;};
    void deleteNumRepeated() { this->numRepeated_ = nullptr;};
    inline int32_t numRepeated() const { DARABONBA_PTR_GET_DEFAULT(numRepeated_, 0) };
    inline CreateAiOutboundTaskShrinkRequest& setNumRepeated(int32_t numRepeated) { DARABONBA_PTR_SET_VALUE(numRepeated_, numRepeated) };


    // outboundNumsShrink Field Functions 
    bool hasOutboundNumsShrink() const { return this->outboundNumsShrink_ != nullptr;};
    void deleteOutboundNumsShrink() { this->outboundNumsShrink_ = nullptr;};
    inline string outboundNumsShrink() const { DARABONBA_PTR_GET_DEFAULT(outboundNumsShrink_, "") };
    inline CreateAiOutboundTaskShrinkRequest& setOutboundNumsShrink(string outboundNumsShrink) { DARABONBA_PTR_SET_VALUE(outboundNumsShrink_, outboundNumsShrink) };


    // recallRuleShrink Field Functions 
    bool hasRecallRuleShrink() const { return this->recallRuleShrink_ != nullptr;};
    void deleteRecallRuleShrink() { this->recallRuleShrink_ = nullptr;};
    inline string recallRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(recallRuleShrink_, "") };
    inline CreateAiOutboundTaskShrinkRequest& setRecallRuleShrink(string recallRuleShrink) { DARABONBA_PTR_SET_VALUE(recallRuleShrink_, recallRuleShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateAiOutboundTaskShrinkRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
    std::shared_ptr<string> outboundNumsShrink_ = nullptr;
    std::shared_ptr<string> recallRuleShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
