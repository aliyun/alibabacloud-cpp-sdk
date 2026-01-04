// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATENETWORKACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATENETWORKACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnassociateNetworkAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassociateNetworkAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, UnassociateNetworkAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    UnassociateNetworkAclRequest() = default ;
    UnassociateNetworkAclRequest(const UnassociateNetworkAclRequest &) = default ;
    UnassociateNetworkAclRequest(UnassociateNetworkAclRequest &&) = default ;
    UnassociateNetworkAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassociateNetworkAclRequest() = default ;
    UnassociateNetworkAclRequest& operator=(const UnassociateNetworkAclRequest &) = default ;
    UnassociateNetworkAclRequest& operator=(UnassociateNetworkAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of the resource that you want to disassociate.
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // The type of the resource that you want to disassociate. Valid values:
      // 
      // *   Network
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->networkAclId_ == nullptr
        && this->resource_ == nullptr; };
    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline UnassociateNetworkAclRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<UnassociateNetworkAclRequest::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<UnassociateNetworkAclRequest::Resource>) };
    inline vector<UnassociateNetworkAclRequest::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<UnassociateNetworkAclRequest::Resource>) };
    inline UnassociateNetworkAclRequest& setResource(const vector<UnassociateNetworkAclRequest::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline UnassociateNetworkAclRequest& setResource(vector<UnassociateNetworkAclRequest::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The ID of the network ACL that you want to disassociate from a resource.
    // 
    // This parameter is required.
    shared_ptr<string> networkAclId_ {};
    // Resources that you want to disassociate. Valid values of **N**: 0 to 29. A maximum of 30 resources can be unbound.
    // 
    // This parameter is required.
    shared_ptr<vector<UnassociateNetworkAclRequest::Resource>> resource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
