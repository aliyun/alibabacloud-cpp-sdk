// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCERESPONSEBODY_HPP_
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
  class DescribeDefenseResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeDefenseResourceResponseBody() = default ;
    DescribeDefenseResourceResponseBody(const DescribeDefenseResourceResponseBody &) = default ;
    DescribeDefenseResourceResponseBody(DescribeDefenseResourceResponseBody &&) = default ;
    DescribeDefenseResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceResponseBody() = default ;
    DescribeDefenseResourceResponseBody& operator=(const DescribeDefenseResourceResponseBody &) = default ;
    DescribeDefenseResourceResponseBody& operator=(DescribeDefenseResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(AcwCookieStatus, acwCookieStatus_);
        DARABONBA_PTR_TO_JSON(AcwSecureStatus, acwSecureStatus_);
        DARABONBA_PTR_TO_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
        DARABONBA_PTR_TO_JSON(CookieConfig, cookieConfig_);
        DARABONBA_PTR_TO_JSON(CustomHeaders, customHeaders_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_ANY_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceOrigin, resourceOrigin_);
        DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
        DARABONBA_PTR_TO_JSON(XffStatus, xffStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(AcwCookieStatus, acwCookieStatus_);
        DARABONBA_PTR_FROM_JSON(AcwSecureStatus, acwSecureStatus_);
        DARABONBA_PTR_FROM_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
        DARABONBA_PTR_FROM_JSON(CookieConfig, cookieConfig_);
        DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeaders_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_ANY_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceOrigin, resourceOrigin_);
        DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
        DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
        DARABONBA_PTR_FROM_JSON(XffStatus, xffStatus_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
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
        // The key of the specified custom response header.
        shared_ptr<string> key_ {};
        // The value of the specified custom response header.
        shared_ptr<string> value_ {};
      };

      class CookieConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CookieConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AcwScV3SameSite, acwScV3SameSite_);
          DARABONBA_PTR_TO_JSON(AcwTcSameSite, acwTcSameSite_);
        };
        friend void from_json(const Darabonba::Json& j, CookieConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AcwScV3SameSite, acwScV3SameSite_);
          DARABONBA_PTR_FROM_JSON(AcwTcSameSite, acwTcSameSite_);
        };
        CookieConfig() = default ;
        CookieConfig(const CookieConfig &) = default ;
        CookieConfig(CookieConfig &&) = default ;
        CookieConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CookieConfig() = default ;
        CookieConfig& operator=(const CookieConfig &) = default ;
        CookieConfig& operator=(CookieConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acwScV3SameSite_ == nullptr
        && this->acwTcSameSite_ == nullptr; };
        // acwScV3SameSite Field Functions 
        bool hasAcwScV3SameSite() const { return this->acwScV3SameSite_ != nullptr;};
        void deleteAcwScV3SameSite() { this->acwScV3SameSite_ = nullptr;};
        inline string getAcwScV3SameSite() const { DARABONBA_PTR_GET_DEFAULT(acwScV3SameSite_, "") };
        inline CookieConfig& setAcwScV3SameSite(string acwScV3SameSite) { DARABONBA_PTR_SET_VALUE(acwScV3SameSite_, acwScV3SameSite) };


        // acwTcSameSite Field Functions 
        bool hasAcwTcSameSite() const { return this->acwTcSameSite_ != nullptr;};
        void deleteAcwTcSameSite() { this->acwTcSameSite_ = nullptr;};
        inline string getAcwTcSameSite() const { DARABONBA_PTR_GET_DEFAULT(acwTcSameSite_, "") };
        inline CookieConfig& setAcwTcSameSite(string acwTcSameSite) { DARABONBA_PTR_SET_VALUE(acwTcSameSite_, acwTcSameSite) };


      protected:
        // The SameSite policy for the slider cookie. Valid values:
        // - **None**: None.
        // - **Lax**: Lax.
        // - **Strict**: Strict.
        // > An empty string indicates that the SameSite attribute is not set.
        shared_ptr<string> acwScV3SameSite_ {};
        // The SameSite policy for the tracking cookie. Valid values:
        // - **None**: None.
        // - **Lax**: Lax.
        // - **Strict**: Strict.
        // > An empty string indicates that the SameSite attribute is not set.
        shared_ptr<string> acwTcSameSite_ {};
      };

      virtual bool empty() const override { return this->acwCookieStatus_ == nullptr
        && this->acwSecureStatus_ == nullptr && this->acwV3SecureStatus_ == nullptr && this->cookieConfig_ == nullptr && this->customHeaders_ == nullptr && this->description_ == nullptr
        && this->detail_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceId_ == nullptr && this->ownerUserId_ == nullptr
        && this->pattern_ == nullptr && this->product_ == nullptr && this->resource_ == nullptr && this->resourceGroup_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->resourceOrigin_ == nullptr && this->resourceStatus_ == nullptr && this->responseHeaders_ == nullptr && this->xffStatus_ == nullptr; };
      // acwCookieStatus Field Functions 
      bool hasAcwCookieStatus() const { return this->acwCookieStatus_ != nullptr;};
      void deleteAcwCookieStatus() { this->acwCookieStatus_ = nullptr;};
      inline int32_t getAcwCookieStatus() const { DARABONBA_PTR_GET_DEFAULT(acwCookieStatus_, 0) };
      inline Resource& setAcwCookieStatus(int32_t acwCookieStatus) { DARABONBA_PTR_SET_VALUE(acwCookieStatus_, acwCookieStatus) };


      // acwSecureStatus Field Functions 
      bool hasAcwSecureStatus() const { return this->acwSecureStatus_ != nullptr;};
      void deleteAcwSecureStatus() { this->acwSecureStatus_ = nullptr;};
      inline int32_t getAcwSecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwSecureStatus_, 0) };
      inline Resource& setAcwSecureStatus(int32_t acwSecureStatus) { DARABONBA_PTR_SET_VALUE(acwSecureStatus_, acwSecureStatus) };


      // acwV3SecureStatus Field Functions 
      bool hasAcwV3SecureStatus() const { return this->acwV3SecureStatus_ != nullptr;};
      void deleteAcwV3SecureStatus() { this->acwV3SecureStatus_ = nullptr;};
      inline int32_t getAcwV3SecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwV3SecureStatus_, 0) };
      inline Resource& setAcwV3SecureStatus(int32_t acwV3SecureStatus) { DARABONBA_PTR_SET_VALUE(acwV3SecureStatus_, acwV3SecureStatus) };


      // cookieConfig Field Functions 
      bool hasCookieConfig() const { return this->cookieConfig_ != nullptr;};
      void deleteCookieConfig() { this->cookieConfig_ = nullptr;};
      inline const Resource::CookieConfig & getCookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, Resource::CookieConfig) };
      inline Resource::CookieConfig getCookieConfig() { DARABONBA_PTR_GET(cookieConfig_, Resource::CookieConfig) };
      inline Resource& setCookieConfig(const Resource::CookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
      inline Resource& setCookieConfig(Resource::CookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


      // customHeaders Field Functions 
      bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
      void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
      inline const vector<string> & getCustomHeaders() const { DARABONBA_PTR_GET_CONST(customHeaders_, vector<string>) };
      inline vector<string> getCustomHeaders() { DARABONBA_PTR_GET(customHeaders_, vector<string>) };
      inline Resource& setCustomHeaders(const vector<string> & customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };
      inline Resource& setCustomHeaders(vector<string> && customHeaders) { DARABONBA_PTR_SET_RVALUE(customHeaders_, customHeaders) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Resource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline       const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
      Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
      inline Resource& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
      inline Resource& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Resource& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Resource& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Resource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline Resource& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // pattern Field Functions 
      bool hasPattern() const { return this->pattern_ != nullptr;};
      void deletePattern() { this->pattern_ = nullptr;};
      inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
      inline Resource& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Resource& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Resource& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline Resource& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline Resource& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // resourceOrigin Field Functions 
      bool hasResourceOrigin() const { return this->resourceOrigin_ != nullptr;};
      void deleteResourceOrigin() { this->resourceOrigin_ = nullptr;};
      inline string getResourceOrigin() const { DARABONBA_PTR_GET_DEFAULT(resourceOrigin_, "") };
      inline Resource& setResourceOrigin(string resourceOrigin) { DARABONBA_PTR_SET_VALUE(resourceOrigin_, resourceOrigin) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline Resource& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // responseHeaders Field Functions 
      bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
      void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
      inline const vector<Resource::ResponseHeaders> & getResponseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<Resource::ResponseHeaders>) };
      inline vector<Resource::ResponseHeaders> getResponseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<Resource::ResponseHeaders>) };
      inline Resource& setResponseHeaders(const vector<Resource::ResponseHeaders> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
      inline Resource& setResponseHeaders(vector<Resource::ResponseHeaders> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


      // xffStatus Field Functions 
      bool hasXffStatus() const { return this->xffStatus_ != nullptr;};
      void deleteXffStatus() { this->xffStatus_ = nullptr;};
      inline int32_t getXffStatus() const { DARABONBA_PTR_GET_DEFAULT(xffStatus_, 0) };
      inline Resource& setXffStatus(int32_t xffStatus) { DARABONBA_PTR_SET_VALUE(xffStatus_, xffStatus) };


    protected:
      // The enabling status of the tracking cookie.
      // 
      // - **0**: disabled.
      // 
      // - **1**: enabled.
      shared_ptr<int32_t> acwCookieStatus_ {};
      // The status of the Secure attribute for the tracking cookie.
      // 
      // - **0**: disabled.
      // 
      // - **1**: enabled.
      shared_ptr<int32_t> acwSecureStatus_ {};
      // The status of the Secure attribute for the slider cookie.
      // 
      // - **0**: disabled.
      // 
      // - **1**: enabled.
      shared_ptr<int32_t> acwV3SecureStatus_ {};
      // The cookie attribute aggregation configuration.
      shared_ptr<Resource::CookieConfig> cookieConfig_ {};
      // The list of specified header fields.
      // > When XffStatus is set to 1, the first IP address in the specified header field is used as the originating IP address of the client to prevent XFF spoofing. If multiple headers are specified, the system attempts to obtain the originating IP address in sequence. If the first header does not contain an IP address, the system checks the second header, and so on. If no IP address is found in any of the specified headers, the first IP address in the X-Forwarded-For header is used. When XffStatus is set to 1, the first IP address is extracted.
      shared_ptr<vector<string>> customHeaders_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The detailed description of the protected object. Different key-value pairs in the map represent different attributes of the protected object.
      Darabonba::Json detail_ {};
      // The time when the protected object was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the protected object was modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The WAF instance ID.
      shared_ptr<string> instanceId_ {};
      // The owner UID of the protected object.
      shared_ptr<string> ownerUserId_ {};
      // The protection mode of the protected object.
      shared_ptr<string> pattern_ {};
      // The name of the cloud service.
      shared_ptr<string> product_ {};
      // The name of the protected object.
      shared_ptr<string> resource_ {};
      // The name of the protected object group to which the protected object is added.
      shared_ptr<string> resourceGroup_ {};
      // The ID of the Alibaba Cloud resource group.
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      // The source of the protected object. Valid values:
      // 
      // - **custom**: the protected object created from the Provisioning page.
      // 
      // - **access**: the protected object created by the user.
      shared_ptr<string> resourceOrigin_ {};
      // The status of the protected object. Valid values:
      // 
      // - **initializing**: default protection is being initialized.
      // 
      // - **active**: running normally.
      // 
      // - **init_failed**: default protection initialization failed.
      shared_ptr<string> resourceStatus_ {};
      // The response header parameters.
      shared_ptr<vector<Resource::ResponseHeaders>> responseHeaders_ {};
      // Specifies whether a Layer 7 proxy, such as Anti-DDoS or CDN, is enabled before WAF. Valid values:
      // 
      // - **0**: disabled.
      // 
      // - **1**: enabled.
      shared_ptr<int32_t> xffStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const DescribeDefenseResourceResponseBody::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, DescribeDefenseResourceResponseBody::Resource) };
    inline DescribeDefenseResourceResponseBody::Resource getResource() { DARABONBA_PTR_GET(resource_, DescribeDefenseResourceResponseBody::Resource) };
    inline DescribeDefenseResourceResponseBody& setResource(const DescribeDefenseResourceResponseBody::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeDefenseResourceResponseBody& setResource(DescribeDefenseResourceResponseBody::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The protected object information.
    shared_ptr<DescribeDefenseResourceResponseBody::Resource> resource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
