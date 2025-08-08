// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSQLExecAuditLogResponseBodySQLExecAuditLogList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLExecAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLExecAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLExecAuditLogList, SQLExecAuditLogList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLExecAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLExecAuditLogList, SQLExecAuditLogList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSQLExecAuditLogResponseBody() = default ;
    ListSQLExecAuditLogResponseBody(const ListSQLExecAuditLogResponseBody &) = default ;
    ListSQLExecAuditLogResponseBody(ListSQLExecAuditLogResponseBody &&) = default ;
    ListSQLExecAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLExecAuditLogResponseBody() = default ;
    ListSQLExecAuditLogResponseBody& operator=(const ListSQLExecAuditLogResponseBody &) = default ;
    ListSQLExecAuditLogResponseBody& operator=(ListSQLExecAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->SQLExecAuditLogList_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSQLExecAuditLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSQLExecAuditLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSQLExecAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLExecAuditLogList Field Functions 
    bool hasSQLExecAuditLogList() const { return this->SQLExecAuditLogList_ != nullptr;};
    void deleteSQLExecAuditLogList() { this->SQLExecAuditLogList_ = nullptr;};
    inline const ListSQLExecAuditLogResponseBodySQLExecAuditLogList & SQLExecAuditLogList() const { DARABONBA_PTR_GET_CONST(SQLExecAuditLogList_, ListSQLExecAuditLogResponseBodySQLExecAuditLogList) };
    inline ListSQLExecAuditLogResponseBodySQLExecAuditLogList SQLExecAuditLogList() { DARABONBA_PTR_GET(SQLExecAuditLogList_, ListSQLExecAuditLogResponseBodySQLExecAuditLogList) };
    inline ListSQLExecAuditLogResponseBody& setSQLExecAuditLogList(const ListSQLExecAuditLogResponseBodySQLExecAuditLogList & SQLExecAuditLogList) { DARABONBA_PTR_SET_VALUE(SQLExecAuditLogList_, SQLExecAuditLogList) };
    inline ListSQLExecAuditLogResponseBody& setSQLExecAuditLogList(ListSQLExecAuditLogResponseBodySQLExecAuditLogList && SQLExecAuditLogList) { DARABONBA_PTR_SET_RVALUE(SQLExecAuditLogList_, SQLExecAuditLogList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSQLExecAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSQLExecAuditLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The entries returned.
    std::shared_ptr<ListSQLExecAuditLogResponseBodySQLExecAuditLogList> SQLExecAuditLogList_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
