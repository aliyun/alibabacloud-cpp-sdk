// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSERESOURCEXFFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSERESOURCEXFFSHRINKREQUEST_HPP_
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
  class ModifyDefenseResourceXffShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseResourceXffShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcwCookieStatus, acwCookieStatus_);
      DARABONBA_PTR_TO_JSON(AcwSecureStatus, acwSecureStatus_);
      DARABONBA_PTR_TO_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
      DARABONBA_PTR_TO_JSON(CookieConfig, cookieConfigShrink_);
      DARABONBA_PTR_TO_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_TO_JSON(XffStatus, xffStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseResourceXffShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcwCookieStatus, acwCookieStatus_);
      DARABONBA_PTR_FROM_JSON(AcwSecureStatus, acwSecureStatus_);
      DARABONBA_PTR_FROM_JSON(AcwV3SecureStatus, acwV3SecureStatus_);
      DARABONBA_PTR_FROM_JSON(CookieConfig, cookieConfigShrink_);
      DARABONBA_PTR_FROM_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaders, responseHeaders_);
      DARABONBA_PTR_FROM_JSON(XffStatus, xffStatus_);
    };
    ModifyDefenseResourceXffShrinkRequest() = default ;
    ModifyDefenseResourceXffShrinkRequest(const ModifyDefenseResourceXffShrinkRequest &) = default ;
    ModifyDefenseResourceXffShrinkRequest(ModifyDefenseResourceXffShrinkRequest &&) = default ;
    ModifyDefenseResourceXffShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseResourceXffShrinkRequest() = default ;
    ModifyDefenseResourceXffShrinkRequest& operator=(const ModifyDefenseResourceXffShrinkRequest &) = default ;
    ModifyDefenseResourceXffShrinkRequest& operator=(ModifyDefenseResourceXffShrinkRequest &&) = default ;
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

    virtual bool empty() const override { return this->acwCookieStatus_ == nullptr
        && this->acwSecureStatus_ == nullptr && this->acwV3SecureStatus_ == nullptr && this->cookieConfigShrink_ == nullptr && this->customHeaders_ == nullptr && this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->responseHeaders_ == nullptr && this->xffStatus_ == nullptr; };
    // acwCookieStatus Field Functions 
    bool hasAcwCookieStatus() const { return this->acwCookieStatus_ != nullptr;};
    void deleteAcwCookieStatus() { this->acwCookieStatus_ = nullptr;};
    inline int32_t getAcwCookieStatus() const { DARABONBA_PTR_GET_DEFAULT(acwCookieStatus_, 0) };
    inline ModifyDefenseResourceXffShrinkRequest& setAcwCookieStatus(int32_t acwCookieStatus) { DARABONBA_PTR_SET_VALUE(acwCookieStatus_, acwCookieStatus) };


    // acwSecureStatus Field Functions 
    bool hasAcwSecureStatus() const { return this->acwSecureStatus_ != nullptr;};
    void deleteAcwSecureStatus() { this->acwSecureStatus_ = nullptr;};
    inline int32_t getAcwSecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwSecureStatus_, 0) };
    inline ModifyDefenseResourceXffShrinkRequest& setAcwSecureStatus(int32_t acwSecureStatus) { DARABONBA_PTR_SET_VALUE(acwSecureStatus_, acwSecureStatus) };


    // acwV3SecureStatus Field Functions 
    bool hasAcwV3SecureStatus() const { return this->acwV3SecureStatus_ != nullptr;};
    void deleteAcwV3SecureStatus() { this->acwV3SecureStatus_ = nullptr;};
    inline int32_t getAcwV3SecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwV3SecureStatus_, 0) };
    inline ModifyDefenseResourceXffShrinkRequest& setAcwV3SecureStatus(int32_t acwV3SecureStatus) { DARABONBA_PTR_SET_VALUE(acwV3SecureStatus_, acwV3SecureStatus) };


    // cookieConfigShrink Field Functions 
    bool hasCookieConfigShrink() const { return this->cookieConfigShrink_ != nullptr;};
    void deleteCookieConfigShrink() { this->cookieConfigShrink_ = nullptr;};
    inline string getCookieConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(cookieConfigShrink_, "") };
    inline ModifyDefenseResourceXffShrinkRequest& setCookieConfigShrink(string cookieConfigShrink) { DARABONBA_PTR_SET_VALUE(cookieConfigShrink_, cookieConfigShrink) };


    // customHeaders Field Functions 
    bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
    void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
    inline const vector<string> & getCustomHeaders() const { DARABONBA_PTR_GET_CONST(customHeaders_, vector<string>) };
    inline vector<string> getCustomHeaders() { DARABONBA_PTR_GET(customHeaders_, vector<string>) };
    inline ModifyDefenseResourceXffShrinkRequest& setCustomHeaders(const vector<string> & customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };
    inline ModifyDefenseResourceXffShrinkRequest& setCustomHeaders(vector<string> && customHeaders) { DARABONBA_PTR_SET_RVALUE(customHeaders_, customHeaders) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseResourceXffShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseResourceXffShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyDefenseResourceXffShrinkRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseResourceXffShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // responseHeaders Field Functions 
    bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
    void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
    inline const vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders> & getResponseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders>) };
    inline vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders> getResponseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders>) };
    inline ModifyDefenseResourceXffShrinkRequest& setResponseHeaders(const vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
    inline ModifyDefenseResourceXffShrinkRequest& setResponseHeaders(vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


    // xffStatus Field Functions 
    bool hasXffStatus() const { return this->xffStatus_ != nullptr;};
    void deleteXffStatus() { this->xffStatus_ = nullptr;};
    inline int32_t getXffStatus() const { DARABONBA_PTR_GET_DEFAULT(xffStatus_, 0) };
    inline ModifyDefenseResourceXffShrinkRequest& setXffStatus(int32_t xffStatus) { DARABONBA_PTR_SET_VALUE(xffStatus_, xffStatus) };


  protected:
    // The status of the tracking cookie switch. Valid values:
    // 
    // - **0**: Disabled.
    // 
    // - **1** (default): Enabled.
    shared_ptr<int32_t> acwCookieStatus_ {};
    // The status of the Secure attribute for the tracking cookie. Valid values:
    // 
    // - **0** (default): Disabled.
    // 
    // - **1**: Enabled.
    shared_ptr<int32_t> acwSecureStatus_ {};
    // The status of the Secure attribute for the slider cookie. Valid values:
    // 
    // - **0** (default): Disabled.
    // 
    // - **1**: Enabled.
    shared_ptr<int32_t> acwV3SecureStatus_ {};
    // The aggregated configuration of cookie attributes.
    shared_ptr<string> cookieConfigShrink_ {};
    // The list of specified header fields.
    // 
    // > The first IP address in the specified header field is used as the source IP address of the client to prevent X-Forwarded-For (XFF) spoofing. If multiple headers are specified, the system attempts to obtain the source IP address in sequence. If the first header does not contain an IP address, the system checks the second header, and so on. If no IP address is found in any of the specified headers, the first IP address in the X-Forwarded-For header is used.
    shared_ptr<vector<string>> customHeaders_ {};
    // Instance ID of the WAF instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query instance ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The name of the protected object.
    // 
    // > The protected object must be added to WAF. You can call the [DescribeDefenseResources](https://help.aliyun.com/document_detail/461612.html) operation to query the name of the protected object.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The response header parameters.
    shared_ptr<vector<ModifyDefenseResourceXffShrinkRequest::ResponseHeaders>> responseHeaders_ {};
    // Specifies whether a Layer 7 proxy, such as Anti-DDoS or CDN, is enabled before WAF. Valid values:
    // 
    // - **0** (default): The proxy is disabled.
    // 
    // - **1**: The proxy is enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> xffStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
