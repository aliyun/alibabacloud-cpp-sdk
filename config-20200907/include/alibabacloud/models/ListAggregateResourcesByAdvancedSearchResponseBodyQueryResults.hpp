// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSEBODYQUERYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSEBODYQUERYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults& obj) { 
      DARABONBA_PTR_TO_JSON(QueryResultList, queryResultList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryResultList, queryResultList_);
    };
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults() = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults(const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults &) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults(ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults &&) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults() = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults& operator=(const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults &) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults& operator=(ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResultList_ == nullptr; };
    // queryResultList Field Functions 
    bool hasQueryResultList() const { return this->queryResultList_ != nullptr;};
    void deleteQueryResultList() { this->queryResultList_ = nullptr;};
    inline const Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList & queryResultList() const { DARABONBA_PTR_GET_CONST(queryResultList_, Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList) };
    inline Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList queryResultList() { DARABONBA_PTR_GET(queryResultList_, Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults& setQueryResultList(const Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList & queryResultList) { DARABONBA_PTR_SET_VALUE(queryResultList_, queryResultList) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResults& setQueryResultList(Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList && queryResultList) { DARABONBA_PTR_SET_RVALUE(queryResultList_, queryResultList) };


  protected:
    // The queried resources. A maximum of 1,000 data records can be returned. To view more data, use the download URL of the resource file.
    std::shared_ptr<Models::ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList> queryResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
