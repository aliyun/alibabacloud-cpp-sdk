// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSpotAdviceResponseBodyAvailableSpotZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotAdviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableSpotZones, availableSpotZones_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableSpotZones, availableSpotZones_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSpotAdviceResponseBody() = default ;
    DescribeSpotAdviceResponseBody(const DescribeSpotAdviceResponseBody &) = default ;
    DescribeSpotAdviceResponseBody(DescribeSpotAdviceResponseBody &&) = default ;
    DescribeSpotAdviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceResponseBody() = default ;
    DescribeSpotAdviceResponseBody& operator=(const DescribeSpotAdviceResponseBody &) = default ;
    DescribeSpotAdviceResponseBody& operator=(DescribeSpotAdviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableSpotZones_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr; };
    // availableSpotZones Field Functions 
    bool hasAvailableSpotZones() const { return this->availableSpotZones_ != nullptr;};
    void deleteAvailableSpotZones() { this->availableSpotZones_ = nullptr;};
    inline const DescribeSpotAdviceResponseBodyAvailableSpotZones & availableSpotZones() const { DARABONBA_PTR_GET_CONST(availableSpotZones_, DescribeSpotAdviceResponseBodyAvailableSpotZones) };
    inline DescribeSpotAdviceResponseBodyAvailableSpotZones availableSpotZones() { DARABONBA_PTR_GET(availableSpotZones_, DescribeSpotAdviceResponseBodyAvailableSpotZones) };
    inline DescribeSpotAdviceResponseBody& setAvailableSpotZones(const DescribeSpotAdviceResponseBodyAvailableSpotZones & availableSpotZones) { DARABONBA_PTR_SET_VALUE(availableSpotZones_, availableSpotZones) };
    inline DescribeSpotAdviceResponseBody& setAvailableSpotZones(DescribeSpotAdviceResponseBodyAvailableSpotZones && availableSpotZones) { DARABONBA_PTR_SET_RVALUE(availableSpotZones_, availableSpotZones) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSpotAdviceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpotAdviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about spot instances in the zones of the specified region.
    // 
    // >  The return values are sorted based on the historical percentages of average spot instance prices relative to pay-as-you-go instance prices for instance types.
    std::shared_ptr<DescribeSpotAdviceResponseBodyAvailableSpotZones> availableSpotZones_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
