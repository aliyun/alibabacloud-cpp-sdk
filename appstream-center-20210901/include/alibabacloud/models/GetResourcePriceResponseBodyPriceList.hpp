// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODYPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODYPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceListPrice.hpp>
#include <vector>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceListRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourcePriceResponseBodyPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePriceResponseBodyPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(PriceType, priceType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePriceResponseBodyPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    GetResourcePriceResponseBodyPriceList() = default ;
    GetResourcePriceResponseBodyPriceList(const GetResourcePriceResponseBodyPriceList &) = default ;
    GetResourcePriceResponseBodyPriceList(GetResourcePriceResponseBodyPriceList &&) = default ;
    GetResourcePriceResponseBodyPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePriceResponseBodyPriceList() = default ;
    GetResourcePriceResponseBodyPriceList& operator=(const GetResourcePriceResponseBodyPriceList &) = default ;
    GetResourcePriceResponseBodyPriceList& operator=(GetResourcePriceResponseBodyPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr
        && return this->priceType_ == nullptr && return this->rules_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::GetResourcePriceResponseBodyPriceListPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::GetResourcePriceResponseBodyPriceListPrice) };
    inline Models::GetResourcePriceResponseBodyPriceListPrice price() { DARABONBA_PTR_GET(price_, Models::GetResourcePriceResponseBodyPriceListPrice) };
    inline GetResourcePriceResponseBodyPriceList& setPrice(const Models::GetResourcePriceResponseBodyPriceListPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline GetResourcePriceResponseBodyPriceList& setPrice(Models::GetResourcePriceResponseBodyPriceListPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline string priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
    inline GetResourcePriceResponseBodyPriceList& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetResourcePriceResponseBodyPriceListRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetResourcePriceResponseBodyPriceListRules>) };
    inline vector<Models::GetResourcePriceResponseBodyPriceListRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetResourcePriceResponseBodyPriceListRules>) };
    inline GetResourcePriceResponseBodyPriceList& setRules(const vector<Models::GetResourcePriceResponseBodyPriceListRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetResourcePriceResponseBodyPriceList& setRules(vector<Models::GetResourcePriceResponseBodyPriceListRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price details.
    std::shared_ptr<Models::GetResourcePriceResponseBodyPriceListPrice> price_ = nullptr;
    // The price type.
    // 
    // Valid values:
    // 
    // *   Connected: in use
    // *   Standby: pending for use.
    std::shared_ptr<string> priceType_ = nullptr;
    // The price calculation rules.
    std::shared_ptr<vector<Models::GetResourcePriceResponseBodyPriceListRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
