// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesFullStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesFullStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceFullStatusSet, instanceFullStatusSet_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesFullStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceFullStatusSet, instanceFullStatusSet_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesFullStatusResponseBody() = default ;
    DescribeInstancesFullStatusResponseBody(const DescribeInstancesFullStatusResponseBody &) = default ;
    DescribeInstancesFullStatusResponseBody(DescribeInstancesFullStatusResponseBody &&) = default ;
    DescribeInstancesFullStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesFullStatusResponseBody() = default ;
    DescribeInstancesFullStatusResponseBody& operator=(const DescribeInstancesFullStatusResponseBody &) = default ;
    DescribeInstancesFullStatusResponseBody& operator=(DescribeInstancesFullStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceFullStatusSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceFullStatusSet& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceFullStatusType, instanceFullStatusType_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceFullStatusSet& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceFullStatusType, instanceFullStatusType_);
      };
      InstanceFullStatusSet() = default ;
      InstanceFullStatusSet(const InstanceFullStatusSet &) = default ;
      InstanceFullStatusSet(InstanceFullStatusSet &&) = default ;
      InstanceFullStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceFullStatusSet() = default ;
      InstanceFullStatusSet& operator=(const InstanceFullStatusSet &) = default ;
      InstanceFullStatusSet& operator=(InstanceFullStatusSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceFullStatusType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceFullStatusType& obj) { 
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(ScheduledSystemEventSet, scheduledSystemEventSet_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceFullStatusType& obj) { 
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(ScheduledSystemEventSet, scheduledSystemEventSet_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        InstanceFullStatusType() = default ;
        InstanceFullStatusType(const InstanceFullStatusType &) = default ;
        InstanceFullStatusType(InstanceFullStatusType &&) = default ;
        InstanceFullStatusType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceFullStatusType() = default ;
        InstanceFullStatusType& operator=(const InstanceFullStatusType &) = default ;
        InstanceFullStatusType& operator=(InstanceFullStatusType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Status : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Status& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Status& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Status() = default ;
          Status(const Status &) = default ;
          Status(Status &&) = default ;
          Status(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Status() = default ;
          Status& operator=(const Status &) = default ;
          Status& operator=(Status &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
          inline Status& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Status& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The code of the instance lifecycle state.
          shared_ptr<int32_t> code_ {};
          // The name of the instance lifecycle state.
          shared_ptr<string> name_ {};
        };

        class ScheduledSystemEventSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduledSystemEventSet& obj) { 
            DARABONBA_PTR_TO_JSON(ScheduledSystemEventType, scheduledSystemEventType_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduledSystemEventSet& obj) { 
            DARABONBA_PTR_FROM_JSON(ScheduledSystemEventType, scheduledSystemEventType_);
          };
          ScheduledSystemEventSet() = default ;
          ScheduledSystemEventSet(const ScheduledSystemEventSet &) = default ;
          ScheduledSystemEventSet(ScheduledSystemEventSet &&) = default ;
          ScheduledSystemEventSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduledSystemEventSet() = default ;
          ScheduledSystemEventSet& operator=(const ScheduledSystemEventSet &) = default ;
          ScheduledSystemEventSet& operator=(ScheduledSystemEventSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ScheduledSystemEventType : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScheduledSystemEventType& obj) { 
              DARABONBA_PTR_TO_JSON(EventCycleStatus, eventCycleStatus_);
              DARABONBA_PTR_TO_JSON(EventId, eventId_);
              DARABONBA_PTR_TO_JSON(EventPublishTime, eventPublishTime_);
              DARABONBA_PTR_TO_JSON(EventType, eventType_);
              DARABONBA_PTR_TO_JSON(ExtendedAttribute, extendedAttribute_);
              DARABONBA_PTR_TO_JSON(ImpactLevel, impactLevel_);
              DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
              DARABONBA_PTR_TO_JSON(Reason, reason_);
            };
            friend void from_json(const Darabonba::Json& j, ScheduledSystemEventType& obj) { 
              DARABONBA_PTR_FROM_JSON(EventCycleStatus, eventCycleStatus_);
              DARABONBA_PTR_FROM_JSON(EventId, eventId_);
              DARABONBA_PTR_FROM_JSON(EventPublishTime, eventPublishTime_);
              DARABONBA_PTR_FROM_JSON(EventType, eventType_);
              DARABONBA_PTR_FROM_JSON(ExtendedAttribute, extendedAttribute_);
              DARABONBA_PTR_FROM_JSON(ImpactLevel, impactLevel_);
              DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
              DARABONBA_PTR_FROM_JSON(Reason, reason_);
            };
            ScheduledSystemEventType() = default ;
            ScheduledSystemEventType(const ScheduledSystemEventType &) = default ;
            ScheduledSystemEventType(ScheduledSystemEventType &&) = default ;
            ScheduledSystemEventType(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScheduledSystemEventType() = default ;
            ScheduledSystemEventType& operator=(const ScheduledSystemEventType &) = default ;
            ScheduledSystemEventType& operator=(ScheduledSystemEventType &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ExtendedAttribute : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExtendedAttribute& obj) { 
                DARABONBA_PTR_TO_JSON(Device, device_);
                DARABONBA_PTR_TO_JSON(DiskId, diskId_);
                DARABONBA_PTR_TO_JSON(InactiveDisks, inactiveDisks_);
              };
              friend void from_json(const Darabonba::Json& j, ExtendedAttribute& obj) { 
                DARABONBA_PTR_FROM_JSON(Device, device_);
                DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
                DARABONBA_PTR_FROM_JSON(InactiveDisks, inactiveDisks_);
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
                  DARABONBA_PTR_TO_JSON(InactiveDisk, inactiveDisk_);
                };
                friend void from_json(const Darabonba::Json& j, InactiveDisks& obj) { 
                  DARABONBA_PTR_FROM_JSON(InactiveDisk, inactiveDisk_);
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
                class InactiveDisk : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const InactiveDisk& obj) { 
                    DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
                    DARABONBA_PTR_TO_JSON(DeviceCategory, deviceCategory_);
                    DARABONBA_PTR_TO_JSON(DeviceSize, deviceSize_);
                    DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
                    DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
                  };
                  friend void from_json(const Darabonba::Json& j, InactiveDisk& obj) { 
                    DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
                    DARABONBA_PTR_FROM_JSON(DeviceCategory, deviceCategory_);
                    DARABONBA_PTR_FROM_JSON(DeviceSize, deviceSize_);
                    DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
                    DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
                  };
                  InactiveDisk() = default ;
                  InactiveDisk(const InactiveDisk &) = default ;
                  InactiveDisk(InactiveDisk &&) = default ;
                  InactiveDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~InactiveDisk() = default ;
                  InactiveDisk& operator=(const InactiveDisk &) = default ;
                  InactiveDisk& operator=(InactiveDisk &&) = default ;
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
                  inline InactiveDisk& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


                  // deviceCategory Field Functions 
                  bool hasDeviceCategory() const { return this->deviceCategory_ != nullptr;};
                  void deleteDeviceCategory() { this->deviceCategory_ = nullptr;};
                  inline string getDeviceCategory() const { DARABONBA_PTR_GET_DEFAULT(deviceCategory_, "") };
                  inline InactiveDisk& setDeviceCategory(string deviceCategory) { DARABONBA_PTR_SET_VALUE(deviceCategory_, deviceCategory) };


                  // deviceSize Field Functions 
                  bool hasDeviceSize() const { return this->deviceSize_ != nullptr;};
                  void deleteDeviceSize() { this->deviceSize_ = nullptr;};
                  inline string getDeviceSize() const { DARABONBA_PTR_GET_DEFAULT(deviceSize_, "") };
                  inline InactiveDisk& setDeviceSize(string deviceSize) { DARABONBA_PTR_SET_VALUE(deviceSize_, deviceSize) };


                  // deviceType Field Functions 
                  bool hasDeviceType() const { return this->deviceType_ != nullptr;};
                  void deleteDeviceType() { this->deviceType_ = nullptr;};
                  inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
                  inline InactiveDisk& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


                  // releaseTime Field Functions 
                  bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
                  void deleteReleaseTime() { this->releaseTime_ = nullptr;};
                  inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
                  inline InactiveDisk& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


                protected:
                  // The time when the disk was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
                  shared_ptr<string> creationTime_ {};
                  // The category of the disk. Valid values:
                  // 
                  // *   cloud: basic disk
                  // *   cloud_efficiency: ultra disk
                  // *   cloud_ssd: standard SSD
                  // *   cloud_essd: Enterprise SSD (ESSD)
                  // *   local_ssd_pro: I/O-intensive local disk
                  // *   local_hdd_pro: throughput-intensive local disk
                  // *   ephemeral: retired local disk
                  // *   ephemeral_ssd: retired local SSD
                  shared_ptr<string> deviceCategory_ {};
                  // The size of the disk. Unit: GiB.
                  shared_ptr<string> deviceSize_ {};
                  // The type of the disk. Valid values:
                  // 
                  // *   system
                  // *   data
                  shared_ptr<string> deviceType_ {};
                  // The time when the disk was released. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
                  shared_ptr<string> releaseTime_ {};
                };

                virtual bool empty() const override { return this->inactiveDisk_ == nullptr; };
                // inactiveDisk Field Functions 
                bool hasInactiveDisk() const { return this->inactiveDisk_ != nullptr;};
                void deleteInactiveDisk() { this->inactiveDisk_ = nullptr;};
                inline const vector<InactiveDisks::InactiveDisk> & getInactiveDisk() const { DARABONBA_PTR_GET_CONST(inactiveDisk_, vector<InactiveDisks::InactiveDisk>) };
                inline vector<InactiveDisks::InactiveDisk> getInactiveDisk() { DARABONBA_PTR_GET(inactiveDisk_, vector<InactiveDisks::InactiveDisk>) };
                inline InactiveDisks& setInactiveDisk(const vector<InactiveDisks::InactiveDisk> & inactiveDisk) { DARABONBA_PTR_SET_VALUE(inactiveDisk_, inactiveDisk) };
                inline InactiveDisks& setInactiveDisk(vector<InactiveDisks::InactiveDisk> && inactiveDisk) { DARABONBA_PTR_SET_RVALUE(inactiveDisk_, inactiveDisk) };


              protected:
                shared_ptr<vector<InactiveDisks::InactiveDisk>> inactiveDisk_ {};
              };

              virtual bool empty() const override { return this->device_ == nullptr
        && this->diskId_ == nullptr && this->inactiveDisks_ == nullptr; };
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


              // inactiveDisks Field Functions 
              bool hasInactiveDisks() const { return this->inactiveDisks_ != nullptr;};
              void deleteInactiveDisks() { this->inactiveDisks_ = nullptr;};
              inline const ExtendedAttribute::InactiveDisks & getInactiveDisks() const { DARABONBA_PTR_GET_CONST(inactiveDisks_, ExtendedAttribute::InactiveDisks) };
              inline ExtendedAttribute::InactiveDisks getInactiveDisks() { DARABONBA_PTR_GET(inactiveDisks_, ExtendedAttribute::InactiveDisks) };
              inline ExtendedAttribute& setInactiveDisks(const ExtendedAttribute::InactiveDisks & inactiveDisks) { DARABONBA_PTR_SET_VALUE(inactiveDisks_, inactiveDisks) };
              inline ExtendedAttribute& setInactiveDisks(ExtendedAttribute::InactiveDisks && inactiveDisks) { DARABONBA_PTR_SET_RVALUE(inactiveDisks_, inactiveDisks) };


            protected:
              // The device name of the local disk.
              shared_ptr<string> device_ {};
              // The ID of the local disk.
              shared_ptr<string> diskId_ {};
              // The inactive disks that have been released and must be cleared.
              shared_ptr<ExtendedAttribute::InactiveDisks> inactiveDisks_ {};
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
              inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
              inline EventType& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline EventType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // The code of the system event type.
              shared_ptr<int32_t> code_ {};
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
              inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
              inline EventCycleStatus& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline EventCycleStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // The code of the system event state.
              shared_ptr<int32_t> code_ {};
              // The name of the system event state.
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->eventCycleStatus_ == nullptr
        && this->eventId_ == nullptr && this->eventPublishTime_ == nullptr && this->eventType_ == nullptr && this->extendedAttribute_ == nullptr && this->impactLevel_ == nullptr
        && this->notBefore_ == nullptr && this->reason_ == nullptr; };
            // eventCycleStatus Field Functions 
            bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
            void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
            inline const ScheduledSystemEventType::EventCycleStatus & getEventCycleStatus() const { DARABONBA_PTR_GET_CONST(eventCycleStatus_, ScheduledSystemEventType::EventCycleStatus) };
            inline ScheduledSystemEventType::EventCycleStatus getEventCycleStatus() { DARABONBA_PTR_GET(eventCycleStatus_, ScheduledSystemEventType::EventCycleStatus) };
            inline ScheduledSystemEventType& setEventCycleStatus(const ScheduledSystemEventType::EventCycleStatus & eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };
            inline ScheduledSystemEventType& setEventCycleStatus(ScheduledSystemEventType::EventCycleStatus && eventCycleStatus) { DARABONBA_PTR_SET_RVALUE(eventCycleStatus_, eventCycleStatus) };


            // eventId Field Functions 
            bool hasEventId() const { return this->eventId_ != nullptr;};
            void deleteEventId() { this->eventId_ = nullptr;};
            inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
            inline ScheduledSystemEventType& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


            // eventPublishTime Field Functions 
            bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
            void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
            inline string getEventPublishTime() const { DARABONBA_PTR_GET_DEFAULT(eventPublishTime_, "") };
            inline ScheduledSystemEventType& setEventPublishTime(string eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };


            // eventType Field Functions 
            bool hasEventType() const { return this->eventType_ != nullptr;};
            void deleteEventType() { this->eventType_ = nullptr;};
            inline const ScheduledSystemEventType::EventType & getEventType() const { DARABONBA_PTR_GET_CONST(eventType_, ScheduledSystemEventType::EventType) };
            inline ScheduledSystemEventType::EventType getEventType() { DARABONBA_PTR_GET(eventType_, ScheduledSystemEventType::EventType) };
            inline ScheduledSystemEventType& setEventType(const ScheduledSystemEventType::EventType & eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };
            inline ScheduledSystemEventType& setEventType(ScheduledSystemEventType::EventType && eventType) { DARABONBA_PTR_SET_RVALUE(eventType_, eventType) };


            // extendedAttribute Field Functions 
            bool hasExtendedAttribute() const { return this->extendedAttribute_ != nullptr;};
            void deleteExtendedAttribute() { this->extendedAttribute_ = nullptr;};
            inline const ScheduledSystemEventType::ExtendedAttribute & getExtendedAttribute() const { DARABONBA_PTR_GET_CONST(extendedAttribute_, ScheduledSystemEventType::ExtendedAttribute) };
            inline ScheduledSystemEventType::ExtendedAttribute getExtendedAttribute() { DARABONBA_PTR_GET(extendedAttribute_, ScheduledSystemEventType::ExtendedAttribute) };
            inline ScheduledSystemEventType& setExtendedAttribute(const ScheduledSystemEventType::ExtendedAttribute & extendedAttribute) { DARABONBA_PTR_SET_VALUE(extendedAttribute_, extendedAttribute) };
            inline ScheduledSystemEventType& setExtendedAttribute(ScheduledSystemEventType::ExtendedAttribute && extendedAttribute) { DARABONBA_PTR_SET_RVALUE(extendedAttribute_, extendedAttribute) };


            // impactLevel Field Functions 
            bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
            void deleteImpactLevel() { this->impactLevel_ = nullptr;};
            inline string getImpactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
            inline ScheduledSystemEventType& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


            // notBefore Field Functions 
            bool hasNotBefore() const { return this->notBefore_ != nullptr;};
            void deleteNotBefore() { this->notBefore_ = nullptr;};
            inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
            inline ScheduledSystemEventType& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


            // reason Field Functions 
            bool hasReason() const { return this->reason_ != nullptr;};
            void deleteReason() { this->reason_ = nullptr;};
            inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
            inline ScheduledSystemEventType& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


          protected:
            // The state of the system event.
            shared_ptr<ScheduledSystemEventType::EventCycleStatus> eventCycleStatus_ {};
            // The system event ID.
            shared_ptr<string> eventId_ {};
            // The time when the system event was published. The time is displayed in UTC.
            shared_ptr<string> eventPublishTime_ {};
            // The type of the system event.
            shared_ptr<ScheduledSystemEventType::EventType> eventType_ {};
            // The extended attributes of system events generated for instances that have local disks attached.
            // 
            // The return values vary based on the system event type.
            // 
            // If the system event type is not one of the following types, this parameter is empty:
            // 
            // *   SystemMaintenance.StopAndRepair
            // *   SystemMaintenance.CleanInactiveDisks
            // *   SecurityPunish.Locked
            // *   SecurityPunish.WebsiteBanned
            // *   SystemUpgrade.Migrate
            // *   SystemMaintenance.RebootAndIsolateErrorDisk
            // *   SystemMaintenance.RebootAndReInitErrorDisk
            // *   SystemMaintenance.ReInitErrorDisk
            // *   SystemMaintenance.IsolateErrorDisk
            shared_ptr<ScheduledSystemEventType::ExtendedAttribute> extendedAttribute_ {};
            // The impact level of the system event.
            // 
            // >  If the user is not in a whitelist, this parameter is empty.
            shared_ptr<string> impactLevel_ {};
            // The scheduled time at which to execute the O\\&M task related to the system event. The time is displayed in UTC.
            shared_ptr<string> notBefore_ {};
            // The reason why the system event was scheduled.
            // 
            // >  If the exception cause is not detected, this parameter is empty.
            shared_ptr<string> reason_ {};
          };

          virtual bool empty() const override { return this->scheduledSystemEventType_ == nullptr; };
          // scheduledSystemEventType Field Functions 
          bool hasScheduledSystemEventType() const { return this->scheduledSystemEventType_ != nullptr;};
          void deleteScheduledSystemEventType() { this->scheduledSystemEventType_ = nullptr;};
          inline const vector<ScheduledSystemEventSet::ScheduledSystemEventType> & getScheduledSystemEventType() const { DARABONBA_PTR_GET_CONST(scheduledSystemEventType_, vector<ScheduledSystemEventSet::ScheduledSystemEventType>) };
          inline vector<ScheduledSystemEventSet::ScheduledSystemEventType> getScheduledSystemEventType() { DARABONBA_PTR_GET(scheduledSystemEventType_, vector<ScheduledSystemEventSet::ScheduledSystemEventType>) };
          inline ScheduledSystemEventSet& setScheduledSystemEventType(const vector<ScheduledSystemEventSet::ScheduledSystemEventType> & scheduledSystemEventType) { DARABONBA_PTR_SET_VALUE(scheduledSystemEventType_, scheduledSystemEventType) };
          inline ScheduledSystemEventSet& setScheduledSystemEventType(vector<ScheduledSystemEventSet::ScheduledSystemEventType> && scheduledSystemEventType) { DARABONBA_PTR_SET_RVALUE(scheduledSystemEventType_, scheduledSystemEventType) };


        protected:
          shared_ptr<vector<ScheduledSystemEventSet::ScheduledSystemEventType>> scheduledSystemEventType_ {};
        };

        class HealthStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HealthStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, HealthStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          HealthStatus() = default ;
          HealthStatus(const HealthStatus &) = default ;
          HealthStatus(HealthStatus &&) = default ;
          HealthStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HealthStatus() = default ;
          HealthStatus& operator=(const HealthStatus &) = default ;
          HealthStatus& operator=(HealthStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
          inline HealthStatus& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HealthStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The code of the health state.
          shared_ptr<int32_t> code_ {};
          // The name of the health state.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->healthStatus_ == nullptr
        && this->instanceId_ == nullptr && this->scheduledSystemEventSet_ == nullptr && this->status_ == nullptr; };
        // healthStatus Field Functions 
        bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
        void deleteHealthStatus() { this->healthStatus_ = nullptr;};
        inline const InstanceFullStatusType::HealthStatus & getHealthStatus() const { DARABONBA_PTR_GET_CONST(healthStatus_, InstanceFullStatusType::HealthStatus) };
        inline InstanceFullStatusType::HealthStatus getHealthStatus() { DARABONBA_PTR_GET(healthStatus_, InstanceFullStatusType::HealthStatus) };
        inline InstanceFullStatusType& setHealthStatus(const InstanceFullStatusType::HealthStatus & healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };
        inline InstanceFullStatusType& setHealthStatus(InstanceFullStatusType::HealthStatus && healthStatus) { DARABONBA_PTR_SET_RVALUE(healthStatus_, healthStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceFullStatusType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // scheduledSystemEventSet Field Functions 
        bool hasScheduledSystemEventSet() const { return this->scheduledSystemEventSet_ != nullptr;};
        void deleteScheduledSystemEventSet() { this->scheduledSystemEventSet_ = nullptr;};
        inline const InstanceFullStatusType::ScheduledSystemEventSet & getScheduledSystemEventSet() const { DARABONBA_PTR_GET_CONST(scheduledSystemEventSet_, InstanceFullStatusType::ScheduledSystemEventSet) };
        inline InstanceFullStatusType::ScheduledSystemEventSet getScheduledSystemEventSet() { DARABONBA_PTR_GET(scheduledSystemEventSet_, InstanceFullStatusType::ScheduledSystemEventSet) };
        inline InstanceFullStatusType& setScheduledSystemEventSet(const InstanceFullStatusType::ScheduledSystemEventSet & scheduledSystemEventSet) { DARABONBA_PTR_SET_VALUE(scheduledSystemEventSet_, scheduledSystemEventSet) };
        inline InstanceFullStatusType& setScheduledSystemEventSet(InstanceFullStatusType::ScheduledSystemEventSet && scheduledSystemEventSet) { DARABONBA_PTR_SET_RVALUE(scheduledSystemEventSet_, scheduledSystemEventSet) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline const InstanceFullStatusType::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, InstanceFullStatusType::Status) };
        inline InstanceFullStatusType::Status getStatus() { DARABONBA_PTR_GET(status_, InstanceFullStatusType::Status) };
        inline InstanceFullStatusType& setStatus(const InstanceFullStatusType::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
        inline InstanceFullStatusType& setStatus(InstanceFullStatusType::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      protected:
        // The health state of the instance.
        shared_ptr<InstanceFullStatusType::HealthStatus> healthStatus_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The system events that are in the Scheduled or Inquiring state.
        shared_ptr<InstanceFullStatusType::ScheduledSystemEventSet> scheduledSystemEventSet_ {};
        // The lifecycle state of the instance.
        shared_ptr<InstanceFullStatusType::Status> status_ {};
      };

      virtual bool empty() const override { return this->instanceFullStatusType_ == nullptr; };
      // instanceFullStatusType Field Functions 
      bool hasInstanceFullStatusType() const { return this->instanceFullStatusType_ != nullptr;};
      void deleteInstanceFullStatusType() { this->instanceFullStatusType_ = nullptr;};
      inline const vector<InstanceFullStatusSet::InstanceFullStatusType> & getInstanceFullStatusType() const { DARABONBA_PTR_GET_CONST(instanceFullStatusType_, vector<InstanceFullStatusSet::InstanceFullStatusType>) };
      inline vector<InstanceFullStatusSet::InstanceFullStatusType> getInstanceFullStatusType() { DARABONBA_PTR_GET(instanceFullStatusType_, vector<InstanceFullStatusSet::InstanceFullStatusType>) };
      inline InstanceFullStatusSet& setInstanceFullStatusType(const vector<InstanceFullStatusSet::InstanceFullStatusType> & instanceFullStatusType) { DARABONBA_PTR_SET_VALUE(instanceFullStatusType_, instanceFullStatusType) };
      inline InstanceFullStatusSet& setInstanceFullStatusType(vector<InstanceFullStatusSet::InstanceFullStatusType> && instanceFullStatusType) { DARABONBA_PTR_SET_RVALUE(instanceFullStatusType_, instanceFullStatusType) };


    protected:
      shared_ptr<vector<InstanceFullStatusSet::InstanceFullStatusType>> instanceFullStatusType_ {};
    };

    virtual bool empty() const override { return this->instanceFullStatusSet_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceFullStatusSet Field Functions 
    bool hasInstanceFullStatusSet() const { return this->instanceFullStatusSet_ != nullptr;};
    void deleteInstanceFullStatusSet() { this->instanceFullStatusSet_ = nullptr;};
    inline const DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet & getInstanceFullStatusSet() const { DARABONBA_PTR_GET_CONST(instanceFullStatusSet_, DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet) };
    inline DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet getInstanceFullStatusSet() { DARABONBA_PTR_GET(instanceFullStatusSet_, DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet) };
    inline DescribeInstancesFullStatusResponseBody& setInstanceFullStatusSet(const DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet & instanceFullStatusSet) { DARABONBA_PTR_SET_VALUE(instanceFullStatusSet_, instanceFullStatusSet) };
    inline DescribeInstancesFullStatusResponseBody& setInstanceFullStatusSet(DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet && instanceFullStatusSet) { DARABONBA_PTR_SET_RVALUE(instanceFullStatusSet_, instanceFullStatusSet) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesFullStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesFullStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesFullStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesFullStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried instances.
    // 
    // >  If no instances exist, this parameter is empty.
    shared_ptr<DescribeInstancesFullStatusResponseBody::InstanceFullStatusSet> instanceFullStatusSet_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
