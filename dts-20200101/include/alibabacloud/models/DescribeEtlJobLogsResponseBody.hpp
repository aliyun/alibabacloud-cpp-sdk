// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEETLJOBLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEETLJOBLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEtlJobLogsResponseBodyEtlRunningLogs.hpp>
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
    virtual bool empty() const override { this->dynamicCode_ != nullptr
        && this->dynamicMessage_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->etlRunningLogs_ != nullptr && this->httpStatusCode_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeEtlJobLogsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeEtlJobLogsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeEtlJobLogsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeEtlJobLogsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // etlRunningLogs Field Functions 
    bool hasEtlRunningLogs() const { return this->etlRunningLogs_ != nullptr;};
    void deleteEtlRunningLogs() { this->etlRunningLogs_ = nullptr;};
    inline const vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs> & etlRunningLogs() const { DARABONBA_PTR_GET_CONST(etlRunningLogs_, vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs>) };
    inline vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs> etlRunningLogs() { DARABONBA_PTR_GET(etlRunningLogs_, vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs>) };
    inline DescribeEtlJobLogsResponseBody& setEtlRunningLogs(const vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs> & etlRunningLogs) { DARABONBA_PTR_SET_VALUE(etlRunningLogs_, etlRunningLogs) };
    inline DescribeEtlJobLogsResponseBody& setEtlRunningLogs(vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs> && etlRunningLogs) { DARABONBA_PTR_SET_RVALUE(etlRunningLogs_, etlRunningLogs) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeEtlJobLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEtlJobLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEtlJobLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The dynamic error code.
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // The dynamic part in the error message.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code. This example indicates that the specified ETL task ID is invalid.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message. This example indicates that the specified ETL task ID does not exist. In this case, the ETL task may be deleted.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The logs of ETL tasks.
    std::shared_ptr<vector<DescribeEtlJobLogsResponseBodyEtlRunningLogs>> etlRunningLogs_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. If the call failed, false is returned.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
