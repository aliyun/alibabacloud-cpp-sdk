// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlans, backupPlans_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlans, backupPlans_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupPlansResponseBody() = default ;
    DescribeBackupPlansResponseBody(const DescribeBackupPlansResponseBody &) = default ;
    DescribeBackupPlansResponseBody(DescribeBackupPlansResponseBody &&) = default ;
    DescribeBackupPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBody() = default ;
    DescribeBackupPlansResponseBody& operator=(const DescribeBackupPlansResponseBody &) = default ;
    DescribeBackupPlansResponseBody& operator=(DescribeBackupPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupPlans_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // backupPlans Field Functions 
    bool hasBackupPlans() const { return this->backupPlans_ != nullptr;};
    void deleteBackupPlans() { this->backupPlans_ = nullptr;};
    inline const DescribeBackupPlansResponseBodyBackupPlans & backupPlans() const { DARABONBA_PTR_GET_CONST(backupPlans_, DescribeBackupPlansResponseBodyBackupPlans) };
    inline DescribeBackupPlansResponseBodyBackupPlans backupPlans() { DARABONBA_PTR_GET(backupPlans_, DescribeBackupPlansResponseBodyBackupPlans) };
    inline DescribeBackupPlansResponseBody& setBackupPlans(const DescribeBackupPlansResponseBodyBackupPlans & backupPlans) { DARABONBA_PTR_SET_VALUE(backupPlans_, backupPlans) };
    inline DescribeBackupPlansResponseBody& setBackupPlans(DescribeBackupPlansResponseBodyBackupPlans && backupPlans) { DARABONBA_PTR_SET_RVALUE(backupPlans_, backupPlans) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBackupPlansResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupPlansResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupPlansResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBackupPlansResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried backup plans.
    std::shared_ptr<DescribeBackupPlansResponseBodyBackupPlans> backupPlans_ = nullptr;
    // The HTTP status code. The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of returned backup plans that meet the specified conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
