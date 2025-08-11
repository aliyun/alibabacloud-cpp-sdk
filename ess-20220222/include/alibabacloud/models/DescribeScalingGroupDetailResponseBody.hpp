// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScalingGroupDetailResponseBodyScalingGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingGroup, scalingGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroup, scalingGroup_);
    };
    DescribeScalingGroupDetailResponseBody() = default ;
    DescribeScalingGroupDetailResponseBody(const DescribeScalingGroupDetailResponseBody &) = default ;
    DescribeScalingGroupDetailResponseBody(DescribeScalingGroupDetailResponseBody &&) = default ;
    DescribeScalingGroupDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDetailResponseBody() = default ;
    DescribeScalingGroupDetailResponseBody& operator=(const DescribeScalingGroupDetailResponseBody &) = default ;
    DescribeScalingGroupDetailResponseBody& operator=(DescribeScalingGroupDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->requestId_ != nullptr && this->scalingGroup_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeScalingGroupDetailResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingGroupDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const DescribeScalingGroupDetailResponseBodyScalingGroup & scalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, DescribeScalingGroupDetailResponseBodyScalingGroup) };
    inline DescribeScalingGroupDetailResponseBodyScalingGroup scalingGroup() { DARABONBA_PTR_GET(scalingGroup_, DescribeScalingGroupDetailResponseBodyScalingGroup) };
    inline DescribeScalingGroupDetailResponseBody& setScalingGroup(const DescribeScalingGroupDetailResponseBodyScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline DescribeScalingGroupDetailResponseBody& setScalingGroup(DescribeScalingGroupDetailResponseBodyScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


  protected:
    // The output details of the scaling group of the Elastic Container Instance type. Currently, the output is displayed in a Kubernetes Deployment YAML file.
    std::shared_ptr<string> output_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scaling group.
    std::shared_ptr<DescribeScalingGroupDetailResponseBodyScalingGroup> scalingGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
