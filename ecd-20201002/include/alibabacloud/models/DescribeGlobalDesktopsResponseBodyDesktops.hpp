// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDesktopsResponseBodyDesktopsClients.hpp>
#include <alibabacloud/models/DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers.hpp>
#include <alibabacloud/models/DescribeGlobalDesktopsResponseBodyDesktopsDisks.hpp>
#include <alibabacloud/models/DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate.hpp>
#include <alibabacloud/models/DescribeGlobalDesktopsResponseBodyDesktopsSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeGlobalDesktopsResponseBodyDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopsResponseBodyDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FotaUpdate, fotaUpdate_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(HibernationBeta, hibernationBeta_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsDescription, osDescription_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RealDesktopId, realDesktopId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionLocation, regionLocation_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(SupportHibernation, supportHibernation_);
      DARABONBA_PTR_TO_JSON(UserCustomName, userCustomName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopsResponseBodyDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FotaUpdate, fotaUpdate_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(HibernationBeta, hibernationBeta_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsDescription, osDescription_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RealDesktopId, realDesktopId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionLocation, regionLocation_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(SupportHibernation, supportHibernation_);
      DARABONBA_PTR_FROM_JSON(UserCustomName, userCustomName_);
    };
    DescribeGlobalDesktopsResponseBodyDesktops() = default ;
    DescribeGlobalDesktopsResponseBodyDesktops(const DescribeGlobalDesktopsResponseBodyDesktops &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktops(DescribeGlobalDesktopsResponseBodyDesktops &&) = default ;
    DescribeGlobalDesktopsResponseBodyDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopsResponseBodyDesktops() = default ;
    DescribeGlobalDesktopsResponseBodyDesktops& operator=(const DescribeGlobalDesktopsResponseBodyDesktops &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktops& operator=(DescribeGlobalDesktopsResponseBodyDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->clients_ != nullptr && this->connectionStatus_ != nullptr && this->cpu_ != nullptr && this->creationTime_ != nullptr && this->desktopGroupId_ != nullptr
        && this->desktopId_ != nullptr && this->desktopName_ != nullptr && this->desktopStatus_ != nullptr && this->desktopTimers_ != nullptr && this->desktopType_ != nullptr
        && this->directoryId_ != nullptr && this->disks_ != nullptr && this->endUserId_ != nullptr && this->endUserIds_ != nullptr && this->expiredTime_ != nullptr
        && this->fotaUpdate_ != nullptr && this->gpuMemory_ != nullptr && this->hibernationBeta_ != nullptr && this->hostName_ != nullptr && this->imageId_ != nullptr
        && this->lastStartTime_ != nullptr && this->localName_ != nullptr && this->managementFlags_ != nullptr && this->memory_ != nullptr && this->networkInterfaceIp_ != nullptr
        && this->officeSiteId_ != nullptr && this->os_ != nullptr && this->osDescription_ != nullptr && this->osType_ != nullptr && this->platform_ != nullptr
        && this->policyGroupId_ != nullptr && this->protocolType_ != nullptr && this->realDesktopId_ != nullptr && this->regionId_ != nullptr && this->regionLocation_ != nullptr
        && this->sessionType_ != nullptr && this->sessions_ != nullptr && this->supportHibernation_ != nullptr && this->userCustomName_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients> & clients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients>) };
    inline vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients> clients() { DARABONBA_PTR_GET(clients_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients>) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setClients(const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setClients(vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers> & desktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers>) };
    inline vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers> desktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers>) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopTimers(const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopTimers(vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks>) };
    inline vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks>) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDisks(const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setDisks(vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fotaUpdate Field Functions 
    bool hasFotaUpdate() const { return this->fotaUpdate_ != nullptr;};
    void deleteFotaUpdate() { this->fotaUpdate_ = nullptr;};
    inline const Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate & fotaUpdate() const { DARABONBA_PTR_GET_CONST(fotaUpdate_, Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate) };
    inline Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate fotaUpdate() { DARABONBA_PTR_GET(fotaUpdate_, Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setFotaUpdate(const Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate & fotaUpdate) { DARABONBA_PTR_SET_VALUE(fotaUpdate_, fotaUpdate) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setFotaUpdate(Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate && fotaUpdate) { DARABONBA_PTR_SET_RVALUE(fotaUpdate_, fotaUpdate) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // hibernationBeta Field Functions 
    bool hasHibernationBeta() const { return this->hibernationBeta_ != nullptr;};
    void deleteHibernationBeta() { this->hibernationBeta_ = nullptr;};
    inline bool hibernationBeta() const { DARABONBA_PTR_GET_DEFAULT(hibernationBeta_, false) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setHibernationBeta(bool hibernationBeta) { DARABONBA_PTR_SET_VALUE(hibernationBeta_, hibernationBeta) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // lastStartTime Field Functions 
    bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
    void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
    inline string lastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setLastStartTime(string lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // managementFlags Field Functions 
    bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
    void deleteManagementFlags() { this->managementFlags_ = nullptr;};
    inline const vector<string> & managementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
    inline vector<string> managementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaceIp Field Functions 
    bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
    void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
    inline string networkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osDescription Field Functions 
    bool hasOsDescription() const { return this->osDescription_ != nullptr;};
    void deleteOsDescription() { this->osDescription_ = nullptr;};
    inline string osDescription() const { DARABONBA_PTR_GET_DEFAULT(osDescription_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setOsDescription(string osDescription) { DARABONBA_PTR_SET_VALUE(osDescription_, osDescription) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // realDesktopId Field Functions 
    bool hasRealDesktopId() const { return this->realDesktopId_ != nullptr;};
    void deleteRealDesktopId() { this->realDesktopId_ = nullptr;};
    inline string realDesktopId() const { DARABONBA_PTR_GET_DEFAULT(realDesktopId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setRealDesktopId(string realDesktopId) { DARABONBA_PTR_SET_VALUE(realDesktopId_, realDesktopId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionLocation Field Functions 
    bool hasRegionLocation() const { return this->regionLocation_ != nullptr;};
    void deleteRegionLocation() { this->regionLocation_ = nullptr;};
    inline string regionLocation() const { DARABONBA_PTR_GET_DEFAULT(regionLocation_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setRegionLocation(string regionLocation) { DARABONBA_PTR_SET_VALUE(regionLocation_, regionLocation) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions>) };
    inline vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions>) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setSessions(const vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setSessions(vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // supportHibernation Field Functions 
    bool hasSupportHibernation() const { return this->supportHibernation_ != nullptr;};
    void deleteSupportHibernation() { this->supportHibernation_ = nullptr;};
    inline bool supportHibernation() const { DARABONBA_PTR_GET_DEFAULT(supportHibernation_, false) };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setSupportHibernation(bool supportHibernation) { DARABONBA_PTR_SET_VALUE(supportHibernation_, supportHibernation) };


    // userCustomName Field Functions 
    bool hasUserCustomName() const { return this->userCustomName_ != nullptr;};
    void deleteUserCustomName() { this->userCustomName_ = nullptr;};
    inline string userCustomName() const { DARABONBA_PTR_GET_DEFAULT(userCustomName_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktops& setUserCustomName(string userCustomName) { DARABONBA_PTR_SET_VALUE(userCustomName_, userCustomName) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    // 支持的客户端信息
    std::shared_ptr<vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsClients>> clients_ = nullptr;
    std::shared_ptr<string> connectionStatus_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<string> desktopName_ = nullptr;
    std::shared_ptr<string> desktopStatus_ = nullptr;
    std::shared_ptr<vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers>> desktopTimers_ = nullptr;
    std::shared_ptr<string> desktopType_ = nullptr;
    std::shared_ptr<string> directoryId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsDisks>> disks_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<Models::DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate> fotaUpdate_ = nullptr;
    std::shared_ptr<int32_t> gpuMemory_ = nullptr;
    std::shared_ptr<bool> hibernationBeta_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> lastStartTime_ = nullptr;
    std::shared_ptr<string> localName_ = nullptr;
    std::shared_ptr<vector<string>> managementFlags_ = nullptr;
    std::shared_ptr<int64_t> memory_ = nullptr;
    std::shared_ptr<string> networkInterfaceIp_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> osDescription_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> policyGroupId_ = nullptr;
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<string> realDesktopId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> regionLocation_ = nullptr;
    std::shared_ptr<string> sessionType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeGlobalDesktopsResponseBodyDesktopsSessions>> sessions_ = nullptr;
    std::shared_ptr<bool> supportHibernation_ = nullptr;
    std::shared_ptr<string> userCustomName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
