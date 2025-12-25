// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMOTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_PROMOTIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class PromotionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromotionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(canPromFee, canPromFee_);
      DARABONBA_PTR_TO_JSON(isSelected, isSelected_);
      DARABONBA_PTR_TO_JSON(promotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(promotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(promotionOptionCode, promotionOptionCode_);
      DARABONBA_PTR_TO_JSON(promotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, PromotionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(canPromFee, canPromFee_);
      DARABONBA_PTR_FROM_JSON(isSelected, isSelected_);
      DARABONBA_PTR_FROM_JSON(promotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(promotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(promotionOptionCode, promotionOptionCode_);
      DARABONBA_PTR_FROM_JSON(promotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(selected, selected_);
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
    virtual bool empty() const override { return this->canPromFee_ == nullptr
        && return this->isSelected_ == nullptr && return this->promotionDesc_ == nullptr && return this->promotionName_ == nullptr && return this->promotionOptionCode_ == nullptr && return this->promotionOptionNo_ == nullptr
        && return this->selected_ == nullptr; };
    // canPromFee Field Functions 
    bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
    void deleteCanPromFee() { this->canPromFee_ = nullptr;};
    inline string canPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, "") };
    inline PromotionInfo& setCanPromFee(string canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


    // isSelected Field Functions 
    bool hasIsSelected() const { return this->isSelected_ != nullptr;};
    void deleteIsSelected() { this->isSelected_ = nullptr;};
    inline bool isSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, false) };
    inline PromotionInfo& setIsSelected(bool isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


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


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline PromotionInfo& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    std::shared_ptr<string> canPromFee_ = nullptr;
    std::shared_ptr<bool> isSelected_ = nullptr;
    std::shared_ptr<string> promotionDesc_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<string> promotionOptionCode_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
