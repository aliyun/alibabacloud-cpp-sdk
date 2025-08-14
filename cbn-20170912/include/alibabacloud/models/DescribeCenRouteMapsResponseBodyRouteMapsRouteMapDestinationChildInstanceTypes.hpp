// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONCHILDINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONCHILDINSTANCETYPES_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationChildInstanceType, destinationChildInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationChildInstanceType, destinationChildInstanceType_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationChildInstanceType_ != nullptr; };
    // destinationChildInstanceType Field Functions 
    bool hasDestinationChildInstanceType() const { return this->destinationChildInstanceType_ != nullptr;};
    void deleteDestinationChildInstanceType() { this->destinationChildInstanceType_ = nullptr;};
    inline const vector<string> & destinationChildInstanceType() const { DARABONBA_PTR_GET_CONST(destinationChildInstanceType_, vector<string>) };
    inline vector<string> destinationChildInstanceType() { DARABONBA_PTR_GET(destinationChildInstanceType_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes& setDestinationChildInstanceType(const vector<string> & destinationChildInstanceType) { DARABONBA_PTR_SET_VALUE(destinationChildInstanceType_, destinationChildInstanceType) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationChildInstanceTypes& setDestinationChildInstanceType(vector<string> && destinationChildInstanceType) { DARABONBA_PTR_SET_RVALUE(destinationChildInstanceType_, destinationChildInstanceType) };


  protected:
    std::shared_ptr<vector<string>> destinationChildInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
