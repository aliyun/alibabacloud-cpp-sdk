// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Route, route_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Route, route_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRouteResponseBody() = default ;
    GetRouteResponseBody(const GetRouteResponseBody &) = default ;
    GetRouteResponseBody(GetRouteResponseBody &&) = default ;
    GetRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRouteResponseBody() = default ;
    GetRouteResponseBody& operator=(const GetRouteResponseBody &) = default ;
    GetRouteResponseBody& operator=(GetRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Route : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Route& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Route& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      };
      Route() = default ;
      Route(const Route &) = default ;
      Route(Route &&) = default ;
      Route(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Route() = default ;
      Route& operator=(const Route &) = default ;
      Route& operator=(Route &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->destinationCidr_ == nullptr && this->id_ == nullptr && this->networkId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Route& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // destinationCidr Field Functions 
      bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
      void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
      inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
      inline Route& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Route& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline int64_t getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, 0L) };
      inline Route& setNetworkId(int64_t networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Route& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Route& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The time when the route was created. The value is a 64-bit timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The CIDR block of the destination-based route.
      shared_ptr<string> destinationCidr_ {};
      // The route ID.
      shared_ptr<int64_t> id_ {};
      // The network ID.
      shared_ptr<int64_t> networkId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The network resource ID.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->route_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // route Field Functions 
    bool hasRoute() const { return this->route_ != nullptr;};
    void deleteRoute() { this->route_ = nullptr;};
    inline const GetRouteResponseBody::Route & getRoute() const { DARABONBA_PTR_GET_CONST(route_, GetRouteResponseBody::Route) };
    inline GetRouteResponseBody::Route getRoute() { DARABONBA_PTR_GET(route_, GetRouteResponseBody::Route) };
    inline GetRouteResponseBody& setRoute(const GetRouteResponseBody::Route & route) { DARABONBA_PTR_SET_VALUE(route_, route) };
    inline GetRouteResponseBody& setRoute(GetRouteResponseBody::Route && route) { DARABONBA_PTR_SET_RVALUE(route_, route) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRouteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the route.
    shared_ptr<GetRouteResponseBody::Route> route_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
