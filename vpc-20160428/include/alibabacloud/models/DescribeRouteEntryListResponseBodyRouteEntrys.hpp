// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListResponseBodyRouteEntrys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBodyRouteEntrys& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntry, routeEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBodyRouteEntrys& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntry, routeEntry_);
    };
    DescribeRouteEntryListResponseBodyRouteEntrys() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrys(const DescribeRouteEntryListResponseBodyRouteEntrys &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrys(DescribeRouteEntryListResponseBodyRouteEntrys &&) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBodyRouteEntrys() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrys& operator=(const DescribeRouteEntryListResponseBodyRouteEntrys &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrys& operator=(DescribeRouteEntryListResponseBodyRouteEntrys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeEntry_ == nullptr; };
    // routeEntry Field Functions 
    bool hasRouteEntry() const { return this->routeEntry_ != nullptr;};
    void deleteRouteEntry() { this->routeEntry_ = nullptr;};
    inline const vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry> & routeEntry() const { DARABONBA_PTR_GET_CONST(routeEntry_, vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry>) };
    inline vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry> routeEntry() { DARABONBA_PTR_GET(routeEntry_, vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry>) };
    inline DescribeRouteEntryListResponseBodyRouteEntrys& setRouteEntry(const vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry> & routeEntry) { DARABONBA_PTR_SET_VALUE(routeEntry_, routeEntry) };
    inline DescribeRouteEntryListResponseBodyRouteEntrys& setRouteEntry(vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry> && routeEntry) { DARABONBA_PTR_SET_RVALUE(routeEntry_, routeEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry>> routeEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
