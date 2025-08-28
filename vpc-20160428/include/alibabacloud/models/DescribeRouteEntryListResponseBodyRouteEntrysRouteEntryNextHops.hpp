// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYSROUTEENTRYNEXTHOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYSROUTEENTRYNEXTHOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops& obj) { 
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
    };
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops(const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops(DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops &&) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops& operator=(const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops& operator=(DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextHop_ != nullptr; };
    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline const vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop> & nextHop() const { DARABONBA_PTR_GET_CONST(nextHop_, vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop>) };
    inline vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop> nextHop() { DARABONBA_PTR_GET(nextHop_, vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop>) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops& setNextHop(const vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop> & nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops& setNextHop(vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop> && nextHop) { DARABONBA_PTR_SET_RVALUE(nextHop_, nextHop) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop>> nextHop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
