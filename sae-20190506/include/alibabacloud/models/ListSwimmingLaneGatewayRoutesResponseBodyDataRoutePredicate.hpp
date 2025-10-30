// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODYDATAROUTEPREDICATE_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODYDATAROUTEPREDICATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate& obj) { 
      DARABONBA_PTR_TO_JSON(PathPredicate, pathPredicate_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate& obj) { 
      DARABONBA_PTR_FROM_JSON(PathPredicate, pathPredicate_);
    };
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate() = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate(const ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate(ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate &&) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate() = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate& operator=(const ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate& operator=(ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pathPredicate_ == nullptr; };
    // pathPredicate Field Functions 
    bool hasPathPredicate() const { return this->pathPredicate_ != nullptr;};
    void deletePathPredicate() { this->pathPredicate_ = nullptr;};
    inline const Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate & pathPredicate() const { DARABONBA_PTR_GET_CONST(pathPredicate_, Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate) };
    inline Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate pathPredicate() { DARABONBA_PTR_GET(pathPredicate_, Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate) };
    inline ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate& setPathPredicate(const Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate & pathPredicate) { DARABONBA_PTR_SET_VALUE(pathPredicate_, pathPredicate) };
    inline ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate& setPathPredicate(Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate && pathPredicate) { DARABONBA_PTR_SET_RVALUE(pathPredicate_, pathPredicate) };


  protected:
    // The path matching rule.
    std::shared_ptr<Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate> pathPredicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
