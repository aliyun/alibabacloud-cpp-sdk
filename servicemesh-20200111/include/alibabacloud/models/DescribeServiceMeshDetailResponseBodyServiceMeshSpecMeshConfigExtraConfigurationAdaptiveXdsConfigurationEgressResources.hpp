// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONADAPTIVEXDSCONFIGURATIONEGRESSRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATIONADAPTIVEXDSCONFIGURATIONEGRESSRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& obj) { 
      DARABONBA_ANY_TO_JSON(Limits, limits_);
      DARABONBA_ANY_TO_JSON(Requests, requests_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& obj) { 
      DARABONBA_ANY_FROM_JSON(Limits, limits_);
      DARABONBA_ANY_FROM_JSON(Requests, requests_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limits_ == nullptr
        && return this->requests_ == nullptr; };
    // limits Field Functions 
    bool hasLimits() const { return this->limits_ != nullptr;};
    void deleteLimits() { this->limits_ = nullptr;};
    inline     const Darabonba::Json & limits() const { DARABONBA_GET(limits_) };
    Darabonba::Json & limits() { DARABONBA_GET(limits_) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& setLimits(const Darabonba::Json & limits) { DARABONBA_SET_VALUE(limits_, limits) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& setLimits(Darabonba::Json & limits) { DARABONBA_SET_RVALUE(limits_, limits) };


    // requests Field Functions 
    bool hasRequests() const { return this->requests_ != nullptr;};
    void deleteRequests() { this->requests_ = nullptr;};
    inline     const Darabonba::Json & requests() const { DARABONBA_GET(requests_) };
    Darabonba::Json & requests() { DARABONBA_GET(requests_) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& setRequests(const Darabonba::Json & requests) { DARABONBA_SET_VALUE(requests_, requests) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfigurationEgressResources& setRequests(Darabonba::Json & requests) { DARABONBA_SET_RVALUE(requests_, requests) };


  protected:
    // The resources that are available to the egress gateway.
    Darabonba::Json limits_ = nullptr;
    // The resources that are requested by the egress gateway.
    Darabonba::Json requests_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
