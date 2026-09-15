// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(GroupField, groupField_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(NoPage, noPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SaleVersionCheckCode, saleVersionCheckCode_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(GroupField, groupField_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(NoPage, noPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SaleVersionCheckCode, saleVersionCheckCode_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    DescribeGroupedInstancesRequest() = default ;
    DescribeGroupedInstancesRequest(const DescribeGroupedInstancesRequest &) = default ;
    DescribeGroupedInstancesRequest(DescribeGroupedInstancesRequest &&) = default ;
    DescribeGroupedInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedInstancesRequest() = default ;
    DescribeGroupedInstancesRequest& operator=(const DescribeGroupedInstancesRequest &) = default ;
    DescribeGroupedInstancesRequest& operator=(DescribeGroupedInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->fieldValue_ == nullptr && this->groupField_ == nullptr && this->lang_ == nullptr && this->machineTypes_ == nullptr && this->noPage_ == nullptr
        && this->pageSize_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->saleVersionCheckCode_ == nullptr && this->vendor_ == nullptr && this->vendors_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeGroupedInstancesRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // groupField Field Functions 
    bool hasGroupField() const { return this->groupField_ != nullptr;};
    void deleteGroupField() { this->groupField_ = nullptr;};
    inline string getGroupField() const { DARABONBA_PTR_GET_DEFAULT(groupField_, "") };
    inline DescribeGroupedInstancesRequest& setGroupField(string groupField) { DARABONBA_PTR_SET_VALUE(groupField_, groupField) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupedInstancesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string getMachineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline DescribeGroupedInstancesRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


    // noPage Field Functions 
    bool hasNoPage() const { return this->noPage_ != nullptr;};
    void deleteNoPage() { this->noPage_ = nullptr;};
    inline bool getNoPage() const { DARABONBA_PTR_GET_DEFAULT(noPage_, false) };
    inline DescribeGroupedInstancesRequest& setNoPage(bool noPage) { DARABONBA_PTR_SET_VALUE(noPage_, noPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupedInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeGroupedInstancesRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // saleVersionCheckCode Field Functions 
    bool hasSaleVersionCheckCode() const { return this->saleVersionCheckCode_ != nullptr;};
    void deleteSaleVersionCheckCode() { this->saleVersionCheckCode_ = nullptr;};
    inline string getSaleVersionCheckCode() const { DARABONBA_PTR_GET_DEFAULT(saleVersionCheckCode_, "") };
    inline DescribeGroupedInstancesRequest& setSaleVersionCheckCode(string saleVersionCheckCode) { DARABONBA_PTR_SET_VALUE(saleVersionCheckCode_, saleVersionCheckCode) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeGroupedInstancesRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline string getVendors() const { DARABONBA_PTR_GET_DEFAULT(vendors_, "") };
    inline DescribeGroupedInstancesRequest& setVendors(string vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };


  protected:
    // The page number of the first page to return. Default value: **1**, which indicates that the query results are returned starting from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the asset group to query. Fuzzy match is supported.
    shared_ptr<string> fieldValue_ {};
    // The filter condition for querying assets. Valid values:
    // 
    // - **groupId**: queries assets by asset group.
    // - **regionId**: queries assets by region.
    // - **vpcInstanceId**: queries assets by virtual private cloud (VPC).
    // 
    // This parameter is required.
    shared_ptr<string> groupField_ {};
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The type of assets to query. Set the value to **ecs**, which indicates Elastic Compute Service (ECS) instances.
    shared_ptr<string> machineTypes_ {};
    // Settings for whether to enable paged query. Default value: **true**. Valid values:
    // - **true**: Paged query is enabled.
    // - **false**: Paged query is disabled. Paging is not performed.
    shared_ptr<bool> noPage_ {};
    // The number of entries per page in a paged query. Default value: **20**, which indicates that 20 entries of asset information are displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the Alibaba Cloud account that is added as a member of a resource folder for member accounts.
    // >Invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The edition-based filter condition for querying assets. Valid values:
    // 
    // - **sas_gte_advanced**: Advanced Edition or higher
    // - **sas_gte_enterprise**: Enterprise Edition or higher
    // - **sas_gt_basic**: paid edition
    // - **sas_eq_advanced**: Advanced Edition
    // - **sas_gt_anti_virus**: higher than Anti-virus Edition
    shared_ptr<string> saleVersionCheckCode_ {};
    // The server vendor. Valid values:
    // 
    // - **0**: Alibaba Cloud asset
    // - **1**: non-cloud asset
    // - **2**: IDC asset
    // - **3**, **4**, **5**, **7**: third-party cloud asset
    // - **8**: lightweight asset
    shared_ptr<int32_t> vendor_ {};
    // The server vendors. Separate multiple vendors with commas (,). Valid values:
    // 
    // - **0**: Alibaba Cloud asset
    // - **1**: non-cloud asset
    // - **2**: IDC asset
    // - **3**, **4**, **5**, **7**: third-party cloud asset
    // - **8**: lightweight asset
    shared_ptr<string> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
