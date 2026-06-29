// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKWORKFORCESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKWORKFORCESTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetTaskWorkforceStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskWorkforceStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(UsersStatistic, usersStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskWorkforceStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(UsersStatistic, usersStatistic_);
    };
    GetTaskWorkforceStatisticResponseBody() = default ;
    GetTaskWorkforceStatisticResponseBody(const GetTaskWorkforceStatisticResponseBody &) = default ;
    GetTaskWorkforceStatisticResponseBody(GetTaskWorkforceStatisticResponseBody &&) = default ;
    GetTaskWorkforceStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskWorkforceStatisticResponseBody() = default ;
    GetTaskWorkforceStatisticResponseBody& operator=(const GetTaskWorkforceStatisticResponseBody &) = default ;
    GetTaskWorkforceStatisticResponseBody& operator=(GetTaskWorkforceStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->details_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr && this->usersStatistic_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTaskWorkforceStatisticResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline GetTaskWorkforceStatisticResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskWorkforceStatisticResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskWorkforceStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetTaskWorkforceStatisticResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTaskWorkforceStatisticResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskWorkforceStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskWorkforceStatisticResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetTaskWorkforceStatisticResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline GetTaskWorkforceStatisticResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // usersStatistic Field Functions 
    bool hasUsersStatistic() const { return this->usersStatistic_ != nullptr;};
    void deleteUsersStatistic() { this->usersStatistic_ = nullptr;};
    inline const vector<UserStatistic> & getUsersStatistic() const { DARABONBA_PTR_GET_CONST(usersStatistic_, vector<UserStatistic>) };
    inline vector<UserStatistic> getUsersStatistic() { DARABONBA_PTR_GET(usersStatistic_, vector<UserStatistic>) };
    inline GetTaskWorkforceStatisticResponseBody& setUsersStatistic(const vector<UserStatistic> & usersStatistic) { DARABONBA_PTR_SET_VALUE(usersStatistic_, usersStatistic) };
    inline GetTaskWorkforceStatisticResponseBody& setUsersStatistic(vector<UserStatistic> && usersStatistic) { DARABONBA_PTR_SET_RVALUE(usersStatistic_, usersStatistic) };


  protected:
    // Return encoding. The default value is 0, indicating normal execution.
    shared_ptr<int32_t> code_ {};
    // Details.
    shared_ptr<string> details_ {};
    // Error code.  
    // - When Success is false, returns a business error code.  
    // - When Success is true, returns an empty value.
    shared_ptr<string> errorCode_ {};
    // Return message of the request.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // Page number of the returned list of queried job members.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of job members displayed per page in the response.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded. Valid values:  
    // - true: Succeeded.  
    // - false: Failed.
    shared_ptr<bool> success_ {};
    // Total number of job members.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
    // List of user statistics.
    shared_ptr<vector<UserStatistic>> usersStatistic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
