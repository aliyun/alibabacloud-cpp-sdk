// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHLOGSTOREFROMENDPOINTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHLOGSTOREFROMENDPOINTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DetachLogStoreFromEndpointGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachLogStoreFromEndpointGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointGroupIds, endpointGroupIds_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachLogStoreFromEndpointGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupIds, endpointGroupIds_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachLogStoreFromEndpointGroupRequest() = default ;
    DetachLogStoreFromEndpointGroupRequest(const DetachLogStoreFromEndpointGroupRequest &) = default ;
    DetachLogStoreFromEndpointGroupRequest(DetachLogStoreFromEndpointGroupRequest &&) = default ;
    DetachLogStoreFromEndpointGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachLogStoreFromEndpointGroupRequest() = default ;
    DetachLogStoreFromEndpointGroupRequest& operator=(const DetachLogStoreFromEndpointGroupRequest &) = default ;
    DetachLogStoreFromEndpointGroupRequest& operator=(DetachLogStoreFromEndpointGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->endpointGroupIds_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DetachLogStoreFromEndpointGroupRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachLogStoreFromEndpointGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointGroupIds Field Functions 
    bool hasEndpointGroupIds() const { return this->endpointGroupIds_ != nullptr;};
    void deleteEndpointGroupIds() { this->endpointGroupIds_ = nullptr;};
    inline const vector<string> & getEndpointGroupIds() const { DARABONBA_PTR_GET_CONST(endpointGroupIds_, vector<string>) };
    inline vector<string> getEndpointGroupIds() { DARABONBA_PTR_GET(endpointGroupIds_, vector<string>) };
    inline DetachLogStoreFromEndpointGroupRequest& setEndpointGroupIds(const vector<string> & endpointGroupIds) { DARABONBA_PTR_SET_VALUE(endpointGroupIds_, endpointGroupIds) };
    inline DetachLogStoreFromEndpointGroupRequest& setEndpointGroupIds(vector<string> && endpointGroupIds) { DARABONBA_PTR_SET_RVALUE(endpointGroupIds_, endpointGroupIds) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DetachLogStoreFromEndpointGroupRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachLogStoreFromEndpointGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The IDs of endpoint groups.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> endpointGroupIds_ {};
    // The ID of the listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
