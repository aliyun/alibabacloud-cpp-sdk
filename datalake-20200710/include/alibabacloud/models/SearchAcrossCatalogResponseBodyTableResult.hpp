// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYTABLERESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODYTABLERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAcrossCatalogResponseBodyTableResultTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchAcrossCatalogResponseBodyTableResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAcrossCatalogResponseBodyTableResult& obj) { 
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAcrossCatalogResponseBodyTableResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchAcrossCatalogResponseBodyTableResult() = default ;
    SearchAcrossCatalogResponseBodyTableResult(const SearchAcrossCatalogResponseBodyTableResult &) = default ;
    SearchAcrossCatalogResponseBodyTableResult(SearchAcrossCatalogResponseBodyTableResult &&) = default ;
    SearchAcrossCatalogResponseBodyTableResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAcrossCatalogResponseBodyTableResult() = default ;
    SearchAcrossCatalogResponseBodyTableResult& operator=(const SearchAcrossCatalogResponseBodyTableResult &) = default ;
    SearchAcrossCatalogResponseBodyTableResult& operator=(SearchAcrossCatalogResponseBodyTableResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tables_ == nullptr
        && return this->totalCount_ == nullptr; };
    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::SearchAcrossCatalogResponseBodyTableResultTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::SearchAcrossCatalogResponseBodyTableResultTables>) };
    inline vector<Models::SearchAcrossCatalogResponseBodyTableResultTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::SearchAcrossCatalogResponseBodyTableResultTables>) };
    inline SearchAcrossCatalogResponseBodyTableResult& setTables(const vector<Models::SearchAcrossCatalogResponseBodyTableResultTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline SearchAcrossCatalogResponseBodyTableResult& setTables(vector<Models::SearchAcrossCatalogResponseBodyTableResultTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchAcrossCatalogResponseBodyTableResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned tables.
    std::shared_ptr<vector<Models::SearchAcrossCatalogResponseBodyTableResultTables>> tables_ = nullptr;
    // The total number of tables that meet the match conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
