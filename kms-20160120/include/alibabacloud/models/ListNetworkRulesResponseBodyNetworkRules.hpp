// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKRULESRESPONSEBODYNETWORKRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKRULESRESPONSEBODYNETWORKRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkRulesResponseBodyNetworkRulesNetworkRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListNetworkRulesResponseBodyNetworkRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkRulesResponseBodyNetworkRules& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRule, networkRule_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkRulesResponseBodyNetworkRules& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRule, networkRule_);
    };
    ListNetworkRulesResponseBodyNetworkRules() = default ;
    ListNetworkRulesResponseBodyNetworkRules(const ListNetworkRulesResponseBodyNetworkRules &) = default ;
    ListNetworkRulesResponseBodyNetworkRules(ListNetworkRulesResponseBodyNetworkRules &&) = default ;
    ListNetworkRulesResponseBodyNetworkRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkRulesResponseBodyNetworkRules() = default ;
    ListNetworkRulesResponseBodyNetworkRules& operator=(const ListNetworkRulesResponseBodyNetworkRules &) = default ;
    ListNetworkRulesResponseBodyNetworkRules& operator=(ListNetworkRulesResponseBodyNetworkRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkRule_ == nullptr; };
    // networkRule Field Functions 
    bool hasNetworkRule() const { return this->networkRule_ != nullptr;};
    void deleteNetworkRule() { this->networkRule_ = nullptr;};
    inline const vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule> & networkRule() const { DARABONBA_PTR_GET_CONST(networkRule_, vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule>) };
    inline vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule> networkRule() { DARABONBA_PTR_GET(networkRule_, vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule>) };
    inline ListNetworkRulesResponseBodyNetworkRules& setNetworkRule(const vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule> & networkRule) { DARABONBA_PTR_SET_VALUE(networkRule_, networkRule) };
    inline ListNetworkRulesResponseBodyNetworkRules& setNetworkRule(vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule> && networkRule) { DARABONBA_PTR_SET_RVALUE(networkRule_, networkRule) };


  protected:
    std::shared_ptr<vector<Models::ListNetworkRulesResponseBodyNetworkRulesNetworkRule>> networkRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
