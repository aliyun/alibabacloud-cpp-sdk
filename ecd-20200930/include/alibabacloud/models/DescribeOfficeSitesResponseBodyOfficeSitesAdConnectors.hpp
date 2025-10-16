// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITESADCONNECTORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITESADCONNECTORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesResponseBodyOfficeSitesADConnectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& obj) { 
      DARABONBA_PTR_TO_JSON(ADConnectorAddress, ADConnectorAddress_);
      DARABONBA_PTR_TO_JSON(ConnectorStatus, connectorStatus_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(TrustKey, trustKey_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& obj) { 
      DARABONBA_PTR_FROM_JSON(ADConnectorAddress, ADConnectorAddress_);
      DARABONBA_PTR_FROM_JSON(ConnectorStatus, connectorStatus_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(TrustKey, trustKey_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeOfficeSitesResponseBodyOfficeSitesADConnectors() = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesADConnectors(const DescribeOfficeSitesResponseBodyOfficeSitesADConnectors &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesADConnectors(DescribeOfficeSitesResponseBodyOfficeSitesADConnectors &&) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesADConnectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBodyOfficeSitesADConnectors() = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& operator=(const DescribeOfficeSitesResponseBodyOfficeSitesADConnectors &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& operator=(DescribeOfficeSitesResponseBodyOfficeSitesADConnectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ADConnectorAddress_ == nullptr
        && return this->connectorStatus_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->specification_ == nullptr && return this->trustKey_ == nullptr && return this->vSwitchId_ == nullptr; };
    // ADConnectorAddress Field Functions 
    bool hasADConnectorAddress() const { return this->ADConnectorAddress_ != nullptr;};
    void deleteADConnectorAddress() { this->ADConnectorAddress_ = nullptr;};
    inline string ADConnectorAddress() const { DARABONBA_PTR_GET_DEFAULT(ADConnectorAddress_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& setADConnectorAddress(string ADConnectorAddress) { DARABONBA_PTR_SET_VALUE(ADConnectorAddress_, ADConnectorAddress) };


    // connectorStatus Field Functions 
    bool hasConnectorStatus() const { return this->connectorStatus_ != nullptr;};
    void deleteConnectorStatus() { this->connectorStatus_ = nullptr;};
    inline string connectorStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorStatus_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& setConnectorStatus(string connectorStatus) { DARABONBA_PTR_SET_VALUE(connectorStatus_, connectorStatus) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // trustKey Field Functions 
    bool hasTrustKey() const { return this->trustKey_ != nullptr;};
    void deleteTrustKey() { this->trustKey_ = nullptr;};
    inline string trustKey() const { DARABONBA_PTR_GET_DEFAULT(trustKey_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& setTrustKey(string trustKey) { DARABONBA_PTR_SET_VALUE(trustKey_, trustKey) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesADConnectors& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The connection address of the AD connector.
    std::shared_ptr<string> ADConnectorAddress_ = nullptr;
    // The status of the AD connector.
    // 
    // Valid values:
    // 
    // *   CONNECT_ERROR
    // *   RUNNING
    // *   CONNECTING (You must configure the AD domain in which the AD connector is used.)
    // *   EXPIRED
    // *   CREATING
    std::shared_ptr<string> connectorStatus_ = nullptr;
    // The ID of an elastic network interface (ENI) to which the AD connector is mounted.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The AD connector type.
    // 
    // Valid values:
    // 
    // *   1: General
    // *   2: Advanced
    std::shared_ptr<string> specification_ = nullptr;
    // The trust password that is specified when you configure the AD trust relationship.
    std::shared_ptr<string> trustKey_ = nullptr;
    // The ID of the vSwitch that resides in the network of the AD connector.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
