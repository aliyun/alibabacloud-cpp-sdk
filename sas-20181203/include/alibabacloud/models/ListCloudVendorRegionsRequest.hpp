// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDVENDORREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDVENDORREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudVendorRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudVendorRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudVendorRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListCloudVendorRegionsRequest() = default ;
    ListCloudVendorRegionsRequest(const ListCloudVendorRegionsRequest &) = default ;
    ListCloudVendorRegionsRequest(ListCloudVendorRegionsRequest &&) = default ;
    ListCloudVendorRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudVendorRegionsRequest() = default ;
    ListCloudVendorRegionsRequest& operator=(const ListCloudVendorRegionsRequest &) = default ;
    ListCloudVendorRegionsRequest& operator=(ListCloudVendorRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->vendor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCloudVendorRegionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListCloudVendorRegionsRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The language of the content in the request and response messages. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The service provider of cloud assets. Valid values:
    // 
    // *   **Tencent**, **HUAWEICLOUD**, **Azure**, and **AWS**: other service providers of cloud assets.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
