// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSNETWORKTOPOLOGYDESTINATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSNETWORKTOPOLOGYDESTINATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationFileSystemPath, destinationFileSystemPath_);
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationFileSystemPath, destinationFileSystemPath_);
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
    };
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations(DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations &&) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& operator=(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& operator=(DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationFileSystemPath_ == nullptr
        && return this->destinationId_ == nullptr && return this->destinationRegion_ == nullptr && return this->destinationType_ == nullptr; };
    // destinationFileSystemPath Field Functions 
    bool hasDestinationFileSystemPath() const { return this->destinationFileSystemPath_ != nullptr;};
    void deleteDestinationFileSystemPath() { this->destinationFileSystemPath_ = nullptr;};
    inline string destinationFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(destinationFileSystemPath_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& setDestinationFileSystemPath(string destinationFileSystemPath) { DARABONBA_PTR_SET_VALUE(destinationFileSystemPath_, destinationFileSystemPath) };


    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string destinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string destinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string destinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologyDestinations& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


  protected:
    std::shared_ptr<string> destinationFileSystemPath_ = nullptr;
    std::shared_ptr<string> destinationId_ = nullptr;
    std::shared_ptr<string> destinationRegion_ = nullptr;
    std::shared_ptr<string> destinationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
