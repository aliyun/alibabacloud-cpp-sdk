// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTRESPONSEBODY_HPP_
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
  class DescribeIdcProbeScanResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeScanResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeScanResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIdcProbeScanResultListResponseBody() = default ;
    DescribeIdcProbeScanResultListResponseBody(const DescribeIdcProbeScanResultListResponseBody &) = default ;
    DescribeIdcProbeScanResultListResponseBody(DescribeIdcProbeScanResultListResponseBody &&) = default ;
    DescribeIdcProbeScanResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeScanResultListResponseBody() = default ;
    DescribeIdcProbeScanResultListResponseBody& operator=(const DescribeIdcProbeScanResultListResponseBody &) = default ;
    DescribeIdcProbeScanResultListResponseBody& operator=(DescribeIdcProbeScanResultListResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_TO_JSON(IdcName, idcName_);
        DARABONBA_PTR_TO_JSON(IpSegment, ipSegment_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(ProbeInternetIp, probeInternetIp_);
        DARABONBA_PTR_TO_JSON(ProbeIntranetIp, probeIntranetIp_);
        DARABONBA_PTR_TO_JSON(ProbeMachineName, probeMachineName_);
        DARABONBA_PTR_TO_JSON(ProbeUuid, probeUuid_);
        DARABONBA_PTR_TO_JSON(ScanResultId, scanResultId_);
        DARABONBA_PTR_TO_JSON(ScannedIp, scannedIp_);
        DARABONBA_PTR_TO_JSON(ValidPort, validPort_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
        DARABONBA_PTR_FROM_JSON(IpSegment, ipSegment_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(ProbeInternetIp, probeInternetIp_);
        DARABONBA_PTR_FROM_JSON(ProbeIntranetIp, probeIntranetIp_);
        DARABONBA_PTR_FROM_JSON(ProbeMachineName, probeMachineName_);
        DARABONBA_PTR_FROM_JSON(ProbeUuid, probeUuid_);
        DARABONBA_PTR_FROM_JSON(ScanResultId, scanResultId_);
        DARABONBA_PTR_FROM_JSON(ScannedIp, scannedIp_);
        DARABONBA_PTR_FROM_JSON(ValidPort, validPort_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientStatus_ == nullptr
        && this->idcName_ == nullptr && this->ipSegment_ == nullptr && this->lastScanTime_ == nullptr && this->os_ == nullptr && this->probeInternetIp_ == nullptr
        && this->probeIntranetIp_ == nullptr && this->probeMachineName_ == nullptr && this->probeUuid_ == nullptr && this->scanResultId_ == nullptr && this->scannedIp_ == nullptr
        && this->validPort_ == nullptr; };
      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline Instances& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // idcName Field Functions 
      bool hasIdcName() const { return this->idcName_ != nullptr;};
      void deleteIdcName() { this->idcName_ = nullptr;};
      inline string getIdcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
      inline Instances& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


      // ipSegment Field Functions 
      bool hasIpSegment() const { return this->ipSegment_ != nullptr;};
      void deleteIpSegment() { this->ipSegment_ = nullptr;};
      inline string getIpSegment() const { DARABONBA_PTR_GET_DEFAULT(ipSegment_, "") };
      inline Instances& setIpSegment(string ipSegment) { DARABONBA_PTR_SET_VALUE(ipSegment_, ipSegment) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline Instances& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Instances& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // probeInternetIp Field Functions 
      bool hasProbeInternetIp() const { return this->probeInternetIp_ != nullptr;};
      void deleteProbeInternetIp() { this->probeInternetIp_ = nullptr;};
      inline string getProbeInternetIp() const { DARABONBA_PTR_GET_DEFAULT(probeInternetIp_, "") };
      inline Instances& setProbeInternetIp(string probeInternetIp) { DARABONBA_PTR_SET_VALUE(probeInternetIp_, probeInternetIp) };


      // probeIntranetIp Field Functions 
      bool hasProbeIntranetIp() const { return this->probeIntranetIp_ != nullptr;};
      void deleteProbeIntranetIp() { this->probeIntranetIp_ = nullptr;};
      inline string getProbeIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(probeIntranetIp_, "") };
      inline Instances& setProbeIntranetIp(string probeIntranetIp) { DARABONBA_PTR_SET_VALUE(probeIntranetIp_, probeIntranetIp) };


      // probeMachineName Field Functions 
      bool hasProbeMachineName() const { return this->probeMachineName_ != nullptr;};
      void deleteProbeMachineName() { this->probeMachineName_ = nullptr;};
      inline string getProbeMachineName() const { DARABONBA_PTR_GET_DEFAULT(probeMachineName_, "") };
      inline Instances& setProbeMachineName(string probeMachineName) { DARABONBA_PTR_SET_VALUE(probeMachineName_, probeMachineName) };


      // probeUuid Field Functions 
      bool hasProbeUuid() const { return this->probeUuid_ != nullptr;};
      void deleteProbeUuid() { this->probeUuid_ = nullptr;};
      inline string getProbeUuid() const { DARABONBA_PTR_GET_DEFAULT(probeUuid_, "") };
      inline Instances& setProbeUuid(string probeUuid) { DARABONBA_PTR_SET_VALUE(probeUuid_, probeUuid) };


      // scanResultId Field Functions 
      bool hasScanResultId() const { return this->scanResultId_ != nullptr;};
      void deleteScanResultId() { this->scanResultId_ = nullptr;};
      inline int64_t getScanResultId() const { DARABONBA_PTR_GET_DEFAULT(scanResultId_, 0L) };
      inline Instances& setScanResultId(int64_t scanResultId) { DARABONBA_PTR_SET_VALUE(scanResultId_, scanResultId) };


      // scannedIp Field Functions 
      bool hasScannedIp() const { return this->scannedIp_ != nullptr;};
      void deleteScannedIp() { this->scannedIp_ = nullptr;};
      inline string getScannedIp() const { DARABONBA_PTR_GET_DEFAULT(scannedIp_, "") };
      inline Instances& setScannedIp(string scannedIp) { DARABONBA_PTR_SET_VALUE(scannedIp_, scannedIp) };


      // validPort Field Functions 
      bool hasValidPort() const { return this->validPort_ != nullptr;};
      void deleteValidPort() { this->validPort_ = nullptr;};
      inline string getValidPort() const { DARABONBA_PTR_GET_DEFAULT(validPort_, "") };
      inline Instances& setValidPort(string validPort) { DARABONBA_PTR_SET_VALUE(validPort_, validPort) };


    protected:
      // The status of the client of the instance on which the probe is installed. Valid values:
      // 
      // *   **online**: The Security Center agent on the asset is **enabled**.
      // *   **offline**: The Security Center agent on the asset is **disabled**.
      shared_ptr<string> clientStatus_ {};
      // The name of the IDC.
      shared_ptr<string> idcName_ {};
      // The CIDR blocks.
      shared_ptr<string> ipSegment_ {};
      // The timestamp when the last scan was performed. Unit: milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The operating system type of the asset. Valid values:
      // 
      // *   **windows**
      // *   **linux**
      shared_ptr<string> os_ {};
      // The private IP address of the associated instance.
      shared_ptr<string> probeInternetIp_ {};
      // The private IP address of the associated instance.
      shared_ptr<string> probeIntranetIp_ {};
      // The name of the associated instance.
      shared_ptr<string> probeMachineName_ {};
      // The UUID of the associated instance.
      shared_ptr<string> probeUuid_ {};
      // The ID of the scan result.
      shared_ptr<int64_t> scanResultId_ {};
      // The IP address that is scanned.
      shared_ptr<string> scannedIp_ {};
      // The port that is scanned.
      shared_ptr<string> validPort_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeIdcProbeScanResultListResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeIdcProbeScanResultListResponseBody::Instances>) };
    inline vector<DescribeIdcProbeScanResultListResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeIdcProbeScanResultListResponseBody::Instances>) };
    inline DescribeIdcProbeScanResultListResponseBody& setInstances(const vector<DescribeIdcProbeScanResultListResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeIdcProbeScanResultListResponseBody& setInstances(vector<DescribeIdcProbeScanResultListResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeIdcProbeScanResultListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeIdcProbeScanResultListResponseBody::PageInfo) };
    inline DescribeIdcProbeScanResultListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeIdcProbeScanResultListResponseBody::PageInfo) };
    inline DescribeIdcProbeScanResultListResponseBody& setPageInfo(const DescribeIdcProbeScanResultListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeIdcProbeScanResultListResponseBody& setPageInfo(DescribeIdcProbeScanResultListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIdcProbeScanResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances.
    shared_ptr<vector<DescribeIdcProbeScanResultListResponseBody::Instances>> instances_ {};
    // The pagination information.
    shared_ptr<DescribeIdcProbeScanResultListResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
