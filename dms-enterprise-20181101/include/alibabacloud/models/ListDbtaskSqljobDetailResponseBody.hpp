// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskSQLJobDetailList, DBTaskSQLJobDetailList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskSQLJobDetailList, DBTaskSQLJobDetailList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDBTaskSQLJobDetailResponseBody() = default ;
    ListDBTaskSQLJobDetailResponseBody(const ListDBTaskSQLJobDetailResponseBody &) = default ;
    ListDBTaskSQLJobDetailResponseBody(ListDBTaskSQLJobDetailResponseBody &&) = default ;
    ListDBTaskSQLJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobDetailResponseBody() = default ;
    ListDBTaskSQLJobDetailResponseBody& operator=(const ListDBTaskSQLJobDetailResponseBody &) = default ;
    ListDBTaskSQLJobDetailResponseBody& operator=(ListDBTaskSQLJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBTaskSQLJobDetailList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // DBTaskSQLJobDetailList Field Functions 
    bool hasDBTaskSQLJobDetailList() const { return this->DBTaskSQLJobDetailList_ != nullptr;};
    void deleteDBTaskSQLJobDetailList() { this->DBTaskSQLJobDetailList_ = nullptr;};
    inline const vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList> & DBTaskSQLJobDetailList() const { DARABONBA_PTR_GET_CONST(DBTaskSQLJobDetailList_, vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList>) };
    inline vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList> DBTaskSQLJobDetailList() { DARABONBA_PTR_GET(DBTaskSQLJobDetailList_, vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList>) };
    inline ListDBTaskSQLJobDetailResponseBody& setDBTaskSQLJobDetailList(const vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList> & DBTaskSQLJobDetailList) { DARABONBA_PTR_SET_VALUE(DBTaskSQLJobDetailList_, DBTaskSQLJobDetailList) };
    inline ListDBTaskSQLJobDetailResponseBody& setDBTaskSQLJobDetailList(vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList> && DBTaskSQLJobDetailList) { DARABONBA_PTR_SET_RVALUE(DBTaskSQLJobDetailList_, DBTaskSQLJobDetailList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDBTaskSQLJobDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDBTaskSQLJobDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDBTaskSQLJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDBTaskSQLJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of SQL tasks.
    std::shared_ptr<vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList>> DBTaskSQLJobDetailList_ = nullptr;
    // The error code that is returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of SQL tasks.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
