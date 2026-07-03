// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListQueryViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QueryViews, queryViews_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QueryViews, queryViews_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListQueryViewsResponseBody() = default ;
    ListQueryViewsResponseBody(const ListQueryViewsResponseBody &) = default ;
    ListQueryViewsResponseBody(ListQueryViewsResponseBody &&) = default ;
    ListQueryViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryViewsResponseBody() = default ;
    ListQueryViewsResponseBody& operator=(const ListQueryViewsResponseBody &) = default ;
    ListQueryViewsResponseBody& operator=(ListQueryViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryViews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryViews& obj) { 
        DARABONBA_PTR_TO_JSON(QueryViewCondition, queryViewCondition_);
        DARABONBA_PTR_TO_JSON(QueryViewCriteria, queryViewCriteria_);
        DARABONBA_PTR_TO_JSON(QueryViewFields, queryViewFields_);
        DARABONBA_PTR_TO_JSON(QueryViewId, queryViewId_);
        DARABONBA_PTR_TO_JSON(QueryViewName, queryViewName_);
        DARABONBA_PTR_TO_JSON(QueryViewOrder, queryViewOrder_);
        DARABONBA_PTR_TO_JSON(QueryViewScene, queryViewScene_);
        DARABONBA_PTR_TO_JSON(QueryViewStatus, queryViewStatus_);
        DARABONBA_PTR_TO_JSON(QueryViewType, queryViewType_);
      };
      friend void from_json(const Darabonba::Json& j, QueryViews& obj) { 
        DARABONBA_PTR_FROM_JSON(QueryViewCondition, queryViewCondition_);
        DARABONBA_PTR_FROM_JSON(QueryViewCriteria, queryViewCriteria_);
        DARABONBA_PTR_FROM_JSON(QueryViewFields, queryViewFields_);
        DARABONBA_PTR_FROM_JSON(QueryViewId, queryViewId_);
        DARABONBA_PTR_FROM_JSON(QueryViewName, queryViewName_);
        DARABONBA_PTR_FROM_JSON(QueryViewOrder, queryViewOrder_);
        DARABONBA_PTR_FROM_JSON(QueryViewScene, queryViewScene_);
        DARABONBA_PTR_FROM_JSON(QueryViewStatus, queryViewStatus_);
        DARABONBA_PTR_FROM_JSON(QueryViewType, queryViewType_);
      };
      QueryViews() = default ;
      QueryViews(const QueryViews &) = default ;
      QueryViews(QueryViews &&) = default ;
      QueryViews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryViews() = default ;
      QueryViews& operator=(const QueryViews &) = default ;
      QueryViews& operator=(QueryViews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->queryViewCondition_ == nullptr
        && this->queryViewCriteria_ == nullptr && this->queryViewFields_ == nullptr && this->queryViewId_ == nullptr && this->queryViewName_ == nullptr && this->queryViewOrder_ == nullptr
        && this->queryViewScene_ == nullptr && this->queryViewStatus_ == nullptr && this->queryViewType_ == nullptr; };
      // queryViewCondition Field Functions 
      bool hasQueryViewCondition() const { return this->queryViewCondition_ != nullptr;};
      void deleteQueryViewCondition() { this->queryViewCondition_ = nullptr;};
      inline string getQueryViewCondition() const { DARABONBA_PTR_GET_DEFAULT(queryViewCondition_, "") };
      inline QueryViews& setQueryViewCondition(string queryViewCondition) { DARABONBA_PTR_SET_VALUE(queryViewCondition_, queryViewCondition) };


      // queryViewCriteria Field Functions 
      bool hasQueryViewCriteria() const { return this->queryViewCriteria_ != nullptr;};
      void deleteQueryViewCriteria() { this->queryViewCriteria_ = nullptr;};
      inline string getQueryViewCriteria() const { DARABONBA_PTR_GET_DEFAULT(queryViewCriteria_, "") };
      inline QueryViews& setQueryViewCriteria(string queryViewCriteria) { DARABONBA_PTR_SET_VALUE(queryViewCriteria_, queryViewCriteria) };


      // queryViewFields Field Functions 
      bool hasQueryViewFields() const { return this->queryViewFields_ != nullptr;};
      void deleteQueryViewFields() { this->queryViewFields_ = nullptr;};
      inline string getQueryViewFields() const { DARABONBA_PTR_GET_DEFAULT(queryViewFields_, "") };
      inline QueryViews& setQueryViewFields(string queryViewFields) { DARABONBA_PTR_SET_VALUE(queryViewFields_, queryViewFields) };


      // queryViewId Field Functions 
      bool hasQueryViewId() const { return this->queryViewId_ != nullptr;};
      void deleteQueryViewId() { this->queryViewId_ = nullptr;};
      inline string getQueryViewId() const { DARABONBA_PTR_GET_DEFAULT(queryViewId_, "") };
      inline QueryViews& setQueryViewId(string queryViewId) { DARABONBA_PTR_SET_VALUE(queryViewId_, queryViewId) };


      // queryViewName Field Functions 
      bool hasQueryViewName() const { return this->queryViewName_ != nullptr;};
      void deleteQueryViewName() { this->queryViewName_ = nullptr;};
      inline string getQueryViewName() const { DARABONBA_PTR_GET_DEFAULT(queryViewName_, "") };
      inline QueryViews& setQueryViewName(string queryViewName) { DARABONBA_PTR_SET_VALUE(queryViewName_, queryViewName) };


      // queryViewOrder Field Functions 
      bool hasQueryViewOrder() const { return this->queryViewOrder_ != nullptr;};
      void deleteQueryViewOrder() { this->queryViewOrder_ = nullptr;};
      inline string getQueryViewOrder() const { DARABONBA_PTR_GET_DEFAULT(queryViewOrder_, "") };
      inline QueryViews& setQueryViewOrder(string queryViewOrder) { DARABONBA_PTR_SET_VALUE(queryViewOrder_, queryViewOrder) };


      // queryViewScene Field Functions 
      bool hasQueryViewScene() const { return this->queryViewScene_ != nullptr;};
      void deleteQueryViewScene() { this->queryViewScene_ = nullptr;};
      inline string getQueryViewScene() const { DARABONBA_PTR_GET_DEFAULT(queryViewScene_, "") };
      inline QueryViews& setQueryViewScene(string queryViewScene) { DARABONBA_PTR_SET_VALUE(queryViewScene_, queryViewScene) };


      // queryViewStatus Field Functions 
      bool hasQueryViewStatus() const { return this->queryViewStatus_ != nullptr;};
      void deleteQueryViewStatus() { this->queryViewStatus_ = nullptr;};
      inline string getQueryViewStatus() const { DARABONBA_PTR_GET_DEFAULT(queryViewStatus_, "") };
      inline QueryViews& setQueryViewStatus(string queryViewStatus) { DARABONBA_PTR_SET_VALUE(queryViewStatus_, queryViewStatus) };


      // queryViewType Field Functions 
      bool hasQueryViewType() const { return this->queryViewType_ != nullptr;};
      void deleteQueryViewType() { this->queryViewType_ = nullptr;};
      inline string getQueryViewType() const { DARABONBA_PTR_GET_DEFAULT(queryViewType_, "") };
      inline QueryViews& setQueryViewType(string queryViewType) { DARABONBA_PTR_SET_VALUE(queryViewType_, queryViewType) };


    protected:
      // The custom query condition of the view.
      shared_ptr<string> queryViewCondition_ {};
      // The alert filter statement of the view.
      shared_ptr<string> queryViewCriteria_ {};
      // The list of displayed fields.
      shared_ptr<string> queryViewFields_ {};
      // The unique identifier of the query view.
      shared_ptr<string> queryViewId_ {};
      // The view name.
      shared_ptr<string> queryViewName_ {};
      // The display order.
      shared_ptr<string> queryViewOrder_ {};
      // The scene to which the view belongs.
      shared_ptr<string> queryViewScene_ {};
      // The view status.
      shared_ptr<string> queryViewStatus_ {};
      // The view type.
      shared_ptr<string> queryViewType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->queryViews_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQueryViewsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQueryViewsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queryViews Field Functions 
    bool hasQueryViews() const { return this->queryViews_ != nullptr;};
    void deleteQueryViews() { this->queryViews_ = nullptr;};
    inline const vector<ListQueryViewsResponseBody::QueryViews> & getQueryViews() const { DARABONBA_PTR_GET_CONST(queryViews_, vector<ListQueryViewsResponseBody::QueryViews>) };
    inline vector<ListQueryViewsResponseBody::QueryViews> getQueryViews() { DARABONBA_PTR_GET(queryViews_, vector<ListQueryViewsResponseBody::QueryViews>) };
    inline ListQueryViewsResponseBody& setQueryViews(const vector<ListQueryViewsResponseBody::QueryViews> & queryViews) { DARABONBA_PTR_SET_VALUE(queryViews_, queryViews) };
    inline ListQueryViewsResponseBody& setQueryViews(vector<ListQueryViewsResponseBody::QueryViews> && queryViews) { DARABONBA_PTR_SET_RVALUE(queryViews_, queryViews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueryViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of results to return per request when using the NextToken-based pagination. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. You do not need to specify this parameter for the first query or if no more results exist. If more results exist, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The list of query views.
    shared_ptr<vector<ListQueryViewsResponseBody::QueryViews>> queryViews_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
