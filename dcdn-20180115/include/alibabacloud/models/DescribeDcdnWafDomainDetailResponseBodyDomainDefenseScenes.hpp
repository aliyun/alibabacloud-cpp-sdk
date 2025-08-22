// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODYDOMAINDEFENSESCENES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODYDOMAINDEFENSESCENES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
    };
    DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes() = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes(const DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes &) = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes(DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes &&) = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes() = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& operator=(const DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes &) = default ;
    DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& operator=(DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->policyId_ != nullptr && this->policyIds_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline string policyIds() const { DARABONBA_PTR_GET_DEFAULT(policyIds_, "") };
    inline DescribeDcdnWafDomainDetailResponseBodyDomainDefenseScenes& setPolicyIds(string policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };


  protected:
    // The type of the protection policy. Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom protection
    // *   whitelist: whitelist
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The ID of the protection policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The IDs of the protection policy.
    std::shared_ptr<string> policyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
