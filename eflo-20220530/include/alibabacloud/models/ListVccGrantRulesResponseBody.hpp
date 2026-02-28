// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCGRANTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCGRANTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccGrantRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccGrantRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccGrantRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVccGrantRulesResponseBody() = default ;
    ListVccGrantRulesResponseBody(const ListVccGrantRulesResponseBody &) = default ;
    ListVccGrantRulesResponseBody(ListVccGrantRulesResponseBody &&) = default ;
    ListVccGrantRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccGrantRulesResponseBody() = default ;
    ListVccGrantRulesResponseBody& operator=(const ListVccGrantRulesResponseBody &) = default ;
    ListVccGrantRulesResponseBody& operator=(ListVccGrantRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->erId_ == nullptr && this->grantRuleId_ == nullptr && this->grantTenantId_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tenantId_ == nullptr && this->used_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // erId Field Functions 
        bool hasErId() const { return this->erId_ != nullptr;};
        void deleteErId() { this->erId_ = nullptr;};
        inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
        inline Data& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


        // grantRuleId Field Functions 
        bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
        void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
        inline string getGrantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
        inline Data& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


        // grantTenantId Field Functions 
        bool hasGrantTenantId() const { return this->grantTenantId_ != nullptr;};
        void deleteGrantTenantId() { this->grantTenantId_ = nullptr;};
        inline string getGrantTenantId() const { DARABONBA_PTR_GET_DEFAULT(grantTenantId_, "") };
        inline Data& setGrantTenantId(string grantTenantId) { DARABONBA_PTR_SET_VALUE(grantTenantId_, grantTenantId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline Data& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline bool getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, false) };
        inline Data& setUsed(bool used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // Lingjun HUB ID
        shared_ptr<string> erId_ {};
        // Cross-account authorization information Instance ID
        shared_ptr<string> grantRuleId_ {};
        // Authorized Tenant ID
        shared_ptr<string> grantTenantId_ {};
        // Network Instance ID
        shared_ptr<string> instanceId_ {};
        // The name of the ECU.
        shared_ptr<string> instanceName_ {};
        // The type of the authorized product. Valid values:
        // 
        // *   **VPD**: indicates a VPD instance of the Lingjun network segment.
        // *   **VCC**: indicates that Lingjun connects to the VCC instance.
        shared_ptr<string> product_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Resource group instance ID
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // Whether the current cross-account resource has been bound to the cross-account Lingjun HUB. Valid values:
        // 
        // *   **true**: Used
        // *   **false**: Not used
        shared_ptr<bool> used_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Content::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Content::Data>) };
      inline vector<Content::Data> getData() { DARABONBA_PTR_GET(data_, vector<Content::Data>) };
      inline Content& setData(const vector<Content::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Content& setData(vector<Content::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Content& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // List of cross-account authorization information of Lingjun connection
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListVccGrantRulesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVccGrantRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListVccGrantRulesResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListVccGrantRulesResponseBody::Content) };
    inline ListVccGrantRulesResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListVccGrantRulesResponseBody::Content) };
    inline ListVccGrantRulesResponseBody& setContent(const ListVccGrantRulesResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListVccGrantRulesResponseBody& setContent(ListVccGrantRulesResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVccGrantRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVccGrantRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListVccGrantRulesResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
