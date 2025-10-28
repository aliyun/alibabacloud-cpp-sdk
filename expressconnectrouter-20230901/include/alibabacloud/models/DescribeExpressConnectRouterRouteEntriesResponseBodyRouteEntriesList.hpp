// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODYROUTEENTRIESLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODYROUTEENTRIESLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& obj) { 
      DARABONBA_PTR_TO_JSON(AsPath, asPath_);
      DARABONBA_PTR_TO_JSON(Community, community_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(Med, med_);
      DARABONBA_PTR_TO_JSON(NexthopInstanceId, nexthopInstanceId_);
      DARABONBA_PTR_TO_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
      DARABONBA_PTR_FROM_JSON(Community, community_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(Med, med_);
      DARABONBA_PTR_FROM_JSON(NexthopInstanceId, nexthopInstanceId_);
      DARABONBA_PTR_FROM_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList() = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList(const DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList &) = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList(DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList &&) = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList() = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& operator=(const DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList &) = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& operator=(DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asPath_ == nullptr
        && return this->community_ == nullptr && return this->destinationCidrBlock_ == nullptr && return this->med_ == nullptr && return this->nexthopInstanceId_ == nullptr && return this->nexthopInstanceRegionId_ == nullptr
        && return this->status_ == nullptr; };
    // asPath Field Functions 
    bool hasAsPath() const { return this->asPath_ != nullptr;};
    void deleteAsPath() { this->asPath_ = nullptr;};
    inline string asPath() const { DARABONBA_PTR_GET_DEFAULT(asPath_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setAsPath(string asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };


    // community Field Functions 
    bool hasCommunity() const { return this->community_ != nullptr;};
    void deleteCommunity() { this->community_ = nullptr;};
    inline string community() const { DARABONBA_PTR_GET_DEFAULT(community_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setCommunity(string community) { DARABONBA_PTR_SET_VALUE(community_, community) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // med Field Functions 
    bool hasMed() const { return this->med_ != nullptr;};
    void deleteMed() { this->med_ = nullptr;};
    inline int64_t med() const { DARABONBA_PTR_GET_DEFAULT(med_, 0L) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setMed(int64_t med) { DARABONBA_PTR_SET_VALUE(med_, med) };


    // nexthopInstanceId Field Functions 
    bool hasNexthopInstanceId() const { return this->nexthopInstanceId_ != nullptr;};
    void deleteNexthopInstanceId() { this->nexthopInstanceId_ = nullptr;};
    inline string nexthopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceId_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setNexthopInstanceId(string nexthopInstanceId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceId_, nexthopInstanceId) };


    // nexthopInstanceRegionId Field Functions 
    bool hasNexthopInstanceRegionId() const { return this->nexthopInstanceRegionId_ != nullptr;};
    void deleteNexthopInstanceRegionId() { this->nexthopInstanceRegionId_ = nullptr;};
    inline string nexthopInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceRegionId_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setNexthopInstanceRegionId(string nexthopInstanceRegionId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceRegionId_, nexthopInstanceRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The AS path of the route.
    std::shared_ptr<string> asPath_ = nullptr;
    // The community value that is carried in the BGP route.
    std::shared_ptr<string> community_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The MED value of the BGP route, which is used between the ECR and the transit router.
    // 
    // *   You can set the MED value to 2000. In this case, the transit router and the ECR are used as default paths.
    // *   If a non-default path is used, the MED value is empty.
    // *   You can set the MED value to 2000 only for one object associated with a transit router of a CEN instance.
    std::shared_ptr<int64_t> med_ = nullptr;
    // The ID of the next-hop instance.
    std::shared_ptr<string> nexthopInstanceId_ = nullptr;
    // The region ID of the next-hop instance.
    std::shared_ptr<string> nexthopInstanceRegionId_ = nullptr;
    // The state of the ECR.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
