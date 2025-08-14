// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONREGIONIDS_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRegionId_ != nullptr; };
    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline const vector<string> & destinationRegionId() const { DARABONBA_PTR_GET_CONST(destinationRegionId_, vector<string>) };
    inline vector<string> destinationRegionId() { DARABONBA_PTR_GET(destinationRegionId_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds& setDestinationRegionId(const vector<string> & destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationRegionIds& setDestinationRegionId(vector<string> && destinationRegionId) { DARABONBA_PTR_SET_RVALUE(destinationRegionId_, destinationRegionId) };


  protected:
    std::shared_ptr<vector<string>> destinationRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
