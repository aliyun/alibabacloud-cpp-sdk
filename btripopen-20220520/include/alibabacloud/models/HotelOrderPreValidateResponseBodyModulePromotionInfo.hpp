// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULEPROMOTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERPREVALIDATERESPONSEBODYMODULEPROMOTIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderPreValidateResponseBodyModulePromotionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderPreValidateResponseBodyModulePromotionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ext_attr_map, extAttrMap_);
      DARABONBA_PTR_TO_JSON(promotion_detail_info_list, promotionDetailInfoList_);
      DARABONBA_PTR_TO_JSON(promotion_total_price, promotionTotalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderPreValidateResponseBodyModulePromotionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ext_attr_map, extAttrMap_);
      DARABONBA_PTR_FROM_JSON(promotion_detail_info_list, promotionDetailInfoList_);
      DARABONBA_PTR_FROM_JSON(promotion_total_price, promotionTotalPrice_);
    };
    HotelOrderPreValidateResponseBodyModulePromotionInfo() = default ;
    HotelOrderPreValidateResponseBodyModulePromotionInfo(const HotelOrderPreValidateResponseBodyModulePromotionInfo &) = default ;
    HotelOrderPreValidateResponseBodyModulePromotionInfo(HotelOrderPreValidateResponseBodyModulePromotionInfo &&) = default ;
    HotelOrderPreValidateResponseBodyModulePromotionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderPreValidateResponseBodyModulePromotionInfo() = default ;
    HotelOrderPreValidateResponseBodyModulePromotionInfo& operator=(const HotelOrderPreValidateResponseBodyModulePromotionInfo &) = default ;
    HotelOrderPreValidateResponseBodyModulePromotionInfo& operator=(HotelOrderPreValidateResponseBodyModulePromotionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extAttrMap_ != nullptr
        && this->promotionDetailInfoList_ != nullptr && this->promotionTotalPrice_ != nullptr; };
    // extAttrMap Field Functions 
    bool hasExtAttrMap() const { return this->extAttrMap_ != nullptr;};
    void deleteExtAttrMap() { this->extAttrMap_ = nullptr;};
    inline const map<string, string> & extAttrMap() const { DARABONBA_PTR_GET_CONST(extAttrMap_, map<string, string>) };
    inline map<string, string> extAttrMap() { DARABONBA_PTR_GET(extAttrMap_, map<string, string>) };
    inline HotelOrderPreValidateResponseBodyModulePromotionInfo& setExtAttrMap(const map<string, string> & extAttrMap) { DARABONBA_PTR_SET_VALUE(extAttrMap_, extAttrMap) };
    inline HotelOrderPreValidateResponseBodyModulePromotionInfo& setExtAttrMap(map<string, string> && extAttrMap) { DARABONBA_PTR_SET_RVALUE(extAttrMap_, extAttrMap) };


    // promotionDetailInfoList Field Functions 
    bool hasPromotionDetailInfoList() const { return this->promotionDetailInfoList_ != nullptr;};
    void deletePromotionDetailInfoList() { this->promotionDetailInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList> & promotionDetailInfoList() const { DARABONBA_PTR_GET_CONST(promotionDetailInfoList_, vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList>) };
    inline vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList> promotionDetailInfoList() { DARABONBA_PTR_GET(promotionDetailInfoList_, vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList>) };
    inline HotelOrderPreValidateResponseBodyModulePromotionInfo& setPromotionDetailInfoList(const vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList> & promotionDetailInfoList) { DARABONBA_PTR_SET_VALUE(promotionDetailInfoList_, promotionDetailInfoList) };
    inline HotelOrderPreValidateResponseBodyModulePromotionInfo& setPromotionDetailInfoList(vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList> && promotionDetailInfoList) { DARABONBA_PTR_SET_RVALUE(promotionDetailInfoList_, promotionDetailInfoList) };


    // promotionTotalPrice Field Functions 
    bool hasPromotionTotalPrice() const { return this->promotionTotalPrice_ != nullptr;};
    void deletePromotionTotalPrice() { this->promotionTotalPrice_ = nullptr;};
    inline int64_t promotionTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionTotalPrice_, 0L) };
    inline HotelOrderPreValidateResponseBodyModulePromotionInfo& setPromotionTotalPrice(int64_t promotionTotalPrice) { DARABONBA_PTR_SET_VALUE(promotionTotalPrice_, promotionTotalPrice) };


  protected:
    std::shared_ptr<map<string, string>> extAttrMap_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderPreValidateResponseBodyModulePromotionInfoPromotionDetailInfoList>> promotionDetailInfoList_ = nullptr;
    std::shared_ptr<int64_t> promotionTotalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
