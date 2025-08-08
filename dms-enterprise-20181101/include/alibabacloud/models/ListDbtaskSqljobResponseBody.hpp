// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDBTaskSQLJobResponseBodyDBTaskSQLJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskSQLJobList, DBTaskSQLJobList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskSQLJobList, DBTaskSQLJobList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDBTaskSQLJobResponseBody() = default ;
    ListDBTaskSQLJobResponseBody(const ListDBTaskSQLJobResponseBody &) = default ;
    ListDBTaskSQLJobResponseBody(ListDBTaskSQLJobResponseBody &&) = default ;
    ListDBTaskSQLJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobResponseBody() = default ;
    ListDBTaskSQLJobResponseBody& operator=(const ListDBTaskSQLJobResponseBody &) = default ;
    ListDBTaskSQLJobResponseBody& operator=(ListDBTaskSQLJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBTaskSQLJobList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // DBTaskSQLJobList Field Functions 
    bool hasDBTaskSQLJobList() const { return this->DBTaskSQLJobList_ != nullptr;};
    void deleteDBTaskSQLJobList() { this->DBTaskSQLJobList_ = nullptr;};
    inline const vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList> & DBTaskSQLJobList() const { DARABONBA_PTR_GET_CONST(DBTaskSQLJobList_, vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList>) };
    inline vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList> DBTaskSQLJobList() { DARABONBA_PTR_GET(DBTaskSQLJobList_, vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList>) };
    inline ListDBTaskSQLJobResponseBody& setDBTaskSQLJobList(const vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList> & DBTaskSQLJobList) { DARABONBA_PTR_SET_VALUE(DBTaskSQLJobList_, DBTaskSQLJobList) };
    inline ListDBTaskSQLJobResponseBody& setDBTaskSQLJobList(vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList> && DBTaskSQLJobList) { DARABONBA_PTR_SET_RVALUE(DBTaskSQLJobList_, DBTaskSQLJobList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDBTaskSQLJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDBTaskSQLJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDBTaskSQLJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDBTaskSQLJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDBTaskSQLJobResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the SQL tasks.
    std::shared_ptr<vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList>> DBTaskSQLJobList_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of the SQL tasks.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
