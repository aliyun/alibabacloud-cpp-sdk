// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAPROMOTIONDETAILSPROMOTIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAPROMOTIONDETAILSPROMOTIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
    };
    GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail() = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail(const GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail &) = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail(GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail &&) = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail() = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& operator=(const GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail &) = default ;
    GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& operator=(GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotionDesc_ != nullptr
        && this->promotionId_ != nullptr && this->promotionName_ != nullptr; };
    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline int64_t promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, 0L) };
    inline GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& setPromotionId(int64_t promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline GetSubscriptionPriceResponseBodyDataPromotionDetailsPromotionDetail& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


  protected:
    // The description of the discount.
    std::shared_ptr<string> promotionDesc_ = nullptr;
    // The ID of the discount.
    std::shared_ptr<int64_t> promotionId_ = nullptr;
    // The name of the discount.
    std::shared_ptr<string> promotionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
