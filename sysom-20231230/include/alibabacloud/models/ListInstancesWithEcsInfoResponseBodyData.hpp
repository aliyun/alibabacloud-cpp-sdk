// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesWithEcsInfoResponseBodyDataInstanceTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesWithEcsInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesWithEcsInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(instance_tag, instanceTag_);
      DARABONBA_PTR_TO_JSON(kernel_version, kernelVersion_);
      DARABONBA_PTR_TO_JSON(os_arch, osArch_);
      DARABONBA_PTR_TO_JSON(os_health_score, osHealthScore_);
      DARABONBA_PTR_TO_JSON(os_name, osName_);
      DARABONBA_PTR_TO_JSON(private_ip, privateIp_);
      DARABONBA_PTR_TO_JSON(public_ip, publicIp_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resource_group_name, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesWithEcsInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(instance_tag, instanceTag_);
      DARABONBA_PTR_FROM_JSON(kernel_version, kernelVersion_);
      DARABONBA_PTR_FROM_JSON(os_arch, osArch_);
      DARABONBA_PTR_FROM_JSON(os_health_score, osHealthScore_);
      DARABONBA_PTR_FROM_JSON(os_name, osName_);
      DARABONBA_PTR_FROM_JSON(private_ip, privateIp_);
      DARABONBA_PTR_FROM_JSON(public_ip, publicIp_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resource_group_name, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListInstancesWithEcsInfoResponseBodyData() = default ;
    ListInstancesWithEcsInfoResponseBodyData(const ListInstancesWithEcsInfoResponseBodyData &) = default ;
    ListInstancesWithEcsInfoResponseBodyData(ListInstancesWithEcsInfoResponseBodyData &&) = default ;
    ListInstancesWithEcsInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesWithEcsInfoResponseBodyData() = default ;
    ListInstancesWithEcsInfoResponseBodyData& operator=(const ListInstancesWithEcsInfoResponseBodyData &) = default ;
    ListInstancesWithEcsInfoResponseBodyData& operator=(ListInstancesWithEcsInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceTag_ == nullptr && return this->kernelVersion_ == nullptr && return this->osArch_ == nullptr
        && return this->osHealthScore_ == nullptr && return this->osName_ == nullptr && return this->privateIp_ == nullptr && return this->publicIp_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceGroupName_ == nullptr && return this->status_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceTag Field Functions 
    bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
    void deleteInstanceTag() { this->instanceTag_ = nullptr;};
    inline const vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag> & instanceTag() const { DARABONBA_PTR_GET_CONST(instanceTag_, vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag>) };
    inline vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag> instanceTag() { DARABONBA_PTR_GET(instanceTag_, vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag>) };
    inline ListInstancesWithEcsInfoResponseBodyData& setInstanceTag(const vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag> & instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };
    inline ListInstancesWithEcsInfoResponseBodyData& setInstanceTag(vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag> && instanceTag) { DARABONBA_PTR_SET_RVALUE(instanceTag_, instanceTag) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string kernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // osArch Field Functions 
    bool hasOsArch() const { return this->osArch_ != nullptr;};
    void deleteOsArch() { this->osArch_ = nullptr;};
    inline string osArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


    // osHealthScore Field Functions 
    bool hasOsHealthScore() const { return this->osHealthScore_ != nullptr;};
    void deleteOsHealthScore() { this->osHealthScore_ = nullptr;};
    inline string osHealthScore() const { DARABONBA_PTR_GET_DEFAULT(osHealthScore_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setOsHealthScore(string osHealthScore) { DARABONBA_PTR_SET_VALUE(osHealthScore_, osHealthScore) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesWithEcsInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesWithEcsInfoResponseBodyDataInstanceTag>> instanceTag_ = nullptr;
    std::shared_ptr<string> kernelVersion_ = nullptr;
    std::shared_ptr<string> osArch_ = nullptr;
    std::shared_ptr<string> osHealthScore_ = nullptr;
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
