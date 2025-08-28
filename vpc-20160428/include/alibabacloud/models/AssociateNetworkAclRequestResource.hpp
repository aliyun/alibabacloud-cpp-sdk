// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATENETWORKACLREQUESTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATENETWORKACLREQUESTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociateNetworkAclRequestResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateNetworkAclRequestResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateNetworkAclRequestResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    AssociateNetworkAclRequestResource() = default ;
    AssociateNetworkAclRequestResource(const AssociateNetworkAclRequestResource &) = default ;
    AssociateNetworkAclRequestResource(AssociateNetworkAclRequestResource &&) = default ;
    AssociateNetworkAclRequestResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateNetworkAclRequestResource() = default ;
    AssociateNetworkAclRequestResource& operator=(const AssociateNetworkAclRequestResource &) = default ;
    AssociateNetworkAclRequestResource& operator=(AssociateNetworkAclRequestResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourceType_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AssociateNetworkAclRequestResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AssociateNetworkAclRequestResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the associated resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of resource with which you want to associate the network ACL. Set the value to **VSwitch**.
    // 
    // Valid values of **N**: **0** to **29**. You can associate a network ACL with up to 30 vSwitches.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
