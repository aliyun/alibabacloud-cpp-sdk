// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSTATUSRESPONSEBODY_HPP_
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
  class DescribeCloudAssistantStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCloudAssistantStatusSet, instanceCloudAssistantStatusSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCloudAssistantStatusSet, instanceCloudAssistantStatusSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudAssistantStatusResponseBody() = default ;
    DescribeCloudAssistantStatusResponseBody(const DescribeCloudAssistantStatusResponseBody &) = default ;
    DescribeCloudAssistantStatusResponseBody(DescribeCloudAssistantStatusResponseBody &&) = default ;
    DescribeCloudAssistantStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantStatusResponseBody() = default ;
    DescribeCloudAssistantStatusResponseBody& operator=(const DescribeCloudAssistantStatusResponseBody &) = default ;
    DescribeCloudAssistantStatusResponseBody& operator=(DescribeCloudAssistantStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceCloudAssistantStatusSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceCloudAssistantStatusSet& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceCloudAssistantStatus, instanceCloudAssistantStatus_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceCloudAssistantStatusSet& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceCloudAssistantStatus, instanceCloudAssistantStatus_);
      };
      InstanceCloudAssistantStatusSet() = default ;
      InstanceCloudAssistantStatusSet(const InstanceCloudAssistantStatusSet &) = default ;
      InstanceCloudAssistantStatusSet(InstanceCloudAssistantStatusSet &&) = default ;
      InstanceCloudAssistantStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceCloudAssistantStatusSet() = default ;
      InstanceCloudAssistantStatusSet& operator=(const InstanceCloudAssistantStatusSet &) = default ;
      InstanceCloudAssistantStatusSet& operator=(InstanceCloudAssistantStatusSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceCloudAssistantStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceCloudAssistantStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveTaskCount, activeTaskCount_);
          DARABONBA_PTR_TO_JSON(CloudAssistantStatus, cloudAssistantStatus_);
          DARABONBA_PTR_TO_JSON(CloudAssistantVersion, cloudAssistantVersion_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InvocationCount, invocationCount_);
          DARABONBA_PTR_TO_JSON(LastHeartbeatTime, lastHeartbeatTime_);
          DARABONBA_PTR_TO_JSON(LastInvokedTime, lastInvokedTime_);
          DARABONBA_PTR_TO_JSON(OSType, OSType_);
          DARABONBA_PTR_TO_JSON(SupportSessionManager, supportSessionManager_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceCloudAssistantStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveTaskCount, activeTaskCount_);
          DARABONBA_PTR_FROM_JSON(CloudAssistantStatus, cloudAssistantStatus_);
          DARABONBA_PTR_FROM_JSON(CloudAssistantVersion, cloudAssistantVersion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InvocationCount, invocationCount_);
          DARABONBA_PTR_FROM_JSON(LastHeartbeatTime, lastHeartbeatTime_);
          DARABONBA_PTR_FROM_JSON(LastInvokedTime, lastInvokedTime_);
          DARABONBA_PTR_FROM_JSON(OSType, OSType_);
          DARABONBA_PTR_FROM_JSON(SupportSessionManager, supportSessionManager_);
        };
        InstanceCloudAssistantStatus() = default ;
        InstanceCloudAssistantStatus(const InstanceCloudAssistantStatus &) = default ;
        InstanceCloudAssistantStatus(InstanceCloudAssistantStatus &&) = default ;
        InstanceCloudAssistantStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceCloudAssistantStatus() = default ;
        InstanceCloudAssistantStatus& operator=(const InstanceCloudAssistantStatus &) = default ;
        InstanceCloudAssistantStatus& operator=(InstanceCloudAssistantStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeTaskCount_ == nullptr
        && this->cloudAssistantStatus_ == nullptr && this->cloudAssistantVersion_ == nullptr && this->instanceId_ == nullptr && this->invocationCount_ == nullptr && this->lastHeartbeatTime_ == nullptr
        && this->lastInvokedTime_ == nullptr && this->OSType_ == nullptr && this->supportSessionManager_ == nullptr; };
        // activeTaskCount Field Functions 
        bool hasActiveTaskCount() const { return this->activeTaskCount_ != nullptr;};
        void deleteActiveTaskCount() { this->activeTaskCount_ = nullptr;};
        inline int64_t getActiveTaskCount() const { DARABONBA_PTR_GET_DEFAULT(activeTaskCount_, 0L) };
        inline InstanceCloudAssistantStatus& setActiveTaskCount(int64_t activeTaskCount) { DARABONBA_PTR_SET_VALUE(activeTaskCount_, activeTaskCount) };


        // cloudAssistantStatus Field Functions 
        bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
        void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
        inline string getCloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
        inline InstanceCloudAssistantStatus& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


        // cloudAssistantVersion Field Functions 
        bool hasCloudAssistantVersion() const { return this->cloudAssistantVersion_ != nullptr;};
        void deleteCloudAssistantVersion() { this->cloudAssistantVersion_ = nullptr;};
        inline string getCloudAssistantVersion() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantVersion_, "") };
        inline InstanceCloudAssistantStatus& setCloudAssistantVersion(string cloudAssistantVersion) { DARABONBA_PTR_SET_VALUE(cloudAssistantVersion_, cloudAssistantVersion) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceCloudAssistantStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // invocationCount Field Functions 
        bool hasInvocationCount() const { return this->invocationCount_ != nullptr;};
        void deleteInvocationCount() { this->invocationCount_ = nullptr;};
        inline int64_t getInvocationCount() const { DARABONBA_PTR_GET_DEFAULT(invocationCount_, 0L) };
        inline InstanceCloudAssistantStatus& setInvocationCount(int64_t invocationCount) { DARABONBA_PTR_SET_VALUE(invocationCount_, invocationCount) };


        // lastHeartbeatTime Field Functions 
        bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
        void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
        inline string getLastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, "") };
        inline InstanceCloudAssistantStatus& setLastHeartbeatTime(string lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


        // lastInvokedTime Field Functions 
        bool hasLastInvokedTime() const { return this->lastInvokedTime_ != nullptr;};
        void deleteLastInvokedTime() { this->lastInvokedTime_ = nullptr;};
        inline string getLastInvokedTime() const { DARABONBA_PTR_GET_DEFAULT(lastInvokedTime_, "") };
        inline InstanceCloudAssistantStatus& setLastInvokedTime(string lastInvokedTime) { DARABONBA_PTR_SET_VALUE(lastInvokedTime_, lastInvokedTime) };


        // OSType Field Functions 
        bool hasOSType() const { return this->OSType_ != nullptr;};
        void deleteOSType() { this->OSType_ = nullptr;};
        inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
        inline InstanceCloudAssistantStatus& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


        // supportSessionManager Field Functions 
        bool hasSupportSessionManager() const { return this->supportSessionManager_ != nullptr;};
        void deleteSupportSessionManager() { this->supportSessionManager_ = nullptr;};
        inline bool getSupportSessionManager() const { DARABONBA_PTR_GET_DEFAULT(supportSessionManager_, false) };
        inline InstanceCloudAssistantStatus& setSupportSessionManager(bool supportSessionManager) { DARABONBA_PTR_SET_VALUE(supportSessionManager_, supportSessionManager) };


      protected:
        // The number of tasks that Cloud Assistant was running on the instance.
        shared_ptr<int64_t> activeTaskCount_ {};
        // Indicates whether Cloud Assistant is running on the instance. Valid values:
        // 
        // *   true: Heartbeats are detected in the last 2 minutes.
        // *   false: No heartbeats are detected in the last 2 minutes.
        shared_ptr<string> cloudAssistantStatus_ {};
        // The version number of Cloud Assistant Agent. This parameter is empty if Cloud Assistant Agent is not installed or is not running on the instance.
        shared_ptr<string> cloudAssistantVersion_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The number of tasks that Cloud Assistant completed on the instance.
        shared_ptr<int64_t> invocationCount_ {};
        // The last heartbeat time of Cloud Assistant. The value is updated every minute on average. The interval can be 55, 60, or 65 seconds.
        shared_ptr<string> lastHeartbeatTime_ {};
        // The time when commands were last run.
        shared_ptr<string> lastInvokedTime_ {};
        // The operating system type of the instance. Valid values:
        // 
        // *   Windows
        // *   Linux
        // *   FreeBSD
        shared_ptr<string> OSType_ {};
        // Indicates whether Cloud Assistant supports Session Manager on the instance. If Session Manager is not supported, the version of Cloud Assistant Agent is outdated. Update Cloud Assistant Agent to the latest version.
        // 
        // To support Session Manager, the version of Cloud Assistant Agent cannot be earlier than the following versions:
        // 
        // *   Linux: 2.2.3.189
        // *   Windows: 2.1.3.189
        shared_ptr<bool> supportSessionManager_ {};
      };

      virtual bool empty() const override { return this->instanceCloudAssistantStatus_ == nullptr; };
      // instanceCloudAssistantStatus Field Functions 
      bool hasInstanceCloudAssistantStatus() const { return this->instanceCloudAssistantStatus_ != nullptr;};
      void deleteInstanceCloudAssistantStatus() { this->instanceCloudAssistantStatus_ = nullptr;};
      inline const vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus> & getInstanceCloudAssistantStatus() const { DARABONBA_PTR_GET_CONST(instanceCloudAssistantStatus_, vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus>) };
      inline vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus> getInstanceCloudAssistantStatus() { DARABONBA_PTR_GET(instanceCloudAssistantStatus_, vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus>) };
      inline InstanceCloudAssistantStatusSet& setInstanceCloudAssistantStatus(const vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus> & instanceCloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(instanceCloudAssistantStatus_, instanceCloudAssistantStatus) };
      inline InstanceCloudAssistantStatusSet& setInstanceCloudAssistantStatus(vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus> && instanceCloudAssistantStatus) { DARABONBA_PTR_SET_RVALUE(instanceCloudAssistantStatus_, instanceCloudAssistantStatus) };


    protected:
      shared_ptr<vector<InstanceCloudAssistantStatusSet::InstanceCloudAssistantStatus>> instanceCloudAssistantStatus_ {};
    };

    virtual bool empty() const override { return this->instanceCloudAssistantStatusSet_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceCloudAssistantStatusSet Field Functions 
    bool hasInstanceCloudAssistantStatusSet() const { return this->instanceCloudAssistantStatusSet_ != nullptr;};
    void deleteInstanceCloudAssistantStatusSet() { this->instanceCloudAssistantStatusSet_ = nullptr;};
    inline const DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet & getInstanceCloudAssistantStatusSet() const { DARABONBA_PTR_GET_CONST(instanceCloudAssistantStatusSet_, DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet) };
    inline DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet getInstanceCloudAssistantStatusSet() { DARABONBA_PTR_GET(instanceCloudAssistantStatusSet_, DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet) };
    inline DescribeCloudAssistantStatusResponseBody& setInstanceCloudAssistantStatusSet(const DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet & instanceCloudAssistantStatusSet) { DARABONBA_PTR_SET_VALUE(instanceCloudAssistantStatusSet_, instanceCloudAssistantStatusSet) };
    inline DescribeCloudAssistantStatusResponseBody& setInstanceCloudAssistantStatusSet(DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet && instanceCloudAssistantStatusSet) { DARABONBA_PTR_SET_RVALUE(instanceCloudAssistantStatusSet_, instanceCloudAssistantStatusSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudAssistantStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCloudAssistantStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCloudAssistantStatusResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudAssistantStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCloudAssistantStatusResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the installation status of Cloud Assistant on the instances.
    shared_ptr<DescribeCloudAssistantStatusResponseBody::InstanceCloudAssistantStatusSet> instanceCloudAssistantStatusSet_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
