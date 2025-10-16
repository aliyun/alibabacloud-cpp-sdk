// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTUSBSUPPLYREDIRECTRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTUSBSUPPLYREDIRECTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCenterPolicyRequestUsbSupplyRedirectRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenterPolicyRequestUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_TO_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenterPolicyRequestUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_FROM_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    CreateCenterPolicyRequestUsbSupplyRedirectRule() = default ;
    CreateCenterPolicyRequestUsbSupplyRedirectRule(const CreateCenterPolicyRequestUsbSupplyRedirectRule &) = default ;
    CreateCenterPolicyRequestUsbSupplyRedirectRule(CreateCenterPolicyRequestUsbSupplyRedirectRule &&) = default ;
    CreateCenterPolicyRequestUsbSupplyRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenterPolicyRequestUsbSupplyRedirectRule() = default ;
    CreateCenterPolicyRequestUsbSupplyRedirectRule& operator=(const CreateCenterPolicyRequestUsbSupplyRedirectRule &) = default ;
    CreateCenterPolicyRequestUsbSupplyRedirectRule& operator=(CreateCenterPolicyRequestUsbSupplyRedirectRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->productId_ == nullptr && return this->usbRedirectType_ == nullptr && return this->usbRuleType_ == nullptr && return this->vendorId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCenterPolicyRequestUsbSupplyRedirectRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CreateCenterPolicyRequestUsbSupplyRedirectRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // usbRedirectType Field Functions 
    bool hasUsbRedirectType() const { return this->usbRedirectType_ != nullptr;};
    void deleteUsbRedirectType() { this->usbRedirectType_ = nullptr;};
    inline string usbRedirectType() const { DARABONBA_PTR_GET_DEFAULT(usbRedirectType_, "") };
    inline CreateCenterPolicyRequestUsbSupplyRedirectRule& setUsbRedirectType(string usbRedirectType) { DARABONBA_PTR_SET_VALUE(usbRedirectType_, usbRedirectType) };


    // usbRuleType Field Functions 
    bool hasUsbRuleType() const { return this->usbRuleType_ != nullptr;};
    void deleteUsbRuleType() { this->usbRuleType_ = nullptr;};
    inline string usbRuleType() const { DARABONBA_PTR_GET_DEFAULT(usbRuleType_, "") };
    inline CreateCenterPolicyRequestUsbSupplyRedirectRule& setUsbRuleType(string usbRuleType) { DARABONBA_PTR_SET_VALUE(usbRuleType_, usbRuleType) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline CreateCenterPolicyRequestUsbSupplyRedirectRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The product ID (PID).
    std::shared_ptr<string> productId_ = nullptr;
    // Specifies whether to allow USB redirection.
    // 
    // Valid values:
    // 
    // *   1: allows USB redirection.
    // *   2: forbids USB redirection.
    std::shared_ptr<string> usbRedirectType_ = nullptr;
    // The type of the USB redirection rule.
    // 
    // Valid values:
    // 
    // *   2: enables USB redirection based on products.
    std::shared_ptr<string> usbRuleType_ = nullptr;
    // The vendor ID (VID). For more information, see [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
