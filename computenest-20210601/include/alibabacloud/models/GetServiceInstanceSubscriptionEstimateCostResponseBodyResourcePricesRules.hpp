// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODYRESOURCEPRICESRULES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODYRESOURCEPRICESRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
    };
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules(const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules(GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& operator=(const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& operator=(GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->ruleDescId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleDescId Field Functions 
    bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
    void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
    inline int64_t ruleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


  protected:
    // Promotion description.
    std::shared_ptr<string> description_ = nullptr;
    // Promotion name.
    std::shared_ptr<string> name_ = nullptr;
    // Promotion ID.
    std::shared_ptr<int64_t> ruleDescId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
