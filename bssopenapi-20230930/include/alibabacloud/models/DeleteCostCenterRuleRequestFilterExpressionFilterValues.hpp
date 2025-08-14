// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTCENTERRULEREQUESTFILTEREXPRESSIONFILTERVALUES_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTCENTERRULEREQUESTFILTEREXPRESSIONFILTERVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DeleteCostCenterRuleRequestFilterExpressionFilterValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostCenterRuleRequestFilterExpressionFilterValues& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeName, codeName_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostCenterRuleRequestFilterExpressionFilterValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeName, codeName_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DeleteCostCenterRuleRequestFilterExpressionFilterValues() = default ;
    DeleteCostCenterRuleRequestFilterExpressionFilterValues(const DeleteCostCenterRuleRequestFilterExpressionFilterValues &) = default ;
    DeleteCostCenterRuleRequestFilterExpressionFilterValues(DeleteCostCenterRuleRequestFilterExpressionFilterValues &&) = default ;
    DeleteCostCenterRuleRequestFilterExpressionFilterValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostCenterRuleRequestFilterExpressionFilterValues() = default ;
    DeleteCostCenterRuleRequestFilterExpressionFilterValues& operator=(const DeleteCostCenterRuleRequestFilterExpressionFilterValues &) = default ;
    DeleteCostCenterRuleRequestFilterExpressionFilterValues& operator=(DeleteCostCenterRuleRequestFilterExpressionFilterValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->codeName_ != nullptr && this->selectType_ != nullptr && this->values_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteCostCenterRuleRequestFilterExpressionFilterValues& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeName Field Functions 
    bool hasCodeName() const { return this->codeName_ != nullptr;};
    void deleteCodeName() { this->codeName_ = nullptr;};
    inline string codeName() const { DARABONBA_PTR_GET_DEFAULT(codeName_, "") };
    inline DeleteCostCenterRuleRequestFilterExpressionFilterValues& setCodeName(string codeName) { DARABONBA_PTR_SET_VALUE(codeName_, codeName) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline string selectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
    inline DeleteCostCenterRuleRequestFilterExpressionFilterValues& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DeleteCostCenterRuleRequestFilterExpressionFilterValues& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DeleteCostCenterRuleRequestFilterExpressionFilterValues& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> codeName_ = nullptr;
    std::shared_ptr<string> selectType_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
