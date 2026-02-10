// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskRankInfo, riskRankInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskRankInfo, riskRankInfo_);
    };
    GetDockerhubImageRiskStatisticResponseBody() = default ;
    GetDockerhubImageRiskStatisticResponseBody(const GetDockerhubImageRiskStatisticResponseBody &) = default ;
    GetDockerhubImageRiskStatisticResponseBody(GetDockerhubImageRiskStatisticResponseBody &&) = default ;
    GetDockerhubImageRiskStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskStatisticResponseBody() = default ;
    GetDockerhubImageRiskStatisticResponseBody& operator=(const GetDockerhubImageRiskStatisticResponseBody &) = default ;
    GetDockerhubImageRiskStatisticResponseBody& operator=(GetDockerhubImageRiskStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskRankInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskRankInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Baseline, baseline_);
        DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
        DARABONBA_PTR_TO_JSON(ScanTimeTimestamp, scanTimeTimestamp_);
        DARABONBA_PTR_TO_JSON(TotalScanned, totalScanned_);
        DARABONBA_PTR_TO_JSON(VulAsap, vulAsap_);
      };
      friend void from_json(const Darabonba::Json& j, RiskRankInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
        DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
        DARABONBA_PTR_FROM_JSON(ScanTimeTimestamp, scanTimeTimestamp_);
        DARABONBA_PTR_FROM_JSON(TotalScanned, totalScanned_);
        DARABONBA_PTR_FROM_JSON(VulAsap, vulAsap_);
      };
      RiskRankInfo() = default ;
      RiskRankInfo(const RiskRankInfo &) = default ;
      RiskRankInfo(RiskRankInfo &&) = default ;
      RiskRankInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskRankInfo() = default ;
      RiskRankInfo& operator=(const RiskRankInfo &) = default ;
      RiskRankInfo& operator=(RiskRankInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baseline_ == nullptr
        && this->scanTime_ == nullptr && this->scanTimeTimestamp_ == nullptr && this->totalScanned_ == nullptr && this->vulAsap_ == nullptr; };
      // baseline Field Functions 
      bool hasBaseline() const { return this->baseline_ != nullptr;};
      void deleteBaseline() { this->baseline_ = nullptr;};
      inline int32_t getBaseline() const { DARABONBA_PTR_GET_DEFAULT(baseline_, 0) };
      inline RiskRankInfo& setBaseline(int32_t baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };


      // scanTime Field Functions 
      bool hasScanTime() const { return this->scanTime_ != nullptr;};
      void deleteScanTime() { this->scanTime_ = nullptr;};
      inline int64_t getScanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
      inline RiskRankInfo& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


      // scanTimeTimestamp Field Functions 
      bool hasScanTimeTimestamp() const { return this->scanTimeTimestamp_ != nullptr;};
      void deleteScanTimeTimestamp() { this->scanTimeTimestamp_ = nullptr;};
      inline int64_t getScanTimeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(scanTimeTimestamp_, 0L) };
      inline RiskRankInfo& setScanTimeTimestamp(int64_t scanTimeTimestamp) { DARABONBA_PTR_SET_VALUE(scanTimeTimestamp_, scanTimeTimestamp) };


      // totalScanned Field Functions 
      bool hasTotalScanned() const { return this->totalScanned_ != nullptr;};
      void deleteTotalScanned() { this->totalScanned_ = nullptr;};
      inline int32_t getTotalScanned() const { DARABONBA_PTR_GET_DEFAULT(totalScanned_, 0) };
      inline RiskRankInfo& setTotalScanned(int32_t totalScanned) { DARABONBA_PTR_SET_VALUE(totalScanned_, totalScanned) };


      // vulAsap Field Functions 
      bool hasVulAsap() const { return this->vulAsap_ != nullptr;};
      void deleteVulAsap() { this->vulAsap_ = nullptr;};
      inline int32_t getVulAsap() const { DARABONBA_PTR_GET_DEFAULT(vulAsap_, 0) };
      inline RiskRankInfo& setVulAsap(int32_t vulAsap) { DARABONBA_PTR_SET_VALUE(vulAsap_, vulAsap) };


    protected:
      // The number of baseline risks.
      shared_ptr<int32_t> baseline_ {};
      // The timestamp when the scan was performed.
      shared_ptr<int64_t> scanTime_ {};
      // The timestamp when the scan was performed.
      shared_ptr<int64_t> scanTimeTimestamp_ {};
      // The number of scanned Docker Hub images.
      shared_ptr<int32_t> totalScanned_ {};
      // The number of high-risk vulnerabilities.
      shared_ptr<int32_t> vulAsap_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskRankInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDockerhubImageRiskStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskRankInfo Field Functions 
    bool hasRiskRankInfo() const { return this->riskRankInfo_ != nullptr;};
    void deleteRiskRankInfo() { this->riskRankInfo_ = nullptr;};
    inline const GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo & getRiskRankInfo() const { DARABONBA_PTR_GET_CONST(riskRankInfo_, GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo) };
    inline GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo getRiskRankInfo() { DARABONBA_PTR_GET(riskRankInfo_, GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo) };
    inline GetDockerhubImageRiskStatisticResponseBody& setRiskRankInfo(const GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo & riskRankInfo) { DARABONBA_PTR_SET_VALUE(riskRankInfo_, riskRankInfo) };
    inline GetDockerhubImageRiskStatisticResponseBody& setRiskRankInfo(GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo && riskRankInfo) { DARABONBA_PTR_SET_RVALUE(riskRankInfo_, riskRankInfo) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the risk source.
    shared_ptr<GetDockerhubImageRiskStatisticResponseBody::RiskRankInfo> riskRankInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
