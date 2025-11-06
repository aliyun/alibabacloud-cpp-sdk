// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTaskDetailHistoryResponseBodyCurrentPageCursor.hpp>
#include <alibabacloud/models/QueryTaskDetailHistoryResponseBodyNextPageCursor.hpp>
#include <vector>
#include <alibabacloud/models/QueryTaskDetailHistoryResponseBodyObjects.hpp>
#include <alibabacloud/models/QueryTaskDetailHistoryResponseBodyPrePageCursor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskDetailHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_TO_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageCursor, currentPageCursor_);
      DARABONBA_PTR_FROM_JSON(NextPageCursor, nextPageCursor_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePageCursor, prePageCursor_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryTaskDetailHistoryResponseBody() = default ;
    QueryTaskDetailHistoryResponseBody(const QueryTaskDetailHistoryResponseBody &) = default ;
    QueryTaskDetailHistoryResponseBody(QueryTaskDetailHistoryResponseBody &&) = default ;
    QueryTaskDetailHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailHistoryResponseBody() = default ;
    QueryTaskDetailHistoryResponseBody& operator=(const QueryTaskDetailHistoryResponseBody &) = default ;
    QueryTaskDetailHistoryResponseBody& operator=(QueryTaskDetailHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPageCursor_ == nullptr
        && return this->nextPageCursor_ == nullptr && return this->objects_ == nullptr && return this->pageSize_ == nullptr && return this->prePageCursor_ == nullptr && return this->requestId_ == nullptr; };
    // currentPageCursor Field Functions 
    bool hasCurrentPageCursor() const { return this->currentPageCursor_ != nullptr;};
    void deleteCurrentPageCursor() { this->currentPageCursor_ = nullptr;};
    inline const QueryTaskDetailHistoryResponseBodyCurrentPageCursor & currentPageCursor() const { DARABONBA_PTR_GET_CONST(currentPageCursor_, QueryTaskDetailHistoryResponseBodyCurrentPageCursor) };
    inline QueryTaskDetailHistoryResponseBodyCurrentPageCursor currentPageCursor() { DARABONBA_PTR_GET(currentPageCursor_, QueryTaskDetailHistoryResponseBodyCurrentPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setCurrentPageCursor(const QueryTaskDetailHistoryResponseBodyCurrentPageCursor & currentPageCursor) { DARABONBA_PTR_SET_VALUE(currentPageCursor_, currentPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setCurrentPageCursor(QueryTaskDetailHistoryResponseBodyCurrentPageCursor && currentPageCursor) { DARABONBA_PTR_SET_RVALUE(currentPageCursor_, currentPageCursor) };


    // nextPageCursor Field Functions 
    bool hasNextPageCursor() const { return this->nextPageCursor_ != nullptr;};
    void deleteNextPageCursor() { this->nextPageCursor_ = nullptr;};
    inline const QueryTaskDetailHistoryResponseBodyNextPageCursor & nextPageCursor() const { DARABONBA_PTR_GET_CONST(nextPageCursor_, QueryTaskDetailHistoryResponseBodyNextPageCursor) };
    inline QueryTaskDetailHistoryResponseBodyNextPageCursor nextPageCursor() { DARABONBA_PTR_GET(nextPageCursor_, QueryTaskDetailHistoryResponseBodyNextPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setNextPageCursor(const QueryTaskDetailHistoryResponseBodyNextPageCursor & nextPageCursor) { DARABONBA_PTR_SET_VALUE(nextPageCursor_, nextPageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setNextPageCursor(QueryTaskDetailHistoryResponseBodyNextPageCursor && nextPageCursor) { DARABONBA_PTR_SET_RVALUE(nextPageCursor_, nextPageCursor) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<QueryTaskDetailHistoryResponseBodyObjects> & objects() const { DARABONBA_PTR_GET_CONST(objects_, vector<QueryTaskDetailHistoryResponseBodyObjects>) };
    inline vector<QueryTaskDetailHistoryResponseBodyObjects> objects() { DARABONBA_PTR_GET(objects_, vector<QueryTaskDetailHistoryResponseBodyObjects>) };
    inline QueryTaskDetailHistoryResponseBody& setObjects(const vector<QueryTaskDetailHistoryResponseBodyObjects> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline QueryTaskDetailHistoryResponseBody& setObjects(vector<QueryTaskDetailHistoryResponseBodyObjects> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskDetailHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePageCursor Field Functions 
    bool hasPrePageCursor() const { return this->prePageCursor_ != nullptr;};
    void deletePrePageCursor() { this->prePageCursor_ = nullptr;};
    inline const QueryTaskDetailHistoryResponseBodyPrePageCursor & prePageCursor() const { DARABONBA_PTR_GET_CONST(prePageCursor_, QueryTaskDetailHistoryResponseBodyPrePageCursor) };
    inline QueryTaskDetailHistoryResponseBodyPrePageCursor prePageCursor() { DARABONBA_PTR_GET(prePageCursor_, QueryTaskDetailHistoryResponseBodyPrePageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setPrePageCursor(const QueryTaskDetailHistoryResponseBodyPrePageCursor & prePageCursor) { DARABONBA_PTR_SET_VALUE(prePageCursor_, prePageCursor) };
    inline QueryTaskDetailHistoryResponseBody& setPrePageCursor(QueryTaskDetailHistoryResponseBodyPrePageCursor && prePageCursor) { DARABONBA_PTR_SET_RVALUE(prePageCursor_, prePageCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskDetailHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryTaskDetailHistoryResponseBodyCurrentPageCursor> currentPageCursor_ = nullptr;
    std::shared_ptr<QueryTaskDetailHistoryResponseBodyNextPageCursor> nextPageCursor_ = nullptr;
    std::shared_ptr<vector<QueryTaskDetailHistoryResponseBodyObjects>> objects_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<QueryTaskDetailHistoryResponseBodyPrePageCursor> prePageCursor_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
