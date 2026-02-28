// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPDGRANTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPDGRANTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVpdGrantRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpdGrantRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpdGrantRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVpdGrantRuleResponseBody() = default ;
    GetVpdGrantRuleResponseBody(const GetVpdGrantRuleResponseBody &) = default ;
    GetVpdGrantRuleResponseBody(GetVpdGrantRuleResponseBody &&) = default ;
    GetVpdGrantRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpdGrantRuleResponseBody() = default ;
    GetVpdGrantRuleResponseBody& operator=(const GetVpdGrantRuleResponseBody &) = default ;
    GetVpdGrantRuleResponseBody& operator=(GetVpdGrantRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErId, erId_);
        DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
        DARABONBA_PTR_TO_JSON(GrantTenantId, grantTenantId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(Used, used_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErId, erId_);
        DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
        DARABONBA_PTR_FROM_JSON(GrantTenantId, grantTenantId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(Used, used_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->erId_ == nullptr && this->grantRuleId_ == nullptr && this->grantTenantId_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tenantId_ == nullptr && this->used_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // erId Field Functions 
      bool hasErId() const { return this->erId_ != nullptr;};
      void deleteErId() { this->erId_ = nullptr;};
      inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
      inline Content& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


      // grantRuleId Field Functions 
      bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
      void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
      inline string getGrantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
      inline Content& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


      // grantTenantId Field Functions 
      bool hasGrantTenantId() const { return this->grantTenantId_ != nullptr;};
      void deleteGrantTenantId() { this->grantTenantId_ = nullptr;};
      inline string getGrantTenantId() const { DARABONBA_PTR_GET_DEFAULT(grantTenantId_, "") };
      inline Content& setGrantTenantId(string grantTenantId) { DARABONBA_PTR_SET_VALUE(grantTenantId_, grantTenantId) };


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


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Content& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


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


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Content& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // used Field Functions 
      bool hasUsed() const { return this->used_ != nullptr;};
      void deleteUsed() { this->used_ = nullptr;};
      inline bool getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, false) };
      inline Content& setUsed(bool used) { DARABONBA_PTR_SET_VALUE(used_, used) };


    protected:
      // The time when the data address was created.
      shared_ptr<string> createTime_ {};
      // Lingjun HUB Instance ID
      shared_ptr<string> erId_ {};
      // Authorized Resource ID
      shared_ptr<string> grantRuleId_ {};
      // Authorized Tenant ID
      shared_ptr<string> grantTenantId_ {};
      // Network Instance ID
      shared_ptr<string> instanceId_ {};
      // Network Instance Name
      shared_ptr<string> instanceName_ {};
      // Network Product Code:
      // 
      // *   **VPD**: Lingjun CIDR block
      // *   **VCC**: Lingjun Connection
      shared_ptr<string> product_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Resource group instance ID
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // Whether the current authorization information has been used; default is false
      shared_ptr<bool> used_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetVpdGrantRuleResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetVpdGrantRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetVpdGrantRuleResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetVpdGrantRuleResponseBody::Content) };
    inline GetVpdGrantRuleResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetVpdGrantRuleResponseBody::Content) };
    inline GetVpdGrantRuleResponseBody& setContent(const GetVpdGrantRuleResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetVpdGrantRuleResponseBody& setContent(GetVpdGrantRuleResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVpdGrantRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpdGrantRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetVpdGrantRuleResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
