// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFLINEMACHINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFLINEMACHINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOfflineMachinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfflineMachinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIdStr, regionIdStr_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfflineMachinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIdStr, regionIdStr_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeOfflineMachinesRequest() = default ;
    DescribeOfflineMachinesRequest(const DescribeOfflineMachinesRequest &) = default ;
    DescribeOfflineMachinesRequest(DescribeOfflineMachinesRequest &&) = default ;
    DescribeOfflineMachinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfflineMachinesRequest() = default ;
    DescribeOfflineMachinesRequest& operator=(const DescribeOfflineMachinesRequest &) = default ;
    DescribeOfflineMachinesRequest& operator=(DescribeOfflineMachinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->os_ != nullptr && this->pageSize_ != nullptr && this->regionIdStr_ != nullptr && this->regionNo_ != nullptr && this->remark_ != nullptr
        && this->sourceIp_ != nullptr && this->vendor_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOfflineMachinesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeOfflineMachinesRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOfflineMachinesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdStr Field Functions 
    bool hasRegionIdStr() const { return this->regionIdStr_ != nullptr;};
    void deleteRegionIdStr() { this->regionIdStr_ = nullptr;};
    inline string regionIdStr() const { DARABONBA_PTR_GET_DEFAULT(regionIdStr_, "") };
    inline DescribeOfflineMachinesRequest& setRegionIdStr(string regionIdStr) { DARABONBA_PTR_SET_VALUE(regionIdStr_, regionIdStr) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeOfflineMachinesRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeOfflineMachinesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeOfflineMachinesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeOfflineMachinesRequest& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The operating system of the server.
    // 
    // >  The value of this parameter is the value of the Values parameter that is returned by calling the [DescribeCriteria](~~DescribeCriteria~~) operation. If the value of the **Name** parameter in the response is **osType**, the value of the **Values** parameter indicates an operating system.
    std::shared_ptr<string> os_ = nullptr;
    // The number of entries to return on each page. Default value: **5**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region in which the server resides.
    // 
    // >  The value of this parameter is the value of the Values parameter that is returned by calling the [DescribeCriteria](~~DescribeCriteria~~) operation. If the value of the **Name** parameter in the response is **regionId**, the value of the **Values** parameter indicates a region ID.
    std::shared_ptr<string> regionIdStr_ = nullptr;
    // The region in which the server resides.
    // 
    // >  The value of this parameter is the value of the Values parameter that is returned by calling the [DescribeCriteria](~~DescribeCriteria~~) operation. If the value of the **Name** parameter in the response is **regionId**, the value of the **Values** parameter indicates a region ID.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The information about the server that you want to query. The value can be the name or the public IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The source of the server. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    // *   **1**: a third-party cloud server
    // *   **2**: a server in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a lightweight asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
