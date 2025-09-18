// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMOTIONPARAM_HPP_
#define ALIBABACLOUD_MODELS_PROMOTIONPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class PromotionParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromotionParam& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(PromotionOptionCode, promotionOptionCode_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    friend void from_json(const Darabonba::Json& j, PromotionParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionCode, promotionOptionCode_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    PromotionParam() = default ;
    PromotionParam(const PromotionParam &) = default ;
    PromotionParam(PromotionParam &&) = default ;
    PromotionParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromotionParam() = default ;
    PromotionParam& operator=(const PromotionParam &) = default ;
    PromotionParam& operator=(PromotionParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productCode_ != nullptr
        && this->promotionOptionCode_ != nullptr && this->promotionOptionNo_ != nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline PromotionParam& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // promotionOptionCode Field Functions 
    bool hasPromotionOptionCode() const { return this->promotionOptionCode_ != nullptr;};
    void deletePromotionOptionCode() { this->promotionOptionCode_ = nullptr;};
    inline string promotionOptionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionCode_, "") };
    inline PromotionParam& setPromotionOptionCode(string promotionOptionCode) { DARABONBA_PTR_SET_VALUE(promotionOptionCode_, promotionOptionCode) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline PromotionParam& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


  protected:
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> promotionOptionCode_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
