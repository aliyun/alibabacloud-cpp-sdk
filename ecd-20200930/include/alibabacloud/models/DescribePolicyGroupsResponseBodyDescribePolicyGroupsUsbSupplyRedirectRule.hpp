// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSUSBSUPPLYREDIRECTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSUSBSUPPLYREDIRECTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_TO_JSON(DeviceSubclass, deviceSubclass_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_TO_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceClass, deviceClass_);
      DARABONBA_PTR_FROM_JSON(DeviceSubclass, deviceSubclass_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_FROM_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule(DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &&) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& operator=(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& operator=(DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->deviceClass_ == nullptr && return this->deviceSubclass_ == nullptr && return this->productId_ == nullptr && return this->usbRedirectType_ == nullptr && return this->usbRuleType_ == nullptr
        && return this->vendorId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceClass Field Functions 
    bool hasDeviceClass() const { return this->deviceClass_ != nullptr;};
    void deleteDeviceClass() { this->deviceClass_ = nullptr;};
    inline string deviceClass() const { DARABONBA_PTR_GET_DEFAULT(deviceClass_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setDeviceClass(string deviceClass) { DARABONBA_PTR_SET_VALUE(deviceClass_, deviceClass) };


    // deviceSubclass Field Functions 
    bool hasDeviceSubclass() const { return this->deviceSubclass_ != nullptr;};
    void deleteDeviceSubclass() { this->deviceSubclass_ = nullptr;};
    inline string deviceSubclass() const { DARABONBA_PTR_GET_DEFAULT(deviceSubclass_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setDeviceSubclass(string deviceSubclass) { DARABONBA_PTR_SET_VALUE(deviceSubclass_, deviceSubclass) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // usbRedirectType Field Functions 
    bool hasUsbRedirectType() const { return this->usbRedirectType_ != nullptr;};
    void deleteUsbRedirectType() { this->usbRedirectType_ = nullptr;};
    inline int64_t usbRedirectType() const { DARABONBA_PTR_GET_DEFAULT(usbRedirectType_, 0L) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setUsbRedirectType(int64_t usbRedirectType) { DARABONBA_PTR_SET_VALUE(usbRedirectType_, usbRedirectType) };


    // usbRuleType Field Functions 
    bool hasUsbRuleType() const { return this->usbRuleType_ != nullptr;};
    void deleteUsbRuleType() { this->usbRuleType_ = nullptr;};
    inline int64_t usbRuleType() const { DARABONBA_PTR_GET_DEFAULT(usbRuleType_, 0L) };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setUsbRuleType(int64_t usbRuleType) { DARABONBA_PTR_SET_VALUE(usbRuleType_, usbRuleType) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The device class. This parameter is required when `usbRuleType` is set to 1. For more information, see [Defined Class Codes](https://www.usb.org/defined-class-codes).
    std::shared_ptr<string> deviceClass_ = nullptr;
    // The subclass of the device. This parameter is required when `usbRuleType` is set to 1. For more information, see [Defined Class Codes](https://www.usb.org/defined-class-codes).
    std::shared_ptr<string> deviceSubclass_ = nullptr;
    // The product ID.
    std::shared_ptr<string> productId_ = nullptr;
    // Indicates whether USB redirection is allowed.
    // 
    // Valid values:
    // 
    // *   1: allowed
    // *   2: not allowed
    std::shared_ptr<int64_t> usbRedirectType_ = nullptr;
    // The type of the USB redirection rule.
    // 
    // Valid values:
    // 
    // *   1: by device class
    // *   2: by device vendor
    std::shared_ptr<int64_t> usbRuleType_ = nullptr;
    // The vendor ID (VID). For more information, see [Valid USB VIDs](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
