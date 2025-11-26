// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORJOBRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORJOBRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorJobResponseBodyDataMetricsMemSeconds.hpp>
#include <alibabacloud/models/GetDoctorJobResponseBodyDataMetricsVcoreSeconds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorJobResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorJobResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorJobResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
    };
    GetDoctorJobResponseBodyDataMetrics() = default ;
    GetDoctorJobResponseBodyDataMetrics(const GetDoctorJobResponseBodyDataMetrics &) = default ;
    GetDoctorJobResponseBodyDataMetrics(GetDoctorJobResponseBodyDataMetrics &&) = default ;
    GetDoctorJobResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorJobResponseBodyDataMetrics() = default ;
    GetDoctorJobResponseBodyDataMetrics& operator=(const GetDoctorJobResponseBodyDataMetrics &) = default ;
    GetDoctorJobResponseBodyDataMetrics& operator=(GetDoctorJobResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memSeconds_ == nullptr
        && return this->vcoreSeconds_ == nullptr; };
    // memSeconds Field Functions 
    bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
    void deleteMemSeconds() { this->memSeconds_ = nullptr;};
    inline const Models::GetDoctorJobResponseBodyDataMetricsMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::GetDoctorJobResponseBodyDataMetricsMemSeconds) };
    inline Models::GetDoctorJobResponseBodyDataMetricsMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::GetDoctorJobResponseBodyDataMetricsMemSeconds) };
    inline GetDoctorJobResponseBodyDataMetrics& setMemSeconds(const Models::GetDoctorJobResponseBodyDataMetricsMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline GetDoctorJobResponseBodyDataMetrics& setMemSeconds(Models::GetDoctorJobResponseBodyDataMetricsMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds) };
    inline Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds) };
    inline GetDoctorJobResponseBodyDataMetrics& setVcoreSeconds(const Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline GetDoctorJobResponseBodyDataMetrics& setVcoreSeconds(Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


  protected:
    // The amount of memory consumed.
    std::shared_ptr<Models::GetDoctorJobResponseBodyDataMetricsMemSeconds> memSeconds_ = nullptr;
    // The CPU usage.
    std::shared_ptr<Models::GetDoctorJobResponseBodyDataMetricsVcoreSeconds> vcoreSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
