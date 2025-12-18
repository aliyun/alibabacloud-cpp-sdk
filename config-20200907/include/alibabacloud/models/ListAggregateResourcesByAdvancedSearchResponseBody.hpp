// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourcesByAdvancedSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourcesByAdvancedSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryResults, queryResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourcesByAdvancedSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryResults, queryResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateResourcesByAdvancedSearchResponseBody() = default ;
    ListAggregateResourcesByAdvancedSearchResponseBody(const ListAggregateResourcesByAdvancedSearchResponseBody &) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBody(ListAggregateResourcesByAdvancedSearchResponseBody &&) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourcesByAdvancedSearchResponseBody() = default ;
    ListAggregateResourcesByAdvancedSearchResponseBody& operator=(const ListAggregateResourcesByAdvancedSearchResponseBody &) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBody& operator=(ListAggregateResourcesByAdvancedSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // queryResults Field Functions 
    bool hasQueryResults() const { return this->queryResults_ != nullptr;};
    void deleteQueryResults() { this->queryResults_ = nullptr;};
    inline const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults & queryResults() const { DARABONBA_PTR_GET_CONST(queryResults_, ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults queryResults() { DARABONBA_PTR_GET(queryResults_, ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults) };
    inline ListAggregateResourcesByAdvancedSearchResponseBody& setQueryResults(const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults & queryResults) { DARABONBA_PTR_SET_VALUE(queryResults_, queryResults) };
    inline ListAggregateResourcesByAdvancedSearchResponseBody& setQueryResults(ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults && queryResults) { DARABONBA_PTR_SET_RVALUE(queryResults_, queryResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateResourcesByAdvancedSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults> queryResults_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
