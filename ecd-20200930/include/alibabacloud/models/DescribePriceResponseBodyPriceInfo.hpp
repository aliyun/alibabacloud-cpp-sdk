// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPrice.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FreeCdsQuota, freeCdsQuota_);
      DARABONBA_PTR_TO_JSON(FreeCdsSize, freeCdsSize_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FreeCdsQuota, freeCdsQuota_);
      DARABONBA_PTR_FROM_JSON(FreeCdsSize, freeCdsSize_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribePriceResponseBodyPriceInfo() = default ;
    DescribePriceResponseBodyPriceInfo(const DescribePriceResponseBodyPriceInfo &) = default ;
    DescribePriceResponseBodyPriceInfo(DescribePriceResponseBodyPriceInfo &&) = default ;
    DescribePriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfo() = default ;
    DescribePriceResponseBodyPriceInfo& operator=(const DescribePriceResponseBodyPriceInfo &) = default ;
    DescribePriceResponseBodyPriceInfo& operator=(DescribePriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->freeCdsQuota_ != nullptr
        && this->freeCdsSize_ != nullptr && this->price_ != nullptr && this->rules_ != nullptr; };
    // freeCdsQuota Field Functions 
    bool hasFreeCdsQuota() const { return this->freeCdsQuota_ != nullptr;};
    void deleteFreeCdsQuota() { this->freeCdsQuota_ = nullptr;};
    inline bool freeCdsQuota() const { DARABONBA_PTR_GET_DEFAULT(freeCdsQuota_, false) };
    inline DescribePriceResponseBodyPriceInfo& setFreeCdsQuota(bool freeCdsQuota) { DARABONBA_PTR_SET_VALUE(freeCdsQuota_, freeCdsQuota) };


    // freeCdsSize Field Functions 
    bool hasFreeCdsSize() const { return this->freeCdsSize_ != nullptr;};
    void deleteFreeCdsSize() { this->freeCdsSize_ = nullptr;};
    inline int64_t freeCdsSize() const { DARABONBA_PTR_GET_DEFAULT(freeCdsSize_, 0L) };
    inline DescribePriceResponseBodyPriceInfo& setFreeCdsSize(int64_t freeCdsSize) { DARABONBA_PTR_SET_VALUE(freeCdsSize_, freeCdsSize) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::DescribePriceResponseBodyPriceInfoPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::DescribePriceResponseBodyPriceInfoPrice) };
    inline Models::DescribePriceResponseBodyPriceInfoPrice price() { DARABONBA_PTR_GET(price_, Models::DescribePriceResponseBodyPriceInfoPrice) };
    inline DescribePriceResponseBodyPriceInfo& setPrice(const Models::DescribePriceResponseBodyPriceInfoPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribePriceResponseBodyPriceInfo& setPrice(Models::DescribePriceResponseBodyPriceInfoPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPriceInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribePriceResponseBodyPriceInfoRules>) };
    inline vector<Models::DescribePriceResponseBodyPriceInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribePriceResponseBodyPriceInfoRules>) };
    inline DescribePriceResponseBodyPriceInfo& setRules(const vector<Models::DescribePriceResponseBodyPriceInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribePriceResponseBodyPriceInfo& setRules(vector<Models::DescribePriceResponseBodyPriceInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Indicates whether a free enterprise drive is available.
    std::shared_ptr<bool> freeCdsQuota_ = nullptr;
    // The free capacity provided by the enterprise drive. Unit: GiB.
    std::shared_ptr<int64_t> freeCdsSize_ = nullptr;
    // The price.
    std::shared_ptr<Models::DescribePriceResponseBodyPriceInfoPrice> price_ = nullptr;
    // The details of the promotion rules.
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPriceInfoRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
