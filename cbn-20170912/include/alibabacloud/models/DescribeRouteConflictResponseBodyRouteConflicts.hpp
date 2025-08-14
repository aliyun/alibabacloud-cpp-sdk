// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTRESPONSEBODYROUTECONFLICTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTRESPONSEBODYROUTECONFLICTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteConflictResponseBodyRouteConflictsRouteConflict.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteConflictResponseBodyRouteConflicts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteConflictResponseBodyRouteConflicts& obj) { 
      DARABONBA_PTR_TO_JSON(RouteConflict, routeConflict_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteConflictResponseBodyRouteConflicts& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteConflict, routeConflict_);
    };
    DescribeRouteConflictResponseBodyRouteConflicts() = default ;
    DescribeRouteConflictResponseBodyRouteConflicts(const DescribeRouteConflictResponseBodyRouteConflicts &) = default ;
    DescribeRouteConflictResponseBodyRouteConflicts(DescribeRouteConflictResponseBodyRouteConflicts &&) = default ;
    DescribeRouteConflictResponseBodyRouteConflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteConflictResponseBodyRouteConflicts() = default ;
    DescribeRouteConflictResponseBodyRouteConflicts& operator=(const DescribeRouteConflictResponseBodyRouteConflicts &) = default ;
    DescribeRouteConflictResponseBodyRouteConflicts& operator=(DescribeRouteConflictResponseBodyRouteConflicts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeConflict_ != nullptr; };
    // routeConflict Field Functions 
    bool hasRouteConflict() const { return this->routeConflict_ != nullptr;};
    void deleteRouteConflict() { this->routeConflict_ = nullptr;};
    inline const vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict> & routeConflict() const { DARABONBA_PTR_GET_CONST(routeConflict_, vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict>) };
    inline vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict> routeConflict() { DARABONBA_PTR_GET(routeConflict_, vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict>) };
    inline DescribeRouteConflictResponseBodyRouteConflicts& setRouteConflict(const vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict> & routeConflict) { DARABONBA_PTR_SET_VALUE(routeConflict_, routeConflict) };
    inline DescribeRouteConflictResponseBodyRouteConflicts& setRouteConflict(vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict> && routeConflict) { DARABONBA_PTR_SET_RVALUE(routeConflict_, routeConflict) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteConflictResponseBodyRouteConflictsRouteConflict>> routeConflict_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
