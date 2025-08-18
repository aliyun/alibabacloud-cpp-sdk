// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODYPRICEMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPRICERESPONSEBODYPRICEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceModelPrice.hpp>
#include <vector>
#include <alibabacloud/models/GetResourcePriceResponseBodyPriceModelRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourcePriceResponseBodyPriceModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePriceResponseBodyPriceModel& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePriceResponseBodyPriceModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    GetResourcePriceResponseBodyPriceModel() = default ;
    GetResourcePriceResponseBodyPriceModel(const GetResourcePriceResponseBodyPriceModel &) = default ;
    GetResourcePriceResponseBodyPriceModel(GetResourcePriceResponseBodyPriceModel &&) = default ;
    GetResourcePriceResponseBodyPriceModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePriceResponseBodyPriceModel() = default ;
    GetResourcePriceResponseBodyPriceModel& operator=(const GetResourcePriceResponseBodyPriceModel &) = default ;
    GetResourcePriceResponseBodyPriceModel& operator=(GetResourcePriceResponseBodyPriceModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr
        && this->rules_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const Models::GetResourcePriceResponseBodyPriceModelPrice & price() const { DARABONBA_PTR_GET_CONST(price_, Models::GetResourcePriceResponseBodyPriceModelPrice) };
    inline Models::GetResourcePriceResponseBodyPriceModelPrice price() { DARABONBA_PTR_GET(price_, Models::GetResourcePriceResponseBodyPriceModelPrice) };
    inline GetResourcePriceResponseBodyPriceModel& setPrice(const Models::GetResourcePriceResponseBodyPriceModelPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline GetResourcePriceResponseBodyPriceModel& setPrice(Models::GetResourcePriceResponseBodyPriceModelPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetResourcePriceResponseBodyPriceModelRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetResourcePriceResponseBodyPriceModelRules>) };
    inline vector<Models::GetResourcePriceResponseBodyPriceModelRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetResourcePriceResponseBodyPriceModelRules>) };
    inline GetResourcePriceResponseBodyPriceModel& setRules(const vector<Models::GetResourcePriceResponseBodyPriceModelRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetResourcePriceResponseBodyPriceModel& setRules(vector<Models::GetResourcePriceResponseBodyPriceModelRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price details.
    std::shared_ptr<Models::GetResourcePriceResponseBodyPriceModelPrice> price_ = nullptr;
    // The price calculation rules.
    std::shared_ptr<vector<Models::GetResourcePriceResponseBodyPriceModelRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
