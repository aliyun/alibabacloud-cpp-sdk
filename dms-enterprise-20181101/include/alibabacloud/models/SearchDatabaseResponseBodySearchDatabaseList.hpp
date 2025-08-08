// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODYSEARCHDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODYSEARCHDATABASELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchDatabaseResponseBodySearchDatabaseListSearchDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDatabaseResponseBodySearchDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatabaseResponseBodySearchDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(SearchDatabase, searchDatabase_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatabaseResponseBodySearchDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchDatabase, searchDatabase_);
    };
    SearchDatabaseResponseBodySearchDatabaseList() = default ;
    SearchDatabaseResponseBodySearchDatabaseList(const SearchDatabaseResponseBodySearchDatabaseList &) = default ;
    SearchDatabaseResponseBodySearchDatabaseList(SearchDatabaseResponseBodySearchDatabaseList &&) = default ;
    SearchDatabaseResponseBodySearchDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatabaseResponseBodySearchDatabaseList() = default ;
    SearchDatabaseResponseBodySearchDatabaseList& operator=(const SearchDatabaseResponseBodySearchDatabaseList &) = default ;
    SearchDatabaseResponseBodySearchDatabaseList& operator=(SearchDatabaseResponseBodySearchDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->searchDatabase_ != nullptr; };
    // searchDatabase Field Functions 
    bool hasSearchDatabase() const { return this->searchDatabase_ != nullptr;};
    void deleteSearchDatabase() { this->searchDatabase_ = nullptr;};
    inline const vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase> & searchDatabase() const { DARABONBA_PTR_GET_CONST(searchDatabase_, vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase>) };
    inline vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase> searchDatabase() { DARABONBA_PTR_GET(searchDatabase_, vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase>) };
    inline SearchDatabaseResponseBodySearchDatabaseList& setSearchDatabase(const vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase> & searchDatabase) { DARABONBA_PTR_SET_VALUE(searchDatabase_, searchDatabase) };
    inline SearchDatabaseResponseBodySearchDatabaseList& setSearchDatabase(vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase> && searchDatabase) { DARABONBA_PTR_SET_RVALUE(searchDatabase_, searchDatabase) };


  protected:
    std::shared_ptr<vector<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabase>> searchDatabase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
