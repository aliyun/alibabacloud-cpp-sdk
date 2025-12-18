// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULEOPERATORSRESPONSEBODYOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULEOPERATORSRESPONSEBODYOPERATORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRuleOperatorsResponseBodyOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRuleOperatorsResponseBodyOperators& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRuleOperatorsResponseBodyOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    ListConfigRuleOperatorsResponseBodyOperators() = default ;
    ListConfigRuleOperatorsResponseBodyOperators(const ListConfigRuleOperatorsResponseBodyOperators &) = default ;
    ListConfigRuleOperatorsResponseBodyOperators(ListConfigRuleOperatorsResponseBodyOperators &&) = default ;
    ListConfigRuleOperatorsResponseBodyOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRuleOperatorsResponseBodyOperators() = default ;
    ListConfigRuleOperatorsResponseBodyOperators& operator=(const ListConfigRuleOperatorsResponseBodyOperators &) = default ;
    ListConfigRuleOperatorsResponseBodyOperators& operator=(ListConfigRuleOperatorsResponseBodyOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->operator_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ListConfigRuleOperatorsResponseBodyOperators& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListConfigRuleOperatorsResponseBodyOperators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListConfigRuleOperatorsResponseBodyOperators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListConfigRuleOperatorsResponseBodyOperators& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
