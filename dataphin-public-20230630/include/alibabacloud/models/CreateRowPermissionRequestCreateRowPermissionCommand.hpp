// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns.hpp>
#include <alibabacloud/models/CreateRowPermissionRequestCreateRowPermissionCommandRules.hpp>
#include <alibabacloud/models/CreateRowPermissionRequestCreateRowPermissionCommandTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionRequestCreateRowPermissionCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionRequestCreateRowPermissionCommand& obj) { 
      DARABONBA_PTR_TO_JSON(MappingColumns, mappingColumns_);
      DARABONBA_PTR_TO_JSON(RowPermissionDesc, rowPermissionDesc_);
      DARABONBA_PTR_TO_JSON(RowPermissionName, rowPermissionName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionRequestCreateRowPermissionCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(MappingColumns, mappingColumns_);
      DARABONBA_PTR_FROM_JSON(RowPermissionDesc, rowPermissionDesc_);
      DARABONBA_PTR_FROM_JSON(RowPermissionName, rowPermissionName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    CreateRowPermissionRequestCreateRowPermissionCommand() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommand(const CreateRowPermissionRequestCreateRowPermissionCommand &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommand(CreateRowPermissionRequestCreateRowPermissionCommand &&) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionRequestCreateRowPermissionCommand() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommand& operator=(const CreateRowPermissionRequestCreateRowPermissionCommand &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommand& operator=(CreateRowPermissionRequestCreateRowPermissionCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mappingColumns_ != nullptr
        && this->rowPermissionDesc_ != nullptr && this->rowPermissionName_ != nullptr && this->rules_ != nullptr && this->tables_ != nullptr; };
    // mappingColumns Field Functions 
    bool hasMappingColumns() const { return this->mappingColumns_ != nullptr;};
    void deleteMappingColumns() { this->mappingColumns_ = nullptr;};
    inline const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns> & mappingColumns() const { DARABONBA_PTR_GET_CONST(mappingColumns_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns>) };
    inline vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns> mappingColumns() { DARABONBA_PTR_GET(mappingColumns_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns>) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setMappingColumns(const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns> & mappingColumns) { DARABONBA_PTR_SET_VALUE(mappingColumns_, mappingColumns) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setMappingColumns(vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns> && mappingColumns) { DARABONBA_PTR_SET_RVALUE(mappingColumns_, mappingColumns) };


    // rowPermissionDesc Field Functions 
    bool hasRowPermissionDesc() const { return this->rowPermissionDesc_ != nullptr;};
    void deleteRowPermissionDesc() { this->rowPermissionDesc_ = nullptr;};
    inline string rowPermissionDesc() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionDesc_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setRowPermissionDesc(string rowPermissionDesc) { DARABONBA_PTR_SET_VALUE(rowPermissionDesc_, rowPermissionDesc) };


    // rowPermissionName Field Functions 
    bool hasRowPermissionName() const { return this->rowPermissionName_ != nullptr;};
    void deleteRowPermissionName() { this->rowPermissionName_ = nullptr;};
    inline string rowPermissionName() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionName_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setRowPermissionName(string rowPermissionName) { DARABONBA_PTR_SET_VALUE(rowPermissionName_, rowPermissionName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules>) };
    inline vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules>) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setRules(const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setRules(vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables>) };
    inline vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables>) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setTables(const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline CreateRowPermissionRequestCreateRowPermissionCommand& setTables(vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns>> mappingColumns_ = nullptr;
    std::shared_ptr<string> rowPermissionDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rowPermissionName_ = nullptr;
    std::shared_ptr<vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRules>> rules_ = nullptr;
    std::shared_ptr<vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandTables>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
