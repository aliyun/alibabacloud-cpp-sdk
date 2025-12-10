// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYTABLERESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYTABLERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchResponseBodyTableResultTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchResponseBodyTableResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyTableResult& obj) { 
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyTableResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchResponseBodyTableResult() = default ;
    SearchResponseBodyTableResult(const SearchResponseBodyTableResult &) = default ;
    SearchResponseBodyTableResult(SearchResponseBodyTableResult &&) = default ;
    SearchResponseBodyTableResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyTableResult() = default ;
    SearchResponseBodyTableResult& operator=(const SearchResponseBodyTableResult &) = default ;
    SearchResponseBodyTableResult& operator=(SearchResponseBodyTableResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tables_ == nullptr
        && return this->totalCount_ == nullptr; };
    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::SearchResponseBodyTableResultTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::SearchResponseBodyTableResultTables>) };
    inline vector<Models::SearchResponseBodyTableResultTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::SearchResponseBodyTableResultTables>) };
    inline SearchResponseBodyTableResult& setTables(const vector<Models::SearchResponseBodyTableResultTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline SearchResponseBodyTableResult& setTables(vector<Models::SearchResponseBodyTableResultTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchResponseBodyTableResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned tables.
    std::shared_ptr<vector<Models::SearchResponseBodyTableResultTables>> tables_ = nullptr;
    // The total number of tables that meet the match conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
