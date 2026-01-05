// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseResourcesResponseBody() = default ;
    DescribeDefenseResourcesResponseBody(const DescribeDefenseResourcesResponseBody &) = default ;
    DescribeDefenseResourcesResponseBody(DescribeDefenseResourcesResponseBody &&) = default ;
    DescribeDefenseResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourcesResponseBody() = default ;
    DescribeDefenseResourcesResponseBody& operator=(const DescribeDefenseResourcesResponseBody &) = default ;
    DescribeDefenseResourcesResponseBody& operator=(DescribeDefenseResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(AcwCookieStatus, acwCookieStatus_);
        DARABONBA_PTR_TO_JSON(AcwSecureStatus, acwSecureStatus_);
        DARABONBA_PTR_TO_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
        DARABONBA_PTR_TO_JSON(CustomHeaders, customHeaders_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_ANY_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceOrigin, resourceOrigin_);
        DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
        DARABONBA_PTR_TO_JSON(XffStatus, xffStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(AcwCookieStatus, acwCookieStatus_);
        DARABONBA_PTR_FROM_JSON(AcwSecureStatus, acwSecureStatus_);
        DARABONBA_PTR_FROM_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
        DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeaders_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_ANY_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceOrigin, resourceOrigin_);
        DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
        DARABONBA_PTR_FROM_JSON(XffStatus, xffStatus_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResponseHeaders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseHeaders& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseHeaders& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ResponseHeaders() = default ;
        ResponseHeaders(const ResponseHeaders &) = default ;
        ResponseHeaders(ResponseHeaders &&) = default ;
        ResponseHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseHeaders() = default ;
        ResponseHeaders& operator=(const ResponseHeaders &) = default ;
        ResponseHeaders& operator=(ResponseHeaders &&) = default ;
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
        inline ResponseHeaders& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ResponseHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Specifies the key for a custom response header.
        shared_ptr<string> key_ {};
        // Specifies the value for a custom response header.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->acwCookieStatus_ == nullptr
        && this->acwSecureStatus_ == nullptr && this->acwV3SecureStatus_ == nullptr && this->customHeaders_ == nullptr && this->description_ == nullptr && this->detail_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ownerUserId_ == nullptr && this->pattern_ == nullptr && this->product_ == nullptr
        && this->resource_ == nullptr && this->resourceGroup_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resourceOrigin_ == nullptr && this->responseHeaders_ == nullptr
        && this->xffStatus_ == nullptr; };
      // acwCookieStatus Field Functions 
      bool hasAcwCookieStatus() const { return this->acwCookieStatus_ != nullptr;};
      void deleteAcwCookieStatus() { this->acwCookieStatus_ = nullptr;};
      inline int32_t getAcwCookieStatus() const { DARABONBA_PTR_GET_DEFAULT(acwCookieStatus_, 0) };
      inline Resources& setAcwCookieStatus(int32_t acwCookieStatus) { DARABONBA_PTR_SET_VALUE(acwCookieStatus_, acwCookieStatus) };


      // acwSecureStatus Field Functions 
      bool hasAcwSecureStatus() const { return this->acwSecureStatus_ != nullptr;};
      void deleteAcwSecureStatus() { this->acwSecureStatus_ = nullptr;};
      inline int32_t getAcwSecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwSecureStatus_, 0) };
      inline Resources& setAcwSecureStatus(int32_t acwSecureStatus) { DARABONBA_PTR_SET_VALUE(acwSecureStatus_, acwSecureStatus) };


      // acwV3SecureStatus Field Functions 
      bool hasAcwV3SecureStatus() const { return this->acwV3SecureStatus_ != nullptr;};
      void deleteAcwV3SecureStatus() { this->acwV3SecureStatus_ = nullptr;};
      inline int32_t getAcwV3SecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwV3SecureStatus_, 0) };
      inline Resources& setAcwV3SecureStatus(int32_t acwV3SecureStatus) { DARABONBA_PTR_SET_VALUE(acwV3SecureStatus_, acwV3SecureStatus) };


      // customHeaders Field Functions 
      bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
      void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
      inline const vector<string> & getCustomHeaders() const { DARABONBA_PTR_GET_CONST(customHeaders_, vector<string>) };
      inline vector<string> getCustomHeaders() { DARABONBA_PTR_GET(customHeaders_, vector<string>) };
      inline Resources& setCustomHeaders(const vector<string> & customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };
      inline Resources& setCustomHeaders(vector<string> && customHeaders) { DARABONBA_PTR_SET_RVALUE(customHeaders_, customHeaders) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Resources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline       const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
      Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
      inline Resources& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
      inline Resources& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Resources& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Resources& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline Resources& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // pattern Field Functions 
      bool hasPattern() const { return this->pattern_ != nullptr;};
      void deletePattern() { this->pattern_ = nullptr;};
      inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
      inline Resources& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Resources& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Resources& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline Resources& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline Resources& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // resourceOrigin Field Functions 
      bool hasResourceOrigin() const { return this->resourceOrigin_ != nullptr;};
      void deleteResourceOrigin() { this->resourceOrigin_ = nullptr;};
      inline string getResourceOrigin() const { DARABONBA_PTR_GET_DEFAULT(resourceOrigin_, "") };
      inline Resources& setResourceOrigin(string resourceOrigin) { DARABONBA_PTR_SET_VALUE(resourceOrigin_, resourceOrigin) };


      // responseHeaders Field Functions 
      bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
      void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
      inline const vector<Resources::ResponseHeaders> & getResponseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<Resources::ResponseHeaders>) };
      inline vector<Resources::ResponseHeaders> getResponseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<Resources::ResponseHeaders>) };
      inline Resources& setResponseHeaders(const vector<Resources::ResponseHeaders> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
      inline Resources& setResponseHeaders(vector<Resources::ResponseHeaders> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


      // xffStatus Field Functions 
      bool hasXffStatus() const { return this->xffStatus_ != nullptr;};
      void deleteXffStatus() { this->xffStatus_ = nullptr;};
      inline int32_t getXffStatus() const { DARABONBA_PTR_GET_DEFAULT(xffStatus_, 0) };
      inline Resources& setXffStatus(int32_t xffStatus) { DARABONBA_PTR_SET_VALUE(xffStatus_, xffStatus) };


    protected:
      // The status of the tracking cookie.
      // 
      // *   **0**: disabled
      // *   **1**: enabled. This is the default value.
      shared_ptr<int32_t> acwCookieStatus_ {};
      // The status of the secure attribute of the tracking cookie.
      // 
      // *   **0**: disabled. This is the default value.
      // *   **1**: enabled.
      shared_ptr<int32_t> acwSecureStatus_ {};
      // The status of the secure attribute of the slider CAPTCHA cookie.
      // 
      // *   **0**: disabled. This is the default value.
      // *   **1**: enabled.
      shared_ptr<int32_t> acwV3SecureStatus_ {};
      // The custom header fields that are used to identify the originating IP addresses of clients. If the value of XffStatus is 1 and CustomHeaders is left empty, the first IP addresses in the XFF header fields are used as the originating IP addresses of clients.
      shared_ptr<vector<string>> customHeaders_ {};
      // The description of the protected object.
      shared_ptr<string> description_ {};
      // The description of the protected object. Different key-value pairs in a map indicate different properties of the protected object.
      Darabonba::Json detail_ {};
      // The creation time of the protected object. Unit: seconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The most recent modification time of the protected object. Unit: seconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The Alibaba Cloud account to which the protected object belongs. You can specify this parameter to query protected objects that belong to a specific Alibaba Cloud account. Exact match is supported.
      shared_ptr<string> ownerUserId_ {};
      // The protection pattern.
      shared_ptr<string> pattern_ {};
      // The name of the cloud service.
      shared_ptr<string> product_ {};
      // The name of the protected object.
      shared_ptr<string> resource_ {};
      // The name of the protected object group to which the protected object belongs.
      shared_ptr<string> resourceGroup_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      // The origin of the protected object.
      shared_ptr<string> resourceOrigin_ {};
      // The response header.
      shared_ptr<vector<Resources::ResponseHeaders>> responseHeaders_ {};
      // Indicates whether the X-Forwarded-For (XFF) header is used.
      shared_ptr<int32_t> xffStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resources_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeDefenseResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeDefenseResourcesResponseBody::Resources>) };
    inline vector<DescribeDefenseResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DescribeDefenseResourcesResponseBody::Resources>) };
    inline DescribeDefenseResourcesResponseBody& setResources(const vector<DescribeDefenseResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeDefenseResourcesResponseBody& setResources(vector<DescribeDefenseResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The protected objects.
    shared_ptr<vector<DescribeDefenseResourcesResponseBody::Resources>> resources_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
