// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsReadSize.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization.hpp>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(MemSecondsDayGrowthRatio, memSecondsDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_TO_JSON(ReadSize, readSize_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_TO_JSON(VcoreSecondsDayGrowthRatio, vcoreSecondsDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(VcoreUtilization, vcoreUtilization_);
      DARABONBA_PTR_TO_JSON(WriteSize, writeSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(MemSecondsDayGrowthRatio, memSecondsDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_FROM_JSON(ReadSize, readSize_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_FROM_JSON(VcoreSecondsDayGrowthRatio, vcoreSecondsDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(VcoreUtilization, vcoreUtilization_);
      DARABONBA_PTR_FROM_JSON(WriteSize, writeSize_);
    };
    GetDoctorComputeSummaryResponseBodyDataMetrics() = default ;
    GetDoctorComputeSummaryResponseBodyDataMetrics(const GetDoctorComputeSummaryResponseBodyDataMetrics &) = default ;
    GetDoctorComputeSummaryResponseBodyDataMetrics(GetDoctorComputeSummaryResponseBodyDataMetrics &&) = default ;
    GetDoctorComputeSummaryResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryResponseBodyDataMetrics() = default ;
    GetDoctorComputeSummaryResponseBodyDataMetrics& operator=(const GetDoctorComputeSummaryResponseBodyDataMetrics &) = default ;
    GetDoctorComputeSummaryResponseBodyDataMetrics& operator=(GetDoctorComputeSummaryResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memSeconds_ != nullptr
        && this->memSecondsDayGrowthRatio_ != nullptr && this->memUtilization_ != nullptr && this->readSize_ != nullptr && this->vcoreSeconds_ != nullptr && this->vcoreSecondsDayGrowthRatio_ != nullptr
        && this->vcoreUtilization_ != nullptr && this->writeSize_ != nullptr; };
    // memSeconds Field Functions 
    bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
    void deleteMemSeconds() { this->memSeconds_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setMemSeconds(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setMemSeconds(Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // memSecondsDayGrowthRatio Field Functions 
    bool hasMemSecondsDayGrowthRatio() const { return this->memSecondsDayGrowthRatio_ != nullptr;};
    void deleteMemSecondsDayGrowthRatio() { this->memSecondsDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio & memSecondsDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(memSecondsDayGrowthRatio_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio memSecondsDayGrowthRatio() { DARABONBA_PTR_GET(memSecondsDayGrowthRatio_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setMemSecondsDayGrowthRatio(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio & memSecondsDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(memSecondsDayGrowthRatio_, memSecondsDayGrowthRatio) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setMemSecondsDayGrowthRatio(Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio && memSecondsDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(memSecondsDayGrowthRatio_, memSecondsDayGrowthRatio) };


    // memUtilization Field Functions 
    bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
    void deleteMemUtilization() { this->memUtilization_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization & memUtilization() const { DARABONBA_PTR_GET_CONST(memUtilization_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization memUtilization() { DARABONBA_PTR_GET(memUtilization_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setMemUtilization(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization & memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setMemUtilization(Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization && memUtilization) { DARABONBA_PTR_SET_RVALUE(memUtilization_, memUtilization) };


    // readSize Field Functions 
    bool hasReadSize() const { return this->readSize_ != nullptr;};
    void deleteReadSize() { this->readSize_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize & readSize() const { DARABONBA_PTR_GET_CONST(readSize_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize readSize() { DARABONBA_PTR_GET(readSize_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setReadSize(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize & readSize) { DARABONBA_PTR_SET_VALUE(readSize_, readSize) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setReadSize(Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize && readSize) { DARABONBA_PTR_SET_RVALUE(readSize_, readSize) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSeconds(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSeconds(Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


    // vcoreSecondsDayGrowthRatio Field Functions 
    bool hasVcoreSecondsDayGrowthRatio() const { return this->vcoreSecondsDayGrowthRatio_ != nullptr;};
    void deleteVcoreSecondsDayGrowthRatio() { this->vcoreSecondsDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio & vcoreSecondsDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(vcoreSecondsDayGrowthRatio_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio vcoreSecondsDayGrowthRatio() { DARABONBA_PTR_GET(vcoreSecondsDayGrowthRatio_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSecondsDayGrowthRatio(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio & vcoreSecondsDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(vcoreSecondsDayGrowthRatio_, vcoreSecondsDayGrowthRatio) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSecondsDayGrowthRatio(Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio && vcoreSecondsDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(vcoreSecondsDayGrowthRatio_, vcoreSecondsDayGrowthRatio) };


    // vcoreUtilization Field Functions 
    bool hasVcoreUtilization() const { return this->vcoreUtilization_ != nullptr;};
    void deleteVcoreUtilization() { this->vcoreUtilization_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization & vcoreUtilization() const { DARABONBA_PTR_GET_CONST(vcoreUtilization_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization vcoreUtilization() { DARABONBA_PTR_GET(vcoreUtilization_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setVcoreUtilization(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization & vcoreUtilization) { DARABONBA_PTR_SET_VALUE(vcoreUtilization_, vcoreUtilization) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setVcoreUtilization(Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization && vcoreUtilization) { DARABONBA_PTR_SET_RVALUE(vcoreUtilization_, vcoreUtilization) };


    // writeSize Field Functions 
    bool hasWriteSize() const { return this->writeSize_ != nullptr;};
    void deleteWriteSize() { this->writeSize_ = nullptr;};
    inline const Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize & writeSize() const { DARABONBA_PTR_GET_CONST(writeSize_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize) };
    inline Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize writeSize() { DARABONBA_PTR_GET(writeSize_, Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setWriteSize(const Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize & writeSize) { DARABONBA_PTR_SET_VALUE(writeSize_, writeSize) };
    inline GetDoctorComputeSummaryResponseBodyDataMetrics& setWriteSize(Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize && writeSize) { DARABONBA_PTR_SET_RVALUE(writeSize_, writeSize) };


  protected:
    // The total memory consumption over time in seconds.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSeconds> memSeconds_ = nullptr;
    // The day-to-day growth rate of the total memory consumption over time in seconds.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio> memSecondsDayGrowthRatio_ = nullptr;
    // The average memory usage.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsMemUtilization> memUtilization_ = nullptr;
    // The total amount of data read from the file system.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsReadSize> readSize_ = nullptr;
    // The total CPU consumption over time in seconds.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds> vcoreSeconds_ = nullptr;
    // The day-to-day growth rate of the total CPU consumption over time in seconds.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio> vcoreSecondsDayGrowthRatio_ = nullptr;
    // The average CPU utilization. The meaning is the same as the %CPU parameter in the output of the top command in Linux.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization> vcoreUtilization_ = nullptr;
    // The total amount of data written to the file system.
    std::shared_ptr<Models::GetDoctorComputeSummaryResponseBodyDataMetricsWriteSize> writeSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
