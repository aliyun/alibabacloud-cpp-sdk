// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTPROMOTIONINFOPROMOTIONDETAILINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTPROMOTIONINFOPROMOTIONDETAILINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(check_status, checkStatus_);
      DARABONBA_PTR_TO_JSON(need_check, needCheck_);
      DARABONBA_PTR_TO_JSON(promotion_code, promotionCode_);
      DARABONBA_PTR_TO_JSON(promotion_id, promotionId_);
      DARABONBA_PTR_TO_JSON(promotion_name, promotionName_);
      DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_TO_JSON(promotion_type, promotionType_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(check_status, checkStatus_);
      DARABONBA_PTR_FROM_JSON(need_check, needCheck_);
      DARABONBA_PTR_FROM_JSON(promotion_code, promotionCode_);
      DARABONBA_PTR_FROM_JSON(promotion_id, promotionId_);
      DARABONBA_PTR_FROM_JSON(promotion_name, promotionName_);
      DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_FROM_JSON(promotion_type, promotionType_);
    };
    HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList() = default ;
    HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList(const HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList &) = default ;
    HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList(HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList &&) = default ;
    HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList() = default ;
    HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& operator=(const HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList &) = default ;
    HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& operator=(HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkStatus_ != nullptr
        && this->needCheck_ != nullptr && this->promotionCode_ != nullptr && this->promotionId_ != nullptr && this->promotionName_ != nullptr && this->promotionPrice_ != nullptr
        && this->promotionType_ != nullptr; };
    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline bool checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, false) };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setCheckStatus(bool checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // needCheck Field Functions 
    bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
    void deleteNeedCheck() { this->needCheck_ = nullptr;};
    inline bool needCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, false) };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setNeedCheck(bool needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // promotionPrice Field Functions 
    bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
    void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
    inline int64_t promotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0L) };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setPromotionPrice(int64_t promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


    // promotionType Field Functions 
    bool hasPromotionType() const { return this->promotionType_ != nullptr;};
    void deletePromotionType() { this->promotionType_ = nullptr;};
    inline string promotionType() const { DARABONBA_PTR_GET_DEFAULT(promotionType_, "") };
    inline HotelOrderCreateRequestPromotionInfoPromotionDetailInfoList& setPromotionType(string promotionType) { DARABONBA_PTR_SET_VALUE(promotionType_, promotionType) };


  protected:
    std::shared_ptr<bool> checkStatus_ = nullptr;
    std::shared_ptr<bool> needCheck_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<int64_t> promotionPrice_ = nullptr;
    std::shared_ptr<string> promotionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
