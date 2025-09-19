// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBESCANRESULTLISTRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeIdcProbeScanResultListResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeScanResultListResponseBodyInstances& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeScanResultListResponseBodyInstances& obj) { 
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
    DescribeIdcProbeScanResultListResponseBodyInstances() = default ;
    DescribeIdcProbeScanResultListResponseBodyInstances(const DescribeIdcProbeScanResultListResponseBodyInstances &) = default ;
    DescribeIdcProbeScanResultListResponseBodyInstances(DescribeIdcProbeScanResultListResponseBodyInstances &&) = default ;
    DescribeIdcProbeScanResultListResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeScanResultListResponseBodyInstances() = default ;
    DescribeIdcProbeScanResultListResponseBodyInstances& operator=(const DescribeIdcProbeScanResultListResponseBodyInstances &) = default ;
    DescribeIdcProbeScanResultListResponseBodyInstances& operator=(DescribeIdcProbeScanResultListResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientStatus_ != nullptr
        && this->idcName_ != nullptr && this->ipSegment_ != nullptr && this->lastScanTime_ != nullptr && this->os_ != nullptr && this->probeInternetIp_ != nullptr
        && this->probeIntranetIp_ != nullptr && this->probeMachineName_ != nullptr && this->probeUuid_ != nullptr && this->scanResultId_ != nullptr && this->scannedIp_ != nullptr
        && this->validPort_ != nullptr; };
    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // idcName Field Functions 
    bool hasIdcName() const { return this->idcName_ != nullptr;};
    void deleteIdcName() { this->idcName_ = nullptr;};
    inline string idcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


    // ipSegment Field Functions 
    bool hasIpSegment() const { return this->ipSegment_ != nullptr;};
    void deleteIpSegment() { this->ipSegment_ = nullptr;};
    inline string ipSegment() const { DARABONBA_PTR_GET_DEFAULT(ipSegment_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setIpSegment(string ipSegment) { DARABONBA_PTR_SET_VALUE(ipSegment_, ipSegment) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // probeInternetIp Field Functions 
    bool hasProbeInternetIp() const { return this->probeInternetIp_ != nullptr;};
    void deleteProbeInternetIp() { this->probeInternetIp_ = nullptr;};
    inline string probeInternetIp() const { DARABONBA_PTR_GET_DEFAULT(probeInternetIp_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setProbeInternetIp(string probeInternetIp) { DARABONBA_PTR_SET_VALUE(probeInternetIp_, probeInternetIp) };


    // probeIntranetIp Field Functions 
    bool hasProbeIntranetIp() const { return this->probeIntranetIp_ != nullptr;};
    void deleteProbeIntranetIp() { this->probeIntranetIp_ = nullptr;};
    inline string probeIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(probeIntranetIp_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setProbeIntranetIp(string probeIntranetIp) { DARABONBA_PTR_SET_VALUE(probeIntranetIp_, probeIntranetIp) };


    // probeMachineName Field Functions 
    bool hasProbeMachineName() const { return this->probeMachineName_ != nullptr;};
    void deleteProbeMachineName() { this->probeMachineName_ = nullptr;};
    inline string probeMachineName() const { DARABONBA_PTR_GET_DEFAULT(probeMachineName_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setProbeMachineName(string probeMachineName) { DARABONBA_PTR_SET_VALUE(probeMachineName_, probeMachineName) };


    // probeUuid Field Functions 
    bool hasProbeUuid() const { return this->probeUuid_ != nullptr;};
    void deleteProbeUuid() { this->probeUuid_ = nullptr;};
    inline string probeUuid() const { DARABONBA_PTR_GET_DEFAULT(probeUuid_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setProbeUuid(string probeUuid) { DARABONBA_PTR_SET_VALUE(probeUuid_, probeUuid) };


    // scanResultId Field Functions 
    bool hasScanResultId() const { return this->scanResultId_ != nullptr;};
    void deleteScanResultId() { this->scanResultId_ = nullptr;};
    inline int64_t scanResultId() const { DARABONBA_PTR_GET_DEFAULT(scanResultId_, 0L) };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setScanResultId(int64_t scanResultId) { DARABONBA_PTR_SET_VALUE(scanResultId_, scanResultId) };


    // scannedIp Field Functions 
    bool hasScannedIp() const { return this->scannedIp_ != nullptr;};
    void deleteScannedIp() { this->scannedIp_ = nullptr;};
    inline string scannedIp() const { DARABONBA_PTR_GET_DEFAULT(scannedIp_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setScannedIp(string scannedIp) { DARABONBA_PTR_SET_VALUE(scannedIp_, scannedIp) };


    // validPort Field Functions 
    bool hasValidPort() const { return this->validPort_ != nullptr;};
    void deleteValidPort() { this->validPort_ = nullptr;};
    inline string validPort() const { DARABONBA_PTR_GET_DEFAULT(validPort_, "") };
    inline DescribeIdcProbeScanResultListResponseBodyInstances& setValidPort(string validPort) { DARABONBA_PTR_SET_VALUE(validPort_, validPort) };


  protected:
    // The status of the client of the instance on which the probe is installed. Valid values:
    // 
    // *   **online**: The Security Center agent on the asset is **enabled**.
    // *   **offline**: The Security Center agent on the asset is **disabled**.
    std::shared_ptr<string> clientStatus_ = nullptr;
    // The name of the IDC.
    std::shared_ptr<string> idcName_ = nullptr;
    // The CIDR blocks.
    std::shared_ptr<string> ipSegment_ = nullptr;
    // The timestamp when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The operating system type of the asset. Valid values:
    // 
    // *   **windows**
    // *   **linux**
    std::shared_ptr<string> os_ = nullptr;
    // The private IP address of the associated instance.
    std::shared_ptr<string> probeInternetIp_ = nullptr;
    // The private IP address of the associated instance.
    std::shared_ptr<string> probeIntranetIp_ = nullptr;
    // The name of the associated instance.
    std::shared_ptr<string> probeMachineName_ = nullptr;
    // The UUID of the associated instance.
    std::shared_ptr<string> probeUuid_ = nullptr;
    // The ID of the scan result.
    std::shared_ptr<int64_t> scanResultId_ = nullptr;
    // The IP address that is scanned.
    std::shared_ptr<string> scannedIp_ = nullptr;
    // The port that is scanned.
    std::shared_ptr<string> validPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
