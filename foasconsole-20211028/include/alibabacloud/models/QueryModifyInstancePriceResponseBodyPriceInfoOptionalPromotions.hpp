// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICERESPONSEBODYPRICEINFOOPTIONALPROMOTIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICERESPONSEBODYPRICEINFOOPTIONALPROMOTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& obj) { 
      DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& obj) { 
      DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions() = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions(const QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions &) = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions(QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions &&) = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions() = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& operator=(const QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions &) = default ;
    QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& operator=(QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotionDesc_ != nullptr
        && this->promotionName_ != nullptr && this->promotionOptionNo_ != nullptr && this->selected_ != nullptr; };
    // promotionDesc Field Functions 
    bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
    void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
    inline string promotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
    inline QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline QueryModifyInstancePriceResponseBodyPriceInfoOptionalPromotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    std::shared_ptr<string> promotionDesc_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
