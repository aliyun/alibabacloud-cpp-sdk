// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BriefResourceSetting.hpp>
#include <alibabacloud/models/DeploymentRestoreStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StartJobRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(resourceSettingSpec, resourceSettingSpec_);
      DARABONBA_PTR_TO_JSON(restoreStrategy, restoreStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(resourceSettingSpec, resourceSettingSpec_);
      DARABONBA_PTR_FROM_JSON(restoreStrategy, restoreStrategy_);
    };
    StartJobRequestBody() = default ;
    StartJobRequestBody(const StartJobRequestBody &) = default ;
    StartJobRequestBody(StartJobRequestBody &&) = default ;
    StartJobRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobRequestBody() = default ;
    StartJobRequestBody& operator=(const StartJobRequestBody &) = default ;
    StartJobRequestBody& operator=(StartJobRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr
        && this->resourceSettingSpec_ == nullptr && this->restoreStrategy_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline StartJobRequestBody& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // resourceSettingSpec Field Functions 
    bool hasResourceSettingSpec() const { return this->resourceSettingSpec_ != nullptr;};
    void deleteResourceSettingSpec() { this->resourceSettingSpec_ = nullptr;};
    inline const BriefResourceSetting & getResourceSettingSpec() const { DARABONBA_PTR_GET_CONST(resourceSettingSpec_, BriefResourceSetting) };
    inline BriefResourceSetting getResourceSettingSpec() { DARABONBA_PTR_GET(resourceSettingSpec_, BriefResourceSetting) };
    inline StartJobRequestBody& setResourceSettingSpec(const BriefResourceSetting & resourceSettingSpec) { DARABONBA_PTR_SET_VALUE(resourceSettingSpec_, resourceSettingSpec) };
    inline StartJobRequestBody& setResourceSettingSpec(BriefResourceSetting && resourceSettingSpec) { DARABONBA_PTR_SET_RVALUE(resourceSettingSpec_, resourceSettingSpec) };


    // restoreStrategy Field Functions 
    bool hasRestoreStrategy() const { return this->restoreStrategy_ != nullptr;};
    void deleteRestoreStrategy() { this->restoreStrategy_ = nullptr;};
    inline const DeploymentRestoreStrategy & getRestoreStrategy() const { DARABONBA_PTR_GET_CONST(restoreStrategy_, DeploymentRestoreStrategy) };
    inline DeploymentRestoreStrategy getRestoreStrategy() { DARABONBA_PTR_GET(restoreStrategy_, DeploymentRestoreStrategy) };
    inline StartJobRequestBody& setRestoreStrategy(const DeploymentRestoreStrategy & restoreStrategy) { DARABONBA_PTR_SET_VALUE(restoreStrategy_, restoreStrategy) };
    inline StartJobRequestBody& setRestoreStrategy(DeploymentRestoreStrategy && restoreStrategy) { DARABONBA_PTR_SET_RVALUE(restoreStrategy_, restoreStrategy) };


  protected:
    // The deployment ID.
    shared_ptr<string> deploymentId_ {};
    // The resource configuration of the deployment.
    shared_ptr<BriefResourceSetting> resourceSettingSpec_ {};
    // The start offset of the job.
    shared_ptr<DeploymentRestoreStrategy> restoreStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
