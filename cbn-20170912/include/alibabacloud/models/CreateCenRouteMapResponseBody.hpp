// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENROUTEMAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECENROUTEMAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenRouteMapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenRouteMapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenRouteMapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
    };
    CreateCenRouteMapResponseBody() = default ;
    CreateCenRouteMapResponseBody(const CreateCenRouteMapResponseBody &) = default ;
    CreateCenRouteMapResponseBody(CreateCenRouteMapResponseBody &&) = default ;
    CreateCenRouteMapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenRouteMapResponseBody() = default ;
    CreateCenRouteMapResponseBody& operator=(const CreateCenRouteMapResponseBody &) = default ;
    CreateCenRouteMapResponseBody& operator=(CreateCenRouteMapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->routeMapId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCenRouteMapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string routeMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline CreateCenRouteMapResponseBody& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the routing policy.
    std::shared_ptr<string> routeMapId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
