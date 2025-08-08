// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLogicTablesResponseBodyLogicTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LogicTableList, logicTableList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LogicTableList, logicTableList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLogicTablesResponseBody() = default ;
    ListLogicTablesResponseBody(const ListLogicTablesResponseBody &) = default ;
    ListLogicTablesResponseBody(ListLogicTablesResponseBody &&) = default ;
    ListLogicTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTablesResponseBody() = default ;
    ListLogicTablesResponseBody& operator=(const ListLogicTablesResponseBody &) = default ;
    ListLogicTablesResponseBody& operator=(ListLogicTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->logicTableList_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLogicTablesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLogicTablesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logicTableList Field Functions 
    bool hasLogicTableList() const { return this->logicTableList_ != nullptr;};
    void deleteLogicTableList() { this->logicTableList_ = nullptr;};
    inline const ListLogicTablesResponseBodyLogicTableList & logicTableList() const { DARABONBA_PTR_GET_CONST(logicTableList_, ListLogicTablesResponseBodyLogicTableList) };
    inline ListLogicTablesResponseBodyLogicTableList logicTableList() { DARABONBA_PTR_GET(logicTableList_, ListLogicTablesResponseBodyLogicTableList) };
    inline ListLogicTablesResponseBody& setLogicTableList(const ListLogicTablesResponseBodyLogicTableList & logicTableList) { DARABONBA_PTR_SET_VALUE(logicTableList_, logicTableList) };
    inline ListLogicTablesResponseBody& setLogicTableList(ListLogicTablesResponseBodyLogicTableList && logicTableList) { DARABONBA_PTR_SET_RVALUE(logicTableList_, logicTableList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogicTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLogicTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLogicTablesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of the logical tables.
    std::shared_ptr<ListLogicTablesResponseBodyLogicTableList> logicTableList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of logical tables that meet the query conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
