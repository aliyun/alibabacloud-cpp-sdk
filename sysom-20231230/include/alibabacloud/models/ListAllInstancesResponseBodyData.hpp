// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllInstancesResponseBodyDataAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAllInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(agentConfigId, agentConfigId_);
      DARABONBA_PTR_TO_JSON(agentConfigName, agentConfigName_);
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
      DARABONBA_PTR_TO_JSON(installLevel, installLevel_);
      DARABONBA_PTR_TO_JSON(installType, installType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(kernelVersion, kernelVersion_);
      DARABONBA_PTR_TO_JSON(manageLevel, manageLevel_);
      DARABONBA_PTR_TO_JSON(manageType, manageType_);
      DARABONBA_PTR_TO_JSON(osArch, osArch_);
      DARABONBA_PTR_TO_JSON(osHealthScore, osHealthScore_);
      DARABONBA_PTR_TO_JSON(osName, osName_);
      DARABONBA_PTR_TO_JSON(privateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(publicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(agentConfigId, agentConfigId_);
      DARABONBA_PTR_FROM_JSON(agentConfigName, agentConfigName_);
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
      DARABONBA_PTR_FROM_JSON(installLevel, installLevel_);
      DARABONBA_PTR_FROM_JSON(installType, installType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(kernelVersion, kernelVersion_);
      DARABONBA_PTR_FROM_JSON(manageLevel, manageLevel_);
      DARABONBA_PTR_FROM_JSON(manageType, manageType_);
      DARABONBA_PTR_FROM_JSON(osArch, osArch_);
      DARABONBA_PTR_FROM_JSON(osHealthScore, osHealthScore_);
      DARABONBA_PTR_FROM_JSON(osName, osName_);
      DARABONBA_PTR_FROM_JSON(privateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(publicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListAllInstancesResponseBodyData() = default ;
    ListAllInstancesResponseBodyData(const ListAllInstancesResponseBodyData &) = default ;
    ListAllInstancesResponseBodyData(ListAllInstancesResponseBodyData &&) = default ;
    ListAllInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllInstancesResponseBodyData() = default ;
    ListAllInstancesResponseBodyData& operator=(const ListAllInstancesResponseBodyData &) = default ;
    ListAllInstancesResponseBodyData& operator=(ListAllInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentConfigId_ == nullptr
        && return this->agentConfigName_ == nullptr && return this->attributes_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->imageId_ == nullptr
        && return this->installLevel_ == nullptr && return this->installType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr
        && return this->kernelVersion_ == nullptr && return this->manageLevel_ == nullptr && return this->manageType_ == nullptr && return this->osArch_ == nullptr && return this->osHealthScore_ == nullptr
        && return this->osName_ == nullptr && return this->privateIp_ == nullptr && return this->publicIp_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceGroupName_ == nullptr
        && return this->status_ == nullptr; };
    // agentConfigId Field Functions 
    bool hasAgentConfigId() const { return this->agentConfigId_ != nullptr;};
    void deleteAgentConfigId() { this->agentConfigId_ = nullptr;};
    inline string agentConfigId() const { DARABONBA_PTR_GET_DEFAULT(agentConfigId_, "") };
    inline ListAllInstancesResponseBodyData& setAgentConfigId(string agentConfigId) { DARABONBA_PTR_SET_VALUE(agentConfigId_, agentConfigId) };


    // agentConfigName Field Functions 
    bool hasAgentConfigName() const { return this->agentConfigName_ != nullptr;};
    void deleteAgentConfigName() { this->agentConfigName_ = nullptr;};
    inline string agentConfigName() const { DARABONBA_PTR_GET_DEFAULT(agentConfigName_, "") };
    inline ListAllInstancesResponseBodyData& setAgentConfigName(string agentConfigName) { DARABONBA_PTR_SET_VALUE(agentConfigName_, agentConfigName) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::ListAllInstancesResponseBodyDataAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::ListAllInstancesResponseBodyDataAttributes>) };
    inline vector<Models::ListAllInstancesResponseBodyDataAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::ListAllInstancesResponseBodyDataAttributes>) };
    inline ListAllInstancesResponseBodyData& setAttributes(const vector<Models::ListAllInstancesResponseBodyDataAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline ListAllInstancesResponseBodyData& setAttributes(vector<Models::ListAllInstancesResponseBodyDataAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListAllInstancesResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListAllInstancesResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListAllInstancesResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // installLevel Field Functions 
    bool hasInstallLevel() const { return this->installLevel_ != nullptr;};
    void deleteInstallLevel() { this->installLevel_ = nullptr;};
    inline string installLevel() const { DARABONBA_PTR_GET_DEFAULT(installLevel_, "") };
    inline ListAllInstancesResponseBodyData& setInstallLevel(string installLevel) { DARABONBA_PTR_SET_VALUE(installLevel_, installLevel) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline string installType() const { DARABONBA_PTR_GET_DEFAULT(installType_, "") };
    inline ListAllInstancesResponseBodyData& setInstallType(string installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAllInstancesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAllInstancesResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListAllInstancesResponseBodyData& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string kernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline ListAllInstancesResponseBodyData& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // manageLevel Field Functions 
    bool hasManageLevel() const { return this->manageLevel_ != nullptr;};
    void deleteManageLevel() { this->manageLevel_ = nullptr;};
    inline string manageLevel() const { DARABONBA_PTR_GET_DEFAULT(manageLevel_, "") };
    inline ListAllInstancesResponseBodyData& setManageLevel(string manageLevel) { DARABONBA_PTR_SET_VALUE(manageLevel_, manageLevel) };


    // manageType Field Functions 
    bool hasManageType() const { return this->manageType_ != nullptr;};
    void deleteManageType() { this->manageType_ = nullptr;};
    inline string manageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
    inline ListAllInstancesResponseBodyData& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


    // osArch Field Functions 
    bool hasOsArch() const { return this->osArch_ != nullptr;};
    void deleteOsArch() { this->osArch_ = nullptr;};
    inline string osArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
    inline ListAllInstancesResponseBodyData& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


    // osHealthScore Field Functions 
    bool hasOsHealthScore() const { return this->osHealthScore_ != nullptr;};
    void deleteOsHealthScore() { this->osHealthScore_ = nullptr;};
    inline int32_t osHealthScore() const { DARABONBA_PTR_GET_DEFAULT(osHealthScore_, 0) };
    inline ListAllInstancesResponseBodyData& setOsHealthScore(int32_t osHealthScore) { DARABONBA_PTR_SET_VALUE(osHealthScore_, osHealthScore) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline ListAllInstancesResponseBodyData& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListAllInstancesResponseBodyData& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListAllInstancesResponseBodyData& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAllInstancesResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListAllInstancesResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAllInstancesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> agentConfigId_ = nullptr;
    std::shared_ptr<string> agentConfigName_ = nullptr;
    std::shared_ptr<vector<Models::ListAllInstancesResponseBodyDataAttributes>> attributes_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> installLevel_ = nullptr;
    std::shared_ptr<string> installType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> kernelVersion_ = nullptr;
    std::shared_ptr<string> manageLevel_ = nullptr;
    std::shared_ptr<string> manageType_ = nullptr;
    std::shared_ptr<string> osArch_ = nullptr;
    std::shared_ptr<int32_t> osHealthScore_ = nullptr;
    std::shared_ptr<string> osName_ = nullptr;
    std::shared_ptr<string> privateIp_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
