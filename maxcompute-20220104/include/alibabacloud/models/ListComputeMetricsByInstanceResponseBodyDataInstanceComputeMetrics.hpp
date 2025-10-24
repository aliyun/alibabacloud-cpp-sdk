// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYINSTANCERESPONSEBODYDATAINSTANCECOMPUTEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYINSTANCERESPONSEBODYDATAINSTANCECOMPUTEMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(specCode, specCode_);
      DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(specCode, specCode_);
      DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics() = default ;
    ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics(const ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics &) = default ;
    ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics(ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics &&) = default ;
    ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics() = default ;
    ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& operator=(const ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics &) = default ;
    ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& operator=(ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobOwner_ == nullptr && return this->projectName_ == nullptr && return this->signature_ == nullptr && return this->specCode_ == nullptr
        && return this->submitTime_ == nullptr && return this->type_ == nullptr && return this->unit_ == nullptr && return this->usage_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // specCode Field Functions 
    bool hasSpecCode() const { return this->specCode_ != nullptr;};
    void deleteSpecCode() { this->specCode_ = nullptr;};
    inline string specCode() const { DARABONBA_PTR_GET_DEFAULT(specCode_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setSpecCode(string specCode) { DARABONBA_PTR_SET_VALUE(specCode_, specCode) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline int64_t submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, 0L) };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setSubmitTime(int64_t submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline double usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0.0) };
    inline ListComputeMetricsByInstanceResponseBodyDataInstanceComputeMetrics& setUsage(double usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The end time of the job execution.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The job(instance) ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The owner of the job.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The name of the project.
    std::shared_ptr<string> projectName_ = nullptr;
    // The signature of the SQL job.
    std::shared_ptr<string> signature_ = nullptr;
    // Specifications Type, specifies the resource package that you select when you purchase the MaxCompute service.
    // - OdpsStandard: the pay-as-you-go resource package.
    // 
    // - OdpsSpot: the pay-as-you-go spot resource package.
    std::shared_ptr<string> specCode_ = nullptr;
    // The submission time of the job.
    std::shared_ptr<int64_t> submitTime_ = nullptr;
    // Metering types.
    // - ComputationSql: the metering data of SQL jobs that involve internal tables.
    // 
    // - ComputationSqlOTS: the metering data of SQL jobs that involve Tablestore external tables.
    // 
    // - ComputationSqlOSS: the metering data of SQL jobs that involve OSS external tables.
    // 
    // - MapReduce: the metering data of MapReduce jobs.
    // 
    // - spark: the metering data of Spark jobs.
    // 
    // - mars: the metering data of Mars jobs.
    std::shared_ptr<string> type_ = nullptr;
    // The unit of computing resource usage
    std::shared_ptr<string> unit_ = nullptr;
    // The computing resource usage is calculated based on the following items:
    // 
    // - Amount of scanned data in the unit of GB. For the jobs whose metering types are ComputationSql, ComputationSqlOTS, or ComputationSqlOSS, they are billed based on the amount of scanned data. The computing resource usage of such a job is calculated by using the following formula: Amount of scanned data × Complexity. The complexity is fixed at 1 for the jobs whose metering types are ComputationSqlOTS or ComputationSqlOSS.
    // 
    // - CU-hours. For the jobs whose metering types are MapReduce, spark, or mars, they are billed based on CU-hours.
    std::shared_ptr<double> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
