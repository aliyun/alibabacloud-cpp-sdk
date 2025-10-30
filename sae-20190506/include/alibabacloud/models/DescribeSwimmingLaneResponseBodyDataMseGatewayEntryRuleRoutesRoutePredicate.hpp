// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAMSEGATEWAYENTRYRULEROUTESROUTEPREDICATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAMSEGATEWAYENTRYRULEROUTESROUTEPREDICATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& obj) { 
      DARABONBA_PTR_TO_JSON(PathPredicate, pathPredicate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& obj) { 
      DARABONBA_PTR_FROM_JSON(PathPredicate, pathPredicate_);
    };
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate() = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate(const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate(DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &&) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate() = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& operator=(const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& operator=(DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pathPredicate_ == nullptr; };
    // pathPredicate Field Functions 
    bool hasPathPredicate() const { return this->pathPredicate_ != nullptr;};
    void deletePathPredicate() { this->pathPredicate_ = nullptr;};
    inline const Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate & pathPredicate() const { DARABONBA_PTR_GET_CONST(pathPredicate_, Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate) };
    inline Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate pathPredicate() { DARABONBA_PTR_GET(pathPredicate_, Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& setPathPredicate(const Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate & pathPredicate) { DARABONBA_PTR_SET_VALUE(pathPredicate_, pathPredicate) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate& setPathPredicate(Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate && pathPredicate) { DARABONBA_PTR_SET_RVALUE(pathPredicate_, pathPredicate) };


  protected:
    // The path matching rule.
    std::shared_ptr<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicatePathPredicate> pathPredicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
