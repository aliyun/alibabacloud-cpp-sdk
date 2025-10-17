// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYJOBSTEPCHECKPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYJOBSTEPCHECKPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyJobStepCheckpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyJobStepCheckpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(JobStepId, jobStepId_);
      DARABONBA_PTR_TO_JSON(NewCheckPoint, newCheckPoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyJobStepCheckpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(JobStepId, jobStepId_);
      DARABONBA_PTR_FROM_JSON(NewCheckPoint, newCheckPoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyJobStepCheckpointRequest() = default ;
    ModifyJobStepCheckpointRequest(const ModifyJobStepCheckpointRequest &) = default ;
    ModifyJobStepCheckpointRequest(ModifyJobStepCheckpointRequest &&) = default ;
    ModifyJobStepCheckpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyJobStepCheckpointRequest() = default ;
    ModifyJobStepCheckpointRequest& operator=(const ModifyJobStepCheckpointRequest &) = default ;
    ModifyJobStepCheckpointRequest& operator=(ModifyJobStepCheckpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && return this->jobStepId_ == nullptr && return this->newCheckPoint_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyJobStepCheckpointRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // jobStepId Field Functions 
    bool hasJobStepId() const { return this->jobStepId_ != nullptr;};
    void deleteJobStepId() { this->jobStepId_ = nullptr;};
    inline string jobStepId() const { DARABONBA_PTR_GET_DEFAULT(jobStepId_, "") };
    inline ModifyJobStepCheckpointRequest& setJobStepId(string jobStepId) { DARABONBA_PTR_SET_VALUE(jobStepId_, jobStepId) };


    // newCheckPoint Field Functions 
    bool hasNewCheckPoint() const { return this->newCheckPoint_ != nullptr;};
    void deleteNewCheckPoint() { this->newCheckPoint_ = nullptr;};
    inline int64_t newCheckPoint() const { DARABONBA_PTR_GET_DEFAULT(newCheckPoint_, 0L) };
    inline ModifyJobStepCheckpointRequest& setNewCheckPoint(int64_t newCheckPoint) { DARABONBA_PTR_SET_VALUE(newCheckPoint_, newCheckPoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyJobStepCheckpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyJobStepCheckpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> dtsJobId_ = nullptr;
    std::shared_ptr<string> jobStepId_ = nullptr;
    std::shared_ptr<int64_t> newCheckPoint_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
