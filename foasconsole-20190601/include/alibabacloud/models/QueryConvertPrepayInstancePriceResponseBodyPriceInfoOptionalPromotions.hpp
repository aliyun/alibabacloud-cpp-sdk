// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICERESPONSEBODYPRICEINFOOPTIONALPROMOTIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICERESPONSEBODYPRICEINFOOPTIONALPROMOTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& obj) { 
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& obj) { 
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions() = default ;
    QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions(const QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions &) = default ;
    QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions(QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions &&) = default ;
    QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions() = default ;
    QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& operator=(const QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions &) = default ;
    QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& operator=(QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promotionDesc_ == nullptr
        && return this->promotionName_ == nullptr && return this->promotionOptionNo_ == nullptr && return this->selected_ == nullptr; };
    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline QueryConvertPrepayInstancePriceResponseBodyPriceInfoOptionalPromotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    std::shared_ptr<string> promotionDesc_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
