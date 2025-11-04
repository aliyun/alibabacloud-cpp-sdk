// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSSECURITYOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSSECURITYOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidentialComputingMode, confidentialComputingMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidentialComputingMode, confidentialComputingMode_);
    };
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions(DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions &&) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions& operator=(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions& operator=(DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidentialComputingMode_ == nullptr; };
    // confidentialComputingMode Field Functions 
    bool hasConfidentialComputingMode() const { return this->confidentialComputingMode_ != nullptr;};
    void deleteConfidentialComputingMode() { this->confidentialComputingMode_ = nullptr;};
    inline string confidentialComputingMode() const { DARABONBA_PTR_GET_DEFAULT(confidentialComputingMode_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions& setConfidentialComputingMode(string confidentialComputingMode) { DARABONBA_PTR_SET_VALUE(confidentialComputingMode_, confidentialComputingMode) };


  protected:
    std::shared_ptr<string> confidentialComputingMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
