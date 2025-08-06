// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSavingsPlanPriceResponseBodyPriceInfoPrice.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSavingsPlanPriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSavingsPlanPriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlanPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlanPriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeSavingsPlanPriceResponseBodyPriceInfo() = default ;
    DescribeSavingsPlanPriceResponseBodyPriceInfo(const DescribeSavingsPlanPriceResponseBodyPriceInfo &) = default ;
    DescribeSavingsPlanPriceResponseBodyPriceInfo(DescribeSavingsPlanPriceResponseBodyPriceInfo &&) = default ;
    DescribeSavingsPlanPriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlanPriceResponseBodyPriceInfo() = default ;
    DescribeSavingsPlanPriceResponseBodyPriceInfo& operator=(const DescribeSavingsPlanPriceResponseBodyPriceInfo &) = default ;
    DescribeSavingsPlanPriceResponseBodyPriceInfo& operator=(DescribeSavingsPlanPriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr
        && this->rules_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice) };
    inline Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice) };
    inline DescribeSavingsPlanPriceResponseBodyPriceInfo& setPrice(const Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribeSavingsPlanPriceResponseBodyPriceInfo& setPrice(Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules>) };
    inline vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules>) };
    inline DescribeSavingsPlanPriceResponseBodyPriceInfo& setRules(const vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeSavingsPlanPriceResponseBodyPriceInfo& setRules(vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoPrice> price_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSavingsPlanPriceResponseBodyPriceInfoRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
