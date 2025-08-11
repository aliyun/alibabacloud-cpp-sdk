// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDIAGNOSEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDiagnoseDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDiagnoseDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDiagnoseDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DescribeScalingGroupDiagnoseDetailsRequest() = default ;
    DescribeScalingGroupDiagnoseDetailsRequest(const DescribeScalingGroupDiagnoseDetailsRequest &) = default ;
    DescribeScalingGroupDiagnoseDetailsRequest(DescribeScalingGroupDiagnoseDetailsRequest &&) = default ;
    DescribeScalingGroupDiagnoseDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDiagnoseDetailsRequest() = default ;
    DescribeScalingGroupDiagnoseDetailsRequest& operator=(const DescribeScalingGroupDiagnoseDetailsRequest &) = default ;
    DescribeScalingGroupDiagnoseDetailsRequest& operator=(DescribeScalingGroupDiagnoseDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->scalingGroupId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingGroupDiagnoseDetailsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingGroupDiagnoseDetailsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The ID of the region to which the scaling group belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
