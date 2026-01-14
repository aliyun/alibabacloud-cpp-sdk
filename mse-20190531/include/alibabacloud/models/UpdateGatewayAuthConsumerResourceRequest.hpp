// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayAuthConsumerResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    UpdateGatewayAuthConsumerResourceRequest() = default ;
    UpdateGatewayAuthConsumerResourceRequest(const UpdateGatewayAuthConsumerResourceRequest &) = default ;
    UpdateGatewayAuthConsumerResourceRequest(UpdateGatewayAuthConsumerResourceRequest &&) = default ;
    UpdateGatewayAuthConsumerResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayAuthConsumerResourceRequest() = default ;
    UpdateGatewayAuthConsumerResourceRequest& operator=(const UpdateGatewayAuthConsumerResourceRequest &) = default ;
    UpdateGatewayAuthConsumerResourceRequest& operator=(UpdateGatewayAuthConsumerResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(RouteId, routeId_);
        DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
        DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      };
      ResourceList() = default ;
      ResourceList(const ResourceList &) = default ;
      ResourceList(ResourceList &&) = default ;
      ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceList() = default ;
      ResourceList& operator=(const ResourceList &) = default ;
      ResourceList& operator=(ResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->routeId_ == nullptr
        && this->routeName_ == nullptr; };
      // routeId Field Functions 
      bool hasRouteId() const { return this->routeId_ != nullptr;};
      void deleteRouteId() { this->routeId_ = nullptr;};
      inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
      inline ResourceList& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


      // routeName Field Functions 
      bool hasRouteName() const { return this->routeName_ != nullptr;};
      void deleteRouteName() { this->routeName_ = nullptr;};
      inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
      inline ResourceList& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    protected:
      // The route ID.
      shared_ptr<int64_t> routeId_ {};
      // The name of the route.
      shared_ptr<string> routeName_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->consumerId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->resourceList_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayAuthConsumerResourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline int64_t getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
    inline UpdateGatewayAuthConsumerResourceRequest& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayAuthConsumerResourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList>) };
    inline vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList>) };
    inline UpdateGatewayAuthConsumerResourceRequest& setResourceList(const vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline UpdateGatewayAuthConsumerResourceRequest& setResourceList(vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The gateway authentication consumer ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> consumerId_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // The gateway authentication consumer ID.
    shared_ptr<vector<UpdateGatewayAuthConsumerResourceRequest::ResourceList>> resourceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
