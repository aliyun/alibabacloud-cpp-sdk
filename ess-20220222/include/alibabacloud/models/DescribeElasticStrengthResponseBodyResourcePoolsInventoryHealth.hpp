// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYRESOURCEPOOLSINVENTORYHEALTH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYRESOURCEPOOLSINVENTORYHEALTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& obj) { 
      DARABONBA_PTR_TO_JSON(AdequacyScore, adequacyScore_);
      DARABONBA_PTR_TO_JSON(HealthScore, healthScore_);
      DARABONBA_PTR_TO_JSON(HotScore, hotScore_);
      DARABONBA_PTR_TO_JSON(SupplyScore, supplyScore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& obj) { 
      DARABONBA_PTR_FROM_JSON(AdequacyScore, adequacyScore_);
      DARABONBA_PTR_FROM_JSON(HealthScore, healthScore_);
      DARABONBA_PTR_FROM_JSON(HotScore, hotScore_);
      DARABONBA_PTR_FROM_JSON(SupplyScore, supplyScore_);
    };
    DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth() = default ;
    DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth(const DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth &) = default ;
    DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth(DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth &&) = default ;
    DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth() = default ;
    DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& operator=(const DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth &) = default ;
    DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& operator=(DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adequacyScore_ != nullptr
        && this->healthScore_ != nullptr && this->hotScore_ != nullptr && this->supplyScore_ != nullptr; };
    // adequacyScore Field Functions 
    bool hasAdequacyScore() const { return this->adequacyScore_ != nullptr;};
    void deleteAdequacyScore() { this->adequacyScore_ = nullptr;};
    inline int32_t adequacyScore() const { DARABONBA_PTR_GET_DEFAULT(adequacyScore_, 0) };
    inline DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& setAdequacyScore(int32_t adequacyScore) { DARABONBA_PTR_SET_VALUE(adequacyScore_, adequacyScore) };


    // healthScore Field Functions 
    bool hasHealthScore() const { return this->healthScore_ != nullptr;};
    void deleteHealthScore() { this->healthScore_ = nullptr;};
    inline int32_t healthScore() const { DARABONBA_PTR_GET_DEFAULT(healthScore_, 0) };
    inline DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& setHealthScore(int32_t healthScore) { DARABONBA_PTR_SET_VALUE(healthScore_, healthScore) };


    // hotScore Field Functions 
    bool hasHotScore() const { return this->hotScore_ != nullptr;};
    void deleteHotScore() { this->hotScore_ = nullptr;};
    inline int32_t hotScore() const { DARABONBA_PTR_GET_DEFAULT(hotScore_, 0) };
    inline DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& setHotScore(int32_t hotScore) { DARABONBA_PTR_SET_VALUE(hotScore_, hotScore) };


    // supplyScore Field Functions 
    bool hasSupplyScore() const { return this->supplyScore_ != nullptr;};
    void deleteSupplyScore() { this->supplyScore_ = nullptr;};
    inline int32_t supplyScore() const { DARABONBA_PTR_GET_DEFAULT(supplyScore_, 0) };
    inline DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth& setSupplyScore(int32_t supplyScore) { DARABONBA_PTR_SET_VALUE(supplyScore_, supplyScore) };


  protected:
    // The adequacy score.
    // 
    // Valid values: 0 to 3.
    std::shared_ptr<int32_t> adequacyScore_ = nullptr;
    // The inventory health score.
    // 
    // *   A score between 5 and 6 indicates a sufficient inventory.
    // *   A score between 1 and 4 indicates that there is no guarantee of a sufficient inventory. Select a reservation as necessary.
    // *   A score between -3 and 0 indicates that the inventory is sufficient, and an alert is triggered. Select another instance type.
    // 
    // Calculation formula: `HealthScore` = `AdequacyScore` + `SupplyScore` - `HotScore`.
    std::shared_ptr<int32_t> healthScore_ = nullptr;
    // The popularity score.
    // 
    // Valid values: 0 to 3.
    std::shared_ptr<int32_t> hotScore_ = nullptr;
    // The replenishment capability score.
    // 
    // Valid values: 0 to 3.
    std::shared_ptr<int32_t> supplyScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
