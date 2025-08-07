// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels.hpp>
#include <alibabacloud/models/DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBodyItemsNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBodyItemsNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NetworkDescription, networkDescription_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkStatus, networkStatus_);
      DARABONBA_PTR_TO_JSON(NetworkTopology, networkTopology_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBodyItemsNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NetworkDescription, networkDescription_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkStatus, networkStatus_);
      DARABONBA_PTR_FROM_JSON(NetworkTopology, networkTopology_);
    };
    DescribeGlobalDataNetworkListResponseBodyItemsNetworks() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworks(const DescribeGlobalDataNetworkListResponseBodyItemsNetworks &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworks(DescribeGlobalDataNetworkListResponseBodyItemsNetworks &&) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBodyItemsNetworks() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworks& operator=(const DescribeGlobalDataNetworkListResponseBodyItemsNetworks &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworks& operator=(DescribeGlobalDataNetworkListResponseBodyItemsNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr
        && this->createTime_ != nullptr && this->networkDescription_ != nullptr && this->networkId_ != nullptr && this->networkStatus_ != nullptr && this->networkTopology_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels>) };
    inline vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels> channels() { DARABONBA_PTR_GET(channels_, vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels>) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setChannels(const vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setChannels(vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // networkDescription Field Functions 
    bool hasNetworkDescription() const { return this->networkDescription_ != nullptr;};
    void deleteNetworkDescription() { this->networkDescription_ = nullptr;};
    inline string networkDescription() const { DARABONBA_PTR_GET_DEFAULT(networkDescription_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setNetworkDescription(string networkDescription) { DARABONBA_PTR_SET_VALUE(networkDescription_, networkDescription) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkStatus Field Functions 
    bool hasNetworkStatus() const { return this->networkStatus_ != nullptr;};
    void deleteNetworkStatus() { this->networkStatus_ = nullptr;};
    inline string networkStatus() const { DARABONBA_PTR_GET_DEFAULT(networkStatus_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setNetworkStatus(string networkStatus) { DARABONBA_PTR_SET_VALUE(networkStatus_, networkStatus) };


    // networkTopology Field Functions 
    bool hasNetworkTopology() const { return this->networkTopology_ != nullptr;};
    void deleteNetworkTopology() { this->networkTopology_ = nullptr;};
    inline const Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology & networkTopology() const { DARABONBA_PTR_GET_CONST(networkTopology_, Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology) };
    inline Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology networkTopology() { DARABONBA_PTR_GET(networkTopology_, Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setNetworkTopology(const Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology & networkTopology) { DARABONBA_PTR_SET_VALUE(networkTopology_, networkTopology) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworks& setNetworkTopology(Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology && networkTopology) { DARABONBA_PTR_SET_RVALUE(networkTopology_, networkTopology) };


  protected:
    std::shared_ptr<vector<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels>> channels_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> networkDescription_ = nullptr;
    // GDN ID
    std::shared_ptr<string> networkId_ = nullptr;
    std::shared_ptr<string> networkStatus_ = nullptr;
    std::shared_ptr<Models::DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopology> networkTopology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
