// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODYMODULEITEMSDISCOUNTDESCDISCOUNTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODYMODULEITEMSDISCOUNTDESCDISCOUNTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& obj) { 
      DARABONBA_PTR_TO_JSON(label_name, labelName_);
      DARABONBA_PTR_TO_JSON(money_desc, moneyDesc_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(label_name, labelName_);
      DARABONBA_PTR_FROM_JSON(money_desc, moneyDesc_);
    };
    HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail() = default ;
    HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail(const HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail &) = default ;
    HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail(HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail &&) = default ;
    HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail() = default ;
    HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& operator=(const HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail &) = default ;
    HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& operator=(HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelName_ != nullptr
        && this->moneyDesc_ != nullptr; };
    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline const vector<string> & labelName() const { DARABONBA_PTR_GET_CONST(labelName_, vector<string>) };
    inline vector<string> labelName() { DARABONBA_PTR_GET(labelName_, vector<string>) };
    inline HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& setLabelName(const vector<string> & labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };
    inline HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& setLabelName(vector<string> && labelName) { DARABONBA_PTR_SET_RVALUE(labelName_, labelName) };


    // moneyDesc Field Functions 
    bool hasMoneyDesc() const { return this->moneyDesc_ != nullptr;};
    void deleteMoneyDesc() { this->moneyDesc_ = nullptr;};
    inline string moneyDesc() const { DARABONBA_PTR_GET_DEFAULT(moneyDesc_, "") };
    inline HotelSearchResponseBodyModuleItemsDiscountDescDiscountDetail& setMoneyDesc(string moneyDesc) { DARABONBA_PTR_SET_VALUE(moneyDesc_, moneyDesc) };


  protected:
    std::shared_ptr<vector<string>> labelName_ = nullptr;
    std::shared_ptr<string> moneyDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
