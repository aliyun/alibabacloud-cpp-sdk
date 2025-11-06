// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTaskInfoHistoryResponseBodyCurrentPageCursor.hpp>
#include <alibabacloud/models/QueryTaskInfoHistoryResponseBodyNextPageCursor.hpp>
#include <vector>
#include <alibabacloud/models/QueryTaskInfoHistoryResponseBodyObjects.hpp>
#include <alibabacloud/models/QueryTaskInfoHistoryResponseBodyPrePageCursor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskInfoHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskInfoHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_TO_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskInfoHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_FROM_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryTaskInfoHistoryResponseBody() = default ;
    QueryTaskInfoHistoryResponseBody(const QueryTaskInfoHistoryResponseBody &) = default ;
    QueryTaskInfoHistoryResponseBody(QueryTaskInfoHistoryResponseBody &&) = default ;
    QueryTaskInfoHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskInfoHistoryResponseBody() = default ;
    QueryTaskInfoHistoryResponseBody& operator=(const QueryTaskInfoHistoryResponseBody &) = default ;
    QueryTaskInfoHistoryResponseBody& operator=(QueryTaskInfoHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPageCursor_ == nullptr
        && return this->nextPageCursor_ == nullptr && return this->objects_ == nullptr && return this->pageSize_ == nullptr && return this->prePageCursor_ == nullptr && return this->requestId_ == nullptr; };
    // currentPageCursor Field Functions 
    bool hasCurrentPageCursor() const { return this->currentPageCursor_ != nullptr;};
    void deleteCurrentPageCursor() { this->currentPageCursor_ = nullptr;};
    inline const QueryTaskInfoHistoryResponseBodyCurrentPageCursor & currentPageCursor() const { DARABONBA_PTR_GET_CONST(currentPageCursor_, QueryTaskInfoHistoryResponseBodyCurrentPageCursor) };
    inline QueryTaskInfoHistoryResponseBodyCurrentPageCursor currentPageCursor() { DARABONBA_PTR_GET(currentPageCursor_, QueryTaskInfoHistoryResponseBodyCurrentPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setCurrentPageCursor(const QueryTaskInfoHistoryResponseBodyCurrentPageCursor & currentPageCursor) { DARABONBA_PTR_SET_VALUE(currentPageCursor_, currentPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setCurrentPageCursor(QueryTaskInfoHistoryResponseBodyCurrentPageCursor && currentPageCursor) { DARABONBA_PTR_SET_RVALUE(currentPageCursor_, currentPageCursor) };


    // nextPageCursor Field Functions 
    bool hasNextPageCursor() const { return this->nextPageCursor_ != nullptr;};
    void deleteNextPageCursor() { this->nextPageCursor_ = nullptr;};
    inline const QueryTaskInfoHistoryResponseBodyNextPageCursor & nextPageCursor() const { DARABONBA_PTR_GET_CONST(nextPageCursor_, QueryTaskInfoHistoryResponseBodyNextPageCursor) };
    inline QueryTaskInfoHistoryResponseBodyNextPageCursor nextPageCursor() { DARABONBA_PTR_GET(nextPageCursor_, QueryTaskInfoHistoryResponseBodyNextPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setNextPageCursor(const QueryTaskInfoHistoryResponseBodyNextPageCursor & nextPageCursor) { DARABONBA_PTR_SET_VALUE(nextPageCursor_, nextPageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setNextPageCursor(QueryTaskInfoHistoryResponseBodyNextPageCursor && nextPageCursor) { DARABONBA_PTR_SET_RVALUE(nextPageCursor_, nextPageCursor) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<QueryTaskInfoHistoryResponseBodyObjects> & objects() const { DARABONBA_PTR_GET_CONST(objects_, vector<QueryTaskInfoHistoryResponseBodyObjects>) };
    inline vector<QueryTaskInfoHistoryResponseBodyObjects> objects() { DARABONBA_PTR_GET(objects_, vector<QueryTaskInfoHistoryResponseBodyObjects>) };
    inline QueryTaskInfoHistoryResponseBody& setObjects(const vector<QueryTaskInfoHistoryResponseBodyObjects> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline QueryTaskInfoHistoryResponseBody& setObjects(vector<QueryTaskInfoHistoryResponseBodyObjects> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskInfoHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePageCursor Field Functions 
    bool hasPrePageCursor() const { return this->prePageCursor_ != nullptr;};
    void deletePrePageCursor() { this->prePageCursor_ = nullptr;};
    inline const QueryTaskInfoHistoryResponseBodyPrePageCursor & prePageCursor() const { DARABONBA_PTR_GET_CONST(prePageCursor_, QueryTaskInfoHistoryResponseBodyPrePageCursor) };
    inline QueryTaskInfoHistoryResponseBodyPrePageCursor prePageCursor() { DARABONBA_PTR_GET(prePageCursor_, QueryTaskInfoHistoryResponseBodyPrePageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setPrePageCursor(const QueryTaskInfoHistoryResponseBodyPrePageCursor & prePageCursor) { DARABONBA_PTR_SET_VALUE(prePageCursor_, prePageCursor) };
    inline QueryTaskInfoHistoryResponseBody& setPrePageCursor(QueryTaskInfoHistoryResponseBodyPrePageCursor && prePageCursor) { DARABONBA_PTR_SET_RVALUE(prePageCursor_, prePageCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskInfoHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryTaskInfoHistoryResponseBodyCurrentPageCursor> currentPageCursor_ = nullptr;
    std::shared_ptr<QueryTaskInfoHistoryResponseBodyNextPageCursor> nextPageCursor_ = nullptr;
    std::shared_ptr<vector<QueryTaskInfoHistoryResponseBodyObjects>> objects_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<QueryTaskInfoHistoryResponseBodyPrePageCursor> prePageCursor_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
