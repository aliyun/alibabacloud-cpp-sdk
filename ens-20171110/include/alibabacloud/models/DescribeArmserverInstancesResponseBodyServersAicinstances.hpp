// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERSAICINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERSAICINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes.hpp>
#include <alibabacloud/models/DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesResponseBodyServersAICInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesResponseBodyServersAICInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LatestAction, latestAction_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(SdgDeployInfo, sdgDeployInfo_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesResponseBodyServersAICInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LatestAction, latestAction_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(SdgDeployInfo, sdgDeployInfo_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeARMServerInstancesResponseBodyServersAICInstances() = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstances(const DescribeARMServerInstancesResponseBodyServersAICInstances &) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstances(DescribeARMServerInstancesResponseBodyServersAICInstances &&) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesResponseBodyServersAICInstances() = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstances& operator=(const DescribeARMServerInstancesResponseBodyServersAICInstances &) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstances& operator=(DescribeARMServerInstancesResponseBodyServersAICInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frequency_ != nullptr
        && this->imageId_ != nullptr && this->instanceId_ != nullptr && this->latestAction_ != nullptr && this->name_ != nullptr && this->networkAttributes_ != nullptr
        && this->resolution_ != nullptr && this->sdgDeployInfo_ != nullptr && this->spec_ != nullptr && this->state_ != nullptr && this->status_ != nullptr; };
    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int64_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0L) };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setFrequency(int64_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // latestAction Field Functions 
    bool hasLatestAction() const { return this->latestAction_ != nullptr;};
    void deleteLatestAction() { this->latestAction_ = nullptr;};
    inline string latestAction() const { DARABONBA_PTR_GET_DEFAULT(latestAction_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setLatestAction(string latestAction) { DARABONBA_PTR_SET_VALUE(latestAction_, latestAction) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkAttributes Field Functions 
    bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
    void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
    inline const Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes & networkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes) };
    inline Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes networkAttributes() { DARABONBA_PTR_GET(networkAttributes_, Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes) };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setNetworkAttributes(const Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setNetworkAttributes(Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // sdgDeployInfo Field Functions 
    bool hasSdgDeployInfo() const { return this->sdgDeployInfo_ != nullptr;};
    void deleteSdgDeployInfo() { this->sdgDeployInfo_ = nullptr;};
    inline const Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo & sdgDeployInfo() const { DARABONBA_PTR_GET_CONST(sdgDeployInfo_, Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo) };
    inline Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo sdgDeployInfo() { DARABONBA_PTR_GET(sdgDeployInfo_, Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo) };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setSdgDeployInfo(const Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo & sdgDeployInfo) { DARABONBA_PTR_SET_VALUE(sdgDeployInfo_, sdgDeployInfo) };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setSdgDeployInfo(Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo && sdgDeployInfo) { DARABONBA_PTR_SET_RVALUE(sdgDeployInfo_, sdgDeployInfo) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The refresh rate of the AIC instance. Unit: Hz.
    std::shared_ptr<int64_t> frequency_ = nullptr;
    // The ID of the AIC image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the AIC instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The operation that was most recently performed.
    std::shared_ptr<string> latestAction_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> name_ = nullptr;
    // The network attributes of the AIC instance.
    std::shared_ptr<Models::DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes> networkAttributes_ = nullptr;
    // The resolution of the AIC instance.
    std::shared_ptr<string> resolution_ = nullptr;
    // The information about the shared data group (SDG) that is deployed on the AIC instance.
    std::shared_ptr<Models::DescribeARMServerInstancesResponseBodyServersAICInstancesSdgDeployInfo> sdgDeployInfo_ = nullptr;
    // The specification of the AIC instance.
    std::shared_ptr<string> spec_ = nullptr;
    // The operation status of the AIC instance. Valid values:
    // 
    // *   **success**
    // *   **failed**
    // *   **creating**
    // *   **releasing**
    // *   **rebooting**
    // *   **reseting**
    std::shared_ptr<string> state_ = nullptr;
    // The running status of the AIC instance. Valid values:
    // 
    // *   **running**
    // *   **pending**
    // *   **terminating**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
