// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
    };
    CreateTransitRouterRouteEntryResponseBody() = default ;
    CreateTransitRouterRouteEntryResponseBody(const CreateTransitRouterRouteEntryResponseBody &) = default ;
    CreateTransitRouterRouteEntryResponseBody(CreateTransitRouterRouteEntryResponseBody &&) = default ;
    CreateTransitRouterRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRouteEntryResponseBody() = default ;
    CreateTransitRouterRouteEntryResponseBody& operator=(const CreateTransitRouterRouteEntryResponseBody &) = default ;
    CreateTransitRouterRouteEntryResponseBody& operator=(CreateTransitRouterRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transitRouterRouteEntryId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitRouterRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterRouteEntryId Field Functions 
    bool hasTransitRouterRouteEntryId() const { return this->transitRouterRouteEntryId_ != nullptr;};
    void deleteTransitRouterRouteEntryId() { this->transitRouterRouteEntryId_ = nullptr;};
    inline string transitRouterRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryId_, "") };
    inline CreateTransitRouterRouteEntryResponseBody& setTransitRouterRouteEntryId(string transitRouterRouteEntryId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryId_, transitRouterRouteEntryId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the route.
    std::shared_ptr<string> transitRouterRouteEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
