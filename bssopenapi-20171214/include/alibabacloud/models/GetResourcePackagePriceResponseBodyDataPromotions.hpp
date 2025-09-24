// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICERESPONSEBODYDATAPROMOTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICERESPONSEBODYDATAPROMOTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourcePackagePriceResponseBodyDataPromotionsPromotion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetResourcePackagePriceResponseBodyDataPromotions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePackagePriceResponseBodyDataPromotions& obj) { 
      DARABONBA_PTR_TO_JSON(Promotion, promotion_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePackagePriceResponseBodyDataPromotions& obj) { 
      DARABONBA_PTR_FROM_JSON(Promotion, promotion_);
    };
    GetResourcePackagePriceResponseBodyDataPromotions() = default ;
    GetResourcePackagePriceResponseBodyDataPromotions(const GetResourcePackagePriceResponseBodyDataPromotions &) = default ;
    GetResourcePackagePriceResponseBodyDataPromotions(GetResourcePackagePriceResponseBodyDataPromotions &&) = default ;
    GetResourcePackagePriceResponseBodyDataPromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePackagePriceResponseBodyDataPromotions() = default ;
    GetResourcePackagePriceResponseBodyDataPromotions& operator=(const GetResourcePackagePriceResponseBodyDataPromotions &) = default ;
    GetResourcePackagePriceResponseBodyDataPromotions& operator=(GetResourcePackagePriceResponseBodyDataPromotions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotion_ != nullptr; };
    // promotion Field Functions 
    bool hasPromotion() const { return this->promotion_ != nullptr;};
    void deletePromotion() { this->promotion_ = nullptr;};
    inline const vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion> & promotion() const { DARABONBA_PTR_GET_CONST(promotion_, vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion>) };
    inline vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion> promotion() { DARABONBA_PTR_GET(promotion_, vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion>) };
    inline GetResourcePackagePriceResponseBodyDataPromotions& setPromotion(const vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion> & promotion) { DARABONBA_PTR_SET_VALUE(promotion_, promotion) };
    inline GetResourcePackagePriceResponseBodyDataPromotions& setPromotion(vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion> && promotion) { DARABONBA_PTR_SET_RVALUE(promotion_, promotion) };


  protected:
    std::shared_ptr<vector<Models::GetResourcePackagePriceResponseBodyDataPromotionsPromotion>> promotion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
