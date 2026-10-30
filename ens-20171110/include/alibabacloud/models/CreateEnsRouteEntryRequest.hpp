// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENSROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENSROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEnsRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnsRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnsRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
    };
    CreateEnsRouteEntryRequest() = default ;
    CreateEnsRouteEntryRequest(const CreateEnsRouteEntryRequest &) = default ;
    CreateEnsRouteEntryRequest(CreateEnsRouteEntryRequest &&) = default ;
    CreateEnsRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnsRouteEntryRequest() = default ;
    CreateEnsRouteEntryRequest& operator=(const CreateEnsRouteEntryRequest &) = default ;
    CreateEnsRouteEntryRequest& operator=(CreateEnsRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->routeEntryName_ == nullptr && this->routeTableId_ == nullptr
        && this->sourceCidrBlock_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEnsRouteEntryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateEnsRouteEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline CreateEnsRouteEntryRequest& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline CreateEnsRouteEntryRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string getRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline CreateEnsRouteEntryRequest& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline CreateEnsRouteEntryRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline CreateEnsRouteEntryRequest& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


  protected:
    // The description of the custom route entry.
    shared_ptr<string> description_ {};
    // The destination CIDR block of the custom route entry. The destination CIDR block must meet the following requirements:
    // - The destination CIDR block cannot point to or be included in 100.64.0.0/10.
    // - The destination CIDR blocks of different route entries in the same route table must be unique.
    // - 0.0.0.0/0 specifies the default route.
    // 
    // This parameter is required.
    shared_ptr<string> destinationCidrBlock_ {};
    // The ID of the next hop for the custom route entry.
    // 
    // This parameter is required.
    shared_ptr<string> nextHopId_ {};
    // The type of the next hop for the custom route entry. Valid values:
    // - Instance: ENS instance. This is the default value.
    // - HaVip: HaVip.
    // - NetworkPeer: network peering connection.
    shared_ptr<string> nextHopType_ {};
    // The name of the custom route entry. The name must be 1 to 128 characters in length and cannot start with http:// or https://.
    shared_ptr<string> routeEntryName_ {};
    // The ID of the route table for which you want to create a custom route entry.
    // 
    // This parameter is required.
    shared_ptr<string> routeTableId_ {};
    // The source CIDR block. This parameter is available when you configure a route entry for a gateway route table, but is not supported when you configure a route entry for a vSwitch route table.
    shared_ptr<string> sourceCidrBlock_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
