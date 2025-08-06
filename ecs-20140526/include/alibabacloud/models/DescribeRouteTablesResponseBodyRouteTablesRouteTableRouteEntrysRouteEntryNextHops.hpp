// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYSROUTEENTRYNEXTHOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYSROUTEENTRYNEXTHOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops& obj) { 
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
    };
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops &&) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops& operator=(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops& operator=(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextHop_ != nullptr; };
    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline const vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop> & nextHop() const { DARABONBA_PTR_GET_CONST(nextHop_, vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop>) };
    inline vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop> nextHop() { DARABONBA_PTR_GET(nextHop_, vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop>) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops& setNextHop(const vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop> & nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops& setNextHop(vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop> && nextHop) { DARABONBA_PTR_SET_RVALUE(nextHop_, nextHop) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHopsNextHop>> nextHop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
