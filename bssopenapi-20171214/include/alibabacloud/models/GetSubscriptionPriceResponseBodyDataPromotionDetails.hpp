// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAPROMOTIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAPROMOTIONDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceResponseBodyDataPromotionDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceResponseBodyDataPromotionDetails& obj) { 
      DARABONBA_PTR_TO_JSON(PromotionDetail, promotionDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceResponseBodyDataPromotionDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(PromotionDetail, promotionDetail_);
    };
    GetSubscriptionPriceResponseBodyDataPromotionDetails() = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetails(const GetSubscriptionPriceResponseBodyDataPromotionDetails &) = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetails(GetSubscriptionPriceResponseBodyDataPromotionDetails &&) = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceResponseBodyDataPromotionDetails() = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetails& operator=(const GetSubscriptionPriceResponseBodyDataPromotionDetails &) = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetails& operator=(GetSubscriptionPriceResponseBodyDataPromotionDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotionDetail_ != nullptr; };
    // promotionDetail Field Functions 
    bool hasPromotionDetail() const { return this->promotionDetail_ != nullptr;};
    void deletePromotionDetail() { this->promotionDetail_ = nullptr;};
    inline const vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail> & promotionDetail() const { DARABONBA_PTR_GET_CONST(promotionDetail_, vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail>) };
    inline vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail> promotionDetail() { DARABONBA_PTR_GET(promotionDetail_, vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail>) };
    inline GetSubscriptionPriceResponseBodyDataPromotionDetails& setPromotionDetail(const vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail> & promotionDetail) { DARABONBA_PTR_SET_VALUE(promotionDetail_, promotionDetail) };
    inline GetSubscriptionPriceResponseBodyDataPromotionDetails& setPromotionDetail(vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail> && promotionDetail) { DARABONBA_PTR_SET_RVALUE(promotionDetail_, promotionDetail) };


  protected:
    std::shared_ptr<vector<Models::GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail>> promotionDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
