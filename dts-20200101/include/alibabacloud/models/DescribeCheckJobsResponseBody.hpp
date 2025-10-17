// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCheckJobsResponseBodyCheckJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeCheckJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckJobs, checkJobs_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckJobs, checkJobs_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCheckJobsResponseBody() = default ;
    DescribeCheckJobsResponseBody(const DescribeCheckJobsResponseBody &) = default ;
    DescribeCheckJobsResponseBody(DescribeCheckJobsResponseBody &&) = default ;
    DescribeCheckJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckJobsResponseBody() = default ;
    DescribeCheckJobsResponseBody& operator=(const DescribeCheckJobsResponseBody &) = default ;
    DescribeCheckJobsResponseBody& operator=(DescribeCheckJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkJobs_ == nullptr
        && return this->dynamicCode_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // checkJobs Field Functions 
    bool hasCheckJobs() const { return this->checkJobs_ != nullptr;};
    void deleteCheckJobs() { this->checkJobs_ = nullptr;};
    inline const vector<DescribeCheckJobsResponseBodyCheckJobs> & checkJobs() const { DARABONBA_PTR_GET_CONST(checkJobs_, vector<DescribeCheckJobsResponseBodyCheckJobs>) };
    inline vector<DescribeCheckJobsResponseBodyCheckJobs> checkJobs() { DARABONBA_PTR_GET(checkJobs_, vector<DescribeCheckJobsResponseBodyCheckJobs>) };
    inline DescribeCheckJobsResponseBody& setCheckJobs(const vector<DescribeCheckJobsResponseBodyCheckJobs> & checkJobs) { DARABONBA_PTR_SET_VALUE(checkJobs_, checkJobs) };
    inline DescribeCheckJobsResponseBody& setCheckJobs(vector<DescribeCheckJobsResponseBodyCheckJobs> && checkJobs) { DARABONBA_PTR_SET_RVALUE(checkJobs_, checkJobs) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeCheckJobsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeCheckJobsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeCheckJobsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeCheckJobsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeCheckJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCheckJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int64_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0L) };
    inline DescribeCheckJobsResponseBody& setPageRecordCount(int64_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCheckJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeCheckJobsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Item information check.
    std::shared_ptr<vector<DescribeCheckJobsResponseBodyCheckJobs>> checkJobs_ = nullptr;
    // Dynamic error code, this parameter will be deprecated soon.
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // Dynamic error message, used to replace the **%s** in the **errmessage** return parameter. If **errmessage** returns **thevalueofinputparameter%sisnotvalid**, and **dynamicmessage** returns *[1,2,3]*, it indicates that the request parameter **dtsjobid** is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // Error code returned when the call fails.
    std::shared_ptr<string> errCode_ = nullptr;
    // Error message returned when the call fails.
    std::shared_ptr<string> errMessage_ = nullptr;
    // Status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The maximum number of records that can be displayed on the current page.
    std::shared_ptr<int64_t> pageRecordCount_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // Total number of records.
    std::shared_ptr<int64_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
