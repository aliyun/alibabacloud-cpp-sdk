// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteEntryListResponseBodyRouteEntriesNextHops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRouteEntryListResponseBodyRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBodyRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBodyRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRouteEntryListResponseBodyRouteEntries() = default ;
    DescribeRouteEntryListResponseBodyRouteEntries(const DescribeRouteEntryListResponseBodyRouteEntries &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntries(DescribeRouteEntryListResponseBodyRouteEntries &&) = default ;
    DescribeRouteEntryListResponseBodyRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBodyRouteEntries() = default ;
    DescribeRouteEntryListResponseBodyRouteEntries& operator=(const DescribeRouteEntryListResponseBodyRouteEntries &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntries& operator=(DescribeRouteEntryListResponseBodyRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->ipVersion_ == nullptr && return this->nextHops_ == nullptr && return this->routeEntryId_ == nullptr && return this->routeEntryName_ == nullptr
        && return this->routeTableId_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // nextHops Field Functions 
    bool hasNextHops() const { return this->nextHops_ != nullptr;};
    void deleteNextHops() { this->nextHops_ = nullptr;};
    inline const vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops> & nextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops>) };
    inline vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops> nextHops() { DARABONBA_PTR_GET(nextHops_, vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops>) };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setNextHops(const vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops> & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setNextHops(vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops> && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string routeEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    std::shared_ptr<string> ipVersion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRouteEntryListResponseBodyRouteEntriesNextHops>> nextHops_ = nullptr;
    std::shared_ptr<string> routeEntryId_ = nullptr;
    std::shared_ptr<string> routeEntryName_ = nullptr;
    std::shared_ptr<string> routeTableId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
