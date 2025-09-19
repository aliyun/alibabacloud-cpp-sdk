// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKSTATISTICRESPONSEBODYRISKRANKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKSTATISTICRESPONSEBODYRISKRANKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_TO_JSON(ScanTimeTimestamp, scanTimeTimestamp_);
      DARABONBA_PTR_TO_JSON(TotalScanned, totalScanned_);
      DARABONBA_PTR_TO_JSON(VulAsap, vulAsap_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_FROM_JSON(ScanTimeTimestamp, scanTimeTimestamp_);
      DARABONBA_PTR_FROM_JSON(TotalScanned, totalScanned_);
      DARABONBA_PTR_FROM_JSON(VulAsap, vulAsap_);
    };
    GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo() = default ;
    GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo(const GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo &) = default ;
    GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo(GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo &&) = default ;
    GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo() = default ;
    GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& operator=(const GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo &) = default ;
    GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& operator=(GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->scanTime_ != nullptr && this->scanTimeTimestamp_ != nullptr && this->totalScanned_ != nullptr && this->vulAsap_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline int32_t baseline() const { DARABONBA_PTR_GET_DEFAULT(baseline_, 0) };
    inline GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& setBaseline(int32_t baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };


    // scanTime Field Functions 
    bool hasScanTime() const { return this->scanTime_ != nullptr;};
    void deleteScanTime() { this->scanTime_ = nullptr;};
    inline int64_t scanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
    inline GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


    // scanTimeTimestamp Field Functions 
    bool hasScanTimeTimestamp() const { return this->scanTimeTimestamp_ != nullptr;};
    void deleteScanTimeTimestamp() { this->scanTimeTimestamp_ = nullptr;};
    inline int64_t scanTimeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(scanTimeTimestamp_, 0L) };
    inline GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& setScanTimeTimestamp(int64_t scanTimeTimestamp) { DARABONBA_PTR_SET_VALUE(scanTimeTimestamp_, scanTimeTimestamp) };


    // totalScanned Field Functions 
    bool hasTotalScanned() const { return this->totalScanned_ != nullptr;};
    void deleteTotalScanned() { this->totalScanned_ = nullptr;};
    inline int32_t totalScanned() const { DARABONBA_PTR_GET_DEFAULT(totalScanned_, 0) };
    inline GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& setTotalScanned(int32_t totalScanned) { DARABONBA_PTR_SET_VALUE(totalScanned_, totalScanned) };


    // vulAsap Field Functions 
    bool hasVulAsap() const { return this->vulAsap_ != nullptr;};
    void deleteVulAsap() { this->vulAsap_ = nullptr;};
    inline int32_t vulAsap() const { DARABONBA_PTR_GET_DEFAULT(vulAsap_, 0) };
    inline GetDockerhubImageRiskStatisticResponseBodyRiskRankInfo& setVulAsap(int32_t vulAsap) { DARABONBA_PTR_SET_VALUE(vulAsap_, vulAsap) };


  protected:
    // Number of baseline issue risks.
    std::shared_ptr<int32_t> baseline_ = nullptr;
    // Scan timestamp.
    std::shared_ptr<int64_t> scanTime_ = nullptr;
    // Scan timestamp.
    std::shared_ptr<int64_t> scanTimeTimestamp_ = nullptr;
    // Count of scanned Dockerhub images.
    std::shared_ptr<int32_t> totalScanned_ = nullptr;
    // Number of high-risk vulnerabilities.
    std::shared_ptr<int32_t> vulAsap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
