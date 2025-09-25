// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATAFUNCTIONCALLRESPONSES_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATAFUNCTIONCALLRESPONSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunAgentResponseBodyDataFunctionCallResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentResponseBodyDataFunctionCallResponses& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(functionArgs, functionArgs_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentResponseBodyDataFunctionCallResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(functionArgs, functionArgs_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    RunAgentResponseBodyDataFunctionCallResponses() = default ;
    RunAgentResponseBodyDataFunctionCallResponses(const RunAgentResponseBodyDataFunctionCallResponses &) = default ;
    RunAgentResponseBodyDataFunctionCallResponses(RunAgentResponseBodyDataFunctionCallResponses &&) = default ;
    RunAgentResponseBodyDataFunctionCallResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentResponseBodyDataFunctionCallResponses() = default ;
    RunAgentResponseBodyDataFunctionCallResponses& operator=(const RunAgentResponseBodyDataFunctionCallResponses &) = default ;
    RunAgentResponseBodyDataFunctionCallResponses& operator=(RunAgentResponseBodyDataFunctionCallResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->endTime_ != nullptr && this->functionArgs_ != nullptr && this->functionName_ != nullptr && this->result_ != nullptr && this->startTime_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline RunAgentResponseBodyDataFunctionCallResponses& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline RunAgentResponseBodyDataFunctionCallResponses& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // functionArgs Field Functions 
    bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
    void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
    inline string functionArgs() const { DARABONBA_PTR_GET_DEFAULT(functionArgs_, "") };
    inline RunAgentResponseBodyDataFunctionCallResponses& setFunctionArgs(string functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline RunAgentResponseBodyDataFunctionCallResponses& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline RunAgentResponseBodyDataFunctionCallResponses& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline RunAgentResponseBodyDataFunctionCallResponses& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> functionArgs_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
