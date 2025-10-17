// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSZONALRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSZONALRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEndpointsZonalResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEndpointsZonalResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(NodeWithRoles, nodeWithRoles_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_TO_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEndpointsZonalResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(NodeWithRoles, nodeWithRoles_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_FROM_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
    };
    DescribeDBClusterEndpointsZonalResponseBodyItems() = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItems(const DescribeDBClusterEndpointsZonalResponseBodyItems &) = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItems(DescribeDBClusterEndpointsZonalResponseBodyItems &&) = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEndpointsZonalResponseBodyItems() = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItems& operator=(const DescribeDBClusterEndpointsZonalResponseBodyItems &) = default ;
    DescribeDBClusterEndpointsZonalResponseBodyItems& operator=(DescribeDBClusterEndpointsZonalResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressItems_ == nullptr
        && return this->autoAddNewNodes_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBEndpointDescription_ == nullptr && return this->DBEndpointId_ == nullptr && return this->endpointConfig_ == nullptr
        && return this->endpointType_ == nullptr && return this->nodeWithRoles_ == nullptr && return this->nodes_ == nullptr && return this->polarSccTimeoutAction_ == nullptr && return this->polarSccWaitTimeout_ == nullptr
        && return this->readWriteMode_ == nullptr && return this->sccMode_ == nullptr; };
    // addressItems Field Functions 
    bool hasAddressItems() const { return this->addressItems_ != nullptr;};
    void deleteAddressItems() { this->addressItems_ = nullptr;};
    inline const vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems> & addressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems>) };
    inline vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems> addressItems() { DARABONBA_PTR_GET(addressItems_, vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems>) };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setAddressItems(const vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setAddressItems(vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string autoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string DBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string DBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string endpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // nodeWithRoles Field Functions 
    bool hasNodeWithRoles() const { return this->nodeWithRoles_ != nullptr;};
    void deleteNodeWithRoles() { this->nodeWithRoles_ = nullptr;};
    inline string nodeWithRoles() const { DARABONBA_PTR_GET_DEFAULT(nodeWithRoles_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setNodeWithRoles(string nodeWithRoles) { DARABONBA_PTR_SET_VALUE(nodeWithRoles_, nodeWithRoles) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string nodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string polarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string polarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string readWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string sccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBodyItems& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterEndpointsZonalResponseBodyItemsAddressItems>> addressItems_ = nullptr;
    std::shared_ptr<string> autoAddNewNodes_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> DBEndpointDescription_ = nullptr;
    std::shared_ptr<string> DBEndpointId_ = nullptr;
    std::shared_ptr<string> endpointConfig_ = nullptr;
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<string> nodeWithRoles_ = nullptr;
    std::shared_ptr<string> nodes_ = nullptr;
    std::shared_ptr<string> polarSccTimeoutAction_ = nullptr;
    std::shared_ptr<string> polarSccWaitTimeout_ = nullptr;
    std::shared_ptr<string> readWriteMode_ = nullptr;
    std::shared_ptr<string> sccMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
