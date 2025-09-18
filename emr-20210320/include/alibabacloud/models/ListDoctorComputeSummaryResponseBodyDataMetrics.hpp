// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsReadSize.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization.hpp>
#include <alibabacloud/models/ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorComputeSummaryResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorComputeSummaryResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(MemSecondsDayGrowthRatio, memSecondsDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_TO_JSON(ReadSize, readSize_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_TO_JSON(VcoreSecondsDayGrowthRatio, vcoreSecondsDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(VcoreUtilization, vcoreUtilization_);
      DARABONBA_PTR_TO_JSON(WriteSize, writeSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorComputeSummaryResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(MemSecondsDayGrowthRatio, memSecondsDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_FROM_JSON(ReadSize, readSize_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_FROM_JSON(VcoreSecondsDayGrowthRatio, vcoreSecondsDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(VcoreUtilization, vcoreUtilization_);
      DARABONBA_PTR_FROM_JSON(WriteSize, writeSize_);
    };
    ListDoctorComputeSummaryResponseBodyDataMetrics() = default ;
    ListDoctorComputeSummaryResponseBodyDataMetrics(const ListDoctorComputeSummaryResponseBodyDataMetrics &) = default ;
    ListDoctorComputeSummaryResponseBodyDataMetrics(ListDoctorComputeSummaryResponseBodyDataMetrics &&) = default ;
    ListDoctorComputeSummaryResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorComputeSummaryResponseBodyDataMetrics() = default ;
    ListDoctorComputeSummaryResponseBodyDataMetrics& operator=(const ListDoctorComputeSummaryResponseBodyDataMetrics &) = default ;
    ListDoctorComputeSummaryResponseBodyDataMetrics& operator=(ListDoctorComputeSummaryResponseBodyDataMetrics &&) = default ;
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
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setMemSeconds(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setMemSeconds(Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // memSecondsDayGrowthRatio Field Functions 
    bool hasMemSecondsDayGrowthRatio() const { return this->memSecondsDayGrowthRatio_ != nullptr;};
    void deleteMemSecondsDayGrowthRatio() { this->memSecondsDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio & memSecondsDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(memSecondsDayGrowthRatio_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio memSecondsDayGrowthRatio() { DARABONBA_PTR_GET(memSecondsDayGrowthRatio_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setMemSecondsDayGrowthRatio(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio & memSecondsDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(memSecondsDayGrowthRatio_, memSecondsDayGrowthRatio) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setMemSecondsDayGrowthRatio(Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio && memSecondsDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(memSecondsDayGrowthRatio_, memSecondsDayGrowthRatio) };


    // memUtilization Field Functions 
    bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
    void deleteMemUtilization() { this->memUtilization_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization & memUtilization() const { DARABONBA_PTR_GET_CONST(memUtilization_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization memUtilization() { DARABONBA_PTR_GET(memUtilization_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setMemUtilization(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization & memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setMemUtilization(Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization && memUtilization) { DARABONBA_PTR_SET_RVALUE(memUtilization_, memUtilization) };


    // readSize Field Functions 
    bool hasReadSize() const { return this->readSize_ != nullptr;};
    void deleteReadSize() { this->readSize_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize & readSize() const { DARABONBA_PTR_GET_CONST(readSize_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize readSize() { DARABONBA_PTR_GET(readSize_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setReadSize(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize & readSize) { DARABONBA_PTR_SET_VALUE(readSize_, readSize) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setReadSize(Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize && readSize) { DARABONBA_PTR_SET_RVALUE(readSize_, readSize) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSeconds(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSeconds(Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


    // vcoreSecondsDayGrowthRatio Field Functions 
    bool hasVcoreSecondsDayGrowthRatio() const { return this->vcoreSecondsDayGrowthRatio_ != nullptr;};
    void deleteVcoreSecondsDayGrowthRatio() { this->vcoreSecondsDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio & vcoreSecondsDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(vcoreSecondsDayGrowthRatio_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio vcoreSecondsDayGrowthRatio() { DARABONBA_PTR_GET(vcoreSecondsDayGrowthRatio_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSecondsDayGrowthRatio(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio & vcoreSecondsDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(vcoreSecondsDayGrowthRatio_, vcoreSecondsDayGrowthRatio) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setVcoreSecondsDayGrowthRatio(Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio && vcoreSecondsDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(vcoreSecondsDayGrowthRatio_, vcoreSecondsDayGrowthRatio) };


    // vcoreUtilization Field Functions 
    bool hasVcoreUtilization() const { return this->vcoreUtilization_ != nullptr;};
    void deleteVcoreUtilization() { this->vcoreUtilization_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization & vcoreUtilization() const { DARABONBA_PTR_GET_CONST(vcoreUtilization_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization vcoreUtilization() { DARABONBA_PTR_GET(vcoreUtilization_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setVcoreUtilization(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization & vcoreUtilization) { DARABONBA_PTR_SET_VALUE(vcoreUtilization_, vcoreUtilization) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setVcoreUtilization(Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization && vcoreUtilization) { DARABONBA_PTR_SET_RVALUE(vcoreUtilization_, vcoreUtilization) };


    // writeSize Field Functions 
    bool hasWriteSize() const { return this->writeSize_ != nullptr;};
    void deleteWriteSize() { this->writeSize_ = nullptr;};
    inline const Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize & writeSize() const { DARABONBA_PTR_GET_CONST(writeSize_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize) };
    inline Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize writeSize() { DARABONBA_PTR_GET(writeSize_, Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setWriteSize(const Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize & writeSize) { DARABONBA_PTR_SET_VALUE(writeSize_, writeSize) };
    inline ListDoctorComputeSummaryResponseBodyDataMetrics& setWriteSize(Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize && writeSize) { DARABONBA_PTR_SET_RVALUE(writeSize_, writeSize) };


  protected:
    // The total memory consumption over time in seconds.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSeconds> memSeconds_ = nullptr;
    // The day-to-day growth rate of the total memory consumption over time in seconds.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemSecondsDayGrowthRatio> memSecondsDayGrowthRatio_ = nullptr;
    // The average memory usage.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsMemUtilization> memUtilization_ = nullptr;
    // The total amount of data read from the file system.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsReadSize> readSize_ = nullptr;
    // The total CPU consumption over time in seconds.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSeconds> vcoreSeconds_ = nullptr;
    // The day-to-day growth rate of the total CPU consumption over time in seconds.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreSecondsDayGrowthRatio> vcoreSecondsDayGrowthRatio_ = nullptr;
    // The average CPU utilization. The meaning is the same as the %CPU parameter in the output of the top command in Linux.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsVcoreUtilization> vcoreUtilization_ = nullptr;
    // The total amount of data written to the file system.
    std::shared_ptr<Models::ListDoctorComputeSummaryResponseBodyDataMetricsWriteSize> writeSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
