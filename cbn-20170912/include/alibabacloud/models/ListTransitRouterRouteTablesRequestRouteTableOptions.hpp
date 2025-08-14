// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESREQUESTROUTETABLEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESREQUESTROUTETABLEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTablesRequestRouteTableOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablesRequestRouteTableOptions& obj) { 
      DARABONBA_PTR_TO_JSON(MultiRegionECMP, multiRegionECMP_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablesRequestRouteTableOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(MultiRegionECMP, multiRegionECMP_);
    };
    ListTransitRouterRouteTablesRequestRouteTableOptions() = default ;
    ListTransitRouterRouteTablesRequestRouteTableOptions(const ListTransitRouterRouteTablesRequestRouteTableOptions &) = default ;
    ListTransitRouterRouteTablesRequestRouteTableOptions(ListTransitRouterRouteTablesRequestRouteTableOptions &&) = default ;
    ListTransitRouterRouteTablesRequestRouteTableOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablesRequestRouteTableOptions() = default ;
    ListTransitRouterRouteTablesRequestRouteTableOptions& operator=(const ListTransitRouterRouteTablesRequestRouteTableOptions &) = default ;
    ListTransitRouterRouteTablesRequestRouteTableOptions& operator=(ListTransitRouterRouteTablesRequestRouteTableOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->multiRegionECMP_ != nullptr; };
    // multiRegionECMP Field Functions 
    bool hasMultiRegionECMP() const { return this->multiRegionECMP_ != nullptr;};
    void deleteMultiRegionECMP() { this->multiRegionECMP_ = nullptr;};
    inline string multiRegionECMP() const { DARABONBA_PTR_GET_DEFAULT(multiRegionECMP_, "") };
    inline ListTransitRouterRouteTablesRequestRouteTableOptions& setMultiRegionECMP(string multiRegionECMP) { DARABONBA_PTR_SET_VALUE(multiRegionECMP_, multiRegionECMP) };


  protected:
    // Specifies whether to enable equal-cost multi-path (ECMP) routing. Valid values:
    // 
    // *   **disable**: disables ECMP routing If you disable ECMP routing, routes that are learned from different regions but have the same prefix and attributes select the transit router with the smallest region ID as the next hop. Region IDs are sorted in alphabetic order. The network latency and bandwidth consumption also vary based on the region. Proceed with caution.
    // *   **enable**: enables ECMP routing. If you enable ECMP routing, routes that are learned from different regions but have the same prefix and attributes form an ECMP route. The network latency and bandwidth consumption also vary based on the region. Proceed with caution.
    std::shared_ptr<string> multiRegionECMP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
