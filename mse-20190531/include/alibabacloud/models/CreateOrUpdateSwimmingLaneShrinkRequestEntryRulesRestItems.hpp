// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANESHRINKREQUESTENTRYRULESRESTITEMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANESHRINKREQUESTENTRYRULESRESTITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& obj) { 
      DARABONBA_PTR_TO_JSON(Cond, cond_);
      DARABONBA_PTR_TO_JSON(Datum, datum_);
      DARABONBA_PTR_TO_JSON(Divisor, divisor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Remainder, remainder_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Cond, cond_);
      DARABONBA_PTR_FROM_JSON(Datum, datum_);
      DARABONBA_PTR_FROM_JSON(Divisor, divisor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Remainder, remainder_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems() = default ;
    CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems(const CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems &) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems(CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems &&) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems() = default ;
    CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& operator=(const CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems &) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& operator=(CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cond_ != nullptr
        && this->datum_ != nullptr && this->divisor_ != nullptr && this->name_ != nullptr && this->nameList_ != nullptr && this->operator_ != nullptr
        && this->rate_ != nullptr && this->remainder_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // cond Field Functions 
    bool hasCond() const { return this->cond_ != nullptr;};
    void deleteCond() { this->cond_ = nullptr;};
    inline string cond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // datum Field Functions 
    bool hasDatum() const { return this->datum_ != nullptr;};
    void deleteDatum() { this->datum_ = nullptr;};
    inline string datum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


    // divisor Field Functions 
    bool hasDivisor() const { return this->divisor_ != nullptr;};
    void deleteDivisor() { this->divisor_ = nullptr;};
    inline int32_t divisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // remainder Field Functions 
    bool hasRemainder() const { return this->remainder_ != nullptr;};
    void deleteRemainder() { this->remainder_ = nullptr;};
    inline int32_t remainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequestEntryRulesRestItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> cond_ = nullptr;
    std::shared_ptr<string> datum_ = nullptr;
    std::shared_ptr<int32_t> divisor_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<int32_t> rate_ = nullptr;
    std::shared_ptr<int32_t> remainder_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
