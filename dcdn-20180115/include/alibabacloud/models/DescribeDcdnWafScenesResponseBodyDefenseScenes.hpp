// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESRESPONSEBODYDEFENSESCENES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESRESPONSEBODYDEFENSESCENES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafScenesResponseBodyDefenseScenes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafScenesResponseBodyDefenseScenes& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(PolicyCount, policyCount_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafScenesResponseBodyDefenseScenes& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(PolicyCount, policyCount_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    DescribeDcdnWafScenesResponseBodyDefenseScenes() = default ;
    DescribeDcdnWafScenesResponseBodyDefenseScenes(const DescribeDcdnWafScenesResponseBodyDefenseScenes &) = default ;
    DescribeDcdnWafScenesResponseBodyDefenseScenes(DescribeDcdnWafScenesResponseBodyDefenseScenes &&) = default ;
    DescribeDcdnWafScenesResponseBodyDefenseScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafScenesResponseBodyDefenseScenes() = default ;
    DescribeDcdnWafScenesResponseBodyDefenseScenes& operator=(const DescribeDcdnWafScenesResponseBodyDefenseScenes &) = default ;
    DescribeDcdnWafScenesResponseBodyDefenseScenes& operator=(DescribeDcdnWafScenesResponseBodyDefenseScenes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->policyCount_ != nullptr && this->ruleCount_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafScenesResponseBodyDefenseScenes& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // policyCount Field Functions 
    bool hasPolicyCount() const { return this->policyCount_ != nullptr;};
    void deletePolicyCount() { this->policyCount_ = nullptr;};
    inline int32_t policyCount() const { DARABONBA_PTR_GET_DEFAULT(policyCount_, 0) };
    inline DescribeDcdnWafScenesResponseBodyDefenseScenes& setPolicyCount(int32_t policyCount) { DARABONBA_PTR_SET_VALUE(policyCount_, policyCount) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeDcdnWafScenesResponseBodyDefenseScenes& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // The type of the protection policy, which is the same as the DefenseScenes parameter in request parameters.
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The total number of policies of this type that were configured.
    std::shared_ptr<int32_t> policyCount_ = nullptr;
    // The total number of protection rules that were configured in this type of the policy.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
