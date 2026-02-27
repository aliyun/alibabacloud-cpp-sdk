// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class MoveResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    MoveResourcesRequest() = default ;
    MoveResourcesRequest(const MoveResourcesRequest &) = default ;
    MoveResourcesRequest(MoveResourcesRequest &&) = default ;
    MoveResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourcesRequest() = default ;
    MoveResourcesRequest& operator=(const MoveResourcesRequest &) = default ;
    MoveResourcesRequest& operator=(MoveResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Service, service_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->service_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Resources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline Resources& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    protected:
      // The region ID of the resource.
      shared_ptr<string> regionId_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The ID of the Alibaba Cloud service to which the resource belongs.
      shared_ptr<string> service_ {};
    };

    virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && this->resources_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline MoveResourcesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<MoveResourcesRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<MoveResourcesRequest::Resources>) };
    inline vector<MoveResourcesRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<MoveResourcesRequest::Resources>) };
    inline MoveResourcesRequest& setResources(const vector<MoveResourcesRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline MoveResourcesRequest& setResources(vector<MoveResourcesRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The ID of the resource group to which you want to move the resources.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
    // The resources that you want to move.
    // 
    // >  You can move a maximum of 10 resources at a time. If you want to move more than 10 resources, move them in batches.
    // 
    // This parameter is required.
    shared_ptr<vector<MoveResourcesRequest::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
