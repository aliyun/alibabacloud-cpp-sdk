// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHVPCROUTEENTRIESREQUESTROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHVPCROUTEENTRIESREQUESTROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class PublishVpcRouteEntriesRequestRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishVpcRouteEntriesRequestRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishVpcRouteEntriesRequestRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    PublishVpcRouteEntriesRequestRouteEntries() = default ;
    PublishVpcRouteEntriesRequestRouteEntries(const PublishVpcRouteEntriesRequestRouteEntries &) = default ;
    PublishVpcRouteEntriesRequestRouteEntries(PublishVpcRouteEntriesRequestRouteEntries &&) = default ;
    PublishVpcRouteEntriesRequestRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishVpcRouteEntriesRequestRouteEntries() = default ;
    PublishVpcRouteEntriesRequestRouteEntries& operator=(const PublishVpcRouteEntriesRequestRouteEntries &) = default ;
    PublishVpcRouteEntriesRequestRouteEntries& operator=(PublishVpcRouteEntriesRequestRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && return this->routeTableId_ == nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline PublishVpcRouteEntriesRequestRouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline PublishVpcRouteEntriesRequestRouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The destination CIDR block for the route entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the route table for the route entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
