// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataCheckTableDetailsResponseBodyTableDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDataCheckTableDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataCheckTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiffTableCount, diffTableCount_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FailedTableCount, failedTableCount_);
      DARABONBA_PTR_TO_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataCheckTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiffTableCount, diffTableCount_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FailedTableCount, failedTableCount_);
      DARABONBA_PTR_FROM_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataCheckTableDetailsResponseBody() = default ;
    DescribeDataCheckTableDetailsResponseBody(const DescribeDataCheckTableDetailsResponseBody &) = default ;
    DescribeDataCheckTableDetailsResponseBody(DescribeDataCheckTableDetailsResponseBody &&) = default ;
    DescribeDataCheckTableDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataCheckTableDetailsResponseBody() = default ;
    DescribeDataCheckTableDetailsResponseBody& operator=(const DescribeDataCheckTableDetailsResponseBody &) = default ;
    DescribeDataCheckTableDetailsResponseBody& operator=(DescribeDataCheckTableDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diffTableCount_ == nullptr
        && return this->dynamicCode_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->failedTableCount_ == nullptr
        && return this->finishedCount_ == nullptr && return this->httpStatusCode_ == nullptr && return this->pageNumber_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->tableDetails_ == nullptr && return this->totalCount_ == nullptr; };
    // diffTableCount Field Functions 
    bool hasDiffTableCount() const { return this->diffTableCount_ != nullptr;};
    void deleteDiffTableCount() { this->diffTableCount_ = nullptr;};
    inline int64_t diffTableCount() const { DARABONBA_PTR_GET_DEFAULT(diffTableCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setDiffTableCount(int64_t diffTableCount) { DARABONBA_PTR_SET_VALUE(diffTableCount_, diffTableCount) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // failedTableCount Field Functions 
    bool hasFailedTableCount() const { return this->failedTableCount_ != nullptr;};
    void deleteFailedTableCount() { this->failedTableCount_ = nullptr;};
    inline int64_t failedTableCount() const { DARABONBA_PTR_GET_DEFAULT(failedTableCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setFailedTableCount(int64_t failedTableCount) { DARABONBA_PTR_SET_VALUE(failedTableCount_, failedTableCount) };


    // finishedCount Field Functions 
    bool hasFinishedCount() const { return this->finishedCount_ != nullptr;};
    void deleteFinishedCount() { this->finishedCount_ = nullptr;};
    inline int64_t finishedCount() const { DARABONBA_PTR_GET_DEFAULT(finishedCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setFinishedCount(int64_t finishedCount) { DARABONBA_PTR_SET_VALUE(finishedCount_, finishedCount) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDataCheckTableDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataCheckTableDetailsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataCheckTableDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableDetails Field Functions 
    bool hasTableDetails() const { return this->tableDetails_ != nullptr;};
    void deleteTableDetails() { this->tableDetails_ = nullptr;};
    inline const vector<DescribeDataCheckTableDetailsResponseBodyTableDetails> & tableDetails() const { DARABONBA_PTR_GET_CONST(tableDetails_, vector<DescribeDataCheckTableDetailsResponseBodyTableDetails>) };
    inline vector<DescribeDataCheckTableDetailsResponseBodyTableDetails> tableDetails() { DARABONBA_PTR_GET(tableDetails_, vector<DescribeDataCheckTableDetailsResponseBodyTableDetails>) };
    inline DescribeDataCheckTableDetailsResponseBody& setTableDetails(const vector<DescribeDataCheckTableDetailsResponseBodyTableDetails> & tableDetails) { DARABONBA_PTR_SET_VALUE(tableDetails_, tableDetails) };
    inline DescribeDataCheckTableDetailsResponseBody& setTableDetails(vector<DescribeDataCheckTableDetailsResponseBodyTableDetails> && tableDetails) { DARABONBA_PTR_SET_RVALUE(tableDetails_, tableDetails) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of tables that contain inconsistent data.
    std::shared_ptr<int64_t> diffTableCount_ = nullptr;
    // The dynamic error code. This parameter will be discontinued in the future.
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > For example, if the returned value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **Type**, the specified **Type** parameter is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The total number of data rows that were failed.
    std::shared_ptr<int64_t> failedTableCount_ = nullptr;
    // The total number of data rows that were verified.
    std::shared_ptr<int64_t> finishedCount_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The details of data verification results.
    std::shared_ptr<vector<DescribeDataCheckTableDetailsResponseBodyTableDetails>> tableDetails_ = nullptr;
    // The total number of tables on which data verification was performed.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
