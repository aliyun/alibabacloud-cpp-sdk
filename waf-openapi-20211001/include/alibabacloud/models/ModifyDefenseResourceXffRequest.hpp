// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSERESOURCEXFFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSERESOURCEXFFREQUEST_HPP_
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
  class ModifyDefenseResourceXffRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseResourceXffRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcwCookieStatus, acwCookieStatus_);
      DARABONBA_PTR_TO_JSON(AcwSecureStatus, acwSecureStatus_);
      DARABONBA_PTR_TO_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
      DARABONBA_PTR_TO_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_TO_JSON(XffStatus, xffStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseResourceXffRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcwCookieStatus, acwCookieStatus_);
      DARABONBA_PTR_FROM_JSON(AcwSecureStatus, acwSecureStatus_);
      DARABONBA_PTR_FROM_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
      DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_FROM_JSON(XffStatus, xffStatus_);
    };
    ModifyDefenseResourceXffRequest() = default ;
    ModifyDefenseResourceXffRequest(const ModifyDefenseResourceXffRequest &) = default ;
    ModifyDefenseResourceXffRequest(ModifyDefenseResourceXffRequest &&) = default ;
    ModifyDefenseResourceXffRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseResourceXffRequest() = default ;
    ModifyDefenseResourceXffRequest& operator=(const ModifyDefenseResourceXffRequest &) = default ;
    ModifyDefenseResourceXffRequest& operator=(ModifyDefenseResourceXffRequest &&) = default ;
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
        && this->acwSecureStatus_ == nullptr && this->acwV3SecureStatus_ == nullptr && this->customHeaders_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr
        && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->responseHeaders_ == nullptr && this->xffStatus_ == nullptr; };
    // acwCookieStatus Field Functions 
    bool hasAcwCookieStatus() const { return this->acwCookieStatus_ != nullptr;};
    void deleteAcwCookieStatus() { this->acwCookieStatus_ = nullptr;};
    inline int32_t getAcwCookieStatus() const { DARABONBA_PTR_GET_DEFAULT(acwCookieStatus_, 0) };
    inline ModifyDefenseResourceXffRequest& setAcwCookieStatus(int32_t acwCookieStatus) { DARABONBA_PTR_SET_VALUE(acwCookieStatus_, acwCookieStatus) };


    // acwSecureStatus Field Functions 
    bool hasAcwSecureStatus() const { return this->acwSecureStatus_ != nullptr;};
    void deleteAcwSecureStatus() { this->acwSecureStatus_ = nullptr;};
    inline int32_t getAcwSecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwSecureStatus_, 0) };
    inline ModifyDefenseResourceXffRequest& setAcwSecureStatus(int32_t acwSecureStatus) { DARABONBA_PTR_SET_VALUE(acwSecureStatus_, acwSecureStatus) };


    // acwV3SecureStatus Field Functions 
    bool hasAcwV3SecureStatus() const { return this->acwV3SecureStatus_ != nullptr;};
    void deleteAcwV3SecureStatus() { this->acwV3SecureStatus_ = nullptr;};
    inline int32_t getAcwV3SecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwV3SecureStatus_, 0) };
    inline ModifyDefenseResourceXffRequest& setAcwV3SecureStatus(int32_t acwV3SecureStatus) { DARABONBA_PTR_SET_VALUE(acwV3SecureStatus_, acwV3SecureStatus) };


    // customHeaders Field Functions 
    bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
    void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
    inline const vector<string> & getCustomHeaders() const { DARABONBA_PTR_GET_CONST(customHeaders_, vector<string>) };
    inline vector<string> getCustomHeaders() { DARABONBA_PTR_GET(customHeaders_, vector<string>) };
    inline ModifyDefenseResourceXffRequest& setCustomHeaders(const vector<string> & customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };
    inline ModifyDefenseResourceXffRequest& setCustomHeaders(vector<string> && customHeaders) { DARABONBA_PTR_SET_RVALUE(customHeaders_, customHeaders) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseResourceXffRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseResourceXffRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyDefenseResourceXffRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseResourceXffRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // responseHeaders Field Functions 
    bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
    void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
    inline const vector<ModifyDefenseResourceXffRequest::ResponseHeaders> & getResponseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<ModifyDefenseResourceXffRequest::ResponseHeaders>) };
    inline vector<ModifyDefenseResourceXffRequest::ResponseHeaders> getResponseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<ModifyDefenseResourceXffRequest::ResponseHeaders>) };
    inline ModifyDefenseResourceXffRequest& setResponseHeaders(const vector<ModifyDefenseResourceXffRequest::ResponseHeaders> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
    inline ModifyDefenseResourceXffRequest& setResponseHeaders(vector<ModifyDefenseResourceXffRequest::ResponseHeaders> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


    // xffStatus Field Functions 
    bool hasXffStatus() const { return this->xffStatus_ != nullptr;};
    void deleteXffStatus() { this->xffStatus_ = nullptr;};
    inline int32_t getXffStatus() const { DARABONBA_PTR_GET_DEFAULT(xffStatus_, 0) };
    inline ModifyDefenseResourceXffRequest& setXffStatus(int32_t xffStatus) { DARABONBA_PTR_SET_VALUE(xffStatus_, xffStatus) };


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
    // The custom header fields.
    // 
    // >  The first IP address in the specified custom header field is used as the originating IP address of the client to prevent X-Forwarded-For forgery. If you specify multiple header fields, WAF reads the values of the header fields in sequence until the originating IP address is obtained. If the originating IP address cannot be obtained, the first IP address in the X-Forwarded-For header is used as the originating IP address of the client.
    shared_ptr<vector<string>> customHeaders_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The name of the protected object.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The response header.
    shared_ptr<vector<ModifyDefenseResourceXffRequest::ResponseHeaders>> responseHeaders_ {};
    // Specifies whether a Layer 7 proxy is deployed in front of WAF. Layer 7 proxies include Anti-DDoS Proxy and Alibaba Cloud CDN. Valid values:
    // 
    // *   **0**: No Layer 7 proxies are deployed. This is the default value.
    // *   **1**: A Layer 7 proxy is deployed.
    // 
    // This parameter is required.
    shared_ptr<int32_t> xffStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
