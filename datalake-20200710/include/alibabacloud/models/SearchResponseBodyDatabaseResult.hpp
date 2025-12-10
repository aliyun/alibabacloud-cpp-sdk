// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATABASERESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATABASERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchResponseBodyDatabaseResultDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchResponseBodyDatabaseResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDatabaseResult& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDatabaseResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchResponseBodyDatabaseResult() = default ;
    SearchResponseBodyDatabaseResult(const SearchResponseBodyDatabaseResult &) = default ;
    SearchResponseBodyDatabaseResult(SearchResponseBodyDatabaseResult &&) = default ;
    SearchResponseBodyDatabaseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDatabaseResult() = default ;
    SearchResponseBodyDatabaseResult& operator=(const SearchResponseBodyDatabaseResult &) = default ;
    SearchResponseBodyDatabaseResult& operator=(SearchResponseBodyDatabaseResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && return this->totalCount_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<Models::SearchResponseBodyDatabaseResultDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<Models::SearchResponseBodyDatabaseResultDatabases>) };
    inline vector<Models::SearchResponseBodyDatabaseResultDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<Models::SearchResponseBodyDatabaseResultDatabases>) };
    inline SearchResponseBodyDatabaseResult& setDatabases(const vector<Models::SearchResponseBodyDatabaseResultDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline SearchResponseBodyDatabaseResult& setDatabases(vector<Models::SearchResponseBodyDatabaseResultDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchResponseBodyDatabaseResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned databases.
    std::shared_ptr<vector<Models::SearchResponseBodyDatabaseResultDatabases>> databases_ = nullptr;
    // Total number of databases that meet the match conditions
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
