// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPDESTINATIONINSTANCEIDS_HPP_
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
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationInstanceId, destinationInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationInstanceId, destinationInstanceId_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationInstanceId_ != nullptr; };
    // destinationInstanceId Field Functions 
    bool hasDestinationInstanceId() const { return this->destinationInstanceId_ != nullptr;};
    void deleteDestinationInstanceId() { this->destinationInstanceId_ = nullptr;};
    inline const vector<string> & destinationInstanceId() const { DARABONBA_PTR_GET_CONST(destinationInstanceId_, vector<string>) };
    inline vector<string> destinationInstanceId() { DARABONBA_PTR_GET(destinationInstanceId_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds& setDestinationInstanceId(const vector<string> & destinationInstanceId) { DARABONBA_PTR_SET_VALUE(destinationInstanceId_, destinationInstanceId) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapDestinationInstanceIds& setDestinationInstanceId(vector<string> && destinationInstanceId) { DARABONBA_PTR_SET_RVALUE(destinationInstanceId_, destinationInstanceId) };


  protected:
    std::shared_ptr<vector<string>> destinationInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
