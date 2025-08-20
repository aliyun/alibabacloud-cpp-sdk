// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDynamicRouteResponseBodyDynamicRoute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDynamicRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRoute, dynamicRoute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRoute, dynamicRoute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDynamicRouteResponseBody() = default ;
    GetDynamicRouteResponseBody(const GetDynamicRouteResponseBody &) = default ;
    GetDynamicRouteResponseBody(GetDynamicRouteResponseBody &&) = default ;
    GetDynamicRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicRouteResponseBody() = default ;
    GetDynamicRouteResponseBody& operator=(const GetDynamicRouteResponseBody &) = default ;
    GetDynamicRouteResponseBody& operator=(GetDynamicRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicRoute_ != nullptr
        && this->requestId_ != nullptr; };
    // dynamicRoute Field Functions 
    bool hasDynamicRoute() const { return this->dynamicRoute_ != nullptr;};
    void deleteDynamicRoute() { this->dynamicRoute_ = nullptr;};
    inline const GetDynamicRouteResponseBodyDynamicRoute & dynamicRoute() const { DARABONBA_PTR_GET_CONST(dynamicRoute_, GetDynamicRouteResponseBodyDynamicRoute) };
    inline GetDynamicRouteResponseBodyDynamicRoute dynamicRoute() { DARABONBA_PTR_GET(dynamicRoute_, GetDynamicRouteResponseBodyDynamicRoute) };
    inline GetDynamicRouteResponseBody& setDynamicRoute(const GetDynamicRouteResponseBodyDynamicRoute & dynamicRoute) { DARABONBA_PTR_SET_VALUE(dynamicRoute_, dynamicRoute) };
    inline GetDynamicRouteResponseBody& setDynamicRoute(GetDynamicRouteResponseBodyDynamicRoute && dynamicRoute) { DARABONBA_PTR_SET_RVALUE(dynamicRoute_, dynamicRoute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDynamicRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetDynamicRouteResponseBodyDynamicRoute> dynamicRoute_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
