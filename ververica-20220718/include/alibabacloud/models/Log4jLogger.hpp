// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOG4JLOGGER_HPP_
#define ALIBABACLOUD_MODELS_LOG4JLOGGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Log4jLogger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Log4jLogger& obj) { 
      DARABONBA_PTR_TO_JSON(loggerLevel, loggerLevel_);
      DARABONBA_PTR_TO_JSON(loggerName, loggerName_);
    };
    friend void from_json(const Darabonba::Json& j, Log4jLogger& obj) { 
      DARABONBA_PTR_FROM_JSON(loggerLevel, loggerLevel_);
      DARABONBA_PTR_FROM_JSON(loggerName, loggerName_);
    };
    Log4jLogger() = default ;
    Log4jLogger(const Log4jLogger &) = default ;
    Log4jLogger(Log4jLogger &&) = default ;
    Log4jLogger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Log4jLogger() = default ;
    Log4jLogger& operator=(const Log4jLogger &) = default ;
    Log4jLogger& operator=(Log4jLogger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loggerLevel_ == nullptr
        && return this->loggerName_ == nullptr; };
    // loggerLevel Field Functions 
    bool hasLoggerLevel() const { return this->loggerLevel_ != nullptr;};
    void deleteLoggerLevel() { this->loggerLevel_ = nullptr;};
    inline string loggerLevel() const { DARABONBA_PTR_GET_DEFAULT(loggerLevel_, "") };
    inline Log4jLogger& setLoggerLevel(string loggerLevel) { DARABONBA_PTR_SET_VALUE(loggerLevel_, loggerLevel) };


    // loggerName Field Functions 
    bool hasLoggerName() const { return this->loggerName_ != nullptr;};
    void deleteLoggerName() { this->loggerName_ = nullptr;};
    inline string loggerName() const { DARABONBA_PTR_GET_DEFAULT(loggerName_, "") };
    inline Log4jLogger& setLoggerName(string loggerName) { DARABONBA_PTR_SET_VALUE(loggerName_, loggerName) };


  protected:
    std::shared_ptr<string> loggerLevel_ = nullptr;
    std::shared_ptr<string> loggerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
