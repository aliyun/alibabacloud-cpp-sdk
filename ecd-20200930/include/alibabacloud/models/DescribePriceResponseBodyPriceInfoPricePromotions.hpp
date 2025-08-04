// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEPROMOTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEPROMOTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoPricePromotions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoPricePromotions& obj) { 
      DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoPricePromotions& obj) { 
      DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    DescribePriceResponseBodyPriceInfoPricePromotions() = default ;
    DescribePriceResponseBodyPriceInfoPricePromotions(const DescribePriceResponseBodyPriceInfoPricePromotions &) = default ;
    DescribePriceResponseBodyPriceInfoPricePromotions(DescribePriceResponseBodyPriceInfoPricePromotions &&) = default ;
    DescribePriceResponseBodyPriceInfoPricePromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoPricePromotions() = default ;
    DescribePriceResponseBodyPriceInfoPricePromotions& operator=(const DescribePriceResponseBodyPriceInfoPricePromotions &) = default ;
    DescribePriceResponseBodyPriceInfoPricePromotions& operator=(DescribePriceResponseBodyPriceInfoPricePromotions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->optionCode_ != nullptr
        && this->promotionDesc_ != nullptr && this->promotionId_ != nullptr && this->promotionName_ != nullptr && this->selected_ != nullptr; };
    // optionCode Field Functions 
    bool hasOptionCode() const { return this->optionCode_ != nullptr;};
    void deleteOptionCode() { this->optionCode_ = nullptr;};
    inline string optionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
    inline DescribePriceResponseBodyPriceInfoPricePromotions& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline DescribePriceResponseBodyPriceInfoPricePromotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribePriceResponseBodyPriceInfoPricePromotions& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline DescribePriceResponseBodyPriceInfoPricePromotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline DescribePriceResponseBodyPriceInfoPricePromotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The description of the promotion rule.
    std::shared_ptr<string> optionCode_ = nullptr;
    // The description of the promotion.
    std::shared_ptr<string> promotionDesc_ = nullptr;
    // The promotion ID.
    std::shared_ptr<string> promotionId_ = nullptr;
    // The promotion name.
    std::shared_ptr<string> promotionName_ = nullptr;
    // Indicates whether an item is selected.
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
