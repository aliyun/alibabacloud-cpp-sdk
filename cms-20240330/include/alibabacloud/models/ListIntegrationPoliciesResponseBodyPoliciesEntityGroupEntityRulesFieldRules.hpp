// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESENTITYGROUPENTITYRULESFIELDRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESENTITYGROUPENTITYRULESFIELDRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& obj) { 
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(fieldValues, fieldValues_);
      DARABONBA_PTR_TO_JSON(op, op_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(fieldValues, fieldValues_);
      DARABONBA_PTR_FROM_JSON(op, op_);
    };
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules(const ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules(ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules &&) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& operator=(const ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& operator=(ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldKey_ == nullptr
        && return this->fieldValues_ == nullptr && return this->op_ == nullptr; };
    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string fieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // fieldValues Field Functions 
    bool hasFieldValues() const { return this->fieldValues_ != nullptr;};
    void deleteFieldValues() { this->fieldValues_ = nullptr;};
    inline const vector<string> & fieldValues() const { DARABONBA_PTR_GET_CONST(fieldValues_, vector<string>) };
    inline vector<string> fieldValues() { DARABONBA_PTR_GET(fieldValues_, vector<string>) };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& setFieldValues(const vector<string> & fieldValues) { DARABONBA_PTR_SET_VALUE(fieldValues_, fieldValues) };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& setFieldValues(vector<string> && fieldValues) { DARABONBA_PTR_SET_RVALUE(fieldValues_, fieldValues) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesEntityGroupEntityRulesFieldRules& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


  protected:
    // Unique identifier for the field.
    std::shared_ptr<string> fieldKey_ = nullptr;
    // Field content, multiple values separated by commas.
    std::shared_ptr<vector<string>> fieldValues_ = nullptr;
    // Operation to be performed.
    std::shared_ptr<string> op_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
