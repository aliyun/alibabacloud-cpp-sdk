// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICERESPONSEBODYDATAPROMOTIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICERESPONSEBODYDATAPROMOTIONDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetPayAsYouGoPriceResponseBodyDataPromotionDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayAsYouGoPriceResponseBodyDataPromotionDetails& obj) { 
      DARABONBA_PTR_TO_JSON(PromotionDetail, promotionDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayAsYouGoPriceResponseBodyDataPromotionDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(PromotionDetail, promotionDetail_);
    };
    GetPayAsYouGoPriceResponseBodyDataPromotionDetails() = default ;
    GetPayAsYouGoPriceResponseBodyDataPromotionDetails(const GetPayAsYouGoPriceResponseBodyDataPromotionDetails &) = default ;
    GetPayAsYouGoPriceResponseBodyDataPromotionDetails(GetPayAsYouGoPriceResponseBodyDataPromotionDetails &&) = default ;
    GetPayAsYouGoPriceResponseBodyDataPromotionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayAsYouGoPriceResponseBodyDataPromotionDetails() = default ;
    GetPayAsYouGoPriceResponseBodyDataPromotionDetails& operator=(const GetPayAsYouGoPriceResponseBodyDataPromotionDetails &) = default ;
    GetPayAsYouGoPriceResponseBodyDataPromotionDetails& operator=(GetPayAsYouGoPriceResponseBodyDataPromotionDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotionDetail_ != nullptr; };
    // promotionDetail Field Functions 
    bool hasPromotionDetail() const { return this->promotionDetail_ != nullptr;};
    void deletePromotionDetail() { this->promotionDetail_ = nullptr;};
    inline const vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail> & promotionDetail() const { DARABONBA_PTR_GET_CONST(promotionDetail_, vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail>) };
    inline vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail> promotionDetail() { DARABONBA_PTR_GET(promotionDetail_, vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail>) };
    inline GetPayAsYouGoPriceResponseBodyDataPromotionDetails& setPromotionDetail(const vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail> & promotionDetail) { DARABONBA_PTR_SET_VALUE(promotionDetail_, promotionDetail) };
    inline GetPayAsYouGoPriceResponseBodyDataPromotionDetails& setPromotionDetail(vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail> && promotionDetail) { DARABONBA_PTR_SET_RVALUE(promotionDetail_, promotionDetail) };


  protected:
    std::shared_ptr<vector<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetailsPromotionDetail>> promotionDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
