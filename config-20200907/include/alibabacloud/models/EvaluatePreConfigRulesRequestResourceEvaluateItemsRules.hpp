// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUESTRESOURCEEVALUATEITEMSRULES_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUESTRESOURCEEVALUATEITEMSRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class EvaluatePreConfigRulesRequestResourceEvaluateItemsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesRequestResourceEvaluateItemsRules& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(InputParameters, inputParameters_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesRequestResourceEvaluateItemsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(InputParameters, inputParameters_);
    };
    EvaluatePreConfigRulesRequestResourceEvaluateItemsRules() = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItemsRules(const EvaluatePreConfigRulesRequestResourceEvaluateItemsRules &) = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItemsRules(EvaluatePreConfigRulesRequestResourceEvaluateItemsRules &&) = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItemsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesRequestResourceEvaluateItemsRules() = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItemsRules& operator=(const EvaluatePreConfigRulesRequestResourceEvaluateItemsRules &) = default ;
    EvaluatePreConfigRulesRequestResourceEvaluateItemsRules& operator=(EvaluatePreConfigRulesRequestResourceEvaluateItemsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && return this->inputParameters_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItemsRules& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline string inputParameters() const { DARABONBA_PTR_GET_DEFAULT(inputParameters_, "") };
    inline EvaluatePreConfigRulesRequestResourceEvaluateItemsRules& setInputParameters(string inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };


  protected:
    // The identifier of the evaluation rule.
    // 
    // For more information about how to obtain the identifier of an evaluation rule, see [ListManagedRules](https://help.aliyun.com/document_detail/467810.html).
    std::shared_ptr<string> identifier_ = nullptr;
    // The input parameters of the evaluation rule.
    std::shared_ptr<string> inputParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
