// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISABLEDEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODYDISABLEDROUTEENTRYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISABLEDEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODYDISABLEDROUTEENTRYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(NexthopInstanceId, nexthopInstanceId_);
      DARABONBA_PTR_TO_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(NexthopInstanceId, nexthopInstanceId_);
      DARABONBA_PTR_FROM_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
    };
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList() = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList(const DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList &) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList(DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList &&) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList() = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& operator=(const DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList &) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& operator=(DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidrBlock_ != nullptr
        && this->ecrId_ != nullptr && this->gmtCreate_ != nullptr && this->nexthopInstanceId_ != nullptr && this->nexthopInstanceRegionId_ != nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // nexthopInstanceId Field Functions 
    bool hasNexthopInstanceId() const { return this->nexthopInstanceId_ != nullptr;};
    void deleteNexthopInstanceId() { this->nexthopInstanceId_ = nullptr;};
    inline string nexthopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceId_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& setNexthopInstanceId(string nexthopInstanceId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceId_, nexthopInstanceId) };


    // nexthopInstanceRegionId Field Functions 
    bool hasNexthopInstanceRegionId() const { return this->nexthopInstanceRegionId_ != nullptr;};
    void deleteNexthopInstanceRegionId() { this->nexthopInstanceRegionId_ = nullptr;};
    inline string nexthopInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceRegionId_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList& setNexthopInstanceRegionId(string nexthopInstanceRegionId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceRegionId_, nexthopInstanceRegionId) };


  protected:
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ECR ID.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The time when the route entry was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The ID of the next-hop instance.
    std::shared_ptr<string> nexthopInstanceId_ = nullptr;
    // The region ID of the next-hop instance.
    std::shared_ptr<string> nexthopInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
