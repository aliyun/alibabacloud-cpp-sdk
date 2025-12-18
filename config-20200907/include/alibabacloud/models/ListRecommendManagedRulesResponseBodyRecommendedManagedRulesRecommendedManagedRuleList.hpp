// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOMMENDMANAGEDRULESRESPONSEBODYRECOMMENDEDMANAGEDRULESRECOMMENDEDMANAGEDRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOMMENDMANAGEDRULESRESPONSEBODYRECOMMENDEDMANAGEDRULESRECOMMENDEDMANAGEDRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(ResourceTypeScope, resourceTypeScope_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeScope, resourceTypeScope_);
    };
    ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList() = default ;
    ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList(const ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList &) = default ;
    ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList(ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList &&) = default ;
    ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList() = default ;
    ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& operator=(const ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList &) = default ;
    ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& operator=(ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleName_ == nullptr
        && return this->description_ == nullptr && return this->identifier_ == nullptr && return this->resourceTypeScope_ == nullptr; };
    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // resourceTypeScope Field Functions 
    bool hasResourceTypeScope() const { return this->resourceTypeScope_ != nullptr;};
    void deleteResourceTypeScope() { this->resourceTypeScope_ = nullptr;};
    inline string resourceTypeScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeScope_, "") };
    inline ListRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList& setResourceTypeScope(string resourceTypeScope) { DARABONBA_PTR_SET_VALUE(resourceTypeScope_, resourceTypeScope) };


  protected:
    std::shared_ptr<string> configRuleName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> resourceTypeScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
