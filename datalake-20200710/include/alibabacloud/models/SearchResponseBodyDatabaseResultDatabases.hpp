// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATABASERESULTDATABASES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATABASERESULTDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Database.hpp>
#include <vector>
#include <alibabacloud/models/HighLight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchResponseBodyDatabaseResultDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDatabaseResultDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(HighLightList, highLightList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDatabaseResultDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(HighLightList, highLightList_);
    };
    SearchResponseBodyDatabaseResultDatabases() = default ;
    SearchResponseBodyDatabaseResultDatabases(const SearchResponseBodyDatabaseResultDatabases &) = default ;
    SearchResponseBodyDatabaseResultDatabases(SearchResponseBodyDatabaseResultDatabases &&) = default ;
    SearchResponseBodyDatabaseResultDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDatabaseResultDatabases() = default ;
    SearchResponseBodyDatabaseResultDatabases& operator=(const SearchResponseBodyDatabaseResultDatabases &) = default ;
    SearchResponseBodyDatabaseResultDatabases& operator=(SearchResponseBodyDatabaseResultDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->highLightList_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const Models::Database & database() const { DARABONBA_PTR_GET_CONST(database_, Models::Database) };
    inline Models::Database database() { DARABONBA_PTR_GET(database_, Models::Database) };
    inline SearchResponseBodyDatabaseResultDatabases& setDatabase(const Models::Database & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline SearchResponseBodyDatabaseResultDatabases& setDatabase(Models::Database && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // highLightList Field Functions 
    bool hasHighLightList() const { return this->highLightList_ != nullptr;};
    void deleteHighLightList() { this->highLightList_ = nullptr;};
    inline const vector<Models::HighLight> & highLightList() const { DARABONBA_PTR_GET_CONST(highLightList_, vector<Models::HighLight>) };
    inline vector<Models::HighLight> highLightList() { DARABONBA_PTR_GET(highLightList_, vector<Models::HighLight>) };
    inline SearchResponseBodyDatabaseResultDatabases& setHighLightList(const vector<Models::HighLight> & highLightList) { DARABONBA_PTR_SET_VALUE(highLightList_, highLightList) };
    inline SearchResponseBodyDatabaseResultDatabases& setHighLightList(vector<Models::HighLight> && highLightList) { DARABONBA_PTR_SET_RVALUE(highLightList_, highLightList) };


  protected:
    // The returned database.
    std::shared_ptr<Models::Database> database_ = nullptr;
    // The returned highlighted text.
    std::shared_ptr<vector<Models::HighLight>> highLightList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
