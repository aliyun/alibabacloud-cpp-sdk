// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONROUTETABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONROUTETABLEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRouteTableId, destinationRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRouteTableId, destinationRouteTableId_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRouteTableId_ != nullptr; };
    // destinationRouteTableId Field Functions 
    bool hasDestinationRouteTableId() const { return this->destinationRouteTableId_ != nullptr;};
    void deleteDestinationRouteTableId() { this->destinationRouteTableId_ = nullptr;};
    inline const vector<string> & destinationRouteTableId() const { DARABONBA_PTR_GET_CONST(destinationRouteTableId_, vector<string>) };
    inline vector<string> destinationRouteTableId() { DARABONBA_PTR_GET(destinationRouteTableId_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds& setDestinationRouteTableId(const vector<string> & destinationRouteTableId) { DARABONBA_PTR_SET_VALUE(destinationRouteTableId_, destinationRouteTableId) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRouteTableIds& setDestinationRouteTableId(vector<string> && destinationRouteTableId) { DARABONBA_PTR_SET_RVALUE(destinationRouteTableId_, destinationRouteTableId) };


  protected:
    std::shared_ptr<vector<string>> destinationRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
