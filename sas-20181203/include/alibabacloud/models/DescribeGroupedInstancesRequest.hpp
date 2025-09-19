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
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->fieldValue_ != nullptr && this->groupField_ != nullptr && this->lang_ != nullptr && this->machineTypes_ != nullptr && this->noPage_ != nullptr
        && this->pageSize_ != nullptr && this->saleVersionCheckCode_ != nullptr && this->vendor_ != nullptr && this->vendors_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeGroupedInstancesRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // groupField Field Functions 
    bool hasGroupField() const { return this->groupField_ != nullptr;};
    void deleteGroupField() { this->groupField_ = nullptr;};
    inline string groupField() const { DARABONBA_PTR_GET_DEFAULT(groupField_, "") };
    inline DescribeGroupedInstancesRequest& setGroupField(string groupField) { DARABONBA_PTR_SET_VALUE(groupField_, groupField) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupedInstancesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string machineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline DescribeGroupedInstancesRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


    // noPage Field Functions 
    bool hasNoPage() const { return this->noPage_ != nullptr;};
    void deleteNoPage() { this->noPage_ = nullptr;};
    inline bool noPage() const { DARABONBA_PTR_GET_DEFAULT(noPage_, false) };
    inline DescribeGroupedInstancesRequest& setNoPage(bool noPage) { DARABONBA_PTR_SET_VALUE(noPage_, noPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupedInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // saleVersionCheckCode Field Functions 
    bool hasSaleVersionCheckCode() const { return this->saleVersionCheckCode_ != nullptr;};
    void deleteSaleVersionCheckCode() { this->saleVersionCheckCode_ = nullptr;};
    inline string saleVersionCheckCode() const { DARABONBA_PTR_GET_DEFAULT(saleVersionCheckCode_, "") };
    inline DescribeGroupedInstancesRequest& setSaleVersionCheckCode(string saleVersionCheckCode) { DARABONBA_PTR_SET_VALUE(saleVersionCheckCode_, saleVersionCheckCode) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeGroupedInstancesRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline string vendors() const { DARABONBA_PTR_GET_DEFAULT(vendors_, "") };
    inline DescribeGroupedInstancesRequest& setVendors(string vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the group to which the assets belong. Fuzzy search is supported.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The filter condition that you want to use to query the assets. Valid values:
    // 
    // *   **groupId**: the group to which the assets belong
    // *   **regionId**: the region in which the assets reside
    // *   **vpcInstanceId**: the virtual private cloud (VPC) in which the assets reside
    // 
    // This parameter is required.
    std::shared_ptr<string> groupField_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The type of the assets that you want to query. Set the value to **ecs**, which indicates Elastic Compute Service (ECS) instances.
    std::shared_ptr<string> machineTypes_ = nullptr;
    // Specifies whether to enable paged query. Default value: **true**. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> noPage_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The edition of Security Center that protects the asset. Valid values:
    // 
    // * **sas_gte_advanced**: the Advanced edition or higher
    // * **sas_gte_enterprise**: the Enterprise edition or higher
    // * **sas_gt_basic:** a paid edition
    // * **sas_eq_advanced:** the Advanced edition
    // * **sas_gt_anti_virus:** an edition higher than the Anti-virus edition
    std::shared_ptr<string> saleVersionCheckCode_ = nullptr;
    // The source of the server. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    // *   **1**: a third-party cloud server
    // *   **2**: a server in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a lightweight asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
    // The source of the server. Separate multiple sources with commas (,).Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    // *   **1**: a third-party cloud server
    // *   **2**: a server in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a lightweight asset
    std::shared_ptr<string> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
