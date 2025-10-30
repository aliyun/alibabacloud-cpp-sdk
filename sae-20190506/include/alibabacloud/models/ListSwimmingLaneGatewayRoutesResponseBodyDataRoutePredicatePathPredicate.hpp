// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODYDATAROUTEPREDICATEPATHPREDICATE_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODYDATAROUTEPREDICATEPATHPREDICATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate() = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate(const ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate(ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate &&) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate() = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate& operator=(const ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate& operator=(ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr
        && return this->type_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicatePathPredicate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The route URL.
    std::shared_ptr<string> path_ = nullptr;
    // The type of the protection rule.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
