// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRouteResponseBodyRoute.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->route_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // route Field Functions 
    bool hasRoute() const { return this->route_ != nullptr;};
    void deleteRoute() { this->route_ = nullptr;};
    inline const GetRouteResponseBodyRoute & route() const { DARABONBA_PTR_GET_CONST(route_, GetRouteResponseBodyRoute) };
    inline GetRouteResponseBodyRoute route() { DARABONBA_PTR_GET(route_, GetRouteResponseBodyRoute) };
    inline GetRouteResponseBody& setRoute(const GetRouteResponseBodyRoute & route) { DARABONBA_PTR_SET_VALUE(route_, route) };
    inline GetRouteResponseBody& setRoute(GetRouteResponseBodyRoute && route) { DARABONBA_PTR_SET_RVALUE(route_, route) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRouteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the route.
    std::shared_ptr<GetRouteResponseBodyRoute> route_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
