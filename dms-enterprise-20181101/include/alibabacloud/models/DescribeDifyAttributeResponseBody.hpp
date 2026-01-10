// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIFYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIFYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DescribeDifyAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDifyAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDifyAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDifyAttributeResponseBody() = default ;
    DescribeDifyAttributeResponseBody(const DescribeDifyAttributeResponseBody &) = default ;
    DescribeDifyAttributeResponseBody(DescribeDifyAttributeResponseBody &&) = default ;
    DescribeDifyAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDifyAttributeResponseBody() = default ;
    DescribeDifyAttributeResponseBody& operator=(const DescribeDifyAttributeResponseBody &) = default ;
    DescribeDifyAttributeResponseBody& operator=(DescribeDifyAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(AppUuid, appUuid_);
        DARABONBA_PTR_TO_JSON(BillingInstanceId, billingInstanceId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
        DARABONBA_PTR_TO_JSON(ResourceQuota, resourceQuota_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUuid, appUuid_);
        DARABONBA_PTR_FROM_JSON(BillingInstanceId, billingInstanceId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(ResourceQuota, resourceQuota_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Root() = default ;
      Root(const Root &) = default ;
      Root(Root &&) = default ;
      Root(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Root() = default ;
      Root& operator=(const Root &) = default ;
      Root& operator=(Root &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appUuid_ == nullptr
        && this->billingInstanceId_ == nullptr && this->chargeType_ == nullptr && this->expireTime_ == nullptr && this->replicas_ == nullptr && this->resourceQuota_ == nullptr
        && this->securityGroupId_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->workspaceId_ == nullptr && this->zoneId_ == nullptr; };
      // appUuid Field Functions 
      bool hasAppUuid() const { return this->appUuid_ != nullptr;};
      void deleteAppUuid() { this->appUuid_ = nullptr;};
      inline string getAppUuid() const { DARABONBA_PTR_GET_DEFAULT(appUuid_, "") };
      inline Root& setAppUuid(string appUuid) { DARABONBA_PTR_SET_VALUE(appUuid_, appUuid) };


      // billingInstanceId Field Functions 
      bool hasBillingInstanceId() const { return this->billingInstanceId_ != nullptr;};
      void deleteBillingInstanceId() { this->billingInstanceId_ = nullptr;};
      inline string getBillingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceId_, "") };
      inline Root& setBillingInstanceId(string billingInstanceId) { DARABONBA_PTR_SET_VALUE(billingInstanceId_, billingInstanceId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Root& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Root& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline string getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
      inline Root& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // resourceQuota Field Functions 
      bool hasResourceQuota() const { return this->resourceQuota_ != nullptr;};
      void deleteResourceQuota() { this->resourceQuota_ = nullptr;};
      inline string getResourceQuota() const { DARABONBA_PTR_GET_DEFAULT(resourceQuota_, "") };
      inline Root& setResourceQuota(string resourceQuota) { DARABONBA_PTR_SET_VALUE(resourceQuota_, resourceQuota) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Root& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Root& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Root& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Root& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Root& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Root& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Root& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> appUuid_ {};
      shared_ptr<string> billingInstanceId_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> replicas_ {};
      shared_ptr<string> resourceQuota_ {};
      shared_ptr<string> securityGroupId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> workspaceId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->root_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDifyAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDifyAttributeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDifyAttributeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDifyAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDifyAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const DescribeDifyAttributeResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, DescribeDifyAttributeResponseBody::Root) };
    inline DescribeDifyAttributeResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, DescribeDifyAttributeResponseBody::Root) };
    inline DescribeDifyAttributeResponseBody& setRoot(const DescribeDifyAttributeResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline DescribeDifyAttributeResponseBody& setRoot(DescribeDifyAttributeResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDifyAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeDifyAttributeResponseBody::Root> root_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
