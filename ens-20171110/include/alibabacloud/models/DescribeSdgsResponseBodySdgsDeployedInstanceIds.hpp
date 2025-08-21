// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSRESPONSEBODYSDGSDEPLOYEDINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSRESPONSEBODYSDGSDEPLOYEDINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGsResponseBodySDGsDeployedInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGsResponseBodySDGsDeployedInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGsResponseBodySDGsDeployedInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeploymentType, deploymentType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSDGsResponseBodySDGsDeployedInstanceIds() = default ;
    DescribeSDGsResponseBodySDGsDeployedInstanceIds(const DescribeSDGsResponseBodySDGsDeployedInstanceIds &) = default ;
    DescribeSDGsResponseBodySDGsDeployedInstanceIds(DescribeSDGsResponseBodySDGsDeployedInstanceIds &&) = default ;
    DescribeSDGsResponseBodySDGsDeployedInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGsResponseBodySDGsDeployedInstanceIds() = default ;
    DescribeSDGsResponseBodySDGsDeployedInstanceIds& operator=(const DescribeSDGsResponseBodySDGsDeployedInstanceIds &) = default ;
    DescribeSDGsResponseBodySDGsDeployedInstanceIds& operator=(DescribeSDGsResponseBodySDGsDeployedInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->deploymentType_ != nullptr && this->instanceId_ != nullptr && this->status_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSDGsResponseBodySDGsDeployedInstanceIds& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deploymentType Field Functions 
    bool hasDeploymentType() const { return this->deploymentType_ != nullptr;};
    void deleteDeploymentType() { this->deploymentType_ = nullptr;};
    inline string deploymentType() const { DARABONBA_PTR_GET_DEFAULT(deploymentType_, "") };
    inline DescribeSDGsResponseBodySDGsDeployedInstanceIds& setDeploymentType(string deploymentType) { DARABONBA_PTR_SET_VALUE(deploymentType_, deploymentType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSDGsResponseBodySDGsDeployedInstanceIds& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGsResponseBodySDGsDeployedInstanceIds& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the SDG was deployed on the instance.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The deployment type of the SDG. Valid values:
    // 
    // *   common: common deployment.
    // *   overlay: read/write splitting deployment.
    std::shared_ptr<string> deploymentType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The deployment status. Valid values:
    // 
    // *   **sdg_deploying**
    // *   **failed**
    // *   **success**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
