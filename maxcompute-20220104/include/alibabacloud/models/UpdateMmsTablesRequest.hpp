// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMSTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMSTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateMmsTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmsTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tableNames, tableNames_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmsTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tableNames, tableNames_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
    };
    UpdateMmsTablesRequest() = default ;
    UpdateMmsTablesRequest(const UpdateMmsTablesRequest &) = default ;
    UpdateMmsTablesRequest(UpdateMmsTablesRequest &&) = default ;
    UpdateMmsTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmsTablesRequest() = default ;
    UpdateMmsTablesRequest& operator=(const UpdateMmsTablesRequest &) = default ;
    UpdateMmsTablesRequest& operator=(UpdateMmsTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->dstProjectName_ == nullptr && this->dstSchemaName_ == nullptr && this->status_ == nullptr && this->tableNames_ == nullptr && this->tables_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline UpdateMmsTablesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dstProjectName Field Functions 
    bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
    void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
    inline string getDstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
    inline UpdateMmsTablesRequest& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string getDstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline UpdateMmsTablesRequest& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateMmsTablesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline UpdateMmsTablesRequest& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline UpdateMmsTablesRequest& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<int64_t> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<int64_t>) };
    inline vector<int64_t> getTables() { DARABONBA_PTR_GET(tables_, vector<int64_t>) };
    inline UpdateMmsTablesRequest& setTables(const vector<int64_t> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline UpdateMmsTablesRequest& setTables(vector<int64_t> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    shared_ptr<string> dbName_ {};
    shared_ptr<string> dstProjectName_ {};
    shared_ptr<string> dstSchemaName_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<string>> tableNames_ {};
    // Deprecated
    shared_ptr<vector<int64_t>> tables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
