// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSELECTIONPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSELECTIONPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GetSelectionProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSelectionProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSelectionProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
    };
    GetSelectionProductRequest() = default ;
    GetSelectionProductRequest(const GetSelectionProductRequest &) = default ;
    GetSelectionProductRequest(GetSelectionProductRequest &&) = default ;
    GetSelectionProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSelectionProductRequest() = default ;
    GetSelectionProductRequest& operator=(const GetSelectionProductRequest &) = default ;
    GetSelectionProductRequest& operator=(GetSelectionProductRequest &&) = default ;
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
    inline GetSelectionProductRequest& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline GetSelectionProductRequest& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


  protected:
    shared_ptr<string> divisionCode_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
