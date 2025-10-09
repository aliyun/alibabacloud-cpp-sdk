// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTERESPONSEBODYROUTE_HPP_
#define ALIBABACLOUD_MODELS_GETROUTERESPONSEBODYROUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRouteResponseBodyRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRouteResponseBodyRoute& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRouteResponseBodyRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    GetRouteResponseBodyRoute() = default ;
    GetRouteResponseBodyRoute(const GetRouteResponseBodyRoute &) = default ;
    GetRouteResponseBodyRoute(GetRouteResponseBodyRoute &&) = default ;
    GetRouteResponseBodyRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRouteResponseBodyRoute() = default ;
    GetRouteResponseBodyRoute& operator=(const GetRouteResponseBodyRoute &) = default ;
    GetRouteResponseBodyRoute& operator=(GetRouteResponseBodyRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->destinationCidr_ != nullptr && this->id_ != nullptr && this->networkId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetRouteResponseBodyRoute& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string destinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline GetRouteResponseBodyRoute& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetRouteResponseBodyRoute& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline int64_t networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, 0L) };
    inline GetRouteResponseBodyRoute& setNetworkId(int64_t networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRouteResponseBodyRoute& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetRouteResponseBodyRoute& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The time when the route was created. The value is a 64-bit timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The CIDR block of the destination-based route.
    std::shared_ptr<string> destinationCidr_ = nullptr;
    // The route ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The network ID.
    std::shared_ptr<int64_t> networkId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The network resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
