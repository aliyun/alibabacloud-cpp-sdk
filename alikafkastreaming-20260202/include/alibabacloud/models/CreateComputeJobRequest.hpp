// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class CreateComputeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CuLimit, cuLimit_);
      DARABONBA_PTR_TO_JSON(CuReserved, cuReserved_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CuLimit, cuLimit_);
      DARABONBA_PTR_FROM_JSON(CuReserved, cuReserved_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    CreateComputeJobRequest() = default ;
    CreateComputeJobRequest(const CreateComputeJobRequest &) = default ;
    CreateComputeJobRequest(CreateComputeJobRequest &&) = default ;
    CreateComputeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeJobRequest() = default ;
    CreateComputeJobRequest& operator=(const CreateComputeJobRequest &) = default ;
    CreateComputeJobRequest& operator=(CreateComputeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cuLimit_ == nullptr
        && this->cuReserved_ == nullptr && this->instanceId_ == nullptr && this->jobName_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr; };
    // cuLimit Field Functions 
    bool hasCuLimit() const { return this->cuLimit_ != nullptr;};
    void deleteCuLimit() { this->cuLimit_ = nullptr;};
    inline double getCuLimit() const { DARABONBA_PTR_GET_DEFAULT(cuLimit_, 0.0) };
    inline CreateComputeJobRequest& setCuLimit(double cuLimit) { DARABONBA_PTR_SET_VALUE(cuLimit_, cuLimit) };


    // cuReserved Field Functions 
    bool hasCuReserved() const { return this->cuReserved_ != nullptr;};
    void deleteCuReserved() { this->cuReserved_ = nullptr;};
    inline double getCuReserved() const { DARABONBA_PTR_GET_DEFAULT(cuReserved_, 0.0) };
    inline CreateComputeJobRequest& setCuReserved(double cuReserved) { DARABONBA_PTR_SET_VALUE(cuReserved_, cuReserved) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateComputeJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateComputeJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateComputeJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateComputeJobRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // This parameter is required.
    shared_ptr<double> cuLimit_ {};
    // This parameter is required.
    shared_ptr<double> cuReserved_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
