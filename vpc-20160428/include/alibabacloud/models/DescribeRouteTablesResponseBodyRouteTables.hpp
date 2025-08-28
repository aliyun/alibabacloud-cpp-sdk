// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTablesResponseBodyRouteTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTables& obj) { 
      DARABONBA_PTR_TO_JSON(RouteTable, routeTable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTables& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteTable, routeTable_);
    };
    DescribeRouteTablesResponseBodyRouteTables() = default ;
    DescribeRouteTablesResponseBodyRouteTables(const DescribeRouteTablesResponseBodyRouteTables &) = default ;
    DescribeRouteTablesResponseBodyRouteTables(DescribeRouteTablesResponseBodyRouteTables &&) = default ;
    DescribeRouteTablesResponseBodyRouteTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTables() = default ;
    DescribeRouteTablesResponseBodyRouteTables& operator=(const DescribeRouteTablesResponseBodyRouteTables &) = default ;
    DescribeRouteTablesResponseBodyRouteTables& operator=(DescribeRouteTablesResponseBodyRouteTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeTable_ != nullptr; };
    // routeTable Field Functions 
    bool hasRouteTable() const { return this->routeTable_ != nullptr;};
    void deleteRouteTable() { this->routeTable_ = nullptr;};
    inline const vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable> & routeTable() const { DARABONBA_PTR_GET_CONST(routeTable_, vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable>) };
    inline vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable> routeTable() { DARABONBA_PTR_GET(routeTable_, vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable>) };
    inline DescribeRouteTablesResponseBodyRouteTables& setRouteTable(const vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable> & routeTable) { DARABONBA_PTR_SET_VALUE(routeTable_, routeTable) };
    inline DescribeRouteTablesResponseBodyRouteTables& setRouteTable(vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable> && routeTable) { DARABONBA_PTR_SET_RVALUE(routeTable_, routeTable) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTable>> routeTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
