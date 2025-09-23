// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHAREREQUESTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHAREREQUESTRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AssociateResourceShareRequestResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourceShareRequestResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourceShareRequestResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    AssociateResourceShareRequestResources() = default ;
    AssociateResourceShareRequestResources(const AssociateResourceShareRequestResources &) = default ;
    AssociateResourceShareRequestResources(AssociateResourceShareRequestResources &&) = default ;
    AssociateResourceShareRequestResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourceShareRequestResources() = default ;
    AssociateResourceShareRequestResources& operator=(const AssociateResourceShareRequestResources &) = default ;
    AssociateResourceShareRequestResources& operator=(AssociateResourceShareRequestResources &&) = default ;
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
    inline AssociateResourceShareRequestResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AssociateResourceShareRequestResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of a shared resource.
    // 
    // Valid values of N: 1 to 5. This indicates that a maximum of five shared resources can be specified at a time.
    // 
    // >  Resources.N.ResourceId and Resources.N.ResourceType must be used in pairs.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of a shared resource.
    // 
    // Valid values of N: 1 to 5. This indicates that a maximum of five shared resources can be specified at a time.
    // 
    // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    // 
    // >  `Resources.N.ResourceId` and `Resources.N.ResourceType` must be used in pairs.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
