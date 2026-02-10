// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORPRODUCTTEMPLATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORPRODUCTTEMPLATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorProductTemplateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorProductTemplateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorProductTemplateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeCloudVendorProductTemplateConfigRequest() = default ;
    DescribeCloudVendorProductTemplateConfigRequest(const DescribeCloudVendorProductTemplateConfigRequest &) = default ;
    DescribeCloudVendorProductTemplateConfigRequest(DescribeCloudVendorProductTemplateConfigRequest &&) = default ;
    DescribeCloudVendorProductTemplateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorProductTemplateConfigRequest() = default ;
    DescribeCloudVendorProductTemplateConfigRequest& operator=(const DescribeCloudVendorProductTemplateConfigRequest &) = default ;
    DescribeCloudVendorProductTemplateConfigRequest& operator=(DescribeCloudVendorProductTemplateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->vendor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCloudVendorProductTemplateConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeCloudVendorProductTemplateConfigRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Set the language type for request and response messages, default is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Cloud asset vendor. Values:
    // - **CHAITIN**: Chaitin Technology
    // - **FORTINET**: Fortinet
    // - **THREATBOOK**: ThreatBook
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
