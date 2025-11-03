// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODYROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODYROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcPublishedRouteEntriesResponseBodyRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPublishedRouteEntriesResponseBodyRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RoutePublishTargets, routePublishTargets_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPublishedRouteEntriesResponseBodyRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RoutePublishTargets, routePublishTargets_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    ListVpcPublishedRouteEntriesResponseBodyRouteEntries() = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntries(const ListVpcPublishedRouteEntriesResponseBodyRouteEntries &) = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntries(ListVpcPublishedRouteEntriesResponseBodyRouteEntries &&) = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPublishedRouteEntriesResponseBodyRouteEntries() = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntries& operator=(const ListVpcPublishedRouteEntriesResponseBodyRouteEntries &) = default ;
    ListVpcPublishedRouteEntriesResponseBodyRouteEntries& operator=(ListVpcPublishedRouteEntriesResponseBodyRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && return this->routeEntryId_ == nullptr && return this->routePublishTargets_ == nullptr && return this->routeTableId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntries& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routePublishTargets Field Functions 
    bool hasRoutePublishTargets() const { return this->routePublishTargets_ != nullptr;};
    void deleteRoutePublishTargets() { this->routePublishTargets_ = nullptr;};
    inline const vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets> & routePublishTargets() const { DARABONBA_PTR_GET_CONST(routePublishTargets_, vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets>) };
    inline vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets> routePublishTargets() { DARABONBA_PTR_GET(routePublishTargets_, vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets>) };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntries& setRoutePublishTargets(const vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets> & routePublishTargets) { DARABONBA_PTR_SET_VALUE(routePublishTargets_, routePublishTargets) };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntries& setRoutePublishTargets(vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets> && routePublishTargets) { DARABONBA_PTR_SET_RVALUE(routePublishTargets_, routePublishTargets) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline ListVpcPublishedRouteEntriesResponseBodyRouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The destination CIDR block of the route entry.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the route entry.
    std::shared_ptr<string> routeEntryId_ = nullptr;
    // List of route entry publishing status information in the publishing targets.
    std::shared_ptr<vector<Models::ListVpcPublishedRouteEntriesResponseBodyRouteEntriesRoutePublishTargets>> routePublishTargets_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
