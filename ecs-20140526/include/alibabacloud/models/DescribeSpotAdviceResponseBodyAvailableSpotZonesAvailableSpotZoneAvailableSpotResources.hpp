// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONESAVAILABLESPOTZONEAVAILABLESPOTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONESAVAILABLESPOTZONEAVAILABLESPOTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableSpotResource, availableSpotResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableSpotResource, availableSpotResource_);
    };
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources(const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources(DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources &&) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources& operator=(const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources& operator=(DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableSpotResource_ == nullptr; };
    // availableSpotResource Field Functions 
    bool hasAvailableSpotResource() const { return this->availableSpotResource_ != nullptr;};
    void deleteAvailableSpotResource() { this->availableSpotResource_ = nullptr;};
    inline const vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource> & availableSpotResource() const { DARABONBA_PTR_GET_CONST(availableSpotResource_, vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource>) };
    inline vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource> availableSpotResource() { DARABONBA_PTR_GET(availableSpotResource_, vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource>) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources& setAvailableSpotResource(const vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource> & availableSpotResource) { DARABONBA_PTR_SET_VALUE(availableSpotResource_, availableSpotResource) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources& setAvailableSpotResource(vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource> && availableSpotResource) { DARABONBA_PTR_SET_RVALUE(availableSpotResource_, availableSpotResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResourcesAvailableSpotResource>> availableSpotResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
