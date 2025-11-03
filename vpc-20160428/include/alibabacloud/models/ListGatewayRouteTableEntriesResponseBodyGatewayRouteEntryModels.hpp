// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTETABLEENTRIESRESPONSEBODYGATEWAYROUTEENTRYMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTETABLEENTRIESRESPONSEBODYGATEWAYROUTEENTRYMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels() = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels(const ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels &) = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels(ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels &&) = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels() = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& operator=(const ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels &) = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& operator=(ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->name_ == nullptr && return this->nextHopId_ == nullptr && return this->nextHopType_ == nullptr && return this->nextHops_ == nullptr
        && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // nextHops Field Functions 
    bool hasNextHops() const { return this->nextHops_ != nullptr;};
    void deleteNextHops() { this->nextHops_ = nullptr;};
    inline const vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops> & nextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops>) };
    inline vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops> nextHops() { DARABONBA_PTR_GET(nextHops_, vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops>) };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setNextHops(const vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops> & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setNextHops(vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops> && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the route entry.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The name of the route entry.
    // 
    // The name must be 2 to 128 characters in length and can contain letter, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the next hop.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **EcsInstance**: Elastic Compute Service (ECS) instance
    // *   **NetworkInterface**: elastic network interfaces (ENIs).
    // *   **Local**: local next hop
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The information about the next hop.
    std::shared_ptr<vector<Models::ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops>> nextHops_ = nullptr;
    // The status of the route entry. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
