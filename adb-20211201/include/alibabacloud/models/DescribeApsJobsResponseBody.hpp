// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApsJobsResponseBodyAPSJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APSJobs, APSJobs_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APSJobs, APSJobs_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApsJobsResponseBody() = default ;
    DescribeApsJobsResponseBody(const DescribeApsJobsResponseBody &) = default ;
    DescribeApsJobsResponseBody(DescribeApsJobsResponseBody &&) = default ;
    DescribeApsJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobsResponseBody() = default ;
    DescribeApsJobsResponseBody& operator=(const DescribeApsJobsResponseBody &) = default ;
    DescribeApsJobsResponseBody& operator=(DescribeApsJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->APSJobs_ != nullptr
        && this->code_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // APSJobs Field Functions 
    bool hasAPSJobs() const { return this->APSJobs_ != nullptr;};
    void deleteAPSJobs() { this->APSJobs_ = nullptr;};
    inline const vector<DescribeApsJobsResponseBodyAPSJobs> & APSJobs() const { DARABONBA_PTR_GET_CONST(APSJobs_, vector<DescribeApsJobsResponseBodyAPSJobs>) };
    inline vector<DescribeApsJobsResponseBodyAPSJobs> APSJobs() { DARABONBA_PTR_GET(APSJobs_, vector<DescribeApsJobsResponseBodyAPSJobs>) };
    inline DescribeApsJobsResponseBody& setAPSJobs(const vector<DescribeApsJobsResponseBodyAPSJobs> & APSJobs) { DARABONBA_PTR_SET_VALUE(APSJobs_, APSJobs) };
    inline DescribeApsJobsResponseBody& setAPSJobs(vector<DescribeApsJobsResponseBodyAPSJobs> && APSJobs) { DARABONBA_PTR_SET_RVALUE(APSJobs_, APSJobs) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApsJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeApsJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApsJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeApsJobsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeApsJobsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApsJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeApsJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried APS jobs.
    std::shared_ptr<vector<DescribeApsJobsResponseBodyAPSJobs>> APSJobs_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> code_ = nullptr;
    // The status code. A value of 200 indicates that the request was successful.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
