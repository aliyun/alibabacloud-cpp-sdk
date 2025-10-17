// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATEMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_STATEMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StatementInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatementInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CompletedTimeInMills, completedTimeInMills_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(StartedTimeInMills, startedTimeInMills_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, StatementInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CompletedTimeInMills, completedTimeInMills_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(StartedTimeInMills, startedTimeInMills_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
    };
    StatementInfo() = default ;
    StatementInfo(const StatementInfo &) = default ;
    StatementInfo(StatementInfo &&) = default ;
    StatementInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatementInfo() = default ;
    StatementInfo& operator=(const StatementInfo &) = default ;
    StatementInfo& operator=(StatementInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->completedTimeInMills_ == nullptr && return this->output_ == nullptr && return this->process_ == nullptr && return this->startedTimeInMills_ == nullptr && return this->state_ == nullptr
        && return this->statementId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StatementInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completedTimeInMills Field Functions 
    bool hasCompletedTimeInMills() const { return this->completedTimeInMills_ != nullptr;};
    void deleteCompletedTimeInMills() { this->completedTimeInMills_ = nullptr;};
    inline int64_t completedTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(completedTimeInMills_, 0L) };
    inline StatementInfo& setCompletedTimeInMills(int64_t completedTimeInMills) { DARABONBA_PTR_SET_VALUE(completedTimeInMills_, completedTimeInMills) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline StatementInfo& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline float process() const { DARABONBA_PTR_GET_DEFAULT(process_, 0.0) };
    inline StatementInfo& setProcess(float process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // startedTimeInMills Field Functions 
    bool hasStartedTimeInMills() const { return this->startedTimeInMills_ != nullptr;};
    void deleteStartedTimeInMills() { this->startedTimeInMills_ = nullptr;};
    inline int64_t startedTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(startedTimeInMills_, 0L) };
    inline StatementInfo& setStartedTimeInMills(int64_t startedTimeInMills) { DARABONBA_PTR_SET_VALUE(startedTimeInMills_, startedTimeInMills) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline StatementInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline string statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
    inline StatementInfo& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int64_t> completedTimeInMills_ = nullptr;
    std::shared_ptr<string> output_ = nullptr;
    std::shared_ptr<float> process_ = nullptr;
    std::shared_ptr<int64_t> startedTimeInMills_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
