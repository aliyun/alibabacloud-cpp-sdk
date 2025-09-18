// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorApplicationsResponseBodyDataMetricsMemSeconds.hpp>
#include <alibabacloud/models/ListDoctorApplicationsResponseBodyDataMetricsMemUtilization.hpp>
#include <alibabacloud/models/ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds.hpp>
#include <alibabacloud/models/ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorApplicationsResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorApplicationsResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_TO_JSON(VcoreUtilization, vcoreUtilization_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorApplicationsResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_FROM_JSON(VcoreUtilization, vcoreUtilization_);
    };
    ListDoctorApplicationsResponseBodyDataMetrics() = default ;
    ListDoctorApplicationsResponseBodyDataMetrics(const ListDoctorApplicationsResponseBodyDataMetrics &) = default ;
    ListDoctorApplicationsResponseBodyDataMetrics(ListDoctorApplicationsResponseBodyDataMetrics &&) = default ;
    ListDoctorApplicationsResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorApplicationsResponseBodyDataMetrics() = default ;
    ListDoctorApplicationsResponseBodyDataMetrics& operator=(const ListDoctorApplicationsResponseBodyDataMetrics &) = default ;
    ListDoctorApplicationsResponseBodyDataMetrics& operator=(ListDoctorApplicationsResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memSeconds_ != nullptr
        && this->memUtilization_ != nullptr && this->vcoreSeconds_ != nullptr && this->vcoreUtilization_ != nullptr; };
    // memSeconds Field Functions 
    bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
    void deleteMemSeconds() { this->memSeconds_ = nullptr;};
    inline const Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds) };
    inline Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setMemSeconds(const Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setMemSeconds(Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // memUtilization Field Functions 
    bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
    void deleteMemUtilization() { this->memUtilization_ = nullptr;};
    inline const Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization & memUtilization() const { DARABONBA_PTR_GET_CONST(memUtilization_, Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization) };
    inline Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization memUtilization() { DARABONBA_PTR_GET(memUtilization_, Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setMemUtilization(const Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization & memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setMemUtilization(Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization && memUtilization) { DARABONBA_PTR_SET_RVALUE(memUtilization_, memUtilization) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds) };
    inline Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setVcoreSeconds(const Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setVcoreSeconds(Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


    // vcoreUtilization Field Functions 
    bool hasVcoreUtilization() const { return this->vcoreUtilization_ != nullptr;};
    void deleteVcoreUtilization() { this->vcoreUtilization_ = nullptr;};
    inline const Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization & vcoreUtilization() const { DARABONBA_PTR_GET_CONST(vcoreUtilization_, Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization) };
    inline Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization vcoreUtilization() { DARABONBA_PTR_GET(vcoreUtilization_, Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setVcoreUtilization(const Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization & vcoreUtilization) { DARABONBA_PTR_SET_VALUE(vcoreUtilization_, vcoreUtilization) };
    inline ListDoctorApplicationsResponseBodyDataMetrics& setVcoreUtilization(Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization && vcoreUtilization) { DARABONBA_PTR_SET_RVALUE(vcoreUtilization_, vcoreUtilization) };


  protected:
    // The amount of memory consumed.
    std::shared_ptr<Models::ListDoctorApplicationsResponseBodyDataMetricsMemSeconds> memSeconds_ = nullptr;
    // The memory usage
    std::shared_ptr<Models::ListDoctorApplicationsResponseBodyDataMetricsMemUtilization> memUtilization_ = nullptr;
    // The CPU usage.
    std::shared_ptr<Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreSeconds> vcoreSeconds_ = nullptr;
    // The CPU utilization. This parameter has the same meaning as %CPU in the Linux top command.
    std::shared_ptr<Models::ListDoctorApplicationsResponseBodyDataMetricsVcoreUtilization> vcoreUtilization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
