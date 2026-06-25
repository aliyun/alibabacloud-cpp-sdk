// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespaceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeNamespaceResourcesResponseBody() = default ;
    DescribeNamespaceResourcesResponseBody(const DescribeNamespaceResourcesResponseBody &) = default ;
    DescribeNamespaceResourcesResponseBody(DescribeNamespaceResourcesResponseBody &&) = default ;
    DescribeNamespaceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceResourcesResponseBody() = default ;
    DescribeNamespaceResourcesResponseBody& operator=(const DescribeNamespaceResourcesResponseBody &) = default ;
    DescribeNamespaceResourcesResponseBody& operator=(DescribeNamespaceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApmJavaAgentVersion, apmJavaAgentVersion_);
        DARABONBA_PTR_TO_JSON(AppCount, appCount_);
        DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(JumpServerAppId, jumpServerAppId_);
        DARABONBA_PTR_TO_JSON(JumpServerIp, jumpServerIp_);
        DARABONBA_PTR_TO_JSON(LastChangeOrderId, lastChangeOrderId_);
        DARABONBA_PTR_TO_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
        DARABONBA_PTR_TO_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
        DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(NotificationExpired, notificationExpired_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApmJavaAgentVersion, apmJavaAgentVersion_);
        DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
        DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(JumpServerAppId, jumpServerAppId_);
        DARABONBA_PTR_FROM_JSON(JumpServerIp, jumpServerIp_);
        DARABONBA_PTR_FROM_JSON(LastChangeOrderId, lastChangeOrderId_);
        DARABONBA_PTR_FROM_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
        DARABONBA_PTR_FROM_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
        DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(NotificationExpired, notificationExpired_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
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
      virtual bool empty() const override { return this->apmJavaAgentVersion_ == nullptr
        && this->appCount_ == nullptr && this->belongRegion_ == nullptr && this->description_ == nullptr && this->jumpServerAppId_ == nullptr && this->jumpServerIp_ == nullptr
        && this->lastChangeOrderId_ == nullptr && this->lastChangeOrderRunning_ == nullptr && this->lastChangeOrderStatus_ == nullptr && this->nameSpaceShortId_ == nullptr && this->namespaceId_ == nullptr
        && this->namespaceName_ == nullptr && this->notificationExpired_ == nullptr && this->securityGroupId_ == nullptr && this->slsConfigs_ == nullptr && this->tenantId_ == nullptr
        && this->userId_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // apmJavaAgentVersion Field Functions 
      bool hasApmJavaAgentVersion() const { return this->apmJavaAgentVersion_ != nullptr;};
      void deleteApmJavaAgentVersion() { this->apmJavaAgentVersion_ = nullptr;};
      inline string getApmJavaAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(apmJavaAgentVersion_, "") };
      inline Data& setApmJavaAgentVersion(string apmJavaAgentVersion) { DARABONBA_PTR_SET_VALUE(apmJavaAgentVersion_, apmJavaAgentVersion) };


      // appCount Field Functions 
      bool hasAppCount() const { return this->appCount_ != nullptr;};
      void deleteAppCount() { this->appCount_ = nullptr;};
      inline int64_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0L) };
      inline Data& setAppCount(int64_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


      // belongRegion Field Functions 
      bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
      void deleteBelongRegion() { this->belongRegion_ = nullptr;};
      inline string getBelongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
      inline Data& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // jumpServerAppId Field Functions 
      bool hasJumpServerAppId() const { return this->jumpServerAppId_ != nullptr;};
      void deleteJumpServerAppId() { this->jumpServerAppId_ = nullptr;};
      inline string getJumpServerAppId() const { DARABONBA_PTR_GET_DEFAULT(jumpServerAppId_, "") };
      inline Data& setJumpServerAppId(string jumpServerAppId) { DARABONBA_PTR_SET_VALUE(jumpServerAppId_, jumpServerAppId) };


      // jumpServerIp Field Functions 
      bool hasJumpServerIp() const { return this->jumpServerIp_ != nullptr;};
      void deleteJumpServerIp() { this->jumpServerIp_ = nullptr;};
      inline string getJumpServerIp() const { DARABONBA_PTR_GET_DEFAULT(jumpServerIp_, "") };
      inline Data& setJumpServerIp(string jumpServerIp) { DARABONBA_PTR_SET_VALUE(jumpServerIp_, jumpServerIp) };


      // lastChangeOrderId Field Functions 
      bool hasLastChangeOrderId() const { return this->lastChangeOrderId_ != nullptr;};
      void deleteLastChangeOrderId() { this->lastChangeOrderId_ = nullptr;};
      inline string getLastChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderId_, "") };
      inline Data& setLastChangeOrderId(string lastChangeOrderId) { DARABONBA_PTR_SET_VALUE(lastChangeOrderId_, lastChangeOrderId) };


      // lastChangeOrderRunning Field Functions 
      bool hasLastChangeOrderRunning() const { return this->lastChangeOrderRunning_ != nullptr;};
      void deleteLastChangeOrderRunning() { this->lastChangeOrderRunning_ = nullptr;};
      inline bool getLastChangeOrderRunning() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderRunning_, false) };
      inline Data& setLastChangeOrderRunning(bool lastChangeOrderRunning) { DARABONBA_PTR_SET_VALUE(lastChangeOrderRunning_, lastChangeOrderRunning) };


      // lastChangeOrderStatus Field Functions 
      bool hasLastChangeOrderStatus() const { return this->lastChangeOrderStatus_ != nullptr;};
      void deleteLastChangeOrderStatus() { this->lastChangeOrderStatus_ = nullptr;};
      inline string getLastChangeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderStatus_, "") };
      inline Data& setLastChangeOrderStatus(string lastChangeOrderStatus) { DARABONBA_PTR_SET_VALUE(lastChangeOrderStatus_, lastChangeOrderStatus) };


      // nameSpaceShortId Field Functions 
      bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
      void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
      inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
      inline Data& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Data& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // notificationExpired Field Functions 
      bool hasNotificationExpired() const { return this->notificationExpired_ != nullptr;};
      void deleteNotificationExpired() { this->notificationExpired_ = nullptr;};
      inline bool getNotificationExpired() const { DARABONBA_PTR_GET_DEFAULT(notificationExpired_, false) };
      inline Data& setNotificationExpired(bool notificationExpired) { DARABONBA_PTR_SET_VALUE(notificationExpired_, notificationExpired) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // slsConfigs Field Functions 
      bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
      void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
      inline string getSlsConfigs() const { DARABONBA_PTR_GET_DEFAULT(slsConfigs_, "") };
      inline Data& setSlsConfigs(string slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchName Field Functions 
      bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
      void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
      inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
      inline Data& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline Data& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      // The version of the APM Java agent.
      shared_ptr<string> apmJavaAgentVersion_ {};
      // The number of applications.
      shared_ptr<int64_t> appCount_ {};
      // The region of the namespace.
      shared_ptr<string> belongRegion_ {};
      // The description of the namespace.
      shared_ptr<string> description_ {};
      // The ID of the jump server application.
      shared_ptr<string> jumpServerAppId_ {};
      // The IP address of the jump server.
      shared_ptr<string> jumpServerIp_ {};
      // The release order ID.
      shared_ptr<string> lastChangeOrderId_ {};
      // Indicates whether a release order is running in the namespace. Valid values:
      // 
      // - **true**: A release order is running.
      // 
      // - **false**: No release order is running.
      shared_ptr<bool> lastChangeOrderRunning_ {};
      // The status of the last release order. Valid values:
      // 
      // - **READY**: The release order is ready.
      // 
      // - **RUNNING**: The release order is running.
      // 
      // - **SUCCESS**: The release order was successful.
      // 
      // - **FAIL**: The release order failed.
      // 
      // - **ABORT**: The release order was aborted.
      // 
      // - **WAIT_BATCH_CONFIRM**: The release order is waiting for manual batch confirmation.
      // 
      // - **AUTO_BATCH_WAIT**: The release order is in an automatic batch-wait state.
      // 
      // - **SYSTEM_FAIL**: A system error occurred.
      // 
      // - **WAIT_APPROVAL**: The release order is pending approval.
      // 
      // - **APPROVED**: The release order is approved and pending execution.
      shared_ptr<string> lastChangeOrderStatus_ {};
      // The short-format namespace ID.
      shared_ptr<string> nameSpaceShortId_ {};
      // The namespace ID.
      shared_ptr<string> namespaceId_ {};
      // The namespace name.
      shared_ptr<string> namespaceName_ {};
      // Indicates whether the notification for the release order has expired. Valid values:
      // 
      // - **true**: The notification has expired.
      // 
      // - **false**: The notification has not expired.
      shared_ptr<bool> notificationExpired_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The configuration for collecting logs to Simple Log Service (SLS).
      // 
      // - To use SLS resources that are automatically created by SAE: `[{"logDir":"","logType":"stdout"},{"logDir":"/tmp/a.log"}]`.
      // 
      // - To use custom SLS resources: `[{"projectName":"test-sls","logType":"stdout","logDir":"","logstoreName":"sae","logtailName":""},{"projectName":"test","logDir":"/tmp/a.log","logstoreName":"sae","logtailName":""}]`.
      // 
      // The configuration includes the following parameters:
      // 
      // - **projectName**: The project name in SLS.
      // 
      // - **logDir**: The log path.
      // 
      // - **logType**: The log type. **stdout** indicates the standard output of the container. Only one stdout entry is allowed. If you omit this parameter, file logs are collected.
      // 
      // - **logstoreName**: The Logstore name in SLS.
      // 
      // - **logtailName**: The Logtail name in SLS. If you omit this parameter, SAE creates a Logtail.
      // 
      // You do not need to set this parameter if the SLS log collection configuration is unchanged for subsequent deployments. To disable log collection, set this parameter to an empty string ("").
      shared_ptr<string> slsConfigs_ {};
      // The tenant ID of the SAE namespace.
      shared_ptr<string> tenantId_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The vSwitch name.
      shared_ptr<string> vSwitchName_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The VPC name.
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNamespaceResourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeNamespaceResourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeNamespaceResourcesResponseBody::Data) };
    inline DescribeNamespaceResourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeNamespaceResourcesResponseBody::Data) };
    inline DescribeNamespaceResourcesResponseBody& setData(const DescribeNamespaceResourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNamespaceResourcesResponseBody& setData(DescribeNamespaceResourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeNamespaceResourcesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNamespaceResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNamespaceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeNamespaceResourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeNamespaceResourcesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // - **2xx**: The request was successful.
    // 
    // - **3xx**: The request was redirected.
    // 
    // - **4xx**: The request was invalid.
    // 
    // - **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<DescribeNamespaceResourcesResponseBody::Data> data_ {};
    // The error code. This parameter is returned only if the request fails. For more information, see the **Error codes** section of this topic.
    // 
    // - A successful request does not return the **ErrorCode** field.
    // 
    // - A failed request returns the **ErrorCode** field. For more information, see the list of **error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Valid values:
    // 
    // - If the request is successful, **success** is returned.
    // 
    // - If the request fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the namespace resources were queried successfully.
    // 
    // - **true**: The query was successful.
    // 
    // - **false**: The query failed.
    shared_ptr<bool> success_ {};
    // The trace ID. You can use this ID to query the details of the call.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
