// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESDISCOUNTDESC_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSRATESDISCOUNTDESC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& obj) { 
      DARABONBA_PTR_TO_JSON(cash_reduce_total, cashReduceTotal_);
      DARABONBA_PTR_TO_JSON(dinamic_label, dinamicLabel_);
      DARABONBA_PTR_TO_JSON(discount_detail, discountDetail_);
      DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(cash_reduce_total, cashReduceTotal_);
      DARABONBA_PTR_FROM_JSON(dinamic_label, dinamicLabel_);
      DARABONBA_PTR_FROM_JSON(discount_detail, discountDetail_);
      DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc(const HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc(HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& operator=(HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cashReduceTotal_ != nullptr
        && this->dinamicLabel_ != nullptr && this->discountDetail_ != nullptr && this->subTitle_ != nullptr && this->title_ != nullptr; };
    // cashReduceTotal Field Functions 
    bool hasCashReduceTotal() const { return this->cashReduceTotal_ != nullptr;};
    void deleteCashReduceTotal() { this->cashReduceTotal_ = nullptr;};
    inline string cashReduceTotal() const { DARABONBA_PTR_GET_DEFAULT(cashReduceTotal_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& setCashReduceTotal(string cashReduceTotal) { DARABONBA_PTR_SET_VALUE(cashReduceTotal_, cashReduceTotal) };


    // dinamicLabel Field Functions 
    bool hasDinamicLabel() const { return this->dinamicLabel_ != nullptr;};
    void deleteDinamicLabel() { this->dinamicLabel_ = nullptr;};
    inline string dinamicLabel() const { DARABONBA_PTR_GET_DEFAULT(dinamicLabel_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& setDinamicLabel(string dinamicLabel) { DARABONBA_PTR_SET_VALUE(dinamicLabel_, dinamicLabel) };


    // discountDetail Field Functions 
    bool hasDiscountDetail() const { return this->discountDetail_ != nullptr;};
    void deleteDiscountDetail() { this->discountDetail_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail> & discountDetail() const { DARABONBA_PTR_GET_CONST(discountDetail_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail> discountDetail() { DARABONBA_PTR_GET(discountDetail_, vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail>) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& setDiscountDetail(const vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail> & discountDetail) { DARABONBA_PTR_SET_VALUE(discountDetail_, discountDetail) };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& setDiscountDetail(vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail> && discountDetail) { DARABONBA_PTR_SET_RVALUE(discountDetail_, discountDetail) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDesc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> cashReduceTotal_ = nullptr;
    std::shared_ptr<string> dinamicLabel_ = nullptr;
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRoomsRatesDiscountDescDiscountDetail>> discountDetail_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
