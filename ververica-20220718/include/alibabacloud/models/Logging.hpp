// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGGING_HPP_
#define ALIBABACLOUD_MODELS_LOGGING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Log4jLogger.hpp>
#include <alibabacloud/models/LogReservePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Logging : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Logging& obj) { 
      DARABONBA_PTR_TO_JSON(log4j2ConfigurationTemplate, log4j2ConfigurationTemplate_);
      DARABONBA_PTR_TO_JSON(log4jLoggers, log4jLoggers_);
      DARABONBA_PTR_TO_JSON(logReservePolicy, logReservePolicy_);
      DARABONBA_PTR_TO_JSON(loggingProfile, loggingProfile_);
    };
    friend void from_json(const Darabonba::Json& j, Logging& obj) { 
      DARABONBA_PTR_FROM_JSON(log4j2ConfigurationTemplate, log4j2ConfigurationTemplate_);
      DARABONBA_PTR_FROM_JSON(log4jLoggers, log4jLoggers_);
      DARABONBA_PTR_FROM_JSON(logReservePolicy, logReservePolicy_);
      DARABONBA_PTR_FROM_JSON(loggingProfile, loggingProfile_);
    };
    Logging() = default ;
    Logging(const Logging &) = default ;
    Logging(Logging &&) = default ;
    Logging(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Logging() = default ;
    Logging& operator=(const Logging &) = default ;
    Logging& operator=(Logging &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log4j2ConfigurationTemplate_ == nullptr
        && return this->log4jLoggers_ == nullptr && return this->logReservePolicy_ == nullptr && return this->loggingProfile_ == nullptr; };
    // log4j2ConfigurationTemplate Field Functions 
    bool hasLog4j2ConfigurationTemplate() const { return this->log4j2ConfigurationTemplate_ != nullptr;};
    void deleteLog4j2ConfigurationTemplate() { this->log4j2ConfigurationTemplate_ = nullptr;};
    inline string log4j2ConfigurationTemplate() const { DARABONBA_PTR_GET_DEFAULT(log4j2ConfigurationTemplate_, "") };
    inline Logging& setLog4j2ConfigurationTemplate(string log4j2ConfigurationTemplate) { DARABONBA_PTR_SET_VALUE(log4j2ConfigurationTemplate_, log4j2ConfigurationTemplate) };


    // log4jLoggers Field Functions 
    bool hasLog4jLoggers() const { return this->log4jLoggers_ != nullptr;};
    void deleteLog4jLoggers() { this->log4jLoggers_ = nullptr;};
    inline const vector<Log4jLogger> & log4jLoggers() const { DARABONBA_PTR_GET_CONST(log4jLoggers_, vector<Log4jLogger>) };
    inline vector<Log4jLogger> log4jLoggers() { DARABONBA_PTR_GET(log4jLoggers_, vector<Log4jLogger>) };
    inline Logging& setLog4jLoggers(const vector<Log4jLogger> & log4jLoggers) { DARABONBA_PTR_SET_VALUE(log4jLoggers_, log4jLoggers) };
    inline Logging& setLog4jLoggers(vector<Log4jLogger> && log4jLoggers) { DARABONBA_PTR_SET_RVALUE(log4jLoggers_, log4jLoggers) };


    // logReservePolicy Field Functions 
    bool hasLogReservePolicy() const { return this->logReservePolicy_ != nullptr;};
    void deleteLogReservePolicy() { this->logReservePolicy_ = nullptr;};
    inline const LogReservePolicy & logReservePolicy() const { DARABONBA_PTR_GET_CONST(logReservePolicy_, LogReservePolicy) };
    inline LogReservePolicy logReservePolicy() { DARABONBA_PTR_GET(logReservePolicy_, LogReservePolicy) };
    inline Logging& setLogReservePolicy(const LogReservePolicy & logReservePolicy) { DARABONBA_PTR_SET_VALUE(logReservePolicy_, logReservePolicy) };
    inline Logging& setLogReservePolicy(LogReservePolicy && logReservePolicy) { DARABONBA_PTR_SET_RVALUE(logReservePolicy_, logReservePolicy) };


    // loggingProfile Field Functions 
    bool hasLoggingProfile() const { return this->loggingProfile_ != nullptr;};
    void deleteLoggingProfile() { this->loggingProfile_ = nullptr;};
    inline string loggingProfile() const { DARABONBA_PTR_GET_DEFAULT(loggingProfile_, "") };
    inline Logging& setLoggingProfile(string loggingProfile) { DARABONBA_PTR_SET_VALUE(loggingProfile_, loggingProfile) };


  protected:
    std::shared_ptr<string> log4j2ConfigurationTemplate_ = nullptr;
    std::shared_ptr<vector<Log4jLogger>> log4jLoggers_ = nullptr;
    std::shared_ptr<LogReservePolicy> logReservePolicy_ = nullptr;
    std::shared_ptr<string> loggingProfile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
