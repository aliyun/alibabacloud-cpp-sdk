// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeEnsRegionIdResourceRequest() = default ;
    DescribeEnsRegionIdResourceRequest(const DescribeEnsRegionIdResourceRequest &) = default ;
    DescribeEnsRegionIdResourceRequest(DescribeEnsRegionIdResourceRequest &&) = default ;
    DescribeEnsRegionIdResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdResourceRequest() = default ;
    DescribeEnsRegionIdResourceRequest& operator=(const DescribeEnsRegionIdResourceRequest &) = default ;
    DescribeEnsRegionIdResourceRequest& operator=(DescribeEnsRegionIdResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->isp_ == nullptr && this->orderByParams_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEnsRegionIdResourceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeEnsRegionIdResourceRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // orderByParams Field Functions 
    bool hasOrderByParams() const { return this->orderByParams_ != nullptr;};
    void deleteOrderByParams() { this->orderByParams_ = nullptr;};
    inline string getOrderByParams() const { DARABONBA_PTR_GET_DEFAULT(orderByParams_, "") };
    inline DescribeEnsRegionIdResourceRequest& setOrderByParams(string orderByParams) { DARABONBA_PTR_SET_VALUE(orderByParams_, orderByParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRegionIdResourceRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeEnsRegionIdResourceRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEnsRegionIdResourceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The Internet service provider (ISP). Valid values:
    // 
    // *   cmcc: China Mobile
    // *   telecom: China Telecom
    // *   unicom: China Unicom
    // *   multiCarrier: multi-line ISP
    shared_ptr<string> isp_ {};
    // The order in which the resources to return are sorted. Valid values:
    // 
    // *   InstanceCount: desc
    // *   Area: asc
    // *   InternetBandwidth: asc
    shared_ptr<string> orderByParams_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **100**. Default value: **10**.
    shared_ptr<string> pageSize_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
