// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWARNINGMACHINESRESPONSEBODYWARNINGMACHINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWARNINGMACHINESRESPONSEBODYWARNINGMACHINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWarningMachinesResponseBodyWarningMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarningMachinesResponseBodyWarningMachines& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(PassCount, passCount_);
      DARABONBA_PTR_TO_JSON(PortOpen, portOpen_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarningMachinesResponseBodyWarningMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
      DARABONBA_PTR_FROM_JSON(PortOpen, portOpen_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeWarningMachinesResponseBodyWarningMachines() = default ;
    DescribeWarningMachinesResponseBodyWarningMachines(const DescribeWarningMachinesResponseBodyWarningMachines &) = default ;
    DescribeWarningMachinesResponseBodyWarningMachines(DescribeWarningMachinesResponseBodyWarningMachines &&) = default ;
    DescribeWarningMachinesResponseBodyWarningMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarningMachinesResponseBodyWarningMachines() = default ;
    DescribeWarningMachinesResponseBodyWarningMachines& operator=(const DescribeWarningMachinesResponseBodyWarningMachines &) = default ;
    DescribeWarningMachinesResponseBodyWarningMachines& operator=(DescribeWarningMachinesResponseBodyWarningMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && return this->authVersion_ == nullptr && return this->bind_ == nullptr && return this->containerId_ == nullptr && return this->containerName_ == nullptr && return this->highWarningCount_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->lowWarningCount_ == nullptr
        && return this->mediumWarningCount_ == nullptr && return this->online_ == nullptr && return this->passCount_ == nullptr && return this->portOpen_ == nullptr && return this->regionId_ == nullptr
        && return this->status_ == nullptr && return this->uuid_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline bool bind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // highWarningCount Field Functions 
    bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
    void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
    inline int32_t highWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lowWarningCount Field Functions 
    bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
    void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
    inline int32_t lowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


    // mediumWarningCount Field Functions 
    bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
    void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
    inline int32_t mediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // passCount Field Functions 
    bool hasPassCount() const { return this->passCount_ != nullptr;};
    void deletePassCount() { this->passCount_ = nullptr;};
    inline int32_t passCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


    // portOpen Field Functions 
    bool hasPortOpen() const { return this->portOpen_ != nullptr;};
    void deletePortOpen() { this->portOpen_ = nullptr;};
    inline bool portOpen() const { DARABONBA_PTR_GET_DEFAULT(portOpen_, false) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setPortOpen(bool portOpen) { DARABONBA_PTR_SET_VALUE(portOpen_, portOpen) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeWarningMachinesResponseBodyWarningMachines& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> assetType_ = nullptr;
    // The edition of Security Center that is authorized to protect the asset. Valid values:
    // 
    // *   **1**: Basic edition
    // *   **6**: Anti-virus edition
    // *   **5**: Advanced edition
    // *   **3**: Enterprise edition
    // *   **7**: Ultimate edition
    // *   **10**: Value-added Plan edition
    std::shared_ptr<int32_t> authVersion_ = nullptr;
    // Indicates whether Security Center is authorized to protect the asset. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bind_ = nullptr;
    // The container ID.
    std::shared_ptr<string> containerId_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The number of **high-risk** items on the server.
    std::shared_ptr<int32_t> highWarningCount_ = nullptr;
    // The server ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The number of **low-risk** items on the server.
    std::shared_ptr<int32_t> lowWarningCount_ = nullptr;
    // The number of **medium-risk** items on the server.
    std::shared_ptr<int32_t> mediumWarningCount_ = nullptr;
    // Indicates whether the agent is online. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> online_ = nullptr;
    // The number of the check items that passed the baseline check on the server.
    std::shared_ptr<int32_t> passCount_ = nullptr;
    // Indicates whether a port on the server is accessible over the Internet. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> portOpen_ = nullptr;
    // The ID of the region in which the server is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The verification status of the risk item after the risk item is fixed. Valid values:
    // 
    // *   **1**: complete
    // *   **2**: verifying
    std::shared_ptr<int32_t> status_ = nullptr;
    // The UUID of the server on which the baseline check is performed.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
