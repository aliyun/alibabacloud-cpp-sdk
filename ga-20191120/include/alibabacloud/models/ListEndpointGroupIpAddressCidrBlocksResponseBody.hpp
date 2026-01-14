// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENDPOINTGROUPIPADDRESSCIDRBLOCKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENDPOINTGROUPIPADDRESSCIDRBLOCKSRESPONSEBODY_HPP_
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
  class ListEndpointGroupIpAddressCidrBlocksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEndpointGroupIpAddressCidrBlocksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(IpAddressCidrBlocks, ipAddressCidrBlocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListEndpointGroupIpAddressCidrBlocksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(IpAddressCidrBlocks, ipAddressCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListEndpointGroupIpAddressCidrBlocksResponseBody() = default ;
    ListEndpointGroupIpAddressCidrBlocksResponseBody(const ListEndpointGroupIpAddressCidrBlocksResponseBody &) = default ;
    ListEndpointGroupIpAddressCidrBlocksResponseBody(ListEndpointGroupIpAddressCidrBlocksResponseBody &&) = default ;
    ListEndpointGroupIpAddressCidrBlocksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEndpointGroupIpAddressCidrBlocksResponseBody() = default ;
    ListEndpointGroupIpAddressCidrBlocksResponseBody& operator=(const ListEndpointGroupIpAddressCidrBlocksResponseBody &) = default ;
    ListEndpointGroupIpAddressCidrBlocksResponseBody& operator=(ListEndpointGroupIpAddressCidrBlocksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointGroupRegion_ == nullptr
        && this->ipAddressCidrBlocks_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->state_ == nullptr; };
    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksResponseBody& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // ipAddressCidrBlocks Field Functions 
    bool hasIpAddressCidrBlocks() const { return this->ipAddressCidrBlocks_ != nullptr;};
    void deleteIpAddressCidrBlocks() { this->ipAddressCidrBlocks_ = nullptr;};
    inline const vector<string> & getIpAddressCidrBlocks() const { DARABONBA_PTR_GET_CONST(ipAddressCidrBlocks_, vector<string>) };
    inline vector<string> getIpAddressCidrBlocks() { DARABONBA_PTR_GET(ipAddressCidrBlocks_, vector<string>) };
    inline ListEndpointGroupIpAddressCidrBlocksResponseBody& setIpAddressCidrBlocks(const vector<string> & ipAddressCidrBlocks) { DARABONBA_PTR_SET_VALUE(ipAddressCidrBlocks_, ipAddressCidrBlocks) };
    inline ListEndpointGroupIpAddressCidrBlocksResponseBody& setIpAddressCidrBlocks(vector<string> && ipAddressCidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipAddressCidrBlocks_, ipAddressCidrBlocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The region ID of the endpoint group.
    shared_ptr<string> endpointGroupRegion_ {};
    // The CIDR blocks.
    shared_ptr<vector<string>> ipAddressCidrBlocks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the endpoint group belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the endpoint group.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
