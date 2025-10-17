// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONESAVAILABLESPOTZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONESAVAILABLESPOTZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableSpotResources, availableSpotResources_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableSpotResources, availableSpotResources_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone(const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone(DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone &&) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& operator=(const DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& operator=(DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableSpotResources_ == nullptr
        && return this->zoneId_ == nullptr; };
    // availableSpotResources Field Functions 
    bool hasAvailableSpotResources() const { return this->availableSpotResources_ != nullptr;};
    void deleteAvailableSpotResources() { this->availableSpotResources_ = nullptr;};
    inline const Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources & availableSpotResources() const { DARABONBA_PTR_GET_CONST(availableSpotResources_, Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources) };
    inline Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources availableSpotResources() { DARABONBA_PTR_GET(availableSpotResources_, Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& setAvailableSpotResources(const Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources & availableSpotResources) { DARABONBA_PTR_SET_VALUE(availableSpotResources_, availableSpotResources) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& setAvailableSpotResources(Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources && availableSpotResources) { DARABONBA_PTR_SET_RVALUE(availableSpotResources_, availableSpotResources) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Details about spot instances in the previous 30 days, including the release rate of spot instances and percentages of average spot instance prices relative to pay-as-you-go instance prices.
    std::shared_ptr<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZoneAvailableSpotResources> availableSpotResources_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
