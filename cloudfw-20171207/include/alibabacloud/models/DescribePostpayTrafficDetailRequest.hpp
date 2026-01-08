// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayTrafficDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayTrafficDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(SearchItem, searchItem_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayTrafficDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(SearchItem, searchItem_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
    };
    DescribePostpayTrafficDetailRequest() = default ;
    DescribePostpayTrafficDetailRequest(const DescribePostpayTrafficDetailRequest &) = default ;
    DescribePostpayTrafficDetailRequest(DescribePostpayTrafficDetailRequest &&) = default ;
    DescribePostpayTrafficDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayTrafficDetailRequest() = default ;
    DescribePostpayTrafficDetailRequest& operator=(const DescribePostpayTrafficDetailRequest &) = default ;
    DescribePostpayTrafficDetailRequest& operator=(DescribePostpayTrafficDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->order_ == nullptr && this->pageSize_ == nullptr && this->regionNo_ == nullptr
        && this->searchItem_ == nullptr && this->startTime_ == nullptr && this->trafficType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribePostpayTrafficDetailRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePostpayTrafficDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePostpayTrafficDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribePostpayTrafficDetailRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePostpayTrafficDetailRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePostpayTrafficDetailRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string getSearchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline DescribePostpayTrafficDetailRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePostpayTrafficDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline string getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
    inline DescribePostpayTrafficDetailRequest& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int64_t> currentPage_ {};
    // The end of the time range to query. Specify a value in the YYYYMMDD format.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The field based on which you want to sort the query results. Valid values:
    // 
    // *   **resourceId**
    // *   **trafficDay**
    shared_ptr<string> order_ {};
    // The number of entries per page. Default value: 10. Maximum value: 50.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionNo_ {};
    // The instance ID or the IP address of the asset.
    shared_ptr<string> searchItem_ {};
    // The beginning of the time range to query. Specify a value in the YYYYMMDD format.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The traffic type. This parameter is required. Valid values:
    // 
    // *   **EIP_TRAFFIC**: traffic for the Internet firewall.
    // *   **NatGateway_TRAFFIC**: traffic for NAT firewalls.
    // *   **VPC_TRAFFIC**: traffic for virtual private cloud (VPC) firewalls.
    // 
    // This parameter is required.
    shared_ptr<string> trafficType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
