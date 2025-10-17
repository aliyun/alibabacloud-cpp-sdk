// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYJOBPROGRESSLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYJOBPROGRESSLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodyJobProgressLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodyJobProgressLogs& obj) { 
      DARABONBA_PTR_TO_JSON(ErrData, errData_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(ErrType, errType_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodyJobProgressLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrData, errData_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(ErrType, errType_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
    };
    DescribePreCheckStatusResponseBodyJobProgressLogs() = default ;
    DescribePreCheckStatusResponseBodyJobProgressLogs(const DescribePreCheckStatusResponseBodyJobProgressLogs &) = default ;
    DescribePreCheckStatusResponseBodyJobProgressLogs(DescribePreCheckStatusResponseBodyJobProgressLogs &&) = default ;
    DescribePreCheckStatusResponseBodyJobProgressLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodyJobProgressLogs() = default ;
    DescribePreCheckStatusResponseBodyJobProgressLogs& operator=(const DescribePreCheckStatusResponseBodyJobProgressLogs &) = default ;
    DescribePreCheckStatusResponseBodyJobProgressLogs& operator=(DescribePreCheckStatusResponseBodyJobProgressLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errData_ == nullptr
        && return this->errMsg_ == nullptr && return this->errType_ == nullptr && return this->logLevel_ == nullptr; };
    // errData Field Functions 
    bool hasErrData() const { return this->errData_ != nullptr;};
    void deleteErrData() { this->errData_ = nullptr;};
    inline string errData() const { DARABONBA_PTR_GET_DEFAULT(errData_, "") };
    inline DescribePreCheckStatusResponseBodyJobProgressLogs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribePreCheckStatusResponseBodyJobProgressLogs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // errType Field Functions 
    bool hasErrType() const { return this->errType_ != nullptr;};
    void deleteErrType() { this->errType_ = nullptr;};
    inline string errType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
    inline DescribePreCheckStatusResponseBodyJobProgressLogs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline DescribePreCheckStatusResponseBodyJobProgressLogs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


  protected:
    // The error message.
    std::shared_ptr<string> errData_ = nullptr;
    // The error message that is returned when an error occurs on the subtask.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The error type.
    std::shared_ptr<string> errType_ = nullptr;
    // The level of logs.
    std::shared_ptr<string> logLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
