// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorJobsStatsResponseBodyDataAppsCount.hpp>
#include <alibabacloud/models/ListDoctorJobsStatsResponseBodyDataMemSeconds.hpp>
#include <alibabacloud/models/ListDoctorJobsStatsResponseBodyDataVcoreSeconds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorJobsStatsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorJobsStatsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppsCount, appsCount_);
      DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorJobsStatsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppsCount, appsCount_);
      DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
    };
    ListDoctorJobsStatsResponseBodyData() = default ;
    ListDoctorJobsStatsResponseBodyData(const ListDoctorJobsStatsResponseBodyData &) = default ;
    ListDoctorJobsStatsResponseBodyData(ListDoctorJobsStatsResponseBodyData &&) = default ;
    ListDoctorJobsStatsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorJobsStatsResponseBodyData() = default ;
    ListDoctorJobsStatsResponseBodyData& operator=(const ListDoctorJobsStatsResponseBodyData &) = default ;
    ListDoctorJobsStatsResponseBodyData& operator=(ListDoctorJobsStatsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appsCount_ == nullptr
        && return this->memSeconds_ == nullptr && return this->queue_ == nullptr && return this->type_ == nullptr && return this->user_ == nullptr && return this->vcoreSeconds_ == nullptr; };
    // appsCount Field Functions 
    bool hasAppsCount() const { return this->appsCount_ != nullptr;};
    void deleteAppsCount() { this->appsCount_ = nullptr;};
    inline const Models::ListDoctorJobsStatsResponseBodyDataAppsCount & appsCount() const { DARABONBA_PTR_GET_CONST(appsCount_, Models::ListDoctorJobsStatsResponseBodyDataAppsCount) };
    inline Models::ListDoctorJobsStatsResponseBodyDataAppsCount appsCount() { DARABONBA_PTR_GET(appsCount_, Models::ListDoctorJobsStatsResponseBodyDataAppsCount) };
    inline ListDoctorJobsStatsResponseBodyData& setAppsCount(const Models::ListDoctorJobsStatsResponseBodyDataAppsCount & appsCount) { DARABONBA_PTR_SET_VALUE(appsCount_, appsCount) };
    inline ListDoctorJobsStatsResponseBodyData& setAppsCount(Models::ListDoctorJobsStatsResponseBodyDataAppsCount && appsCount) { DARABONBA_PTR_SET_RVALUE(appsCount_, appsCount) };


    // memSeconds Field Functions 
    bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
    void deleteMemSeconds() { this->memSeconds_ = nullptr;};
    inline const Models::ListDoctorJobsStatsResponseBodyDataMemSeconds & memSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Models::ListDoctorJobsStatsResponseBodyDataMemSeconds) };
    inline Models::ListDoctorJobsStatsResponseBodyDataMemSeconds memSeconds() { DARABONBA_PTR_GET(memSeconds_, Models::ListDoctorJobsStatsResponseBodyDataMemSeconds) };
    inline ListDoctorJobsStatsResponseBodyData& setMemSeconds(const Models::ListDoctorJobsStatsResponseBodyDataMemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
    inline ListDoctorJobsStatsResponseBodyData& setMemSeconds(Models::ListDoctorJobsStatsResponseBodyDataMemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline ListDoctorJobsStatsResponseBodyData& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDoctorJobsStatsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListDoctorJobsStatsResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline const Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds & vcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds) };
    inline Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds vcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds) };
    inline ListDoctorJobsStatsResponseBodyData& setVcoreSeconds(const Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
    inline ListDoctorJobsStatsResponseBodyData& setVcoreSeconds(Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


  protected:
    // The total number of jobs.
    std::shared_ptr<Models::ListDoctorJobsStatsResponseBodyDataAppsCount> appsCount_ = nullptr;
    // The aggregated amount of memory that is allocated to the job multiplied by the number of seconds the job has been running.
    std::shared_ptr<Models::ListDoctorJobsStatsResponseBodyDataMemSeconds> memSeconds_ = nullptr;
    // The YARN queue to which the job was submitted.
    std::shared_ptr<string> queue_ = nullptr;
    // The type of the compute engine.
    std::shared_ptr<string> type_ = nullptr;
    // The username that is used to submit the job.
    std::shared_ptr<string> user_ = nullptr;
    // The aggregated number of vCPUs that are allocated to the job multiplied by the number of seconds the job has been running.
    std::shared_ptr<Models::ListDoctorJobsStatsResponseBodyDataVcoreSeconds> vcoreSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
