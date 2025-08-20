// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSLIFECYCLESTRATEGYRESPONSEBODYITEMSOPERATIONTABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSLIFECYCLESTRATEGYRESPONSEBODYITEMSOPERATIONTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsLifecycleStrategyResponseBodyItemsOperationTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsLifecycleStrategyResponseBodyItemsOperationTables& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(ProcessAll, processAll_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsLifecycleStrategyResponseBodyItemsOperationTables& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(ProcessAll, processAll_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    ListApsLifecycleStrategyResponseBodyItemsOperationTables() = default ;
    ListApsLifecycleStrategyResponseBodyItemsOperationTables(const ListApsLifecycleStrategyResponseBodyItemsOperationTables &) = default ;
    ListApsLifecycleStrategyResponseBodyItemsOperationTables(ListApsLifecycleStrategyResponseBodyItemsOperationTables &&) = default ;
    ListApsLifecycleStrategyResponseBodyItemsOperationTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsLifecycleStrategyResponseBodyItemsOperationTables() = default ;
    ListApsLifecycleStrategyResponseBodyItemsOperationTables& operator=(const ListApsLifecycleStrategyResponseBodyItemsOperationTables &) = default ;
    ListApsLifecycleStrategyResponseBodyItemsOperationTables& operator=(ListApsLifecycleStrategyResponseBodyItemsOperationTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->processAll_ != nullptr && this->tableNames_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListApsLifecycleStrategyResponseBodyItemsOperationTables& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // processAll Field Functions 
    bool hasProcessAll() const { return this->processAll_ != nullptr;};
    void deleteProcessAll() { this->processAll_ = nullptr;};
    inline string processAll() const { DARABONBA_PTR_GET_DEFAULT(processAll_, "") };
    inline ListApsLifecycleStrategyResponseBodyItemsOperationTables& setProcessAll(string processAll) { DARABONBA_PTR_SET_VALUE(processAll_, processAll) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline ListApsLifecycleStrategyResponseBodyItemsOperationTables& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline ListApsLifecycleStrategyResponseBodyItemsOperationTables& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Indicates whether all tables in the database are selected.
    std::shared_ptr<string> processAll_ = nullptr;
    // The names of the tables.
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
