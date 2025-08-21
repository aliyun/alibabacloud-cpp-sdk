// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAclsResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAclsResources& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAclsResources& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeNetworkAclsResponseBodyNetworkAclsResources() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsResources(const DescribeNetworkAclsResponseBodyNetworkAclsResources &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsResources(DescribeNetworkAclsResponseBodyNetworkAclsResources &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAclsResources() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsResources& operator=(const DescribeNetworkAclsResponseBodyNetworkAclsResources &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsResources& operator=(DescribeNetworkAclsResponseBodyNetworkAclsResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsResources& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the associated resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the associated resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The association status of the resource. Valid values:
    // 
    // *   **BINDED**: The resource is associated with the network ACL.
    // *   **BINDING**: The resource is being associated with the network ACL.
    // *   **UNBINDING**: The resource is being disassociated from the network ACL.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
