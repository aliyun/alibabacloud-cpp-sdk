// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYREPORTRESPONSEBODYREPORTSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYREPORTRESPONSEBODYREPORTSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetRealtimeConcurrencyReportResponseBodyReportsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeConcurrencyReportResponseBodyReportsList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(MaxConcurrencyLimit, maxConcurrencyLimit_);
      DARABONBA_PTR_TO_JSON(MinConcurrencyLimit, minConcurrencyLimit_);
      DARABONBA_PTR_TO_JSON(OccupiedConcurrencyCount, occupiedConcurrencyCount_);
      DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeConcurrencyReportResponseBodyReportsList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrencyLimit, maxConcurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(MinConcurrencyLimit, minConcurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(OccupiedConcurrencyCount, occupiedConcurrencyCount_);
      DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
    };
    GetRealtimeConcurrencyReportResponseBodyReportsList() = default ;
    GetRealtimeConcurrencyReportResponseBodyReportsList(const GetRealtimeConcurrencyReportResponseBodyReportsList &) = default ;
    GetRealtimeConcurrencyReportResponseBodyReportsList(GetRealtimeConcurrencyReportResponseBodyReportsList &&) = default ;
    GetRealtimeConcurrencyReportResponseBodyReportsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeConcurrencyReportResponseBodyReportsList() = default ;
    GetRealtimeConcurrencyReportResponseBodyReportsList& operator=(const GetRealtimeConcurrencyReportResponseBodyReportsList &) = default ;
    GetRealtimeConcurrencyReportResponseBodyReportsList& operator=(GetRealtimeConcurrencyReportResponseBodyReportsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobGroupName_ == nullptr && return this->maxConcurrencyLimit_ == nullptr && return this->minConcurrencyLimit_ == nullptr
        && return this->occupiedConcurrencyCount_ == nullptr && return this->reportDate_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // maxConcurrencyLimit Field Functions 
    bool hasMaxConcurrencyLimit() const { return this->maxConcurrencyLimit_ != nullptr;};
    void deleteMaxConcurrencyLimit() { this->maxConcurrencyLimit_ = nullptr;};
    inline int64_t maxConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrencyLimit_, 0L) };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setMaxConcurrencyLimit(int64_t maxConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(maxConcurrencyLimit_, maxConcurrencyLimit) };


    // minConcurrencyLimit Field Functions 
    bool hasMinConcurrencyLimit() const { return this->minConcurrencyLimit_ != nullptr;};
    void deleteMinConcurrencyLimit() { this->minConcurrencyLimit_ = nullptr;};
    inline int64_t minConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(minConcurrencyLimit_, 0L) };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setMinConcurrencyLimit(int64_t minConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(minConcurrencyLimit_, minConcurrencyLimit) };


    // occupiedConcurrencyCount Field Functions 
    bool hasOccupiedConcurrencyCount() const { return this->occupiedConcurrencyCount_ != nullptr;};
    void deleteOccupiedConcurrencyCount() { this->occupiedConcurrencyCount_ = nullptr;};
    inline int64_t occupiedConcurrencyCount() const { DARABONBA_PTR_GET_DEFAULT(occupiedConcurrencyCount_, 0L) };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setOccupiedConcurrencyCount(int64_t occupiedConcurrencyCount) { DARABONBA_PTR_SET_VALUE(occupiedConcurrencyCount_, occupiedConcurrencyCount) };


    // reportDate Field Functions 
    bool hasReportDate() const { return this->reportDate_ != nullptr;};
    void deleteReportDate() { this->reportDate_ = nullptr;};
    inline int64_t reportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, 0L) };
    inline GetRealtimeConcurrencyReportResponseBodyReportsList& setReportDate(int64_t reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<int64_t> maxConcurrencyLimit_ = nullptr;
    std::shared_ptr<int64_t> minConcurrencyLimit_ = nullptr;
    std::shared_ptr<int64_t> occupiedConcurrencyCount_ = nullptr;
    std::shared_ptr<int64_t> reportDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
