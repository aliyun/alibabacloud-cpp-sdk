// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRouteTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRouteTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRouteTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    CreateTransitRouterRouteTableResponseBody() = default ;
    CreateTransitRouterRouteTableResponseBody(const CreateTransitRouterRouteTableResponseBody &) = default ;
    CreateTransitRouterRouteTableResponseBody(CreateTransitRouterRouteTableResponseBody &&) = default ;
    CreateTransitRouterRouteTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRouteTableResponseBody() = default ;
    CreateTransitRouterRouteTableResponseBody& operator=(const CreateTransitRouterRouteTableResponseBody &) = default ;
    CreateTransitRouterRouteTableResponseBody& operator=(CreateTransitRouterRouteTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transitRouterRouteTableId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitRouterRouteTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline CreateTransitRouterRouteTableResponseBody& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the custom route table.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
