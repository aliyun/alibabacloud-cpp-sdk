// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYSUBDISTRIBUTEDJOBSTATUSJOBPROGRESSLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYSUBDISTRIBUTEDJOBSTATUSJOBPROGRESSLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& obj) { 
      DARABONBA_PTR_TO_JSON(ErrData, errData_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(ErrType, errType_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrData, errData_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(ErrType, errType_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
    };
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs() = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs(const DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs &) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs(DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs &&) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs() = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& operator=(const DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs &) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& operator=(DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs &&) = default ;
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
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // errType Field Functions 
    bool hasErrType() const { return this->errType_ != nullptr;};
    void deleteErrType() { this->errType_ = nullptr;};
    inline string errType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


  protected:
    // The record of errors.
    std::shared_ptr<string> errData_ = nullptr;
    // The error message.
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
