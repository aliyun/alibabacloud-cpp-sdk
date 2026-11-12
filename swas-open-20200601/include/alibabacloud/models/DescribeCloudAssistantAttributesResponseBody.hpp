// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeCloudAssistantAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssistant, cloudAssistant_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssistant, cloudAssistant_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudAssistantAttributesResponseBody() = default ;
    DescribeCloudAssistantAttributesResponseBody(const DescribeCloudAssistantAttributesResponseBody &) = default ;
    DescribeCloudAssistantAttributesResponseBody(DescribeCloudAssistantAttributesResponseBody &&) = default ;
    DescribeCloudAssistantAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantAttributesResponseBody() = default ;
    DescribeCloudAssistantAttributesResponseBody& operator=(const DescribeCloudAssistantAttributesResponseBody &) = default ;
    DescribeCloudAssistantAttributesResponseBody& operator=(DescribeCloudAssistantAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAssistant : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssistant& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CloudAssistant& obj) { 
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
      CloudAssistant() = default ;
      CloudAssistant(const CloudAssistant &) = default ;
      CloudAssistant(CloudAssistant &&) = default ;
      CloudAssistant(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssistant() = default ;
      CloudAssistant& operator=(const CloudAssistant &) = default ;
      CloudAssistant& operator=(CloudAssistant &&) = default ;
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
      inline CloudAssistant& setActiveTaskCount(int64_t activeTaskCount) { DARABONBA_PTR_SET_VALUE(activeTaskCount_, activeTaskCount) };


      // cloudAssistantStatus Field Functions 
      bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
      void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
      inline string getCloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
      inline CloudAssistant& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


      // cloudAssistantVersion Field Functions 
      bool hasCloudAssistantVersion() const { return this->cloudAssistantVersion_ != nullptr;};
      void deleteCloudAssistantVersion() { this->cloudAssistantVersion_ = nullptr;};
      inline string getCloudAssistantVersion() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantVersion_, "") };
      inline CloudAssistant& setCloudAssistantVersion(string cloudAssistantVersion) { DARABONBA_PTR_SET_VALUE(cloudAssistantVersion_, cloudAssistantVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudAssistant& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // invocationCount Field Functions 
      bool hasInvocationCount() const { return this->invocationCount_ != nullptr;};
      void deleteInvocationCount() { this->invocationCount_ = nullptr;};
      inline int64_t getInvocationCount() const { DARABONBA_PTR_GET_DEFAULT(invocationCount_, 0L) };
      inline CloudAssistant& setInvocationCount(int64_t invocationCount) { DARABONBA_PTR_SET_VALUE(invocationCount_, invocationCount) };


      // lastHeartbeatTime Field Functions 
      bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
      void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
      inline string getLastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, "") };
      inline CloudAssistant& setLastHeartbeatTime(string lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


      // lastInvokedTime Field Functions 
      bool hasLastInvokedTime() const { return this->lastInvokedTime_ != nullptr;};
      void deleteLastInvokedTime() { this->lastInvokedTime_ = nullptr;};
      inline string getLastInvokedTime() const { DARABONBA_PTR_GET_DEFAULT(lastInvokedTime_, "") };
      inline CloudAssistant& setLastInvokedTime(string lastInvokedTime) { DARABONBA_PTR_SET_VALUE(lastInvokedTime_, lastInvokedTime) };


      // OSType Field Functions 
      bool hasOSType() const { return this->OSType_ != nullptr;};
      void deleteOSType() { this->OSType_ = nullptr;};
      inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
      inline CloudAssistant& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


      // supportSessionManager Field Functions 
      bool hasSupportSessionManager() const { return this->supportSessionManager_ != nullptr;};
      void deleteSupportSessionManager() { this->supportSessionManager_ = nullptr;};
      inline bool getSupportSessionManager() const { DARABONBA_PTR_GET_DEFAULT(supportSessionManager_, false) };
      inline CloudAssistant& setSupportSessionManager(bool supportSessionManager) { DARABONBA_PTR_SET_VALUE(supportSessionManager_, supportSessionManager) };


    protected:
      // The number of running tasks of Cloud Assistant on the instance.
      shared_ptr<int64_t> activeTaskCount_ {};
      // Indicates whether Cloud Assistant is running on the instance. Valid values:
      // 
      // true: A heartbeat was detected within the last 2 minutes.
      // 
      // false: No heartbeat was detected within the last 2 minutes.
      shared_ptr<string> cloudAssistantStatus_ {};
      // The version number of the Cloud Assistant Agent. This value is empty if the Cloud Assistant Agent is not installed or is not running.
      shared_ptr<string> cloudAssistantVersion_ {};
      // The instance ID of the simple application server instance.
      shared_ptr<string> instanceId_ {};
      // The number of completed tasks of Cloud Assistant on the instance.
      shared_ptr<int64_t> invocationCount_ {};
      // The time of the last heartbeat of Cloud Assistant. This value is updated approximately every minute, with a random fluctuation of up to 5 seconds (minimum 55 seconds, maximum 65 seconds).
      shared_ptr<string> lastHeartbeatTime_ {};
      // The time when the last command was executed. The time is displayed in UTC (Z) in the YYYY-MM-DDThh:mm:ssZ format.
      shared_ptr<string> lastInvokedTime_ {};
      // The operating system type of the instance. Valid values:
      // 
      // - Windows.
      // - Linux.
      // - FreeBSD.
      shared_ptr<string> OSType_ {};
      // Indicates whether Cloud Assistant on the instance supports the session management feature. If session management is not supported, the Cloud Assistant version is outdated. Update the client to the latest version.
      // 
      // The minimum Cloud Assistant versions that support session management are as follows:
      // 
      // Linux: 2.2.3.189
      // Windows: 2.1.3.189
      shared_ptr<bool> supportSessionManager_ {};
    };

    virtual bool empty() const override { return this->cloudAssistant_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudAssistant Field Functions 
    bool hasCloudAssistant() const { return this->cloudAssistant_ != nullptr;};
    void deleteCloudAssistant() { this->cloudAssistant_ = nullptr;};
    inline const vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant> & getCloudAssistant() const { DARABONBA_PTR_GET_CONST(cloudAssistant_, vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant>) };
    inline vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant> getCloudAssistant() { DARABONBA_PTR_GET(cloudAssistant_, vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant>) };
    inline DescribeCloudAssistantAttributesResponseBody& setCloudAssistant(const vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant> & cloudAssistant) { DARABONBA_PTR_SET_VALUE(cloudAssistant_, cloudAssistant) };
    inline DescribeCloudAssistantAttributesResponseBody& setCloudAssistant(vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant> && cloudAssistant) { DARABONBA_PTR_SET_RVALUE(cloudAssistant_, cloudAssistant) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCloudAssistantAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudAssistantAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudAssistantAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudAssistantAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The installation status of Cloud Assistant on the instances.
    shared_ptr<vector<DescribeCloudAssistantAttributesResponseBody::CloudAssistant>> cloudAssistant_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
