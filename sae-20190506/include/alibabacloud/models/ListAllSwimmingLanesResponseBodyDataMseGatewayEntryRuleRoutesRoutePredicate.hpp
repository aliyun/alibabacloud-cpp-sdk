// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAMSEGATEWAYENTRYRULEROUTESROUTEPREDICATE_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAMSEGATEWAYENTRYRULEROUTESROUTEPREDICATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& obj) { 
      DARABONBA_PTR_TO_JSON(PathPredicate, pathPredicate_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& obj) { 
      DARABONBA_PTR_FROM_JSON(PathPredicate, pathPredicate_);
    };
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate() = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate(const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate(ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &&) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate() = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& operator=(const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& operator=(ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pathPredicate_ != nullptr; };
    // pathPredicate Field Functions 
    bool hasPathPredicate() const { return this->pathPredicate_ != nullptr;};
    void deletePathPredicate() { this->pathPredicate_ = nullptr;};
    inline const Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate & pathPredicate() const { DARABONBA_PTR_GET_CONST(pathPredicate_, Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate) };
    inline Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate pathPredicate() { DARABONBA_PTR_GET(pathPredicate_, Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate) };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& setPathPredicate(const Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate & pathPredicate) { DARABONBA_PTR_SET_VALUE(pathPredicate_, pathPredicate) };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& setPathPredicate(Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate && pathPredicate) { DARABONBA_PTR_SET_RVALUE(pathPredicate_, pathPredicate) };


  protected:
    std::shared_ptr<Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate> pathPredicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
