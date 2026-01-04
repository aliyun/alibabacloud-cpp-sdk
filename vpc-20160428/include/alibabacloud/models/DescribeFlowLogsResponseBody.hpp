// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFlowLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFlowLogsResponseBody() = default ;
    DescribeFlowLogsResponseBody(const DescribeFlowLogsResponseBody &) = default ;
    DescribeFlowLogsResponseBody(DescribeFlowLogsResponseBody &&) = default ;
    DescribeFlowLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsResponseBody() = default ;
    DescribeFlowLogsResponseBody& operator=(const DescribeFlowLogsResponseBody &) = default ;
    DescribeFlowLogsResponseBody& operator=(DescribeFlowLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowLogs& obj) { 
        DARABONBA_PTR_TO_JSON(FlowLog, flowLog_);
      };
      friend void from_json(const Darabonba::Json& j, FlowLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowLog, flowLog_);
      };
      FlowLogs() = default ;
      FlowLogs(const FlowLogs &) = default ;
      FlowLogs(FlowLogs &&) = default ;
      FlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowLogs() = default ;
      FlowLogs& operator=(const FlowLogs &) = default ;
      FlowLogs& operator=(FlowLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FlowLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowLog& obj) { 
          DARABONBA_PTR_TO_JSON(AggregationInterval, aggregationInterval_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FlowLogDeliverErrorMessage, flowLogDeliverErrorMessage_);
          DARABONBA_PTR_TO_JSON(FlowLogDeliverStatus, flowLogDeliverStatus_);
          DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
          DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TrafficPath, trafficPath_);
          DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
        };
        friend void from_json(const Darabonba::Json& j, FlowLog& obj) { 
          DARABONBA_PTR_FROM_JSON(AggregationInterval, aggregationInterval_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FlowLogDeliverErrorMessage, flowLogDeliverErrorMessage_);
          DARABONBA_PTR_FROM_JSON(FlowLogDeliverStatus, flowLogDeliverStatus_);
          DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
          DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TrafficPath, trafficPath_);
          DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
        };
        FlowLog() = default ;
        FlowLog(const FlowLog &) = default ;
        FlowLog(FlowLog &&) = default ;
        FlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowLog() = default ;
        FlowLog& operator=(const FlowLog &) = default ;
        FlowLog& operator=(FlowLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TrafficPath : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrafficPath& obj) { 
            DARABONBA_PTR_TO_JSON(TrafficPathList, trafficPathList_);
          };
          friend void from_json(const Darabonba::Json& j, TrafficPath& obj) { 
            DARABONBA_PTR_FROM_JSON(TrafficPathList, trafficPathList_);
          };
          TrafficPath() = default ;
          TrafficPath(const TrafficPath &) = default ;
          TrafficPath(TrafficPath &&) = default ;
          TrafficPath(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrafficPath() = default ;
          TrafficPath& operator=(const TrafficPath &) = default ;
          TrafficPath& operator=(TrafficPath &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->trafficPathList_ == nullptr; };
          // trafficPathList Field Functions 
          bool hasTrafficPathList() const { return this->trafficPathList_ != nullptr;};
          void deleteTrafficPathList() { this->trafficPathList_ = nullptr;};
          inline const vector<string> & getTrafficPathList() const { DARABONBA_PTR_GET_CONST(trafficPathList_, vector<string>) };
          inline vector<string> getTrafficPathList() { DARABONBA_PTR_GET(trafficPathList_, vector<string>) };
          inline TrafficPath& setTrafficPathList(const vector<string> & trafficPathList) { DARABONBA_PTR_SET_VALUE(trafficPathList_, trafficPathList) };
          inline TrafficPath& setTrafficPathList(vector<string> && trafficPathList) { DARABONBA_PTR_SET_RVALUE(trafficPathList_, trafficPathList) };


        protected:
          shared_ptr<vector<string>> trafficPathList_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // Tag key.
            shared_ptr<string> key_ {};
            // Tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->aggregationInterval_ == nullptr
        && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->flowLogDeliverErrorMessage_ == nullptr && this->flowLogDeliverStatus_ == nullptr
        && this->flowLogId_ == nullptr && this->flowLogName_ == nullptr && this->ipVersion_ == nullptr && this->logStoreName_ == nullptr && this->projectName_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->serviceType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->trafficPath_ == nullptr && this->trafficType_ == nullptr; };
        // aggregationInterval Field Functions 
        bool hasAggregationInterval() const { return this->aggregationInterval_ != nullptr;};
        void deleteAggregationInterval() { this->aggregationInterval_ = nullptr;};
        inline int32_t getAggregationInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregationInterval_, 0) };
        inline FlowLog& setAggregationInterval(int32_t aggregationInterval) { DARABONBA_PTR_SET_VALUE(aggregationInterval_, aggregationInterval) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline FlowLog& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline FlowLog& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FlowLog& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // flowLogDeliverErrorMessage Field Functions 
        bool hasFlowLogDeliverErrorMessage() const { return this->flowLogDeliverErrorMessage_ != nullptr;};
        void deleteFlowLogDeliverErrorMessage() { this->flowLogDeliverErrorMessage_ = nullptr;};
        inline string getFlowLogDeliverErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(flowLogDeliverErrorMessage_, "") };
        inline FlowLog& setFlowLogDeliverErrorMessage(string flowLogDeliverErrorMessage) { DARABONBA_PTR_SET_VALUE(flowLogDeliverErrorMessage_, flowLogDeliverErrorMessage) };


        // flowLogDeliverStatus Field Functions 
        bool hasFlowLogDeliverStatus() const { return this->flowLogDeliverStatus_ != nullptr;};
        void deleteFlowLogDeliverStatus() { this->flowLogDeliverStatus_ = nullptr;};
        inline string getFlowLogDeliverStatus() const { DARABONBA_PTR_GET_DEFAULT(flowLogDeliverStatus_, "") };
        inline FlowLog& setFlowLogDeliverStatus(string flowLogDeliverStatus) { DARABONBA_PTR_SET_VALUE(flowLogDeliverStatus_, flowLogDeliverStatus) };


        // flowLogId Field Functions 
        bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
        void deleteFlowLogId() { this->flowLogId_ = nullptr;};
        inline string getFlowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
        inline FlowLog& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


        // flowLogName Field Functions 
        bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
        void deleteFlowLogName() { this->flowLogName_ = nullptr;};
        inline string getFlowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
        inline FlowLog& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline FlowLog& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline FlowLog& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline FlowLog& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FlowLog& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline FlowLog& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline FlowLog& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline FlowLog& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline FlowLog& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FlowLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const FlowLog::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, FlowLog::Tags) };
        inline FlowLog::Tags getTags() { DARABONBA_PTR_GET(tags_, FlowLog::Tags) };
        inline FlowLog& setTags(const FlowLog::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline FlowLog& setTags(FlowLog::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // trafficPath Field Functions 
        bool hasTrafficPath() const { return this->trafficPath_ != nullptr;};
        void deleteTrafficPath() { this->trafficPath_ = nullptr;};
        inline const FlowLog::TrafficPath & getTrafficPath() const { DARABONBA_PTR_GET_CONST(trafficPath_, FlowLog::TrafficPath) };
        inline FlowLog::TrafficPath getTrafficPath() { DARABONBA_PTR_GET(trafficPath_, FlowLog::TrafficPath) };
        inline FlowLog& setTrafficPath(const FlowLog::TrafficPath & trafficPath) { DARABONBA_PTR_SET_VALUE(trafficPath_, trafficPath) };
        inline FlowLog& setTrafficPath(FlowLog::TrafficPath && trafficPath) { DARABONBA_PTR_SET_RVALUE(trafficPath_, trafficPath) };


        // trafficType Field Functions 
        bool hasTrafficType() const { return this->trafficType_ != nullptr;};
        void deleteTrafficType() { this->trafficType_ = nullptr;};
        inline string getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
        inline FlowLog& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


      protected:
        // The sampling interval of the flow log. Unit: minutes.
        shared_ptr<int32_t> aggregationInterval_ {};
        // The business status. Values:
        // 
        // - **Normal**: Normal status.
        // - **FinancialLocked**: Locked due to unpaid bills.
        shared_ptr<string> businessStatus_ {};
        // The creation time of the flow log.
        shared_ptr<string> creationTime_ {};
        // The description of the flow log.
        shared_ptr<string> description_ {};
        // When log delivery fails, you can troubleshoot based on the error messages. Possible error messages include:
        // - **UnavaliableTarget**: The Logstore of the Log Service SLS is unavailable and cannot receive logs. It is recommended to check if the corresponding Logstore actually exists and is accessible. 
        // - **ProjectNotExist**: The Project of the Log Service SLS does not exist. It is suggested to delete the original flow log and create a new one pointing to an existing Project. 
        // - **UnknownError**: An internal error has occurred. Please try again later.
        shared_ptr<string> flowLogDeliverErrorMessage_ {};
        // The delivery status of the flow log, with values:
        // - **SUCCESS**: Delivery succeeded. 
        // - **FAILED**: Delivery failed.
        shared_ptr<string> flowLogDeliverStatus_ {};
        // The ID of the flow log.
        shared_ptr<string> flowLogId_ {};
        // The name of the flow log.
        shared_ptr<string> flowLogName_ {};
        // The type of IP address for collecting flow log traffic.
        shared_ptr<string> ipVersion_ {};
        // The Logstore where the captured traffic is stored.
        shared_ptr<string> logStoreName_ {};
        // The Project that manages the captured traffic.
        shared_ptr<string> projectName_ {};
        // The region ID to which the flow log belongs.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the flow log belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The resource ID of the traffic captured by the flow log.
        shared_ptr<string> resourceId_ {};
        // The resource type of the traffic captured by the flow log:
        // 
        // - **NetworkInterface**: Elastic network interface.
        // - **VSwitch**: All elastic network interfaces within a VSwitch.
        // - **VPC**: All elastic network interfaces within a VPC.
        shared_ptr<string> resourceType_ {};
        // The hosting type of the cloud service.
        // - It can be empty, indicating that the flow log was created by the user. 
        // - When not empty, the only supported value is: **sls**, indicating that the flow log was created through the Log Service console.
        // > Flow log instances created through the Log Service console can be displayed in the VPC list, but they cannot be modified, started, stopped, or deleted within the VPC. If you need to perform these operations on the flow log, you can log in to the [Log Service console](https://sls.console.aliyun.com) to modify, start, stop, or delete it.
        shared_ptr<string> serviceType_ {};
        // The status of the flow log. Values:
        // - **Active**: The flow log is in an active state.
        // 
        // - **Activating**: The flow log is being created.
        // 
        // - **Inactive**: The flow log is in an inactive state.
        shared_ptr<string> status_ {};
        // List of tags
        shared_ptr<FlowLog::Tags> tags_ {};
        // The path of the captured traffic. Values:
        // 
        // - **all**: Indicates full collection.
        // - **internetGateway**: Indicates public network traffic collection.
        shared_ptr<FlowLog::TrafficPath> trafficPath_ {};
        // The type of traffic captured by the flow log. Values:
        // 
        // - **All**: All traffic.
        // - **Allow**: Traffic allowed by access control.
        // - **Drop**: Traffic denied by access control.
        shared_ptr<string> trafficType_ {};
      };

      virtual bool empty() const override { return this->flowLog_ == nullptr; };
      // flowLog Field Functions 
      bool hasFlowLog() const { return this->flowLog_ != nullptr;};
      void deleteFlowLog() { this->flowLog_ = nullptr;};
      inline const vector<FlowLogs::FlowLog> & getFlowLog() const { DARABONBA_PTR_GET_CONST(flowLog_, vector<FlowLogs::FlowLog>) };
      inline vector<FlowLogs::FlowLog> getFlowLog() { DARABONBA_PTR_GET(flowLog_, vector<FlowLogs::FlowLog>) };
      inline FlowLogs& setFlowLog(const vector<FlowLogs::FlowLog> & flowLog) { DARABONBA_PTR_SET_VALUE(flowLog_, flowLog) };
      inline FlowLogs& setFlowLog(vector<FlowLogs::FlowLog> && flowLog) { DARABONBA_PTR_SET_RVALUE(flowLog_, flowLog) };


    protected:
      shared_ptr<vector<FlowLogs::FlowLog>> flowLog_ {};
    };

    virtual bool empty() const override { return this->flowLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // flowLogs Field Functions 
    bool hasFlowLogs() const { return this->flowLogs_ != nullptr;};
    void deleteFlowLogs() { this->flowLogs_ = nullptr;};
    inline const DescribeFlowLogsResponseBody::FlowLogs & getFlowLogs() const { DARABONBA_PTR_GET_CONST(flowLogs_, DescribeFlowLogsResponseBody::FlowLogs) };
    inline DescribeFlowLogsResponseBody::FlowLogs getFlowLogs() { DARABONBA_PTR_GET(flowLogs_, DescribeFlowLogsResponseBody::FlowLogs) };
    inline DescribeFlowLogsResponseBody& setFlowLogs(const DescribeFlowLogsResponseBody::FlowLogs & flowLogs) { DARABONBA_PTR_SET_VALUE(flowLogs_, flowLogs) };
    inline DescribeFlowLogsResponseBody& setFlowLogs(DescribeFlowLogsResponseBody::FlowLogs && flowLogs) { DARABONBA_PTR_SET_RVALUE(flowLogs_, flowLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeFlowLogsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeFlowLogsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeFlowLogsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeFlowLogsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of flow logs.
    shared_ptr<DescribeFlowLogsResponseBody::FlowLogs> flowLogs_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of items per page in a paginated query.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<string> success_ {};
    // The number of entries in the queried flow log list.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
