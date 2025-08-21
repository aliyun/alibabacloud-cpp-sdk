// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODYROUTEENTRYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODYROUTEENTRYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRouteEntryListResponseBodyRouteEntrys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteEntryListResponseBodyRouteEntrys& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteEntryListResponseBodyRouteEntrys& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeEnsRouteEntryListResponseBodyRouteEntrys() = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrys(const DescribeEnsRouteEntryListResponseBodyRouteEntrys &) = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrys(DescribeEnsRouteEntryListResponseBodyRouteEntrys &&) = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteEntryListResponseBodyRouteEntrys() = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrys& operator=(const DescribeEnsRouteEntryListResponseBodyRouteEntrys &) = default ;
    DescribeEnsRouteEntryListResponseBodyRouteEntrys& operator=(DescribeEnsRouteEntryListResponseBodyRouteEntrys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->destinationCidrBlock_ != nullptr && this->nextHops_ != nullptr && this->routeEntryId_ != nullptr && this->routeEntryName_ != nullptr
        && this->routeTableId_ != nullptr && this->sourceCidrBlock_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHops Field Functions 
    bool hasNextHops() const { return this->nextHops_ != nullptr;};
    void deleteNextHops() { this->nextHops_ = nullptr;};
    inline const vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops> & nextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops>) };
    inline vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops> nextHops() { DARABONBA_PTR_GET(nextHops_, vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops>) };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setNextHops(const vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops> & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setNextHops(vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops> && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string routeEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string sourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEnsRouteEntryListResponseBodyRouteEntrys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the IP address was created. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Enter a description for the route.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The information about the next hop.
    std::shared_ptr<vector<Models::DescribeEnsRouteEntryListResponseBodyRouteEntrysNextHops>> nextHops_ = nullptr;
    // The ID of the route.
    std::shared_ptr<string> routeEntryId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeEntryName_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The source CIDR block. This field is used when you configure a route entry in the gateway route table. This field is not supported in the vSwitch route table.
    std::shared_ptr<string> sourceCidrBlock_ = nullptr;
    // The status of the route entry. Valid values:
    std::shared_ptr<string> status_ = nullptr;
    // The type of the route entry.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
