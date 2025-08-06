// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYSROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYSROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &&) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& operator=(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& operator=(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidrBlock_ != nullptr
        && this->instanceId_ != nullptr && this->nextHopType_ != nullptr && this->nextHops_ != nullptr && this->routeTableId_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // nextHops Field Functions 
    bool hasNextHops() const { return this->nextHops_ != nullptr;};
    void deleteNextHops() { this->nextHops_ = nullptr;};
    inline const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops & nextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops) };
    inline Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops nextHops() { DARABONBA_PTR_GET(nextHops_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setNextHops(const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setNextHops(Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> nextHopType_ = nullptr;
    std::shared_ptr<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops> nextHops_ = nullptr;
    std::shared_ptr<string> routeTableId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
