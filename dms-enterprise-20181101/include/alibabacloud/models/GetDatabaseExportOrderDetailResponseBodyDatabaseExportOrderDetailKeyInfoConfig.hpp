// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAILKEYINFOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAILKEYINFOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes.hpp>
#include <alibabacloud/models/GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption.hpp>
#include <alibabacloud/models/GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(ExportContent, exportContent_);
      DARABONBA_PTR_TO_JSON(ExportTypes, exportTypes_);
      DARABONBA_PTR_TO_JSON(SQLExtOption, SQLExtOption_);
      DARABONBA_PTR_TO_JSON(SelectedTables, selectedTables_);
      DARABONBA_PTR_TO_JSON(TargetOption, targetOption_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(ExportContent, exportContent_);
      DARABONBA_PTR_FROM_JSON(ExportTypes, exportTypes_);
      DARABONBA_PTR_FROM_JSON(SQLExtOption, SQLExtOption_);
      DARABONBA_PTR_FROM_JSON(SelectedTables, selectedTables_);
      DARABONBA_PTR_FROM_JSON(TargetOption, targetOption_);
    };
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig &&) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& operator=(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& operator=(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->exportContent_ != nullptr && this->exportTypes_ != nullptr && this->SQLExtOption_ != nullptr && this->selectedTables_ != nullptr && this->targetOption_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // exportContent Field Functions 
    bool hasExportContent() const { return this->exportContent_ != nullptr;};
    void deleteExportContent() { this->exportContent_ = nullptr;};
    inline string exportContent() const { DARABONBA_PTR_GET_DEFAULT(exportContent_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setExportContent(string exportContent) { DARABONBA_PTR_SET_VALUE(exportContent_, exportContent) };


    // exportTypes Field Functions 
    bool hasExportTypes() const { return this->exportTypes_ != nullptr;};
    void deleteExportTypes() { this->exportTypes_ = nullptr;};
    inline const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes & exportTypes() const { DARABONBA_PTR_GET_CONST(exportTypes_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes) };
    inline Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes exportTypes() { DARABONBA_PTR_GET(exportTypes_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setExportTypes(const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes & exportTypes) { DARABONBA_PTR_SET_VALUE(exportTypes_, exportTypes) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setExportTypes(Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes && exportTypes) { DARABONBA_PTR_SET_RVALUE(exportTypes_, exportTypes) };


    // SQLExtOption Field Functions 
    bool hasSQLExtOption() const { return this->SQLExtOption_ != nullptr;};
    void deleteSQLExtOption() { this->SQLExtOption_ = nullptr;};
    inline const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption & SQLExtOption() const { DARABONBA_PTR_GET_CONST(SQLExtOption_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption) };
    inline Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption SQLExtOption() { DARABONBA_PTR_GET(SQLExtOption_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setSQLExtOption(const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption & SQLExtOption) { DARABONBA_PTR_SET_VALUE(SQLExtOption_, SQLExtOption) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setSQLExtOption(Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption && SQLExtOption) { DARABONBA_PTR_SET_RVALUE(SQLExtOption_, SQLExtOption) };


    // selectedTables Field Functions 
    bool hasSelectedTables() const { return this->selectedTables_ != nullptr;};
    void deleteSelectedTables() { this->selectedTables_ = nullptr;};
    inline const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables & selectedTables() const { DARABONBA_PTR_GET_CONST(selectedTables_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables) };
    inline Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables selectedTables() { DARABONBA_PTR_GET(selectedTables_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setSelectedTables(const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables & selectedTables) { DARABONBA_PTR_SET_VALUE(selectedTables_, selectedTables) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setSelectedTables(Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables && selectedTables) { DARABONBA_PTR_SET_RVALUE(selectedTables_, selectedTables) };


    // targetOption Field Functions 
    bool hasTargetOption() const { return this->targetOption_ != nullptr;};
    void deleteTargetOption() { this->targetOption_ = nullptr;};
    inline string targetOption() const { DARABONBA_PTR_GET_DEFAULT(targetOption_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig& setTargetOption(string targetOption) { DARABONBA_PTR_SET_VALUE(targetOption_, targetOption) };


  protected:
    // The database name.
    std::shared_ptr<string> dbName_ = nullptr;
    // The type of data that was exported. Valid values:
    // 
    // *   **DATA**: The data of the database was exported.
    // *   **STRUCT**: The schema of the database was exported.
    // *   **DATA_STRUCT**: The data and schema of the database were exported.
    std::shared_ptr<string> exportContent_ = nullptr;
    // The type of schema that was exported.
    std::shared_ptr<Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigExportTypes> exportTypes_ = nullptr;
    // The extension options of the SQL script.
    std::shared_ptr<Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption> SQLExtOption_ = nullptr;
    // The tables that were exported from the database.
    std::shared_ptr<Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSelectedTables> selectedTables_ = nullptr;
    // The format in which the database was exported. Valid values:
    // 
    // *   **SQL**
    // *   **CSV**
    // *   **XLSX**
    std::shared_ptr<string> targetOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
