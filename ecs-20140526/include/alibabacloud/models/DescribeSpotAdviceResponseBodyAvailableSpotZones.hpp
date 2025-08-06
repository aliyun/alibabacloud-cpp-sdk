// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODYAVAILABLESPOTZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotAdviceResponseBodyAvailableSpotZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceResponseBodyAvailableSpotZones& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableSpotZone, availableSpotZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceResponseBodyAvailableSpotZones& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableSpotZone, availableSpotZone_);
    };
    DescribeSpotAdviceResponseBodyAvailableSpotZones() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZones(const DescribeSpotAdviceResponseBodyAvailableSpotZones &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZones(DescribeSpotAdviceResponseBodyAvailableSpotZones &&) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceResponseBodyAvailableSpotZones() = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZones& operator=(const DescribeSpotAdviceResponseBodyAvailableSpotZones &) = default ;
    DescribeSpotAdviceResponseBodyAvailableSpotZones& operator=(DescribeSpotAdviceResponseBodyAvailableSpotZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableSpotZone_ != nullptr; };
    // availableSpotZone Field Functions 
    bool hasAvailableSpotZone() const { return this->availableSpotZone_ != nullptr;};
    void deleteAvailableSpotZone() { this->availableSpotZone_ = nullptr;};
    inline const vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone> & availableSpotZone() const { DARABONBA_PTR_GET_CONST(availableSpotZone_, vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone>) };
    inline vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone> availableSpotZone() { DARABONBA_PTR_GET(availableSpotZone_, vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone>) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZones& setAvailableSpotZone(const vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone> & availableSpotZone) { DARABONBA_PTR_SET_VALUE(availableSpotZone_, availableSpotZone) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZones& setAvailableSpotZone(vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone> && availableSpotZone) { DARABONBA_PTR_SET_RVALUE(availableSpotZone_, availableSpotZone) };


  protected:
    std::shared_ptr<vector<Models::DescribeSpotAdviceResponseBodyAvailableSpotZonesAvailableSpotZone>> availableSpotZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
