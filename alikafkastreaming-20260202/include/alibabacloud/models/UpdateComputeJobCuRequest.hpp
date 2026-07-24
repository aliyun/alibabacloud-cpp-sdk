// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEJOBCUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEJOBCUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class UpdateComputeJobCuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeJobCuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CuLimit, cuLimit_);
      DARABONBA_PTR_TO_JSON(CuReserved, cuReserved_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeJobCuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CuLimit, cuLimit_);
      DARABONBA_PTR_FROM_JSON(CuReserved, cuReserved_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateComputeJobCuRequest() = default ;
    UpdateComputeJobCuRequest(const UpdateComputeJobCuRequest &) = default ;
    UpdateComputeJobCuRequest(UpdateComputeJobCuRequest &&) = default ;
    UpdateComputeJobCuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeJobCuRequest() = default ;
    UpdateComputeJobCuRequest& operator=(const UpdateComputeJobCuRequest &) = default ;
    UpdateComputeJobCuRequest& operator=(UpdateComputeJobCuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cuLimit_ == nullptr && this->cuReserved_ == nullptr && this->instanceId_ == nullptr && this->jobName_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateComputeJobCuRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cuLimit Field Functions 
    bool hasCuLimit() const { return this->cuLimit_ != nullptr;};
    void deleteCuLimit() { this->cuLimit_ = nullptr;};
    inline double getCuLimit() const { DARABONBA_PTR_GET_DEFAULT(cuLimit_, 0.0) };
    inline UpdateComputeJobCuRequest& setCuLimit(double cuLimit) { DARABONBA_PTR_SET_VALUE(cuLimit_, cuLimit) };


    // cuReserved Field Functions 
    bool hasCuReserved() const { return this->cuReserved_ != nullptr;};
    void deleteCuReserved() { this->cuReserved_ = nullptr;};
    inline double getCuReserved() const { DARABONBA_PTR_GET_DEFAULT(cuReserved_, 0.0) };
    inline UpdateComputeJobCuRequest& setCuReserved(double cuReserved) { DARABONBA_PTR_SET_VALUE(cuReserved_, cuReserved) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateComputeJobCuRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline UpdateComputeJobCuRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateComputeJobCuRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<double> cuLimit_ {};
    shared_ptr<double> cuReserved_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
