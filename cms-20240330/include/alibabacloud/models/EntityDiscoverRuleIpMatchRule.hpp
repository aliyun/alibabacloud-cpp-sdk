// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYDISCOVERRULEIPMATCHRULE_HPP_
#define ALIBABACLOUD_MODELS_ENTITYDISCOVERRULEIPMATCHRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EntityDiscoverRuleIpMatchRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityDiscoverRuleIpMatchRule& obj) { 
      DARABONBA_PTR_TO_JSON(ipCIDR, ipCIDR_);
      DARABONBA_PTR_TO_JSON(ipFieldKey, ipFieldKey_);
    };
    friend void from_json(const Darabonba::Json& j, EntityDiscoverRuleIpMatchRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ipCIDR, ipCIDR_);
      DARABONBA_PTR_FROM_JSON(ipFieldKey, ipFieldKey_);
    };
    EntityDiscoverRuleIpMatchRule() = default ;
    EntityDiscoverRuleIpMatchRule(const EntityDiscoverRuleIpMatchRule &) = default ;
    EntityDiscoverRuleIpMatchRule(EntityDiscoverRuleIpMatchRule &&) = default ;
    EntityDiscoverRuleIpMatchRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityDiscoverRuleIpMatchRule() = default ;
    EntityDiscoverRuleIpMatchRule& operator=(const EntityDiscoverRuleIpMatchRule &) = default ;
    EntityDiscoverRuleIpMatchRule& operator=(EntityDiscoverRuleIpMatchRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipCIDR_ != nullptr
        && this->ipFieldKey_ != nullptr; };
    // ipCIDR Field Functions 
    bool hasIpCIDR() const { return this->ipCIDR_ != nullptr;};
    void deleteIpCIDR() { this->ipCIDR_ = nullptr;};
    inline string ipCIDR() const { DARABONBA_PTR_GET_DEFAULT(ipCIDR_, "") };
    inline EntityDiscoverRuleIpMatchRule& setIpCIDR(string ipCIDR) { DARABONBA_PTR_SET_VALUE(ipCIDR_, ipCIDR) };


    // ipFieldKey Field Functions 
    bool hasIpFieldKey() const { return this->ipFieldKey_ != nullptr;};
    void deleteIpFieldKey() { this->ipFieldKey_ = nullptr;};
    inline string ipFieldKey() const { DARABONBA_PTR_GET_DEFAULT(ipFieldKey_, "") };
    inline EntityDiscoverRuleIpMatchRule& setIpFieldKey(string ipFieldKey) { DARABONBA_PTR_SET_VALUE(ipFieldKey_, ipFieldKey) };


  protected:
    std::shared_ptr<string> ipCIDR_ = nullptr;
    std::shared_ptr<string> ipFieldKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
