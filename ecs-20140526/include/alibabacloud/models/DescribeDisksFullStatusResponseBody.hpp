// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODY_HPP_
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
  class DescribeDisksFullStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksFullStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskFullStatusSet, diskFullStatusSet_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksFullStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskFullStatusSet, diskFullStatusSet_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDisksFullStatusResponseBody() = default ;
    DescribeDisksFullStatusResponseBody(const DescribeDisksFullStatusResponseBody &) = default ;
    DescribeDisksFullStatusResponseBody(DescribeDisksFullStatusResponseBody &&) = default ;
    DescribeDisksFullStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksFullStatusResponseBody() = default ;
    DescribeDisksFullStatusResponseBody& operator=(const DescribeDisksFullStatusResponseBody &) = default ;
    DescribeDisksFullStatusResponseBody& operator=(DescribeDisksFullStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiskFullStatusSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskFullStatusSet& obj) { 
        DARABONBA_PTR_TO_JSON(DiskFullStatusType, diskFullStatusType_);
      };
      friend void from_json(const Darabonba::Json& j, DiskFullStatusSet& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskFullStatusType, diskFullStatusType_);
      };
      DiskFullStatusSet() = default ;
      DiskFullStatusSet(const DiskFullStatusSet &) = default ;
      DiskFullStatusSet(DiskFullStatusSet &&) = default ;
      DiskFullStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiskFullStatusSet() = default ;
      DiskFullStatusSet& operator=(const DiskFullStatusSet &) = default ;
      DiskFullStatusSet& operator=(DiskFullStatusSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DiskFullStatusType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskFullStatusType& obj) { 
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(DiskEventSet, diskEventSet_);
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DiskFullStatusType& obj) { 
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(DiskEventSet, diskEventSet_);
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DiskFullStatusType() = default ;
        DiskFullStatusType(const DiskFullStatusType &) = default ;
        DiskFullStatusType(DiskFullStatusType &&) = default ;
        DiskFullStatusType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiskFullStatusType() = default ;
        DiskFullStatusType& operator=(const DiskFullStatusType &) = default ;
        DiskFullStatusType& operator=(DiskFullStatusType &&) = default ;
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
          // The code of the lifecycle status of the EBS device.
          shared_ptr<int32_t> code_ {};
          // The name of the lifecycle status of the EBS device.
          shared_ptr<string> name_ {};
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
          // The code of the health status of the EBS device.
          shared_ptr<int32_t> code_ {};
          // The name of the health status of the EBS device.
          shared_ptr<string> name_ {};
        };

        class DiskEventSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiskEventSet& obj) { 
            DARABONBA_PTR_TO_JSON(DiskEventType, diskEventType_);
          };
          friend void from_json(const Darabonba::Json& j, DiskEventSet& obj) { 
            DARABONBA_PTR_FROM_JSON(DiskEventType, diskEventType_);
          };
          DiskEventSet() = default ;
          DiskEventSet(const DiskEventSet &) = default ;
          DiskEventSet(DiskEventSet &&) = default ;
          DiskEventSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiskEventSet() = default ;
          DiskEventSet& operator=(const DiskEventSet &) = default ;
          DiskEventSet& operator=(DiskEventSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DiskEventType : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DiskEventType& obj) { 
              DARABONBA_PTR_TO_JSON(EventEndTime, eventEndTime_);
              DARABONBA_PTR_TO_JSON(EventId, eventId_);
              DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
              DARABONBA_PTR_TO_JSON(EventType, eventType_);
              DARABONBA_PTR_TO_JSON(ImpactLevel, impactLevel_);
            };
            friend void from_json(const Darabonba::Json& j, DiskEventType& obj) { 
              DARABONBA_PTR_FROM_JSON(EventEndTime, eventEndTime_);
              DARABONBA_PTR_FROM_JSON(EventId, eventId_);
              DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
              DARABONBA_PTR_FROM_JSON(EventType, eventType_);
              DARABONBA_PTR_FROM_JSON(ImpactLevel, impactLevel_);
            };
            DiskEventType() = default ;
            DiskEventType(const DiskEventType &) = default ;
            DiskEventType(DiskEventType &&) = default ;
            DiskEventType(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DiskEventType() = default ;
            DiskEventType& operator=(const DiskEventType &) = default ;
            DiskEventType& operator=(DiskEventType &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
              // The code of the event type.
              shared_ptr<int32_t> code_ {};
              // The name of the event type. Valid values:
              // 
              // *   Degraded: The performance of the EBS device is degraded.
              // *   SeverelyDegraded: The performance of the EBS device is severely degraded.
              // *   Stalled: The performance of the EBS device is severely affected.
              // *   ErrorDetected: The local disk is damaged.
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->eventEndTime_ == nullptr
        && this->eventId_ == nullptr && this->eventTime_ == nullptr && this->eventType_ == nullptr && this->impactLevel_ == nullptr; };
            // eventEndTime Field Functions 
            bool hasEventEndTime() const { return this->eventEndTime_ != nullptr;};
            void deleteEventEndTime() { this->eventEndTime_ = nullptr;};
            inline string getEventEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventEndTime_, "") };
            inline DiskEventType& setEventEndTime(string eventEndTime) { DARABONBA_PTR_SET_VALUE(eventEndTime_, eventEndTime) };


            // eventId Field Functions 
            bool hasEventId() const { return this->eventId_ != nullptr;};
            void deleteEventId() { this->eventId_ = nullptr;};
            inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
            inline DiskEventType& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


            // eventTime Field Functions 
            bool hasEventTime() const { return this->eventTime_ != nullptr;};
            void deleteEventTime() { this->eventTime_ = nullptr;};
            inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
            inline DiskEventType& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


            // eventType Field Functions 
            bool hasEventType() const { return this->eventType_ != nullptr;};
            void deleteEventType() { this->eventType_ = nullptr;};
            inline const DiskEventType::EventType & getEventType() const { DARABONBA_PTR_GET_CONST(eventType_, DiskEventType::EventType) };
            inline DiskEventType::EventType getEventType() { DARABONBA_PTR_GET(eventType_, DiskEventType::EventType) };
            inline DiskEventType& setEventType(const DiskEventType::EventType & eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };
            inline DiskEventType& setEventType(DiskEventType::EventType && eventType) { DARABONBA_PTR_SET_RVALUE(eventType_, eventType) };


            // impactLevel Field Functions 
            bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
            void deleteImpactLevel() { this->impactLevel_ = nullptr;};
            inline string getImpactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
            inline DiskEventType& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


          protected:
            // The time when the event ended.
            shared_ptr<string> eventEndTime_ {};
            // The ID of the event.
            shared_ptr<string> eventId_ {};
            // The time when the event occurred.
            shared_ptr<string> eventTime_ {};
            // The type of the event.
            shared_ptr<DiskEventType::EventType> eventType_ {};
            // The impact level of the event.
            shared_ptr<string> impactLevel_ {};
          };

          virtual bool empty() const override { return this->diskEventType_ == nullptr; };
          // diskEventType Field Functions 
          bool hasDiskEventType() const { return this->diskEventType_ != nullptr;};
          void deleteDiskEventType() { this->diskEventType_ = nullptr;};
          inline const vector<DiskEventSet::DiskEventType> & getDiskEventType() const { DARABONBA_PTR_GET_CONST(diskEventType_, vector<DiskEventSet::DiskEventType>) };
          inline vector<DiskEventSet::DiskEventType> getDiskEventType() { DARABONBA_PTR_GET(diskEventType_, vector<DiskEventSet::DiskEventType>) };
          inline DiskEventSet& setDiskEventType(const vector<DiskEventSet::DiskEventType> & diskEventType) { DARABONBA_PTR_SET_VALUE(diskEventType_, diskEventType) };
          inline DiskEventSet& setDiskEventType(vector<DiskEventSet::DiskEventType> && diskEventType) { DARABONBA_PTR_SET_RVALUE(diskEventType_, diskEventType) };


        protected:
          shared_ptr<vector<DiskEventSet::DiskEventType>> diskEventType_ {};
        };

        virtual bool empty() const override { return this->device_ == nullptr
        && this->diskEventSet_ == nullptr && this->diskId_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr; };
        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline DiskFullStatusType& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // diskEventSet Field Functions 
        bool hasDiskEventSet() const { return this->diskEventSet_ != nullptr;};
        void deleteDiskEventSet() { this->diskEventSet_ = nullptr;};
        inline const DiskFullStatusType::DiskEventSet & getDiskEventSet() const { DARABONBA_PTR_GET_CONST(diskEventSet_, DiskFullStatusType::DiskEventSet) };
        inline DiskFullStatusType::DiskEventSet getDiskEventSet() { DARABONBA_PTR_GET(diskEventSet_, DiskFullStatusType::DiskEventSet) };
        inline DiskFullStatusType& setDiskEventSet(const DiskFullStatusType::DiskEventSet & diskEventSet) { DARABONBA_PTR_SET_VALUE(diskEventSet_, diskEventSet) };
        inline DiskFullStatusType& setDiskEventSet(DiskFullStatusType::DiskEventSet && diskEventSet) { DARABONBA_PTR_SET_RVALUE(diskEventSet_, diskEventSet) };


        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline DiskFullStatusType& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // healthStatus Field Functions 
        bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
        void deleteHealthStatus() { this->healthStatus_ = nullptr;};
        inline const DiskFullStatusType::HealthStatus & getHealthStatus() const { DARABONBA_PTR_GET_CONST(healthStatus_, DiskFullStatusType::HealthStatus) };
        inline DiskFullStatusType::HealthStatus getHealthStatus() { DARABONBA_PTR_GET(healthStatus_, DiskFullStatusType::HealthStatus) };
        inline DiskFullStatusType& setHealthStatus(const DiskFullStatusType::HealthStatus & healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };
        inline DiskFullStatusType& setHealthStatus(DiskFullStatusType::HealthStatus && healthStatus) { DARABONBA_PTR_SET_RVALUE(healthStatus_, healthStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DiskFullStatusType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline const DiskFullStatusType::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, DiskFullStatusType::Status) };
        inline DiskFullStatusType::Status getStatus() { DARABONBA_PTR_GET(status_, DiskFullStatusType::Status) };
        inline DiskFullStatusType& setStatus(const DiskFullStatusType::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
        inline DiskFullStatusType& setStatus(DiskFullStatusType::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      protected:
        // The name of the EBS device that is attached to an instance. Example: /dev/xvdb.
        // 
        // This parameter has a value only when the value of `Status` is `In_use`.
        // 
        // > This parameter will be deprecated in the future. To ensure future compatibility, we recommend that you do not use this parameter.
        shared_ptr<string> device_ {};
        // The events about the EBS device.
        shared_ptr<DiskFullStatusType::DiskEventSet> diskEventSet_ {};
        // The EBS device ID.
        shared_ptr<string> diskId_ {};
        // The health status of the EBS device.
        shared_ptr<DiskFullStatusType::HealthStatus> healthStatus_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The lifecycle status of the EBS device.
        shared_ptr<DiskFullStatusType::Status> status_ {};
      };

      virtual bool empty() const override { return this->diskFullStatusType_ == nullptr; };
      // diskFullStatusType Field Functions 
      bool hasDiskFullStatusType() const { return this->diskFullStatusType_ != nullptr;};
      void deleteDiskFullStatusType() { this->diskFullStatusType_ = nullptr;};
      inline const vector<DiskFullStatusSet::DiskFullStatusType> & getDiskFullStatusType() const { DARABONBA_PTR_GET_CONST(diskFullStatusType_, vector<DiskFullStatusSet::DiskFullStatusType>) };
      inline vector<DiskFullStatusSet::DiskFullStatusType> getDiskFullStatusType() { DARABONBA_PTR_GET(diskFullStatusType_, vector<DiskFullStatusSet::DiskFullStatusType>) };
      inline DiskFullStatusSet& setDiskFullStatusType(const vector<DiskFullStatusSet::DiskFullStatusType> & diskFullStatusType) { DARABONBA_PTR_SET_VALUE(diskFullStatusType_, diskFullStatusType) };
      inline DiskFullStatusSet& setDiskFullStatusType(vector<DiskFullStatusSet::DiskFullStatusType> && diskFullStatusType) { DARABONBA_PTR_SET_RVALUE(diskFullStatusType_, diskFullStatusType) };


    protected:
      shared_ptr<vector<DiskFullStatusSet::DiskFullStatusType>> diskFullStatusType_ {};
    };

    virtual bool empty() const override { return this->diskFullStatusSet_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // diskFullStatusSet Field Functions 
    bool hasDiskFullStatusSet() const { return this->diskFullStatusSet_ != nullptr;};
    void deleteDiskFullStatusSet() { this->diskFullStatusSet_ = nullptr;};
    inline const DescribeDisksFullStatusResponseBody::DiskFullStatusSet & getDiskFullStatusSet() const { DARABONBA_PTR_GET_CONST(diskFullStatusSet_, DescribeDisksFullStatusResponseBody::DiskFullStatusSet) };
    inline DescribeDisksFullStatusResponseBody::DiskFullStatusSet getDiskFullStatusSet() { DARABONBA_PTR_GET(diskFullStatusSet_, DescribeDisksFullStatusResponseBody::DiskFullStatusSet) };
    inline DescribeDisksFullStatusResponseBody& setDiskFullStatusSet(const DescribeDisksFullStatusResponseBody::DiskFullStatusSet & diskFullStatusSet) { DARABONBA_PTR_SET_VALUE(diskFullStatusSet_, diskFullStatusSet) };
    inline DescribeDisksFullStatusResponseBody& setDiskFullStatusSet(DescribeDisksFullStatusResponseBody::DiskFullStatusSet && diskFullStatusSet) { DARABONBA_PTR_SET_RVALUE(diskFullStatusSet_, diskFullStatusSet) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDisksFullStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDisksFullStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisksFullStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDisksFullStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The collection of full status information of the EBS devices.
    shared_ptr<DescribeDisksFullStatusResponseBody::DiskFullStatusSet> diskFullStatusSet_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of EBS devices for which full status information is returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
