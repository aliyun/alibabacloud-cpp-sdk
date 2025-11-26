// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorJobsResponseBodyDataMetricsMemSeconds.hpp>
#include <alibabacloud/models/ListDoctorJobsResponseBodyDataMetricsVcoreSeconds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorJobsResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorJobsResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorJobsResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
    };
    ListDoctorJobsResponseBodyDataMetrics() = default ;
    ListDoctorJobsResponseBodyDataMetrics(const ListDoctorJobsResponseBodyDataMetrics &) = default ;
    ListDoctorJobsResponseBodyDataMetrics(ListDoctorJobsResponseBodyDataMetrics &&) = default ;
    ListDoctorJobsResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorJobsResponseBodyDataMetrics() = default ;
    ListDoctorJobsResponseBodyDataMetrics& operator=(const ListDoctorJobsResponseBodyDataMetrics &) = default ;
    ListDoctorJobsResponseBodyDataMetrics& operator=(ListDoctorJobsResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memSeconds_ == nullptr
        && return this->vcoreSeconds_ == nullptr; };
    // memSeconds Field Functions 
    bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
    void deleteMemSeconds() { this->memSeconds_ = nullptr;};
    inline const Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds) };
    inline Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds) };
    inline ListDoctorJobsResponseBodyDataMetrics& setMemSeconds(const Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline ListDoctorJobsResponseBodyDataMetrics& setMemSeconds(Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds) };
    inline Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds) };
    inline ListDoctorJobsResponseBodyDataMetrics& setVcoreSeconds(const Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline ListDoctorJobsResponseBodyDataMetrics& setVcoreSeconds(Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


  protected:
    // The amount of memory consumed.
    std::shared_ptr<Models::ListDoctorJobsResponseBodyDataMetricsMemSeconds> memSeconds_ = nullptr;
    // The CPU usage.
    std::shared_ptr<Models::ListDoctorJobsResponseBodyDataMetricsVcoreSeconds> vcoreSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
