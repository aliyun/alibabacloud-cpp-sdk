// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATATABLEENTITYLISTENTITYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATATABLEENTITYLISTENTITYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTablesResponseBodyDataTableEntityListEntityContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyDataTableEntityListEntityContent& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceQualifiedName, dataSourceQualifiedName_);
      DARABONBA_PTR_TO_JSON(DataSourceUniqueId, dataSourceUniqueId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyDataTableEntityListEntityContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceQualifiedName, dataSourceQualifiedName_);
      DARABONBA_PTR_FROM_JSON(DataSourceUniqueId, dataSourceUniqueId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListTablesResponseBodyDataTableEntityListEntityContent() = default ;
    ListTablesResponseBodyDataTableEntityListEntityContent(const ListTablesResponseBodyDataTableEntityListEntityContent &) = default ;
    ListTablesResponseBodyDataTableEntityListEntityContent(ListTablesResponseBodyDataTableEntityListEntityContent &&) = default ;
    ListTablesResponseBodyDataTableEntityListEntityContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyDataTableEntityListEntityContent() = default ;
    ListTablesResponseBodyDataTableEntityListEntityContent& operator=(const ListTablesResponseBodyDataTableEntityListEntityContent &) = default ;
    ListTablesResponseBodyDataTableEntityListEntityContent& operator=(ListTablesResponseBodyDataTableEntityListEntityContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceQualifiedName_ != nullptr
        && this->dataSourceUniqueId_ != nullptr && this->databaseName_ != nullptr && this->instanceId_ != nullptr && this->projectName_ != nullptr && this->tableName_ != nullptr; };
    // dataSourceQualifiedName Field Functions 
    bool hasDataSourceQualifiedName() const { return this->dataSourceQualifiedName_ != nullptr;};
    void deleteDataSourceQualifiedName() { this->dataSourceQualifiedName_ = nullptr;};
    inline string dataSourceQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceQualifiedName_, "") };
    inline ListTablesResponseBodyDataTableEntityListEntityContent& setDataSourceQualifiedName(string dataSourceQualifiedName) { DARABONBA_PTR_SET_VALUE(dataSourceQualifiedName_, dataSourceQualifiedName) };


    // dataSourceUniqueId Field Functions 
    bool hasDataSourceUniqueId() const { return this->dataSourceUniqueId_ != nullptr;};
    void deleteDataSourceUniqueId() { this->dataSourceUniqueId_ = nullptr;};
    inline string dataSourceUniqueId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUniqueId_, "") };
    inline ListTablesResponseBodyDataTableEntityListEntityContent& setDataSourceUniqueId(string dataSourceUniqueId) { DARABONBA_PTR_SET_VALUE(dataSourceUniqueId_, dataSourceUniqueId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListTablesResponseBodyDataTableEntityListEntityContent& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTablesResponseBodyDataTableEntityListEntityContent& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListTablesResponseBodyDataTableEntityListEntityContent& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListTablesResponseBodyDataTableEntityListEntityContent& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The unique identifier of the data source.
    std::shared_ptr<string> dataSourceQualifiedName_ = nullptr;
    // The unique ID of the data source identifier.
    std::shared_ptr<string> dataSourceUniqueId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The ID of the data source instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the ODPS project.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
