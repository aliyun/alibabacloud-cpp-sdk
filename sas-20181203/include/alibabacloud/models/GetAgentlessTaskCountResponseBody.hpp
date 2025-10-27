// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTLESSTASKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTLESSTASKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAgentlessTaskCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentlessTaskCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineCheckCount, baselineCheckCount_);
      DARABONBA_PTR_TO_JSON(CveVulCount, cveVulCount_);
      DARABONBA_PTR_TO_JSON(LastTaskTime, lastTaskTime_);
      DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskMachine, riskMachine_);
      DARABONBA_PTR_TO_JSON(ScaVulCount, scaVulCount_);
      DARABONBA_PTR_TO_JSON(ScanMachine, scanMachine_);
      DARABONBA_PTR_TO_JSON(SensitiveFileCount, sensitiveFileCount_);
      DARABONBA_PTR_TO_JSON(SysVulCount, sysVulCount_);
      DARABONBA_PTR_TO_JSON(Vulnerability, vulnerability_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentlessTaskCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineCheckCount, baselineCheckCount_);
      DARABONBA_PTR_FROM_JSON(CveVulCount, cveVulCount_);
      DARABONBA_PTR_FROM_JSON(LastTaskTime, lastTaskTime_);
      DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskMachine, riskMachine_);
      DARABONBA_PTR_FROM_JSON(ScaVulCount, scaVulCount_);
      DARABONBA_PTR_FROM_JSON(ScanMachine, scanMachine_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileCount, sensitiveFileCount_);
      DARABONBA_PTR_FROM_JSON(SysVulCount, sysVulCount_);
      DARABONBA_PTR_FROM_JSON(Vulnerability, vulnerability_);
    };
    GetAgentlessTaskCountResponseBody() = default ;
    GetAgentlessTaskCountResponseBody(const GetAgentlessTaskCountResponseBody &) = default ;
    GetAgentlessTaskCountResponseBody(GetAgentlessTaskCountResponseBody &&) = default ;
    GetAgentlessTaskCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentlessTaskCountResponseBody() = default ;
    GetAgentlessTaskCountResponseBody& operator=(const GetAgentlessTaskCountResponseBody &) = default ;
    GetAgentlessTaskCountResponseBody& operator=(GetAgentlessTaskCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineCheckCount_ == nullptr
        && return this->cveVulCount_ == nullptr && return this->lastTaskTime_ == nullptr && return this->maliciousFile_ == nullptr && return this->requestId_ == nullptr && return this->riskMachine_ == nullptr
        && return this->scaVulCount_ == nullptr && return this->scanMachine_ == nullptr && return this->sensitiveFileCount_ == nullptr && return this->sysVulCount_ == nullptr && return this->vulnerability_ == nullptr; };
    // baselineCheckCount Field Functions 
    bool hasBaselineCheckCount() const { return this->baselineCheckCount_ != nullptr;};
    void deleteBaselineCheckCount() { this->baselineCheckCount_ = nullptr;};
    inline int32_t baselineCheckCount() const { DARABONBA_PTR_GET_DEFAULT(baselineCheckCount_, 0) };
    inline GetAgentlessTaskCountResponseBody& setBaselineCheckCount(int32_t baselineCheckCount) { DARABONBA_PTR_SET_VALUE(baselineCheckCount_, baselineCheckCount) };


    // cveVulCount Field Functions 
    bool hasCveVulCount() const { return this->cveVulCount_ != nullptr;};
    void deleteCveVulCount() { this->cveVulCount_ = nullptr;};
    inline int32_t cveVulCount() const { DARABONBA_PTR_GET_DEFAULT(cveVulCount_, 0) };
    inline GetAgentlessTaskCountResponseBody& setCveVulCount(int32_t cveVulCount) { DARABONBA_PTR_SET_VALUE(cveVulCount_, cveVulCount) };


    // lastTaskTime Field Functions 
    bool hasLastTaskTime() const { return this->lastTaskTime_ != nullptr;};
    void deleteLastTaskTime() { this->lastTaskTime_ = nullptr;};
    inline int64_t lastTaskTime() const { DARABONBA_PTR_GET_DEFAULT(lastTaskTime_, 0L) };
    inline GetAgentlessTaskCountResponseBody& setLastTaskTime(int64_t lastTaskTime) { DARABONBA_PTR_SET_VALUE(lastTaskTime_, lastTaskTime) };


    // maliciousFile Field Functions 
    bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
    void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
    inline int32_t maliciousFile() const { DARABONBA_PTR_GET_DEFAULT(maliciousFile_, 0) };
    inline GetAgentlessTaskCountResponseBody& setMaliciousFile(int32_t maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentlessTaskCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskMachine Field Functions 
    bool hasRiskMachine() const { return this->riskMachine_ != nullptr;};
    void deleteRiskMachine() { this->riskMachine_ = nullptr;};
    inline int32_t riskMachine() const { DARABONBA_PTR_GET_DEFAULT(riskMachine_, 0) };
    inline GetAgentlessTaskCountResponseBody& setRiskMachine(int32_t riskMachine) { DARABONBA_PTR_SET_VALUE(riskMachine_, riskMachine) };


    // scaVulCount Field Functions 
    bool hasScaVulCount() const { return this->scaVulCount_ != nullptr;};
    void deleteScaVulCount() { this->scaVulCount_ = nullptr;};
    inline int32_t scaVulCount() const { DARABONBA_PTR_GET_DEFAULT(scaVulCount_, 0) };
    inline GetAgentlessTaskCountResponseBody& setScaVulCount(int32_t scaVulCount) { DARABONBA_PTR_SET_VALUE(scaVulCount_, scaVulCount) };


    // scanMachine Field Functions 
    bool hasScanMachine() const { return this->scanMachine_ != nullptr;};
    void deleteScanMachine() { this->scanMachine_ = nullptr;};
    inline int32_t scanMachine() const { DARABONBA_PTR_GET_DEFAULT(scanMachine_, 0) };
    inline GetAgentlessTaskCountResponseBody& setScanMachine(int32_t scanMachine) { DARABONBA_PTR_SET_VALUE(scanMachine_, scanMachine) };


    // sensitiveFileCount Field Functions 
    bool hasSensitiveFileCount() const { return this->sensitiveFileCount_ != nullptr;};
    void deleteSensitiveFileCount() { this->sensitiveFileCount_ = nullptr;};
    inline int32_t sensitiveFileCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveFileCount_, 0) };
    inline GetAgentlessTaskCountResponseBody& setSensitiveFileCount(int32_t sensitiveFileCount) { DARABONBA_PTR_SET_VALUE(sensitiveFileCount_, sensitiveFileCount) };


    // sysVulCount Field Functions 
    bool hasSysVulCount() const { return this->sysVulCount_ != nullptr;};
    void deleteSysVulCount() { this->sysVulCount_ = nullptr;};
    inline string sysVulCount() const { DARABONBA_PTR_GET_DEFAULT(sysVulCount_, "") };
    inline GetAgentlessTaskCountResponseBody& setSysVulCount(string sysVulCount) { DARABONBA_PTR_SET_VALUE(sysVulCount_, sysVulCount) };


    // vulnerability Field Functions 
    bool hasVulnerability() const { return this->vulnerability_ != nullptr;};
    void deleteVulnerability() { this->vulnerability_ = nullptr;};
    inline int32_t vulnerability() const { DARABONBA_PTR_GET_DEFAULT(vulnerability_, 0) };
    inline GetAgentlessTaskCountResponseBody& setVulnerability(int32_t vulnerability) { DARABONBA_PTR_SET_VALUE(vulnerability_, vulnerability) };


  protected:
    // The number of baseline checks.
    std::shared_ptr<int32_t> baselineCheckCount_ = nullptr;
    // The number of system vulnerabilities.
    std::shared_ptr<int32_t> cveVulCount_ = nullptr;
    // The timestamp generated when the last detection is performed.
    std::shared_ptr<int64_t> lastTaskTime_ = nullptr;
    // The number of malicious files.
    std::shared_ptr<int32_t> maliciousFile_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of risky hosts.
    std::shared_ptr<int32_t> riskMachine_ = nullptr;
    // The number of application vulnerabilities.
    std::shared_ptr<int32_t> scaVulCount_ = nullptr;
    // The number of hosts that are scanned.
    std::shared_ptr<int32_t> scanMachine_ = nullptr;
    // The total number of sensitive files.
    std::shared_ptr<int32_t> sensitiveFileCount_ = nullptr;
    // The total number of Windows system vulnerabilities.
    std::shared_ptr<string> sysVulCount_ = nullptr;
    // The number of vulnerabilities.
    std::shared_ptr<int32_t> vulnerability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
