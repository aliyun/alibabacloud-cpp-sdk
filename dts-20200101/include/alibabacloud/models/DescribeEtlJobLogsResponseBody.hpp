// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEETLJOBLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEETLJOBLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeEtlJobLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEtlJobLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(EtlRunningLogs, etlRunningLogs_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEtlJobLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(EtlRunningLogs, etlRunningLogs_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEtlJobLogsResponseBody() = default ;
    DescribeEtlJobLogsResponseBody(const DescribeEtlJobLogsResponseBody &) = default ;
    DescribeEtlJobLogsResponseBody(DescribeEtlJobLogsResponseBody &&) = default ;
    DescribeEtlJobLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEtlJobLogsResponseBody() = default ;
    DescribeEtlJobLogsResponseBody& operator=(const DescribeEtlJobLogsResponseBody &) = default ;
    DescribeEtlJobLogsResponseBody& operator=(DescribeEtlJobLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EtlRunningLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EtlRunningLogs& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentKey, contentKey_);
        DARABONBA_PTR_TO_JSON(EtlId, etlId_);
        DARABONBA_PTR_TO_JSON(LogDatetime, logDatetime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, EtlRunningLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentKey, contentKey_);
        DARABONBA_PTR_FROM_JSON(EtlId, etlId_);
        DARABONBA_PTR_FROM_JSON(LogDatetime, logDatetime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      EtlRunningLogs() = default ;
      EtlRunningLogs(const EtlRunningLogs &) = default ;
      EtlRunningLogs(EtlRunningLogs &&) = default ;
      EtlRunningLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EtlRunningLogs() = default ;
      EtlRunningLogs& operator=(const EtlRunningLogs &) = default ;
      EtlRunningLogs& operator=(EtlRunningLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentKey_ == nullptr && this->etlId_ == nullptr && this->logDatetime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline EtlRunningLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentKey Field Functions 
      bool hasContentKey() const { return this->contentKey_ != nullptr;};
      void deleteContentKey() { this->contentKey_ = nullptr;};
      inline string getContentKey() const { DARABONBA_PTR_GET_DEFAULT(contentKey_, "") };
      inline EtlRunningLogs& setContentKey(string contentKey) { DARABONBA_PTR_SET_VALUE(contentKey_, contentKey) };


      // etlId Field Functions 
      bool hasEtlId() const { return this->etlId_ != nullptr;};
      void deleteEtlId() { this->etlId_ = nullptr;};
      inline string getEtlId() const { DARABONBA_PTR_GET_DEFAULT(etlId_, "") };
      inline EtlRunningLogs& setEtlId(string etlId) { DARABONBA_PTR_SET_VALUE(etlId_, etlId) };


      // logDatetime Field Functions 
      bool hasLogDatetime() const { return this->logDatetime_ != nullptr;};
      void deleteLogDatetime() { this->logDatetime_ = nullptr;};
      inline string getLogDatetime() const { DARABONBA_PTR_GET_DEFAULT(logDatetime_, "") };
      inline EtlRunningLogs& setLogDatetime(string logDatetime) { DARABONBA_PTR_SET_VALUE(logDatetime_, logDatetime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EtlRunningLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline EtlRunningLogs& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The state of the ETL task.
      shared_ptr<string> content_ {};
      // The module for which the logs are generated, such as the conversion module of ETL tasks.
      shared_ptr<string> contentKey_ {};
      // The ID of the ETL task.
      shared_ptr<string> etlId_ {};
      // The time when the log was generated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> logDatetime_ {};
      // The log level. Valid values: ERROR, WARN, INFO, and DEBUG.
      shared_ptr<string> status_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->dynamicCode_ == nullptr
        && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->etlRunningLogs_ == nullptr && this->httpStatusCode_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeEtlJobLogsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeEtlJobLogsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeEtlJobLogsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeEtlJobLogsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // etlRunningLogs Field Functions 
    bool hasEtlRunningLogs() const { return this->etlRunningLogs_ != nullptr;};
    void deleteEtlRunningLogs() { this->etlRunningLogs_ = nullptr;};
    inline const vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs> & getEtlRunningLogs() const { DARABONBA_PTR_GET_CONST(etlRunningLogs_, vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs>) };
    inline vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs> getEtlRunningLogs() { DARABONBA_PTR_GET(etlRunningLogs_, vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs>) };
    inline DescribeEtlJobLogsResponseBody& setEtlRunningLogs(const vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs> & etlRunningLogs) { DARABONBA_PTR_SET_VALUE(etlRunningLogs_, etlRunningLogs) };
    inline DescribeEtlJobLogsResponseBody& setEtlRunningLogs(vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs> && etlRunningLogs) { DARABONBA_PTR_SET_RVALUE(etlRunningLogs_, etlRunningLogs) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeEtlJobLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEtlJobLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEtlJobLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error code. This example indicates that the specified ETL task ID is invalid.
    shared_ptr<string> errCode_ {};
    // The error message. This example indicates that the specified ETL task ID does not exist. In this case, the ETL task may be deleted.
    shared_ptr<string> errMessage_ {};
    // The logs of ETL tasks.
    shared_ptr<vector<DescribeEtlJobLogsResponseBody::EtlRunningLogs>> etlRunningLogs_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. If the call failed, false is returned.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
