// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKRULESRESPONSEBODYNETWORKRULESNETWORKRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKRULESRESPONSEBODYNETWORKRULESNETWORKRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListNetworkRulesResponseBodyNetworkRulesNetworkRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkRulesResponseBodyNetworkRulesNetworkRule& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkRulesResponseBodyNetworkRulesNetworkRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListNetworkRulesResponseBodyNetworkRulesNetworkRule() = default ;
    ListNetworkRulesResponseBodyNetworkRulesNetworkRule(const ListNetworkRulesResponseBodyNetworkRulesNetworkRule &) = default ;
    ListNetworkRulesResponseBodyNetworkRulesNetworkRule(ListNetworkRulesResponseBodyNetworkRulesNetworkRule &&) = default ;
    ListNetworkRulesResponseBodyNetworkRulesNetworkRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkRulesResponseBodyNetworkRulesNetworkRule() = default ;
    ListNetworkRulesResponseBodyNetworkRulesNetworkRule& operator=(const ListNetworkRulesResponseBodyNetworkRulesNetworkRule &) = default ;
    ListNetworkRulesResponseBodyNetworkRulesNetworkRule& operator=(ListNetworkRulesResponseBodyNetworkRulesNetworkRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNetworkRulesResponseBodyNetworkRulesNetworkRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListNetworkRulesResponseBodyNetworkRulesNetworkRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the access control rule.
    std::shared_ptr<string> name_ = nullptr;
    // The network type. The value is fixed as Private. Self-managed applications can access KMS instances only over a private virtual private cloud (VPC).
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
