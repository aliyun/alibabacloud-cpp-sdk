// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULESRULEBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULESRULEBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories.hpp>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataRulesRuleBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataRulesRuleBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessCategories, businessCategories_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleLambda, ruleLambda_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataRulesRuleBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessCategories, businessCategories_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleLambda, ruleLambda_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    GetRuleDetailResponseBodyDataRulesRuleBasicInfo() = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfo(const GetRuleDetailResponseBodyDataRulesRuleBasicInfo &) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfo(GetRuleDetailResponseBodyDataRulesRuleBasicInfo &&) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfo() = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfo& operator=(const GetRuleDetailResponseBodyDataRulesRuleBasicInfo &) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfo& operator=(GetRuleDetailResponseBodyDataRulesRuleBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessCategories_ == nullptr
        && return this->rid_ == nullptr && return this->ruleLambda_ == nullptr && return this->triggers_ == nullptr; };
    // businessCategories Field Functions 
    bool hasBusinessCategories() const { return this->businessCategories_ != nullptr;};
    void deleteBusinessCategories() { this->businessCategories_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories & businessCategories() const { DARABONBA_PTR_GET_CONST(businessCategories_, Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories) };
    inline Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories businessCategories() { DARABONBA_PTR_GET(businessCategories_, Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfo& setBusinessCategories(const Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories & businessCategories) { DARABONBA_PTR_SET_VALUE(businessCategories_, businessCategories) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfo& setBusinessCategories(Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories && businessCategories) { DARABONBA_PTR_SET_RVALUE(businessCategories_, businessCategories) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleLambda Field Functions 
    bool hasRuleLambda() const { return this->ruleLambda_ != nullptr;};
    void deleteRuleLambda() { this->ruleLambda_ = nullptr;};
    inline string ruleLambda() const { DARABONBA_PTR_GET_DEFAULT(ruleLambda_, "") };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfo& setRuleLambda(string ruleLambda) { DARABONBA_PTR_SET_VALUE(ruleLambda_, ruleLambda) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers) };
    inline Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers triggers() { DARABONBA_PTR_GET(triggers_, Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfo& setTriggers(const Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfo& setTriggers(Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories> businessCategories_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<string> ruleLambda_ = nullptr;
    std::shared_ptr<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
