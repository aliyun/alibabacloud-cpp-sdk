// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalDesktopRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGlobalDesktopRecordsResponseBody() = default ;
    DescribeGlobalDesktopRecordsResponseBody(const DescribeGlobalDesktopRecordsResponseBody &) = default ;
    DescribeGlobalDesktopRecordsResponseBody(DescribeGlobalDesktopRecordsResponseBody &&) = default ;
    DescribeGlobalDesktopRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopRecordsResponseBody() = default ;
    DescribeGlobalDesktopRecordsResponseBody& operator=(const DescribeGlobalDesktopRecordsResponseBody &) = default ;
    DescribeGlobalDesktopRecordsResponseBody& operator=(DescribeGlobalDesktopRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
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
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
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
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
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
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
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
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SessionsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionsItem& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(EstablishmentTime, establishmentTime_);
        };
        friend void from_json(const Darabonba::Json& j, SessionsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(EstablishmentTime, establishmentTime_);
        };
        SessionsItem() = default ;
        SessionsItem(const SessionsItem &) = default ;
        SessionsItem(SessionsItem &&) = default ;
        SessionsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionsItem() = default ;
        SessionsItem& operator=(const SessionsItem &) = default ;
        SessionsItem& operator=(SessionsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->establishmentTime_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline SessionsItem& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // establishmentTime Field Functions 
        bool hasEstablishmentTime() const { return this->establishmentTime_ != nullptr;};
        void deleteEstablishmentTime() { this->establishmentTime_ = nullptr;};
        inline string getEstablishmentTime() const { DARABONBA_PTR_GET_DEFAULT(establishmentTime_, "") };
        inline SessionsItem& setEstablishmentTime(string establishmentTime) { DARABONBA_PTR_SET_VALUE(establishmentTime_, establishmentTime) };


      protected:
        // The end user ID.
        shared_ptr<string> endUserId_ {};
        // The time when the session was created.
        shared_ptr<string> establishmentTime_ {};
      };

      class ResourceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        };
        ResourceGroups() = default ;
        ResourceGroups(const ResourceGroups &) = default ;
        ResourceGroups(ResourceGroups &&) = default ;
        ResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroups() = default ;
        ResourceGroups& operator=(const ResourceGroups &) = default ;
        ResourceGroups& operator=(ResourceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && this->resourceGroupName_ == nullptr; };
        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ResourceGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline ResourceGroups& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      protected:
        // The ID of the enterprise resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The queried resource group name.
        shared_ptr<string> resourceGroupName_ {};
      };

      virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->cpu_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->desktopStatus_ == nullptr && this->endUserId_ == nullptr && this->endUserIds_ == nullptr && this->gpuSpec_ == nullptr && this->latestConnectionTime_ == nullptr
        && this->memory_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteType_ == nullptr && this->osType_ == nullptr
        && this->platform_ == nullptr && this->protocolType_ == nullptr && this->regionId_ == nullptr && this->resourceGroups_ == nullptr && this->sessionIdleTime_ == nullptr
        && this->sessions_ == nullptr && this->statusChangeTime_ == nullptr && this->subPayType_ == nullptr && this->totalConnectionTime_ == nullptr && this->upTime_ == nullptr; };
      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Sessions& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Sessions& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Sessions& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopGroupName Field Functions 
      bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
      void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
      inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
      inline Sessions& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Sessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Sessions& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Sessions& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline Sessions& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline Sessions& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline Sessions& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // latestConnectionTime Field Functions 
      bool hasLatestConnectionTime() const { return this->latestConnectionTime_ != nullptr;};
      void deleteLatestConnectionTime() { this->latestConnectionTime_ = nullptr;};
      inline int64_t getLatestConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(latestConnectionTime_, 0L) };
      inline Sessions& setLatestConnectionTime(int64_t latestConnectionTime) { DARABONBA_PTR_SET_VALUE(latestConnectionTime_, latestConnectionTime) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Sessions& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Sessions& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Sessions& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline Sessions& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Sessions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Sessions& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Sessions& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Sessions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroups Field Functions 
      bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
      void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
      inline const vector<Sessions::ResourceGroups> & getResourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Sessions::ResourceGroups>) };
      inline vector<Sessions::ResourceGroups> getResourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Sessions::ResourceGroups>) };
      inline Sessions& setResourceGroups(const vector<Sessions::ResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
      inline Sessions& setResourceGroups(vector<Sessions::ResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


      // sessionIdleTime Field Functions 
      bool hasSessionIdleTime() const { return this->sessionIdleTime_ != nullptr;};
      void deleteSessionIdleTime() { this->sessionIdleTime_ = nullptr;};
      inline int64_t getSessionIdleTime() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTime_, 0L) };
      inline Sessions& setSessionIdleTime(int64_t sessionIdleTime) { DARABONBA_PTR_SET_VALUE(sessionIdleTime_, sessionIdleTime) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<Sessions::SessionsItem> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Sessions::SessionsItem>) };
      inline vector<Sessions::SessionsItem> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Sessions::SessionsItem>) };
      inline Sessions& setSessions(const vector<Sessions::SessionsItem> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Sessions& setSessions(vector<Sessions::SessionsItem> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // statusChangeTime Field Functions 
      bool hasStatusChangeTime() const { return this->statusChangeTime_ != nullptr;};
      void deleteStatusChangeTime() { this->statusChangeTime_ = nullptr;};
      inline int64_t getStatusChangeTime() const { DARABONBA_PTR_GET_DEFAULT(statusChangeTime_, 0L) };
      inline Sessions& setStatusChangeTime(int64_t statusChangeTime) { DARABONBA_PTR_SET_VALUE(statusChangeTime_, statusChangeTime) };


      // subPayType Field Functions 
      bool hasSubPayType() const { return this->subPayType_ != nullptr;};
      void deleteSubPayType() { this->subPayType_ = nullptr;};
      inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
      inline Sessions& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


      // totalConnectionTime Field Functions 
      bool hasTotalConnectionTime() const { return this->totalConnectionTime_ != nullptr;};
      void deleteTotalConnectionTime() { this->totalConnectionTime_ = nullptr;};
      inline int64_t getTotalConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(totalConnectionTime_, 0L) };
      inline Sessions& setTotalConnectionTime(int64_t totalConnectionTime) { DARABONBA_PTR_SET_VALUE(totalConnectionTime_, totalConnectionTime) };


      // upTime Field Functions 
      bool hasUpTime() const { return this->upTime_ != nullptr;};
      void deleteUpTime() { this->upTime_ = nullptr;};
      inline int64_t getUpTime() const { DARABONBA_PTR_GET_DEFAULT(upTime_, 0L) };
      inline Sessions& setUpTime(int64_t upTime) { DARABONBA_PTR_SET_VALUE(upTime_, upTime) };


    protected:
      // The connection status of the cloud desktop.
      shared_ptr<string> connectionStatus_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> cpu_ {};
      // The ID of the cloud computer share.
      shared_ptr<string> desktopGroupId_ {};
      // The name of the cloud computer share.
      shared_ptr<string> desktopGroupName_ {};
      // The cloud computer IDs.
      shared_ptr<string> desktopId_ {};
      // The cloud computer name.
      shared_ptr<string> desktopName_ {};
      // 桌面状态
      shared_ptr<string> desktopStatus_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
      // The list of assigned terminal user IDs.
      shared_ptr<vector<string>> endUserIds_ {};
      // The size of the GPU memory.
      shared_ptr<string> gpuSpec_ {};
      // The duration of the last connection to the cloud computer. Unit: seconds
      shared_ptr<int64_t> latestConnectionTime_ {};
      // The memory of the cloud computer. Unit: MiB.
      shared_ptr<int64_t> memory_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      shared_ptr<string> officeSiteType_ {};
      // The OS type. Valid values:
      // 
      // *   Windows
      // *   Linux
      shared_ptr<string> osType_ {};
      // The specific model of the operating system.
      shared_ptr<string> platform_ {};
      // Protocol type.
      // 
      // *   HDX
      // *   ASP
      shared_ptr<string> protocolType_ {};
      // The ID of the region where the instance resides.
      shared_ptr<string> regionId_ {};
      // The name of the enterprise resource group.
      shared_ptr<vector<Sessions::ResourceGroups>> resourceGroups_ {};
      // The idle duration of the session. Unit: minutes.
      shared_ptr<int64_t> sessionIdleTime_ {};
      // The session details.
      shared_ptr<vector<Sessions::SessionsItem>> sessions_ {};
      // The time when the status of the cloud computer was changed.
      shared_ptr<int64_t> statusChangeTime_ {};
      // The billing method of the cloud computer. Valid values:
      // 
      // *   prePaid: The monthly purchase is unlimited.
      // *   postPaid: pay-as-you-go
      // *   monthPackage: monthly duration.
      shared_ptr<string> subPayType_ {};
      // The total connection duration. Unit: seconds
      shared_ptr<int64_t> totalConnectionTime_ {};
      // The startup duration of the cloud computer. Unit: seconds
      shared_ptr<int64_t> upTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessions_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DescribeGlobalDesktopRecordsResponseBody::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DescribeGlobalDesktopRecordsResponseBody::Sessions>) };
    inline vector<DescribeGlobalDesktopRecordsResponseBody::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<DescribeGlobalDesktopRecordsResponseBody::Sessions>) };
    inline DescribeGlobalDesktopRecordsResponseBody& setSessions(const vector<DescribeGlobalDesktopRecordsResponseBody::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeGlobalDesktopRecordsResponseBody& setSessions(vector<DescribeGlobalDesktopRecordsResponseBody::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGlobalDesktopRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session details.
    shared_ptr<vector<DescribeGlobalDesktopRecordsResponseBody::Sessions>> sessions_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
