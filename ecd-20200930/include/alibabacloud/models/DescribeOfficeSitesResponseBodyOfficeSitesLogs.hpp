// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITESLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITESLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesResponseBodyOfficeSitesLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBodyOfficeSitesLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBodyOfficeSitesLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeOfficeSitesResponseBodyOfficeSitesLogs() = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesLogs(const DescribeOfficeSitesResponseBodyOfficeSitesLogs &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesLogs(DescribeOfficeSitesResponseBodyOfficeSitesLogs &&) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBodyOfficeSitesLogs() = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesLogs& operator=(const DescribeOfficeSitesResponseBodyOfficeSitesLogs &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesLogs& operator=(DescribeOfficeSitesResponseBodyOfficeSitesLogs &&) = default ;
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
    inline DescribeOfficeSitesResponseBodyOfficeSitesLogs& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesLogs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesLogs& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesLogs& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The log severity.
    // 
    // Valid values:
    // 
    // *   ERROR
    // *   INFO
    // *   WARN
    std::shared_ptr<string> level_ = nullptr;
    // Details of the log entry.
    std::shared_ptr<string> message_ = nullptr;
    // The step in the log entry.
    std::shared_ptr<string> step_ = nullptr;
    // The time when the log entry was printed.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
