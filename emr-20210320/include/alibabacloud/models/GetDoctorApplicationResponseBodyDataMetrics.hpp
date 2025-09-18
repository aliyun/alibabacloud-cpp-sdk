// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyDataMetricsMemSeconds.hpp>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyDataMetricsMemUtilization.hpp>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds.hpp>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorApplicationResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_TO_JSON(VcoreUtilization, vcoreUtilization_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_FROM_JSON(VcoreUtilization, vcoreUtilization_);
    };
    GetDoctorApplicationResponseBodyDataMetrics() = default ;
    GetDoctorApplicationResponseBodyDataMetrics(const GetDoctorApplicationResponseBodyDataMetrics &) = default ;
    GetDoctorApplicationResponseBodyDataMetrics(GetDoctorApplicationResponseBodyDataMetrics &&) = default ;
    GetDoctorApplicationResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationResponseBodyDataMetrics() = default ;
    GetDoctorApplicationResponseBodyDataMetrics& operator=(const GetDoctorApplicationResponseBodyDataMetrics &) = default ;
    GetDoctorApplicationResponseBodyDataMetrics& operator=(GetDoctorApplicationResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memSeconds_ != nullptr
        && this->memUtilization_ != nullptr && this->vcoreSeconds_ != nullptr && this->vcoreUtilization_ != nullptr; };
    // memSeconds Field Functions 
    bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
    void deleteMemSeconds() { this->memSeconds_ = nullptr;};
    inline const Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds) };
    inline Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setMemSeconds(const Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setMemSeconds(Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // memUtilization Field Functions 
    bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
    void deleteMemUtilization() { this->memUtilization_ = nullptr;};
    inline const Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization & memUtilization() const { DARABONBA_PTR_GET_CONST(memUtilization_, Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization) };
    inline Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization memUtilization() { DARABONBA_PTR_GET(memUtilization_, Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setMemUtilization(const Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization & memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setMemUtilization(Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization && memUtilization) { DARABONBA_PTR_SET_RVALUE(memUtilization_, memUtilization) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds) };
    inline Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setVcoreSeconds(const Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setVcoreSeconds(Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


    // vcoreUtilization Field Functions 
    bool hasVcoreUtilization() const { return this->vcoreUtilization_ != nullptr;};
    void deleteVcoreUtilization() { this->vcoreUtilization_ = nullptr;};
    inline const Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization & vcoreUtilization() const { DARABONBA_PTR_GET_CONST(vcoreUtilization_, Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization) };
    inline Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization vcoreUtilization() { DARABONBA_PTR_GET(vcoreUtilization_, Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setVcoreUtilization(const Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization & vcoreUtilization) { DARABONBA_PTR_SET_VALUE(vcoreUtilization_, vcoreUtilization) };
    inline GetDoctorApplicationResponseBodyDataMetrics& setVcoreUtilization(Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization && vcoreUtilization) { DARABONBA_PTR_SET_RVALUE(vcoreUtilization_, vcoreUtilization) };


  protected:
    // The aggregated amount of memory that is allocated to the job multiplied by the number of seconds the job has been running.
    std::shared_ptr<Models::GetDoctorApplicationResponseBodyDataMetricsMemSeconds> memSeconds_ = nullptr;
    // The memory usage.
    std::shared_ptr<Models::GetDoctorApplicationResponseBodyDataMetricsMemUtilization> memUtilization_ = nullptr;
    // The aggregated number of vCPUs that are allocated to the job multiplied by the number of seconds the job has been running.
    std::shared_ptr<Models::GetDoctorApplicationResponseBodyDataMetricsVcoreSeconds> vcoreSeconds_ = nullptr;
    // The CPU utilization. The meaning is the same as that of the %CPU command in the output of the Linux top command.
    std::shared_ptr<Models::GetDoctorApplicationResponseBodyDataMetricsVcoreUtilization> vcoreUtilization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
