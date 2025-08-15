// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLOG_HPP_
#define ALIBABACLOUD_MODELS_RUNLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class RunLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLog& obj) { 
      DARABONBA_PTR_TO_JSON(driverStartup, driverStartup_);
      DARABONBA_PTR_TO_JSON(driverStdError, driverStdError_);
      DARABONBA_PTR_TO_JSON(driverStdOut, driverStdOut_);
      DARABONBA_PTR_TO_JSON(driverSyslog, driverSyslog_);
    };
    friend void from_json(const Darabonba::Json& j, RunLog& obj) { 
      DARABONBA_PTR_FROM_JSON(driverStartup, driverStartup_);
      DARABONBA_PTR_FROM_JSON(driverStdError, driverStdError_);
      DARABONBA_PTR_FROM_JSON(driverStdOut, driverStdOut_);
      DARABONBA_PTR_FROM_JSON(driverSyslog, driverSyslog_);
    };
    RunLog() = default ;
    RunLog(const RunLog &) = default ;
    RunLog(RunLog &&) = default ;
    RunLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLog() = default ;
    RunLog& operator=(const RunLog &) = default ;
    RunLog& operator=(RunLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->driverStartup_ != nullptr
        && this->driverStdError_ != nullptr && this->driverStdOut_ != nullptr && this->driverSyslog_ != nullptr; };
    // driverStartup Field Functions 
    bool hasDriverStartup() const { return this->driverStartup_ != nullptr;};
    void deleteDriverStartup() { this->driverStartup_ = nullptr;};
    inline string driverStartup() const { DARABONBA_PTR_GET_DEFAULT(driverStartup_, "") };
    inline RunLog& setDriverStartup(string driverStartup) { DARABONBA_PTR_SET_VALUE(driverStartup_, driverStartup) };


    // driverStdError Field Functions 
    bool hasDriverStdError() const { return this->driverStdError_ != nullptr;};
    void deleteDriverStdError() { this->driverStdError_ = nullptr;};
    inline string driverStdError() const { DARABONBA_PTR_GET_DEFAULT(driverStdError_, "") };
    inline RunLog& setDriverStdError(string driverStdError) { DARABONBA_PTR_SET_VALUE(driverStdError_, driverStdError) };


    // driverStdOut Field Functions 
    bool hasDriverStdOut() const { return this->driverStdOut_ != nullptr;};
    void deleteDriverStdOut() { this->driverStdOut_ = nullptr;};
    inline string driverStdOut() const { DARABONBA_PTR_GET_DEFAULT(driverStdOut_, "") };
    inline RunLog& setDriverStdOut(string driverStdOut) { DARABONBA_PTR_SET_VALUE(driverStdOut_, driverStdOut) };


    // driverSyslog Field Functions 
    bool hasDriverSyslog() const { return this->driverSyslog_ != nullptr;};
    void deleteDriverSyslog() { this->driverSyslog_ = nullptr;};
    inline string driverSyslog() const { DARABONBA_PTR_GET_DEFAULT(driverSyslog_, "") };
    inline RunLog& setDriverSyslog(string driverSyslog) { DARABONBA_PTR_SET_VALUE(driverSyslog_, driverSyslog) };


  protected:
    std::shared_ptr<string> driverStartup_ = nullptr;
    std::shared_ptr<string> driverStdError_ = nullptr;
    std::shared_ptr<string> driverStdOut_ = nullptr;
    std::shared_ptr<string> driverSyslog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
