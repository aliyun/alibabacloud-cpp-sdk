// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUESTPLUGINPARAMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUESTPLUGINPARAMCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDatabaseExportOrderRequestPluginParamConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseExportOrderRequestPluginParamConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DataOption, dataOption_);
      DARABONBA_PTR_TO_JSON(ExportContent, exportContent_);
      DARABONBA_PTR_TO_JSON(ExportTypes, exportTypes_);
      DARABONBA_PTR_TO_JSON(SQLExtOption, SQLExtOption_);
      DARABONBA_PTR_TO_JSON(SelectedTables, selectedTables_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TargetOption, targetOption_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseExportOrderRequestPluginParamConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DataOption, dataOption_);
      DARABONBA_PTR_FROM_JSON(ExportContent, exportContent_);
      DARABONBA_PTR_FROM_JSON(ExportTypes, exportTypes_);
      DARABONBA_PTR_FROM_JSON(SQLExtOption, SQLExtOption_);
      DARABONBA_PTR_FROM_JSON(SelectedTables, selectedTables_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TargetOption, targetOption_);
    };
    CreateDatabaseExportOrderRequestPluginParamConfig() = default ;
    CreateDatabaseExportOrderRequestPluginParamConfig(const CreateDatabaseExportOrderRequestPluginParamConfig &) = default ;
    CreateDatabaseExportOrderRequestPluginParamConfig(CreateDatabaseExportOrderRequestPluginParamConfig &&) = default ;
    CreateDatabaseExportOrderRequestPluginParamConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseExportOrderRequestPluginParamConfig() = default ;
    CreateDatabaseExportOrderRequestPluginParamConfig& operator=(const CreateDatabaseExportOrderRequestPluginParamConfig &) = default ;
    CreateDatabaseExportOrderRequestPluginParamConfig& operator=(CreateDatabaseExportOrderRequestPluginParamConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataOption_ != nullptr
        && this->exportContent_ != nullptr && this->exportTypes_ != nullptr && this->SQLExtOption_ != nullptr && this->selectedTables_ != nullptr && this->tables_ != nullptr
        && this->targetOption_ != nullptr; };
    // dataOption Field Functions 
    bool hasDataOption() const { return this->dataOption_ != nullptr;};
    void deleteDataOption() { this->dataOption_ = nullptr;};
    inline const vector<string> & dataOption() const { DARABONBA_PTR_GET_CONST(dataOption_, vector<string>) };
    inline vector<string> dataOption() { DARABONBA_PTR_GET(dataOption_, vector<string>) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setDataOption(const vector<string> & dataOption) { DARABONBA_PTR_SET_VALUE(dataOption_, dataOption) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setDataOption(vector<string> && dataOption) { DARABONBA_PTR_SET_RVALUE(dataOption_, dataOption) };


    // exportContent Field Functions 
    bool hasExportContent() const { return this->exportContent_ != nullptr;};
    void deleteExportContent() { this->exportContent_ = nullptr;};
    inline string exportContent() const { DARABONBA_PTR_GET_DEFAULT(exportContent_, "") };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setExportContent(string exportContent) { DARABONBA_PTR_SET_VALUE(exportContent_, exportContent) };


    // exportTypes Field Functions 
    bool hasExportTypes() const { return this->exportTypes_ != nullptr;};
    void deleteExportTypes() { this->exportTypes_ = nullptr;};
    inline const vector<string> & exportTypes() const { DARABONBA_PTR_GET_CONST(exportTypes_, vector<string>) };
    inline vector<string> exportTypes() { DARABONBA_PTR_GET(exportTypes_, vector<string>) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setExportTypes(const vector<string> & exportTypes) { DARABONBA_PTR_SET_VALUE(exportTypes_, exportTypes) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setExportTypes(vector<string> && exportTypes) { DARABONBA_PTR_SET_RVALUE(exportTypes_, exportTypes) };


    // SQLExtOption Field Functions 
    bool hasSQLExtOption() const { return this->SQLExtOption_ != nullptr;};
    void deleteSQLExtOption() { this->SQLExtOption_ = nullptr;};
    inline const vector<string> & SQLExtOption() const { DARABONBA_PTR_GET_CONST(SQLExtOption_, vector<string>) };
    inline vector<string> SQLExtOption() { DARABONBA_PTR_GET(SQLExtOption_, vector<string>) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setSQLExtOption(const vector<string> & SQLExtOption) { DARABONBA_PTR_SET_VALUE(SQLExtOption_, SQLExtOption) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setSQLExtOption(vector<string> && SQLExtOption) { DARABONBA_PTR_SET_RVALUE(SQLExtOption_, SQLExtOption) };


    // selectedTables Field Functions 
    bool hasSelectedTables() const { return this->selectedTables_ != nullptr;};
    void deleteSelectedTables() { this->selectedTables_ = nullptr;};
    inline const vector<string> & selectedTables() const { DARABONBA_PTR_GET_CONST(selectedTables_, vector<string>) };
    inline vector<string> selectedTables() { DARABONBA_PTR_GET(selectedTables_, vector<string>) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setSelectedTables(const vector<string> & selectedTables) { DARABONBA_PTR_SET_VALUE(selectedTables_, selectedTables) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setSelectedTables(vector<string> && selectedTables) { DARABONBA_PTR_SET_RVALUE(selectedTables_, selectedTables) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const map<string, string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, map<string, string>) };
    inline map<string, string> tables() { DARABONBA_PTR_GET(tables_, map<string, string>) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setTables(const map<string, string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setTables(map<string, string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // targetOption Field Functions 
    bool hasTargetOption() const { return this->targetOption_ != nullptr;};
    void deleteTargetOption() { this->targetOption_ = nullptr;};
    inline string targetOption() const { DARABONBA_PTR_GET_DEFAULT(targetOption_, "") };
    inline CreateDatabaseExportOrderRequestPluginParamConfig& setTargetOption(string targetOption) { DARABONBA_PTR_SET_VALUE(targetOption_, targetOption) };


  protected:
    // The export options for big data. The options are used to filter the big data to be exported. You can leave this parameter empty.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> dataOption_ = nullptr;
    // The type of data that you want to export. Valid values:
    // 
    // *   **DATA**: The data of the database is exported.
    // *   **STRUCT**: The schema of the database is exported.
    // *   **DATA_STRUCT**: The data and schema of the database are exported.
    // 
    // This parameter is required.
    std::shared_ptr<string> exportContent_ = nullptr;
    // The types of schemas that you want to export.
    std::shared_ptr<vector<string>> exportTypes_ = nullptr;
    // The extension options of the SQL script. You can leave this parameter empty.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> SQLExtOption_ = nullptr;
    // The tables that you want to export.
    std::shared_ptr<vector<string>> selectedTables_ = nullptr;
    // The conditions used to filter the tables to be exported.
    std::shared_ptr<map<string, string>> tables_ = nullptr;
    // The format in which the database is exported. Valid values:
    // 
    // *   **SQL**
    // *   **CSV**
    // *   **XLSX**
    // 
    // This parameter is required.
    std::shared_ptr<string> targetOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
