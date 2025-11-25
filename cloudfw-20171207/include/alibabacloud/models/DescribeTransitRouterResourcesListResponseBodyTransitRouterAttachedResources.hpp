// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERRESOURCESLISTRESPONSEBODYTRANSITROUTERATTACHEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERRESOURCESLISTRESPONSEBODYTRANSITROUTERATTACHEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources() = default ;
    DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources(const DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources &) = default ;
    DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources(DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources &&) = default ;
    DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources() = default ;
    DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& operator=(const DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources &) = default ;
    DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& operator=(DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeTransitRouterResourcesListResponseBodyTransitRouterAttachedResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
