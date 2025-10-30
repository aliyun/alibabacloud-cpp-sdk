// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYSTAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYSTAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTaskInfoResponseBodyStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskInfoResponseBodyStages& obj) { 
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_ANY_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskInfoResponseBodyStages& obj) { 
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_ANY_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    DescribeTaskInfoResponseBodyStages() = default ;
    DescribeTaskInfoResponseBodyStages(const DescribeTaskInfoResponseBodyStages &) = default ;
    DescribeTaskInfoResponseBodyStages(DescribeTaskInfoResponseBodyStages &&) = default ;
    DescribeTaskInfoResponseBodyStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskInfoResponseBodyStages() = default ;
    DescribeTaskInfoResponseBodyStages& operator=(const DescribeTaskInfoResponseBodyStages &) = default ;
    DescribeTaskInfoResponseBodyStages& operator=(DescribeTaskInfoResponseBodyStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->message_ == nullptr && return this->outputs_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTaskInfoResponseBodyStages& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTaskInfoResponseBodyStages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline     const Darabonba::Json & outputs() const { DARABONBA_GET(outputs_) };
    Darabonba::Json & outputs() { DARABONBA_GET(outputs_) };
    inline DescribeTaskInfoResponseBodyStages& setOutputs(const Darabonba::Json & outputs) { DARABONBA_SET_VALUE(outputs_, outputs) };
    inline DescribeTaskInfoResponseBodyStages& setOutputs(Darabonba::Json & outputs) { DARABONBA_SET_RVALUE(outputs_, outputs) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTaskInfoResponseBodyStages& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeTaskInfoResponseBodyStages& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The end time of the stage.
    std::shared_ptr<string> endTime_ = nullptr;
    // The message about the stage.
    std::shared_ptr<string> message_ = nullptr;
    // The output generated at the stage.
    Darabonba::Json outputs_ = nullptr;
    // The start time of the stage.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the stage.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
