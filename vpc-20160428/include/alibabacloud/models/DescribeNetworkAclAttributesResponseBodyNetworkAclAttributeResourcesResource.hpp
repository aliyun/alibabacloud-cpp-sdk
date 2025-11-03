// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTERESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTERESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource &&) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& operator=(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& operator=(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr && return this->status_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeResourcesResource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the associated resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of resource with which you want to associate the network ACL. The value is set to **VSwitch**.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The association status of the resource. Valid values:
    // 
    // *   **BINDED**
    // *   **BINDING**
    // *   **UNBINDING**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
