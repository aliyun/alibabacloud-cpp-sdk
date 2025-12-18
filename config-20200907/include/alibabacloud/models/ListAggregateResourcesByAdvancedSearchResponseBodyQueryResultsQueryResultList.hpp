// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSEBODYQUERYRESULTSQUERYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCESBYADVANCEDSEARCHRESPONSEBODYQUERYRESULTSQUERYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList() = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList(const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList &) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList(ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList &&) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList() = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& operator=(const ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList &) = default ;
    ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& operator=(ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->values_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Darabonba::Json> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> values() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListAggregateResourcesByAdvancedSearchResponseBodyQueryResultsQueryResultList& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The field names.
    std::shared_ptr<vector<string>> columns_ = nullptr;
    // The resource data.
    std::shared_ptr<vector<Darabonba::Json>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
