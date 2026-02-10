// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedStatisticsDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedStatisticsDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatisticsDetails, statisticsDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedStatisticsDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatisticsDetails, statisticsDetails_);
    };
    DescribeExposedStatisticsDetailResponseBody() = default ;
    DescribeExposedStatisticsDetailResponseBody(const DescribeExposedStatisticsDetailResponseBody &) = default ;
    DescribeExposedStatisticsDetailResponseBody(DescribeExposedStatisticsDetailResponseBody &&) = default ;
    DescribeExposedStatisticsDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedStatisticsDetailResponseBody() = default ;
    DescribeExposedStatisticsDetailResponseBody& operator=(const DescribeExposedStatisticsDetailResponseBody &) = default ;
    DescribeExposedStatisticsDetailResponseBody& operator=(DescribeExposedStatisticsDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatisticsDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatisticsDetails& obj) { 
        DARABONBA_PTR_TO_JSON(ExposedCount, exposedCount_);
        DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
        DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
        DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
        DARABONBA_PTR_TO_JSON(ExposureType, exposureType_);
        DARABONBA_PTR_TO_JSON(ExposureTypeId, exposureTypeId_);
        DARABONBA_PTR_TO_JSON(ExposureTypeInstanceName, exposureTypeInstanceName_);
        DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, StatisticsDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(ExposedCount, exposedCount_);
        DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
        DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
        DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
        DARABONBA_PTR_FROM_JSON(ExposureType, exposureType_);
        DARABONBA_PTR_FROM_JSON(ExposureTypeId, exposureTypeId_);
        DARABONBA_PTR_FROM_JSON(ExposureTypeInstanceName, exposureTypeInstanceName_);
        DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      StatisticsDetails() = default ;
      StatisticsDetails(const StatisticsDetails &) = default ;
      StatisticsDetails(StatisticsDetails &&) = default ;
      StatisticsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatisticsDetails() = default ;
      StatisticsDetails& operator=(const StatisticsDetails &) = default ;
      StatisticsDetails& operator=(StatisticsDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exposedCount_ == nullptr
        && this->exposureComponent_ == nullptr && this->exposureIp_ == nullptr && this->exposurePort_ == nullptr && this->exposureType_ == nullptr && this->exposureTypeId_ == nullptr
        && this->exposureTypeInstanceName_ == nullptr && this->forwardPort_ == nullptr && this->regionId_ == nullptr; };
      // exposedCount Field Functions 
      bool hasExposedCount() const { return this->exposedCount_ != nullptr;};
      void deleteExposedCount() { this->exposedCount_ = nullptr;};
      inline int32_t getExposedCount() const { DARABONBA_PTR_GET_DEFAULT(exposedCount_, 0) };
      inline StatisticsDetails& setExposedCount(int32_t exposedCount) { DARABONBA_PTR_SET_VALUE(exposedCount_, exposedCount) };


      // exposureComponent Field Functions 
      bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
      void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
      inline string getExposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
      inline StatisticsDetails& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


      // exposureIp Field Functions 
      bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
      void deleteExposureIp() { this->exposureIp_ = nullptr;};
      inline string getExposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
      inline StatisticsDetails& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


      // exposurePort Field Functions 
      bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
      void deleteExposurePort() { this->exposurePort_ = nullptr;};
      inline string getExposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
      inline StatisticsDetails& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


      // exposureType Field Functions 
      bool hasExposureType() const { return this->exposureType_ != nullptr;};
      void deleteExposureType() { this->exposureType_ = nullptr;};
      inline string getExposureType() const { DARABONBA_PTR_GET_DEFAULT(exposureType_, "") };
      inline StatisticsDetails& setExposureType(string exposureType) { DARABONBA_PTR_SET_VALUE(exposureType_, exposureType) };


      // exposureTypeId Field Functions 
      bool hasExposureTypeId() const { return this->exposureTypeId_ != nullptr;};
      void deleteExposureTypeId() { this->exposureTypeId_ = nullptr;};
      inline string getExposureTypeId() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeId_, "") };
      inline StatisticsDetails& setExposureTypeId(string exposureTypeId) { DARABONBA_PTR_SET_VALUE(exposureTypeId_, exposureTypeId) };


      // exposureTypeInstanceName Field Functions 
      bool hasExposureTypeInstanceName() const { return this->exposureTypeInstanceName_ != nullptr;};
      void deleteExposureTypeInstanceName() { this->exposureTypeInstanceName_ = nullptr;};
      inline string getExposureTypeInstanceName() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeInstanceName_, "") };
      inline StatisticsDetails& setExposureTypeInstanceName(string exposureTypeInstanceName) { DARABONBA_PTR_SET_VALUE(exposureTypeInstanceName_, exposureTypeInstanceName) };


      // forwardPort Field Functions 
      bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
      void deleteForwardPort() { this->forwardPort_ = nullptr;};
      inline string getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, "") };
      inline StatisticsDetails& setForwardPort(string forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline StatisticsDetails& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The total number of system vulnerabilities that are detected on your server and are exposed on the Internet.
      shared_ptr<int32_t> exposedCount_ {};
      // The system component that is exposed on the Internet.
      shared_ptr<string> exposureComponent_ {};
      // The public IP address that is exposed on the Internet.
      shared_ptr<string> exposureIp_ {};
      // The port that is exposed on the Internet.
      shared_ptr<string> exposurePort_ {};
      // The resource from which the asset is exposed. Valid values:
      // 
      // *   **INTERNET_IP**: the IP address of the Elastic Compute Service (ECS) instance
      // *   **SLB**: the public IP address of the SLB instance
      // *   **EIP**: the elastic IP address (EIP)
      // *   **DNAT**: the NAT gateway that connects to the Internet by using the DNAT feature
      shared_ptr<string> exposureType_ {};
      // The ID of the instance to which the resource belongs. The valid values of this parameter vary based on the value of the ExposureType parameter.
      // 
      // *   If the value of the **ExposureType** parameter is **INTERNET_IP**, the value of this parameter is an empty string.
      // *   If the value of the **ExposureType** parameter is **SLB**, the value of this parameter is the ID of the Internet-facing SLB instance.
      // *   If the value of the **ExposureType** parameter is **EIP**, the value of this parameter is the ID of the EIP.
      // *   If the value of the **ExposureType** parameter is **DNAT**, the value of this parameter is the ID of the NAT gateway.
      shared_ptr<string> exposureTypeId_ {};
      // The name of the gateway asset that is exposed on the Internet.
      shared_ptr<string> exposureTypeInstanceName_ {};
      // The listener port that is used to redirect HTTP requests.
      shared_ptr<string> forwardPort_ {};
      // The region ID of the asset.
      shared_ptr<string> regionId_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->statisticsDetails_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeExposedStatisticsDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeExposedStatisticsDetailResponseBody::PageInfo) };
    inline DescribeExposedStatisticsDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeExposedStatisticsDetailResponseBody::PageInfo) };
    inline DescribeExposedStatisticsDetailResponseBody& setPageInfo(const DescribeExposedStatisticsDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeExposedStatisticsDetailResponseBody& setPageInfo(DescribeExposedStatisticsDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedStatisticsDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statisticsDetails Field Functions 
    bool hasStatisticsDetails() const { return this->statisticsDetails_ != nullptr;};
    void deleteStatisticsDetails() { this->statisticsDetails_ = nullptr;};
    inline const vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails> & getStatisticsDetails() const { DARABONBA_PTR_GET_CONST(statisticsDetails_, vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails>) };
    inline vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails> getStatisticsDetails() { DARABONBA_PTR_GET(statisticsDetails_, vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails>) };
    inline DescribeExposedStatisticsDetailResponseBody& setStatisticsDetails(const vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails> & statisticsDetails) { DARABONBA_PTR_SET_VALUE(statisticsDetails_, statisticsDetails) };
    inline DescribeExposedStatisticsDetailResponseBody& setStatisticsDetails(vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails> && statisticsDetails) { DARABONBA_PTR_SET_RVALUE(statisticsDetails_, statisticsDetails) };


  protected:
    // The pagination information.
    shared_ptr<DescribeExposedStatisticsDetailResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array consisting of the gateway assets, ports, system components, or public IP addresses that are exposed on the Internet and are returned.
    shared_ptr<vector<DescribeExposedStatisticsDetailResponseBody::StatisticsDetails>> statisticsDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
