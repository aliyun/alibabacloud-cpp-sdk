// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMOTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_PROMOTIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class PromotionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromotionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(PromotionOptionCode, promotionOptionCode_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    friend void from_json(const Darabonba::Json& j, PromotionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
      DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionCode, promotionOptionCode_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    PromotionInfo() = default ;
    PromotionInfo(const PromotionInfo &) = default ;
    PromotionInfo(PromotionInfo &&) = default ;
    PromotionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromotionInfo() = default ;
    PromotionInfo& operator=(const PromotionInfo &) = default ;
    PromotionInfo& operator=(PromotionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canPromFee_ != nullptr
        && this->isSelected_ != nullptr && this->promotionDesc_ != nullptr && this->promotionName_ != nullptr && this->promotionOptionCode_ != nullptr && this->promotionOptionNo_ != nullptr; };
    // canPromFee Field Functions 
    bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
    void deleteCanPromFee() { this->canPromFee_ = nullptr;};
    inline string canPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, "") };
    inline PromotionInfo& setCanPromFee(string canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


    // isSelected Field Functions 
    bool hasIsSelected() const { return this->isSelected_ != nullptr;};
    void deleteIsSelected() { this->isSelected_ = nullptr;};
    inline string isSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, "") };
    inline PromotionInfo& setIsSelected(string isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline PromotionInfo& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline PromotionInfo& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // promotionOptionCode Field Functions 
    bool hasPromotionOptionCode() const { return this->promotionOptionCode_ != nullptr;};
    void deletePromotionOptionCode() { this->promotionOptionCode_ = nullptr;};
    inline string promotionOptionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionCode_, "") };
    inline PromotionInfo& setPromotionOptionCode(string promotionOptionCode) { DARABONBA_PTR_SET_VALUE(promotionOptionCode_, promotionOptionCode) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline PromotionInfo& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


  protected:
    std::shared_ptr<string> canPromFee_ = nullptr;
    std::shared_ptr<string> isSelected_ = nullptr;
    std::shared_ptr<string> promotionDesc_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<string> promotionOptionCode_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
