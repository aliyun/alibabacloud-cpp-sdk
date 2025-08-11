// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DescribeScalingGroupDetailRequest() = default ;
    DescribeScalingGroupDetailRequest(const DescribeScalingGroupDetailRequest &) = default ;
    DescribeScalingGroupDetailRequest(DescribeScalingGroupDetailRequest &&) = default ;
    DescribeScalingGroupDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDetailRequest() = default ;
    DescribeScalingGroupDetailRequest& operator=(const DescribeScalingGroupDetailRequest &) = default ;
    DescribeScalingGroupDetailRequest& operator=(DescribeScalingGroupDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputFormat_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->scalingGroupId_ != nullptr; };
    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline DescribeScalingGroupDetailRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingGroupDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingGroupDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingGroupDetailRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The output format. Set the value to yaml.
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group. For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
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
