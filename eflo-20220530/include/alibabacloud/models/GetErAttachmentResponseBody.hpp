// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetErAttachmentResponseBody() = default ;
    GetErAttachmentResponseBody(const GetErAttachmentResponseBody &) = default ;
    GetErAttachmentResponseBody(GetErAttachmentResponseBody &&) = default ;
    GetErAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErAttachmentResponseBody() = default ;
    GetErAttachmentResponseBody& operator=(const GetErAttachmentResponseBody &) = default ;
    GetErAttachmentResponseBody& operator=(GetErAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Across, across_);
        DARABONBA_PTR_TO_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
        DARABONBA_PTR_TO_JSON(ErAttachmentName, erAttachmentName_);
        DARABONBA_PTR_TO_JSON(ErId, erId_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Across, across_);
        DARABONBA_PTR_FROM_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
        DARABONBA_PTR_FROM_JSON(ErAttachmentName, erAttachmentName_);
        DARABONBA_PTR_FROM_JSON(ErId, erId_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->across_ == nullptr
        && this->autoReceiveAllRoute_ == nullptr && this->createTime_ == nullptr && this->erAttachmentId_ == nullptr && this->erAttachmentName_ == nullptr && this->erId_ == nullptr
        && this->gmtModified_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->message_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceTenantId_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr; };
      // across Field Functions 
      bool hasAcross() const { return this->across_ != nullptr;};
      void deleteAcross() { this->across_ = nullptr;};
      inline bool getAcross() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
      inline Content& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


      // autoReceiveAllRoute Field Functions 
      bool hasAutoReceiveAllRoute() const { return this->autoReceiveAllRoute_ != nullptr;};
      void deleteAutoReceiveAllRoute() { this->autoReceiveAllRoute_ = nullptr;};
      inline bool getAutoReceiveAllRoute() const { DARABONBA_PTR_GET_DEFAULT(autoReceiveAllRoute_, false) };
      inline Content& setAutoReceiveAllRoute(bool autoReceiveAllRoute) { DARABONBA_PTR_SET_VALUE(autoReceiveAllRoute_, autoReceiveAllRoute) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // erAttachmentId Field Functions 
      bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
      void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
      inline string getErAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
      inline Content& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


      // erAttachmentName Field Functions 
      bool hasErAttachmentName() const { return this->erAttachmentName_ != nullptr;};
      void deleteErAttachmentName() { this->erAttachmentName_ = nullptr;};
      inline string getErAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentName_, "") };
      inline Content& setErAttachmentName(string erAttachmentName) { DARABONBA_PTR_SET_VALUE(erAttachmentName_, erAttachmentName) };


      // erId Field Functions 
      bool hasErId() const { return this->erId_ != nullptr;};
      void deleteErId() { this->erId_ = nullptr;};
      inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
      inline Content& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Content& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Content& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Content& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Content& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceTenantId Field Functions 
      bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
      void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
      inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
      inline Content& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Content& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // Whether cross-account. Valid values:
      // 
      // *   **true**: The network instance is a cross-account resource.
      // *   **false**: The current network instance is a resource of the current account.
      shared_ptr<bool> across_ {};
      // Indicates whether to automatically receive all routes from all instances under the Lingjun HUB. Valid values:
      // 
      // *   **true**: received automatically.
      // *   **false**: Not received.
      shared_ptr<bool> autoReceiveAllRoute_ {};
      // The time when the activation code was created.
      shared_ptr<string> createTime_ {};
      // The ID of the Lingjun HUB network instance.
      shared_ptr<string> erAttachmentId_ {};
      // The name of the Lingjun HUB network instance.
      shared_ptr<string> erAttachmentName_ {};
      // The ID of the Lingjun HUB instance.
      shared_ptr<string> erId_ {};
      // The time when the O\\&M task was modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the network instance. Valid values: **VPD** and **VCC**.
      // 
      // For more information, see [What is Lingjun?](https://help.aliyun.com/document_detail/444430.html)
      // 
      // You can query **Lingjun CIDR blocks** and **Lingjun connections** by [ListVpds](https://help.aliyun.com/document_detail/2331077.html) and [ListVccs](https://help.aliyun.com/document_detail/2399526.html?) respectively.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // The database type. Valid values:
      // 
      // *   **VPD**: indicates the Lingjun CIDR block.
      // *   **VCC**: indicates a Lingjun connection.
      shared_ptr<string> instanceType_ {};
      // The returned message.
      shared_ptr<string> message_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Resource group instance ID
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the tenant to which the resource belongs.
      shared_ptr<string> resourceTenantId_ {};
      // The status of the cache reserve instance. Valid values:
      // 
      // *   **Available**: Normal.
      // *   **Not Available**: Not available.
      // *   **Executing**: The task is being executed.
      // *   **Deleting**: The account is being deleted
      shared_ptr<string> status_ {};
      // The tenant ID.
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetErAttachmentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetErAttachmentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetErAttachmentResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetErAttachmentResponseBody::Content) };
    inline GetErAttachmentResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetErAttachmentResponseBody::Content) };
    inline GetErAttachmentResponseBody& setContent(const GetErAttachmentResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetErAttachmentResponseBody& setContent(GetErAttachmentResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErAttachmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<GetErAttachmentResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is displayed.)
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
