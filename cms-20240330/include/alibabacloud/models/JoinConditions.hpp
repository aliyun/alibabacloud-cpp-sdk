// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_JOINCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class JoinConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinConditions& obj) { 
      DARABONBA_PTR_TO_JSON(lhsField, lhsField_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(rhsField, rhsField_);
    };
    friend void from_json(const Darabonba::Json& j, JoinConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(lhsField, lhsField_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(rhsField, rhsField_);
    };
    JoinConditions() = default ;
    JoinConditions(const JoinConditions &) = default ;
    JoinConditions(JoinConditions &&) = default ;
    JoinConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinConditions() = default ;
    JoinConditions& operator=(const JoinConditions &) = default ;
    JoinConditions& operator=(JoinConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lhsField_ == nullptr
        && this->operator_ == nullptr && this->rhsField_ == nullptr; };
    // lhsField Field Functions 
    bool hasLhsField() const { return this->lhsField_ != nullptr;};
    void deleteLhsField() { this->lhsField_ = nullptr;};
    inline string getLhsField() const { DARABONBA_PTR_GET_DEFAULT(lhsField_, "") };
    inline JoinConditions& setLhsField(string lhsField) { DARABONBA_PTR_SET_VALUE(lhsField_, lhsField) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline JoinConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // rhsField Field Functions 
    bool hasRhsField() const { return this->rhsField_ != nullptr;};
    void deleteRhsField() { this->rhsField_ = nullptr;};
    inline string getRhsField() const { DARABONBA_PTR_GET_DEFAULT(rhsField_, "") };
    inline JoinConditions& setRhsField(string rhsField) { DARABONBA_PTR_SET_VALUE(rhsField_, rhsField) };


  protected:
    shared_ptr<string> lhsField_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<string> rhsField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
