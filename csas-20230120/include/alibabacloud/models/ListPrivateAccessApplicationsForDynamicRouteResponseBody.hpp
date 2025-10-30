// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessApplicationsForDynamicRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessApplicationsForDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessApplicationsForDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateAccessApplicationsForDynamicRouteResponseBody() = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBody(const ListPrivateAccessApplicationsForDynamicRouteResponseBody &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBody(ListPrivateAccessApplicationsForDynamicRouteResponseBody &&) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBody() = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBody& operator=(const ListPrivateAccessApplicationsForDynamicRouteResponseBody &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBody& operator=(ListPrivateAccessApplicationsForDynamicRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRoutes_ == nullptr
        && return this->requestId_ == nullptr; };
    // dynamicRoutes Field Functions 
    bool hasDynamicRoutes() const { return this->dynamicRoutes_ != nullptr;};
    void deleteDynamicRoutes() { this->dynamicRoutes_ = nullptr;};
    inline const vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes> & dynamicRoutes() const { DARABONBA_PTR_GET_CONST(dynamicRoutes_, vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes>) };
    inline vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes> dynamicRoutes() { DARABONBA_PTR_GET(dynamicRoutes_, vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes>) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBody& setDynamicRoutes(const vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes> & dynamicRoutes) { DARABONBA_PTR_SET_VALUE(dynamicRoutes_, dynamicRoutes) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBody& setDynamicRoutes(vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes> && dynamicRoutes) { DARABONBA_PTR_SET_RVALUE(dynamicRoutes_, dynamicRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes>> dynamicRoutes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
