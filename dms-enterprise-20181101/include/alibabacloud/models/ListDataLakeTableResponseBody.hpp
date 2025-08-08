// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALAKETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALAKETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DmsEnterprise20181101.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataLakeTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLakeTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLakeTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
    };
    ListDataLakeTableResponseBody() = default ;
    ListDataLakeTableResponseBody(const ListDataLakeTableResponseBody &) = default ;
    ListDataLakeTableResponseBody(ListDataLakeTableResponseBody &&) = default ;
    ListDataLakeTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLakeTableResponseBody() = default ;
    ListDataLakeTableResponseBody& operator=(const ListDataLakeTableResponseBody &) = default ;
    ListDataLakeTableResponseBody& operator=(ListDataLakeTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->tableList_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataLakeTableResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataLakeTableResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataLakeTableResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataLakeTableResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataLakeTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataLakeTableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const vector<DLTable> & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<DLTable>) };
    inline vector<DLTable> tableList() { DARABONBA_PTR_GET(tableList_, vector<DLTable>) };
    inline ListDataLakeTableResponseBody& setTableList(const vector<DLTable> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline ListDataLakeTableResponseBody& setTableList(vector<DLTable> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<DLTable>> tableList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
