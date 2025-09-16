// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYRESULTDATABASES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYRESULTDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ResultDatabasesFunctionsValue.hpp>
#include <alibabacloud/models/ListDatabasesResponseBodyResultDatabasesSqlInstances.hpp>
#include <alibabacloud/models/ListDatabasesResponseBodyResultDatabasesTables.hpp>
#include <alibabacloud/models/ListDatabasesResponseBodyResultDatabasesTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDatabasesResponseBodyResultDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyResultDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(sqlInstances, sqlInstances_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyResultDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(sqlInstances, sqlInstances_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(templates, templates_);
    };
    ListDatabasesResponseBodyResultDatabases() = default ;
    ListDatabasesResponseBodyResultDatabases(const ListDatabasesResponseBodyResultDatabases &) = default ;
    ListDatabasesResponseBodyResultDatabases(ListDatabasesResponseBodyResultDatabases &&) = default ;
    ListDatabasesResponseBodyResultDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyResultDatabases() = default ;
    ListDatabasesResponseBodyResultDatabases& operator=(const ListDatabasesResponseBodyResultDatabases &) = default ;
    ListDatabasesResponseBodyResultDatabases& operator=(ListDatabasesResponseBodyResultDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr
        && this->functions_ != nullptr && this->sqlInstances_ != nullptr && this->tables_ != nullptr && this->templates_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ListDatabasesResponseBodyResultDatabases& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const map<string, vector<Models::ResultDatabasesFunctionsValue>> & functions() const { DARABONBA_PTR_GET_CONST(functions_, map<string, vector<Models::ResultDatabasesFunctionsValue>>) };
    inline map<string, vector<Models::ResultDatabasesFunctionsValue>> functions() { DARABONBA_PTR_GET(functions_, map<string, vector<Models::ResultDatabasesFunctionsValue>>) };
    inline ListDatabasesResponseBodyResultDatabases& setFunctions(const map<string, vector<Models::ResultDatabasesFunctionsValue>> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline ListDatabasesResponseBodyResultDatabases& setFunctions(map<string, vector<Models::ResultDatabasesFunctionsValue>> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // sqlInstances Field Functions 
    bool hasSqlInstances() const { return this->sqlInstances_ != nullptr;};
    void deleteSqlInstances() { this->sqlInstances_ = nullptr;};
    inline const vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances> & sqlInstances() const { DARABONBA_PTR_GET_CONST(sqlInstances_, vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances>) };
    inline vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances> sqlInstances() { DARABONBA_PTR_GET(sqlInstances_, vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances>) };
    inline ListDatabasesResponseBodyResultDatabases& setSqlInstances(const vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances> & sqlInstances) { DARABONBA_PTR_SET_VALUE(sqlInstances_, sqlInstances) };
    inline ListDatabasesResponseBodyResultDatabases& setSqlInstances(vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances> && sqlInstances) { DARABONBA_PTR_SET_RVALUE(sqlInstances_, sqlInstances) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListDatabasesResponseBodyResultDatabasesTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListDatabasesResponseBodyResultDatabasesTables>) };
    inline vector<Models::ListDatabasesResponseBodyResultDatabasesTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListDatabasesResponseBodyResultDatabasesTables>) };
    inline ListDatabasesResponseBodyResultDatabases& setTables(const vector<Models::ListDatabasesResponseBodyResultDatabasesTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListDatabasesResponseBodyResultDatabases& setTables(vector<Models::ListDatabasesResponseBodyResultDatabasesTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates>) };
    inline vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates>) };
    inline ListDatabasesResponseBodyResultDatabases& setTemplates(const vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline ListDatabasesResponseBodyResultDatabases& setTemplates(vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ResultDatabasesFunctionsValue>>> functions_ = nullptr;
    std::shared_ptr<vector<Models::ListDatabasesResponseBodyResultDatabasesSqlInstances>> sqlInstances_ = nullptr;
    std::shared_ptr<vector<Models::ListDatabasesResponseBodyResultDatabasesTables>> tables_ = nullptr;
    std::shared_ptr<vector<Models::ListDatabasesResponseBodyResultDatabasesTemplates>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
