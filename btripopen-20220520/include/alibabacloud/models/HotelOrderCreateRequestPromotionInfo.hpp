// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTPROMOTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTPROMOTIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateRequestPromotionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateRequestPromotionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(promotion_detail_info_list, promotionDetailInfoList_);
      DARABONBA_PTR_TO_JSON(promotion_total_price, promotionTotalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateRequestPromotionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(promotion_detail_info_list, promotionDetailInfoList_);
      DARABONBA_PTR_FROM_JSON(promotion_total_price, promotionTotalPrice_);
    };
    HotelOrderCreateRequestPromotionInfo() = default ;
    HotelOrderCreateRequestPromotionInfo(const HotelOrderCreateRequestPromotionInfo &) = default ;
    HotelOrderCreateRequestPromotionInfo(HotelOrderCreateRequestPromotionInfo &&) = default ;
    HotelOrderCreateRequestPromotionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateRequestPromotionInfo() = default ;
    HotelOrderCreateRequestPromotionInfo& operator=(const HotelOrderCreateRequestPromotionInfo &) = default ;
    HotelOrderCreateRequestPromotionInfo& operator=(HotelOrderCreateRequestPromotionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotionDetailInfoList_ != nullptr
        && this->promotionTotalPrice_ != nullptr; };
    // promotionDetailInfoList Field Functions 
    bool hasPromotionDetailInfoList() const { return this->promotionDetailInfoList_ != nullptr;};
    void deletePromotionDetailInfoList() { this->promotionDetailInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList> & promotionDetailInfoList() const { DARABONBA_PTR_GET_CONST(promotionDetailInfoList_, vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList>) };
    inline vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList> promotionDetailInfoList() { DARABONBA_PTR_GET(promotionDetailInfoList_, vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList>) };
    inline HotelOrderCreateRequestPromotionInfo& setPromotionDetailInfoList(const vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList> & promotionDetailInfoList) { DARABONBA_PTR_SET_VALUE(promotionDetailInfoList_, promotionDetailInfoList) };
    inline HotelOrderCreateRequestPromotionInfo& setPromotionDetailInfoList(vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList> && promotionDetailInfoList) { DARABONBA_PTR_SET_RVALUE(promotionDetailInfoList_, promotionDetailInfoList) };


    // promotionTotalPrice Field Functions 
    bool hasPromotionTotalPrice() const { return this->promotionTotalPrice_ != nullptr;};
    void deletePromotionTotalPrice() { this->promotionTotalPrice_ = nullptr;};
    inline int64_t promotionTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionTotalPrice_, 0L) };
    inline HotelOrderCreateRequestPromotionInfo& setPromotionTotalPrice(int64_t promotionTotalPrice) { DARABONBA_PTR_SET_VALUE(promotionTotalPrice_, promotionTotalPrice) };


  protected:
    std::shared_ptr<vector<Models::HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList>> promotionDetailInfoList_ = nullptr;
    std::shared_ptr<int64_t> promotionTotalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
