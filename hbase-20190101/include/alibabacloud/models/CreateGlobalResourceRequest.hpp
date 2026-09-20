// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CreateGlobalResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateGlobalResourceRequest() = default ;
    CreateGlobalResourceRequest(const CreateGlobalResourceRequest &) = default ;
    CreateGlobalResourceRequest(CreateGlobalResourceRequest &&) = default ;
    CreateGlobalResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalResourceRequest() = default ;
    CreateGlobalResourceRequest& operator=(const CreateGlobalResourceRequest &) = default ;
    CreateGlobalResourceRequest& operator=(CreateGlobalResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->clusterId_ == nullptr && this->regionId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGlobalResourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateGlobalResourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGlobalResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateGlobalResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateGlobalResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is automatically populated when the request is sent. You do not need to specify this parameter.
    shared_ptr<string> clientToken_ {};
    // The ID of the target instance. You can call the DescribeInstances operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The resource name. Valid values:
    // 
    // - HbaseSLBThriftVip: Thrift SLB EPS resource.
    // 
    // - SolrSlbVip: Solr SLB EPS resource.
    // 
    // - PhoenixSLBQueryServerVip: Phoenix SLB EPS resource.
    // 
    // - PubHbaseSLBThriftVip: Thrift SLB public network resource.
    // 
    // - PubPhoenixSLBQueryServerVip: Phoenix SLB public network resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceName_ {};
    // The resource type. Set the value to **GLOBAL_VIP**.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
