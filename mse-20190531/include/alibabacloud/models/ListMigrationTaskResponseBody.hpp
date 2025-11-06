// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMigrationTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListMigrationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMigrationTaskResponseBody() = default ;
    ListMigrationTaskResponseBody(const ListMigrationTaskResponseBody &) = default ;
    ListMigrationTaskResponseBody(ListMigrationTaskResponseBody &&) = default ;
    ListMigrationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationTaskResponseBody() = default ;
    ListMigrationTaskResponseBody& operator=(const ListMigrationTaskResponseBody &) = default ;
    ListMigrationTaskResponseBody& operator=(ListMigrationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->errorCode_ == nullptr && return this->httpCode_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMigrationTaskResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMigrationTaskResponseBodyData>) };
    inline vector<ListMigrationTaskResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListMigrationTaskResponseBodyData>) };
    inline ListMigrationTaskResponseBody& setData(const vector<ListMigrationTaskResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMigrationTaskResponseBody& setData(vector<ListMigrationTaskResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMigrationTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListMigrationTaskResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMigrationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListMigrationTaskResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListMigrationTaskResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMigrationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMigrationTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMigrationTaskResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The array structure.
    std::shared_ptr<vector<ListMigrationTaskResponseBodyData>> data_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<string> httpCode_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
