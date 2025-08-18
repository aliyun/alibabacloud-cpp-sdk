// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGMANAGEDRULESETS_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGMANAGEDRULESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfigManagedRulesetsManagedRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigManagedRulesets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigManagedRulesets& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_TO_JSON(NumberEnabled, numberEnabled_);
      DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigManagedRulesets& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_FROM_JSON(NumberEnabled, numberEnabled_);
      DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
    };
    WafRuleConfigManagedRulesets() = default ;
    WafRuleConfigManagedRulesets(const WafRuleConfigManagedRulesets &) = default ;
    WafRuleConfigManagedRulesets(WafRuleConfigManagedRulesets &&) = default ;
    WafRuleConfigManagedRulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigManagedRulesets() = default ;
    WafRuleConfigManagedRulesets& operator=(const WafRuleConfigManagedRulesets &) = default ;
    WafRuleConfigManagedRulesets& operator=(WafRuleConfigManagedRulesets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->attackType_ != nullptr && this->managedRules_ != nullptr && this->numberEnabled_ != nullptr && this->numberTotal_ != nullptr && this->protectionLevel_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafRuleConfigManagedRulesets& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int32_t attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
    inline WafRuleConfigManagedRulesets& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // managedRules Field Functions 
    bool hasManagedRules() const { return this->managedRules_ != nullptr;};
    void deleteManagedRules() { this->managedRules_ = nullptr;};
    inline const vector<Models::WafRuleConfigManagedRulesetsManagedRules> & managedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, vector<Models::WafRuleConfigManagedRulesetsManagedRules>) };
    inline vector<Models::WafRuleConfigManagedRulesetsManagedRules> managedRules() { DARABONBA_PTR_GET(managedRules_, vector<Models::WafRuleConfigManagedRulesetsManagedRules>) };
    inline WafRuleConfigManagedRulesets& setManagedRules(const vector<Models::WafRuleConfigManagedRulesetsManagedRules> & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
    inline WafRuleConfigManagedRulesets& setManagedRules(vector<Models::WafRuleConfigManagedRulesetsManagedRules> && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


    // numberEnabled Field Functions 
    bool hasNumberEnabled() const { return this->numberEnabled_ != nullptr;};
    void deleteNumberEnabled() { this->numberEnabled_ = nullptr;};
    inline int32_t numberEnabled() const { DARABONBA_PTR_GET_DEFAULT(numberEnabled_, 0) };
    inline WafRuleConfigManagedRulesets& setNumberEnabled(int32_t numberEnabled) { DARABONBA_PTR_SET_VALUE(numberEnabled_, numberEnabled) };


    // numberTotal Field Functions 
    bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
    void deleteNumberTotal() { this->numberTotal_ = nullptr;};
    inline int32_t numberTotal() const { DARABONBA_PTR_GET_DEFAULT(numberTotal_, 0) };
    inline WafRuleConfigManagedRulesets& setNumberTotal(int32_t numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline int32_t protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
    inline WafRuleConfigManagedRulesets& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int32_t> attackType_ = nullptr;
    std::shared_ptr<vector<Models::WafRuleConfigManagedRulesetsManagedRules>> managedRules_ = nullptr;
    std::shared_ptr<int32_t> numberEnabled_ = nullptr;
    std::shared_ptr<int32_t> numberTotal_ = nullptr;
    std::shared_ptr<int32_t> protectionLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
