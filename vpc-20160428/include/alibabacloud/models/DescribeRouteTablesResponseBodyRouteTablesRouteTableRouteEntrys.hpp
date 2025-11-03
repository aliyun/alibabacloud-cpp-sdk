// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntry, routeEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntry, routeEntry_);
    };
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys &&) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys& operator=(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys& operator=(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeEntry_ == nullptr; };
    // routeEntry Field Functions 
    bool hasRouteEntry() const { return this->routeEntry_ != nullptr;};
    void deleteRouteEntry() { this->routeEntry_ = nullptr;};
    inline const vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry> & routeEntry() const { DARABONBA_PTR_GET_CONST(routeEntry_, vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry>) };
    inline vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry> routeEntry() { DARABONBA_PTR_GET(routeEntry_, vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry>) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys& setRouteEntry(const vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry> & routeEntry) { DARABONBA_PTR_SET_VALUE(routeEntry_, routeEntry) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys& setRouteEntry(vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry> && routeEntry) { DARABONBA_PTR_SET_RVALUE(routeEntry_, routeEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry>> routeEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
