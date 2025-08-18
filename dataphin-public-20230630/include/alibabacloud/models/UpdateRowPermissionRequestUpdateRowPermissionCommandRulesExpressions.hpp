// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONREQUESTUPDATEROWPERMISSIONCOMMANDRULESEXPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROWPERMISSIONREQUESTUPDATEROWPERMISSIONCOMMANDRULESEXPRESSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& obj) { 
      DARABONBA_PTR_TO_JSON(MappingColumnName, mappingColumnName_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SubConditions, subConditions_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& obj) { 
      DARABONBA_PTR_FROM_JSON(MappingColumnName, mappingColumnName_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SubConditions, subConditions_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions() = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions(const UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions &) = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions(UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions &&) = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions() = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& operator=(const UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions &) = default ;
    UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& operator=(UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mappingColumnName_ != nullptr
        && this->operator_ != nullptr && this->subConditions_ != nullptr && this->type_ != nullptr && this->values_ != nullptr; };
    // mappingColumnName Field Functions 
    bool hasMappingColumnName() const { return this->mappingColumnName_ != nullptr;};
    void deleteMappingColumnName() { this->mappingColumnName_ = nullptr;};
    inline string mappingColumnName() const { DARABONBA_PTR_GET_DEFAULT(mappingColumnName_, "") };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setMappingColumnName(string mappingColumnName) { DARABONBA_PTR_SET_VALUE(mappingColumnName_, mappingColumnName) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // subConditions Field Functions 
    bool hasSubConditions() const { return this->subConditions_ != nullptr;};
    void deleteSubConditions() { this->subConditions_ = nullptr;};
    inline const vector<Darabonba::Json> & subConditions() const { DARABONBA_PTR_GET_CONST(subConditions_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> subConditions() { DARABONBA_PTR_GET(subConditions_, vector<Darabonba::Json>) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setSubConditions(const vector<Darabonba::Json> & subConditions) { DARABONBA_PTR_SET_VALUE(subConditions_, subConditions) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setSubConditions(vector<Darabonba::Json> && subConditions) { DARABONBA_PTR_SET_RVALUE(subConditions_, subConditions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRowPermissionRequestUpdateRowPermissionCommandRulesExpressions& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> mappingColumnName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Darabonba::Json>> subConditions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
