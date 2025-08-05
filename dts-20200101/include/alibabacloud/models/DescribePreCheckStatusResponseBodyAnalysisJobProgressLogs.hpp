// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYANALYSISJOBPROGRESSLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYANALYSISJOBPROGRESSLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& obj) { 
      DARABONBA_PTR_TO_JSON(ErrData, errData_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(ErrType, errType_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrData, errData_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(ErrType, errType_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
    };
    DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs() = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs(const DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs &) = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs(DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs &&) = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs() = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& operator=(const DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs &) = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& operator=(DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errData_ != nullptr
        && this->errMsg_ != nullptr && this->errType_ != nullptr && this->logLevel_ != nullptr; };
    // errData Field Functions 
    bool hasErrData() const { return this->errData_ != nullptr;};
    void deleteErrData() { this->errData_ = nullptr;};
    inline string errData() const { DARABONBA_PTR_GET_DEFAULT(errData_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // errType Field Functions 
    bool hasErrType() const { return this->errType_ != nullptr;};
    void deleteErrType() { this->errType_ = nullptr;};
    inline string errType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


  protected:
    // Error message
    std::shared_ptr<string> errData_ = nullptr;
    // Error message from DTS when a specific project encounters an error.
    std::shared_ptr<string> errMsg_ = nullptr;
    // Error type.
    std::shared_ptr<string> errType_ = nullptr;
    // The level of the log.
    std::shared_ptr<string> logLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
