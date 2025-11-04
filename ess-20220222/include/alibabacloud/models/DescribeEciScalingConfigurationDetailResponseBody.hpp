// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeEciScalingConfigurationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingConfiguration, scalingConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfiguration, scalingConfiguration_);
    };
    DescribeEciScalingConfigurationDetailResponseBody() = default ;
    DescribeEciScalingConfigurationDetailResponseBody(const DescribeEciScalingConfigurationDetailResponseBody &) = default ;
    DescribeEciScalingConfigurationDetailResponseBody(DescribeEciScalingConfigurationDetailResponseBody &&) = default ;
    DescribeEciScalingConfigurationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationDetailResponseBody() = default ;
    DescribeEciScalingConfigurationDetailResponseBody& operator=(const DescribeEciScalingConfigurationDetailResponseBody &) = default ;
    DescribeEciScalingConfigurationDetailResponseBody& operator=(DescribeEciScalingConfigurationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->requestId_ == nullptr && return this->scalingConfiguration_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingConfiguration Field Functions 
    bool hasScalingConfiguration() const { return this->scalingConfiguration_ != nullptr;};
    void deleteScalingConfiguration() { this->scalingConfiguration_ = nullptr;};
    inline const DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration & scalingConfiguration() const { DARABONBA_PTR_GET_CONST(scalingConfiguration_, DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration scalingConfiguration() { DARABONBA_PTR_GET(scalingConfiguration_, DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration) };
    inline DescribeEciScalingConfigurationDetailResponseBody& setScalingConfiguration(const DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration & scalingConfiguration) { DARABONBA_PTR_SET_VALUE(scalingConfiguration_, scalingConfiguration) };
    inline DescribeEciScalingConfigurationDetailResponseBody& setScalingConfiguration(DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration && scalingConfiguration) { DARABONBA_PTR_SET_RVALUE(scalingConfiguration_, scalingConfiguration) };


  protected:
    // The YAML output of the scaling configuration.
    std::shared_ptr<string> output_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the scaling configuration.
    std::shared_ptr<DescribeEciScalingConfigurationDetailResponseBodyScalingConfiguration> scalingConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
