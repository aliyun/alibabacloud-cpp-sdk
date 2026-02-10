// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBELISTRESPONSEBODY_HPP_
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
  class DescribeIdcProbeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdcProbes, idcProbes_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdcProbes, idcProbes_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIdcProbeListResponseBody() = default ;
    DescribeIdcProbeListResponseBody(const DescribeIdcProbeListResponseBody &) = default ;
    DescribeIdcProbeListResponseBody(DescribeIdcProbeListResponseBody &&) = default ;
    DescribeIdcProbeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeListResponseBody() = default ;
    DescribeIdcProbeListResponseBody& operator=(const DescribeIdcProbeListResponseBody &) = default ;
    DescribeIdcProbeListResponseBody& operator=(DescribeIdcProbeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The number of data entries displayed on the current page in a paginated query.
      shared_ptr<int32_t> count_ {};
      // The page number in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of data entries to display per page in a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    class IdcProbes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdcProbes& obj) { 
        DARABONBA_PTR_TO_JSON(IdcName, idcName_);
        DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntervalPeriod, intervalPeriod_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(IpSegments, ipSegments_);
        DARABONBA_PTR_TO_JSON(LinuxPort, linuxPort_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(WinPort, winPort_);
      };
      friend void from_json(const Darabonba::Json& j, IdcProbes& obj) { 
        DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
        DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntervalPeriod, intervalPeriod_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(IpSegments, ipSegments_);
        DARABONBA_PTR_FROM_JSON(LinuxPort, linuxPort_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(WinPort, winPort_);
      };
      IdcProbes() = default ;
      IdcProbes(const IdcProbes &) = default ;
      IdcProbes(IdcProbes &&) = default ;
      IdcProbes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdcProbes() = default ;
      IdcProbes& operator=(const IdcProbes &) = default ;
      IdcProbes& operator=(IdcProbes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->idcName_ == nullptr
        && this->idcRegion_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intervalPeriod_ == nullptr
        && this->intranetIp_ == nullptr && this->ipSegments_ == nullptr && this->linuxPort_ == nullptr && this->periodUnit_ == nullptr && this->serviceStatus_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr && this->winPort_ == nullptr; };
      // idcName Field Functions 
      bool hasIdcName() const { return this->idcName_ != nullptr;};
      void deleteIdcName() { this->idcName_ = nullptr;};
      inline string getIdcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
      inline IdcProbes& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


      // idcRegion Field Functions 
      bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
      void deleteIdcRegion() { this->idcRegion_ = nullptr;};
      inline string getIdcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
      inline IdcProbes& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IdcProbes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline IdcProbes& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline IdcProbes& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intervalPeriod Field Functions 
      bool hasIntervalPeriod() const { return this->intervalPeriod_ != nullptr;};
      void deleteIntervalPeriod() { this->intervalPeriod_ = nullptr;};
      inline int32_t getIntervalPeriod() const { DARABONBA_PTR_GET_DEFAULT(intervalPeriod_, 0) };
      inline IdcProbes& setIntervalPeriod(int32_t intervalPeriod) { DARABONBA_PTR_SET_VALUE(intervalPeriod_, intervalPeriod) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline IdcProbes& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ipSegments Field Functions 
      bool hasIpSegments() const { return this->ipSegments_ != nullptr;};
      void deleteIpSegments() { this->ipSegments_ = nullptr;};
      inline string getIpSegments() const { DARABONBA_PTR_GET_DEFAULT(ipSegments_, "") };
      inline IdcProbes& setIpSegments(string ipSegments) { DARABONBA_PTR_SET_VALUE(ipSegments_, ipSegments) };


      // linuxPort Field Functions 
      bool hasLinuxPort() const { return this->linuxPort_ != nullptr;};
      void deleteLinuxPort() { this->linuxPort_ = nullptr;};
      inline string getLinuxPort() const { DARABONBA_PTR_GET_DEFAULT(linuxPort_, "") };
      inline IdcProbes& setLinuxPort(string linuxPort) { DARABONBA_PTR_SET_VALUE(linuxPort_, linuxPort) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline IdcProbes& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline int32_t getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
      inline IdcProbes& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline IdcProbes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline IdcProbes& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // winPort Field Functions 
      bool hasWinPort() const { return this->winPort_ != nullptr;};
      void deleteWinPort() { this->winPort_ = nullptr;};
      inline string getWinPort() const { DARABONBA_PTR_GET_DEFAULT(winPort_, "") };
      inline IdcProbes& setWinPort(string winPort) { DARABONBA_PTR_SET_VALUE(winPort_, winPort) };


    protected:
      // IDC data center name.
      shared_ptr<string> idcName_ {};
      // Region.
      shared_ptr<string> idcRegion_ {};
      // Instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // Instance name.
      shared_ptr<string> instanceName_ {};
      // Public IP address.
      shared_ptr<string> internetIp_ {};
      // Scan period.
      shared_ptr<int32_t> intervalPeriod_ {};
      // Private IP of the instance.
      shared_ptr<string> intranetIp_ {};
      // IP segment range.
      shared_ptr<string> ipSegments_ {};
      // Linux port.
      shared_ptr<string> linuxPort_ {};
      // The unit of the scan period, with values:
      // - **day**: day.
      // - **hour**: hour.
      shared_ptr<string> periodUnit_ {};
      // Probe service status. Values:
      // 
      // - **0**: Active
      // - **1**: Inactive
      shared_ptr<int32_t> serviceStatus_ {};
      // Probe status. Values:
      // 
      // - **0**: Enabled
      // - **1**: Disabled
      shared_ptr<int32_t> status_ {};
      // Server UUID.
      shared_ptr<string> uuid_ {};
      // Windows port.
      shared_ptr<string> winPort_ {};
    };

    virtual bool empty() const override { return this->idcProbes_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // idcProbes Field Functions 
    bool hasIdcProbes() const { return this->idcProbes_ != nullptr;};
    void deleteIdcProbes() { this->idcProbes_ = nullptr;};
    inline const vector<DescribeIdcProbeListResponseBody::IdcProbes> & getIdcProbes() const { DARABONBA_PTR_GET_CONST(idcProbes_, vector<DescribeIdcProbeListResponseBody::IdcProbes>) };
    inline vector<DescribeIdcProbeListResponseBody::IdcProbes> getIdcProbes() { DARABONBA_PTR_GET(idcProbes_, vector<DescribeIdcProbeListResponseBody::IdcProbes>) };
    inline DescribeIdcProbeListResponseBody& setIdcProbes(const vector<DescribeIdcProbeListResponseBody::IdcProbes> & idcProbes) { DARABONBA_PTR_SET_VALUE(idcProbes_, idcProbes) };
    inline DescribeIdcProbeListResponseBody& setIdcProbes(vector<DescribeIdcProbeListResponseBody::IdcProbes> && idcProbes) { DARABONBA_PTR_SET_RVALUE(idcProbes_, idcProbes) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeIdcProbeListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeIdcProbeListResponseBody::PageInfo) };
    inline DescribeIdcProbeListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeIdcProbeListResponseBody::PageInfo) };
    inline DescribeIdcProbeListResponseBody& setPageInfo(const DescribeIdcProbeListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeIdcProbeListResponseBody& setPageInfo(DescribeIdcProbeListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIdcProbeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // IDC probe list.
    shared_ptr<vector<DescribeIdcProbeListResponseBody::IdcProbes>> idcProbes_ {};
    // Pagination information.
    shared_ptr<DescribeIdcProbeListResponseBody::PageInfo> pageInfo_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
