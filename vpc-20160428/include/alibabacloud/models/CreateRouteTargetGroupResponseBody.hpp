// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTETARGETGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTETARGETGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteTargetGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteTargetGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTargetGroupId, routeTargetGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteTargetGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTargetGroupId, routeTargetGroupId_);
    };
    CreateRouteTargetGroupResponseBody() = default ;
    CreateRouteTargetGroupResponseBody(const CreateRouteTargetGroupResponseBody &) = default ;
    CreateRouteTargetGroupResponseBody(CreateRouteTargetGroupResponseBody &&) = default ;
    CreateRouteTargetGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteTargetGroupResponseBody() = default ;
    CreateRouteTargetGroupResponseBody& operator=(const CreateRouteTargetGroupResponseBody &) = default ;
    CreateRouteTargetGroupResponseBody& operator=(CreateRouteTargetGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routeTargetGroupId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRouteTargetGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTargetGroupId Field Functions 
    bool hasRouteTargetGroupId() const { return this->routeTargetGroupId_ != nullptr;};
    void deleteRouteTargetGroupId() { this->routeTargetGroupId_ = nullptr;};
    inline string getRouteTargetGroupId() const { DARABONBA_PTR_GET_DEFAULT(routeTargetGroupId_, "") };
    inline CreateRouteTargetGroupResponseBody& setRouteTargetGroupId(string routeTargetGroupId) { DARABONBA_PTR_SET_VALUE(routeTargetGroupId_, routeTargetGroupId) };


  protected:
    // ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the route target group instance.
    shared_ptr<string> routeTargetGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
