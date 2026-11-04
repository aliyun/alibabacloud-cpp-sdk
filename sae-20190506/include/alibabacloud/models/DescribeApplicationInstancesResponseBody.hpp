// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationInstancesResponseBody() = default ;
    DescribeApplicationInstancesResponseBody(const DescribeApplicationInstancesResponseBody &) = default ;
    DescribeApplicationInstancesResponseBody(DescribeApplicationInstancesResponseBody &&) = default ;
    DescribeApplicationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationInstancesResponseBody() = default ;
    DescribeApplicationInstancesResponseBody& operator=(const DescribeApplicationInstancesResponseBody &) = default ;
    DescribeApplicationInstancesResponseBody& operator=(DescribeApplicationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_TO_JSON(Eip, eip_);
          DARABONBA_PTR_TO_JSON(FinishTimeStamp, finishTimeStamp_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(InstanceContainerIp, instanceContainerIp_);
          DARABONBA_PTR_TO_JSON(InstanceContainerRestarts, instanceContainerRestarts_);
          DARABONBA_PTR_TO_JSON(InstanceContainerStatus, instanceContainerStatus_);
          DARABONBA_PTR_TO_JSON(InstanceHealthStatus, instanceHealthStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MainContainerStatus, mainContainerStatus_);
          DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_TO_JSON(SidecarContainersStatus, sidecarContainersStatus_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(TrafficStatus, trafficStatus_);
          DARABONBA_PTR_TO_JSON(UnhealthyMessage, unhealthyMessage_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_FROM_JSON(Eip, eip_);
          DARABONBA_PTR_FROM_JSON(FinishTimeStamp, finishTimeStamp_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceContainerIp, instanceContainerIp_);
          DARABONBA_PTR_FROM_JSON(InstanceContainerRestarts, instanceContainerRestarts_);
          DARABONBA_PTR_FROM_JSON(InstanceContainerStatus, instanceContainerStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceHealthStatus, instanceHealthStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MainContainerStatus, mainContainerStatus_);
          DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_FROM_JSON(SidecarContainersStatus, sidecarContainersStatus_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(TrafficStatus, trafficStatus_);
          DARABONBA_PTR_FROM_JSON(UnhealthyMessage, unhealthyMessage_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        class SidecarContainersStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SidecarContainersStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
            DARABONBA_PTR_TO_JSON(ContainerStatus, containerStatus_);
            DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          };
          friend void from_json(const Darabonba::Json& j, SidecarContainersStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
            DARABONBA_PTR_FROM_JSON(ContainerStatus, containerStatus_);
            DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          };
          SidecarContainersStatus() = default ;
          SidecarContainersStatus(const SidecarContainersStatus &) = default ;
          SidecarContainersStatus(SidecarContainersStatus &&) = default ;
          SidecarContainersStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SidecarContainersStatus() = default ;
          SidecarContainersStatus& operator=(const SidecarContainersStatus &) = default ;
          SidecarContainersStatus& operator=(SidecarContainersStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->containerId_ == nullptr
        && this->containerStatus_ == nullptr && this->imageUrl_ == nullptr; };
          // containerId Field Functions 
          bool hasContainerId() const { return this->containerId_ != nullptr;};
          void deleteContainerId() { this->containerId_ = nullptr;};
          inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
          inline SidecarContainersStatus& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


          // containerStatus Field Functions 
          bool hasContainerStatus() const { return this->containerStatus_ != nullptr;};
          void deleteContainerStatus() { this->containerStatus_ = nullptr;};
          inline string getContainerStatus() const { DARABONBA_PTR_GET_DEFAULT(containerStatus_, "") };
          inline SidecarContainersStatus& setContainerStatus(string containerStatus) { DARABONBA_PTR_SET_VALUE(containerStatus_, containerStatus) };


          // imageUrl Field Functions 
          bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
          void deleteImageUrl() { this->imageUrl_ = nullptr;};
          inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
          inline SidecarContainersStatus& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        protected:
          // The sidecar container ID.
          shared_ptr<string> containerId_ {};
          // The container status.
          shared_ptr<string> containerStatus_ {};
          // The image address.
          shared_ptr<string> imageUrl_ {};
        };

        virtual bool empty() const override { return this->createTimeStamp_ == nullptr
        && this->debugStatus_ == nullptr && this->eip_ == nullptr && this->finishTimeStamp_ == nullptr && this->groupId_ == nullptr && this->imageUrl_ == nullptr
        && this->instanceContainerIp_ == nullptr && this->instanceContainerRestarts_ == nullptr && this->instanceContainerStatus_ == nullptr && this->instanceHealthStatus_ == nullptr && this->instanceId_ == nullptr
        && this->mainContainerStatus_ == nullptr && this->packageVersion_ == nullptr && this->sidecarContainersStatus_ == nullptr && this->tags_ == nullptr && this->timestamp_ == nullptr
        && this->trafficStatus_ == nullptr && this->unhealthyMessage_ == nullptr && this->vSwitchId_ == nullptr; };
        // createTimeStamp Field Functions 
        bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
        void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
        inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
        inline Instances& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


        // debugStatus Field Functions 
        bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
        void deleteDebugStatus() { this->debugStatus_ = nullptr;};
        inline bool getDebugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, false) };
        inline Instances& setDebugStatus(bool debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


        // eip Field Functions 
        bool hasEip() const { return this->eip_ != nullptr;};
        void deleteEip() { this->eip_ = nullptr;};
        inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
        inline Instances& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


        // finishTimeStamp Field Functions 
        bool hasFinishTimeStamp() const { return this->finishTimeStamp_ != nullptr;};
        void deleteFinishTimeStamp() { this->finishTimeStamp_ = nullptr;};
        inline int64_t getFinishTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(finishTimeStamp_, 0L) };
        inline Instances& setFinishTimeStamp(int64_t finishTimeStamp) { DARABONBA_PTR_SET_VALUE(finishTimeStamp_, finishTimeStamp) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Instances& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Instances& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // instanceContainerIp Field Functions 
        bool hasInstanceContainerIp() const { return this->instanceContainerIp_ != nullptr;};
        void deleteInstanceContainerIp() { this->instanceContainerIp_ = nullptr;};
        inline string getInstanceContainerIp() const { DARABONBA_PTR_GET_DEFAULT(instanceContainerIp_, "") };
        inline Instances& setInstanceContainerIp(string instanceContainerIp) { DARABONBA_PTR_SET_VALUE(instanceContainerIp_, instanceContainerIp) };


        // instanceContainerRestarts Field Functions 
        bool hasInstanceContainerRestarts() const { return this->instanceContainerRestarts_ != nullptr;};
        void deleteInstanceContainerRestarts() { this->instanceContainerRestarts_ = nullptr;};
        inline int64_t getInstanceContainerRestarts() const { DARABONBA_PTR_GET_DEFAULT(instanceContainerRestarts_, 0L) };
        inline Instances& setInstanceContainerRestarts(int64_t instanceContainerRestarts) { DARABONBA_PTR_SET_VALUE(instanceContainerRestarts_, instanceContainerRestarts) };


        // instanceContainerStatus Field Functions 
        bool hasInstanceContainerStatus() const { return this->instanceContainerStatus_ != nullptr;};
        void deleteInstanceContainerStatus() { this->instanceContainerStatus_ = nullptr;};
        inline string getInstanceContainerStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceContainerStatus_, "") };
        inline Instances& setInstanceContainerStatus(string instanceContainerStatus) { DARABONBA_PTR_SET_VALUE(instanceContainerStatus_, instanceContainerStatus) };


        // instanceHealthStatus Field Functions 
        bool hasInstanceHealthStatus() const { return this->instanceHealthStatus_ != nullptr;};
        void deleteInstanceHealthStatus() { this->instanceHealthStatus_ = nullptr;};
        inline string getInstanceHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceHealthStatus_, "") };
        inline Instances& setInstanceHealthStatus(string instanceHealthStatus) { DARABONBA_PTR_SET_VALUE(instanceHealthStatus_, instanceHealthStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // mainContainerStatus Field Functions 
        bool hasMainContainerStatus() const { return this->mainContainerStatus_ != nullptr;};
        void deleteMainContainerStatus() { this->mainContainerStatus_ = nullptr;};
        inline string getMainContainerStatus() const { DARABONBA_PTR_GET_DEFAULT(mainContainerStatus_, "") };
        inline Instances& setMainContainerStatus(string mainContainerStatus) { DARABONBA_PTR_SET_VALUE(mainContainerStatus_, mainContainerStatus) };


        // packageVersion Field Functions 
        bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
        void deletePackageVersion() { this->packageVersion_ = nullptr;};
        inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
        inline Instances& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


        // sidecarContainersStatus Field Functions 
        bool hasSidecarContainersStatus() const { return this->sidecarContainersStatus_ != nullptr;};
        void deleteSidecarContainersStatus() { this->sidecarContainersStatus_ = nullptr;};
        inline const vector<Instances::SidecarContainersStatus> & getSidecarContainersStatus() const { DARABONBA_PTR_GET_CONST(sidecarContainersStatus_, vector<Instances::SidecarContainersStatus>) };
        inline vector<Instances::SidecarContainersStatus> getSidecarContainersStatus() { DARABONBA_PTR_GET(sidecarContainersStatus_, vector<Instances::SidecarContainersStatus>) };
        inline Instances& setSidecarContainersStatus(const vector<Instances::SidecarContainersStatus> & sidecarContainersStatus) { DARABONBA_PTR_SET_VALUE(sidecarContainersStatus_, sidecarContainersStatus) };
        inline Instances& setSidecarContainersStatus(vector<Instances::SidecarContainersStatus> && sidecarContainersStatus) { DARABONBA_PTR_SET_RVALUE(sidecarContainersStatus_, sidecarContainersStatus) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Instances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instances::Tags>) };
        inline vector<Instances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instances::Tags>) };
        inline Instances& setTags(const vector<Instances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Instances& setTags(vector<Instances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Instances& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // trafficStatus Field Functions 
        bool hasTrafficStatus() const { return this->trafficStatus_ != nullptr;};
        void deleteTrafficStatus() { this->trafficStatus_ = nullptr;};
        inline string getTrafficStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficStatus_, "") };
        inline Instances& setTrafficStatus(string trafficStatus) { DARABONBA_PTR_SET_VALUE(trafficStatus_, trafficStatus) };


        // unhealthyMessage Field Functions 
        bool hasUnhealthyMessage() const { return this->unhealthyMessage_ != nullptr;};
        void deleteUnhealthyMessage() { this->unhealthyMessage_ = nullptr;};
        inline string getUnhealthyMessage() const { DARABONBA_PTR_GET_DEFAULT(unhealthyMessage_, "") };
        inline Instances& setUnhealthyMessage(string unhealthyMessage) { DARABONBA_PTR_SET_VALUE(unhealthyMessage_, unhealthyMessage) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Instances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The timestamp when the instance started to be created. Unit: milliseconds.
        shared_ptr<int64_t> createTimeStamp_ {};
        // Specifies whether the instance is being debugged. Valid values:
        // 
        // - **True**: Yes.
        // - **False**: No.
        shared_ptr<bool> debugStatus_ {};
        // The elastic IP address.
        shared_ptr<string> eip_ {};
        // The timestamp when the instance was created. Unit: milliseconds.
        shared_ptr<int64_t> finishTimeStamp_ {};
        // The ID of the group to which the instance belongs.
        shared_ptr<string> groupId_ {};
        // The image repository address.
        // > If you deploy the application by using a JAR package or a WAR package, the image generated by the Serverless App Engine (SAE) platform is not available for public download.
        shared_ptr<string> imageUrl_ {};
        // The internal IP address of the instance.
        shared_ptr<string> instanceContainerIp_ {};
        // The number of times the instance has been restarted.
        shared_ptr<int64_t> instanceContainerRestarts_ {};
        // The running status of the instance. Valid values:
        // 
        // - **Error**: An error occurred during instance startup.
        // - **CrashLoopBackOff**: The container failed to start. An error occurred during startup, and the error persisted after a restart.
        // - **ErrImagePull**: An error occurred while pulling the container image for the instance.
        // - **ImagePullBackOff**: The container image cannot be retrieved.
        // - **Pending**: The instance is waiting to be scheduled.
        // - **Unknown**: An unknown exception occurred.
        // - **Terminating**: The instance is being terminated.
        // - **NotFound**: The instance cannot be found.
        // - **PodInitializing**: The instance is being initialized.
        // - **Init:0/1**: The instance is initializing.
        // - **Running**: The instance is running.
        shared_ptr<string> instanceContainerStatus_ {};
        // The health check configuration information. Valid values:
        // 
        // - **WithoutHealthCheckConfig**: Neither liveness nor readiness health checks are configured.
        // - **WithoutLivenessConfig**: The liveness health check is not configured.
        // - **WithoutReadinessConfig**: The readiness health check is not configured.
        // - **NotCheckedYet**: The instance is undergoing or waiting for a health check.
        // - **LivenessUnhealthy**: The liveness health check failed, and the instance is unhealthy.
        // - **ReadinessUnhealthy**: The readiness health check failed, and the instance is unhealthy.
        // - **Unhealthy**: Both liveness and readiness health checks failed, and the instance is unhealthy.
        // - **Healthy**: The health checks passed, and the instance is healthy.
        shared_ptr<string> instanceHealthStatus_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The main container status.
        shared_ptr<string> mainContainerStatus_ {};
        // The version information.
        shared_ptr<string> packageVersion_ {};
        // The status information of the sidecar containers.
        shared_ptr<vector<Instances::SidecarContainersStatus>> sidecarContainersStatus_ {};
        // The tag information.
        shared_ptr<vector<Instances::Tags>> tags_ {};
        // The timestamp.
        shared_ptr<int64_t> timestamp_ {};
        // The traffic status.
        shared_ptr<string> trafficStatus_ {};
        // The specific cause or error message returned when the health check of the application instance fails. If the health check passes, no information is returned in this field.
        shared_ptr<string> unhealthyMessage_ {};
        // The zone where the instance resides.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->instances_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The list of application instances.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The paging Settings for the number of entries per page in a paged query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of instances.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationInstancesResponseBody::Data) };
    inline DescribeApplicationInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationInstancesResponseBody::Data) };
    inline DescribeApplicationInstancesResponseBody& setData(const DescribeApplicationInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationInstancesResponseBody& setData(DescribeApplicationInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationInstancesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The API status code or POP error code. Valid values:
    // 
    // - **2xx**: Successful.
    // - **3xx**: Redirection.
    // - **4xx**: Request error.
    // - **5xx**: Server error.
    shared_ptr<string> code_ {};
    // The application instance information.
    shared_ptr<DescribeApplicationInstancesResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // - Request succeeded: The **ErrorCode** field is not returned.
    // - Request failed: The **ErrorCode** field is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The additional information about the call result.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the application instance list was successfully retrieved. Valid values:
    // 
    // - **true**: Successful.
    // - **false**: Failed.
    shared_ptr<bool> success_ {};
    // The trace ID used to query the exact call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
