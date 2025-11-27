// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMASKINGRULESREQUESTRULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEMASKINGRULESREQUESTRULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateMaskingRulesRequestRuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaskingRulesRequestRuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaskingRulesRequestRuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    CreateMaskingRulesRequestRuleConfig() = default ;
    CreateMaskingRulesRequestRuleConfig(const CreateMaskingRulesRequestRuleConfig &) = default ;
    CreateMaskingRulesRequestRuleConfig(CreateMaskingRulesRequestRuleConfig &&) = default ;
    CreateMaskingRulesRequestRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaskingRulesRequestRuleConfig() = default ;
    CreateMaskingRulesRequestRuleConfig& operator=(const CreateMaskingRulesRequestRuleConfig &) = default ;
    CreateMaskingRulesRequestRuleConfig& operator=(CreateMaskingRulesRequestRuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->databases_ == nullptr && return this->tables_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline CreateMaskingRulesRequestRuleConfig& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateMaskingRulesRequestRuleConfig& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<string> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<string>) };
    inline vector<string> databases() { DARABONBA_PTR_GET(databases_, vector<string>) };
    inline CreateMaskingRulesRequestRuleConfig& setDatabases(const vector<string> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline CreateMaskingRulesRequestRuleConfig& setDatabases(vector<string> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline CreateMaskingRulesRequestRuleConfig& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline CreateMaskingRulesRequestRuleConfig& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<vector<string>> columns_ = nullptr;
    std::shared_ptr<vector<string>> databases_ = nullptr;
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
