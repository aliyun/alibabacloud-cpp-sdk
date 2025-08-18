// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONREQUESTUPDATEROWPERMISSIONCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONREQUESTUPDATEROWPERMISSIONCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns.hpp>
#include <alibabacloud/models/UpdateRowPermissionRequestUpdateRowPermissionCommandRules.hpp>
#include <alibabacloud/models/UpdateRowPermissionRequestUpdateRowPermissionCommandTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateRowPermissionRequestUpdateRowPermissionCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRowPermissionRequestUpdateRowPermissionCommand& obj) { 
      DARABONBA_PTR_TO_JSON(MappingColumns, mappingColumns_);
      DARABONBA_PTR_TO_JSON(RowPermissionDesc, rowPermissionDesc_);
      DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
      DARABONBA_PTR_TO_JSON(RowPermissionName, rowPermissionName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRowPermissionRequestUpdateRowPermissionCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(MappingColumns, mappingColumns_);
      DARABONBA_PTR_FROM_JSON(RowPermissionDesc, rowPermissionDesc_);
      DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
      DARABONBA_PTR_FROM_JSON(RowPermissionName, rowPermissionName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    UpdateRowPermissionRequestUpdateRowPermissionCommand() = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommand(const UpdateRowPermissionRequestUpdateRowPermissionCommand &) = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommand(UpdateRowPermissionRequestUpdateRowPermissionCommand &&) = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRowPermissionRequestUpdateRowPermissionCommand() = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommand& operator=(const UpdateRowPermissionRequestUpdateRowPermissionCommand &) = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommand& operator=(UpdateRowPermissionRequestUpdateRowPermissionCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mappingColumns_ != nullptr
        && this->rowPermissionDesc_ != nullptr && this->rowPermissionId_ != nullptr && this->rowPermissionName_ != nullptr && this->rules_ != nullptr && this->tables_ != nullptr; };
    // mappingColumns Field Functions 
    bool hasMappingColumns() const { return this->mappingColumns_ != nullptr;};
    void deleteMappingColumns() { this->mappingColumns_ = nullptr;};
    inline const vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns> & mappingColumns() const { DARABONBA_PTR_GET_CONST(mappingColumns_, vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns>) };
    inline vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns> mappingColumns() { DARABONBA_PTR_GET(mappingColumns_, vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns>) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setMappingColumns(const vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns> & mappingColumns) { DARABONBA_PTR_SET_VALUE(mappingColumns_, mappingColumns) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setMappingColumns(vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns> && mappingColumns) { DARABONBA_PTR_SET_RVALUE(mappingColumns_, mappingColumns) };


    // rowPermissionDesc Field Functions 
    bool hasRowPermissionDesc() const { return this->rowPermissionDesc_ != nullptr;};
    void deleteRowPermissionDesc() { this->rowPermissionDesc_ = nullptr;};
    inline string rowPermissionDesc() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionDesc_, "") };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setRowPermissionDesc(string rowPermissionDesc) { DARABONBA_PTR_SET_VALUE(rowPermissionDesc_, rowPermissionDesc) };


    // rowPermissionId Field Functions 
    bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
    void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
    inline int64_t rowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, 0L) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setRowPermissionId(int64_t rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


    // rowPermissionName Field Functions 
    bool hasRowPermissionName() const { return this->rowPermissionName_ != nullptr;};
    void deleteRowPermissionName() { this->rowPermissionName_ = nullptr;};
    inline string rowPermissionName() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionName_, "") };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setRowPermissionName(string rowPermissionName) { DARABONBA_PTR_SET_VALUE(rowPermissionName_, rowPermissionName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules>) };
    inline vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules>) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setRules(const vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setRules(vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables>) };
    inline vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables>) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setTables(const vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommand& setTables(vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandMappingColumns>> mappingColumns_ = nullptr;
    std::shared_ptr<string> rowPermissionDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> rowPermissionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rowPermissionName_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandRules>> rules_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRowPermissionRequestUpdateRowPermissionCommandTables>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
