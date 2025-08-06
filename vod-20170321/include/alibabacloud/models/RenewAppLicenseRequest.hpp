// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWAPPLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWAPPLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RenewAppLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAppLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseItemIds, licenseItemIds_);
      DARABONBA_PTR_TO_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_TO_JSON(PurchaseMethod, purchaseMethod_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAppLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseItemIds, licenseItemIds_);
      DARABONBA_PTR_FROM_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_FROM_JSON(PurchaseMethod, purchaseMethod_);
    };
    RenewAppLicenseRequest() = default ;
    RenewAppLicenseRequest(const RenewAppLicenseRequest &) = default ;
    RenewAppLicenseRequest(RenewAppLicenseRequest &&) = default ;
    RenewAppLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAppLicenseRequest() = default ;
    RenewAppLicenseRequest& operator=(const RenewAppLicenseRequest &) = default ;
    RenewAppLicenseRequest& operator=(RenewAppLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseItemIds_ != nullptr
        && this->orderIds_ != nullptr && this->purchaseMethod_ != nullptr; };
    // licenseItemIds Field Functions 
    bool hasLicenseItemIds() const { return this->licenseItemIds_ != nullptr;};
    void deleteLicenseItemIds() { this->licenseItemIds_ = nullptr;};
    inline string licenseItemIds() const { DARABONBA_PTR_GET_DEFAULT(licenseItemIds_, "") };
    inline RenewAppLicenseRequest& setLicenseItemIds(string licenseItemIds) { DARABONBA_PTR_SET_VALUE(licenseItemIds_, licenseItemIds) };


    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline string orderIds() const { DARABONBA_PTR_GET_DEFAULT(orderIds_, "") };
    inline RenewAppLicenseRequest& setOrderIds(string orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };


    // purchaseMethod Field Functions 
    bool hasPurchaseMethod() const { return this->purchaseMethod_ != nullptr;};
    void deletePurchaseMethod() { this->purchaseMethod_ = nullptr;};
    inline string purchaseMethod() const { DARABONBA_PTR_GET_DEFAULT(purchaseMethod_, "") };
    inline RenewAppLicenseRequest& setPurchaseMethod(string purchaseMethod) { DARABONBA_PTR_SET_VALUE(purchaseMethod_, purchaseMethod) };


  protected:
    std::shared_ptr<string> licenseItemIds_ = nullptr;
    std::shared_ptr<string> orderIds_ = nullptr;
    std::shared_ptr<string> purchaseMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
