// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODYDIRECTORIESLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODYDIRECTORIESLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDirectoriesResponseBodyDirectoriesLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesResponseBodyDirectoriesLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesResponseBodyDirectoriesLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDirectoriesResponseBodyDirectoriesLogs() = default ;
    DescribeDirectoriesResponseBodyDirectoriesLogs(const DescribeDirectoriesResponseBodyDirectoriesLogs &) = default ;
    DescribeDirectoriesResponseBodyDirectoriesLogs(DescribeDirectoriesResponseBodyDirectoriesLogs &&) = default ;
    DescribeDirectoriesResponseBodyDirectoriesLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesResponseBodyDirectoriesLogs() = default ;
    DescribeDirectoriesResponseBodyDirectoriesLogs& operator=(const DescribeDirectoriesResponseBodyDirectoriesLogs &) = default ;
    DescribeDirectoriesResponseBodyDirectoriesLogs& operator=(DescribeDirectoriesResponseBodyDirectoriesLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->message_ != nullptr && this->step_ != nullptr && this->timeStamp_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeDirectoriesResponseBodyDirectoriesLogs& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDirectoriesResponseBodyDirectoriesLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline DescribeDirectoriesResponseBodyDirectoriesLogs& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDirectoriesResponseBodyDirectoriesLogs& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The level of the log entry.
    // 
    // Valid values:
    // 
    // *   ERROR
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   INFO
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   WARN
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> level_ = nullptr;
    // Details of the log entry.
    std::shared_ptr<string> message_ = nullptr;
    // The step that corresponds to the log entry.
    std::shared_ptr<string> step_ = nullptr;
    // The time when the log entry was printed.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
