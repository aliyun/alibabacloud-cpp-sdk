// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAEGISMACHINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAEGISMACHINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUninstallAegisMachinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallAegisMachinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIdStr, regionIdStr_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallAegisMachinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIdStr, regionIdStr_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListUninstallAegisMachinesRequest() = default ;
    ListUninstallAegisMachinesRequest(const ListUninstallAegisMachinesRequest &) = default ;
    ListUninstallAegisMachinesRequest(ListUninstallAegisMachinesRequest &&) = default ;
    ListUninstallAegisMachinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallAegisMachinesRequest() = default ;
    ListUninstallAegisMachinesRequest& operator=(const ListUninstallAegisMachinesRequest &) = default ;
    ListUninstallAegisMachinesRequest& operator=(ListUninstallAegisMachinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->os_ == nullptr && this->pageSize_ == nullptr && this->regionIdStr_ == nullptr && this->regionNo_ == nullptr && this->remark_ == nullptr
        && this->sourceIp_ == nullptr && this->vendor_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUninstallAegisMachinesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline ListUninstallAegisMachinesRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUninstallAegisMachinesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdStr Field Functions 
    bool hasRegionIdStr() const { return this->regionIdStr_ != nullptr;};
    void deleteRegionIdStr() { this->regionIdStr_ = nullptr;};
    inline string getRegionIdStr() const { DARABONBA_PTR_GET_DEFAULT(regionIdStr_, "") };
    inline ListUninstallAegisMachinesRequest& setRegionIdStr(string regionIdStr) { DARABONBA_PTR_SET_VALUE(regionIdStr_, regionIdStr) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline ListUninstallAegisMachinesRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListUninstallAegisMachinesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ListUninstallAegisMachinesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListUninstallAegisMachinesRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The page number of the first page to display in the query results. Default value: **1**, which indicates that the query results are displayed from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The operating system.
    // > You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to obtain supported operating systems from the **Values** of the item whose **Name** is **osType**.
    shared_ptr<string> os_ {};
    // The number of entries per page in a paged query. Default value: **5**, which indicates that 5 entries are displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region where the server resides.
    // 
    // > You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to obtain supported regions from the **Values** of the item whose **Name** is **regionId**.
    shared_ptr<string> regionIdStr_ {};
    // The region where the server resides.
    // 
    // > You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to obtain supported regions from the **Values** of the item whose **Name** is **regionId**.
    shared_ptr<string> regionNo_ {};
    // The asset information to query. You can set this parameter to the asset name or public IP address.
    shared_ptr<string> remark_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The server vendor. Valid values:
    // 
    // - **0**: Alibaba Cloud asset
    // - **1**: non-cloud asset
    // - **2**: IDC asset
    // - **3**, **4**, **5**, **7**: third-party cloud asset
    // - **8**: lightweight asset.
    shared_ptr<int32_t> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
