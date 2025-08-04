// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPSUSBSUPPLYREDIRECTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODYDESCRIBEPOLICYGROUPSUSBSUPPLYREDIRECTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_TO_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(UsbRedirectType, usbRedirectType_);
      DARABONBA_PTR_FROM_JSON(UsbRuleType, usbRuleType_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule(const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule(DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &&) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule() = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& operator=(const DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &) = default ;
    DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& operator=(DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->productId_ != nullptr && this->usbRedirectType_ != nullptr && this->usbRuleType_ != nullptr && this->vendorId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // usbRedirectType Field Functions 
    bool hasUsbRedirectType() const { return this->usbRedirectType_ != nullptr;};
    void deleteUsbRedirectType() { this->usbRedirectType_ = nullptr;};
    inline int64_t usbRedirectType() const { DARABONBA_PTR_GET_DEFAULT(usbRedirectType_, 0L) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setUsbRedirectType(int64_t usbRedirectType) { DARABONBA_PTR_SET_VALUE(usbRedirectType_, usbRedirectType) };


    // usbRuleType Field Functions 
    bool hasUsbRuleType() const { return this->usbRuleType_ != nullptr;};
    void deleteUsbRuleType() { this->usbRuleType_ = nullptr;};
    inline int64_t usbRuleType() const { DARABONBA_PTR_GET_DEFAULT(usbRuleType_, 0L) };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setUsbRuleType(int64_t usbRuleType) { DARABONBA_PTR_SET_VALUE(usbRuleType_, usbRuleType) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline DescribeCenterPolicyListResponseBodyDescribePolicyGroupsUsbSupplyRedirectRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The product ID (PID).
    std::shared_ptr<string> productId_ = nullptr;
    // Indicates whether USB redirection is allowed.
    std::shared_ptr<int64_t> usbRedirectType_ = nullptr;
    // The type of the USB redirection rule.
    std::shared_ptr<int64_t> usbRuleType_ = nullptr;
    // The vendor ID (VID). For more information, see [Valid USB Vendor IDs (VIDs)](https://www.usb.org/sites/default/files/vendor_ids032322.pdf_1.pdf).
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
