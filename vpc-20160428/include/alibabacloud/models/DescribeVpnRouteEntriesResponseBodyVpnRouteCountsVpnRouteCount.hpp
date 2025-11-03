// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTECOUNTSVPNROUTECOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTECOUNTSVPNROUTECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& obj) { 
      DARABONBA_PTR_TO_JSON(RouteCount, routeCount_);
      DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteCount, routeCount_);
      DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount(const DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount(DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount &&) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& operator=(const DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& operator=(DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeCount_ == nullptr
        && return this->routeEntryType_ == nullptr && return this->source_ == nullptr; };
    // routeCount Field Functions 
    bool hasRouteCount() const { return this->routeCount_ != nullptr;};
    void deleteRouteCount() { this->routeCount_ = nullptr;};
    inline int32_t routeCount() const { DARABONBA_PTR_GET_DEFAULT(routeCount_, 0) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& setRouteCount(int32_t routeCount) { DARABONBA_PTR_SET_VALUE(routeCount_, routeCount) };


    // routeEntryType Field Functions 
    bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
    void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
    inline string routeEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteCountsVpnRouteCount& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The number of route entries.
    std::shared_ptr<int32_t> routeCount_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **custom** (default): destination-based route.
    // *   **bgp** : BGP route entry.
    std::shared_ptr<string> routeEntryType_ = nullptr;
    // The source of the BGP route. Valid values:
    // 
    // *   **CLOUD**: advertised from a cloud service associated with the VPN gateway.
    // *   **VPN_BGP**: indicates that the current route is learned by using BGP of the VPN gateway. For example, the BGP is used to learn the route of the on-premises data center.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
