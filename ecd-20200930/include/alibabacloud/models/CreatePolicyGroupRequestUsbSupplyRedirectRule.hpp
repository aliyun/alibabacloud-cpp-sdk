// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTUSBSUPPLYREDIRECTRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTUSBSUPPLYREDIRECTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreatePolicyGroupRequestUsbSupplyRedirectRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequestUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_TO_JSON(DeviceSubclass, deviceSubclass_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_TO_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequestUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_FROM_JSON(DeviceSubclass, deviceSubclass_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_FROM_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    CreatePolicyGroupRequestUsbSupplyRedirectRule() = default ;
    CreatePolicyGroupRequestUsbSupplyRedirectRule(const CreatePolicyGroupRequestUsbSupplyRedirectRule &) = default ;
    CreatePolicyGroupRequestUsbSupplyRedirectRule(CreatePolicyGroupRequestUsbSupplyRedirectRule &&) = default ;
    CreatePolicyGroupRequestUsbSupplyRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequestUsbSupplyRedirectRule() = default ;
    CreatePolicyGroupRequestUsbSupplyRedirectRule& operator=(const CreatePolicyGroupRequestUsbSupplyRedirectRule &) = default ;
    CreatePolicyGroupRequestUsbSupplyRedirectRule& operator=(CreatePolicyGroupRequestUsbSupplyRedirectRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->deviceClass_ != nullptr && this->deviceSubclass_ != nullptr && this->productId_ != nullptr && this->usbRedirectType_ != nullptr && this->usbRuleType_ != nullptr
        && this->vendorId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceClass Field Functions 
    bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
    void deleteDeviceClass() { this->deviceClass_ = nullptr;};
    inline string deviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


    // deviceSubclass Field Functions 
    bool hasDeviceSubclass() const { return this->deviceSubclass_ != nullptr;};
    void deleteDeviceSubclass() { this->deviceSubclass_ = nullptr;};
    inline string deviceSubclass() const { DARABONBA_PTR_GET_DEFAULT(deviceSubclass_, "") };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setDeviceSubclass(string deviceSubclass) { DARABONBA_PTR_SET_VALUE(deviceSubclass_, deviceSubclass) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // usbRedirectType Field Functions 
    bool hasUsbRedirectType() const { return this->usbRedirectType_ != nullptr;};
    void deleteUsbRedirectType() { this->usbRedirectType_ = nullptr;};
    inline int64_t usbRedirectType() const { DARABONBA_PTR_GET_DEFAULT(usbRedirectType_, 0L) };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setUsbRedirectType(int64_t usbRedirectType) { DARABONBA_PTR_SET_VALUE(usbRedirectType_, usbRedirectType) };


    // usbRuleType Field Functions 
    bool hasUsbRuleType() const { return this->usbRuleType_ != nullptr;};
    void deleteUsbRuleType() { this->usbRuleType_ = nullptr;};
    inline int64_t usbRuleType() const { DARABONBA_PTR_GET_DEFAULT(usbRuleType_, 0L) };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setUsbRuleType(int64_t usbRuleType) { DARABONBA_PTR_SET_VALUE(usbRuleType_, usbRuleType) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline CreatePolicyGroupRequestUsbSupplyRedirectRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The class of the device. If you set the `usbRuleType` parameter to 1, you must specify this parameter. For more information, see [Defined Class Codes](https://www.usb.org/defined-class-codes).
    std::shared_ptr<string> deviceClass_ = nullptr;
    // The subclass of the device. If you set the `usbRuleType` parameter to 1, you must specify this parameter. For more information, see [Defined Class Codes](https://www.usb.org/defined-class-codes).
    std::shared_ptr<string> deviceSubclass_ = nullptr;
    // The ID of the service.
    std::shared_ptr<string> productId_ = nullptr;
    // The type of USB redirection.
    // 
    // Valid values:
    // 
    // *   1: allows USB redirection
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   2: forbids USB redirection
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<int64_t> usbRedirectType_ = nullptr;
    // The type of the USB redirection rule.
    // 
    // Valid values:
    // 
    // *   1: by device class
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   2: by device vendor
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<int64_t> usbRuleType_ = nullptr;
    // The ID of the vendor. For more information, see [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
