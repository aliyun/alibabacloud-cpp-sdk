// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSystemEventSet, instanceSystemEventSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSystemEventSet, instanceSystemEventSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCInstanceHistoryEventsResponseBody() = default ;
    DescribeRCInstanceHistoryEventsResponseBody(const DescribeRCInstanceHistoryEventsResponseBody &) = default ;
    DescribeRCInstanceHistoryEventsResponseBody(DescribeRCInstanceHistoryEventsResponseBody &&) = default ;
    DescribeRCInstanceHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsResponseBody() = default ;
    DescribeRCInstanceHistoryEventsResponseBody& operator=(const DescribeRCInstanceHistoryEventsResponseBody &) = default ;
    DescribeRCInstanceHistoryEventsResponseBody& operator=(DescribeRCInstanceHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceSystemEventSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceSystemEventSet& obj) { 
        DARABONBA_PTR_TO_JSON(EventCycleStatus, eventCycleStatus_);
        DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventPublishTime, eventPublishTime_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(ExtendedAttribute, extendedAttribute_);
        DARABONBA_PTR_TO_JSON(ImpactLevel, impactLevel_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceSystemEventSet& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCycleStatus, eventCycleStatus_);
        DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventPublishTime, eventPublishTime_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(ExtendedAttribute, extendedAttribute_);
        DARABONBA_PTR_FROM_JSON(ImpactLevel, impactLevel_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      InstanceSystemEventSet() = default ;
      InstanceSystemEventSet(const InstanceSystemEventSet &) = default ;
      InstanceSystemEventSet(InstanceSystemEventSet &&) = default ;
      InstanceSystemEventSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceSystemEventSet() = default ;
      InstanceSystemEventSet& operator=(const InstanceSystemEventSet &) = default ;
      InstanceSystemEventSet& operator=(InstanceSystemEventSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExtendedAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendedAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(CanAccept, canAccept_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(HostId, hostId_);
          DARABONBA_PTR_TO_JSON(HostType, hostType_);
          DARABONBA_PTR_TO_JSON(InactiveDisks, inactiveDisks_);
          DARABONBA_PTR_TO_JSON(MigrationOptions, migrationOptions_);
          DARABONBA_PTR_TO_JSON(OnlineRepairPolicy, onlineRepairPolicy_);
          DARABONBA_PTR_TO_JSON(PunishDomain, punishDomain_);
          DARABONBA_PTR_TO_JSON(PunishType, punishType_);
          DARABONBA_PTR_TO_JSON(PunishUrl, punishUrl_);
          DARABONBA_PTR_TO_JSON(Rack, rack_);
          DARABONBA_PTR_TO_JSON(ResponseResult, responseResult_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendedAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(CanAccept, canAccept_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(HostId, hostId_);
          DARABONBA_PTR_FROM_JSON(HostType, hostType_);
          DARABONBA_PTR_FROM_JSON(InactiveDisks, inactiveDisks_);
          DARABONBA_PTR_FROM_JSON(MigrationOptions, migrationOptions_);
          DARABONBA_PTR_FROM_JSON(OnlineRepairPolicy, onlineRepairPolicy_);
          DARABONBA_PTR_FROM_JSON(PunishDomain, punishDomain_);
          DARABONBA_PTR_FROM_JSON(PunishType, punishType_);
          DARABONBA_PTR_FROM_JSON(PunishUrl, punishUrl_);
          DARABONBA_PTR_FROM_JSON(Rack, rack_);
          DARABONBA_PTR_FROM_JSON(ResponseResult, responseResult_);
        };
        ExtendedAttribute() = default ;
        ExtendedAttribute(const ExtendedAttribute &) = default ;
        ExtendedAttribute(ExtendedAttribute &&) = default ;
        ExtendedAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendedAttribute() = default ;
        ExtendedAttribute& operator=(const ExtendedAttribute &) = default ;
        ExtendedAttribute& operator=(ExtendedAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InactiveDisks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InactiveDisks& obj) { 
            DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
            DARABONBA_PTR_TO_JSON(DeviceCategory, deviceCategory_);
            DARABONBA_PTR_TO_JSON(DeviceSize, deviceSize_);
            DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
            DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          };
          friend void from_json(const Darabonba::Json& j, InactiveDisks& obj) { 
            DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
            DARABONBA_PTR_FROM_JSON(DeviceCategory, deviceCategory_);
            DARABONBA_PTR_FROM_JSON(DeviceSize, deviceSize_);
            DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
            DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          };
          InactiveDisks() = default ;
          InactiveDisks(const InactiveDisks &) = default ;
          InactiveDisks(InactiveDisks &&) = default ;
          InactiveDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InactiveDisks() = default ;
          InactiveDisks& operator=(const InactiveDisks &) = default ;
          InactiveDisks& operator=(InactiveDisks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->deviceCategory_ == nullptr && this->deviceSize_ == nullptr && this->deviceType_ == nullptr && this->releaseTime_ == nullptr; };
          // creationTime Field Functions 
          bool hasCreationTime() const { return this->creationTime_ != nullptr;};
          void deleteCreationTime() { this->creationTime_ = nullptr;};
          inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
          inline InactiveDisks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


          // deviceCategory Field Functions 
          bool hasDeviceCategory() const { return this->deviceCategory_ != nullptr;};
          void deleteDeviceCategory() { this->deviceCategory_ = nullptr;};
          inline string getDeviceCategory() const { DARABONBA_PTR_GET_DEFAULT(deviceCategory_, "") };
          inline InactiveDisks& setDeviceCategory(string deviceCategory) { DARABONBA_PTR_SET_VALUE(deviceCategory_, deviceCategory) };


          // deviceSize Field Functions 
          bool hasDeviceSize() const { return this->deviceSize_ != nullptr;};
          void deleteDeviceSize() { this->deviceSize_ = nullptr;};
          inline string getDeviceSize() const { DARABONBA_PTR_GET_DEFAULT(deviceSize_, "") };
          inline InactiveDisks& setDeviceSize(string deviceSize) { DARABONBA_PTR_SET_VALUE(deviceSize_, deviceSize) };


          // deviceType Field Functions 
          bool hasDeviceType() const { return this->deviceType_ != nullptr;};
          void deleteDeviceType() { this->deviceType_ = nullptr;};
          inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
          inline InactiveDisks& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


          // releaseTime Field Functions 
          bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
          void deleteReleaseTime() { this->releaseTime_ = nullptr;};
          inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
          inline InactiveDisks& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        protected:
          // The time when the disk was created. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
          shared_ptr<string> creationTime_ {};
          // The category of the cloud disk or local disk. Valid values:
          // 
          // *   **cloud_efficiency**: ultra disk
          // *   **cloud_ssd**: standard SSD
          // *   **cloud_essd**: ESSD
          // *   **cloud_auto**: Premium ESSD
          shared_ptr<string> deviceCategory_ {};
          // The size of the disk. Unit: GiB.
          shared_ptr<string> deviceSize_ {};
          // The disk type. Valid values:
          // 
          // *   **system**: system disk.
          // *   **data**: data disk.
          shared_ptr<string> deviceType_ {};
          // The time when the disk was released. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
          shared_ptr<string> releaseTime_ {};
        };

        virtual bool empty() const override { return this->canAccept_ == nullptr
        && this->code_ == nullptr && this->device_ == nullptr && this->diskId_ == nullptr && this->hostId_ == nullptr && this->hostType_ == nullptr
        && this->inactiveDisks_ == nullptr && this->migrationOptions_ == nullptr && this->onlineRepairPolicy_ == nullptr && this->punishDomain_ == nullptr && this->punishType_ == nullptr
        && this->punishUrl_ == nullptr && this->rack_ == nullptr && this->responseResult_ == nullptr; };
        // canAccept Field Functions 
        bool hasCanAccept() const { return this->canAccept_ != nullptr;};
        void deleteCanAccept() { this->canAccept_ = nullptr;};
        inline string getCanAccept() const { DARABONBA_PTR_GET_DEFAULT(canAccept_, "") };
        inline ExtendedAttribute& setCanAccept(string canAccept) { DARABONBA_PTR_SET_VALUE(canAccept_, canAccept) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ExtendedAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline ExtendedAttribute& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline ExtendedAttribute& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // hostId Field Functions 
        bool hasHostId() const { return this->hostId_ != nullptr;};
        void deleteHostId() { this->hostId_ = nullptr;};
        inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
        inline ExtendedAttribute& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


        // hostType Field Functions 
        bool hasHostType() const { return this->hostType_ != nullptr;};
        void deleteHostType() { this->hostType_ = nullptr;};
        inline string getHostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
        inline ExtendedAttribute& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


        // inactiveDisks Field Functions 
        bool hasInactiveDisks() const { return this->inactiveDisks_ != nullptr;};
        void deleteInactiveDisks() { this->inactiveDisks_ = nullptr;};
        inline const vector<ExtendedAttribute::InactiveDisks> & getInactiveDisks() const { DARABONBA_PTR_GET_CONST(inactiveDisks_, vector<ExtendedAttribute::InactiveDisks>) };
        inline vector<ExtendedAttribute::InactiveDisks> getInactiveDisks() { DARABONBA_PTR_GET(inactiveDisks_, vector<ExtendedAttribute::InactiveDisks>) };
        inline ExtendedAttribute& setInactiveDisks(const vector<ExtendedAttribute::InactiveDisks> & inactiveDisks) { DARABONBA_PTR_SET_VALUE(inactiveDisks_, inactiveDisks) };
        inline ExtendedAttribute& setInactiveDisks(vector<ExtendedAttribute::InactiveDisks> && inactiveDisks) { DARABONBA_PTR_SET_RVALUE(inactiveDisks_, inactiveDisks) };


        // migrationOptions Field Functions 
        bool hasMigrationOptions() const { return this->migrationOptions_ != nullptr;};
        void deleteMigrationOptions() { this->migrationOptions_ = nullptr;};
        inline const vector<string> & getMigrationOptions() const { DARABONBA_PTR_GET_CONST(migrationOptions_, vector<string>) };
        inline vector<string> getMigrationOptions() { DARABONBA_PTR_GET(migrationOptions_, vector<string>) };
        inline ExtendedAttribute& setMigrationOptions(const vector<string> & migrationOptions) { DARABONBA_PTR_SET_VALUE(migrationOptions_, migrationOptions) };
        inline ExtendedAttribute& setMigrationOptions(vector<string> && migrationOptions) { DARABONBA_PTR_SET_RVALUE(migrationOptions_, migrationOptions) };


        // onlineRepairPolicy Field Functions 
        bool hasOnlineRepairPolicy() const { return this->onlineRepairPolicy_ != nullptr;};
        void deleteOnlineRepairPolicy() { this->onlineRepairPolicy_ = nullptr;};
        inline string getOnlineRepairPolicy() const { DARABONBA_PTR_GET_DEFAULT(onlineRepairPolicy_, "") };
        inline ExtendedAttribute& setOnlineRepairPolicy(string onlineRepairPolicy) { DARABONBA_PTR_SET_VALUE(onlineRepairPolicy_, onlineRepairPolicy) };


        // punishDomain Field Functions 
        bool hasPunishDomain() const { return this->punishDomain_ != nullptr;};
        void deletePunishDomain() { this->punishDomain_ = nullptr;};
        inline string getPunishDomain() const { DARABONBA_PTR_GET_DEFAULT(punishDomain_, "") };
        inline ExtendedAttribute& setPunishDomain(string punishDomain) { DARABONBA_PTR_SET_VALUE(punishDomain_, punishDomain) };


        // punishType Field Functions 
        bool hasPunishType() const { return this->punishType_ != nullptr;};
        void deletePunishType() { this->punishType_ = nullptr;};
        inline string getPunishType() const { DARABONBA_PTR_GET_DEFAULT(punishType_, "") };
        inline ExtendedAttribute& setPunishType(string punishType) { DARABONBA_PTR_SET_VALUE(punishType_, punishType) };


        // punishUrl Field Functions 
        bool hasPunishUrl() const { return this->punishUrl_ != nullptr;};
        void deletePunishUrl() { this->punishUrl_ = nullptr;};
        inline string getPunishUrl() const { DARABONBA_PTR_GET_DEFAULT(punishUrl_, "") };
        inline ExtendedAttribute& setPunishUrl(string punishUrl) { DARABONBA_PTR_SET_VALUE(punishUrl_, punishUrl) };


        // rack Field Functions 
        bool hasRack() const { return this->rack_ != nullptr;};
        void deleteRack() { this->rack_ = nullptr;};
        inline string getRack() const { DARABONBA_PTR_GET_DEFAULT(rack_, "") };
        inline ExtendedAttribute& setRack(string rack) { DARABONBA_PTR_SET_VALUE(rack_, rack) };


        // responseResult Field Functions 
        bool hasResponseResult() const { return this->responseResult_ != nullptr;};
        void deleteResponseResult() { this->responseResult_ = nullptr;};
        inline string getResponseResult() const { DARABONBA_PTR_GET_DEFAULT(responseResult_, "") };
        inline ExtendedAttribute& setResponseResult(string responseResult) { DARABONBA_PTR_SET_VALUE(responseResult_, responseResult) };


      protected:
        // Indicates whether the event can be handled.
        shared_ptr<string> canAccept_ {};
        // The code of the security violation.
        shared_ptr<string> code_ {};
        // The device name of the local disk.
        shared_ptr<string> device_ {};
        // The ID of the local disk.
        shared_ptr<string> diskId_ {};
        // The ID of the host.
        shared_ptr<string> hostId_ {};
        // The type of the host. Valid values:
        // 
        // *   **ddh**: dedicated host
        // *   **managehost**: physical machine in a smart hosting pool
        shared_ptr<string> hostType_ {};
        // The inactive disks that have been released and whose data must be cleared.
        shared_ptr<vector<ExtendedAttribute::InactiveDisks>> inactiveDisks_ {};
        // The migration solutions of the instance.
        shared_ptr<vector<string>> migrationOptions_ {};
        // The online repair policy for the damaged disk. Valid value: IsolateOnly, which indicates that damaged disks are isolated but not repaired.
        shared_ptr<string> onlineRepairPolicy_ {};
        // The illegal domain name.
        shared_ptr<string> punishDomain_ {};
        // The type of the penalty.
        shared_ptr<string> punishType_ {};
        // The illegal URL.
        shared_ptr<string> punishUrl_ {};
        // The rack number of the cloud box.
        shared_ptr<string> rack_ {};
        // The response result of the event. Valid values:
        // 
        // *   **true**: the event was handled.
        // *   **false**: the event failed to be handled.
        shared_ptr<string> responseResult_ {};
      };

      class EventType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventType& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EventType& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EventType() = default ;
        EventType(const EventType &) = default ;
        EventType(EventType &&) = default ;
        EventType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventType() = default ;
        EventType& operator=(const EventType &) = default ;
        EventType& operator=(EventType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline EventType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The code of the system event type.
        shared_ptr<string> code_ {};
        // The name of the system event type.
        shared_ptr<string> name_ {};
      };

      class EventCycleStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventCycleStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EventCycleStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EventCycleStatus() = default ;
        EventCycleStatus(const EventCycleStatus &) = default ;
        EventCycleStatus(EventCycleStatus &&) = default ;
        EventCycleStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventCycleStatus() = default ;
        EventCycleStatus& operator=(const EventCycleStatus &) = default ;
        EventCycleStatus& operator=(EventCycleStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline EventCycleStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventCycleStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The state code of the system event.
        shared_ptr<string> code_ {};
        // The state name of the system event.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->eventCycleStatus_ == nullptr
        && this->eventFinishTime_ == nullptr && this->eventId_ == nullptr && this->eventPublishTime_ == nullptr && this->eventType_ == nullptr && this->extendedAttribute_ == nullptr
        && this->impactLevel_ == nullptr && this->instanceId_ == nullptr && this->notBefore_ == nullptr && this->reason_ == nullptr && this->reasonCode_ == nullptr
        && this->resourceType_ == nullptr; };
      // eventCycleStatus Field Functions 
      bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
      void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
      inline const InstanceSystemEventSet::EventCycleStatus & getEventCycleStatus() const { DARABONBA_PTR_GET_CONST(eventCycleStatus_, InstanceSystemEventSet::EventCycleStatus) };
      inline InstanceSystemEventSet::EventCycleStatus getEventCycleStatus() { DARABONBA_PTR_GET(eventCycleStatus_, InstanceSystemEventSet::EventCycleStatus) };
      inline InstanceSystemEventSet& setEventCycleStatus(const InstanceSystemEventSet::EventCycleStatus & eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };
      inline InstanceSystemEventSet& setEventCycleStatus(InstanceSystemEventSet::EventCycleStatus && eventCycleStatus) { DARABONBA_PTR_SET_RVALUE(eventCycleStatus_, eventCycleStatus) };


      // eventFinishTime Field Functions 
      bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
      void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
      inline string getEventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
      inline InstanceSystemEventSet& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline InstanceSystemEventSet& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventPublishTime Field Functions 
      bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
      void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
      inline string getEventPublishTime() const { DARABONBA_PTR_GET_DEFAULT(eventPublishTime_, "") };
      inline InstanceSystemEventSet& setEventPublishTime(string eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline const InstanceSystemEventSet::EventType & getEventType() const { DARABONBA_PTR_GET_CONST(eventType_, InstanceSystemEventSet::EventType) };
      inline InstanceSystemEventSet::EventType getEventType() { DARABONBA_PTR_GET(eventType_, InstanceSystemEventSet::EventType) };
      inline InstanceSystemEventSet& setEventType(const InstanceSystemEventSet::EventType & eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };
      inline InstanceSystemEventSet& setEventType(InstanceSystemEventSet::EventType && eventType) { DARABONBA_PTR_SET_RVALUE(eventType_, eventType) };


      // extendedAttribute Field Functions 
      bool hasExtendedAttribute() const { return this->extendedAttribute_ != nullptr;};
      void deleteExtendedAttribute() { this->extendedAttribute_ = nullptr;};
      inline const InstanceSystemEventSet::ExtendedAttribute & getExtendedAttribute() const { DARABONBA_PTR_GET_CONST(extendedAttribute_, InstanceSystemEventSet::ExtendedAttribute) };
      inline InstanceSystemEventSet::ExtendedAttribute getExtendedAttribute() { DARABONBA_PTR_GET(extendedAttribute_, InstanceSystemEventSet::ExtendedAttribute) };
      inline InstanceSystemEventSet& setExtendedAttribute(const InstanceSystemEventSet::ExtendedAttribute & extendedAttribute) { DARABONBA_PTR_SET_VALUE(extendedAttribute_, extendedAttribute) };
      inline InstanceSystemEventSet& setExtendedAttribute(InstanceSystemEventSet::ExtendedAttribute && extendedAttribute) { DARABONBA_PTR_SET_RVALUE(extendedAttribute_, extendedAttribute) };


      // impactLevel Field Functions 
      bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
      void deleteImpactLevel() { this->impactLevel_ = nullptr;};
      inline string getImpactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
      inline InstanceSystemEventSet& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceSystemEventSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
      inline InstanceSystemEventSet& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline InstanceSystemEventSet& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline InstanceSystemEventSet& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline InstanceSystemEventSet& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The lifecycle state of the system event.
      shared_ptr<InstanceSystemEventSet::EventCycleStatus> eventCycleStatus_ {};
      // The time when the system event ended. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> eventFinishTime_ {};
      // The ID of the system event.
      shared_ptr<string> eventId_ {};
      // The time when the system event was published. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> eventPublishTime_ {};
      // The type of the system event.
      shared_ptr<InstanceSystemEventSet::EventType> eventType_ {};
      // The extended attribute of the system event.
      shared_ptr<InstanceSystemEventSet::ExtendedAttribute> extendedAttribute_ {};
      // The impact level of the event.
      shared_ptr<string> impactLevel_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The start time of the scheduled execution of the system event. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> notBefore_ {};
      // The reason why the system event occurred.
      shared_ptr<string> reason_ {};
      // The reason code category for the system event.
      shared_ptr<string> reasonCode_ {};
      // The resource type. The value is fixed to INSTANCE.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->instanceSystemEventSet_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceSystemEventSet Field Functions 
    bool hasInstanceSystemEventSet() const { return this->instanceSystemEventSet_ != nullptr;};
    void deleteInstanceSystemEventSet() { this->instanceSystemEventSet_ = nullptr;};
    inline const vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet> & getInstanceSystemEventSet() const { DARABONBA_PTR_GET_CONST(instanceSystemEventSet_, vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet>) };
    inline vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet> getInstanceSystemEventSet() { DARABONBA_PTR_GET(instanceSystemEventSet_, vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet>) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setInstanceSystemEventSet(const vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet> & instanceSystemEventSet) { DARABONBA_PTR_SET_VALUE(instanceSystemEventSet_, instanceSystemEventSet) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setInstanceSystemEventSet(vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet> && instanceSystemEventSet) { DARABONBA_PTR_SET_RVALUE(instanceSystemEventSet_, instanceSystemEventSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instance system event.
    shared_ptr<vector<DescribeRCInstanceHistoryEventsResponseBody::InstanceSystemEventSet>> instanceSystemEventSet_ {};
    // The reserved parameter. This parameter is not supported.
    shared_ptr<string> nextToken_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of instance events.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
