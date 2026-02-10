// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorAccountAKListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorAccountAKListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthIds, authIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubAccountName, subAccountName_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorAccountAKListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthIds, authIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubAccountName, subAccountName_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
    };
    DescribeCloudVendorAccountAKListRequest() = default ;
    DescribeCloudVendorAccountAKListRequest(const DescribeCloudVendorAccountAKListRequest &) = default ;
    DescribeCloudVendorAccountAKListRequest(DescribeCloudVendorAccountAKListRequest &&) = default ;
    DescribeCloudVendorAccountAKListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorAccountAKListRequest() = default ;
    DescribeCloudVendorAccountAKListRequest& operator=(const DescribeCloudVendorAccountAKListRequest &) = default ;
    DescribeCloudVendorAccountAKListRequest& operator=(DescribeCloudVendorAccountAKListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authIds_ == nullptr
        && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->subAccountName_ == nullptr
        && this->vendor_ == nullptr && this->vendorAuthAlias_ == nullptr; };
    // authIds Field Functions 
    bool hasAuthIds() const { return this->authIds_ != nullptr;};
    void deleteAuthIds() { this->authIds_ = nullptr;};
    inline string getAuthIds() const { DARABONBA_PTR_GET_DEFAULT(authIds_, "") };
    inline DescribeCloudVendorAccountAKListRequest& setAuthIds(string authIds) { DARABONBA_PTR_SET_VALUE(authIds_, authIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCloudVendorAccountAKListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCloudVendorAccountAKListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudVendorAccountAKListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCloudVendorAccountAKListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subAccountName Field Functions 
    bool hasSubAccountName() const { return this->subAccountName_ != nullptr;};
    void deleteSubAccountName() { this->subAccountName_ = nullptr;};
    inline string getSubAccountName() const { DARABONBA_PTR_GET_DEFAULT(subAccountName_, "") };
    inline DescribeCloudVendorAccountAKListRequest& setSubAccountName(string subAccountName) { DARABONBA_PTR_SET_VALUE(subAccountName_, subAccountName) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeCloudVendorAccountAKListRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorAuthAlias Field Functions 
    bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
    void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
    inline string getVendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
    inline DescribeCloudVendorAccountAKListRequest& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


  protected:
    // The unique ID of the AccessKey pair.
    shared_ptr<string> authIds_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The status of the AccessKey pair. Valid values:
    // 
    // *   **0**: enabled
    // *   **1**: disabled
    shared_ptr<int32_t> status_ {};
    // The username of the sub-account of the cloud service provider to which the AccessKey pair belongs.
    shared_ptr<string> subAccountName_ {};
    shared_ptr<string> vendor_ {};
    // The name of the AccessKey pair.
    shared_ptr<string> vendorAuthAlias_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
