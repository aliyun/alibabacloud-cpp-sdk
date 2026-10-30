// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEMAPRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEMAPRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateRouteMapRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteMapRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMapRuleId, routeMapRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteMapRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMapRuleId, routeMapRuleId_);
    };
    CreateRouteMapRuleResponseBody() = default ;
    CreateRouteMapRuleResponseBody(const CreateRouteMapRuleResponseBody &) = default ;
    CreateRouteMapRuleResponseBody(CreateRouteMapRuleResponseBody &&) = default ;
    CreateRouteMapRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteMapRuleResponseBody() = default ;
    CreateRouteMapRuleResponseBody& operator=(const CreateRouteMapRuleResponseBody &) = default ;
    CreateRouteMapRuleResponseBody& operator=(CreateRouteMapRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routeMapRuleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRouteMapRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMapRuleId Field Functions 
    bool hasRouteMapRuleId() const { return this->routeMapRuleId_ != nullptr;};
    void deleteRouteMapRuleId() { this->routeMapRuleId_ = nullptr;};
    inline string getRouteMapRuleId() const { DARABONBA_PTR_GET_DEFAULT(routeMapRuleId_, "") };
    inline CreateRouteMapRuleResponseBody& setRouteMapRuleId(string routeMapRuleId) { DARABONBA_PTR_SET_VALUE(routeMapRuleId_, routeMapRuleId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the route map rule.
    shared_ptr<string> routeMapRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
