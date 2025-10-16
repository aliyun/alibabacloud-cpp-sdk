// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceRenewPriceResponseBodyDataPrice.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceRenewPriceResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceRenewPriceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceRenewPriceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceRenewPriceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    GetResourceRenewPriceResponseBodyData() = default ;
    GetResourceRenewPriceResponseBodyData(const GetResourceRenewPriceResponseBodyData &) = default ;
    GetResourceRenewPriceResponseBodyData(GetResourceRenewPriceResponseBodyData &&) = default ;
    GetResourceRenewPriceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceRenewPriceResponseBodyData() = default ;
    GetResourceRenewPriceResponseBodyData& operator=(const GetResourceRenewPriceResponseBodyData &) = default ;
    GetResourceRenewPriceResponseBodyData& operator=(GetResourceRenewPriceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr
        && return this->rules_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::GetResourceRenewPriceResponseBodyDataPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::GetResourceRenewPriceResponseBodyDataPrice) };
    inline Models::GetResourceRenewPriceResponseBodyDataPrice price() { DARABONBA_PTR_GET(price_, Models::GetResourceRenewPriceResponseBodyDataPrice) };
    inline GetResourceRenewPriceResponseBodyData& setPrice(const Models::GetResourceRenewPriceResponseBodyDataPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline GetResourceRenewPriceResponseBodyData& setPrice(Models::GetResourceRenewPriceResponseBodyDataPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetResourceRenewPriceResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetResourceRenewPriceResponseBodyDataRules>) };
    inline vector<Models::GetResourceRenewPriceResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetResourceRenewPriceResponseBodyDataRules>) };
    inline GetResourceRenewPriceResponseBodyData& setRules(const vector<Models::GetResourceRenewPriceResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetResourceRenewPriceResponseBodyData& setRules(vector<Models::GetResourceRenewPriceResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price details.
    std::shared_ptr<Models::GetResourceRenewPriceResponseBodyDataPrice> price_ = nullptr;
    // The price calculation rules.
    std::shared_ptr<vector<Models::GetResourceRenewPriceResponseBodyDataRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
