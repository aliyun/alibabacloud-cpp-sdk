// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseResourcesResponseBodyResourcesResponseHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourcesResponseBodyResources& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourcesResponseBodyResources& obj) { 
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
    DescribeDefenseResourcesResponseBodyResources() = default ;
    DescribeDefenseResourcesResponseBodyResources(const DescribeDefenseResourcesResponseBodyResources &) = default ;
    DescribeDefenseResourcesResponseBodyResources(DescribeDefenseResourcesResponseBodyResources &&) = default ;
    DescribeDefenseResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourcesResponseBodyResources() = default ;
    DescribeDefenseResourcesResponseBodyResources& operator=(const DescribeDefenseResourcesResponseBodyResources &) = default ;
    DescribeDefenseResourcesResponseBodyResources& operator=(DescribeDefenseResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acwCookieStatus_ != nullptr
        && this->acwSecureStatus_ != nullptr && this->acwV3SecureStatus_ != nullptr && this->customHeaders_ != nullptr && this->description_ != nullptr && this->detail_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->ownerUserId_ != nullptr && this->pattern_ != nullptr && this->product_ != nullptr
        && this->resource_ != nullptr && this->resourceGroup_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->resourceOrigin_ != nullptr && this->responseHeaders_ != nullptr
        && this->xffStatus_ != nullptr; };
    // acwCookieStatus Field Functions 
    bool hasAcwCookieStatus() const { return this->acwCookieStatus_ != nullptr;};
    void deleteAcwCookieStatus() { this->acwCookieStatus_ = nullptr;};
    inline int32_t acwCookieStatus() const { DARABONBA_PTR_GET_DEFAULT(acwCookieStatus_, 0) };
    inline DescribeDefenseResourcesResponseBodyResources& setAcwCookieStatus(int32_t acwCookieStatus) { DARABONBA_PTR_SET_VALUE(acwCookieStatus_, acwCookieStatus) };


    // acwSecureStatus Field Functions 
    bool hasAcwSecureStatus() const { return this->acwSecureStatus_ != nullptr;};
    void deleteAcwSecureStatus() { this->acwSecureStatus_ = nullptr;};
    inline int32_t acwSecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwSecureStatus_, 0) };
    inline DescribeDefenseResourcesResponseBodyResources& setAcwSecureStatus(int32_t acwSecureStatus) { DARABONBA_PTR_SET_VALUE(acwSecureStatus_, acwSecureStatus) };


    // acwV3SecureStatus Field Functions 
    bool hasAcwV3SecureStatus() const { return this->acwV3SecureStatus_ != nullptr;};
    void deleteAcwV3SecureStatus() { this->acwV3SecureStatus_ = nullptr;};
    inline int32_t acwV3SecureStatus() const { DARABONBA_PTR_GET_DEFAULT(acwV3SecureStatus_, 0) };
    inline DescribeDefenseResourcesResponseBodyResources& setAcwV3SecureStatus(int32_t acwV3SecureStatus) { DARABONBA_PTR_SET_VALUE(acwV3SecureStatus_, acwV3SecureStatus) };


    // customHeaders Field Functions 
    bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
    void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
    inline const vector<string> & customHeaders() const { DARABONBA_PTR_GET_CONST(customHeaders_, vector<string>) };
    inline vector<string> customHeaders() { DARABONBA_PTR_GET(customHeaders_, vector<string>) };
    inline DescribeDefenseResourcesResponseBodyResources& setCustomHeaders(const vector<string> & customHeaders) { DARABONBA_PTR_SET_VALUE(customHeaders_, customHeaders) };
    inline DescribeDefenseResourcesResponseBodyResources& setCustomHeaders(vector<string> && customHeaders) { DARABONBA_PTR_SET_RVALUE(customHeaders_, customHeaders) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & detail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & detail() { DARABONBA_GET(detail_) };
    inline DescribeDefenseResourcesResponseBodyResources& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline DescribeDefenseResourcesResponseBodyResources& setDetail(Darabonba::Json & detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDefenseResourcesResponseBodyResources& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDefenseResourcesResponseBodyResources& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceOrigin Field Functions 
    bool hasResourceOrigin() const { return this->resourceOrigin_ != nullptr;};
    void deleteResourceOrigin() { this->resourceOrigin_ = nullptr;};
    inline string resourceOrigin() const { DARABONBA_PTR_GET_DEFAULT(resourceOrigin_, "") };
    inline DescribeDefenseResourcesResponseBodyResources& setResourceOrigin(string resourceOrigin) { DARABONBA_PTR_SET_VALUE(resourceOrigin_, resourceOrigin) };


    // responseHeaders Field Functions 
    bool hasResponseHeaders() const { return this->responseHeaders_ != nullptr;};
    void deleteResponseHeaders() { this->responseHeaders_ = nullptr;};
    inline const vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders> & responseHeaders() const { DARABONBA_PTR_GET_CONST(responseHeaders_, vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders>) };
    inline vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders> responseHeaders() { DARABONBA_PTR_GET(responseHeaders_, vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders>) };
    inline DescribeDefenseResourcesResponseBodyResources& setResponseHeaders(const vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders> & responseHeaders) { DARABONBA_PTR_SET_VALUE(responseHeaders_, responseHeaders) };
    inline DescribeDefenseResourcesResponseBodyResources& setResponseHeaders(vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders> && responseHeaders) { DARABONBA_PTR_SET_RVALUE(responseHeaders_, responseHeaders) };


    // xffStatus Field Functions 
    bool hasXffStatus() const { return this->xffStatus_ != nullptr;};
    void deleteXffStatus() { this->xffStatus_ = nullptr;};
    inline int32_t xffStatus() const { DARABONBA_PTR_GET_DEFAULT(xffStatus_, 0) };
    inline DescribeDefenseResourcesResponseBodyResources& setXffStatus(int32_t xffStatus) { DARABONBA_PTR_SET_VALUE(xffStatus_, xffStatus) };


  protected:
    // The status of the tracking cookie.
    // 
    // *   **0**: disabled
    // *   **1**: enabled. This is the default value.
    std::shared_ptr<int32_t> acwCookieStatus_ = nullptr;
    // The status of the secure attribute of the tracking cookie.
    // 
    // *   **0**: disabled. This is the default value.
    // *   **1**: enabled.
    std::shared_ptr<int32_t> acwSecureStatus_ = nullptr;
    // The status of the secure attribute of the slider CAPTCHA cookie.
    // 
    // *   **0**: disabled. This is the default value.
    // *   **1**: enabled.
    std::shared_ptr<int32_t> acwV3SecureStatus_ = nullptr;
    // The custom header fields that are used to identify the originating IP addresses of clients. If the value of XffStatus is 1 and CustomHeaders is left empty, the first IP addresses in the XFF header fields are used as the originating IP addresses of clients.
    std::shared_ptr<vector<string>> customHeaders_ = nullptr;
    // The description of the protected object.
    std::shared_ptr<string> description_ = nullptr;
    // The description of the protected object. Different key-value pairs in a map indicate different properties of the protected object.
    Darabonba::Json detail_ = nullptr;
    // The creation time of the protected object. Unit: seconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The most recent modification time of the protected object. Unit: seconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The Alibaba Cloud account to which the protected object belongs. You can specify this parameter to query protected objects that belong to a specific Alibaba Cloud account. Exact match is supported.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // The protection pattern.
    std::shared_ptr<string> pattern_ = nullptr;
    // The name of the cloud service.
    std::shared_ptr<string> product_ = nullptr;
    // The name of the protected object.
    std::shared_ptr<string> resource_ = nullptr;
    // The name of the protected object group to which the protected object belongs.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The origin of the protected object.
    std::shared_ptr<string> resourceOrigin_ = nullptr;
    // The response header.
    std::shared_ptr<vector<Models::DescribeDefenseResourcesResponseBodyResourcesResponseHeaders>> responseHeaders_ = nullptr;
    // Indicates whether the X-Forwarded-For (XFF) header is used.
    std::shared_ptr<int32_t> xffStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
