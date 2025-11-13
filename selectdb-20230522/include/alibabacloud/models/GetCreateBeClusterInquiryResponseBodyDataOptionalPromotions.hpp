// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATEBECLUSTERINQUIRYRESPONSEBODYDATAOPTIONALPROMOTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETCREATEBECLUSTERINQUIRYRESPONSEBODYDATAOPTIONALPROMOTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& obj) { 
      DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& obj) { 
      DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions() = default ;
    GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions(const GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions &) = default ;
    GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions(GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions &&) = default ;
    GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions() = default ;
    GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& operator=(const GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions &) = default ;
    GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& operator=(GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canPromFee_ == nullptr
        && return this->optionCode_ == nullptr && return this->promotionDesc_ == nullptr && return this->promotionName_ == nullptr && return this->promotionOptionNo_ == nullptr; };
    // canPromFee Field Functions 
    bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
    void deleteCanPromFee() { this->canPromFee_ = nullptr;};
    inline string canPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, "") };
    inline GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& setCanPromFee(string canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


    // optionCode Field Functions 
    bool hasOptionCode() const { return this->optionCode_ != nullptr;};
    void deleteOptionCode() { this->optionCode_ = nullptr;};
    inline string optionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
    inline GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline GetCreateBEClusterInquiryResponseBodyDataOptionalPromotions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


  protected:
    std::shared_ptr<string> canPromFee_ = nullptr;
    std::shared_ptr<string> optionCode_ = nullptr;
    std::shared_ptr<string> promotionDesc_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
