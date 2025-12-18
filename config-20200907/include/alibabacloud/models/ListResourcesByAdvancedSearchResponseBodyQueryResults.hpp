// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYADVANCEDSEARCHRESPONSEBODYQUERYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYADVANCEDSEARCHRESPONSEBODYQUERYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListResourcesByAdvancedSearchResponseBodyQueryResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByAdvancedSearchResponseBodyQueryResults& obj) { 
      DARABONBA_PTR_TO_JSON(QueryResultList, queryResultList_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByAdvancedSearchResponseBodyQueryResults& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryResultList, queryResultList_);
    };
    ListResourcesByAdvancedSearchResponseBodyQueryResults() = default ;
    ListResourcesByAdvancedSearchResponseBodyQueryResults(const ListResourcesByAdvancedSearchResponseBodyQueryResults &) = default ;
    ListResourcesByAdvancedSearchResponseBodyQueryResults(ListResourcesByAdvancedSearchResponseBodyQueryResults &&) = default ;
    ListResourcesByAdvancedSearchResponseBodyQueryResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByAdvancedSearchResponseBodyQueryResults() = default ;
    ListResourcesByAdvancedSearchResponseBodyQueryResults& operator=(const ListResourcesByAdvancedSearchResponseBodyQueryResults &) = default ;
    ListResourcesByAdvancedSearchResponseBodyQueryResults& operator=(ListResourcesByAdvancedSearchResponseBodyQueryResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResultList_ == nullptr; };
    // queryResultList Field Functions 
    bool hasQueryResultList() const { return this->queryResultList_ != nullptr;};
    void deleteQueryResultList() { this->queryResultList_ = nullptr;};
    inline const Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList & queryResultList() const { DARABONBA_PTR_GET_CONST(queryResultList_, Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList) };
    inline Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList queryResultList() { DARABONBA_PTR_GET(queryResultList_, Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList) };
    inline ListResourcesByAdvancedSearchResponseBodyQueryResults& setQueryResultList(const Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList & queryResultList) { DARABONBA_PTR_SET_VALUE(queryResultList_, queryResultList) };
    inline ListResourcesByAdvancedSearchResponseBodyQueryResults& setQueryResultList(Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList && queryResultList) { DARABONBA_PTR_SET_RVALUE(queryResultList_, queryResultList) };


  protected:
    // The queried resources. A maximum of 1,000 data records can be returned. To view more data, use the download URL of the resource file.
    std::shared_ptr<Models::ListResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList> queryResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
