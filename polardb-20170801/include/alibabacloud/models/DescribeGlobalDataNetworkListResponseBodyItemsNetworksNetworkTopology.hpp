// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSNETWORKTOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSNETWORKTOPOLOGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations.hpp>
#include <alibabacloud/models/DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& obj) { 
      DARABONBA_PTR_TO_JSON(Destinations, destinations_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology(DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology &&) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& operator=(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& operator=(DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinations_ != nullptr
        && this->sources_ != nullptr; };
    // destinations Field Functions 
    bool hasDestinations() const { return this->destinations_ != nullptr;};
    void deleteDestinations() { this->destinations_ = nullptr;};
    inline const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations> & destinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations>) };
    inline vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations> destinations() { DARABONBA_PTR_GET(destinations_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations>) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& setDestinations(const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& setDestinations(vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources>) };
    inline vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources> sources() { DARABONBA_PTR_GET(sources_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources>) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& setSources(const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology& setSources(vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


  protected:
    std::shared_ptr<vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations>> destinations_ = nullptr;
    std::shared_ptr<vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources>> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
