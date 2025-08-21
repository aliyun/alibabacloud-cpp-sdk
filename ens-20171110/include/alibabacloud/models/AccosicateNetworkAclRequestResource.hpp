// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOSICATENETWORKACLREQUESTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_ACCOSICATENETWORKACLREQUESTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AccosicateNetworkAclRequestResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccosicateNetworkAclRequestResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, AccosicateNetworkAclRequestResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    AccosicateNetworkAclRequestResource() = default ;
    AccosicateNetworkAclRequestResource(const AccosicateNetworkAclRequestResource &) = default ;
    AccosicateNetworkAclRequestResource(AccosicateNetworkAclRequestResource &&) = default ;
    AccosicateNetworkAclRequestResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccosicateNetworkAclRequestResource() = default ;
    AccosicateNetworkAclRequestResource& operator=(const AccosicateNetworkAclRequestResource &) = default ;
    AccosicateNetworkAclRequestResource& operator=(AccosicateNetworkAclRequestResource &&) = default ;
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
    inline AccosicateNetworkAclRequestResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AccosicateNetworkAclRequestResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the associated resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the associated resource. Set the value to **Network**.
    // 
    // Valid values of **N**: 0 to 29. You can associate a network ACL with at most 30 resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
