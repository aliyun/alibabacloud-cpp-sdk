// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSELECTIONPRODUCTSALEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSELECTIONPRODUCTSALEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GetSelectionProductSaleInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSelectionProductSaleInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSelectionProductSaleInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
    };
    GetSelectionProductSaleInfoRequest() = default ;
    GetSelectionProductSaleInfoRequest(const GetSelectionProductSaleInfoRequest &) = default ;
    GetSelectionProductSaleInfoRequest(GetSelectionProductSaleInfoRequest &&) = default ;
    GetSelectionProductSaleInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSelectionProductSaleInfoRequest() = default ;
    GetSelectionProductSaleInfoRequest& operator=(const GetSelectionProductSaleInfoRequest &) = default ;
    GetSelectionProductSaleInfoRequest& operator=(GetSelectionProductSaleInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->divisionCode_ == nullptr
        && this->purchaserId_ == nullptr; };
    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline GetSelectionProductSaleInfoRequest& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline GetSelectionProductSaleInfoRequest& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


  protected:
    shared_ptr<string> divisionCode_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
