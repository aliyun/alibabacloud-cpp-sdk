// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODYSESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODYSESSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups.hpp>
#include <alibabacloud/models/DescribeGlobalDesktopRecordsResponseBodySessionsSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalDesktopRecordsResponseBodySessions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopRecordsResponseBodySessions& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(LatestConnectionTime, latestConnectionTime_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(SessionIdleTime, sessionIdleTime_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(StatusChangeTime, statusChangeTime_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(TotalConnectionTime, totalConnectionTime_);
      DARABONBA_PTR_TO_JSON(UpTime, upTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopRecordsResponseBodySessions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(LatestConnectionTime, latestConnectionTime_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(SessionIdleTime, sessionIdleTime_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(StatusChangeTime, statusChangeTime_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(TotalConnectionTime, totalConnectionTime_);
      DARABONBA_PTR_FROM_JSON(UpTime, upTime_);
    };
    DescribeGlobalDesktopRecordsResponseBodySessions() = default ;
    DescribeGlobalDesktopRecordsResponseBodySessions(const DescribeGlobalDesktopRecordsResponseBodySessions &) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessions(DescribeGlobalDesktopRecordsResponseBodySessions &&) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopRecordsResponseBodySessions() = default ;
    DescribeGlobalDesktopRecordsResponseBodySessions& operator=(const DescribeGlobalDesktopRecordsResponseBodySessions &) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessions& operator=(DescribeGlobalDesktopRecordsResponseBodySessions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && return this->cpu_ == nullptr && return this->desktopGroupId_ == nullptr && return this->desktopGroupName_ == nullptr && return this->desktopId_ == nullptr && return this->desktopName_ == nullptr
        && return this->desktopStatus_ == nullptr && return this->endUserId_ == nullptr && return this->endUserIds_ == nullptr && return this->gpuSpec_ == nullptr && return this->latestConnectionTime_ == nullptr
        && return this->memory_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteName_ == nullptr && return this->osType_ == nullptr && return this->platform_ == nullptr
        && return this->protocolType_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroups_ == nullptr && return this->sessionIdleTime_ == nullptr && return this->sessions_ == nullptr
        && return this->statusChangeTime_ == nullptr && return this->subPayType_ == nullptr && return this->totalConnectionTime_ == nullptr && return this->upTime_ == nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string desktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // latestConnectionTime Field Functions 
    bool hasLatestConnectionTime() const { return this->latestConnectionTime_ != nullptr;};
    void deleteLatestConnectionTime() { this->latestConnectionTime_ = nullptr;};
    inline int64_t latestConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(latestConnectionTime_, 0L) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setLatestConnectionTime(int64_t latestConnectionTime) { DARABONBA_PTR_SET_VALUE(latestConnectionTime_, latestConnectionTime) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups> & resourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups>) };
    inline vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups> resourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups>) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setResourceGroups(const vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setResourceGroups(vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


    // sessionIdleTime Field Functions 
    bool hasSessionIdleTime() const { return this->sessionIdleTime_ != nullptr;};
    void deleteSessionIdleTime() { this->sessionIdleTime_ = nullptr;};
    inline int64_t sessionIdleTime() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTime_, 0L) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setSessionIdleTime(int64_t sessionIdleTime) { DARABONBA_PTR_SET_VALUE(sessionIdleTime_, sessionIdleTime) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions>) };
    inline vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions>) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setSessions(const vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setSessions(vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // statusChangeTime Field Functions 
    bool hasStatusChangeTime() const { return this->statusChangeTime_ != nullptr;};
    void deleteStatusChangeTime() { this->statusChangeTime_ = nullptr;};
    inline int64_t statusChangeTime() const { DARABONBA_PTR_GET_DEFAULT(statusChangeTime_, 0L) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setStatusChangeTime(int64_t statusChangeTime) { DARABONBA_PTR_SET_VALUE(statusChangeTime_, statusChangeTime) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string subPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // totalConnectionTime Field Functions 
    bool hasTotalConnectionTime() const { return this->totalConnectionTime_ != nullptr;};
    void deleteTotalConnectionTime() { this->totalConnectionTime_ = nullptr;};
    inline int64_t totalConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(totalConnectionTime_, 0L) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setTotalConnectionTime(int64_t totalConnectionTime) { DARABONBA_PTR_SET_VALUE(totalConnectionTime_, totalConnectionTime) };


    // upTime Field Functions 
    bool hasUpTime() const { return this->upTime_ != nullptr;};
    void deleteUpTime() { this->upTime_ = nullptr;};
    inline int64_t upTime() const { DARABONBA_PTR_GET_DEFAULT(upTime_, 0L) };
    inline DescribeGlobalDesktopRecordsResponseBodySessions& setUpTime(int64_t upTime) { DARABONBA_PTR_SET_VALUE(upTime_, upTime) };


  protected:
    // The connection status of the cloud desktop.
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The ID of the cloud computer share.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The name of the cloud computer share.
    std::shared_ptr<string> desktopGroupName_ = nullptr;
    // The cloud computer IDs.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The cloud computer name.
    std::shared_ptr<string> desktopName_ = nullptr;
    // 桌面状态
    std::shared_ptr<string> desktopStatus_ = nullptr;
    // The end user ID.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The list of assigned terminal user IDs.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The size of the GPU memory.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The duration of the last connection to the cloud computer. Unit: seconds
    std::shared_ptr<int64_t> latestConnectionTime_ = nullptr;
    // The memory of the cloud computer. Unit: MiB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The office network name.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The OS type. Valid values:
    // 
    // *   Windows
    // *   Linux
    std::shared_ptr<string> osType_ = nullptr;
    // The specific model of the operating system.
    std::shared_ptr<string> platform_ = nullptr;
    // Protocol type.
    // 
    // *   HDX
    // *   ASP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The ID of the region where the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the enterprise resource group.
    std::shared_ptr<vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups>> resourceGroups_ = nullptr;
    // The idle duration of the session. Unit: minutes.
    std::shared_ptr<int64_t> sessionIdleTime_ = nullptr;
    // The session details.
    std::shared_ptr<vector<Models::DescribeGlobalDesktopRecordsResponseBodySessionsSessions>> sessions_ = nullptr;
    // The time when the status of the cloud computer was changed.
    std::shared_ptr<int64_t> statusChangeTime_ = nullptr;
    // The billing method of the cloud computer. Valid values:
    // 
    // *   prePaid: The monthly purchase is unlimited.
    // *   postPaid: pay-as-you-go
    // *   monthPackage: monthly duration.
    std::shared_ptr<string> subPayType_ = nullptr;
    // The total connection duration. Unit: seconds
    std::shared_ptr<int64_t> totalConnectionTime_ = nullptr;
    // The startup duration of the cloud computer. Unit: seconds
    std::shared_ptr<int64_t> upTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
